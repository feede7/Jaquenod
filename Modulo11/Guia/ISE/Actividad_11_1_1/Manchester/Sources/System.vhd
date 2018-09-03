
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
Port ( 	CLKx2 	: in  STD_LOGIC;
			CLKx4 	: in  STD_LOGIC;
			RST 		: in  STD_LOGIC;
			Data_In 	: in  STD_LOGIC;
			Data_Out : out STD_LOGIC);
end En_System;

architecture Arq_System of En_System is
	signal Data_Out_Cod : STD_LOGIC;
begin

   Inst_Cod: entity work.En_Codificador(Arq_Codificador)
	PORT MAP (
          CLKx2 		=> CLKx2,
          RST 			=> RST,
          Data_In 	=> Data_In,
          Data_Out 	=> Data_Out_Cod
        );
		  
   Inst_Dec: entity work.En_Decodificador(Arq_Decodificador)
	PORT MAP (
          CLKx4 		=> CLKx4,
          RST 			=> RST,
          Data_In 	=> Data_Out_Cod,
          Data_Out 	=> Data_Out
        );
		  
end Arq_System;