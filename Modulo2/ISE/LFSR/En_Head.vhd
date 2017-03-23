----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    09:23:44 03/21/2017 
-- Design Name: 
-- Module Name:    En_Head - Arq_Head 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
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
    Port ( CLK : in  STD_LOGIC;
           RESET : in  STD_LOGIC;
           Q : out  STD_LOGIC_VECTOR (4 downto 1));
end En_Head;

architecture Arq_Head of En_Head is
	signal sQ : STD_LOGIC_VECTOR(4 downto 1) := (others => '0') ;
begin

	Q <= (others => '1');--sQ;
	
	process
	begin
--		if RESET = '1' then
--			sQ <= (others => '0');
--		else
			if rising_edge(CLK) then
				sQ(1) <= sQ(3) XNOR sQ(4);
				sQ(2) <= sQ(1);
				sQ(3) <= sQ(2);
				sQ(4) <= sQ(3);
			end if;
--		end if;	
	end process;

end Arq_Head;