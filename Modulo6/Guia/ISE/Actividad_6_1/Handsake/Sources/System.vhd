library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;
		
entity En_System is
    Port ( 
		CLK : in  STD_LOGIC;
		RST : in  STD_LOGIC;
		SND : in  STD_LOGIC;
		Data_In : in STD_LOGIC_VECTOR(7 downto 0);
		RDY : out STD_LOGIC;
		Data_Out : out STD_LOGIC_VECTOR(7 downto 0);
		New_Data : out STD_LOGIC;
		TD  : out STD_LOGIC;
		RD  : in  STD_LOGIC;
		RTS : out STD_LOGIC;
		CTS : in  STD_LOGIC;
		DTR : out STD_LOGIC;
		DSR : in  STD_LOGIC
		);
end En_System;

architecture Arq_System of En_System is

	signal Data_To_Send : STD_LOGIC_VECTOR(7 downto 0);
	signal Received_Data : STD_LOGIC_VECTOR(7 downto 0);
	
	signal Ready_Send : STD_LOGIC;
	signal Ready_Receive : STD_LOGIC;
	
	constant TIMEOUT : NATURAL := 10;
begin

	process(CLK,RST)
	begin
		if RST = '1' then
			RTS <= '0';
			DTR <= '0';
			RDY <= '0';
		elsif rising_edge(CLK) then
			DTR <= '1';
			New_Data <= '0';
			
			case State is
				when Waiting_For_Link =>
					if DSR = '1' then
						RDY <= '1';
						counter <= to_unsigned(1,counter'length);
						State <= Idle_Mode;
					else
						RDY <= '0';
						RTS <= '0';
					end if;
				
				when Idle_Mode =>
					if SND = '1' and CTS = '0' then
						RTS <= '1';
						RDY <= '0';
						Data_To_Send <= Data_In;
						State <= Check_Link;
					elsif CTS = '1' then
						RDY <= '0';
						RTS <= '1';
						Recibe <= '1';
						State <= Waiting_Recibe;
					end if;
				
				when Check_Link =>
					if CTS = '1' then
						Send <= '1';
						State <= Waiting_Send;
					else
						if counter > to_unsigned(TIMEOUT,counter'length) then
							State <= Waiting_For_Link;
						else
							counter <= counter + to_unsigned(1,counter'length);
						end if;
					end if;
				
				when Waiting_Send =>
					if Ready_Send = '1' then
						State <= Waiting_Confirmation;
					end if;
				
				when Waiting_Confirmation =>
					if CTS = '0' then
						RTS <= '0';
						State <= Waiting_For_Link;
					end if;

				when Waiting_Receive =>
					if Ready_Receive = '1' then
						Data_Out <= Received_Data;
						New_Data <= '1';
						RTS <= '0';
						State <= Waiting_For_Link;
					end if;

				when others =>
					State <= Waiting_For_Link;
					
			end case;
		end if;
	end process;

	INS_TX: entity work.En_UART_Tx(Arq_UART_Tx)
		GENERIC MAP( 	
			Frecuency_CLK => 40_000_000,
			Frecuency_Baudrate => 921_600)
		PORT MAP(
			CLK => CLK,
			RST => RST,
			Data => Data_To_Send,
			Send => Send,
			Ready => Ready_Send
		);

	INS_RX: entity work.En_UART_Rx(Arq_UART_Rx)
		GENERIC MAP( 	
			Frecuency_CLK => 40_000_000,
			Frecuency_Baudrate => 921_600)
		PORT MAP(
			CLK => CLK,
			RST => RST,
			Data => Received_Data,
			Ready => Ready_Receive
		);
end Arq_System;