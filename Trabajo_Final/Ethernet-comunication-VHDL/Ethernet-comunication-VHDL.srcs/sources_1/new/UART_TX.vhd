library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;
      
entity En_UART_TX is
    generic (	BaudRate : NATURAL := 115200;
				Frecuencia_ClkRecep : NATURAL := 50_000_000);
	 Port ( Reset 	: in  STD_LOGIC;
            Clk 	: in  STD_LOGIC;
            Data 	: in  STD_LOGIC_VECTOR(7 downto 0);
            Start	: in  STD_LOGIC;
			SDout 	: out STD_LOGIC;
			TxReady : out STD_LOGIC
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
        generic map (Frecuency => BaudRate*2, Frecuencia_de_Entrada => Frecuencia_ClkRecep) 
		port map (Clk, Enabled, sUartClock);

pSerOut:
    process-- (Reset, Clk)
    begin
    if rising_edge (Clk) then
        if Reset = '1' then
            sState <= IDLE;
            Enabled <= '0';
        else
            case sState is
            when IDLE =>
            	SDout <= '1';
                TxReady <= '1';
                Enabled <= '0';
                if Start = '1' then
                    TxReady <= '0';
                    Enabled <= '1';
                    vbit    <= to_unsigned(0,vbit'length);
                    sState  <= Bits1;
                end if;
                								
            when Bits1 =>
            	case vbit is
                    when "0000" => SDout <= '0';
                    when "0001" => SDout <= Data (0);
                    when "0010" => SDout <= Data (1);
                    when "0011" => SDout <= Data (2);
                    when "0100" => SDout <= Data (3);
                    when "0101" => SDout <= Data (4);
                    when "0110" => SDout <= Data (5);
                    when "0111" => SDout <= Data (6);
                    when "1000" => SDout <= Data (7);
                    when "1001" => SDout <= '1';
                    when OTHERS => SDout <= '1';
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
    end if;
    end process;	
end Arq_UART_TX;