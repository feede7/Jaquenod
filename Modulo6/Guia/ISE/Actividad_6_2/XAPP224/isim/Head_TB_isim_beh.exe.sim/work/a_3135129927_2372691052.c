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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo6/Guia/ISE/Actividad_6_2/XAPP224/Sources/Head_TB.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3135129927_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2948);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1920);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2948);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1408U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 1920);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_3135129927_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(87, ng0);

LAB3:    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    if (59 > 0)
        goto LAB5;

LAB6:    if (-1 == -1)
        goto LAB10;

LAB11:    t3 = 0;

LAB7:    t4 = (t3 - 59);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 2984);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 2880);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    if (-1 == 1)
        goto LAB8;

LAB9:    t3 = 59;
    goto LAB7;

LAB8:    t3 = 0;
    goto LAB7;

LAB10:    t3 = 59;
    goto LAB7;

}

static void work_a_3135129927_2372691052_p_2(char *t0)
{
    char t15[16];
    char t16[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 568U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 2888);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 1476U);
    t5 = *((char **)t1);
    t1 = (t0 + 3020);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 60U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 960U);
    t5 = *((char **)t2);
    if (59 > 0)
        goto LAB7;

LAB8:    if (-1 == -1)
        goto LAB12;

LAB13:    t10 = 0;

LAB9:    t11 = (t10 - 1);
    t12 = (59 - t11);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t2 = (t5 + t14);
    t7 = ((IEEE_P_2592010699) + 2312);
    t8 = (t16 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 58;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t17 = (0 - 58);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t18;
    t6 = xsi_base_array_concat(t6, t15, t7, (char)97, t2, t16, (char)99, (unsigned char)2, (char)101);
    t18 = (59U + 1U);
    t4 = (60U != t18);
    if (t4 == 1)
        goto LAB14;

LAB15:    t9 = (t0 + 3020);
    t19 = (t9 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t6, 60U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB7:    if (-1 == 1)
        goto LAB10;

LAB11:    t10 = 59;
    goto LAB9;

LAB10:    t10 = 0;
    goto LAB9;

LAB12:    t10 = 59;
    goto LAB9;

LAB14:    xsi_size_not_matching(60U, t18, 0);
    goto LAB15;

}

static void work_a_3135129927_2372691052_p_3(char *t0)
{
    char t13[16];
    char t15[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    char *t11;
    unsigned char t12;
    char *t14;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2896);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1052U);
    t4 = *((char **)t3);
    if (59 > 0)
        goto LAB5;

LAB6:    if (-1 == -1)
        goto LAB10;

LAB11:    t5 = 0;

LAB7:    t6 = (t5 - 1);
    t7 = (59 - t6);
    t8 = (t7 * 1U);
    t9 = (0 + t8);
    t3 = (t4 + t9);
    t10 = (t0 + 776U);
    t11 = *((char **)t10);
    t12 = *((unsigned char *)t11);
    t14 = ((IEEE_P_2592010699) + 2312);
    t16 = (t15 + 0U);
    t17 = (t16 + 0U);
    *((int *)t17) = 58;
    t17 = (t16 + 4U);
    *((int *)t17) = 0;
    t17 = (t16 + 8U);
    *((int *)t17) = -1;
    t18 = (0 - 58);
    t19 = (t18 * -1);
    t19 = (t19 + 1);
    t17 = (t16 + 12U);
    *((unsigned int *)t17) = t19;
    t10 = xsi_base_array_concat(t10, t13, t14, (char)97, t3, t15, (char)99, t12, (char)101);
    t19 = (59U + 1U);
    t20 = (60U != t19);
    if (t20 == 1)
        goto LAB12;

LAB13:    t17 = (t0 + 3056);
    t21 = (t17 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t10, 60U);
    xsi_driver_first_trans_fast(t17);
    goto LAB3;

LAB5:    if (-1 == 1)
        goto LAB8;

LAB9:    t5 = 59;
    goto LAB7;

LAB8:    t5 = 0;
    goto LAB7;

LAB10:    t5 = 59;
    goto LAB7;

LAB12:    xsi_size_not_matching(60U, t19, 0);
    goto LAB13;

}

static void work_a_3135129927_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 1476U);
    t3 = *((char **)t1);
    t4 = 1;
    if (60U == 60U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t12 = (t0 + 3092);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 2904);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 3092);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 60U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t1 = (t2 + t5);
    t6 = (t3 + t5);
    if (*((unsigned char *)t1) != *((unsigned char *)t6))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_3135129927_2372691052_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(107, ng0);

LAB3:    t1 = (t0 + 3128);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (12500 * 1LL);
    t7 = (t0 + 3128);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3135129927_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3135129927_2372691052_p_0,(void *)work_a_3135129927_2372691052_p_1,(void *)work_a_3135129927_2372691052_p_2,(void *)work_a_3135129927_2372691052_p_3,(void *)work_a_3135129927_2372691052_p_4,(void *)work_a_3135129927_2372691052_p_5};
	xsi_register_didat("work_a_3135129927_2372691052", "isim/Head_TB_isim_beh.exe.sim/work/a_3135129927_2372691052.didat");
	xsi_register_executes(pe);
}
