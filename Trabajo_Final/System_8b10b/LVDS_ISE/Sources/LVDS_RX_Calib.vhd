library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity En_LVDS_RX_Calib is
	 Port ( 
		Clk 		: in std_logic;
	 	LVDSin		: in std_logic;
		Word_Lvds 	: out std_logic_vector(31  downto 0);
		ResetRX		: in std_logic;
		En_Ventana 	: out std_logic;
		state_debug	: out STD_LOGIC 
		);        
end En_LVDS_RX_Calib;

architecture Arq_LVDS_RX_Calib of En_LVDS_RX_Calib is

	type	TSTATES		is (Start1, Start2_0, Start2, Start3);
	signal	sState		: TSTATES;
	signal  Data_raw	: std_logic_vector (31 downto 0);
	signal  state_d	 	: std_logic;
	signal  SignAux	 	: std_logic;
	signal  Data_raw_temp	: std_logic_vector (31 downto 0); -- Si es variable no anda!
	signal  ID_Trama : std_logic_vector (15 downto 0); -- Para estampar en cada trama y as hacer una mejor verificacin de trama vlida en la ZOTAC
	
	signal	CheckSum : std_logic_vector (15 downto 0);
	signal	CheckRx	: std_logic_vector (15 downto 0);
begin

LVDS_In:	
	process (Clk, ResetRX)
   		variable bytes_count  	: integer range 0 to 63;
   		variable bit_count    	: integer range 0 to 63;
	begin
		if ResetRX = '1' then
      	sState 		<= Start1;
			En_Ventana 	<= '0';
			Data_raw_temp 	<= (others => '0');
			Word_Lvds 	<= (others => '0');
			ID_Trama 	<= (others => '0');			
		elsif rising_edge (Clk) then

			Data_raw_temp   <=  LVDSin & Data_raw_temp(31 downto 1);

			case sState is
				when Start1 =>
				
					bit_count 		:= bit_count + 1;	
					if bit_count = 6 then 
					   En_Ventana  	<= '0';
					end if;
					if Data_raw_temp(31 downto 0) = x"50F0CAD0" then   
						ID_Trama 	<= ID_Trama + '1';
						Word_Lvds 	<= ID_Trama & x"0E0F";
						En_Ventana  <= '1';
						sState 		<= Start2_0;
						bit_count 	:= 0;
						bytes_count := 0;
						CheckSum		<= (others => '0');
					end if; 

				when Start2_0 =>
					bit_count 		:= bit_count + 1;	
					if bit_count = 6 then 
					   En_Ventana  	<= '0';
					end if;
					if bit_count = 32 then  
						bit_count 	:= 0;
						En_Ventana  <= '1';
						bytes_count := bytes_count + 1;
						CheckSum		<= CheckSum + Data_raw_temp(31 downto 24) + Data_raw_temp(23 downto 16);

						Word_Lvds 	<= Data_raw_temp;
						sState  		<= Start2;

					end if;

				when Start2 =>
					bit_count 		:= bit_count + 1;	
					if bit_count = 6 then 
					   En_Ventana  <= '0';
					end if;
					if bit_count = 32 then  
						bit_count 	:= 0;
						En_Ventana  <= '1';
						bytes_count := bytes_count + 1;
						CheckSum		<= CheckSum + Data_raw_temp(31 downto 24) + Data_raw_temp(23 downto 16) + Data_raw_temp(15 downto 8) + Data_raw_temp(7 downto 0);
						if bytes_count	= 49 then  
							Word_Lvds<= Data_raw_temp;
							sState  	<= Start3;
						else
							Word_Lvds<= Data_raw_temp;
						end if;	
					end if;
					
				when Start3 =>
					bit_count 		:= bit_count + 1;	
					if bit_count = 6 then 
					   En_Ventana 	<= '0';
					end if;
					if bit_count = 32 then  
						bit_count 	:= 0;
						
						if (Data_raw_temp(31 downto 24) & Data_raw_temp(23 downto 16)) = (CheckSum + Data_raw_temp(15 downto 8) + Data_raw_temp(7 downto 0)) then
							En_Ventana  <= '1';
							Word_Lvds 	<= Data_raw_temp;
						end if;
					
						sState  <= Start1;

					end if;

				when others => 
					sState <= Start1;
			end case;

 		end if; 
	end process;
			
end Arq_LVDS_RX_Calib;