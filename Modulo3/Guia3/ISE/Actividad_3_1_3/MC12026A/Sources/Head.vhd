library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_Head is
    Port ( CLK_IN : in  STD_LOGIC;
				SW : in  STD_LOGIC;
				Q : out STD_LOGIC_VECTOR(5 downto 1);
				MC : out STD_LOGIC;
           CLK_OUT : out  STD_LOGIC);
end En_Head;

architecture Arq_Head of En_Head is
	signal sQ : STD_LOGIC_VECTOR(5 downto 1) := (others => '0');
	signal sQ1_ant : STD_LOGIC;
begin

	process(CLK_IN)
	begin
		if rising_edge(CLK_IN) then
			sQ(3 downto 1) <= sQ(2 downto 1) & ( sQ(2) XNOR sQ(3) );
			sQ1_ant <= sQ(1);
			if sQ1_ant = '1' and sQ(1) = '0' then
				if SW = '1' then
					sQ(4) <= not sQ(5);
				else
					sQ(4) <= not sQ(4);
				end if;
				sQ(5) <= sQ(4);
			end if;
		end if;
	end process;
	
	Q <= sQ;
	
	MC <= sQ(4) or sQ(5);
	
	CLK_OUT <= sQ(4);
end Arq_Head;