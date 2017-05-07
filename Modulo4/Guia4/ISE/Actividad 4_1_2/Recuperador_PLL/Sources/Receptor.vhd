library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_Receptor is
    Port ( 	Rel2_048	: in  STD_LOGIC;
				Dat2_048	: in  STD_LOGIC;
				Clk72MHz	: in  STD_LOGIC;
				Reset		: in  STD_LOGIC;
				Rel17_92	: out STD_LOGIC;
				R2048X	: out STD_LOGIC;
				Rel2_240	: out STD_LOGIC;
				Dat2_048_Syc : out STD_LOGIC);
end En_Receptor;

architecture Arq_Receptor of En_Receptor is
	signal sRel17_92 		: STD_LOGIC;
	signal sR2048X			: STD_LOGIC;
	signal sR2048X_Ant	: STD_LOGIC;
	signal DIV4_5 			: unsigned(7 downto 0) := to_unsigned(4,8);
	signal NUM4_5 			: unsigned(7 downto 0) := to_unsigned(1,8);
	signal NUM4_5_Next	: unsigned(7 downto 0) := to_unsigned(1,8);
	signal Count_Fast		: unsigned(9 downto 0);
	signal Count_Slow		: unsigned(9 downto 0);
	signal Rel2048edge 	: STD_LOGIC;
	signal R2048Xedge 	: STD_LOGIC;
	signal sRel2_048 		: STD_LOGIC;
	signal BeforeEdge 	: STD_LOGIC;
	
	constant MAX_DEN		: unsigned(7 downto 0) := to_unsigned(20,8);
	constant PASO			: unsigned(7 downto 0) := to_unsigned(1,8);
	constant DUTY			: unsigned(7 downto 0) := to_unsigned(50,8); -- Probado y funcionando entre 20 y 70
begin

	---------------- Generación de relojes ----------------
	-- 72M = 17.92M * 4.017857143 = 17.92M * (4 + 8/25)
	-- 17.92M = 2048K * 8.75 = 2048K * (8 + 3/4)
	-- 17.92M = 2240K * 8

	Rel17_92 <= sRel17_92;

	INS_Rel2_240: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	 => sRel17_92,
		Reset		 => Reset,
		N			   => STD_LOGIC_VECTOR(to_unsigned(8,8)),
		Num		   => STD_LOGIC_VECTOR(to_unsigned(0,8)),
		Den		   => STD_LOGIC_VECTOR(to_unsigned(0,8)),
		Tick_Out => Rel2_240
		);

	INS_Rel2_048: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	 => sRel17_92,
		Reset		 => Reset,
		N			   => STD_LOGIC_VECTOR(to_unsigned(8,8)),
		Num		   => STD_LOGIC_VECTOR(to_unsigned(3,8)),
		Den		   => STD_LOGIC_VECTOR(to_unsigned(4,8)),
		Tick_Out 	=> sR2048X
		);

	R2048X	<= sR2048X;

	Ins_Rel17_92: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	 => Clk72MHz,
		Reset		 => Reset,
		N			 => STD_LOGIC_VECTOR(DIV4_5),
		Num		 => STD_LOGIC_VECTOR(NUM4_5), -- Se desactiva la división racional ya que será manejado por el detector de fase
		Den		 => STD_LOGIC_VECTOR(MAX_DEN),
		Tick_Out  => sRel17_92
		);
		
	process(Clk72MHz)
	begin
		if rising_edge(Clk72MHz) then
			sRel2_048 <= Rel2_048;
			sR2048X_Ant <= sR2048X;
		end if;
	end process;
	
   Rel2048edge <= (not sRel2_048) and Rel2_048;
   R2048Xedge 	<= (not sR2048X_Ant) and sR2048X;

	NUM4_5_Next	<=	NUM4_5 + PASO when Count_Slow > to_unsigned(to_integer(Count_Fast+Count_Slow)*(100-to_integer(DUTY))/100,Count_Slow'length) and NUM4_5 < MAX_DEN else
						NUM4_5 - PASO when Count_Fast > to_unsigned(to_integer(Count_Fast+Count_Slow)*to_integer(DUTY)/100,Count_Fast'length) and NUM4_5 > to_unsigned(0,NUM4_5'length) else
						NUM4_5;
	
	process(Clk72MHz, Reset)
	begin
		if Reset = '1' or Rel2048edge = '1' then
			Count_Slow 	<= to_unsigned(0,Count_Slow'length);
			Count_Fast 	<= to_unsigned(0,Count_Fast'length);
			NUM4_5      <= NUM4_5_Next;
			BeforeEdge	<= '0';
		elsif rising_edge(Clk72MHz) then
			if R2048Xedge = '1' then
				BeforeEdge	<= '1'; 	-- Con el Duty de esta señal se puede controlar el punto de muestreo de los datos de entrada
			end if;						-- En este caso está en 50%, pero con la comparaci
			
			if BeforeEdge = '0' then
				Count_Fast <= Count_Fast + to_unsigned(1,Count_Fast'length);
			end if;
			
			if BeforeEdge = '1' then
				Count_Slow <= Count_Slow + to_unsigned(1,Count_Slow'length);
			end if;
		end if;
	end process;
	
	process(sR2048X)
	begin
		if rising_edge(sR2048X) then
			Dat2_048_Syc <= Dat2_048;
		end if;
	end process;
end Arq_Receptor;