--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:36:31 09/03/2017
-- Design Name:   
-- Module Name:   /home/fede/GIT/Jaquenod/Modulo8/Guia/ISE/Redundancia_Reloj/Sources/Head_TB.vhd
-- Project Name:  Redundancia_Reloj
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
         RST : IN  std_logic;
         OSC1 : IN  std_logic;
         OSC2 : IN  std_logic;
         O2Fault : OUT  std_logic;
         O1Fault : OUT  std_logic;
         OSC_OUT : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal RST : std_logic := '0';
   signal OSC1 : std_logic := '0';
   signal OSC2 : std_logic := '0';

 	--Outputs
   signal O2Fault : std_logic;
   signal O1Fault : std_logic;
   signal OSC_OUT : std_logic;
   signal RST_aux : std_logic;
   
	signal clk_aux_1 : std_logic := '0';
	signal clk_aux_2 : std_logic := '0';
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant OSC1_Period : time := 100 ns;
   constant OSC2_Period : time := 110 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Head PORT MAP (
          RST => RST,
          OSC1 => OSC1,
          OSC2 => OSC2,
          O2Fault => O2Fault,
          O1Fault => O1Fault,
          OSC_OUT => OSC_OUT
        );

   -- Clock process definitions
   aux1_process :process
   begin
		clk_aux_1 <= '0';
		wait for OSC1_Period/2;
		clk_aux_1 <= '1';
		wait for OSC1_Period/2;
   end process;
	
   aux2_process :process
   begin
		clk_aux_2 <= '0';
		wait for OSC2_Period/2;
		clk_aux_2 <= '1';
		wait for OSC2_Period/2;
   end process;

	OSC1 <= clk_aux_1 and RST_aux;
	OSC2 <= clk_aux_2;
	
	RST <= '1', '0' after 300 ns;
	RST_aux <= '1', '0' after 1500 ns;
END;
