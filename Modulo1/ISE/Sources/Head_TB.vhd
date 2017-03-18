-- TestBench Template 

  LIBRARY ieee;
  USE ieee.std_logic_1164.ALL;
  USE ieee.numeric_std.ALL;

  ENTITY testbench IS
  END testbench;

  ARCHITECTURE behavior OF testbench IS 
	
	-- Inputs
	SIGNAL CP, D : STD_LOGIC := '0';
	
	-- Signals
--	CONSTANT td1, td2, td3, td4, td5, td6 : time := 2000ps;
--	SIGNAL s1, s2, s3, s4, s5, s6 :  std_logic;
	
	--Outputs
--   SIGNAL  Q, Qn:  std_logic_vector(3 downto 0);

  BEGIN

     tb : PROCESS
     BEGIN
		
--			s1 <= NOT(s2 AND D) after td1;
--			s2 <= NOT(CP AND s1 AND s3) after td2;
--			s3 <= NOT(CP AND s4) after td3;
--			s4 <= NOT(s1 AND s3) after td4;
--			s5 <= NOT(s3 AND s6) after td5;
--			s6 <= NOT(s5 AND s2) after td6;
			D <= --'0';--, 
			'1' after 100ns;
			CP <= --'0';--, 
			'1' after 100ns;

     END PROCESS tb;
  --  End Test Bench 

  END;
