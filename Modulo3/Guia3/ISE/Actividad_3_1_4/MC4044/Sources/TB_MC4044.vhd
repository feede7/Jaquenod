LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_MC4044 IS
END TB_MC4044;
 
ARCHITECTURE behavior OF TB_MC4044 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_MC4044
    PORT(
         R 		: IN   std_logic;
         V 		: IN   std_logic;
         U1 	: OUT  std_logic;
         D1 	: OUT  std_logic;
         State	: OUT  STD_LOGIC_VECTOR(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal R1,R2 : std_logic := '0';
   signal V1,V2 : std_logic := '0';
   signal R3 : std_logic := '1';
   signal V3 : std_logic := '1';

 	--Outputs
   signal U11,U12,U13 : std_logic;
   signal D11,D12,D13 : std_logic;
   signal State1,State2,State3 : STD_LOGIC_VECTOR(3 downto 0);
	
BEGIN
 
   uut1: En_MC4044 PORT MAP (
          R => R1,
          V => V1,
          U1 => U11,
          D1 => D11,
          State => State1
        );
		  
   uut2: En_MC4044 PORT MAP (
          R => R2,
          V => V2,
          U1 => U12,
          D1 => D12,
          State => State2
        ); 
   uut3: En_MC4044 PORT MAP (
          R => R3,
          V => V3,
          U1 => U13,
          D1 => D13,
          State => State3
        );

-- Caso 1
	R1 <= '0', '1' after 1 ns, '0' after 10 ns, '1' after 20 ns, '0' after 30 ns, '1' after 40 ns, '0' after 50 ns, '1' after 60 ns, '0' after 70 ns, '1' after 80 ns, '0' after 90 ns, '1' after 100 ns, '0' after 110 ns, '1' after 120 ns;
	V1 <= '0', '1' after 4 ns, '0' after 13 ns, '1' after 23 ns, '0' after 33 ns, '1' after 43 ns, '0' after 53 ns, '1' after 63 ns, '0' after 73 ns, '1' after 83 ns, '0' after 93 ns, '1' after 103 ns, '0' after 113 ns, '1' after 123 ns; 

-- Caso 2
	V2 <= '0', '1' after 1 ns, '0' after 10 ns, '1' after 20 ns, '0' after 30 ns, '1' after 40 ns, '0' after 50 ns, '1' after 60 ns, '0' after 70 ns, '1' after 80 ns, '0' after 90 ns, '1' after 100 ns, '0' after 110 ns, '1' after 120 ns;
	R2 <= '0', '1' after 4 ns, '0' after 13 ns, '1' after 23 ns, '0' after 33 ns, '1' after 43 ns, '0' after 53 ns, '1' after 63 ns, '0' after 73 ns, '1' after 83 ns, '0' after 93 ns, '1' after 103 ns, '0' after 113 ns, '1' after 123 ns; 

-- Caso 3
	R3 <= not R3 after 4 ns;
	V3 <= not V3 after 6 ns;
	
END;