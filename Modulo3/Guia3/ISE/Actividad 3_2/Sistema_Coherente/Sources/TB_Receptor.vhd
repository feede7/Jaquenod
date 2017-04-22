LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
USE ieee.numeric_std.ALL;
 
ENTITY TB_Receptor IS
END TB_Receptor;
 
ARCHITECTURE behavior OF TB_Receptor IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT En_Receptor
    PORT(
         Rel2_048 : IN  std_logic;
         Dat2_048 : IN  std_logic;
         Clk72MHz : IN  std_logic;
         Reset 	: IN  std_logic;
         Rel17_92 : OUT  std_logic;
         Rel2_240 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Rel2_048 : std_logic := '0';
   signal Dat2_048 : std_logic := '0';
   signal Clk72MHz : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal Rel17_92 : std_logic;
   signal Ref17_92 : std_logic;
   signal Rel2_240 : std_logic;

   -- Clock period definitions
   constant Clk72MHz_period : time := 1388 ps;
   constant Rel2_048_period : time := 48828 ps;
   constant Ref17_92_period : time := 5580 ps;
	
		
	signal Counter_1		: unsigned(10 downto 0);
	signal Counter_2		: unsigned(10 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Receptor PORT MAP (
          Rel2_048 => Rel2_048,
          Dat2_048 => Dat2_048,
          Clk72MHz => Clk72MHz,
          Reset => Reset,
          Rel17_92 => Rel17_92,
          Rel2_240 => Rel2_240
        );

   -- Clock process definitions
   Clk72MHz_process :process
   begin
		Clk72MHz <= '0';
		wait for Clk72MHz_period/2;
		Clk72MHz <= '1';
		wait for Clk72MHz_period/2;
   end process;
	
   -- Clock process definitions
   Rel2_048_process :process
   begin
		Rel2_048 <= '0';
		wait for Rel2_048_period/2;
		Rel2_048 <= '1';
		wait for Rel2_048_period/2;
   end process;
	
   -- Clock process definitions
   Ref17_92_process :process
   begin
		Ref17_92 <= '1' and not Reset;
		wait for Ref17_92_period/2;
		Ref17_92 <= '0' and not Reset;
		wait for Ref17_92_period/2;
   end process;
 
 	process(Ref17_92,Reset)
	begin
		if Reset = '1' then
			Counter_1 <= to_unsigned(0,Counter_1'length);
		elsif rising_edge(Ref17_92) then
			Counter_1 <= Counter_1 + to_unsigned(1,Counter_1'length);
		end if;
	end process;
	
	process(Rel17_92,Reset)
	begin
		if Reset = '1' then
			Counter_2 <= to_unsigned(0,Counter_2'length);
		elsif rising_edge(Rel17_92) then
			Counter_2 <= Counter_2 + to_unsigned(1,Counter_2'length);
		end if;
	end process;
	
	Reset <= '1', '0' after 168 ns;
END;
