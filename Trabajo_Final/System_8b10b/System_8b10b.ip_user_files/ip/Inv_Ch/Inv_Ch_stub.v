// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.3 (lin64) Build 2018833 Wed Oct  4 19:58:07 MDT 2017
// Date        : Fri Mar  2 07:07:06 2018
// Host        : farbizu running 64-bit Ubuntu 16.04.4 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/farbizu/Trabajo_Final/System_8b10b/System_8b10b.srcs/sources_1/ip/Inv_Ch/Inv_Ch_stub.v
// Design      : Inv_Ch
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tfgg484-2
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dist_mem_gen_v8_0_12,Vivado 2017.3" *)
module Inv_Ch(a, spo)
/* synthesis syn_black_box black_box_pad_pin="a[5:0],spo[5:0]" */;
  input [5:0]a;
  output [5:0]spo;
endmodule