// Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2017.2 (lin64) Build 1909853 Thu Jun 15 18:39:10 MDT 2017
// Date        : Sun Sep 10 17:11:48 2017
// Host        : Fede-Toshiba running 64-bit Ubuntu 16.04.3 LTS
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ DCh_stub.v
// Design      : DCh
// Purpose     : Stub declaration of top-level module interface
// Device      : xa7a100tfgg484-2I
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "dist_mem_gen_v8_0_11,Vivado 2017.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(a, d, clk, we, spo)
/* synthesis syn_black_box black_box_pad_pin="a[4:0],d[4:0],clk,we,spo[4:0]" */;
  input [4:0]a;
  input [4:0]d;
  input clk;
  input we;
  output [4:0]spo;
endmodule
