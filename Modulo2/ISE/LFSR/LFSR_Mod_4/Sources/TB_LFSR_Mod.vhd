--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   19:43:50 04/06/2017
-- Design Name:   
-- Module Name:   /home/fede/Desktop/LFSR_Mod/Sources/TB_LFSR_Mod.vhd
-- Project Name:  LFSR_Mod
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: En_LFSR_Mod
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
 
ENTITY TB_LFSR_Mod IS
	generic ( H : NATURAL := 20);
END TB_LFSR_Mod;
 
ARCHITECTURE behavior OF TB_LFSR_Mod IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_LFSR_Mod
    PORT(
         modulo : OUT  std_logic;
         etapas : OUT  std_logic
        );
    END COMPONENT;
    

 	--Outputs
   signal modulo : std_logic_vector(H downto 1);
   signal etapas : std_logic_vector(H downto 1);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.En_LFSR_Mod(Arq_LFSR_Mod)
	GENERIC MAP ( N => H)
	PORT MAP (
          modulo => modulo,
          etapas => etapas
        );
END;
