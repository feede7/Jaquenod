library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_Recupera_CLK is
    Port ( Reloj8x 	: in  STD_LOGIC;
           Reset 		: in  STD_LOGIC;
           DataIn 	: in  STD_LOGIC;
           Reloj 		: out  STD_LOGIC;
           DataSync	: out  STD_LOGIC);
end En_Recupera_CLK;

architecture Arq_Recupera_CLK of En_Recupera_CLK is
	signal sReloj			: STD_LOGIC;
	signal sReloj1			: STD_LOGIC;
	signal sReloj_edge	: STD_LOGIC;
	signal sDataIn			: STD_LOGIC;
	signal DataIn_edge	: STD_LOGIC;
	signal DIV 				: unsigned(7 downto 0) := to_unsigned(8,8);
	signal NUM	 			: unsigned(7 downto 0) := to_unsigned(5,8);
	signal Count_Fast		: unsigned(9 downto 0);
	signal Count_Slow		: unsigned(9 downto 0);
	signal Mean				: signed(7 downto 0);
	signal Count_Before_Data: unsigned(9 downto 0);
	signal sPFD_Slower 	: STD_LOGIC;
	
	constant MAX_DEN		: unsigned(7 downto 0) := to_unsigned(20,8);
	constant DIV_MEAN		: NATURAL := 3;
begin
	---------------- Generación de relojes ----------------
	-- Reloj8x = Reloj * 8

	Ins_Reloj: entity work.En_Div_Bresenham(Arq_DIV_Bresenham)
	port map(
		CLK_IN	 => Reloj8x,
		Reset		 => Reset,
		N			 => STD_LOGIC_VECTOR(DIV),
		Num		 => STD_LOGIC_VECTOR(NUM),
		Den		 => STD_LOGIC_VECTOR(MAX_DEN),
		Tick_Out  => sReloj
		);

	process(Reloj8x)
	begin
		if rising_edge(Reloj8x) then	
			Reloj		<= sReloj1;	-- Retraso el reloj recuperado
			sReloj1	<= sReloj;
			sDataIn	<= DataIn;	-- Registro el último dato de entrada
		end if;
	end process;
	
   DataIn_edge <= DataIN XOR sDataIn;	-- Detector de flancos señal de entrada

	INS_MC4044: entity work.En_MC4044(Arq_MC4044)
    Port map(
		R 		=> DataIn_edge,
		V 		=> sReloj,
		U1		=> open,
		D1		=> sPFD_Slower,
		State => open
	  );

	process(Reloj8x,Reset)
	begin
		if Reset = '1' then
			Count_Slow 	<= to_unsigned(0,Count_Slow'length);
			Count_Fast 	<= to_unsigned(0,Count_Fast'length);
			DIV	      <= to_unsigned(8,NUM'length);
			NUM	      <= to_unsigned(0,NUM'length);
			Mean	      <= to_signed(0,NUM'length);
		elsif rising_edge(Reloj8x) then
			-- Toda la sincronización es controlada por los cambios en la señal de entrada
			if DataIn_edge = '1' then
				Count_Slow 	<= to_unsigned(0,Count_Slow'length);
				Count_Fast 	<= to_unsigned(0,Count_Fast'length);
				if to_integer(Count_Slow + Count_Fast) > 10 then
					-- En caso de no llegar flancos consecutivos (teniendo en cuenta que se sabe que el divisor es por 8) se analiza la distancia del último pulso de reloj recuperado con el último flanco de señal de datos.
					-- Esto se hace porque si hay muchos '1's en el canal, la ausencia de datos hace que el reloj tenga que ser estimado sin feedback, teniendo que aprovechar al máximo cada flanco recuperado de la entrada.
					if Count_Before_Data < to_unsigned(3,Count_Before_Data'length) then
						DIV <= to_unsigned(7,DIV'length);
						NUM	<= to_unsigned(to_integer(MAX_DEN)/2,NUM'length);
					elsif Count_Before_Data > to_unsigned(5,Count_Before_Data'length) and Count_Before_Data < to_unsigned(8,Count_Before_Data'length) then
						DIV <= to_unsigned(8,DIV'length);
						NUM	<= to_unsigned(to_integer(MAX_DEN)/2,NUM'length);
					else
						DIV <= to_unsigned(8,DIV'length);
						NUM	<= to_unsigned(0,NUM'length);
					end if;
				else
					-- En caso de flancos sucesivos se busca un Duty del 50% en la señal entregada por el MC4044, lo que indicaría que se matiene sincronizado tanto en frecuencia y fase altrdedor del flanco descendente
					-- del reloj original.
					if Count_Fast = to_unsigned(0,Count_Slow'length) then
						DIV 	<= to_unsigned(8,DIV'length);
						NUM	<= to_unsigned(0,NUM'length);
					elsif Count_Slow = to_unsigned(0,Count_Slow'length) or Count_Slow > Count_Fast then
						DIV 	<= to_unsigned(8,DIV'length);
						NUM	<= to_unsigned(to_integer(MAX_DEN)/3,NUM'length);
						if Mean < to_signed(to_integer(MAX_DEN)/DIV_MEAN,Mean'length) then
						-- Este parámetro es utilizado para tomar una decisión a la hora de tener que estimar el reloj en ausencia de flancos.
						-- Se acumula la tendencia del reloj local respecto al de los datos.
							Mean	<= Mean + to_signed(1,Mean'length);
						end if;
					elsif Count_Slow < Count_Fast then
						DIV 	<= to_unsigned(7,DIV'length);
						NUM	<= to_unsigned(to_integer(MAX_DEN)*2/3,NUM'length);
						if Mean > to_signed(0 - to_integer(MAX_DEN)/DIV_MEAN,Mean'length) then
							Mean	<= Mean - to_signed(1,Mean'length);
						end if;
					else
						DIV 	<= to_unsigned(8,DIV'length);
						NUM	<= to_unsigned(0,NUM'length);
					end if;
				end if;
			else
				if to_integer(Count_Slow + Count_Fast) > 10 then
				-- En caso de detectar ausencia de flancos de entrada se aplica el divisor estimado por tendencia del sistema
					if Mean < to_signed(0,Mean'length) then
						DIV 	<= to_unsigned(7,DIV'length);
						NUM	<= to_unsigned(to_integer(MAX_DEN)+to_integer(Mean),NUM'length);
					else
						DIV 	<= to_unsigned(8,DIV'length);
						NUM	<= to_unsigned(to_integer(Mean),NUM'length);
					end if;
				end if;

				-- Análisis del Duty de la señal entregada por el MC4044
				if sPFD_Slower = '1' then
					Count_Fast <= Count_Fast + to_unsigned(1,Count_Fast'length);
				end if;
				
				if sPFD_Slower = '0' then
					Count_Slow <= Count_Slow + to_unsigned(1,Count_Slow'length);
				end if;

				-- Contador utilizado para medir la distancia del reloj recuperado al flanco de dato de entrada
				Count_Before_Data <= Count_Before_Data + to_unsigned(1,Count_Before_Data'length);

				if sReloj = '1' then
					Count_Before_Data <= to_unsigned(0,Count_Before_Data'length);
				end if;
			end if;
		end if;
	end process;
	
end Arq_Recupera_CLK;