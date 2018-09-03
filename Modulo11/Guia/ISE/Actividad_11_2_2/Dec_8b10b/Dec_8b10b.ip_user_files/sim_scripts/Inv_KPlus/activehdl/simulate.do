onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Inv_KPlus -L xil_defaultlib -L secureip -O5 xil_defaultlib.Inv_KPlus

do {wave.do}

view wave
view structure

do {Inv_KPlus.udo}

run -all

endsim

quit -force
