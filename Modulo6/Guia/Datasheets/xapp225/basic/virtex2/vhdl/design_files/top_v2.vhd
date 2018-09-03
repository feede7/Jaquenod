------------------------------------------------------------------------------
--
--  Xilinx, Inc. 2002                 www.xilinx.com
--
--  XAPP 225
--
------------------------------------------------------------------------------
--
--  File name :       top_v2.vhd
--
--  Description :     Generic top level file to use phase aligner modules in a Virtex2
-- 			Uses one DCM to generate two 90 degree phased clocks
-- 			Works at up to 210 Mhz in a -5 .
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
library IEEE;
use IEEE.std_logic_1164.all;

library unisim ;
use unisim.vcomponents.all ;

entity top_v2 is port (
	clkin 		: in std_logic;				-- clock input
	rstin 		: in std_logic;				-- reset input
	datainx		: in std_logic_vector(7 downto 0);	-- input data
	locked 		: out std_logic;			-- locked output (for simulator)
	outdata 	: out std_logic_vector(7 downto 0)); 	-- output data
end top_v2;

architecture arch_top_v2 of top_v2 is

-- master phase aligner module
component sync_master_v2 port (
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
end component;
-- slave phase aligner module
component sync_slave_v2 port (
	clk 		: in std_logic ;			-- clock input
	clk90 		: in std_logic ;			-- clock 90 input
	datain 		: in std_logic_vector(1 downto 0) ;	-- input data
	rst 		: in std_logic ;			-- reset input
	usea 		: in std_logic ;			-- useA input
	useb 		: in std_logic ;			-- useB input
	usec 		: in std_logic ;			-- useC input
	used 		: in std_logic ;			-- useD input
	ctrl 		: in std_logic_vector(1 downto 0) ;	-- ctrl inputs
	sdataout	: out std_logic_vector(1 downto 0));	-- data outputs
end component ;

signal clk   		: std_logic;
signal clkdcm		: std_logic;
signal clkint		: std_logic;
signal clk90		: std_logic;
signal clk90dcm 	: std_logic;
signal outdataint	: std_logic_vector(7 downto 0) ;
signal ctrl 		: std_logic_vector(1 downto 0) ;
signal usea 		: std_logic;
signal useb 		: std_logic;
signal usec 		: std_logic;
signal used 		: std_logic;

begin

dcm_0 : dcm port map (
	clkin   	=> clkint,
	CLKFB   	=> clk,
	DSSEN 		=> '0',
	PSINCDEC	=> '0',
	PSEN 		=> '0',
	PSCLK 		=> '0',
	RST     	=> rstin,
	CLK0    	=> clkdcm,
	CLK90   	=> clk90dcm,
	CLK180  	=> open,
	CLK270  	=> open,
	CLK2X   	=> open,
	CLK2X180	=> open,
	CLKDV   	=> open,
	CLKFX   	=> open,
	CLKFX180	=> open,
	LOCKED  	=> locked,
	PSDONE  	=> open,
	STATUS  	=> open);

ibufg1 : ibufg port map(i => clkin, o => clkint );

bufg1 : bufg port map(i => clkdcm, o => clk );

bufg2 : bufg port map(i => clk90dcm, o => clk90 );

master : sync_master_v2 port map(
	datain 		=> datainx(1 downto 0),
	rst   		=> rstin,
	clk   		=> clk,
	clk90 		=> clk90,
	useaout		=> usea,
	usebout		=> useb,
	usecout		=> usec,
	usedout		=> used,
	ctrlout		=> ctrl,
	sdataout 	=> outdataint(1 downto 0));

slave1 : sync_slave_v2 port map(
	datain 		=> datainx(3 downto 2),
	rst   		=> rstin,
	clk   		=> clk,
	clk90 		=> clk90,
	usea		=> usea,
	useb		=> useb,
	usec		=> usec,
	used		=> used,
	ctrl		=> ctrl,
	sdataout 	=> outdataint(3 downto 2));

slave2 : sync_slave_v2 port map(
	datain 		=> datainx(5 downto 4),
	rst   		=> rstin,
	clk   		=> clk,
	clk90 		=> clk90,
	usea		=> usea,
	useb		=> useb,
	usec		=> usec,
	used		=> used,
	ctrl		=> ctrl,
	sdataout 	=> outdataint(5 downto 4));

slave3 : sync_slave_v2 port map(
	datain 		=> datainx(7 downto 6),
	rst   		=> rstin,
	clk   		=> clk,
	clk90 		=> clk90,
	usea		=> usea,
	useb		=> useb,
	usec		=> usec,
	used		=> used,
	ctrl		=> ctrl,
	sdataout 	=> outdataint(7 downto 6));

process (clk, rstin)
begin
if rstin = '1' then
	outdata <= (others => '0' ) ;
elsif clk'event and clk = '1' then
	outdata <= outdataint ;
end if ;
end process ;
end arch_top_v2;


