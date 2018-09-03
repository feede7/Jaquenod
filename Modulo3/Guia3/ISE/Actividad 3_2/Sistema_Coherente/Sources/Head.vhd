library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_Receptor is
    Port ( CLK_72MHz 			: in  STD_LOGIC;
           CLK_In_2048Kbps 	: in  STD_LOGIC;
           Data_In_2048Kbps 	: in  STD_LOGIC;
           Data_Out_2240Kbps 	: out STD_LOGIC);
end En_Receptor;

architecture Arq_Transmisor of En_Transmisor is

begin

	---------------- Generación de relojes ----------------
	-- 72M = 17.92M * 4.017857143 = 17.92M * (4 + 8/25)
	-- 17.92M = 2048K * 8.75 = 2048K * (8 + 3/4)
	-- 17.92M = 2240K * 8

end Arq_Transmisor;

