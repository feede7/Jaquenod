----------------------------------------------------------------------------------
-- Company:
-- Engineer:
--
-- Create Date:    16:09:33 07/15/2017
-- Design Name:
-- Module Name:    En_PRNG_150 - Arq_PRNG_150
-- Project Name:
-- Target Devices:
-- Tool versions:
-- Description:
--
-- Dependencies:
--
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_PRNG_150 is
	Generic( N : NATURAL := 10);
	Port (
		CLK 	: in  STD_LOGIC;
		RST 	: in  STD_LOGIC;
		RN 	: out STD_LOGIC_VECTOR(N-1 downto 0)
	);
end En_PRNG_150;

architecture Arq_PRNG_150 of En_PRNG_150 is
	signal sRN : STD_LOGIC_VECTOR(N-1 downto 0);
	signal sRN_Reg : STD_LOGIC_VECTOR(N-1 downto 0);
begin

	sRN(0) <= '0' XOR sRn_Reg(0) XOR sRn_Reg(1) when RST = '0' else '0';
	bucle: for i in 1 to N-2 generate
		sRN(i) <= sRn_Reg(i-1) XOR sRn_Reg(i) XOR sRn_Reg(i+1) when RST = '0' else '0';
	end generate;
	sRN(N-1) <= sRn_Reg(N-2) XOR sRn_Reg(N-1) XOR '0' when RST = '0' else '0';

	process(CLK,RST)
	begin
		if RST = '1' then
			sRN_Reg 	<= (others=>'0');
			sRN_Reg(10) <= '1';
			sRN_Reg(20) <= '1';
		elsif rising_edge(CLK) then
			sRN_Reg <= sRN;
		end if;
	end process;

	RN <= sRN_Reg;
end Arq_PRNG_150;
