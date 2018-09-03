--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   10:12:15 08/17/2017
-- Design Name:   
-- Module Name:   /home/fede/Documents/Jaquenod/GIT/Modulo7/Guia/ISE/Actividad_7_2_2/Cordic/Cordic.srcs/sim_1/new/Head_TB_ISE.vhd
-- Project Name:  cordic
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
USE ieee.numeric_std.ALL;
 
ENTITY Head_TB_ISE IS
END Head_TB_ISE;
 
ARCHITECTURE behavior OF Head_TB_ISE IS 
 
   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal ENA : std_logic := '0';
   signal RDY : std_logic := '0';
   signal RUN : NATURAL := 0;
   signal X0 : std_logic_vector(19 downto 0) := std_logic_vector(to_signed(-10000,20));
   signal Y0 : std_logic_vector(19 downto 0) := std_logic_vector(to_signed(10000,20));
   signal Z0 : std_logic_vector(19 downto 0) := std_logic_vector(to_signed(900+450,20));
   signal Z1 : std_logic_vector(19 downto 0) := std_logic_vector(to_signed(900+750,20));

 	--Outputs
   signal X1 : std_logic_vector(19 downto 0);
   signal Y1 : std_logic_vector(19 downto 0);
   signal salida : std_logic_vector(19 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.En_Head(Arq_Head)
	PORT MAP (
          CLK => CLK,
          RST => RST,
			 ENA => ENA,
          X0  => X0,
          Y0  => Y0,
          Z0  => Z0,
          Z1  => Z1,
          X1  => X1,
          Y1  => Y1,
          RDY => RDY,
			 RUN => RUN
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
	
	RST <= '1', '0' after 100 ns;
	ENA <= '0', '1' after 120 ns, '0' after 140 ns;

END;
