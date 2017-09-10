onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib KCh_opt

do {wave.do}

view wave
view structure
view signals

do {KCh.udo}

run -all

quit -force
