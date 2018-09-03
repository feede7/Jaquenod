onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Kplus -L xil_defaultlib -L secureip -O5 xil_defaultlib.Kplus

do {wave.do}

view wave
view structure

do {Kplus.udo}

run -all

endsim

quit -force
