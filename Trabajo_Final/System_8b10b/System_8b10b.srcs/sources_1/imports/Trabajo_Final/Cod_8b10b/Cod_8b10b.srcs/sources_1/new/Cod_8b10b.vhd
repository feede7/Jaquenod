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
    Port ( Dato_In  : in  STD_LOGIC_VECTOR(7 downto 0);
           DnK      : in  STD_LOGIC; -- '1' para D y '0' para K
           nRD      : in  STD_LOGIC; -- '1' para RD- y '0' para RD+
           Dato_Out : out STD_LOGIC_VECTOR(9 downto 0);
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
  signal Toggle6        : STD_LOGIC_VECTOR(5 downto 0);
  signal Toggle4        : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_DatoD_Aux  : STD_LOGIC_VECTOR(5 downto 0);
  signal Out_PlusD_Aux  : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_DatoK_Aux  : STD_LOGIC_VECTOR(5 downto 0);
  signal Out_PlusK_Aux  : STD_LOGIC_VECTOR(3 downto 0);
  signal Dxx_7_Case     : STD_LOGIC;
  signal Unique_DatoD   : STD_LOGIC;
  signal Unique_PlusD   : STD_LOGIC;

begin

    -- Los K-Case son
    -- K.28.0  1Ch
    -- K.28.1  3Ch
    -- K.28.2  5Ch
    -- K.28.3  7Ch
    -- K.28.4  9Ch
    -- K.28.5  BCh
    -- K.28.6  DCh
    -- K.28.7  FCh
    -- K.23.7  F7h
    -- K.27.7  FBh
    -- K.29.7  FDh
    -- K.30.7  FEh
    
    Dato <= Dato_In(4 downto 0);
    Plus <= '0' & Dato_In(7 downto 5); -- Con D17_7_Case se salvan los casos
                                          -- tales como D17.7

    Ins_DCh : DCh
      PORT MAP(a => Dato, spo => Out_DatoD);

    Ins_Dplus : Dplus
      PORT MAP(a => Plus, spo => Out_PlusD);

    Ins_KCh : KCh
      PORT MAP(a => Dato, spo => Out_DatoK);

    Ins_Kplus : Kplus
      PORT MAP(a => Plus, spo => Out_PlusK);

    Toggle6 <= "111111" when nRD = '1' else "000000";
    Toggle4 <= "1111" when nRD = '1' else "0000";

    Dxx_7_Case    <= DnK when Dato_In = "11100000" or -- D.0.7 - y +
										(Dato_In = "11101011" and nRD = '1') or -- D.11.7 solo +
										(Dato_In = "11101101" and nRD = '1') or -- D.13.7 solo +
										(Dato_In = "11101110" and nRD = '1') or -- D.14.7 solo +
										Dato_In = "11101111" or -- D.15.7 - y +
										Dato_In = "11110000" or -- D.16.7 - y +
										(Dato_In = "11110001" and nRD = '0') or -- D.17.7 solo -
										(Dato_In = "11110010" and nRD = '0') or -- D.18.7 solo -
										(Dato_In = "11110100" and nRD = '0') or -- D.20.7 solo -
										Dato_In = "11111000" or -- D.24.7 - y +
										Dato_In = "11111111" 	-- D.31.7 - y +
								 else '0';

    Unique_DatoD  <= '1' when (Dato = "00011" or
                              Dato = "00101" or
                              Dato = "00110" or
                              Dato = "01001" or
                              Dato = "01010" or
                              Dato = "01011" or
                              Dato = "01100" or
                              Dato = "01101" or
                              Dato = "01110" or
                              Dato = "10001" or
                              Dato = "10010" or
                              Dato = "10011" or
                              Dato = "10100" or
                              Dato = "10101" or
                              Dato = "10110" or
                              Dato = "11001" or
                              Dato = "11010" or
                              Dato = "11100") and DnK = '1' else '0';

    Unique_PlusD  <= '1' when (Plus = "0001" or
                              Plus = "0010" or
                              Plus = "0101" or
                              Plus = "0110") and DnK = '1' else '0';

    Out_DatoD_Aux <= Out_DatoD XOR Toggle6 when Unique_DatoD = '0' else Out_DatoD;
    Out_PlusD_Aux <= "0111" XOR Toggle4 when Dxx_7_Case = '1' else Out_PlusD XOR Toggle4 when Unique_PlusD = '0' else Out_PlusD;

    Out_DatoK_Aux <= Out_DatoK XOR Toggle6;
    Out_PlusK_Aux <= Out_PlusK XOR Toggle4;

    Dato_Out <= Out_DatoD_Aux & Out_PlusD_Aux when DnK = '1' else
                Out_DatoK_Aux & Out_PlusK_Aux;

    Error <= '1' when Out_DatoD = "00000" or Out_PlusD = "000" or
              Out_DatoK = "00000" or Out_PlusK = "000" else '0';
end Arq_Cod_8b10b;
