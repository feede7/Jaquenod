onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+DCh -L xil_defaultlib -L secureip -O5 xil_defaultlib.DCh

do {wave.do}

view wave
view structure

do {DCh.udo}

run -all

endsim

quit -force
