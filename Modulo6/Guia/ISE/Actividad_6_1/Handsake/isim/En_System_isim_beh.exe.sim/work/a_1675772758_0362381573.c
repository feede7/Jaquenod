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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo6/Guia/ISE/Actividad_6_1/Handsake/Sources/UART_RX.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1675772758_0362381573_p_0(char *t0)
{
    char t11[16];
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12, &&LAB13, &&LAB13, &&LAB13, &&LAB13};

LAB0:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2660);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2848);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2884);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 2920);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1052U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 2704);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 6105);
    t4 = (t0 + 2740);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2776);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(54, ng0);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t5 = (4U != 4U);
    if (t5 == 1)
        goto LAB14;

LAB15:    t7 = (t0 + 2956);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    memcpy(t12, t4, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2776);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2704);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 6113);
    t4 = (t0 + 2992);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1328U);
    t3 = *((char **)t1);
    t5 = *((unsigned char *)t3);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB19;

LAB20:    t2 = (unsigned char)0;

LAB21:    if (t2 != 0)
        goto LAB16;

LAB18:
LAB17:    goto LAB8;

LAB10:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB8;

LAB11:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB8;

LAB12:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB8;

LAB13:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB14:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB15;

LAB16:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 2704);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB17;

LAB19:    t1 = (t0 + 1604U);
    t4 = *((char **)t1);
    t13 = *((unsigned char *)t4);
    t14 = (t13 == (unsigned char)3);
    t2 = t14;
    goto LAB21;

LAB22:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t13 = (t6 == (unsigned char)2);
    if (t13 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2812);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB26;

LAB28:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2812);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB29;

LAB31:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 776U);
    t4 = *((char **)t1);
    t6 = *((unsigned char *)t4);
    t1 = (t0 + 1420U);
    t7 = *((char **)t1);
    t15 = (7 - 7);
    t16 = (t15 * 1U);
    t17 = (0 + t16);
    t1 = (t7 + t17);
    t9 = ((IEEE_P_2592010699) + 2312);
    t10 = (t18 + 0U);
    t12 = (t10 + 0U);
    *((int *)t12) = 7;
    t12 = (t10 + 4U);
    *((int *)t12) = 1;
    t12 = (t10 + 8U);
    *((int *)t12) = -1;
    t19 = (1 - 7);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t12 = (t10 + 12U);
    *((unsigned int *)t12) = t20;
    t8 = xsi_base_array_concat(t8, t11, t9, (char)99, t6, (char)97, t1, t18, (char)101);
    t20 = (1U + 7U);
    t13 = (8U != t20);
    if (t13 == 1)
        goto LAB34;

LAB35:    t12 = (t0 + 2992);
    t21 = (t12 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t8, 8U);
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(80, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t1 = (t0 + 6052U);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 8, 4);
    t2 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t3, t1, t4, t11);
    if (t2 != 0)
        goto LAB36;

LAB38:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1696U);
    t3 = *((char **)t1);
    t1 = (t0 + 6052U);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t18, 1, 4);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t3, t1, t4, t18);
    t8 = (t11 + 12U);
    t15 = *((unsigned int *)t8);
    t16 = (1U * t15);
    t2 = (4U != t16);
    if (t2 == 1)
        goto LAB42;

LAB43:    t9 = (t0 + 2956);
    t10 = (t9 + 32U);
    t12 = *((char **)t10);
    t21 = (t12 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(90, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB37:    goto LAB32;

LAB34:    xsi_size_not_matching(8U, t20, 0);
    goto LAB35;

LAB36:    xsi_set_current_line(81, ng0);
    t7 = (t0 + 776U);
    t8 = *((char **)t7);
    t5 = *((unsigned char *)t8);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB39;

LAB41:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB40:    goto LAB37;

LAB39:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 2776);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t12 = (t10 + 32U);
    t21 = *((char **)t12);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t1 = (t0 + 2740);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2812);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB40;

LAB42:    xsi_size_not_matching(4U, t16, 0);
    goto LAB43;

}


extern void work_a_1675772758_0362381573_init()
{
	static char *pe[] = {(void *)work_a_1675772758_0362381573_p_0};
	xsi_register_didat("work_a_1675772758_0362381573", "isim/En_System_isim_beh.exe.sim/work/a_1675772758_0362381573.didat");
	xsi_register_executes(pe);
}
