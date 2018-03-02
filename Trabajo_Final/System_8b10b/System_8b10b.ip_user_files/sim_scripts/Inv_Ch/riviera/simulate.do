onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Inv_Ch -L dist_mem_gen_v8_0_12 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.Inv_Ch xil_defaultlib.glbl

do {wave.do}

view wave
view structure

do {Inv_Ch.udo}

run -all

endsim

quit -force
