--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   09:41:10 03/21/2017
-- Design Name:   
-- Module Name:   /home/fedeserver/Documents/Jaquenod/GIT/Modulo2/ISE/LFSR/TB_Head.vhd
-- Project Name:  LFSR
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
         CLK : IN  std_logic;
         RESET : IN  std_logic;
         Q : OUT  std_logic_vector(4 downto 1)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal RESET : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(4 downto 1);

   -- Clock period definitions
   constant CLK_period : time := 10 ps;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Head PORT MAP (
          CLK => CLK,
          RESET => RESET,
          Q => Q
        );

	RESET <= '1', '0' after 100ps;
		-- Clock process definitions
		CLK_process :process
		begin
			CLK <= '0';
			wait for CLK_period/2;
			CLK <= '1';
			wait for CLK_period/2;
		end process;
	 

END;
