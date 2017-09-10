library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity En_Cod_8b10b is
    Port ( Dato_In  : in  STD_LOGIC_VECTOR( 7 downto 0);
           DnK      : in  STD_LOGIC; -- '1' para D y '0' para K
           nRD      : in  STD_LOGIC; -- '1' para RD- y '0' para RD+
           Dato_Out : out STD_LOGIC_VECTOR( 9 downto 0);
           Error    : out STD_LOGIC
    );
end En_Cod_8b10b;

architecture Arq_Cod_8b10b of En_Cod_8b10b is

component DCh IS
  PORT (
    a : IN STD_LOGIC_VECTOR(4 downto 0);
    spo : OUT STD_LOGIC_VECTOR(5 downto 0)
  );
  end component;
  
component Dplus IS
  PORT (
    a : IN STD_LOGIC_VECTOR(3 downto 0);
    spo : OUT STD_LOGIC_VECTOR(3 downto 0)
  );
  end component;
  
component KCh IS
    PORT (
      a : IN STD_LOGIC_VECTOR(4 downto 0);
      spo : OUT STD_LOGIC_VECTOR(5 downto 0)
    );
    end component;

component Kplus IS
  PORT (
    a : IN STD_LOGIC_VECTOR(3 downto 0);
    spo : OUT STD_LOGIC_VECTOR(3 downto 0)
  );
  end component;
  
  signal Dato           : STD_LOGIC_VECTOR(4 downto 0);
  signal Plus           : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_DatoD      : STD_LOGIC_VECTOR(5 downto 0);
  signal Out_PlusD      : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_DatoK      : STD_LOGIC_VECTOR(5 downto 0);
  signal Out_PlusK      : STD_LOGIC_VECTOR(3 downto 0);
  signal Toggle10       : STD_LOGIC_VECTOR(9 downto 0);
  signal Dato_Out_Aux   : STD_LOGIC_VECTOR(9 downto 0);
  signal Special_Case   : STD_LOGIC;
  
begin
    Ins_DCh : DCh
      PORT MAP(a => Dato, spo => Out_DatoD);
      
    Ins_Dplus : Dplus
      PORT MAP(a => Plus, spo => Out_PlusD);

    Ins_KCh : KCh
      PORT MAP(a => Dato, spo => Out_DatoK);

    Ins_Kplus : Kplus
      PORT MAP(a => Plus, spo => Out_PlusK);

    Toggle10 <= "1111111111" when nRD = '1' else "0000000000";

    Special_Case <= '1' when Dato = "10001" and DnK = '1' else '0';

    Dato <= Dato_In(4 downto 0);
    Plus <= Special_Case & Dato_In(7 downto 5); -- Con Special_Case se salvan los casos tales como D17.7
    
    Dato_Out_Aux <= Out_DatoD & Out_PlusD when DnK = '1' else Out_DatoK & Out_PlusK;
    Dato_Out <= Dato_Out_Aux XOR Toggle10;
    
    Error <= '1' when Out_DatoD = "00000" or Out_PlusD = "000" or Out_DatoK = "00000" or Out_PlusK = "000" else '0';
end Arq_Cod_8b10b;