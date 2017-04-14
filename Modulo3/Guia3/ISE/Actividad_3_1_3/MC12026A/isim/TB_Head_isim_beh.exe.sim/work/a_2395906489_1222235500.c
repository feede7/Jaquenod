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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo3/Guia3/ISE/Actividad_3_1_3/MC12026A/Sources/Head.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3496108612141461530_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2395906489_1222235500_p_0(char *t0)
{
    char t24[16];
    char t26[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    unsigned char t22;
    char *t23;
    char *t25;
    char *t27;
    char *t28;
    int t29;
    unsigned int t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned char t36;
    unsigned char t37;
    unsigned char t38;
    unsigned char t39;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1832U);
    t4 = *((char **)t3);
    t5 = (5 - 2);
    t6 = (t5 * 1U);
    t7 = (0 + t6);
    t3 = (t4 + t7);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t10 = (2 - 5);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = (t0 + 1832U);
    t16 = *((char **)t15);
    t17 = (3 - 5);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t15 = (t16 + t20);
    t21 = *((unsigned char *)t15);
    t22 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t14, t21);
    t25 = ((IEEE_P_2592010699) + 4000);
    t27 = (t26 + 0U);
    t28 = (t27 + 0U);
    *((int *)t28) = 2;
    t28 = (t27 + 4U);
    *((int *)t28) = 1;
    t28 = (t27 + 8U);
    *((int *)t28) = -1;
    t29 = (1 - 2);
    t30 = (t29 * -1);
    t30 = (t30 + 1);
    t28 = (t27 + 12U);
    *((unsigned int *)t28) = t30;
    t23 = xsi_base_array_concat(t23, t24, t25, (char)97, t3, t26, (char)99, t22, (char)101);
    t30 = (2U + 1U);
    t31 = (3U != t30);
    if (t31 == 1)
        goto LAB5;

LAB6:    t28 = (t0 + 4336);
    t32 = (t28 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t23, 3U);
    xsi_driver_first_trans_delta(t28, 2U, 3U, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t10 = (1 - 5);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4400);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t14 = *((unsigned char *)t3);
    t21 = (t14 == (unsigned char)3);
    if (t21 == 1)
        goto LAB10;

LAB11:    t2 = (unsigned char)0;

LAB12:    if (t2 != 0)
        goto LAB7;

LAB9:
LAB8:    goto LAB3;

LAB5:    xsi_size_not_matching(3U, t30, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(32, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t36 = *((unsigned char *)t9);
    t37 = (t36 == (unsigned char)3);
    if (t37 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t10 = (4 - 5);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t2 = *((unsigned char *)t1);
    t14 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t2);
    t4 = (t0 + 4336);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t14;
    xsi_driver_first_trans_delta(t4, 1U, 1, 0LL);

LAB14:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t10 = (4 - 5);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t3 + t7);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4336);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t15 = (t9 + 56U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t2;
    xsi_driver_first_trans_delta(t4, 0U, 1, 0LL);
    goto LAB8;

LAB10:    t1 = (t0 + 1832U);
    t4 = *((char **)t1);
    t10 = (1 - 5);
    t5 = (t10 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t4 + t7);
    t22 = *((unsigned char *)t1);
    t31 = (t22 == (unsigned char)2);
    t2 = t31;
    goto LAB12;

LAB13:    xsi_set_current_line(33, ng0);
    t8 = (t0 + 1832U);
    t15 = *((char **)t8);
    t17 = (5 - 5);
    t11 = (t17 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t15 + t13);
    t38 = *((unsigned char *)t8);
    t39 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t38);
    t16 = (t0 + 4336);
    t23 = (t16 + 56U);
    t25 = *((char **)t23);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    *((unsigned char *)t28) = t39;
    xsi_driver_first_trans_delta(t16, 1U, 1, 0LL);
    goto LAB14;

}

static void work_a_2395906489_1222235500_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 4464);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 4224);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2395906489_1222235500_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (4 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1832U);
    t9 = *((char **)t8);
    t10 = (5 - 5);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t15 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t7, t14);
    t16 = (t0 + 4528);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t15;
    xsi_driver_first_trans_fast_port(t16);

LAB2:    t21 = (t0 + 4240);
    *((int *)t21) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2395906489_1222235500_p_3(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(46, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (4 - 5);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 4592);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast_port(t8);

LAB2:    t13 = (t0 + 4256);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2395906489_1222235500_init()
{
	static char *pe[] = {(void *)work_a_2395906489_1222235500_p_0,(void *)work_a_2395906489_1222235500_p_1,(void *)work_a_2395906489_1222235500_p_2,(void *)work_a_2395906489_1222235500_p_3};
	xsi_register_didat("work_a_2395906489_1222235500", "isim/TB_Head_isim_beh.exe.sim/work/a_2395906489_1222235500.didat");
	xsi_register_executes(pe);
}
