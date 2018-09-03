onbreak {quit -f}
onerror {quit -f}

vsim -t 1ps -lib xil_defaultlib Inv_KPlus_opt

do {wave.do}

view wave
view structure
view signals

do {Inv_KPlus.udo}

run -all

quit -force
