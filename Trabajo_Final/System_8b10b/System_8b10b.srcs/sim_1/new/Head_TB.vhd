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

entity Head_TB is
--  Port ( );
end Head_TB;

architecture Behavioral of Head_TB is

    component En_Head is
    Port (
        Dato_In     : in  STD_LOGIC_VECTOR(7 downto 0);
        DnK_Cod     : in  STD_LOGIC;
        nRD_Cod     : in  STD_LOGIC;
        Error_Cod   : out STD_LOGIC;
        DnK_Dec     : out STD_LOGIC;
        nRD_Dec     : out STD_LOGIC;
        Error_Dec   : out STD_LOGIC;
        Dato_Out    : out STD_LOGIC_VECTOR(7 downto 0)
    );
    end component;

    signal Dato_In : unsigned(7 downto 0) := to_unsigned(0,8);
    signal Dato_Out : STD_LOGIC_VECTOR(7 downto 0);
    
    signal clk_aux_1 : std_logic := '0';
    constant OSC1_Period : time := 1 ns;
    
    signal equal : std_logic;
begin

    Inst_Head: En_Head
    port map(
        Dato_In     => std_logic_vector(Dato_In),
        DnK_Cod     => '0',
        nRD_Cod     => '0',
        Error_Cod   => open,
        DnK_Dec     => open,
        nRD_Dec     => open,
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
    
end Behavioral;
