onbreak {quit -f}
onerror {quit -f}

vsim -voptargs="+acc" -t 1ps -L xil_defaultlib -L secureip -lib xil_defaultlib xil_defaultlib.Inv_KPlus

do {wave.do}

view wave
view structure
view signals

do {Inv_KPlus.udo}

run -all

quit -force
