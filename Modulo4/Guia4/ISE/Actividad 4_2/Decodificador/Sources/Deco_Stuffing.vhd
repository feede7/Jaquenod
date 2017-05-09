library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_Deco_Stuffing is
    Port ( Reloj8x 	: in  STD_LOGIC;
           Reset 		: in  STD_LOGIC;
           DataIn 	: in  STD_LOGIC;
           Datos 		: out STD_LOGIC;
           EnaRx 		: out STD_LOGIC;
           Sync 		: out STD_LOGIC;
			  Reloj_Rec	: out STD_LOGIC;
			  Error		: out STD_LOGIC);
end En_Deco_Stuffing;

architecture Arq_Deco_Stuffing of En_Deco_Stuffing is
	signal Register_Temp : STD_LOGIC_VECTOR(12 downto 0);
	signal Data 			: STD_LOGIC := '0';
	signal DataSync 		: STD_LOGIC := '0';
	signal DataSync_Ant	: STD_LOGIC := '0';
	signal sReloj_Rec		: STD_LOGIC := '0';
	signal sSync			: STD_LOGIC := '0';
	signal one6				: STD_LOGIC := '0';
	signal index			: unsigned(3 downto 0) := to_unsigned(0,4);
	signal count_ones		: unsigned(3 downto 0) := to_unsigned(0,4);

	constant SyncFrame : STD_LOGIC_VECTOR(12 downto 0) := "0000000111111";
begin

	Ins_Recu_CLK: entity work.En_Recupera_CLK(Arq_Recupera_CLK)
	PORT MAP(
		Reloj8x 	=> Reloj8x,
      Reset 	=> Reset,
      DataIn 	=> DataIn,
      Reloj	 	=> sReloj_Rec,
      DataSync => DataSync);
		
--	Data <= 	'0' when Reset = '1' else
--				DataSync XNOR DataSync_Ant; -- Si hay cambio es un '0', si son iguales es un '1'
	
	Reloj_Rec <= sReloj_Rec;
	
	process(sReloj_Rec, Reset)
	begin
		if Reset = '1' then
			sSync	<= '1';
			Sync	<= '1';
			EnaRx <= '0';
			one6 	<= '0';
			Datos <= '0';
			Error <= '0';
			DataSync_Ant <= '0';
			index	<= to_unsigned(0,index'length);
			Register_Temp <= (others => '0');
			count_ones <= to_unsigned(0,count_ones'length);
		elsif rising_edge(sReloj_Rec) then
			DataSync_Ant <= DataSync;
			Data <= DataSync XNOR DataSync_Ant;
						
			EnaRx <= '0';
			Sync	<= '0';
			Error	<= '0';

			if sSync = '0' then
				if Data = '1' and Register_Temp = SyncFrame then
					sSync	<= '1';
					Sync	<= '1';
					index	<= to_unsigned(0,index'length);
					Register_Temp <= (others => '0');
					count_ones <= to_unsigned(0,count_ones'length);
				else
					if count_ones = to_unsigned(6,count_ones'length) then
						count_ones <= to_unsigned(0,count_ones'length);
						if Data = '1' then
							Error <= '1';
						end if;
					else
						if Data = '1' then
							count_ones <= count_ones + to_unsigned(1,count_ones'length);
						else
							count_ones <= to_unsigned(0,count_ones'length);
						end if;
						EnaRx <= '1';
						Datos <= Register_Temp(Register_Temp'high);
						Register_Temp <= Register_Temp(Register_Temp'high-1 downto 0) & Data;
					end if;
				end if;
			else
				index	<= index + to_unsigned(1,index'length);
			
				if count_ones = to_unsigned(6,count_ones'length) then
					count_ones <= to_unsigned(0,count_ones'length);
					if Data = '1' then
						Error <= '1';
					end if;
				else
					if Data = '1' then
						count_ones <= count_ones + to_unsigned(1,count_ones'length);
					else
						count_ones <= to_unsigned(0,count_ones'length);
					end if;
					Datos <= Register_Temp(Register_Temp'high);
					Register_Temp <= Register_Temp(Register_Temp'high-1 downto 0) & Data;
				end if;
				
				if index = to_unsigned(12,index'length) then
					sSync	<= '0';
				end if;
			end if;
						
		end if;
	end process;
	
end Arq_Deco_Stuffing;