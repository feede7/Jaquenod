//////////////////////////////////////////////////////////////////////////////
//
//  Xilinx, Inc. 2002                 www.xilinx.com
//
//  XAPP 225
//
//////////////////////////////////////////////////////////////////////////////
//
//  File name :       sync_master_v2.v
//
//  Description :     Master phase aligner module for Virtex2 (2 bits)
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

module sync_master_v2(
input 			clk,				// clock input
input 			clk90,				// clock 90 input
input 		[1:0]	datain,				// data inputs
input 			rst,				// reset input
output			useaout,			// useA output for cascade
output			usebout,			// useB output for cascade
output			usecout,			// useC output for cascade
output			usedout,			// useD output for cascade
output 		[1:0] 	ctrlout,			// ctrl outputs for cascade
output	reg 	[1:0]	sdataout );			// data out

wire 		aa0, aa1 ;
wire 		bb0, bb1 ;
wire 		cc0, cc1 ;
wire 		dd0, dd1 ;
reg 		usea ;
reg 		useb ;
reg 		usec ;
reg 		used ;
reg 		useaint ;
reg 		usebint ;
reg 		usecint ;
reg 		usedint ;
reg 	[1:0] 	ctrlint;
wire 	[1:0] 	sdataa ;
wire 	[1:0] 	sdatab ;
wire 	[1:0] 	sdatac ;
wire 	[1:0] 	sdatad ;
wire 	[1:0] 	az, ay ;
wire 	[1:0] 	bz, by ;
wire 	[1:0] 	cz, cy ;
wire 	[1:0] 	dz, dy ;
reg 		aap, bbp, ccp, ddp, az2, bz2, cz2, dz2 ;
reg 		aan, bbn, ccn, ddn, ay2, by2, cy2, dy2 ;
reg 		pipe_ce0 ;
wire 		notclk ;
wire 		notclk90 ;

assign notclk = ~clk ;
assign notclk90 = ~clk90 ;
assign useaout = useaint ;
assign usebout = usebint ;
assign usecout = usecint ;
assign usedout = usedint ;
assign ctrlout =  ctrlint ;
assign sdataa = {(aa1 && useaint), (aa0 && useaint)} ;
assign sdatab = {(bb1 && usebint), (bb0 && usebint)} ;
assign sdatac = {(cc1 && usecint), (cc0 && usecint)} ;
assign sdatad = {(dd1 && usedint), (dd0 && usedint)} ;

