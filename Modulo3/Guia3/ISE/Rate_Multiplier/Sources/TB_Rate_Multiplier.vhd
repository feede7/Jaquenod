LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_LFSR IS
	generic ( K : NATURAL := 5);
END TB_LFSR;
 
ARCHITECTURE behavior OF TB_LFSR IS 
	signal CLK_IN 	: std_logic := '0';
	signal Reset 	: std_logic;
	signal CLK_OUT : std_logic := '0';
	signal Q_LFSR	: std_logic_vector(K downto 1);

BEGIN
 
   uut: entity work.En_Rate_Multiplier(Arq_Rate_Multiplier) 
	generic map ( M => K, N => 31)
	PORT MAP (
          CLK_IN 	=> CLK_IN,
          Reset	=> Reset,
          CLK_OUT	=> CLK_OUT,
			 Q_LFSR	=> Q_LFSR
        );

	Reset 	<= '1', '0' after 100 ns;
	CLK_IN   <= NOT CLK_IN after 100 ps;
END;