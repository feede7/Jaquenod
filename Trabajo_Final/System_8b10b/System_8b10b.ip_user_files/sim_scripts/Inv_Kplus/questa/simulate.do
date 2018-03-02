onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Inv_Kplus_opt

do {wave.do}

view wave
view structure
view signals

do {Inv_Kplus.udo}

run -all

quit -force
