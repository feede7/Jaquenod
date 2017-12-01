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
ExecStep $xv_path/bin/xelab -wto 364bec8f1ad44673b90404f22e481a1e -m64 --debug typical --relax --mt 8 -L xil_defaultlib -L secureip --snapshot En_Head_TB_behav xil_defaultlib.En_Head_TB -log elaborate.log
