--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:29:43 03/21/2017
-- Design Name:   
-- Module Name:   /home/fede/GIT/Jaquenod/Modulo1/ISE/Actividad_1_1_3/Sources/TB_SincroAndEdge.vhd
-- Project Name:  Actividad_1_1_3
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: En_SincroAndEdge
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
 
ENTITY TB_SincroAndEdge IS
END TB_SincroAndEdge;
 
ARCHITECTURE behavior OF TB_SincroAndEdge IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_SincroAndEdge
    PORT(
         CLK 	: IN  std_logic;
         D 		: IN  std_logic;
         D_Reg : OUT  std_logic;
         Edge 	: OUT  std_logic
        );
    END COMPONENT;

   --Inputs
   signal CLK_TB 	: std_logic := '0';
   signal D 		: std_logic := '0';

 	--Outputs
   signal D_Reg 	: std_logic;
   signal Edge 	: std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_SincroAndEdge PORT MAP (
          CLK 		=> CLK_TB,
          D 		=> D,
          D_Reg 	=> D_Reg,
          Edge 	=> Edge
        );

	CLK_TB <= not CLK_TB after 10ns;

	D	<= '0', '1' after 200ns, '0' after 300ns;

END;
