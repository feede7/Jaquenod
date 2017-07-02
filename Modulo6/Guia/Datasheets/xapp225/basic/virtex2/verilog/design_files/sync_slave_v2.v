//////////////////////////////////////////////////////////////////////////////
//
//  Xilinx, Inc. 2002                 www.xilinx.com
//
//  XAPP 225
//
//////////////////////////////////////////////////////////////////////////////
//
//  File name :       sync_slave_v2.v
//
//  Description :     Slave phase alignment module for Virtex2 (2 bit)
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

module sync_slave_v2(
input			clk,				// clock input
input			clk90,				// clock 90 input
input		[1:0]	datain,				// data inputs
input			rst,				// reset input
input			usea,				// useA output for cascade
input			useb,				// useB output for cascade
input			usec,				// useC output for cascade
input			used,				// useD output for cascade
input		[1:0]	ctrl,				// ctrl outputs for cascade
output	reg	[1:0]	sdataout );			// data out

wire 		aa0, aa1 ;
wire 		bb0, bb1 ;
wire 		cc0, cc1 ;
wire 		dd0, dd1 ;
reg 		az2, bz2, cz2, dz2 ;
reg 		ay2, by2, cy2, dy2 ;
wire 	[1:0] 	az, ay ;
wire 	[1:0] 	bz, by ;
wire 	[1:0] 	cz, cy ;
wire 	[1:0] 	dz, dy ;
wire 		notclk ;
wire 		notclk90 ;
wire 	[1:0] 	sdataa ;
wire 	[1:0] 	sdatab ;
wire 	[1:0] 	sdatac ;
wire 	[1:0] 	sdatad ;

assign notclk = ~clk ;
assign notclk90 = ~clk90 ;
assign sdataa = {(aa1 && usea), (aa0 && usea)} ;
assign sdatab = {(bb1 && useb), (bb0 && useb)} ;
assign sdatac = {(cc1 && usec), (cc0 && usec)} ;
assign sdatad = {(dd1 && used), (dd0 && used)} ;

SRL16 saa0(.D(az2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(aa0));
SRL16 sbb0(.D(bz2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(bb0));
SRL16 scc0(.D(cz2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(cc0));
SRL16 sdd0(.D(dz2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(dd0));

SRL16 saa1(.D(ay2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(aa1));
SRL16 sbb1(.D(by2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(bb1));
SRL16 scc1(.D(cy2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(cc1));
SRL16 sdd1(.D(dy2), .CLK(clk), .A0(ctrl[0]), .A1(ctrl[1]), .A2(1'b0), .A3(1'b0), .Q(dd1));

always @ (posedge clk or posedge rst)
begin
if (rst) begin
	sdataout <= "11" ;
	az2 <= 1'b0 ; bz2 <= 1'b0 ; cz2 <= 1'b0 ; dz2 <= 1'b0 ;
	ay2 <= 1'b0 ; by2 <= 1'b0 ; cy2 <= 1'b0 ; dy2 <= 1'b0 ;
end
else begin
	az2 <= az[1] ; bz2 <= bz[1] ; cz2 <= cz[1] ; dz2 <= dz[1] ;
	ay2 <= ay[1] ; by2 <= by[1] ; cy2 <= cy[1] ; dy2 <= dy[1] ;
	if (usea | useb | usec | used)
		sdataout <= sdataa | sdatab | sdatac | sdatad ;

end
end

// get all the samples into the same time domain

FDC ff_az0(.D(datain[0]), .C(clk), 	.CLR(rst), .Q(az[0]))/*synthesis rloc = "x0y0" */;
FDC ff_az1(.D(az[0]),     .C(clk), 	.CLR(rst), .Q(az[1]))/*synthesis rloc = "x2y0" */;

FDC ff_bz0(.D(datain[0]), .C(clk90), 	.CLR(rst), .Q(bz[0]))/*synthesis rloc = "x1y0" */;
FDC ff_bz1(.D(bz[0]),     .C(clk), 	.CLR(rst), .Q(bz[1]))/*synthesis rloc = "x4y0" */;

FDC ff_cz0(.D(datain[0]), .C(notclk), 	.CLR(rst), .Q(cz[0]))/*synthesis rloc = "x1y1" */;
FDC ff_cz1(.D(cz[0]),     .C(clk), 	.CLR(rst), .Q(cz[1]))/*synthesis rloc = "x2y0" */;

FDC ff_dz0(.D(datain[0]), .C(notclk90), .CLR(rst), .Q(dz[0]))/*synthesis rloc = "x0y1" */;
FDC ff_dz1(.D(dz[0]),     .C(clk90), 	.CLR(rst), .Q(dz[1]))/*synthesis rloc = "x3y0" */;

FDC ff_ay0(.D(datain[1]), .C(clk), 	.CLR(rst), .Q(ay[0]))/*synthesis rloc = "x0y0" */;
FDC ff_ay1(.D(ay[0]),     .C(clk), 	.CLR(rst), .Q(ay[1]))/*synthesis rloc = "x2y1" */;

FDC ff_by0(.D(datain[1]), .C(clk90), 	.CLR(rst), .Q(by[0]))/*synthesis rloc = "x1y0" */;
FDC ff_by1(.D(by[0]),     .C(clk), 	.CLR(rst), .Q(by[1]))/*synthesis rloc = "x4y1" */;

FDC ff_cy0(.D(datain[1]), .C(notclk), 	.CLR(rst), .Q(cy[0]))/*synthesis rloc = "x1y1" */;
FDC ff_cy1(.D(cy[0]),     .C(clk), 	.CLR(rst), .Q(cy[1]))/*synthesis rloc = "x2y1" */;

FDC ff_dy0(.D(datain[1]), .C(notclk90), .CLR(rst), .Q(dy[0]))/*synthesis rloc = "x0y1" */;
FDC ff_dy1(.D(dy[0]),     .C(clk90), 	.CLR(rst), .Q(dy[1]))/*synthesis rloc = "x3y1" */;

endmodule
