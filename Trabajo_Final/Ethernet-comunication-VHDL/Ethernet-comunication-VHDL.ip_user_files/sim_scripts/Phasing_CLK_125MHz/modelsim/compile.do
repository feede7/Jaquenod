vlib work
vlib msim

vlib msim/xil_defaultlib
vlib msim/xpm

vmap xil_defaultlib msim/xil_defaultlib
vmap xpm msim/xpm

vlog -work xil_defaultlib -64 -incr -sv "+incdir+../../../../Ethernet-comunication-VHDL.srcs/sources_1/ip/Phasing_CLK_125MHz" "+incdir+../../../../Ethernet-comunication-VHDL.srcs/sources_1/ip/Phasing_CLK_125MHz" \
"/opt/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_cdc/hdl/xpm_cdc.sv" \

vcom -work xpm -64 -93 \
"/opt/Xilinx/Vivado/2017.2/data/ip/xpm/xpm_VCOMP.vhd" \

vcom -work xil_defaultlib -64 -93 \
"../../../../Ethernet-comunication-VHDL.srcs/sources_1/ip/Phasing_CLK_125MHz/Phasing_CLK_125MHz_sim_netlist.vhdl" \


vlog -work xil_defaultlib \
"glbl.v"

