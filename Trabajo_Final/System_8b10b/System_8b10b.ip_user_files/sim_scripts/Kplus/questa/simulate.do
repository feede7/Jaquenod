onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Kplus_opt

do {wave.do}

view wave
view structure
view signals

do {Kplus.udo}

run -all

quit -force
