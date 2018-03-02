-- Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2017.2 (lin64) Build 1909853 Thu Jun 15 18:39:10 MDT 2017
-- Date        : Sun Oct  1 14:04:46 2017
-- Host        : Fede-Toshiba running 64-bit Ubuntu 16.04.3 LTS
-- Command     : write_vhdl -force -mode synth_stub
--               /home/fede/GIT/Jaquenod/Modulo11/Guia/ISE/Actividad_11_2_2/Dec_8b10b/Dec_8b10b.srcs/sources_1/ip/Inv_Ch/Inv_Ch_stub.vhdl
-- Design      : Inv_Ch
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xa7a100tfgg484-2I
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity Inv_Ch is
  Port ( 
    a : in STD_LOGIC_VECTOR ( 5 downto 0 );
    spo : out STD_LOGIC_VECTOR ( 5 downto 0 )
  );

end Inv_Ch;

architecture stub of Inv_Ch is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "a[5:0],spo[5:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "dist_mem_gen_v8_0_11,Vivado 2017.2";
begin
end;
