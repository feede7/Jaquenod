----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:36:23 03/23/2017 
-- Design Name: 
-- Module Name:    En_Head - Arq_Head 
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

entity En_Head is
    Port ( CLK 		: in  STD_LOGIC;
           Enable		: in  STD_LOGIC;
           UpNotDown : in  STD_LOGIC;
           Reset 		: in  STD_LOGIC;
           Q 			: out  STD_LOGIC_VECTOR (4 downto 1));
end En_Head;

architecture Arq_Head of En_Head is
	signal Cout : STD_LOGIC_VECTOR(4 downto 0);
begin

	Cout(0) <= '1';
	
	Inst_Stages:
   for i in 1 to 4 generate
      begin
         Stage_i: entity work.En_Stage(Arq_Stage)
			port map(
				CLK 			=> CLK,
				Enable		=> Enable,
				UpNotDown	=> UpNotDown,
				Reset			=> Reset,
				Q				=> Q(i),
				Cin			=> Cout(i-1),
				Cout			=> Cout(i)
			);
   end generate;

end Arq_Head;

