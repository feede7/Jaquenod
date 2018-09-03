----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:11:18 03/21/2017 
-- Design Name: 
-- Module Name:    En_SincroAndEdge - Arq_SincroAndEdge 
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

entity En_SincroAndEdge is
    Port ( CLK 	: in  STD_LOGIC;
           D 		: in  STD_LOGIC;
           D_Reg	: out STD_LOGIC;
           Edge	: out STD_LOGIC
			  );
end En_SincroAndEdge;

architecture Arq_SincroAndEdge of En_SincroAndEdge is
	signal Q1, Q2, D3 : STD_LOGIC;
begin

	D_Reg	<= Q2;
	D3		<= Q1 XOR Q2;
	
	process(CLK)
	begin
		if rising_edge(CLK) then
			Q1 	<= D;
			Q2		<= Q1;
			Edge	<= D3;
		end if;
	end process;

end Arq_SincroAndEdge;

