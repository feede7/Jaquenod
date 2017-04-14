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
         CLK_IN : IN  std_logic;
         SW : IN  std_logic;
         Q : OUT  std_logic_vector(5 downto 1);
         MC : OUT  std_logic;
         CLK_OUT : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal CLK_IN : std_logic := '0';

 	--Outputs
   signal Q : std_logic_vector(5 downto 1);
   signal CLK_OUT : std_logic;
   signal MC : std_logic;
   signal SW : std_logic;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Head PORT MAP (
          CLK_IN => CLK_IN,
          SW => SW,
          Q => Q,
          MC => MC,
          CLK_OUT => CLK_OUT
        );

	CLK_IN <= not CLK_IN after 1 ns;
	SW <= '1', '0' after 100 ns;

END;
