library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_Cod_Stuffing is
    Port ( Datos 		: in  STD_LOGIC;
           Reloj 		: in  STD_LOGIC;
           SndSync 	: in  STD_LOGIC;
           Reset	 	: in  STD_LOGIC;
           EnaTx 		: out STD_LOGIC;
           DataOut 	: out STD_LOGIC);
end En_Cod_Stuffing;

architecture Arq_Cod_Stuffing of En_Cod_Stuffing is
	signal State : STD_LOGIC_Vector(1 downto 0) := "00";
	signal index : unsigned(3 downto 0);
	signal Count_Ones : unsigned(3 downto 0);
	
	constant SyncFrame : STD_LOGIC_VECTOR(0 to 13) := "00000001111111";
begin

	process(Reloj)
	begin
		if rising_edge(Reloj) then
			if Reset = '1' then
				State <= "00";
				EnaTx <= '0';
				Count_Ones <= to_unsigned(0,Count_Ones'length);				
			else
				case State is 
					when "00" =>
						if Datos = '1' then
							Count_Ones	<= Count_Ones + to_unsigned(1,Count_Ones'length);
						else
							Count_Ones <= to_unsigned(0,Count_Ones'length);				
						end if;

						if Datos = '1' and Count_Ones = to_unsigned(6,Count_Ones'length) then
							DataOut <= '0';
							EnaTx		<= '0';
							Count_Ones <= to_unsigned(0,Count_Ones'length);				
						else
							DataOut 	<= Datos;
							EnaTx		<= '1';
						end if;
						
						if SndSync = '1' then
							State 		<= "01";
							DataOut 		<= SyncFrame(0);
							index 		<= to_unsigned(1,Count_Ones'length);
							Count_Ones 	<= to_unsigned(0,Count_Ones'length);				
							EnaTx			<= '0';
						end if;
						
					when "01" =>
						DataOut 	<= SyncFrame(to_integer(index));
						index 	<= index + to_unsigned(1,Count_Ones'length);
						if index = to_unsigned(13,Count_Ones'length) then
							State <= "00";
							EnaTx	<= '1';
						end if;
						
					when others =>
						State <= "00";

				end case;
			end if;
		end if;
	end process;

end Arq_Cod_Stuffing;