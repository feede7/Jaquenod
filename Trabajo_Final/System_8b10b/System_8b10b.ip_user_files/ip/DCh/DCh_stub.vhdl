-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
-- Date        : Sat Mar  3 09:19:11 2018
-- Host        : fede-Ubuntu running 64-bit Ubuntu 16.04.4 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/fede/GIT/Jaquenod/Trabajo_Final/System_8b10b/System_8b10b.srcs/sources_1/ip/DCh/DCh_stub.vhdl
-- Design      : DCh
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tfgg484-2
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity DCh is
  Port ( 
    a : in STD_LOGIC_VECTOR ( 4 downto 0 );
    spo : out STD_LOGIC_VECTOR ( 5 downto 0 )
  );

end DCh;

architecture stub of DCh is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "a[4:0],spo[5:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "dist_mem_gen_v8_0_12,Vivado 2017.3";
begin
end;
