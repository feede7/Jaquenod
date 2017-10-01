onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Inv_Ch -L xil_defaultlib -L secureip -O5 xil_defaultlib.Inv_Ch

do {wave.do}

view wave
view structure

do {Inv_Ch.udo}

run -all

endsim

quit -force
