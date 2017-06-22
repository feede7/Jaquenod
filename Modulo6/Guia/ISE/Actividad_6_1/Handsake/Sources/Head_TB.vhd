LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY Head_TB IS
END Head_TB;
 
ARCHITECTURE behavior OF Head_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_Head
    PORT(
         CLKA : IN  std_logic;
         CLKB : IN  std_logic;
         RSTA : IN  std_logic;
         RSTB : IN  std_logic;
         SNDA : IN  std_logic;
         SNDB : IN  std_logic;
         RDYA : OUT  std_logic;
         RDYB : OUT  std_logic;
         D2SNDA : IN  std_logic_vector(7 downto 0);
         D2SNDB : IN  std_logic_vector(7 downto 0);
         DRCVDA : OUT  std_logic_vector(7 downto 0);
         DRCVDB : OUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLKA : std_logic := '0';
   signal CLKB : std_logic := '0';
   signal RSTA : std_logic := '0';
   signal RSTB : std_logic := '0';
   signal SNDA : std_logic := '0';
   signal SNDB : std_logic := '0';
   signal D2SNDA : std_logic_vector(7 downto 0) := (others => '0');
   signal D2SNDB : std_logic_vector(7 downto 0) := (others => '0');

 	--Outputs
   signal RDYA : std_logic;
   signal RDYB : std_logic;
   signal DRCVDA : std_logic_vector(7 downto 0);
   signal DRCVDB : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant CLKA_period : time := 1 ns;
   constant CLKB_period : time := 2 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Head PORT MAP (
          CLKA => CLKA,
          CLKB => CLKB,
          RSTA => RSTA,
          RSTB => RSTB,
          SNDA => SNDA,
          SNDB => SNDB,
          RDYA => RDYA,
          RDYB => RDYB,
          D2SNDA => D2SNDA,
          D2SNDB => D2SNDB,
          DRCVDA => DRCVDA,
          DRCVDB => DRCVDB
        );

   -- Clock process definitions
   CLKA_process :process
   begin
		CLKA <= '0';
		wait for CLKA_period/2;
		CLKA <= '1';
		wait for CLKA_period/2;
   end process;
 
   CLKB_process :process
   begin
		CLKB <= '0';
		wait for CLKB_period/2;
		CLKB <= '1';
		wait for CLKB_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
		RSTA <= '1';
		RSTB <= '1';
      wait for 100 ns;	
		RSTA <= '0';
		RSTB <= '0';
		wait for CLKA_period;
		D2SNDB 	<= x"CC";
		SNDB		<= '1';
		wait for CLKA_period*10;
		SNDB		<= '0';	
		wait for 500 ns;
		D2SNDA 	<= x"AA";
		SNDA		<= '1';
		wait for CLKA_period*10;
		SNDA		<= '0';
	
      
		-- insert stimulus here 

      wait;
   end process;

END;
