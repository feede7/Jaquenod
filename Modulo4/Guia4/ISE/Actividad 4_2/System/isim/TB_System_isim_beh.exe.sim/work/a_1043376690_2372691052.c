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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo4/Guia4/ISE/Actividad 4_2/System/Sources/TB_System.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1043376690_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 2640U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 3560);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2540);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 3560);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 1960U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2540);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1043376690_2372691052_p_1(char *t0)
{
    char t9[16];
    char t18[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    int t19;
    unsigned int t20;
    char *t21;
    char *t22;

LAB0:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 660U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 3500);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 3596);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(80, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 8);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 3632);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3596);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    if (99 > 0)
        goto LAB12;

LAB13:    if (-1 == -1)
        goto LAB17;

LAB18:    t10 = 0;

LAB14:    t11 = (t10 - 99);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t1 = (t5 + t14);
    t15 = *((unsigned char *)t1);
    t6 = (t0 + 3668);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t16 = (t8 + 32U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = t15;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    if (99 > 0)
        goto LAB19;

LAB20:    if (-1 == -1)
        goto LAB24;

LAB25:    t10 = 0;

LAB21:    t11 = (t10 - 1);
    t12 = (99 - t11);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t1 = (t2 + t14);
    t6 = ((IEEE_P_2592010699) + 2312);
    t7 = (t18 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 98;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t19 = (0 - 98);
    t20 = (t19 * -1);
    t20 = (t20 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t20;
    t5 = xsi_base_array_concat(t5, t9, t6, (char)97, t1, t18, (char)99, (unsigned char)3, (char)101);
    t20 = (99U + 1U);
    t3 = (100U != t20);
    if (t3 == 1)
        goto LAB26;

LAB27:    t8 = (t0 + 3704);
    t16 = (t8 + 32U);
    t17 = *((char **)t16);
    t21 = (t17 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 100U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(87, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 8);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB28;

LAB29:    t2 = (t0 + 3632);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 7588U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 100, 8);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t9);
    if (t3 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t1 = (t0 + 7588U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t18, 1, 8);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t2, t1, t5, t18);
    t7 = (t9 + 12U);
    t12 = *((unsigned int *)t7);
    t13 = (1U * t12);
    t3 = (8U != t13);
    if (t3 == 1)
        goto LAB33;

LAB34:    t8 = (t0 + 3632);
    t16 = (t8 + 32U);
    t17 = *((char **)t16);
    t21 = (t17 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_fast(t8);

LAB31:    goto LAB10;

LAB12:    if (-1 == 1)
        goto LAB15;

LAB16:    t10 = 99;
    goto LAB14;

LAB15:    t10 = 0;
    goto LAB14;

LAB17:    t10 = 99;
    goto LAB14;

LAB19:    if (-1 == 1)
        goto LAB22;

LAB23:    t10 = 99;
    goto LAB21;

LAB22:    t10 = 0;
    goto LAB21;

LAB24:    t10 = 99;
    goto LAB21;

LAB26:    xsi_size_not_matching(100U, t20, 0);
    goto LAB27;

LAB28:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(89, ng0);
    t6 = (t0 + 3596);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t16 = (t8 + 32U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t6);
    goto LAB31;

LAB33:    xsi_size_not_matching(8U, t13, 0);
    goto LAB34;

}

static void work_a_1043376690_2372691052_p_2(char *t0)
{
    char t16[16];
    char t18[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned char t15;
    char *t17;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 1580U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3508);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 1512U);
    t7 = *((char **)t3);
    if (99 > 0)
        goto LAB8;

LAB9:    if (-1 == -1)
        goto LAB13;

LAB14:    t8 = 0;

LAB10:    t9 = (t8 - 1);
    t10 = (99 - t9);
    t11 = (t10 * 1U);
    t12 = (0 + t11);
    t3 = (t7 + t12);
    t13 = (t0 + 1328U);
    t14 = *((char **)t13);
    t15 = *((unsigned char *)t14);
    t17 = ((IEEE_P_2592010699) + 2312);
    t19 = (t18 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = 98;
    t20 = (t19 + 4U);
    *((int *)t20) = 0;
    t20 = (t19 + 8U);
    *((int *)t20) = -1;
    t21 = (0 - 98);
    t22 = (t21 * -1);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t13 = xsi_base_array_concat(t13, t16, t17, (char)97, t3, t18, (char)99, t15, (char)101);
    t22 = (99U + 1U);
    t23 = (100U != t22);
    if (t23 == 1)
        goto LAB15;

LAB16:    t20 = (t0 + 3740);
    t24 = (t20 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    memcpy(t27, t13, 100U);
    xsi_driver_first_trans_fast(t20);
    goto LAB6;

LAB8:    if (-1 == 1)
        goto LAB11;

LAB12:    t8 = 99;
    goto LAB10;

LAB11:    t8 = 0;
    goto LAB10;

LAB13:    t8 = 99;
    goto LAB10;

LAB15:    xsi_size_not_matching(100U, t22, 0);
    goto LAB16;

}

static void work_a_1043376690_2372691052_p_3(char *t0)
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

LAB0:    xsi_set_current_line(106, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2096U);
    t3 = *((char **)t1);
    t4 = 1;
    if (100U == 100U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t12 = (t0 + 3776);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 3516);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 3776);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 100U)
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

static void work_a_1043376690_2372691052_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3184U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3812);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2028U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3084);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 3812);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 2028U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3084);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1043376690_2372691052_p_5(char *t0)
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

LAB0:    xsi_set_current_line(117, ng0);

LAB3:    t1 = (t0 + 3848);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (12500 * 1LL);
    t7 = (t0 + 3848);
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


extern void work_a_1043376690_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1043376690_2372691052_p_0,(void *)work_a_1043376690_2372691052_p_1,(void *)work_a_1043376690_2372691052_p_2,(void *)work_a_1043376690_2372691052_p_3,(void *)work_a_1043376690_2372691052_p_4,(void *)work_a_1043376690_2372691052_p_5};
	xsi_register_didat("work_a_1043376690_2372691052", "isim/TB_System_isim_beh.exe.sim/work/a_1043376690_2372691052.didat");
	xsi_register_executes(pe);
}
