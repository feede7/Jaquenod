------------------------------------------------------------------------------
--
--  Xilinx, Inc. 2002                 www.xilinx.com
--
--  XAPP 225
--
------------------------------------------------------------------------------
--
--  File name :       sync_master_v2.vhd
--
--  Description :     Master phase aligner module for Virtex2 (2 bits)
--
--  Date - revision : January 6th 2009 - v 1.2
--
--  Author :          NJS
--
--  Disclaimer: LIMITED WARRANTY AND DISCLAMER. These designs are
--              provided to you "as is". Xilinx and its licensors make and you
--              receive no warranties or conditions, express, implied,
--              statutory or otherwise, and Xilinx specifically disclaims any
--              implied warranties of merchantability, non-infringement,or
--              fitness for a particular purpose. Xilinx does not warrant that
--              the functions contained in these designs will meet your
--              requirements, or that the operation of these designs will be
--              uninterrupted or error free, or that defects in the Designs
--              will be corrected. Furthermore, Xilinx does not warrantor
--              make any representations regarding use or the results of the
--              use of the designs in terms of correctness, accuracy,
--              reliability, or otherwise.
--
--              LIMITATION OF LIABILITY. In no event will Xilinx or its
--              licensors be liable for any loss of data, lost profits,cost
--              or procurement of substitute goods or services, or for any
--              special, incidental, consequential, or indirect damages
--              arising from the use or operation of the designs or
--              accompanying documentation, however caused and on any theory
--              of liability. This limitation will apply even if Xilinx
--              has been advised of the possibility of such damage. This
--              limitation shall apply not-withstanding the failure of the
--              essential purpose of any limited remedies herein.
--
--  Copyright © 2002 Xilinx, Inc.
--  All rights reserved
--
------------------------------------------------------------------------------
--
library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

library unisim ;
use unisim.vcomponents.all ;

entity sync_master_v2 is port (
	clk 		: in std_logic ;			-- clock input
	clk90 		: in std_logic ;			-- clock 90 input
	datain 		: in std_logic_vector(1 downto 0) ;	-- data inputs
	rst 		: in std_logic ;			-- reset input
	useaout		: out std_logic ;			-- useA output for cascade
	usebout		: out std_logic ;			-- useB output for cascade
	usecout		: out std_logic ;			-- useC output for cascade
	usedout		: out std_logic ;			-- useD output for cascade
	ctrlout		: out std_logic_vector(1 downto 0) ;	-- ctrl outputs for cascade
	sdataout	: out std_logic_vector(1 downto 0) );	-- data out
end sync_master_v2;

architecture arch_sync_master_v2 of sync_master_v2 is

signal aa0, aa1 	: std_logic;
signal bb0, bb1 	: std_logic;
signal cc0, cc1 	: std_logic;
signal dd0, dd1 	: std_logic;
signal usea 		: std_logic;
signal useb 		: std_logic;
signal usec 		: std_logic;
signal used 		: std_logic;
signal useaint 		: std_logic;
signal usebint 		: std_logic;
signal usecint 		: std_logic;
signal usedint 		: std_logic;
signal ctrlint 		: std_logic_vector(1 downto 0);
signal sdataa 		: std_logic_vector(1 downto 0) ;
signal sdatab 		: std_logic_vector(1 downto 0) ;
signal sdatac 		: std_logic_vector(1 downto 0) ;
signal sdatad 		: std_logic_vector(1 downto 0) ;
signal az, ay 		: std_logic_vector(2 downto 0) ;
signal bz, by 		: std_logic_vector(2 downto 0) ;
signal cz, cy 		: std_logic_vector(2 downto 0) ;
signal dz, dy 		: std_logic_vector(2 downto 0) ;
signal aap, bbp	 	: std_logic;
signal aan, bbn	 	: std_logic;
signal ccp, ddp 	: std_logic;
signal ccn, ddn 	: std_logic;
signal pipe_ce0 	: std_logic;
signal notclk 		: std_logic;
signal notclk90 	: std_logic;

attribute RLOC : string ;
attribute RLOC of ff_az0 : label is "X0Y0";
attribute RLOC of ff_az1 : label is "X2Y0";

attribute RLOC of ff_bz0 : label is "X1Y0";
attribute RLOC of ff_bz1 : label is "X4Y0";

attribute RLOC of ff_cz0 : label is "X1Y1";
attribute RLOC of ff_cz1 : label is "X2Y0";

attribute RLOC of ff_dz0 : label is "X0Y1";
attribute RLOC of ff_dz1 : label is "X3Y0";

attribute RLOC of ff_ay0 : label is "X0Y0";
attribute RLOC of ff_ay1 : label is "X2Y1";

attribute RLOC of ff_by0 : label is "X1Y0";
attribute RLOC of ff_by1 : label is "X4Y1";

attribute RLOC of ff_cy0 : label is "X1Y1";
attribute RLOC of ff_cy1 : label is "X2Y1";

attribute RLOC of ff_dy0 : label is "X0Y1";
attribute RLOC of ff_dy1 : label is "X3Y1";

begin

notclk <= not clk ;
notclk90 <= not clk90 ;
useaout <= useaint ;
usebout <= usebint ;
usecout <= usecint ;
usedout <= usedint ;
ctrlout <=  ctrlint ;
sdataa <= (aa1 and useaint) & (aa0 and useaint) ;
sdatab <= (bb1 and usebint) & (bb0 and usebint) ;
sdatac <= (cc1 and usecint) & (cc0 and usecint) ;
sdatad <= (dd1 and usedint) & (dd0 and usedint) ;

