onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib DCh_opt

do {wave.do}

view wave
view structure
view signals

do {DCh.udo}

run -all

quit -force
