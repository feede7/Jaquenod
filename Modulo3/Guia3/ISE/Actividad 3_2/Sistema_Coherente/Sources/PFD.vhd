library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_PFD is
    Port ( RefCLK : in  STD_LOGIC;
           VcoCLK : in  STD_LOGIC;
           Slower : out  STD_LOGIC;
           Faster : out  STD_LOGIC;
           nClr : out  STD_LOGIC);
end En_PFD;

architecture Arq_PFD of En_PFD is
	signal Qref, Qvco,snClr : STD_LOGIC;
begin

	snClr <= Qref NAND Qvco;
	
	process(RefCLK,snClr)
	begin
		if snClr = '0' then
			Qref <= '0';
		elsif rising_edge(RefCLK) then
			Qref <= '1';
		end if;
	end process;
		
	process(VcoCLK,snClr)
	begin
		if snClr = '0' then
			Qvco <= '0';
		elsif rising_edge(VcoCLK) then
			Qvco <= '1';
		end if;
	end process;

	Slower <= Qref;
	Faster <= Qvco;
	nClr   <= snClr;
	
end Arq_PFD;