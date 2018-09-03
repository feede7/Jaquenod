// Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2018.1 (lin64) Build 2188600 Wed Apr  4 18:39:19 MDT 2018
// Date        : Mon Sep  3 18:23:50 2018
// Host        : fede-Toshiba running 64-bit Ubuntu 18.04.1 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/fede/GIT/Jaquenod/Trabajo_Final/System_8b10b/System_8b10b.srcs/sources_1/ip/Dplus/Dplus_stub.v
// Design      : Dplus
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tfgg484-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dist_mem_gen_v8_0_12,Vivado 2018.1" *)
module Dplus(a, spo)
/* synthesis syn_black_box black_box_pad_pin="a[3:0],spo[3:0]" */;
  input [3:0]a;
  output [3:0]spo;
endmodule
