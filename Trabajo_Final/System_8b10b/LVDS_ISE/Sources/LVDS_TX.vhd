library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_LVDS_TX is
	 Port ( 
		Clk 		: in  STD_LOGIC;
      Data_A 	: in  STD_LOGIC_VECTOR(63 downto 0);
		ResetTX	: in  STD_LOGIC;
	 	LVDSout 	: out STD_LOGIC;
		Next_Data: out STD_LOGIC := '0'
			 );        
end En_LVDS_TX;

architecture Arq_LVDS_TX of En_LVDS_TX is

	signal DnK_Cod		: STD_LOGIC;
	signal Cod_8b_In	: STD_LOGIC_VECTOR( 7 downto 0);
	signal Cod_10b_Out: STD_LOGIC_VECTOR( 9 downto 0);
	signal Buff_10b	: STD_LOGIC_VECTOR( 9 downto 0);
	signal Error_Cod	: STD_LOGIC;
	signal Index		: NATURAL;
	signal Count		: NATURAL;
	signal Buff_Data	: STD_LOGIC_VECTOR(63 downto 0);
	signal SumCheck	: unsigned(7 downto 0);
	
begin
-- Creo que debería recibir el dato comop siempre acá y manejar todo acá adentro,
-- más que nada para no andar dando vuelta con los flags y poder calcular el 
-- sumcheck on the fly, creo que es la mejor opción

    Ins_Cod: entity work.En_Cod_8b10b(Arq_Cod_8b10b)
    port map(
        Dato_In  => Cod_8b_In,
        DnK      => DnK_Cod,
        nRD      => '0',--nRD_Cod,
        Dato_Out => Cod_10b_Out,
        Error    => Error_Cod
    );

	LVDS_Out: process (Clk)
	begin
		if rising_edge (Clk) then
			if ResetTX = '1' then
				DnK_Cod		<= '0';
				Cod_8b_In	<= "10111100"; -- K.28.5
				Buff_10b		<= Cod_10b_Out; -- K.28.5 -- Con esta aranca dsp de cada reset, podría poner otra trama diferente
				Index			<= 9;
				Count			<= 0;
				Next_Data	<= '0';
				SumCheck		<= to_unsigned(0,SumCheck'length);
			else 
				Next_Data	<= '0';
				LVDSout 	<= Buff_10b(Index);		-- Out = first start bit
				Index		<= Index - 1;
				-- Ver si count va para arriba o para abajo, ojo con los indices
				
				if index = 1 then
					Count	<= Count + 1;
					if Count = 0 then -- Se está mandando el último de 10
						DnK_Cod		<= '0';
						Cod_8b_In	<= "10111100"; -- K.28.5
						Buff_Data	<= Data_A;
						SumCheck		<= to_unsigned(0,SumCheck'length);
					elsif Count = 9 then
						DnK_Cod		<= '1';
						Cod_8b_In 	<= STD_LOGIC_VECTOR(SumCheck);
						Next_Data	<= '1';
						Count 		<= 0;						
					else
						DnK_Cod		<= '1';
						Cod_8b_In 	<= Buff_Data(Buff_Data'high - (Count-1)*8 downto Buff_Data'high - (Count-1)*8 - 7);
						SumCheck		<= SumCheck + unsigned(Buff_Data(Buff_Data'high - (Count-1)*8 downto Buff_Data'high - (Count-1)*8 - 7));
					end if;
				elsif index = 0 then
					Buff_10b <= Cod_10b_Out;
					Index		<= 9;
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
end Arq_LVDS_TX;