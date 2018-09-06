library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL; -- Para pasar de std_Ulogic (un bit de un STD_LOGIC_VECTOR) a unsigned
--use IEEE.NUMERIC_STD.ALL;

entity En_LVDS_TX_Coded is
	 Port ( 
		Clk 		: in  STD_LOGIC;
      Data_A 	: in  STD_LOGIC_VECTOR(63 downto 0);
		ResetTX	: in  STD_LOGIC;
	 	LVDSout 	: out STD_LOGIC;
		Next_Data: out STD_LOGIC := '0'
			 );        
end En_LVDS_TX_Coded;

architecture Arq_LVDS_TX_Coded of En_LVDS_TX_Coded is

	signal DnK_Cod		: STD_LOGIC;
	signal nRD_Cod		: STD_LOGIC;
	signal Cod_8b_In	: STD_LOGIC_VECTOR( 7 downto 0);
	signal Cod_10b_Out_Mas: STD_LOGIC_VECTOR( 9 downto 0);
	signal Cod_10b_Out_Menos: STD_LOGIC_VECTOR( 9 downto 0);
	signal Buff_10b	: STD_LOGIC_VECTOR( 9 downto 0);
	signal Error_Cod	: STD_LOGIC;
	signal Index		: NATURAL;
	signal Count		: NATURAL;
	signal Buff_Data	: STD_LOGIC_VECTOR(63 downto 0);
	signal SumCheck	: unsigned(7 downto 0);

	signal Polarity	: integer range -20 to 20;
	signal Polarity_sign : std_logic;
	
begin
-- Creo que debería recibir el dato como siempre acá y manejar todo acá adentro,
-- más que nada para no andar dando vuelta con los flags y poder calcular el 
-- sumcheck on the fly, creo que es la mejor opción

    Ins_Cod_Menos: entity work.En_Cod_8b10b(Arq_Cod_8b10b)
    port map(
        Dato_In 	=> Cod_8b_In,
        DnK      	=> DnK_Cod,
        nRD     	=> '0',
        Dato_Out => Cod_10b_Out_Menos,
        Error    	=> open
    );

    Ins_Cod_Mas: entity work.En_Cod_8b10b(Arq_Cod_8b10b)
    port map(
        Dato_In  => Cod_8b_In,
        DnK      => DnK_Cod,
        nRD      => '1',
        Dato_Out => Cod_10b_Out_Mas,
        Error    => open
    );
	 
	LVDS_Out: process (Clk)
	begin
		if rising_edge (Clk) then
			if ResetTX = '1' then
				DnK_Cod		<= '0';
				Cod_8b_In	<= "01011100"; -- K.28.2 -- Indicación de que se recibió el Reset general 
				Buff_10b		<= Cod_10b_Out_Menos;
				Index			<= 9;
				Count			<= 0;
				Next_Data	<= '0';
				SumCheck		<= CONV_UNSIGNED(0,SumCheck'length);
				Polarity		<= 0; -- K.28.2 4 unos - 4 ceros
			else 
				Next_Data	<= '0';
				LVDSout 	<= Buff_10b(Index);
				Index		<= Index - 1;
				
				if index = 1 then
					Count	<= Count + 1;
					if Count = 0 then
						DnK_Cod		<= '0';
						Cod_8b_In	<= "10111100"; -- K.28.5
						Buff_Data	<= Data_A;
						SumCheck		<= CONV_UNSIGNED(0,SumCheck'length);
					elsif Count = 9 then
						DnK_Cod		<= '1';
						Cod_8b_In 	<= CONV_STD_LOGIC_VECTOR(SumCheck,SumCheck'length);
						Next_Data	<= '1';
						Count 		<= 0;						
					else
						DnK_Cod		<= '1';
						Cod_8b_In 	<= Buff_Data(Buff_Data'high - (Count-1)*8 downto Buff_Data'high - (Count-1)*8 - 7);
						SumCheck		<= SumCheck + unsigned(Buff_Data(Buff_Data'high - (Count-1)*8 downto Buff_Data'high - (Count-1)*8 - 7));
					end if;
				elsif index = 0 then
					if Polarity + (CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(9),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(8),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(7),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(6),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(5),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(4),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(3),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(2),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(1),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(0),1)))*2 - 10 < 0 then
						if Buff_10b(2 downto 0) = Cod_10b_Out_Menos(Cod_10b_Out_Menos'high downto Cod_10b_Out_Menos'high - 2) then
							Polarity <= Polarity + (CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(9),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(8),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(7),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(6),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(5),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(4),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(3),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(2),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(1),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(0),1)))*2 - 10;
							Buff_10b <= Cod_10b_Out_Mas;
							Polarity_sign <= '1';
						else
							Polarity <= Polarity + (CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(9),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(8),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(7),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(6),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(5),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(4),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(3),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(2),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(1),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(0),1)))*2 - 10;
							Buff_10b <= Cod_10b_Out_Menos;
							Polarity_sign <= '0';
						end if;
					else
						if Buff_10b(2 downto 0) = Cod_10b_Out_Mas(Cod_10b_Out_Mas'high downto Cod_10b_Out_Mas'high - 2) then					
							Polarity <= Polarity + (CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(9),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(8),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(7),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(6),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(5),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(4),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(3),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(2),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(1),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Menos(0),1)))*2 - 10;
							Buff_10b <= Cod_10b_Out_Menos;
							Polarity_sign <= '0';
						else
							Polarity <= Polarity + (CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(9),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(8),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(7),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(6),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(5),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(4),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(3),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(2),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(1),1)) + CONV_INTEGER(CONV_UNSIGNED(Cod_10b_Out_Mas(0),1)))*2 - 10;
							Buff_10b <= Cod_10b_Out_Mas;
							Polarity_sign <= '1';
						end if;
					end if;

					--Buff_10b <= Cod_10b_Out;
--					0000000000 -10
--					0000011111 0
--					0000111111 2
--					0000011111 0
--					0000011111 0
--					0000011111 0
--					1111111111 +10
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
-- "10111100"
-- A no ser que venga de un Reset, con lo cual arranco con K.28.2 ("01011100")
-- Si arranco con eso después tendŕe que recibir 90 bits más, los cuales
-- podrían ir con algún checksum en los últimos 10 bits, con lo que me quedan
-- para datos 80 bits, es decir, 64 bits de datos, osea que definitivamente
-- tengo que sacar uno de datos, lo que creo que no es tan grave, de esta manera
-- todo parece ser bastante simple			

			end if;
		end if;
	end process;	
end Arq_LVDS_TX_Coded;