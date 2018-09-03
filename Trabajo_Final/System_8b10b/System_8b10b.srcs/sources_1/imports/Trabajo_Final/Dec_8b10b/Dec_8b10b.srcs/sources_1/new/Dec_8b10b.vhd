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
  signal Plus_D     : STD_LOGIC_VECTOR(3 downto 0);
  signal Plus_K     : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_DatoD  : STD_LOGIC_VECTOR(5 downto 0);
  signal Out_PlusD  : STD_LOGIC_VECTOR(3 downto 0);
  signal Out_PlusK  : STD_LOGIC_VECTOR(3 downto 0);
  signal Toggle4    : STD_LOGIC_VECTOR(3 downto 0);
  signal Dato_Out_Aux_D    : STD_LOGIC_VECTOR(7 downto 0);
  signal Dato_Out_Aux_K    : STD_LOGIC_VECTOR(7 downto 0);
  signal Dual_D     : STD_LOGIC;
  signal Dual_Plus  : STD_LOGIC;
  signal nRD_Aux_D  : STD_LOGIC;
  signal DnK_Aux    : STD_LOGIC;
  signal Error_D    : STD_LOGIC;
  signal Error_D1   : STD_LOGIC;
  signal Error_D2   : STD_LOGIC;
  signal Error_K    : STD_LOGIC;
  
  signal Dxx_7_Case : STD_LOGIC;
  signal nRD_Aux_P  : STD_LOGIC;

begin

    Dato <= Dato_In(9 downto 4);
	 Plus	<= Dato_In(3 downto 0);
	
	 Dual_D <= '1' when  Dato = "001011" or
								Dato = "001101" or
								Dato = "001110" or
								Dato = "010011" or
								Dato = "010101" or
								Dato = "010110" or
								Dato = "011001" or
								Dato = "011010" or
								Dato = "011100" or
								Dato = "100011" or
								Dato = "100101" or
								Dato = "100110" or
								Dato = "101001" or
								Dato = "101010" or
								Dato = "101100" or
								Dato = "110001" or
								Dato = "110010" or
								Dato = "110100" else '0';
	
	 Dual_Plus <= '1' when	Plus = "0101" or
									Plus = "0110" or
									Plus = "1001" or
									Plus = "1010" else '0';

    Ins_DCh : Inv_Ch PORT MAP(a => Dato, spo => Out_DatoD);

    nRD_Aux_D <= Out_DatoD(Out_DatoD'high) when Dual_D = '0' else '0';

    Toggle4 <= "1111" when nRD_Aux_D = '1' else "0000";

    Plus_D  <= Plus XOR Toggle4 when Dual_Plus = '0' else Plus;
    Plus_K  <= Plus XOR Toggle4;

    Ins_Dplus : Inv_Dplus PORT MAP(a => Plus_D, spo => Out_PlusD);

    Ins_Kplus : Inv_Kplus PORT MAP(a => Plus_K, spo => Out_PlusK);

	 Dxx_7_Case <= '1' when Out_PlusD = "1101" or Out_PlusD = "1001" else '0';
	 
	 nRD_Aux_P  <= '1' when Out_PlusD = "1001" else Out_PlusD(Out_PlusD'high);
	 
    Dato_Out_Aux_D <= "111" & Out_DatoD(Out_DatoD'high-1 downto 0) when Dxx_7_Case = '1' else Out_PlusD(2 downto 0) & Out_DatoD(Out_DatoD'high-1 downto 0);
    Dato_Out_Aux_K <= Out_PlusK(2 downto 0) & Out_DatoD(Out_DatoD'high-1 downto 0);

    DnK_Aux <= '0' when
                    (Dato_Out_Aux_K = x"1C" and (Dato_In = "00"&x"F4" or Dato_In = not ("00"&x"F4"))) or -- K.28.0 000 11100
                    (Dato_Out_Aux_K = x"3C" and (Dato_In = "00"&x"F9" or Dato_In = not ("00"&x"F9"))) or -- K.28.1 001 11100
                    (Dato_Out_Aux_K = x"5C" and (Dato_In = "00"&x"F5" or Dato_In = not ("00"&x"F5"))) or -- K.28.2 010 11100
                    (Dato_Out_Aux_K = x"7C" and (Dato_In = "00"&x"F3" or Dato_In = not ("00"&x"F3"))) or -- K.28.3 011 11100
                    (Dato_Out_Aux_K = x"9C" and (Dato_In = "00"&x"F2" or Dato_In = not ("00"&x"F2"))) or -- K.28.4 100 11100
                    (Dato_Out_Aux_K = x"BC" and (Dato_In = "00"&x"FA" or Dato_In = not ("00"&x"FA"))) or -- K.28.5 101 11100
                    (Dato_Out_Aux_K = x"DC" and (Dato_In = "00"&x"F6" or Dato_In = not ("00"&x"F6"))) or -- K.28.6 110 11100
                    (Dato_Out_Aux_K = x"FC" and (Dato_In = "00"&x"F8" or Dato_In = not ("00"&x"F8"))) or -- K.28.7 111 11100
                    (Dato_Out_Aux_K = x"F7" and (Dato_In = "11"&x"A8" or Dato_In = not ("11"&x"A8"))) or -- K.23.7 111 10111
                    (Dato_Out_Aux_K = x"FB" and (Dato_In = "11"&x"68" or Dato_In = not ("11"&x"68"))) or -- K.27.7 111 11011
                    (Dato_Out_Aux_K = x"FD" and (Dato_In = "10"&x"E8" or Dato_In = not ("10"&x"E8"))) or -- K.29.7 111 11101
                    (Dato_Out_Aux_K = x"FE" and (Dato_In = "01"&x"E8" or Dato_In = not ("01"&x"E8")))    -- K.30.7 111 11110
                  else '1';

    Dato_Out <= Dato_Out_Aux_K when DnK_Aux = '0' else Dato_Out_Aux_D;

    DnK <= DnK_Aux;
    nRD <= nRD_Aux_D or nRD_Aux_P;
    Error_D1 <= '1' when Out_DatoD = "010101" else '0';
    Error_D2 <= '1' when Out_PlusD = "1010" else '0';
    Error_D  <= (Error_D1 or Error_D2) when DnK_Aux = '1' else '0';
	 Error_K  <= '1' when Out_PlusK = "1000" and DnK_Aux = '0' else '0';
    Error <= error_D or error_K;
end Arq_Dec_8b10b;
