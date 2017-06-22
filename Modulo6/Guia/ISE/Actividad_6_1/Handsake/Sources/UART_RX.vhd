library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_UART_RX is
    generic (	
		Frecuency_BaudRate : integer := 115200;
		Frecuency_CLK : integer := 50_000_000);
	 Port ( 
		Clk 	: in  STD_LOGIC;
      ENA	: in  STD_LOGIC;
	 	RD	 	: in  STD_LOGIC;
		Data 	: out STD_LOGIC_VECTOR(7 downto 0);
      Ready : out STD_LOGIC
			 );        
end En_UART_RX;

architecture Arq_UART_RX of En_UART_RX is
	type   TSTATES	is	(IDLE, S1,S2,S3,S4,S5,S6,S7);

	signal sState	    : TSTATES := IDLE;
	
	signal Enabled      : STD_LOGIC := '0';
	signal sUartClock   : STD_LOGIC := '0';
	
	signal SDataInBack  : STD_LOGIC;
	signal sShiftReg	: STD_LOGIC_VECTOR(7 downto 0) := x"00";
	
	signal SDataInBack1 : STD_LOGIC;
	signal SDataInBack2 : STD_LOGIC;
	
	signal snBit        : unsigned(3 downto 0);

begin
	CClockUart : entity work.En_ClockE(Arq_ClockE) 
    generic map (Frecuency => Frecuency_BaudRate*2, Frecuencia_de_Entrada => Frecuency_Clk) 
    port map (Clk, Enabled, sUartClock);

pSerIn:	
    process(ENA,CLK)
    begin
		if ENA = '0' then
			Enabled <= '0';
			Data <= x"00";
			Ready <= '0';
			sState <= IDLE; 
		elsif rising_edge(CLK) then
			sDataInBack2 <= sDataInBack1;
			sDataInBack1 <= sDataInBack;
			sDataInBack <= RD;
			case sState is 
				when IDLE =>
					snBit <= to_unsigned(0,snBit'length);
					Ready <= '0';
					Enabled <= '0';
					sShiftReg <= x"00";
					if (SDataInBack = '0') and (SDataInBack2 = '1') then
						Enabled <= '1';										
						SState <= S1;
					end if;
					  
				 when S1 =>   	
					  if sUartClock = '1' then	
							if RD = '0' then
								 SState <= S2;
							else
								 sState <= IDLE;
							end if;
					  end if;
					  
				 when S2 =>    	
					  if sUartClock = '1' then	
							sState <= S3;	
					  end if;
					  
				 when S3 =>
					  if sUartClock = '1' then	
							sShiftReg <= RD & sShiftReg(7 downto 1);
							if snBit = to_unsigned(8,snBit'length) then
								 if RD = '1' then
									  Ready <= '1';
									  Data <= sShiftReg;	
									  sState <= IDLE;														
								 else
									  sState <= IDLE;														
								 end if;
							else
								 snBit <= snBit + to_unsigned(1,snBit'length);
								 sState <= S2;	
							end if;
					  end if;
					  
				 when others => 
					  sState <= IDLE;
					  
			end case;	
		end if;
	end process;		
end Arq_UART_RX;