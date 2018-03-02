onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Inv_Ch_opt

do {wave.do}

view wave
view structure
view signals

do {Inv_Ch.udo}

run -all

quit -force
