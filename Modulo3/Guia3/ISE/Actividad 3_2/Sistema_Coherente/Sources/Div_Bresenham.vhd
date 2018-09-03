library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_Div_Bresenham is
    Port ( 	CLK_In  	: in  STD_LOGIC;
				Reset		: in  STD_LOGIC;
				N 		 	: in  STD_LOGIC_VECTOR(7 downto 0);
				Num 	 	: in  STD_LOGIC_VECTOR(7 downto 0);
				Den 	 	: in  STD_LOGIC_VECTOR(7 downto 0);
				Tick_Out : out STD_LOGIC);
end En_Div_Bresenham;

architecture Arq_Div_Bresenham of En_Div_Bresenham is
	signal DownCount 			: unsigned(7 downto 0);
	signal Counter				: signed(8 downto 0);
	signal NextAdd				: signed(8 downto 0);
	signal NextCounter 		: signed(8 downto 0);
begin

	-- Para un divisor donde DIV = N + Num/Den, sería que cada N o N+1 veces incrementa en Num o decrementa en (Den-Num)  el contador que dependiendo el signo define el inicio del DownCounter

	NextCounter <= Counter + NextAdd;

	process(CLK_In,Reset)
	begin
		if Reset = '1' then
			DownCount <= to_unsigned(0,DownCount'length);
			Counter	 <= to_signed(0,Counter'length);
			NextAdd	 <= signed('0' & Num);
		elsif rising_edge(CLK_In) then
			Tick_Out <= '0';
			if DownCount = to_unsigned(0,DownCount'length) then
				Tick_Out <= '1';
				Counter 	<= NextCounter;
				if NextCounter > to_signed(0,NextCounter'length) then -- Tiene que ser Mayor, ya que contempla el caso que Num = 0, y la división se haga siempre por N. En caso que Num = Den, siempre dividirá por N+1
					NextAdd	 <= signed('0' & Num) - signed('0' & Den);
					DownCount <= unsigned(N);
				else
					NextAdd	 <= signed('0' & Num);
					DownCount <= unsigned(N) - to_unsigned(1,DownCount'length);
				end if;
			else
				DownCount <= DownCount - to_unsigned(1,DownCount'length);
			end if;
		end if;
	end process;
	
end Arq_Div_Bresenham;