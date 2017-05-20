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
   signal Reloj8x : std_logic := '0';
   signal SndSync : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal EnaTx : std_logic := '0';
   signal EnaRx : std_logic := '0';
   signal SyncRx : std_logic := '0';
   signal Data_Out : std_logic := '0';
   -- No clocks detected in port list. Replace Reloj below with
   -- appropriate port name

   constant Reloj_period 	: time := 2000 ps;
   constant Reloj8x_period : time := 250 ps;

--	constant Send: STD_LOGIC_VECTOR(29 downto 0) := "000000000000000000010011111100";--0000011111111111111100000000000111110000000000000001110111111100000000";
--	constant Send: STD_LOGIC_VECTOR(29 downto 0) := "000000000000000000010011111100";--0000011111111111111100000000000111110000000000000001110111111100000000";
--	constant Send: STD_LOGIC_VECTOR(29 downto 0) := "010111111010010010111111010010";
	constant Send: STD_LOGIC_VECTOR(59 downto 0) := "010111111010010010111111010010010111111010010011111111010010";
	signal DataToSend : STD_LOGIC_VECTOR(Send'high downto 0) := Send;--"0000000000000000000100111111000000011111111111111100000000000111110000000000000001110111111100000000";
	signal Data_Rec	: STD_LOGIC_VECTOR(Send'high downto 0) := (others => '0');
--	signal DataToSend : STD_LOGIC_VECTOR(11 downto 0) := "010111111010";
--	signal Data_Rec	: STD_LOGIC_VECTOR(11 downto 0) := (others => '0');
	signal Reloj_Rec	: STD_LOGIC;
	signal Found		: STD_LOGIC;
	signal AUX			: STD_LOGIC;
	signal Error			: STD_LOGIC;

	signal count_data : unsigned(7 downto 0) := to_unsigned(0,8);
	signal TimeInit : NATURAL := 20;
--	signal Reset_Reg : STD_LOGIC := '0';

BEGIN

	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.En_System(Arq_System)
	PORT MAP (
          Data_In => Data_In,
          Reloj 		=> Reloj,
          Reloj8x 	=> Reloj8x,
          SndSync 	=> SndSync,
          Reset 		=> Reset,
          EnaTx 		=> EnaTx,
          EnaRx 		=> EnaRx,
          SyncRx 		=> SyncRx,
          Data_Out 	=> Data_Out,
			 Reloj_Rec	=> Reloj_Rec,
			 Error		=> Error
        );

   -- Clock process definitions
   Reloj_process :process
   begin
		Reloj <= '0';
		wait for Reloj_period/2;
		Reloj <= '1';
		wait for Reloj_period/2;
   end process;

   -- Clock process definitions
   Reloj8x_process :process
   begin
		Reloj8x <= '1';
		wait for Reloj8x_period/2;
		Reloj8x <= '0';
		wait for Reloj8x_period/2;
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
					DataToSend <= Send;
 				else
 					DataToSend <= DataToSend(DataToSend'high-1 downto 0) & '0';
 					count_data <= count_data + to_unsigned(1,count_data'length);
 				end if;
 			end if;
 		end if;
 	end process;

--	process(Reloj_Rec)
	process(Reloj)
	begin
--		if rising_edge(Reloj_Rec) then
		if rising_edge(Reloj) then
			if SyncRx = '1' then
				Data_Rec <= "0000000000000" & Data_Rec(DataToSend'high downto 13);
			elsif EnaRx = '1' then
				Data_Rec <= Data_Rec(DataToSend'high-1 downto 0) & Data_Out;
			end if;
		end if;
	end process;

	Found <= '1' when  Data_Rec = Send else '0';

	Reset <= '1', '0' after 12500 ps;

END;