SRL16 saa0(.D(az2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(aa0));
SRL16 sbb0(.D(bz2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(bb0));
SRL16 scc0(.D(cz2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(cc0));
SRL16 sdd0(.D(dz2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(dd0));

SRL16 saa1(.D(ay2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(aa1));
SRL16 sbb1(.D(by2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(bb1));
SRL16 scc1(.D(cy2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(cc1));
SRL16 sdd1(.D(dy2), .CLK(clk), .A0(ctrlint[0]), .A1(ctrlint[1]), .A2(1'b0), .A3(1'b0), .Q(dd1));

always @ (posedge clk or posedge rst)
begin
if (rst) begin
	ctrlint <= 2'b10 ;
	useaint <= 1'b0 ; usebint <= 1'b0 ; usecint <= 1'b0 ; usedint <= 1'b0 ;
	usea <= 1'b0 ; useb <= 1'b0 ; usec <= 1'b0 ; used <= 1'b0 ;
	pipe_ce0 <= 1'b0 ; sdataout <= 2'b11 ;
	aap <= 1'b0 ; bbp <= 1'b0 ; ccp <= 1'b0 ; ddp <= 1'b0 ;
	aan <= 1'b0 ; bbn <= 1'b0 ; ccn <= 1'b0 ; ddn <= 1'b0 ;
	az2 <= 1'b0 ; bz2 <= 1'b0 ; cz2 <= 1'b0 ; dz2 <= 1'b0 ;
	ay2 <= 1'b0 ; by2 <= 1'b0 ; cy2 <= 1'b0 ; dy2 <= 1'b0 ;
end
else begin
	az2 <= az[1] ; bz2 <= bz[1] ; cz2 <= cz[1] ; dz2 <= dz[1] ;
	ay2 <= ay[1] ; by2 <= by[1] ; cy2 <= cy[1] ; dy2 <= dy[1] ;
	aap <= (az ^ az[1]) & ~az[1] ;		// find positive edges
	bbp <= (bz ^ bz[1]) & ~bz[1] ;
	ccp <= (cz ^ cz[1]) & ~cz[1] ;
	ddp <= (dz ^ dz[1]) & ~dz[1] ;
	aan <= (az ^ az[1]) & az[1] ;		// find negative edges
	bbn <= (bz ^ bz[1]) & bz[1] ;
	ccn <= (cz ^ cz[1]) & cz[1] ;
	ddn <= (dz ^ dz[1]) & dz[1] ;
	usea <= (bbp & ~ccp & ~ddp & aap) | (bbn & ~ccn & ~ddn & aan) ;
	useb <= (ccp & ~ddp & aap & bbp) | (ccn & ~ddn & aan & bbn) ;
	usec <= (ddp & aap & bbp & ccp) | (ddn & aan & bbn & ccn) ;
	used <= (aap & ~bbp & ~ccp & ~ddp) | (aan & ~bbn & ~ccn & ~ddn) ;
	if (usea | useb | usec | used) begin
		pipe_ce0 <= 1'b1 ;
	    	useaint <= usea ;
	    	usebint <= useb ;
	    	usecint <= usec ;
	    	usedint <= used ;
	end
	if (pipe_ce0)
		sdataout <= sdataa | sdatab | sdatac | sdatad ;

	if (usedint & usea)  			// 'd' going to 'a'
		ctrlint <= ctrlint - 1 ;
	else if (useaint & used)  		// 'a' going to 'd'
		ctrlint <= ctrlint + 1 ;

end
end

// get all the samples into the same time domain

FDC ff_az0(.D(datain[0]), .C(clk), .CLR(rst), .Q(az[0]))/*synthesis rloc = "x0y0" */;
FDC ff_az1(.D(az[0]),     .C(clk), .CLR(rst), .Q(az[1]))/*synthesis rloc = "x2y0" */;

FDC ff_bz0(.D(datain[0]), .C(clk90), .CLR(rst), .Q(bz[0]))/*synthesis rloc = "x1y0" */;
FDC ff_bz1(.D(bz[0]),     .C(clk), .CLR(rst), .Q(bz[1]))/*synthesis rloc = "x4y0" */;

FDC ff_cz0(.D(datain[0]), .C(notclk), .CLR(rst), .Q(cz[0]))/*synthesis rloc = "x1y1" */;
FDC ff_cz1(.D(cz[0]),     .C(clk), .CLR(rst), .Q(cz[1]))/*synthesis rloc = "x2y0" */;

FDC ff_dz0(.D(datain[0]), .C(notclk90), .CLR(rst), .Q(dz[0]))/*synthesis rloc = "x0y1" */;
FDC ff_dz1(.D(dz[0]),     .C(clk90), .CLR(rst), .Q(dz[1]))/*synthesis rloc = "x3y0" */;

FDC ff_ay0(.D(datain[1]), .C(clk), .CLR(rst), .Q(ay[0]))/*synthesis rloc = "x0y0" */;
FDC ff_ay1(.D(ay[0]),     .C(clk), .CLR(rst), .Q(ay[1]))/*synthesis rloc = "x2y1" */;

FDC ff_by0(.D(datain[1]), .C(clk90), .CLR(rst), .Q(by[0]))/*synthesis rloc = "x1y0" */;
FDC ff_by1(.D(by[0]),     .C(clk), .CLR(rst), .Q(by[1]))/*synthesis rloc = "x4y1" */;

FDC ff_cy0(.D(datain[1]), .C(notclk), .CLR(rst), .Q(cy[0]))/*synthesis rloc = "x1y1" */;
FDC ff_cy1(.D(cy[0]),     .C(clk), .CLR(rst), .Q(cy[1]))/*synthesis rloc = "x2y1" */;

FDC ff_dy0(.D(datain[1]), .C(notclk90), .CLR(rst), .Q(dy[0]))/*synthesis rloc = "x0y1" */;
FDC ff_dy1(.D(dy[0]),     .C(clk90), .CLR(rst), .Q(dy[1]))/*synthesis rloc = "x3y1" */;

endmodule
