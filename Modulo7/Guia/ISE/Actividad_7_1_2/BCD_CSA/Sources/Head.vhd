library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity En_Head is
    Port (
		CLK 		: in  STD_LOGIC;
		DataIn	: in  STD_LOGIC_VECTOR(3 downto 0);
		Contar 	: in  STD_LOGIC;
		U_D 		: in  STD_LOGIC; -- '1' = Up, '0' = Down
		Zero 		: in  STD_LOGIC;
		Unidades : in  STD_LOGIC;
		DataOut	: out STD_LOGIC_VECTOR(3 downto 0)
	);
end En_Head;

architecture Arq_Head of En_Head is
	signal Aux: STD_LOGIC_VECTOR(4 downto 0);
	signal C_B: STD_LOGIC;
begin
	Aux <=  "00000" 				when Zero = '1' else
          '0' & DataIn		when contar = '0' else
          "10000" 				when U_D = '1' and Unidades = '1' and DataIn = "1001" else
          "11001" 				when U_D = '0' and Unidades = '1' and DataIn = "0000" else
          "10000" 				when U_D = '1' and C_B = '1' and DataIn = "1001" else
          "11001" 				when U_D = '0' and C_B = '1' and DataIn = "0000" else
          DataIn + "00001" 	when U_D = '1' and Unidades = '1' else
          DataIn - "00001" 	when U_D = '0' and Unidades = '1' else
          DataIn + "00001" 	when U_D = '1' and C_B = '1' else
          DataIn - "00001" 	when U_D = '0' and C_B = '1';
	DataOut	<= Aux(3 downto 0);
	C_B		  <= Aux(4) when rising_edge(CLK);
end Arq_Head;
