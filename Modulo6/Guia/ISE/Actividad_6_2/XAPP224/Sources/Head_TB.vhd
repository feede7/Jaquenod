--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   08:17:15 06/30/2017
-- Design Name:   
-- Module Name:   /home/fede/Documents/Jaquenod/GIT/Modulo6/Guia/ISE/Actividad_6_2/XAPP224/Sources/Head_TB.vhd
-- Project Name:  XAPP224
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: En_Head
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Head_TB IS
END Head_TB;
 
ARCHITECTURE behavior OF Head_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_Head
    PORT(
         CLK : IN  std_logic;
         Data_In : IN  std_logic;
			Data_Out_Instant: OUT  std_logic;
         Data_Out : OUT  std_logic_vector(7 downto 0);
         Start : OUT  std_logic;
         Rdy : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLKA : std_logic := '0';
   signal CLKB : std_logic := '0';
   signal Data_In : std_logic := '0';

 	--Outputs
   signal Data_Out : std_logic_vector(7 downto 0);
   signal Rdy : std_logic;

   -- Clock period definitions
   constant CLKA_period : time := 26000 ps;
   constant CLKB_period : time := 25000 ps;
 
 	constant Send: STD_LOGIC_VECTOR(59 downto 0) := "010111111011010010111111010010010111111010010011111111010110";
	signal DataToSend : STD_LOGIC_VECTOR(Send'high downto 0) := Send;--"0000000000000000000100111111000000011111111111111100000000000111110000000000000001110111111100000000";
	signal Data_Rec	: STD_LOGIC_VECTOR(Send'high downto 0) := (others => '0');
	signal Found		: STD_LOGIC;
	signal Reset		: STD_LOGIC;
	signal Data_Out_Instant	: STD_LOGIC;
	signal Start	: STD_LOGIC;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Head PORT MAP (
          CLK => CLKA,
          Data_In => Data_In,
			 Data_Out_Instant => Data_Out_Instant,
          Data_Out => Data_Out,
			 Start => Start,
          Rdy => Rdy
        );

   -- Clock process definitions
   CLKA_process :process
   begin
		CLKA <= '0';
		wait for CLKA_period/2;
		CLKA <= '1';
		wait for CLKA_period/2;
   end process;

   -- Clock process definitions
   CLKB_process :process
   begin
		CLKB <= '0';
		wait for CLKB_period/2;
		CLKB <= '1';
		wait for CLKB_period/2;
   end process;
 
   Data_In <= DataToSend(DataToSend'high);

 	process(CLKB,Start)
 	begin
 		if Start = '0' then
 			DataToSend <= Send;
 		elsif rising_edge(CLKB) then
			DataToSend 	<= DataToSend(DataToSend'high-1 downto 0) & '0';
 		end if;
 	end process;

	process(CLKA)
	begin
		if rising_edge(CLKA) then
			if Rdy = '1' then
				Data_Rec <= Data_Rec(Data_Rec'high-8 downto 0) & Data_Out;
			end if;
		end if;
	end process;

	Found <= '1' when Data_Rec = Send else '0';

	Reset <= '1', '0' after 10000 ps;

END;