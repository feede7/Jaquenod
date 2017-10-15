onbreak {quit -f}
onerror {quit -f}

vsim -voptargs="+acc" -t 1ps -L xil_defaultlib -L secureip -lib xil_defaultlib xil_defaultlib.KCh

do {wave.do}

view wave
view structure
view signals

do {KCh.udo}

run -all

quit -force