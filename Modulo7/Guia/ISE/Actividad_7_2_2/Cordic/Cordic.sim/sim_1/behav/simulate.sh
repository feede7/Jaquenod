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
ExecStep $xv_path/bin/xsim En_Head_behav -key {Behavioral:sim_1:Functional:En_Head} -tclbatch En_Head.tcl -log simulate.log
