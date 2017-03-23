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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/fedeserver/Documents/Jaquenod/GIT/Modulo2/ISE/LFSR/En_Head.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


static void work_a_2395906489_1222235500_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = xsi_get_transient_memory(4U);
    memset(t1, 0, 4U);
    t2 = t1;
    memset(t2, (unsigned char)3, 4U);
    t3 = (t0 + 1868);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    memcpy(t7, t1, 4U);
    xsi_driver_first_trans_fast_port(t3);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2395906489_1222235500_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned char t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    t1 = (t0 + 1652U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t3 != 0)
        goto LAB4;

LAB6:
LAB5:    goto LAB2;

LAB4:    xsi_set_current_line(50, ng0);
    t4 = (t0 + 868U);
    t5 = *((char **)t4);
    t6 = (3 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t4 = (t5 + t9);
    t10 = *((unsigned char *)t4);
    t11 = (t0 + 868U);
    t12 = *((char **)t11);
    t13 = (4 - 4);
    t14 = (t13 * -1);
    t15 = (1U * t14);
    t16 = (0 + t15);
    t11 = (t12 + t16);
    t17 = *((unsigned char *)t11);
    t18 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t10, t17);
    t19 = (t0 + 1904);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    *((unsigned char *)t23) = t18;
    xsi_driver_first_trans_delta(t19, 3U, 1, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t6 = (1 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t3 = *((unsigned char *)t2);
    t5 = (t0 + 1904);
    t11 = (t5 + 32U);
    t12 = *((char **)t11);
    t19 = (t12 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t3;
    xsi_driver_first_trans_delta(t5, 2U, 1, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t6 = (2 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t3 = *((unsigned char *)t2);
    t5 = (t0 + 1904);
    t11 = (t5 + 32U);
    t12 = *((char **)t11);
    t19 = (t12 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t3;
    xsi_driver_first_trans_delta(t5, 1U, 1, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 868U);
    t4 = *((char **)t2);
    t6 = (3 - 4);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t2 = (t4 + t9);
    t3 = *((unsigned char *)t2);
    t5 = (t0 + 1904);
    t11 = (t5 + 32U);
    t12 = *((char **)t11);
    t19 = (t12 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t3;
    xsi_driver_first_trans_delta(t5, 0U, 1, 0LL);
    goto LAB5;

LAB1:    return;
}


extern void work_a_2395906489_1222235500_init()
{
	static char *pe[] = {(void *)work_a_2395906489_1222235500_p_0,(void *)work_a_2395906489_1222235500_p_1};
	xsi_register_didat("work_a_2395906489_1222235500", "isim/TB_Head_isim_beh.exe.sim/work/a_2395906489_1222235500.didat");
	xsi_register_executes(pe);
}
