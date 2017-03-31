--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:05:11 03/29/2017
-- Design Name:   
-- Module Name:   /home/fede/GIT/Jaquenod/Modulo2/ISE/Actividad_2_2_1/Sources/TB_LFSR.vhd
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
END TB_LFSR;
 
ARCHITECTURE behavior OF TB_LFSR IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_LFSR
    PORT(
         cuentas : OUT  std_logic_vector(7 downto 1)
        );
    END COMPONENT;
    

 	--Outputs
   signal cuentas : std_logic_vector(7 downto 1);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_LFSR PORT MAP (
          cuentas => cuentas
        );

END;
