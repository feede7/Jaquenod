library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
      
entity En_UART_TX is
    generic (	
		Frecuency_BaudRate : NATURAL := 115200;
		Frecuency_CLK : NATURAL := 50_000_000);
	 Port ( 
         Clk 	: in  STD_LOGIC;
			RST	: in  STD_LOGIC;
			Data 	: in  STD_LOGIC_VECTOR(7 downto 0);
         Send	: in  STD_LOGIC;
			TD 	: out STD_LOGIC;
			Ready : out STD_LOGIC
			 );        
end En_UART_TX;

architecture Arq_UART_TX of En_UART_TX is
	type	TSTATES	is	(IDLE, Bits1, Bits2, Bits3);
	signal	sState	     : TSTATES := IDLE;
	signal 	sUartClock   : STD_LOGIC;
	signal	Enabled      : STD_LOGIC;
	signal  vbit         : unsigned(3 downto 0);

begin

	CClockUart : entity work.En_ClockE(Arq_ClockE) 
        generic map (Frecuency => Frecuency_BaudRate*2, Frecuencia_de_Entrada => Frecuency_Clk) 
		port map (Clk, Enabled, sUartClock);

pSerOut:
    process(RST, Clk)
    begin
	 if RST = '1' then
		sState <= IDLE;
		Enabled <= '0';
		TD <= '1';		
		Ready <= '0';
    elsif rising_edge (Clk) then
		case sState is
			when IDLE =>
				TD <= '1';
				 Ready <= '1';
				 Enabled <= '0';
				 if Send = '1' then
					  Ready <= '0';
					  Enabled <= '1';
					  vbit    <= to_unsigned(0,vbit'length);
					  sState  <= Bits1;
				 end if;
												
			when Bits1 =>
				case vbit is
					  when "0000" => TD <= '0';
					  when "0001" => TD <= Data (0);
					  when "0010" => TD <= Data (1);
					  when "0011" => TD <= Data (2);
					  when "0100" => TD <= Data (3);
					  when "0101" => TD <= Data (4);
					  when "0110" => TD <= Data (5);
					  when "0111" => TD <= Data (6);
					  when "1000" => TD <= Data (7);
					  when "1001" => TD <= '1';
					  when OTHERS => TD <= '1';
				 end case;
				 sState <= Bits2;
				 
			when Bits2 =>
				if sUartClock = '1' then
					 vbit <= vbit + to_unsigned(1,vbit'length);
					 sState <= Bits3;
				 end if;
								 
			when Bits3 =>
				if sUartClock = '1' then 
					  if vbit < to_unsigned(10,vbit'length) then
							sState <= Bits1;
					  else
							sState <= IDLE;
					  end if;
				 end if;
				 
			when others =>
				sState <= IDLE;
				
			end case;				
		end if;
	end process;	
end Arq_UART_TX;