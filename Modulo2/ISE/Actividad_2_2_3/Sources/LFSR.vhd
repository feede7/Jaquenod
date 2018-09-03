library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

use work.Common_Types_Pck.all;

entity En_LFSR is
	generic ( N : NATURAL := 20);
	port(
		CLK				: in  STD_LOGIC;
		Reset			: in  STD_LOGIC;
		ocasiones : out STD_LOGIC_VECTOR(10 downto 1)
	);
end En_LFSR;

architecture Arq_LFSR of En_LFSR is

	subtype salida is STD_LOGIC_VECTOR(N downto 1);

  function LFSR ( FB, n_stages, n_counts : integer; init_value : salida; type_of_FB : std_ulogic) return salida is -- type_of_FB = '0' es XOR, '1' es XNOR
      variable Q 	: salida := init_value;
  begin
		loop1 :
			for i in 1 to n_counts loop
				Q := Q(n_stages-1 downto 1) & (type_of_FB XOR Q(FB) XOR Q(n_stages));
			end loop loop1;
		return Q;
  end LFSR;

	signal number_to_find : buscar;
	signal Q : STD_LOGIC_VECTOR(N downto 1);
begin

	number_to_find(0)  <= LFSR(N-3,N,1000000-1,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(1)  <= LFSR(N-3,N,47       ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(2)  <= LFSR(N-3,N,2555     ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(3)  <= LFSR(N-3,N,7981     ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(4)  <= LFSR(N-3,N,91466    ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(5)  <= LFSR(N-3,N,18965    ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(6)  <= LFSR(N-3,N,215543   ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(7)  <= LFSR(N-3,N,327333   ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(8)  <= LFSR(N-3,N,510321   ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(9)  <= LFSR(N-3,N,777666   ,std_logic_vector(to_unsigned(0,N)),'1');
	number_to_find(10) <= LFSR(N-3,N,892345   ,std_logic_vector(to_unsigned(0,N)),'1');

	process(CLK)
	begin
		if rising_edge(CLK) then
			if Reset = '1' or Q = number_to_find(0) then
				Q <= (others => '0');
			else
				Q <= Q(N-1 downto 1) & (Q(N-3) XNOR Q(N));
			end if;
		end if;
	end process;

	Ins_Salida:
	for i in 1 to 10 generate
		ocasiones(i) <= '1' when Q = number_to_find(i) else '0';
	end generate;

end Arq_LFSR;
