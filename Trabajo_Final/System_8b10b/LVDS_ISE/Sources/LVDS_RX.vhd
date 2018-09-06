library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_LVDS_RX_Decod is
	 Port ( 
		Clk 		: in  STD_LOGIC;
		RST		: in  STD_LOGIC;
	 	LVDS_IN 	: in  STD_LOGIC;
		Data_Out	: out STD_LOGIC_VECTOR(63 downto 0);
		Ready		: out STD_LOGIC;
		SeisCeros: out STD_LOGIC;
		SeisUnos : out STD_LOGIC
			 );        
end En_LVDS_RX_Decod;

architecture Arq_LVDS_RX_Decod of En_LVDS_RX_Decod is

	signal SumCheck	: unsigned(7 downto 0);
	signal Dec_10b_In	: STD_LOGIC_VECTOR( 9 downto 0);
	signal Dec_8b_Out	: STD_LOGIC_VECTOR( 7 downto 0);
	signal sData_Out	: STD_LOGIC_VECTOR(63 downto 0);
	signal Count_bit		: NATURAL;
	signal Count_byte	: NATURAL;
	signal DnK_Dec		: STD_LOGIC;
	signal snRD_Dec		: STD_LOGIC;
	signal nRD_Dec		: STD_LOGIC;
	signal Error_Dec		: STD_LOGIC;
	signal Error			: STD_LOGIC;
	signal Init				: STD_LOGIC;
begin

	Dec_10b_In	<= Dec_10b_In(8 downto 0) & LVDS_IN when rising_edge(CLK);
	
	SeisCeros	<= '1' when Dec_10b_In(Dec_10b_In'high downto Dec_10b_In'high - 5) = "000000" else '0';
	SeisUnos		<= '1' when Dec_10b_In(Dec_10b_In'high downto Dec_10b_In'high - 5) = "111111" else '0';
	
    Ins_Dec: entity work.En_Dec_8b10b(Arq_Dec_8b10b)
    port map(
        Dato_In  	=> Dec_10b_In,
        DnK      	=> DnK_Dec,
        nRD      	=> snRD_Dec,
        Dato_Out => Dec_8b_Out,
        Error    	=> Error_Dec
    );
			  
	LVDS_Acquire: process (Clk)
	begin
		if rising_edge (Clk) then
			if RST = '1' then
				Init 			<= '0';
				nRD_Dec		<= '0';
				Count_bit	<= 1;
				Count_byte	<= 1;
				SumCheck	<= to_unsigned(0,SumCheck'length);
				Data_Out		<= (others=>'0');
			else 
				Ready <= '0';
				
				if Init = '0' and (Dec_8b_Out = "10111100" or Dec_8b_Out = "01011100") and DnK_Dec = '0' and Error_Dec = '0' then
					Init 				<= '1';
					Count_bit 	<= 1;
					Count_byte	<= 1;
					SumCheck	<= to_unsigned(0,SumCheck'length);
				end if;
				
				if Init = '1' then
					if Count_bit = 8 and Count_Byte = 10 then
						Init	<= '0';
					elsif Count_bit = 10 then
						Count_bit 	<= 1;
						Count_byte	<= Count_byte + 1;
						if Count_byte = 9  then
							if SumCheck = unsigned(Dec_8b_Out) then
								Data_Out	<= sData_Out;
								Ready 		<= '1';
							end if;
						else
							Error <= Error_Dec;
							nRD_Dec <= snRD_Dec;
							if DnK_Dec = '1' and Error_Dec = '0' then 
								sData_Out 	<= sData_Out(sData_Out'high - 8 downto 0) & Dec_8b_Out;
							else
								Init 				<= '0';
							end if;
							SumCheck		<= SumCheck + unsigned(Dec_8b_Out);
						end if;
					else
						Count_bit 	<= Count_bit + 1;
					end if;
				end if;
					-- La trama queda como : Start[3] + Dato[65] + Unused[9] + Paridad[1] + Stop[2] = 80 bits
					-- 3 de Start -> Acá le agrego 5 y genero un Comma detectable
					-- 65 de Data -> debería sacar uno de acá y tirarlo para el grupo del final
					-- 9 sin usar -> acá me quedan solo 4
					-- 1 paridad
					-- 2 stop -> son dos '0'
					-- 80 bits

					-- K.28.5 creo que lo voy a usar para iniciar
					-- 10111100

					-- Si arranco con eso después tendŕe que recibir 90 bits más, los cuales
					-- podrían ir con algún checksum en los últimos 10 bits, con lo que me quedan
					-- para datos 80 bits, es decir, 64 bits de datos, osea que definitivamente
					-- tengo que sacar uno de datos, lo que creo que no es tan grave, de esta manera
					-- todo parece ser bastante simple			

			end if;
		end if;
	end process;	
end Arq_LVDS_RX_Decod;