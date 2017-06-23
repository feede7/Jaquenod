
# PlanAhead Launch Script for Pre-Synthesis Floorplanning, created by Project Navigator

create_project -name Handsake -dir "/home/fede/GIT/Jaquenod/Modulo6/Guia/ISE/Actividad_6_1/Handsake/planAhead_run_1" -part xc7a100tcsg324-3
set_param project.pinAheadLayout yes
set srcset [get_property srcset [current_run -impl]]
set_property target_constrs_file "En_Head.ucf" [current_fileset -constrset]
set hdlfile [add_files [list {Sources/ClockE.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Sources/UART_TX.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Sources/UART_RX.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Sources/System.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set hdlfile [add_files [list {Sources/Head.vhd}]]
set_property file_type VHDL $hdlfile
set_property library work $hdlfile
set_property top En_Head $srcset
add_files [list {En_Head.ucf}] -fileset [get_property constrset [current_run]]
open_rtl_design -part xc7a100tcsg324-3
