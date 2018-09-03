----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:06:07 09/03/2017 
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
library UNISIM;
use UNISIM.VComponents.all;

entity En_Head is
    Port ( 
		RST 		: in  STD_LOGIC;
		OSC1 		: in  STD_LOGIC;
		OSC2 		: in  STD_LOGIC;
		O2Fault 	: out STD_LOGIC;
		O1Fault 	: out STD_LOGIC;
		OSC_OUT 	: out STD_LOGIC
	);
end En_Head;

architecture Arq_Head of En_Head is
	signal syn1 		: std_logic;
	signal syn2 		: std_logic;
	
	signal syn1_ant 	: std_logic;
	signal syn2_ant 	: std_logic;

	signal ed1 			: std_logic;
	signal ed2 			: std_logic;
	
	signal count1		: NATURAL;
	signal count2		: NATURAL;

	signal equal2_1	: std_logic;
	signal equal2_2	: std_logic;

	signal sO1Fault	: std_logic;
	signal sO2Fault	: std_logic;
	
	signal Select_OSC	: std_logic;

begin

	syn1 <= '0' when RST = '1' else equal2_2 when rising_edge(OSC1);
	syn2 <= '0' when RST = '1' else equal2_1 when rising_edge(OSC2);

	syn1_ant <= syn1 when rising_edge(OSC1);
	syn2_ant <= syn2 when rising_edge(OSC2);

	ed1 <= syn1 and not syn1_ant;
	ed2 <= syn2 and not syn2_ant;

	count1 <= 0 when RST = '1' or ed1 = '1' else 7 when count1 = 7 else count1 + 1 when rising_edge(OSC1);
	count2 <= 0 when RST = '1' or ed2 = '1' else 7 when count2 = 7 else count2 + 1 when rising_edge(OSC2);

	equal2_1 <= '1' when count1 = 2 else '0';
	equal2_2 <= '1' when count2 = 2 else '0';
	
	sO2Fault <= '1' when count1 = 7 else '0';
	sO1Fault <= '1' when count2 = 7 else '0';

	Select_OSC <= '0' when sO2Fault = '1' else '1' when sO1Fault = '1' else '0';
	
	O1Fault <= sO1Fault;
	O2Fault <= sO2Fault;
	
	BUFGCTRL_inst : BUFGCTRL
   generic map (
      INIT_OUT => 0,         -- Initial value of BUFGCTRL output ($VALUES;)
      PRESELECT_I0 => FALSE, -- BUFGCTRL output uses I0 input ($VALUES;)
      PRESELECT_I1 => FALSE  -- BUFGCTRL output uses I1 input ($VALUES;)
   )
   port map (
      O => OSC_OUT,             -- 1-bit output: Clock output
      CE0 => not Select_OSC,         -- 1-bit input: Clock enable input for I0
      CE1 => Select_OSC,         -- 1-bit input: Clock enable input for I1
      I0 => OSC1,           -- 1-bit input: Primary clock
      I1 => OSC2,           -- 1-bit input: Secondary clock
      IGNORE0 => '0', -- 1-bit input: Clock ignore input for I0
      IGNORE1 => '0', -- 1-bit input: Clock ignore input for I1
      S0 => '1',           -- 1-bit input: Clock select for I0
      S1 => '1'            -- 1-bit input: Clock select for I1
   );
end Arq_Head;