// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.2 (lin64) Build 1909853 Thu Jun 15 18:39:10 MDT 2017
// Date        : Sun Oct  1 15:25:42 2017
// Host        : Fede-Toshiba running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode synth_stub
//               /home/fede/GIT/Jaquenod/Modulo11/Guia/ISE/Actividad_11_2_2/Dec_8b10b/Dec_8b10b.srcs/sources_1/ip/Inv_DPlus/Inv_DPlus_stub.v
// Design      : Inv_DPlus
// Purpose     : Stub declaration of top-level module interface
// Device      : xa7a100tfgg484-2I
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dist_mem_gen_v8_0_11,Vivado 2017.2" *)
module Inv_DPlus(a, spo)
/* synthesis syn_black_box black_box_pad_pin="a[3:0],spo[3:0]" */;
  input [3:0]a;
  output [3:0]spo;
endmodule
