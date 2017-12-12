library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_ClockE is
	Generic 	(	Frecuency : NATURAL := 921_600;
					Frecuencia_de_Entrada : NATURAL:= 50_000_000;
					N_LFSR : NATURAL := 15); -- Optimizado para orden 15 donde realimentanco de la ltima etapa se logra mximo mdulo (2**15 - 1)
    Port	(  Clk     : in  std_logic;
			   Enabled : in  std_logic;
			   ClkOut  : out std_logic);
end En_ClockE;

architecture Arq_ClockE of En_ClockE is
    subtype salida is STD_LOGIC_VECTOR(N_LFSR downto 1);

    function LFSR ( FB, n_stages, n_counts : integer; init_value : salida; type_of_FB : std_ulogic) return salida is -- type_of_FB = '0' es XOR, '1' es XNOR
      variable Q     : salida := init_value;
    begin
        loop1 :
            for i in 1 to n_counts loop
                Q := Q(n_stages-1 downto 1) & (type_of_FB XOR Q(FB) XOR Q(n_stages));
            end loop loop1;
        return Q;
    end LFSR;

    signal Number : salida;
    signal Q : STD_LOGIC_VECTOR(N_LFSR downto 1);

begin

    Number  <= LFSR(1,N_LFSR,Frecuencia_de_Entrada/Frecuency - 1,std_logic_vector(to_unsigned(0,N_LFSR)),'1');

    process(CLK)
    begin
        if rising_edge(CLK) then
            if Enabled = '0' then
					Q <= (others => '0');
            else
				   ClkOut    <= '0';
					if Q = Number then
					   ClkOut    <= '1';
						Q <= (others => '0');
					else
						Q <= Q(N_LFSR-1 downto 1) & (Q(1) XNOR Q(N_LFSR));
					end if;
            end if;
        end if;
    end process;

end Arq_ClockE;