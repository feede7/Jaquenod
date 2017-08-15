#!/bin/bash -f
xv_path="/opt/Xilinx/Vivado/2017.2"
ExecStep()
{
"$@"
RETVAL=$?
if [ $RETVAL -ne 0 ]
then
exit $RETVAL
fi
}
ExecStep $xv_path/bin/xelab -wto 514fecdd54a9404c836371aba47d5995 -m64 --debug typical --relax --mt 8 -L xil_defaultlib -L secureip -L xpm --snapshot En_Head_behav xil_defaultlib.En_Head -log elaborate.log
