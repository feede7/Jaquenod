----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 03/01/2018 10:35:41 AM
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

entity En_Head is
--Generic (Error : STD_LOGIC := '0');
Port (
    Dato_In     : in  STD_LOGIC_VECTOR(7 downto 0);
    DnK_Cod     : in  STD_LOGIC;
    nRD_Cod     : in  STD_LOGIC;
    Dato_Coded  : out STD_LOGIC_VECTOR(9 downto 0);
    Error_Cod   : out STD_LOGIC;
    DnK_Dec     : out STD_LOGIC;
    nRD_Dec     : out STD_LOGIC;
    Dual_Dec    : out STD_LOGIC;
    Error_Dec   : out STD_LOGIC;
    Dato_Out    : out STD_LOGIC_VECTOR(7 downto 0)
);
end En_Head;

architecture Arq_Head of En_Head is

	component Error_Table IS
	PORT (
	 a : IN STD_LOGIC_VECTOR(9 downto 0);
	 spo : OUT STD_LOGIC_VECTOR(9 downto 0)
	);
	end component;
  
    signal Dato_Out_Cod : STD_LOGIC_VECTOR(9 downto 0);
    signal Index : unsigned(9 downto 0);
    signal Dato_Error : STD_LOGIC_VECTOR(9 downto 0);
    signal Data_IN_Dec : STD_LOGIC_VECTOR(9 downto 0);

begin

     Dato_Coded <= Dato_Out_Cod;

    Ins_Cod: entity work.En_Cod_8b10b(Arq_Cod_8b10b)
    port map(
        Dato_In  => Dato_In,--STD_LOGIC_VECTOR(7 downto 0);
        DnK      => DnK_Cod,--STD_LOGIC; -- '1' para D y '0' para K
        nRD      => nRD_Cod,--STD_LOGIC; -- '1' para RD- y '0' para RD+
        Dato_Out => Dato_Out_Cod,--STD_LOGIC_VECTOR(9 downto 0);
        Error    => Error_Cod --STD_LOGIC
    );

    Ins_Error : Error_Table
      PORT MAP(a => STD_LOGIC_VECTOR(Index), spo => Dato_Error);
	
	process(Dato_In)
	begin
	    Index <= Index + to_unsigned(1,Index'length);
	end process;

	--Data_IN_Dec <= Dato_Error when Error = '1' else Dato_Out_Cod;
	Data_IN_Dec <= Dato_Out_Cod;
	
    Ins_Dec: entity work.En_Dec_8b10b(Arq_Dec_8b10b)
    port map(
        Dato_In  => Data_IN_Dec,--STD_LOGIC_VECTOR(9 downto 0);
        DnK      => DnK_Dec,--STD_LOGIC; -- '1' para D y '0' para K
        nRD      => nRD_Dec,--STD_LOGIC; -- '1' para RD- y '0' para RD+
        --Dual     => Dual_Dec,--STD_LOGIC; -- '1' para RD- y '0' para RD+
        Dato_Out => Dato_Out,--STD_LOGIC_VECTOR(7 downto 0);
        Error    => Error_Dec--STD_LOGIC
    );

end Arq_Head;