saa0 : srl16 port map(d => az(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => aa0);
sbb0 : srl16 port map(d => bz(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => bb0);
scc0 : srl16 port map(d => cz(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => cc0);
sdd0 : srl16 port map(d => dz(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => dd0);

saa1 : srl16 port map(d => ay(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => aa1);
sbb1 : srl16 port map(d => by(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => bb1);
scc1 : srl16 port map(d => cy(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => cc1);
sdd1 : srl16 port map(d => dy(2), clk => clk, a0 => ctrlint(0), a1 => ctrlint(1), a2 => '0', a3 => '0', q => dd1);

process (clk, rst)
begin
if rst = '1' then
	ctrlint <= "10" ;
	useaint <= '0' ; usebint <= '0' ; usecint <= '0' ; usedint <= '0' ;
	usea <= '0' ; useb <= '0' ; usec <= '0' ; used <= '0' ;
	pipe_ce0 <= '0' ; sdataout <= "11" ;
	aap <= '0' ; bbp <= '0' ; ccp <= '0' ; ddp <= '0' ;
	aan <= '0' ; bbn <= '0' ; ccn <= '0' ; ddn <= '0' ;
	az(2) <= '0' ; bz(2) <= '0' ; cz(2) <= '0' ; dz(2) <= '0' ;
	ay(2) <= '0' ; by(2) <= '0' ; cy(2) <= '0' ; dy(2) <= '0' ;
elsif clk'event and clk = '1' then
	az(2) <= az(1) ; bz(2) <= bz(1) ; cz(2) <= cz(1) ; dz(2) <= dz(1) ;
	ay(2) <= ay(1) ; by(2) <= by(1) ; cy(2) <= cy(1) ; dy(2) <= dy(1) ;
	aap <= (az(2) xor az(1)) and not az(1) ;	-- find positive edges
	bbp <= (bz(2) xor bz(1)) and not bz(1) ;
	ccp <= (cz(2) xor cz(1)) and not cz(1) ;
	ddp <= (dz(2) xor dz(1)) and not dz(1) ;
	aan <= (az(2) xor az(1)) and az(1) ;		-- find negative edges
	bbn <= (bz(2) xor bz(1)) and bz(1) ;
	ccn <= (cz(2) xor cz(1)) and cz(1) ;
	ddn <= (dz(2) xor dz(1)) and dz(1) ;
	usea <= (bbp and not ccp and not ddp and aap) or (bbn and not ccn and not ddn and aan) ;
	useb <= (ccp and not ddp and aap and bbp) or (ccn and not ddn and aan and bbn) ;
	usec <= (ddp and aap and bbp and ccp) or (ddn and aan and bbn and ccn) ;
	used <= (aap and not bbp and not ccp and not ddp) or (aan and not bbn and not ccn and not ddn) ;
	if (usea or useb or usec or used) = '1' then
		pipe_ce0 <= '1' ;
	    	useaint <= usea ;
	    	usebint <= useb ;
	    	usecint <= usec ;
	    	usedint <= used ;
	end if ;
	if pipe_ce0 = '1' then
		sdataout <= sdataa or sdatab or sdatac or sdatad ;
	end if ;
	if usedint = '1' and usea = '1' then 		-- 'd' going to 'a'
		ctrlint <= ctrlint - 1 ;
	elsif useaint = '1' and used = '1' then 	-- 'a' going to 'd'
		ctrlint <= ctrlint + 1 ;
	end if ;
end if ;
end process ;

-- get all the samples into the same time domain

ff_az0 : fdc port map(d => datain(0),  c => clk, clr => rst, q => az(0));
ff_az1 : fdc port map(d => az(0), c => clk, clr => rst, q => az(1));

ff_bz0 : fdc port map(d => datain(0),  c => clk90, clr => rst, q => bz(0));
ff_bz1 : fdc port map(d => bz(0), c => clk,   clr => rst, q => bz(1));

ff_cz0 : fdc port map(d => datain(0),  c => notclk, clr => rst, q => cz(0));
ff_cz1 : fdc port map(d => cz(0), c => clk,    clr => rst, q => cz(1));

ff_dz0 : fdc port map(d => datain(0),  c => notclk90, clr => rst, q => dz(0));
ff_dz1 : fdc port map(d => dz(0), c => clk90,   clr => rst, q => dz(1));

ff_ay0 : fdc port map(d => datain(1),  c => clk, clr => rst, q => ay(0));
ff_ay1 : fdc port map(d => ay(0), c => clk, clr => rst, q => ay(1));

ff_by0 : fdc port map(d => datain(1),  c => clk90, clr => rst, q => by(0));
ff_by1 : fdc port map(d => by(0), c => clk,   clr => rst, q => by(1));

ff_cy0 : fdc port map(d => datain(1),  c => notclk, clr => rst, q => cy(0));
ff_cy1 : fdc port map(d => cy(0), c => clk,    clr => rst, q => cy(1));

ff_dy0 : fdc port map(d => datain(1),  c => notclk90, clr => rst, q => dy(0));
ff_dy1 : fdc port map(d => dy(0), c => clk90,   clr => rst, q => dy(1));

end arch_sync_master_v2;
