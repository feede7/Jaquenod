LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY TB_Recup_CLK IS
END TB_Recup_CLK;
 
ARCHITECTURE behavior OF TB_Recup_CLK IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_Recupera_CLK
    PORT(
         Reloj8x : IN  std_logic;
         Reset : IN  std_logic;
         DataIn : IN  std_logic;
         Reloj : OUT  std_logic;
         DataSync : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Reloj8x : std_logic := '0';
   signal Reset : std_logic := '0';
   signal DataIn : std_logic := '0';

 	--Outputs
   signal Reloj : std_logic;
   signal DataSync : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant Reloj8x_period : time := 10 ns;
   constant DataIn_period : time := 80 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Recupera_CLK PORT MAP (
          Reloj8x => Reloj8x,
          Reset => Reset,
          DataIn => DataIn,
          Reloj => Reloj,
          DataSync => DataSync
        );

   -- Clock process definitions
   Reloj8x_process :process
   begin
		Reloj8x <= '0';
		wait for Reloj8x_period/2;
		Reloj8x <= '1';
		wait for Reloj8x_period/2;
   end process;

   -- Clock process definitions
   DataIn_process :process
   begin
		DataIn <= '0';
		wait for DataIn_period/2;
		DataIn <= '1';
		wait for DataIn_period/2;
   end process;
 
	Reset <= '1', '0' after 50 ns;
	
END;