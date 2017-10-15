library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_Codificador is
    Port ( CLKx2 		: in  STD_LOGIC;
           RST 		: in  STD_LOGIC;
           Data_In 	: in  STD_LOGIC;
           Data_Out 	: out STD_LOGIC);
end En_Codificador;

architecture Arq_Codificador of En_Codificador is
	signal Flanco : STD_LOGIC;
	signal Toggle : STD_LOGIC;
	signal Data_Buffer : STD_LOGIC;
begin

	process(CLKx2,RST)
	begin
		if RST = '1' then
			Data_Out 	<= '0';
			Flanco 		<= '0';
			Data_Buffer <= '0';
			Toggle		<= '0';
		elsif rising_edge(CLKx2) then
			if Flanco = '0' then
				Flanco <= '1';
				Data_Buffer <= Data_In;
				if Data_Buffer = '0' then
					Data_Out <= Data_In XOR Toggle;
				else
					Toggle <= not Toggle;
					Data_Out <= Data_In XOR not Toggle;
				end if;
			else
				Flanco <= '0';
				Data_Out <= not (Data_Buffer XOR Toggle);
			end if;
		end if;
	end process;

end Arq_Codificador;
