--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:20:02 07/15/2017
-- Design Name:   
-- Module Name:   /media/storage/Documents/GIT/Jaquenod/Modulo7/Guia/ISE/Actividad_7_2_1/PRNG/Sources/PRNG_TB.vhd
-- Project Name:  PRNG
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: En_PRNG_150
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
 
ENTITY PRNG_TB IS
END PRNG_TB;
 
ARCHITECTURE behavior OF PRNG_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_PRNG_150
    PORT(
         CLK : IN  std_logic;
         RST : IN  std_logic;
         RN : OUT  std_logic_vector(10 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';

 	--Outputs
   signal RN : std_logic_vector(10 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_PRNG_150 PORT MAP (
          CLK => CLK,
          RST => RST,
          RN => RN
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;

END;
