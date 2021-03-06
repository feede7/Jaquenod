library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.NUMERIC_STD.ALL;

entity En_LFSR is
	generic ( N : NATURAL := 7);
	port(
		cuentas : out STD_LOGIC_VECTOR(7 downto 1)
	);
end En_LFSR;

architecture Arq_LFSR of En_LFSR is
	subtype salida is STD_LOGIC_VECTOR(7 downto 1);

   function LFSR ( FB, n_stages, n_counts : integer; init_value : STD_LOGIC_VECTOR(N downto 1); type_of_FB : std_ulogic) return salida is -- type_of_FB = '0' es XOR, '1' es XNOR
      variable Q 		: salida;
   begin
		Q 		:= init_value;

		loop1 :	for i in 1 to n_counts loop
				Q := Q(n_stages-1 downto 1) & (type_of_FB XOR Q(FB) XOR Q(n_stages));
			end loop loop1;
		return Q;
   end LFSR;

begin

	cuentas <= LFSR(2,4,3,to_unsigned(0,N),'1');

end Arq_LFSR;
