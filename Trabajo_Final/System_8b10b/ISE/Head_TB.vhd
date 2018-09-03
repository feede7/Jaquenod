----------------------------------------------------------------------------------
-- Company:
-- Engineer:
--
-- Create Date: 03/01/2018 12:40:38 PM
-- Design Name:
-- Module Name: Head_TB - Behavioral
-- Project Name:
-- Target Devices:
-- Tool Versions:
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
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;
library std;
use std.textio.all; 

entity Head_TB is
--  Port ( );
end Head_TB;


architecture Behavioral of Head_TB is

    component En_Head is
	 Generic (Error : STD_LOGIC);
    Port (
        Dato_In     : in  STD_LOGIC_VECTOR(7 downto 0);
        DnK_Cod     : in  STD_LOGIC;
        nRD_Cod     : in  STD_LOGIC;
		  Dato_Coded  : out STD_LOGIC_VECTOR(9 downto 0);
        Error_Cod   : out STD_LOGIC;
        DnK_Dec     : out STD_LOGIC;
        nRD_Dec     : out STD_LOGIC;
        Error_Dec   : out STD_LOGIC;
        Dato_Out    : out STD_LOGIC_VECTOR(7 downto 0)
    );
    end component;

    signal Dato_In : unsigned(7 downto 0) := to_unsigned(255,8);
    signal Dato_Out : STD_LOGIC_VECTOR(7 downto 0);
    signal Dato_Coded : STD_LOGIC_VECTOR(9 downto 0);

    signal clk_aux_1 : std_logic := '0';
    constant OSC1_Period : time := 500 ps;

    signal equal : std_logic;
    signal DnK_Dec : std_logic_vector(1 downto 0);
    signal nRD_Dec : std_logic_vector(1 downto 0);
begin

    Inst_Head: En_Head
	 generic map(Error => '0')
    port map(
        Dato_In     => std_logic_vector(Dato_In),
        DnK_Cod     => '1',
        nRD_Cod     => '1',
		  Dato_Coded  => Dato_Coded,
        Error_Cod   => open,
        DnK_Dec     => DnK_Dec(0),
        nRD_Dec     => nRD_Dec(0),
        Error_Dec   => open,
        Dato_Out    => Dato_Out
    );

   -- Clock process definitions
   aux1_process :process
   begin
		clk_aux_1 <= '0';
		wait for OSC1_Period/2;
		clk_aux_1 <= '1';
		wait for OSC1_Period/2;
   end process;

    Dato_In <= Dato_In + to_unsigned(1,Dato_In'length) when rising_edge(clk_aux_1);

    equal <= '1' when unsigned(Dato_In) = unsigned(Dato_Out) else '0';

		process(clk_aux_1)
			file file_handler     : text open write_mode is "filename.dat";
			Variable row          : line;
		begin
			if falling_edge(clk_aux_1) then
				write(row, to_integer(unsigned(Dato_In(7 downto 7))));
				write(row, to_integer(unsigned(Dato_In(6 downto 6))));
				write(row, to_integer(unsigned(Dato_In(5 downto 5))));
				write(row, to_integer(unsigned(Dato_In(4 downto 4))));
				write(row, to_integer(unsigned(Dato_In(3 downto 3))));
				write(row, to_integer(unsigned(Dato_In(2 downto 2))));
				write(row, to_integer(unsigned(Dato_In(1 downto 1))));
				write(row, to_integer(unsigned(Dato_In(0 downto 0))));
				write(row ,HT);
				write(row, to_integer(unsigned(Dato_In(7 downto 7))));
				write(row, to_integer(unsigned(Dato_In(6 downto 6))));
				write(row, to_integer(unsigned(Dato_In(5 downto 5))));
				write(row ,HT);
				write(row, to_integer(unsigned(Dato_In(4 downto 4))));
				write(row, to_integer(unsigned(Dato_In(3 downto 3))));
				write(row, to_integer(unsigned(Dato_In(2 downto 2))));
				write(row, to_integer(unsigned(Dato_In(1 downto 1))));
				write(row, to_integer(unsigned(Dato_In(0 downto 0))));
				write(row ,HT);
				write(row, to_integer(unsigned(Dato_Coded(9 downto 9))));
				write(row, to_integer(unsigned(Dato_Coded(8 downto 8))));
				write(row, to_integer(unsigned(Dato_Coded(7 downto 7))));
				write(row, to_integer(unsigned(Dato_Coded(6 downto 6))));
				write(row, to_integer(unsigned(Dato_Coded(5 downto 5))));
				write(row, to_integer(unsigned(Dato_Coded(4 downto 4))));
				write(row ,HT);
				write(row, to_integer(unsigned(Dato_Coded(3 downto 3))));
				write(row, to_integer(unsigned(Dato_Coded(2 downto 2))));
				write(row, to_integer(unsigned(Dato_Coded(1 downto 1))));
				write(row, to_integer(unsigned(Dato_Coded(0 downto 0))));
				write(row ,HT);
				write(row, to_integer(unsigned(Dato_Coded(9 downto 9))));
				write(row, to_integer(unsigned(Dato_Coded(8 downto 8))));
				write(row, to_integer(unsigned(Dato_Coded(7 downto 7))));
				write(row, to_integer(unsigned(Dato_Coded(6 downto 6))));
				write(row, to_integer(unsigned(Dato_Coded(5 downto 5))));
				write(row, to_integer(unsigned(Dato_Coded(4 downto 4))));
				write(row, to_integer(unsigned(Dato_Coded(3 downto 3))));
				write(row, to_integer(unsigned(Dato_Coded(2 downto 2))));
				write(row, to_integer(unsigned(Dato_Coded(1 downto 1))));
				write(row, to_integer(unsigned(Dato_Coded(0 downto 0))));
				write(row ,HT);
				write(row, to_integer(unsigned(DnK_Dec)));
				write(row ,HT);
				write(row, to_integer(unsigned(nRD_Dec)));
				writeline(file_handler ,row);
			end if;
		end process;
	
end Behavioral;