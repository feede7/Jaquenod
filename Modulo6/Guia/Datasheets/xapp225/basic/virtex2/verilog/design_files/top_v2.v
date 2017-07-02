//////////////////////////////////////////////////////////////////////////////
//
//  Xilinx, Inc. 2002                 www.xilinx.com
//
//  XAPP 225
//
//////////////////////////////////////////////////////////////////////////////
//
//  File name :       top_v2.v
//
//  Description :     Generic top level file to use phase aligner modules in a Virtex2
// 			Uses one DCM to generate two 90 degree phased clocks
// 			Works at up to 210 Mhz in a -5 .
//
//  Date - revision : January 6th 2009 - v 1.2
//
//  Author :          NJS
//
//  Disclaimer: LIMITED WARRANTY AND DISCLAMER. These designs are
//              provided to you "as is". Xilinx and its licensors make and you
//              receive no warranties or conditions, express, implied,
//              statutory or otherwise, and Xilinx specifically disclaims any
//              implied warranties of merchantability, non-infringement,or
//              fitness for a particular purpose. Xilinx does not warrant that
//              the functions contained in these designs will meet your
//              requirements, or that the operation of these designs will be
//              uninterrupted or error free, or that defects in the Designs
//              will be corrected. Furthermore, Xilinx does not warrantor
//              make any representations regarding use or the results of the
//              use of the designs in terms of correctness, accuracy,
//              reliability, or otherwise.
//
//              LIMITATION OF LIABILITY. In no event will Xilinx or its
//              licensors be liable for any loss of data, lost profits,cost
//              or procurement of substitute goods or services, or for any
//              special, incidental, consequential, or indirect damages
//              arising from the use or operation of the designs or
//              accompanying documentation, however caused and on any theory
//              of liability. This limitation will apply even if Xilinx
//              has been advised of the possibility of such damage. This
//              limitation shall apply not-withstanding the failure of the
//              essential purpose of any limited remedies herein.
//
//  Copyright © 2002 Xilinx, Inc.
//  All rights reserved
//
//////////////////////////////////////////////////////////////////////////////
//
`timescale 1 ps / 1ps

module top_v2(
input			clkin,				// clock input
input			rstin,				// reset input
input 		[7:0]	datainx,			// input data
output			locked,				// locked output (for simulator)
output reg	[7:0]	outdata); 			// output data

wire 		clk ;
wire 		clkdcm ;
wire 		clkint ;
wire 		clk90 ;
wire 		clk90dcm ;
wire 	[7:0] 	outdataint ;
wire 	[1:0] 	ctrl ;
wire 		usea ;
wire 		useb ;
wire 		usec ;
wire 		used ;

DCM dcm_0(.CLKIN(clkint), .CLKFB(clk), .RST(rstin), .CLK0(clkdcm), .CLK90(clk90dcm), .LOCKED(locked));

IBUFG ibufg1(.I(clkin), .O(clkint));

BUFG bufg1(.I(clkdcm), .O(clk));

BUFG bufg2(.I(clk90dcm), .O(clk90));

sync_master_v2 master(.datain(datainx[1:0]), .rst(rstin), .clk(clk), .clk90(clk90), .useaout(usea),
                      .usebout(useb), .usecout(usec), .usedout(used), .ctrlout(ctrl), .sdataout(outdataint[1:0]));

sync_slave_v2 slave1(.datain(datainx[3:2]), .rst(rstin), .clk(clk), .clk90(clk90), .usea(usea),
                     .useb(useb), .usec(usec), .used(used), .ctrl(ctrl), .sdataout(outdataint[3:2]));

sync_slave_v2 slave2(.datain(datainx[5:4]), .rst(rstin), .clk(clk), .clk90(clk90), .usea(usea),
                     .useb(useb), .usec(usec), .used(used), .ctrl(ctrl), .sdataout(outdataint[5:4]));

sync_slave_v2 slave3(.datain(datainx[7:6]), .rst(rstin), .clk(clk), .clk90(clk90), .usea(usea),
                     .useb(useb), .usec(usec), .used(used), .ctrl(ctrl), .sdataout(outdataint[7:6]));



always @ (posedge clk or posedge rstin)
begin
if (rstin)
	outdata <= 8'h00 ;
else
	outdata <= outdataint ;
end

endmodule


