LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.numeric_std.ALL;
 
ENTITY TB_System IS
END TB_System;
 
ARCHITECTURE behavior OF TB_System IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
   --Inputs
   signal Data_In : std_logic := '0';
   signal Reloj : std_logic := '0';
   signal SndSync : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal EnaTx : std_logic := '0';
   signal Data_Out : std_logic := '0';
   -- No clocks detected in port list. Replace Reloj below with 
   -- appropriate port name 
 
   constant Reloj_period 	: time := 1000 ps;
   constant Reloj8x_period : time := 125 ps;
	
--	constant Send: STD_LOGIC_VECTOR(29 downto 0) := "000000000000000000010011111100";--0000011111111111111100000000000111110000000000000001110111111100000000";
--	constant Send: STD_LOGIC_VECTOR(29 downto 0) := "000000000000000000010011111100";--0000011111111111111100000000000111110000000000000001110111111100000000";
	constant Send: STD_LOGIC_VECTOR(14 downto 0) := "010111111010010";
	signal DataToSend : STD_LOGIC_VECTOR(Send'high downto 0) := Send;--"0000000000000000000100111111000000011111111111111100000000000111110000000000000001110111111100000000";
	signal AUX			: STD_LOGIC;
	
	signal count_data : unsigned(7 downto 0) := to_unsigned(0,8);
	signal TimeInit : NATURAL := 20;
 
BEGIN
   
	uut: entity work.En_Cod_Stuffing(Arq_Cod_Stuffing)
	PORT MAP ( Datos 		=> Data_In,
				  Reloj 		=> Reloj,
				  SndSync 	=> SndSync,
				  Reset	 	=> Reset,
				  EnaTx 		=> EnaTx,
				  DataOut 	=> Data_Out
			);

   -- Clock process definitions
   Reloj_process :process
   begin
		Reloj <= '0';
		wait for Reloj_period/2;
		Reloj <= '1';
		wait for Reloj_period/2;
   end process;

	Data_In <= DataToSend(DataToSend'high);

	process(Reloj,Reset)
	begin
		if Reset = '1' then
			SndSync <= '0';
			AUX <= '0';
			count_data <= to_unsigned(0,count_data'length);
		elsif rising_edge(Reloj) then
			SndSync <= '0';
			
			if EnaTx = '1' then
				if count_data = to_unsigned(DataToSend'length-1,count_data'length) then
					count_data <= to_unsigned(0,count_data'length);
					SndSync <= '1';
				else
					DataToSend <= DataToSend(DataToSend'high-1 downto 0) & '1';
					count_data <= count_data + to_unsigned(1,count_data'length);
				end if;
			end if;
		end if;
	end process;

	Reset <= '1', '0' after 12500 ps;
	
END;