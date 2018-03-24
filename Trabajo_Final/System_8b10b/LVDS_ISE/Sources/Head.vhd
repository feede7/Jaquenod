----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:21:59 03/20/2018 
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
           RST 		: in  STD_LOGIC;
           Dato_In 	: in  STD_LOGIC_VECTOR (63 downto 0);
           Dato_Out 	: out STD_LOGIC_VECTOR (63 downto 0);
			  Next_Data	: out STD_LOGIC;
			  Ready_Rx	: out STD_LOGIC);
end En_Head;

architecture Arq_Head of En_Head is

	signal LVDS_PIN : STD_LOGIC;
	signal LVDS_Ready : STD_LOGIC;

begin

    Ins_LVDS_TX: entity work.En_LVDS_TX(Arq_LVDS_TX)
    port map(
        CLK  		=> CLK,
        Data_A    => Dato_In,
        ResetTX   => RST,
        LVDSout 	=> LVDS_PIN,
        Next_Data => Next_Data
    );

    Ins_LVDS_RX: entity work.En_LVDS_RX(Arq_LVDS_RX)
    port map(
        CLK  		=> CLK,
        RST		   => RST,
        LVDS_IN 	=> LVDS_PIN,
        Data_Out	=> Dato_Out,
        Ready    	=> Ready_RX
    );
	 
end Arq_Head;