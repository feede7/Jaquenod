LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
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
			R2048X	: OUT STD_LOGIC;
         Rel2_240 : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal Rel2_048_Stable : std_logic := '0';
   signal sRel2_048 : std_logic := '0';
   signal Rel2_048 : std_logic := '0';
   signal Dat2_048 : std_logic := '0';
   signal Clk72MHz : std_logic := '0';
   signal Reset : std_logic := '0';

 	--Outputs
   signal Rel17_92 : std_logic := '0';
   signal Ref17_92 : std_logic := '0';
   signal R2048X   : std_logic := '0';
   signal Rel2_240 : std_logic := '0';

   -- Clock period definitions
   constant Clk72MHz_period : time :=  138889 ps;
   constant Rel2_048_period : time := 4890000 ps;
   constant Ref17_92_period : time :=  558036 ps;
	
		
	signal Counter_1		: unsigned(10 downto 0);
	signal Counter_2		: unsigned(10 downto 0);
	signal Counter_3		: unsigned(10 downto 0);
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: En_Receptor PORT MAP (
          Rel2_048 => Rel2_048,
          Dat2_048 => Dat2_048,
          Clk72MHz => Clk72MHz,
          Reset => Reset,
          Rel17_92 => Rel17_92,
          R2048X 	 => R2048X,
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
		Rel2_048_Stable <= '0';
		wait for Rel2_048_period/2;
		Rel2_048_Stable <= '1';
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
 
 	process(Rel2_048_Stable,Reset)
	begin
		if Reset = '1' then
			Counter_3 <= to_unsigned(0,Counter_3'length);
		elsif rising_edge(Rel2_048_Stable) then
			Counter_3 <= Counter_3 + to_unsigned(1,Counter_3'length);
		end if;
	end process;
	
	process(R2048x,Reset)
	begin
		if Reset = '1' then
			Counter_2 <= to_unsigned(0,Counter_2'length);
		elsif rising_edge(R2048x) then
			Counter_2 <= Counter_2 + to_unsigned(1,Counter_2'length);
		end if;
	end process;
	
	-- Generación de CLK de referencia con pérdidas
   process(Rel2_048_Stable,Reset)
   begin	
		if Reset = '1' then
			Counter_1 <= to_unsigned(0,Counter_1'length);
			sRel2_048 <= '0';
		elsif rising_edge(Rel2_048_Stable) or falling_edge(Rel2_048_Stable) then
			if Counter_1 = to_unsigned(11,Counter_1'length) then
				Counter_1 <= to_unsigned(0,Counter_1'length);
				sRel2_048 <= '0';
			elsif Counter_1 < to_unsigned(3,Counter_1'length) then
				Counter_1 <= Counter_1 + to_unsigned(1,Counter_1'length);
			else
				Counter_1 <= Counter_1 + to_unsigned(1,Counter_1'length);
				sRel2_048 <= Rel2_048_Stable;
			end if;
		end if;
   end process;
	
	Rel2_048 <= sRel2_048;
	Reset <= '1', '0' after 112 ns;
END;