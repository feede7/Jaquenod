onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Inv_Dplus -L dist_mem_gen_v8_0_12 -L xil_defaultlib -L unisims_ver -L unimacro_ver -L secureip -O5 xil_defaultlib.Inv_Dplus xil_defaultlib.glbl

do {wave.do}

view wave
view structure

do {Inv_Dplus.udo}

run -all

endsim

quit -force
