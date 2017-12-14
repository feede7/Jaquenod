// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.2 (lin64) Build 1909853 Thu Jun 15 18:39:10 MDT 2017
// Date        : Thu Dec 14 09:52:29 2017
// Host        : farbizu-78 running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/farbizu/GIT/Jaquenod/Trabajo_Final/Ethernet-comunication-VHDL/Ethernet-comunication-VHDL.srcs/sources_1/ip/Phasing_CLK_125MHz/Phasing_CLK_125MHz_stub.v
// Design      : Phasing_CLK_125MHz
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tfgg484-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module Phasing_CLK_125MHz(clk_out1, clk_out2, reset, locked, CLK_IN)
/* synthesis syn_black_box black_box_pad_pin="clk_out1,clk_out2,reset,locked,CLK_IN" */;
  output clk_out1;
  output clk_out2;
  input reset;
  output locked;
  input CLK_IN;
endmodule
