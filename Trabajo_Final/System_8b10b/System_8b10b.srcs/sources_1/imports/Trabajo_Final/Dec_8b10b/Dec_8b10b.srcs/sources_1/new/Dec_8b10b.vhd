library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
library UNISIM;
use UNISIM.VComponents.all;

entity En_Dec_8b10b is
    Port ( Dato_In  : in  STD_LOGIC_VECTOR(9 downto 0);
           DnK      : out STD_LOGIC; -- '1' para D y '0' para K
           nRD      : out STD_LOGIC; -- '1' para RD- y '0' para RD+
           Dato_Out : out STD_LOGIC_VECTOR(7 downto 0);
           Error    : out STD_LOGIC
    );
end En_Dec_8b10b;

architecture Arq_Dec_8b10b of En_Dec_8b10b is

component Inv_Ch IS
  PORT (
    a : IN STD_LOGIC_VECTOR(5 downto 0);
    spo : OUT STD_LOGIC_VECTOR(5 downto 0)
  );
  end component;

component Inv_Dplus IS
  PORT (
    a : IN STD_LOGIC_VECTOR(3 downto 0);
    spo : OUT STD_LOGIC_VECTOR(3 downto 0)
  );
  end component;

component Inv_Kplus IS
  PORT (
    a : IN STD_LOGIC_VECTOR(3 downto 0);
    spo : OUT STD_LOGIC_VECTOR(3 downto 0)
  );
  end component;

  signal Dato       : STD_LOGIC_VECTOR(5 downto 0);
  signal Plus       : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_DatoD  : STD_LOGIC_VECTOR(5 downto 0);
  signal Out_PlusD  : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_PlusK  : STD_LOGIC_VECTOR(3 downto 0);
  signal Toggle4    : STD_LOGIC_VECTOR(3 downto 0);
  signal Dato_Out_Aux_D    : STD_LOGIC_VECTOR(7 downto 0);
  signal Dato_Out_Aux_K    : STD_LOGIC_VECTOR(7 downto 0);
  signal nRD_Aux    : STD_LOGIC;
  signal DnK_Aux    : STD_LOGIC;
  signal K_case     : STD_LOGIC;

begin

    Dato  <= Dato_In(9 downto 4);

    Ins_DCh : Inv_Ch
      PORT MAP(a => Dato, spo => Out_DatoD);

    nRD_Aux <= Out_DatoD(Out_DatoD'high);

    Toggle4 <= "1111" when nRD_Aux = '1' else "0000";

    Plus  <= Dato_In(3 downto 0) XOR Toggle4;

    Ins_Dplus : Inv_Dplus
      PORT MAP(a => Plus, spo => Out_PlusD);

    Ins_Kplus : Inv_Kplus
      PORT MAP(a => Plus, spo => Out_PlusK);

    Dato_Out_Aux_D <= Out_PlusD(2 downto 0) & Out_DatoD(Out_DatoD'high-1 downto 0);
    Dato_Out_Aux_K <= Out_PlusK(2 downto 0) & Out_DatoD(Out_DatoD'high-1 downto 0);

    K_case  <= '1' when Out_DatoD(Out_DatoD'high-1 downto 0) = "10111" or --K23
                        Out_DatoD(Out_DatoD'high-1 downto 0) = "11011" or --K27
                        Out_DatoD(Out_DatoD'high-1 downto 0) = "11100" or --K28
                        Out_DatoD(Out_DatoD'high-1 downto 0) = "11101" or --K29
                        Out_DatoD(Out_DatoD'high-1 downto 0) = "11110"    --K30
                else '0';

    DnK_Aux <= '0' when (Dato_Out_Aux_K = x"1C" or -- K.28.0
                    Dato_Out_Aux_K = x"3C" or -- K.28.1
                    Dato_Out_Aux_K = x"5C" or -- K.28.2
                    Dato_Out_Aux_K = x"7C" or -- K.28.3
                    Dato_Out_Aux_K = x"9C" or -- K.28.4
                    Dato_Out_Aux_K = x"BC" or -- K.28.5
                    Dato_Out_Aux_K = x"DC" or -- K.28.6
                    Dato_Out_Aux_K = x"FC" or -- K.28.7
                    Dato_Out_Aux_K = x"F7" or -- K.23.7
                    Dato_Out_Aux_K = x"FB" or -- K.27.7
                    Dato_Out_Aux_K = x"FD" or -- K.29.7
                    Dato_Out_Aux_K = x"FE")   -- K.30.7
                    and K_case = '1'
                  else '1';

    Dato_Out <= Dato_Out_Aux_K when DnK_Aux = '0' else "111" & Out_DatoD(Out_DatoD'high-1 downto 0) when Dato_Out_Aux_D = x"F1" else Dato_Out_Aux_D;

    DnK <= DnK_Aux;
    nRD <= nRD_Aux;
    Error <= '1' when (Out_DatoD = "100011" or Out_PlusD = "1000" or Out_PlusK = "1000" or Out_DatoD(Out_DatoD'high-1 downto 0) = "11100") and DnK_Aux = '1' else '0';
end Arq_Dec_8b10b;
