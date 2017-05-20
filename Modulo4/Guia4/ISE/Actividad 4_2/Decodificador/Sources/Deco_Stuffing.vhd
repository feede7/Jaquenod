library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_Deco_Stuffing is
    Port ( Reloj8x : in  STD_LOGIC;
           Reset : in  STD_LOGIC;
           DataIn : in  STD_LOGIC;
           Datos : out  STD_LOGIC;
           EnaRx : out  STD_LOGIC;
           Sync : out  STD_LOGIC;
           Reloj_Rec : out  STD_LOGIC;
           Error : out  STD_LOGIC);
end En_Deco_Stuffing;

architecture Arq_Deco_Stuffing of En_Deco_Stuffing is
	signal Register_Temp : STD_LOGIC_VECTOR(12 downto 0) := (others => '0');
	signal Data : STD_LOGIC;
	signal sReloj_Rec : STD_LOGIC;
	signal DataSync : STD_LOGIC;
	signal sDataIn : STD_LOGIC := '0';
	signal Count_Ones : unsigned(3 downto 0);

	constant SyncFrame : STD_LOGIC_VECTOR(12 downto 0) := "0000000111111";
begin
	
	Ins_Recu_CLK : entity work.En_Recupera_CLK(Arq_Recupera_CLK)
	PORT MAP(
			Reloj8x 	=> Reloj8x,
			Reset		=> Reset,
			DataIn	=> DataIn,
			Reloj		=> sReloj_Rec,
			DataSync	=> DataSync
	);
	
	Reloj_Rec <= sReloj_Rec;
	Data <= DataSync XNOR sDataIn; -- Si hay cambio es un '0', si son iguales es un '1'

	process(sReloj_Rec, Reset)
	begin
		if Reset = '1' then
			EnaRx 	<= '0';
			Sync		<= '0';
			sDataIn 	<= DataSync;
			sDataIn	<= '0';
			Error		<= '0';
			Datos		<= '0';
			Count_Ones <= to_unsigned(0,Count_Ones'length);		
			Register_Temp <= (others => '0');
		elsif rising_edge(sReloj_Rec) then
			sDataIn <= DataSync;
			Sync	<= '0';
			EnaRx <= '0';
			Error <= '0';
			Register_Temp <= Register_Temp(Register_Temp'high-1 downto 0) & Data;

			if Data = '1' and Register_Temp = SyncFrame then
				Sync	<= '1';
				Register_Temp <= (others => '0');
				Count_Ones 	<= to_unsigned(0,Count_Ones'length);
			else
				if Data = '1' and Count_Ones = to_unsigned(5,Count_Ones'length) then
					Count_Ones 	<= to_unsigned(6,Count_Ones'length); -- Mantiene EnaRx = '0'
				elsif Count_Ones = to_unsigned(6,Count_Ones'length) then
					EnaRx <= '1';
					if Data = '1' then
						Error <= '1';
					end if;
					Count_Ones 	<= to_unsigned(0,Count_Ones'length);						
				else
					if Data = '1' then
						Count_Ones 	<= Count_Ones + to_unsigned(1,Count_Ones'length);	
					else
						Count_Ones 	<= to_unsigned(0,Count_Ones'length);
					end if;
					EnaRx <= '1';
					Datos <= Data;--Register_Temp(Register_Temp'high);
				end if;
			end if;
		end if;
	end process;
end Arq_Deco_Stuffing;