#!/bin/sh

# 
# Vivado(TM)
# runme.sh: a Vivado-generated Runs Script for UNIX
# Copyright 1986-2017 Xilinx, Inc. All Rights Reserved.
# 

if [ -z "$PATH" ]; then
  PATH=/opt/Xilinx/Vivado/2017.2/ids_lite/ISE/bin/lin64:/opt/Xilinx/Vivado/2017.2/bin
else
  PATH=/opt/Xilinx/Vivado/2017.2/ids_lite/ISE/bin/lin64:/opt/Xilinx/Vivado/2017.2/bin:$PATH
fi
export PATH

if [ -z "$LD_LIBRARY_PATH" ]; then
  LD_LIBRARY_PATH=/opt/Xilinx/Vivado/2017.2/ids_lite/ISE/lib/lin64
else
  LD_LIBRARY_PATH=/opt/Xilinx/Vivado/2017.2/ids_lite/ISE/lib/lin64:$LD_LIBRARY_PATH
fi
export LD_LIBRARY_PATH

HD_PWD='/home/fede/GIT/Jaquenod/Modulo11/Guia/ISE/Actividad_11_2_2/Dec_8b10b/Dec_8b10b.runs/synth_1'
cd "$HD_PWD"

HD_LOG=runme.log
/bin/touch $HD_LOG

ISEStep="./ISEWrap.sh"
EAStep()
{
     $ISEStep $HD_LOG "$@" >> $HD_LOG 2>&1
     if [ $? -ne 0 ]
     then
         exit
     fi
}

EAStep vivado -log En_Dec_8b10b.vds -m64 -product Vivado -mode batch -messageDb vivado.pb -notrace -source En_Dec_8b10b.tcl
