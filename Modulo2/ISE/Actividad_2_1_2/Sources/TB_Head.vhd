--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:57:25 03/23/2017
-- Design Name:   
-- Module Name:   /home/fede/GIT/Jaquenod/Modulo2/ISE/Actividad_2_1_2/Sources/TB_Head.vhd
-- Project Name:  Actividad_2_1_2
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
 
ENTITY TB_Head IS
END TB_Head;
 
ARCHITECTURE behavior OF TB_Head IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_Head
    PORT(
         CLK 			: IN  std_logic;
         Enable 		: IN  std_logic;
         UpNotDown 	: IN  std_logic;
         Reset 		: IN  std_logic;
         Q 				: OUT  std_logic_vector(4 downto 1)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_TB 		: std_logic := '0';
   signal Enable 		: std_logic := '0';
   signal UpNotDown 	: std_logic := '0';
   signal Reset 		: std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(4 downto 1);

BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Head PORT MAP (
          CLK 			=> CLK_TB,
          Enable 		=> Enable,
          UpNotDown 	=> UpNotDown,
          Reset 		=> Reset,
          Q 			=> Q
        );

	CLK_TB 		<= not CLK_TB after 100ps;

	Reset			<= '1', '0' after 1000ps;
	Enable		<= '0', '1' after 1500ps;
	UpNotDown 	<= '1', '0' after 4000ps, '1' after 8000ps;
	
END;
