LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
USE ieee.std_logic_unsigned.ALL;

library std;
use std.textio.all; 

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
-- USE ieee.numeric_std.ALL;
 
ENTITY PRNG_TB IS
generic(M : NATURAL := 31);
END PRNG_TB;
 
ARCHITECTURE behavior OF PRNG_TB IS 
 
   --Inputs
   signal CLK : std_logic := '0';
   signal RST : std_logic := '0';
   signal ZERO : std_logic := '0';

 	--Outputs
   signal RN : std_logic_vector(M-1 downto 0);

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: entity work.En_PRNG_150(Arq_PRNG_150) 
		GENERIC MAP(N => M)
		PORT MAP (
          CLK => CLK,
          RST => RST,
          RN => RN
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;

	RN_Zero(M/2-1) <= '1';
	RN_Zero(M/2) 	<= '1';
	RN_Zero(M/2+1) <= '1';

	RST <= '1', '0' after 100 ns;
	
	-- Esto saca un .dat con cada valor de RN siempre que cambie de valor
	-- La idea es levantarlo con MATLAB, y con el siguiente comando te hace
	-- los gráficos lindos de PRNG de Wolfram
	-- figure;a=dlmread('filename.dat');image(~repmat(de2bi(a(1:17)),[1,1,3]))
	-- El 17 es opcional, es para cortar porque dsp se repiten
	process(RN)
		file file_handler     : text open write_mode is "filename.dat";
		Variable row          : line;
	begin
--		Write value to line
		write(row, conv_integer(RN));
--		Write line to the file
		writeline(file_handler ,row);
	end process;
END;