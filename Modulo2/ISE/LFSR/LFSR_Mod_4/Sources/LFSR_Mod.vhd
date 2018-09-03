library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

use IEEE.NUMERIC_STD.ALL;

entity En_LFSR_Mod is
		Generic ( N : NATURAL := 7 );
    Port ( modulo : out  STD_LOGIC_VECTOR(N downto 1);
           etapas : out  STD_LOGIC_VECTOR(N downto 1));
end En_LFSR_Mod;

architecture Arq_LFSR_Mod of En_LFSR_Mod is

	type salida is array (1 to 2) of STD_LOGIC_VECTOR(N downto 1);
	
	function LFSR_Mod_4(number_in : integer; type_of_FB : std_logic) return salida is
		variable Q		 : STD_LOGIC_VECTOR(N downto 1) := STD_LOGIC_VECTOR(to_unsigned(number_in,N));
		variable modulo : unsigned(N downto 1) := to_unsigned(0,N);
		variable modulo_ant : unsigned(N downto 1) := to_unsigned(1,N);
		variable best_FB : unsigned(N-1 downto 1) := to_unsigned(0,N-1);
		variable vSalida : salida;
	begin
	
	loop6:
		for FB41 in 1+1+1+5+5 to N-5 loop
		loop7:
			for FB42 in 1+1+5 to FB41-5 loop
			loop8:
				for FB43 in 1 to FB42-5 loop
					loop9:
						while Q /= STD_LOGIC_VECTOR(to_unsigned(number_in,N)) or modulo = to_unsigned(0,N) loop
							Q := Q(N - 1 downto 1) & (type_of_FB XOR Q(FB43) XOR Q(FB42) XOR Q(FB41) XOR Q(N));
							modulo := modulo + to_unsigned(1,N);
						end loop loop9;
--						if modulo >= modulo_ant then
						if modulo = to_unsigned(1_000_000,N) then
							modulo_ant := modulo;
							best_FB := to_unsigned(2**(FB41-1) + 2**(FB42-1) + 2**(FB43-1),N-1);
						end if;
						Q		 := STD_LOGIC_VECTOR(to_unsigned(number_in,N));
						modulo := to_unsigned(0,N);
				end loop loop8;
			end loop loop7;
		end loop loop6;

		vSalida(1) := '1' & STD_LOGIC_VECTOR(best_FB);
		vSalida(2) := STD_LOGIC_VECTOR(modulo_ant);
		return vSalida;
	end LFSR_Mod_4;
	
	signal LFSR_Return : salida;
	
	begin

	LFSR_Return <= LFSR_Mod_4(48,'1');
	
	etapas <= LFSR_Return(1);
	modulo <= LFSR_Return(2);
	
end Arq_LFSR_Mod;