-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.2 (lin64) Build 1909853 Thu Jun 15 18:39:10 MDT 2017
-- Date        : Thu Dec 14 09:52:29 2017
-- Host        : farbizu-78 running 64-bit Ubuntu 16.04.3 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/farbizu/GIT/Jaquenod/Trabajo_Final/Ethernet-comunication-VHDL/Ethernet-comunication-VHDL.srcs/sources_1/ip/Phasing_CLK_125MHz/Phasing_CLK_125MHz_stub.vhdl
-- Design      : Phasing_CLK_125MHz
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tfgg484-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Phasing_CLK_125MHz is
  Port ( 
    clk_out1 : out STD_LOGIC;
    clk_out2 : out STD_LOGIC;
    reset : in STD_LOGIC;
    locked : out STD_LOGIC;
    CLK_IN : in STD_LOGIC
  );

end Phasing_CLK_125MHz;

architecture stub of Phasing_CLK_125MHz is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk_out1,clk_out2,reset,locked,CLK_IN";
begin
end;
