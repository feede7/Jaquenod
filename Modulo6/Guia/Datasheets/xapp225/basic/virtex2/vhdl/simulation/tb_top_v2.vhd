library ieee;
USE ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all ;

ENTITY tst_top IS END tst_top;

ARCHITECTURE rtl OF tst_top IS
component top_v2
  PORT (
	clkin 		: in std_logic;				-- clock input
	rstin 		: in std_logic;				-- reset input
	datainx		: in std_logic_vector(7 downto 0);	-- input data
	locked 		: out std_logic;			-- locked output (for simulator)
	outdata 	: out std_logic_vector(7 downto 0)); 	-- output data
END component;

SIGNAL clkin, rstin, fastclk : std_logic := '1';
SIGNAL datain, datainb, wander : std_logic_vector(7 downto 0) := "00000000" ;
signal outdata : std_logic_vector(7 downto 0) ;
signal olddata : std_logic_vector(7 downto 0) ;
signal match : std_logic := '0' ;
signal locked : std_logic ;

BEGIN

process (clkin)				-- check data coming back
begin
if clkin'event and clkin = '1' then
    	olddata <= outdata ;
    	wander <= wander + 1 ;
    	datain <= datain + 1 ;
    	if (outdata = olddata + 1) then
      		match <= '1' ;
      	else
      		match <= '0' ;
      	end if ;
end if ;
end process ;

clkin <= not clkin after 0.5 ns ; 	-- clock generator
rstin <= '0' after 10 nS ;
datainb <= datain after 0.00 ns when wander(7 downto 6) = "00" else	-- dither the data
           datain after 0.25 ns when wander(7 downto 6) = "01" else
           datain after 0.50 ns when wander(7 downto 6) = "10" else
           datain after 0.25 ns ;
           
chip : top_v2 port map (
	clkin 		=> clkin,
        rstin 		=> rstin,
        datainx		=> datainb,
        locked		=> locked,
        outdata 	=> outdata );

END rtl;
