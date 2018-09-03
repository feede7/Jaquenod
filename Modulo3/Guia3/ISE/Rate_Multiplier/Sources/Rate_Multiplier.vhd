library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_Rate_Multiplier is
	Generic (M : NATURAL := 5; N : NATURAL := 5) ;
   Port (	CLK_IN  : in  STD_LOGIC;
					Reset		: in  STD_LOGIC;
					CLK_OUT : out STD_LOGIC;
					Q_LFSR	: out STD_LOGIC_VECTOR(M downto 1));
end En_Rate_Multiplier;

architecture Arq_Rate_Multiplier of En_Rate_Multiplier is
	subtype salida is STD_LOGIC_VECTOR(M downto 1);

  function LFSR (	FB, n_stages, n_counts : integer;
	 								init_value : STD_LOGIC_VECTOR(M downto 1);
									type_of_FB : std_ulogic) return salida is -- type_of_FB = '0' es XOR, '1' es XNOR
      variable Q 		: salida;
  begin
		Q 	:= init_value;

		loop1 :	for i in 1 to n_counts loop
				Q := Q(n_stages-1 downto 1) & (type_of_FB XOR Q(FB) XOR Q(n_stages));
			end loop loop1;
		return Q;
  end LFSR;

	signal sQ_LFSR 		: salida;
	signal Reset_AUX, Reset_LFSR, Valid_Pulse	: STD_LOGIC;
begin

LFSR_5: entity work.En_LFSR(Arq_LFSR)
	generic map( N => M) -- LFSR módulo 31 = 2**M-1, siendo M el módulo del Rate-Multiplier
	port map(
		CLK		=> CLK_IN,
		Reset		=> Reset_LFSR,
		Type_FB	=> '1', -- XNOR
		FB			=> 2,
		Q	 		=> sQ_LFSR
	);

	Q_LFSR <= sQ_LFSR;

	-- Este process trabaja registrando la salida del LFSR esperando el último valor del contador,
	--de esta manera se busca "estirar el Reset" de manera de simular un contador de módulo M
	process(CLK_IN)
	begin
		if rising_edge(CLK_IN) then
			if sQ_LFSR = LFSR(2,M,2**M-2,STD_LOGIC_VECTOR(to_unsigned(0,M)),'1') then
				Reset_AUX <= '1';
			else
				Reset_AUX <= '0';
			end if;
		end if;
	end process;

	Reset_LFSR 	<= Reset_AUX or Reset;

	Valid_Pulse	<= '1' when ( ( ( (2**M)-1 - to_integer(unsigned(sQ_LFSR)) )  <= N ) and ( N < (2**M)/2) )
							 or   ( ( to_integer(unsigned(sQ_LFSR)) < N-1 ) and ( N  >= (2**M)/2) ) -- Tiene en cuenta le doble cero del LFSR
							 else '0';

	CLK_OUT <= CLK_IN when Valid_Pulse = '1' and Reset = '0' else '0';

end Arq_Rate_Multiplier;
