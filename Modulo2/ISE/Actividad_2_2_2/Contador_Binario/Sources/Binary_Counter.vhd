library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_Binary_Counter is
	generic ( N : natural := 20 );
    Port ( CLK 	: in  STD_LOGIC;
           Reset 	: in  STD_LOGIC;
			  Q		: out STD_LOGIC_VECTOR(N downto 1));
end En_Binary_Counter;

architecture Arq_Binary_Counter of En_Binary_Counter is
	signal  sQ : unsigned(N downto 1);
begin
	Q <= std_logic_vector(sQ);
	
	process(CLK)
	begin
		if rising_edge(CLK) then
			if Reset = '1' then
				sQ <= (others => '0');
			else
				sQ <= sQ + 1;
			end if;
		end if;
	end process;

end Arq_Binary_Counter;