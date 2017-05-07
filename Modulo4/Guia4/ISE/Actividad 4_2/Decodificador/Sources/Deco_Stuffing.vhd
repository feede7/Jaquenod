library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_Deco_Stuffing is
    Port ( Reloj8x : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           DataIn : out  STD_LOGIC;
           Datos : out  STD_LOGIC;
           EnaRx : out  STD_LOGIC;
           Sync : out  STD_LOGIC);
end En_Deco_Stuffing;

architecture Arq_Deco_Stuffing of En_Deco_Stuffing is
	signal Register_Temp : STD_LOGIC_VECTOR(12 downto 0);
	signal Data : STD_LOGIC;

	constant SyncFrame : STD_LOGIC_VECTOR(12 downto 0) := "0000000111111";
begin

	Data <= (DataIn XNOR DataIn_Ant); -- Si hay cambio es un '0', si son iguales es un '1'

	process(Reloj)
	begin
		if rising_edge(Reloj) then
			DataIn_Ant <= DataIn;
						
			if Reset = '1' then
				EnaRx <= '0';
				Count_Ones <= to_unsigned(0,Count_Ones'length);
			else
				Sync	<= '0';
				EnaRx <= '1';

				if Data = '1' and Register_Temp = SyncFrame then
					EnaRx <= '0';
					Sync	<= '1';
				elsif Data = '0' and Register_Temp(5 downto 0) = "111111" then
					EnaRx <= '0';
				end if;
				
				Datos <= Register_Temp(Register_Temp'high);
				Register_Temp <= Register_Temp(Register_Temp'high-1 downto 0) & Data;
			end if;
		end if;
	end process;
end Arq_Deco_Stuffing;