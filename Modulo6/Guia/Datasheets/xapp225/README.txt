*******************************************************************************
** ©2000–2009 Xilinx, Inc. All Rights Reserved.
** Confidential and proprietary information of Xilinx, Inc.
*******************************************************************************
**   ____  ____
**  /   /\/   /
** /___/  \  /   Vendor: Xilinx
** \   \   \/    Version: 1.3
**  \   \        Filename: xapp225.zip
**  /   /        Date Last Modified: January 28th 2009
** /___/   /\    Date Created:
** \   \  /  \
**  \___\/\___\
**
**  Device: Virtex-II Series and Spartan-3 Generation FPGAs
**  Purpose: This readme describes how to use the files that come with XAPP225.
**  Reference:
**  Revision History:	Version 1.3 - January 2009
**
**			- VirtexE files removed
**			- General tidy up of code and checked out with ISE10.1
**
**			Version 1.1 - April 2002
**
**			- Demo board files added
**			- Checked out for Virtex2PRO
**			- simulation files added
**
**			Version 1.0
**
**			- initial release
**
*******************************************************************************
**
**  Disclaimer:
**
**		Xilinx licenses this Design to you “AS-IS” with no warranty of any kind.
**		Xilinx does not warrant that the functions contained in the Design will
**		meet your requirements,that the Design will operate uninterrupted or be
**		error-free, or that errors or bugs in the Design will be corrected.
**		Xilinx makes no warranties or representations in regard to the results
**		obtained from your use of the Design with respect to accuracy, reliability,
**		or otherwise.
**
**		XILINX MAKES NO REPRESENTATIONS OR WARRANTIES, WHETHER EXPRESS OR IMPLIED,
**		STATUTORY OR OTHERWISE, INCLUDING, WITHOUT LIMITATION, IMPLIED WARRANTIES
**		OF MERCHANTABILITY, NONINFRINGEMENT, OR FITNESS FOR A PARTICULAR PURPOSE.
**		IN NO EVENT WILL XILINX BE LIABLE FOR ANY LOSS OF DATA, LOST PROFITS, OR FOR
**		ANY SPECIAL, INCIDENTAL, CONSEQUENTIAL, OR INDIRECT DAMAGES ARISING FROM
**		YOUR USE OF THIS DESIGN.

*******************************************************************************

** IMPORTANT NOTES **

This zip file contains two folders, one called basic which contains
files for a basic implementation of the circuit, the other called
demo_board, which contains files for use with the Xilinx LVDS demo_board.

Each folder contains designs in both VHDL and Verilog together
with simulation files and .do files for MTI, and constraint files
for implementation. Files are included for both the
VirtexE and Virtex2 family devices, and have
been implemented using version 4.2i SP1 of the
Xilinx software.

Design use is fairly obvious. The sync_master_v* module
will receive one or two data lines and generate the
control signals for as many sync_slave_v* modules as
required by the designer. Each sync_slave_* module adds
one or two more data lines.

When defining the pinout for a device, it makes sense
to group data busses together, and it is best for skew reasons
to place input pin pairs next to the appropriate macro - see the
enclosed constraint files for details on this. Otherwise there are no
specific I/O requirements. The I/O standard used will
not affect the operation of the macro.
