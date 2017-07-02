vcom -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/sync_slave_v2.vhd}
vcom -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/sync_master_v2.vhd}
vcom -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/top_v2.vhd}
vcom -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/synpl_vhdl/sim/tb_top_v2.vhd}
vsim -t pS +no_notifier -multisource_delay latest work.tst_top
add wave /tst_top/chip/clk
add wave /tst_top/chip/clk90
add wave /tst_top/chip/master/useaout
add wave /tst_top/chip/master/usebout
add wave /tst_top/chip/master/usecout
add wave /tst_top/chip/master/usedout
add wave -hexadecimal /tst_top/chip/master/ctrlout
add wave -hexadecimal /tst_top/chip/datainx
add wave -hexadecimal /tst_top/chip/outdata
add wave /tst_top/match
run 2000ns

