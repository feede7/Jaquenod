onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+KCh -L xil_defaultlib -L secureip -O5 xil_defaultlib.KCh

do {wave.do}

view wave
view structure

do {KCh.udo}

run -all

endsim

quit -force
