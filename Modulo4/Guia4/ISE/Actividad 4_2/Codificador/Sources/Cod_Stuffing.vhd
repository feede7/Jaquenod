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
	signal Count_Ceros : unsigned(9 downto 0);
	
	signal sDataOut : STD_LOGIC := '0';
	signal sDataIn	: STD_LOGIC := '0';
	
	constant SyncFrame : STD_LOGIC_VECTOR(14 downto 0) := "011111110000000";
	constant CerosBeforSync : NATURAL := 50;
begin

	DataOut <= sDataOut;

	process(Reloj)
	begin
		if rising_edge(Reloj) then
			sDataOut 	<= sDataIn XNOR sDataOut;
			if Reset = '1' then
				State 		<= "00";
				EnaTx 		<= '0';
				sDataIn 		<= '0';
				Count_Ones 	<= to_unsigned(0,Count_Ones'length);	
				Count_Ceros <= to_unsigned(0,Count_Ceros'length);	
				index 		<= to_unsigned(0,Count_Ones'length);
			else
				case State is 
					when "00" =>
						if Count_Ceros = to_unsigned(CerosBeforSync,Count_Ceros'length) then
							State	<= "10";
						else
							Count_Ceros	<= Count_Ceros + to_unsigned(1,Count_Ceros'length);
						end if;
						
					when "01" =>
						sDataIn	<= Datos;
						EnaTx		<= '1';
						
						if Datos = '1' then
							if Count_Ones = to_unsigned(5,Count_Ones'length) then
								EnaTx			<= '0';
								State 		<= "11";
								Count_Ones	<= to_unsigned(0,Count_Ones'length);
							else
								Count_Ones	<= Count_Ones + to_unsigned(1,Count_Ones'length);
							end if;
						else
							Count_Ones <= to_unsigned(0,Count_Ones'length);				
						end if;

						if SndSync = '1' then
							State 		<= "10";
							sDataIn 		<= SyncFrame(0);
							index 		<= to_unsigned(1,Count_Ones'length);
							Count_Ones 	<= to_unsigned(0,Count_Ones'length);				
							EnaTx			<= '0';
						end if;
						
					when "10" =>
						sDataIn	<= SyncFrame(to_integer(index));
						index 	<= index + to_unsigned(1,Count_Ones'length);
						if index = to_unsigned(SyncFrame'high,Count_Ones'length) then
							State <= "01";
							EnaTx	<= '1';
						end if;
						
					when "11" =>
						EnaTx			<= '1';
						sDataIn		<= '0';
						State 		<= "01";

					when others =>
						State <= "00";

				end case;
			end if;
		end if;
	end process;

end Arq_Cod_Stuffing;