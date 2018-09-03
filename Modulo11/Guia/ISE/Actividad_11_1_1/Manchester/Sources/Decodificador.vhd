library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_Decodificador is
    Port ( 	CLKx4 	: in  STD_LOGIC;
				RST 		: in  STD_LOGIC;
				Data_In 	: in  STD_LOGIC;
				Data_Out : out STD_LOGIC);
end En_Decodificador;

architecture Arq_Decodificador of En_Decodificador is
	signal sData_Out 	: STD_LOGIC;
	signal sXOR 		: STD_LOGIC;
	signal sXORr 		: STD_LOGIC;
	signal sXOR_edge	: STD_LOGIC;
	signal Reloj 		: STD_LOGIC;
	signal Count 		: NATURAL;
begin

	sXOR 		<= sData_Out XOR Data_In;
	sXORr		<= sXOR when rising_edge(CLKx4);
	sXOR_edge<= sXOR and not sXORr;
	sData_Out <= '0' when RST = '1' else Data_In when falling_edge(Reloj);
	
	Data_Out <= sData_Out;

	process(CLKx4,RST)
	begin
		if RST = '1' then
			Count 	<= 0;
			Reloj 	<= '0';
		elsif rising_edge(CLKx4) then
			if sXOR_edge = '1' then
				Reloj 	<= '1';
				Count 	<= 1;
			elsif Reloj = '1' then
				if Count = 2 then
					Reloj <= '0';
				else
					Count	<= Count + 1;
				end if;
			end if;
		end if;
	end process;

end Arq_Decodificador;