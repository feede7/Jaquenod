library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_LFSR is
	generic ( N : natural := 20 );
    Port ( 	CLK 			: in  STD_LOGIC;
				RESET 		: in  STD_LOGIC;
				Q				: out	STD_LOGIC_VECTOR(N downto 1));
end En_LFSR;

architecture Arq_LFSR of En_LFSR is
	signal sQ : unsigned(N downto 1);
begin
	Q <= std_logic_vector(sQ);

	process(CLK)	
	begin
		if rising_edge(CLK) then
			if RESET = '1' then				
				sQ <= (others => '0');
			else
				sQ(1) <= ( sQ(2) XNOR sQ(N) );
				for i in 2 to N loop
					sQ(i) <= sQ(i-1);
				end loop;
			end if;
		end if;				
	end process;
	
end Arq_LFSR;