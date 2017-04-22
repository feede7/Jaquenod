library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

entity En_Receptor is
    Port ( 	Rel2_048	: in  STD_LOGIC;
				Dat2_048	: in  STD_LOGIC;
				Clk72MHz	: in  STD_LOGIC;
				Reset		: in  STD_LOGIC;
				Rel17_92	: out STD_LOGIC;
				Rel2_240	: out STD_LOGIC);
end En_Receptor;

architecture Arq_Receptor of En_Receptor is
	signal sRel17_92 		: STD_LOGIC;
	signal R2048X 			: STD_LOGIC;
	signal sPFD_Slower 	: STD_LOGIC;
	signal sPFD_Faster 	: STD_LOGIC;
	signal DIV4_5 			: STD_LOGIC_VECTOR(7 downto 0);
	signal Rel2048edge 	: STD_LOGIC;
	signal srel2_048 		: STD_LOGIC;

begin

	---------------- Generación de relojes ----------------
	-- 72M = 17.92M * 4.017857143 = 17.92M * (4 + 8/25)
	-- 17.92M = 2048K * 8.75 = 2048K * (8 + 3/4)
	-- 17.92M = 2240K * 8

	Rel17_92 <= sRel17_92;
	
	INS_Rel2_240: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	=> sRel17_92,
		Reset		=> Reset,
		N			=> STD_LOGIC_VECTOR(to_unsigned(8,8)),
		Num		=> STD_LOGIC_VECTOR(to_unsigned(0,8)),
		Den		=> STD_LOGIC_VECTOR(to_unsigned(0,8)),
		Tick_Out => Rel2_240
		);
	
	INS_Rel2_048: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	=> sRel17_92,
		Reset		=> Reset,
		N			=> STD_LOGIC_VECTOR(to_unsigned(8,8)),
		Num		=> STD_LOGIC_VECTOR(to_unsigned(3,8)),
		Den		=> STD_LOGIC_VECTOR(to_unsigned(4,8)),
		Tick_Out => R2048X
		);
	
	Rel2048edge <= (not sRel2_048) and Rel2_048;
	
	process(Clk72MHz)
	begin
		if rising_edge(Clk72MHz) then
			sRel2_048 	<= Rel2_048;
		end if;
	end process;
	
	INS_PFD: entity work.En_PFD(Arq_PFD)
   Port map ( 
		RefCLK 	=> Rel2048edge,
      VcoCLK 	=> R2048X,
		Reset		=> Reset,
      Slower 	=> sPFD_Slower,
      Faster 	=> sPFD_Faster,
      nClr 		=> open
		);

	DIV4_5 <= 	STD_LOGIC_VECTOR(to_unsigned(5,8)) when sPFD_Slower = '1' else
					STD_LOGIC_VECTOR(to_unsigned(4,8));

	Ins_Rel17_92: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	=> Clk72MHz,
		Reset		=> Reset,
		N			=> STD_LOGIC_VECTOR(to_unsigned(4,8)),--DIV4_5,
		Num		=> STD_LOGIC_VECTOR(to_unsigned(0,8)),
		Den		=> STD_LOGIC_VECTOR(to_unsigned(0,8)),
		Tick_Out => sRel17_92
		);

end Arq_Receptor;