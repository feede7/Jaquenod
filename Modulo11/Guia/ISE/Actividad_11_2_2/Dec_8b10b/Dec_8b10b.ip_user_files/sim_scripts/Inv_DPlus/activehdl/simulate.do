onbreak {quit -force}
onerror {quit -force}

asim -t 1ps +access +r +m+Inv_DPlus -L xil_defaultlib -L secureip -O5 xil_defaultlib.Inv_DPlus

do {wave.do}

view wave
view structure

do {Inv_DPlus.udo}

run -all

endsim

quit -force
