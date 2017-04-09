--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:43:28 04/06/2017
-- Design Name:   
-- Module Name:   /home/fedeserver/Documents/Jaquenod/GIT/Modulo2/ISE/Actividad_2_2_3/Sources/TB_LFSR.vhd
-- Project Name:  Actividad_2_2_1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: En_LFSR
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
 
ENTITY TB_LFSR IS
	generic ( K : NATURAL := 20);

END TB_LFSR;
 
ARCHITECTURE behavior OF TB_LFSR IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
 	--Outputs
   signal ocasiones : std_logic_vector(10 downto 1);
	signal CLK_TB : std_logic := '0';
	signal Reset : std_logic;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.En_LFSR(Arq_LFSR) 
	generic map ( N => K)
	PORT MAP (
          ocasiones 	 => ocasiones,
          CLK			 => CLK_TB,
          Reset	 	 => Reset
        );

	Reset 	<= '1', '0' after 100 ns;
	CLK_TB   <= NOT CLK_TB after 1 ps;
END;
