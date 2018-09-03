library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity En_MC4044 is
    Port ( R  		: in  STD_LOGIC;
           V  		: in  STD_LOGIC;
           U1 		: out STD_LOGIC;
           D1 		: out STD_LOGIC;
			  State 	: out STD_LOGIC_VECTOR(3 downto 0));
end En_MC4044;

architecture Arq_MC4044 of En_MC4044 is
	signal Actual_State 	: STD_LOGIC_VECTOR(5 downto 0) := "000100";
	signal Next_State 	: STD_LOGIC_VECTOR(3 downto 0) := x"1";
	signal Salida 			: STD_LOGIC_VECTOR(1 downto 0) := "00";
begin

	State <= Next_State;

	Actual_State <= Next_State & R & V;

   with Actual_State select
      Next_State <=   x"1" when x"1" & "00",
        							x"2" when x"1" & "01",
        							x"3" when x"1" & "11",
        							x"4" when x"1" & "10",

        							x"5" when x"2" & "00",
        							x"2" when x"2" & "01",
        							x"3" when x"2" & "11",
        							x"8" when x"2" & "10",

        							x"5" when x"3" & "00",
        							x"2" when x"3" & "01",
        							x"3" when x"3" & "11",
        							x"8" when x"3" & "10",

        							x"1" when x"4" & "00",
        							x"2" when x"4" & "01",
        							x"3" when x"4" & "11",
        							x"4" when x"4" & "10",

        							x"5" when x"5" & "00",
        							x"6" when x"5" & "01",
        							x"7" when x"5" & "11",
        							x"8" when x"5" & "10",

        							x"9" when x"6" & "00",
        							x"6" when x"6" & "01",
        							x"7" when x"6" & "11",
        							x"C" when x"6" & "10",

        							x"5" when x"7" & "00",
        							x"2" when x"7" & "01",
        							x"7" when x"7" & "11",
        							x"C" when x"7" & "10",

        							x"5" when x"8" & "00",
        							x"2" when x"8" & "01",
        							x"7" when x"8" & "11",
        							x"8" when x"8" & "10",

        							x"9" when x"9" & "00",
        							x"A" when x"9" & "01",
        							x"B" when x"9" & "11",
        							x"C" when x"9" & "10",

        							x"9" when x"A" & "00",
        							x"A" when x"A" & "01",
        							x"B" when x"A" & "11",
        							x"C" when x"A" & "10",

        							x"5" when x"B" & "00",
        							x"6" when x"B" & "01",
        							x"B" when x"B" & "11",
        							x"C" when x"B" & "10",

        							x"5" when x"C" & "00",
        							x"6" when x"C" & "01",
        							x"B" when x"C" & "11",
        							x"C" when x"C" & "10",

        							x"1" when others;

   with Actual_State(5 downto 2) select
      Salida <=	"01" when x"1",
						"01" when x"2",
						"01" when x"3",
						"01" when x"4",
						"11" when x"5",
						"11" when x"6",
						"11" when x"7",
						"11" when x"8",
						"10" when x"9",
						"10" when x"A",
						"10" when x"B",
						"10" when x"C",

						"00" when others;

	U1 <= Salida(1);
	D1 <= Salida(0);

end Arq_MC4044;
