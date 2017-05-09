library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_Recupera_CLK is
    Port ( Reloj8x 	: in  STD_LOGIC;
           Reset 		: in  STD_LOGIC;
           DataIn 	: in  STD_LOGIC;
           Reloj 		: out  STD_LOGIC;
           DataSync	: out  STD_LOGIC);
end En_Recupera_CLK;

architecture Arq_Recupera_CLK of En_Recupera_CLK is
	signal sReloj8x 		: STD_LOGIC := '0';
	signal sReloj8x_edge	: STD_LOGIC := '0';
	signal sReloj			: STD_LOGIC := '0';
	signal sReloj_edge	: STD_LOGIC := '0';
	signal sDataIn			: STD_LOGIC := '0';
	signal DataIn_edge	: STD_LOGIC := '0';
	signal DIV 				: unsigned(7 downto 0) := to_unsigned(8,8);
	signal DIV_Next		: unsigned(7 downto 0) := to_unsigned(8,8);
	signal NUM	 			: unsigned(7 downto 0) := to_unsigned(10,8);
	signal NUM_AUX			: unsigned(7 downto 0) := to_unsigned(10,8);
	signal NUM_AUX_LAST	: unsigned(7 downto 0) := to_unsigned(10,8);
	signal NUM_Next		: unsigned(7 downto 0) := to_unsigned(10,8);
	signal Count_Fast		: unsigned(9 downto 0);
	signal Count_Slow		: unsigned(9 downto 0);
	signal BeforeEdge 	: STD_LOGIC := '0';
	
	constant MAX_DEN		: unsigned(7 downto 0) := to_unsigned(20,8);
	constant PASO			: unsigned(7 downto 0) := to_unsigned(2,8);
begin

	---------------- Generación de relojes ----------------
	-- Reloj8x = Reloj * 8

	Reloj	<= sReloj;

	Ins_Reloj: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	 => Reloj8x,
		Reset		 => Reset,
		N			 => STD_LOGIC_VECTOR(DIV),
		Num		 => STD_LOGIC_VECTOR(NUM), -- Se desactiva la división racional ya que será manejado por el detector de fase
		Den		 => STD_LOGIC_VECTOR(MAX_DEN),
		Tick_Out  => sReloj
		);
		
	process(Reloj8x)
	begin
		if rising_edge(Reloj8x) then
			sDataIn	<= DataIn;
			DataSync <= DataIn;
		end if;
	end process;
	
   DataIn_edge <= DataIN XOR sDataIn;

	NUM_AUX	<=	NUM_AUX_LAST + PASO when Count_Slow > Count_Fast and NUM_AUX_LAST < MAX_DEN - PASO + to_unsigned(1,NUM_AUX_LAST'length) else
					NUM_AUX_LAST - PASO when Count_Fast > Count_Slow and NUM_AUX_LAST > PASO - to_unsigned(1,NUM_AUX_LAST'length) else
					NUM_AUX_LAST;
	
	DIV_Next <= to_unsigned(7,NUM'length) when NUM_AUX < to_unsigned(10,NUM'length) else
					to_unsigned(8,NUM'length);
	
	NUM_Next <= NUM_AUX + to_unsigned(10,NUM'length) when DIV_Next = to_unsigned(7,NUM'length) else
					NUM_AUX - to_unsigned(10,NUM'length);
	
	process(Reloj8x, Reset)
	begin
		if Reset = '1' or DataIn_edge = '1' then
			Count_Slow 	<= to_unsigned(0,Count_Slow'length);
			Count_Fast 	<= to_unsigned(0,Count_Fast'length);
			NUM	      <= NUM_Next;
			DIV	      <= DIV_Next;
			NUM_AUX_LAST<= NUM_AUX;
			BeforeEdge	<= '0';
		elsif rising_edge(Reloj8x) then
			if sReloj = '1' then
				BeforeEdge	<= '1'; 	-- Con el Duty de esta señal se puede controlar el punto de muestreo de los datos de entrada
			end if;						      -- En este caso está en 50%, pero con la comparaci
			
			if BeforeEdge = '0' then
				Count_Fast <= Count_Fast + to_unsigned(1,Count_Fast'length);
			end if;
			
			if BeforeEdge = '1' then
				Count_Slow <= Count_Slow + to_unsigned(1,Count_Slow'length);
			end if;
		end if;
	end process;
	
end Arq_Recupera_CLK;