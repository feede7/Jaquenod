LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY System_TB IS
END System_TB;
 
ARCHITECTURE behavior OF System_TB IS 

   --Inputs
   signal CLKx1 : std_logic := '0';
   signal CLKx2 : std_logic := '0';
   signal CLKx4 : std_logic := '0';
   signal RST : std_logic := '0';
   signal Data_In : std_logic := '0';
   signal Data_In_Aux : std_logic := '0';

 	--Outputs
   signal Data_Out : std_logic;

   -- Clock period definitions
   constant CLKx1_period : time := 80 ns;
   constant CLKx2_period : time := 40 ns;
   constant CLKx4_period : time := 20 ns;
	
	-- Datos
	signal Dato : STD_LOGIC_VECTOR(15 downto 0) := "0111100110101010";
--	signal Dato : STD_LOGIC_VECTOR(15 downto 0) := "0000100110110101";
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   Inst_System: entity work.En_System(Arq_System)
	PORT MAP (
          CLKx2 		=> CLKx2,
          CLKx4 		=> CLKx4,
          RST 			=> RST,
          Data_In 	=> Dato(Dato'high),
          Data_Out 	=> Data_Out
        );

	Dato 		<= Dato when RST = '1' else Dato(Dato'high-1 downto 0) & '0' when rising_edge(CLKx1);
	Data_In_Aux 	<= Dato(Dato'high) when rising_edge(CLKx2);
	Data_In 			<= Data_In_Aux when rising_edge(CLKx2);
	RST 		<= '1', '0' after 20 ns;

   -- Clock process definitions
   CLKx1_process :process
   begin
		CLKx1 <= '0';
		wait for CLKx1_period/2;
		CLKx1 <= '1';
		wait for CLKx1_period/2;
   end process;
	
   CLKx2_process :process
   begin
		CLKx2 <= '0';
		wait for CLKx2_period/2;
		CLKx2 <= '1';
		wait for CLKx2_period/2;
   end process;
	
   CLKx4_process :process
   begin
		CLKx4 <= '0';
		wait for CLKx4_period/2;
		CLKx4 <= '1';
		wait for CLKx4_period/2;
   end process;
 
	


END;
