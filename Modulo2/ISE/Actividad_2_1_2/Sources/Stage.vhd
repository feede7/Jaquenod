----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:47:54 03/23/2017 
-- Design Name: 
-- Module Name:    En_Stage - Arq_Stage 
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
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity En_Stage is
    Port ( CLK 		: in  STD_LOGIC;
           Enable 	: in  STD_LOGIC;
           UpNotDown : in  STD_LOGIC;
           Reset 		: in  STD_LOGIC;
           Q 			: out  STD_LOGIC;
           Cin 		: in  STD_LOGIC;
           Cout 		: out  STD_LOGIC);
end En_Stage;

architecture Arq_Stage of En_Stage is
	signal sQ : STD_LOGIC;
begin

	Q 		<= sQ;
	Cout	<= ( Cin and sQ ) when UpNotDown = '1' else
				( Cin and not sQ);
	
	process(CLK)
	begin
		if Reset = '1' then
			sQ		<= not UpNotDown;
		elsif rising_edge(CLK) then
			sQ <= ( Cin and Enable ) XOR sQ;
		end if;
	end process;

end Arq_Stage;

