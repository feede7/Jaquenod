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
ExecStep $xv_path/bin/xsim En_Head_TB_behav -key {Behavioral:sim_1:Functional:En_Head_TB} -tclbatch En_Head_TB.tcl -log simulate.log
