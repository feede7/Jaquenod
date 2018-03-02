onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Inv_Dplus_opt

do {wave.do}

view wave
view structure
view signals

do {Inv_Dplus.udo}

run -all

quit -force
