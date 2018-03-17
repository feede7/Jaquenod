/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;

char *STD_STANDARD;
char *UNISIM_P_0947159679;
char *IEEE_P_2592010699;
char *STD_TEXTIO;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    ieee_p_1242562249_init();
    std_textio_init();
    unisim_p_0947159679_init();
    xilinxcorelib_a_3810224123_3212880686_init();
    work_a_3967009018_3432221917_init();
    xilinxcorelib_a_3295946173_3212880686_init();
    work_a_3701004986_3766376199_init();
    xilinxcorelib_a_3088915520_3212880686_init();
    work_a_2139829308_1321409292_init();
    xilinxcorelib_a_0076718460_3212880686_init();
    work_a_4226289551_0372647918_init();
    work_a_2175373504_2627896437_init();
    xilinxcorelib_a_3653218425_3212880686_init();
    work_a_0309026037_3358716795_init();
    xilinxcorelib_a_1911230264_3212880686_init();
    work_a_1441411376_3991939462_init();
    xilinxcorelib_a_2638748570_3212880686_init();
    work_a_1922753541_0465066351_init();
    work_a_3465107901_2896481274_init();
    work_a_2395906489_1222235500_init();
    work_a_3135129927_3212880686_init();


    xsi_register_tops("work_a_3135129927_3212880686");

    STD_STANDARD = xsi_get_engine_memory("std_standard");
    UNISIM_P_0947159679 = xsi_get_engine_memory("unisim_p_0947159679");
    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_TEXTIO = xsi_get_engine_memory("std_textio");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
