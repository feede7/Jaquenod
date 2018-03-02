onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Dplus -L xil_defaultlib -L secureip -O5 xil_defaultlib.Dplus

do {wave.do}

view wave
view structure

do {Dplus.udo}

run -all

endsim

quit -force
