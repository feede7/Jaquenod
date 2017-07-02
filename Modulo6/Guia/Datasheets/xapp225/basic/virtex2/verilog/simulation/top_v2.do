vlog -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/sync_slave_v2.v}
vlog -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/sync_master_v2.v}
vlog -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/top_v2.v}
vlog -reportprogress 300 -work work {/work/designs/v2/xapp225_phaseal/basic/synpl_ver/sim/tb_top_v2.v}
vsim -t pS +no_notifier -multisource_delay latest tb_top_v2 glbl
add wave /tb_top_v2/chip/clk
add wave /tb_top_v2/chip/clk90
add wave /tb_top_v2/chip/master/useaout
add wave /tb_top_v2/chip/master/usebout
add wave /tb_top_v2/chip/master/usecout
add wave /tb_top_v2/chip/master/usedout
add wave -hexadecimal /tb_top_v2/chip/master/ctrlout
add wave -hexadecimal /tb_top_v2/chip/datainx
add wave -hexadecimal /tb_top_v2/chip/outdata
add wave /tb_top_v2/match
run 2000ns

