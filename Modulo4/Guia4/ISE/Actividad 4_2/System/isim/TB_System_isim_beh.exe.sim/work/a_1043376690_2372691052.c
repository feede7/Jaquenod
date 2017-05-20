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
unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );
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

LAB0:    t1 = (t0 + 2916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 2236U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2816);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 3836);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2236U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 2816);
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
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned char t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    int t24;
    unsigned int t25;

LAB0:    xsi_set_current_line(75, ng0);
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
LAB3:    t1 = (t0 + 3776);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3872);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3908);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(78, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 8);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 3944);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3872);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1788U);
    t5 = *((char **)t1);
    t10 = *((unsigned char *)t5);
    t1 = (t0 + 1420U);
    t6 = *((char **)t1);
    if (14 > 0)
        goto LAB12;

LAB13:    if (-1 == -1)
        goto LAB17;

LAB18:    t11 = 0;

LAB14:    t12 = (t11 - 14);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t6 + t15);
    t16 = *((unsigned char *)t1);
    t17 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t10, t16);
    t7 = (t0 + 3980);
    t8 = (t7 + 32U);
    t18 = *((char **)t8);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t17;
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t10 = (t4 == (unsigned char)2);
    if (t10 == 1)
        goto LAB22;

LAB23:    t3 = (unsigned char)0;

LAB24:    if (t3 != 0)
        goto LAB19;

LAB21:    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB27;

LAB28:    xsi_set_current_line(97, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 8240U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, 1, 8);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t2, t1, t5, t21);
    t7 = (t9 + 12U);
    t13 = *((unsigned int *)t7);
    t14 = (1U * t13);
    t3 = (8U != t14);
    if (t3 == 1)
        goto LAB45;

LAB46:    t8 = (t0 + 3944);
    t18 = (t8 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 32U);
    t22 = *((char **)t20);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_fast(t8);

LAB20:    goto LAB10;

LAB12:    if (-1 == 1)
        goto LAB15;

LAB16:    t11 = 14;
    goto LAB14;

LAB15:    t11 = 0;
    goto LAB14;

LAB17:    t11 = 14;
    goto LAB14;

LAB19:    xsi_set_current_line(85, ng0);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, 0, 8);
    t17 = (8U != 8U);
    if (t17 == 1)
        goto LAB25;

LAB26:    t18 = (t0 + 3944);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    t22 = (t20 + 32U);
    t23 = *((char **)t22);
    memcpy(t23, t8, 8U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 3908);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 3872);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB20;

LAB22:    t1 = (t0 + 1972U);
    t5 = *((char **)t1);
    t1 = (t0 + 8240U);
    t6 = (t0 + 2064U);
    t7 = *((char **)t6);
    t11 = *((int *)t7);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t11, 8);
    t16 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t5, t1, t6, t9);
    t3 = t16;
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB26;

LAB27:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1972U);
    t5 = *((char **)t1);
    t1 = (t0 + 8240U);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 15, 8);
    t10 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t5, t1, t6, t9);
    if (t10 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    if (14 > 0)
        goto LAB34;

LAB35:    if (-1 == -1)
        goto LAB39;

LAB40:    t11 = 0;

LAB36:    t12 = (t11 - 1);
    t13 = (14 - t12);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t6 = ((IEEE_P_2592010699) + 2312);
    t7 = (t21 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 13;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t24 = (0 - 13);
    t25 = (t24 * -1);
    t25 = (t25 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t25;
    t5 = xsi_base_array_concat(t5, t9, t6, (char)97, t1, t21, (char)99, (unsigned char)3, (char)101);
    t25 = (14U + 1U);
    t3 = (15U != t25);
    if (t3 == 1)
        goto LAB41;

LAB42:    t8 = (t0 + 4016);
    t18 = (t8 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 32U);
    t22 = *((char **)t20);
    memcpy(t22, t5, 15U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 8240U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, 1, 8);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t2, t1, t5, t21);
    t7 = (t9 + 12U);
    t13 = *((unsigned int *)t7);
    t14 = (1U * t13);
    t3 = (8U != t14);
    if (t3 == 1)
        goto LAB43;

LAB44:    t8 = (t0 + 3944);
    t18 = (t8 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 32U);
    t22 = *((char **)t20);
    memcpy(t22, t6, 8U);
    xsi_driver_first_trans_fast(t8);

LAB30:    goto LAB20;

LAB29:    xsi_set_current_line(90, ng0);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, 0, 8);
    t16 = (8U != 8U);
    if (t16 == 1)
        goto LAB32;

LAB33:    t8 = (t0 + 3944);
    t18 = (t8 + 32U);
    t19 = *((char **)t18);
    t20 = (t19 + 32U);
    t22 = *((char **)t20);
    memcpy(t22, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 3872);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB30;

LAB32:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB33;

LAB34:    if (-1 == 1)
        goto LAB37;

LAB38:    t11 = 14;
    goto LAB36;

LAB37:    t11 = 0;
    goto LAB36;

LAB39:    t11 = 14;
    goto LAB36;

LAB41:    xsi_size_not_matching(15U, t25, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, t14, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(8U, t14, 0);
    goto LAB46;

}

static void work_a_1043376690_2372691052_p_2(char *t0)
{
    char t15[16];
    char t17[16];
    char t22[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t23;
    int t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(105, ng0);
    t1 = (t0 + 1580U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3784);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(106, ng0);
    t3 = (t0 + 1236U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB17;

LAB18:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 8360);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    if (14 > 0)
        goto LAB8;

LAB9:    if (-1 == -1)
        goto LAB13;

LAB14:    t10 = 0;

LAB10:    t11 = (14 - t10);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t16 = ((IEEE_P_2592010699) + 2312);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 12;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (12 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t22 + 0U);
    t23 = (t19 + 0U);
    *((int *)t23) = 14;
    t23 = (t19 + 4U);
    *((int *)t23) = 13;
    t23 = (t19 + 8U);
    *((int *)t23) = -1;
    t24 = (13 - 14);
    t21 = (t24 * -1);
    t21 = (t21 + 1);
    t23 = (t19 + 12U);
    *((unsigned int *)t23) = t21;
    t14 = xsi_base_array_concat(t14, t15, t16, (char)97, t3, t17, (char)97, t8, t22, (char)101);
    t21 = (13U + 2U);
    t25 = (15U != t21);
    if (t25 == 1)
        goto LAB15;

LAB16:    t23 = (t0 + 4052);
    t26 = (t23 + 32U);
    t27 = *((char **)t26);
    t28 = (t27 + 32U);
    t29 = *((char **)t28);
    memcpy(t29, t14, 15U);
    xsi_driver_first_trans_fast(t23);
    goto LAB6;

LAB8:    if (-1 == 1)
        goto LAB11;

LAB12:    t10 = 14;
    goto LAB10;

LAB11:    t10 = 0;
    goto LAB10;

LAB13:    t10 = 14;
    goto LAB10;

LAB15:    xsi_size_not_matching(15U, t21, 0);
    goto LAB16;

LAB17:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1512U);
    t4 = *((char **)t1);
    if (14 > 0)
        goto LAB19;

LAB20:    if (-1 == -1)
        goto LAB24;

LAB25:    t10 = 0;

LAB21:    t20 = (t10 - 1);
    t11 = (14 - t20);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t1 = (t4 + t13);
    t7 = (t0 + 1328U);
    t8 = *((char **)t7);
    t6 = *((unsigned char *)t8);
    t9 = ((IEEE_P_2592010699) + 2312);
    t14 = (t17 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 13;
    t16 = (t14 + 4U);
    *((int *)t16) = 0;
    t16 = (t14 + 8U);
    *((int *)t16) = -1;
    t24 = (0 - 13);
    t21 = (t24 * -1);
    t21 = (t21 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t21;
    t7 = xsi_base_array_concat(t7, t15, t9, (char)97, t1, t17, (char)99, t6, (char)101);
    t21 = (14U + 1U);
    t25 = (15U != t21);
    if (t25 == 1)
        goto LAB26;

LAB27:    t16 = (t0 + 4052);
    t18 = (t16 + 32U);
    t19 = *((char **)t18);
    t23 = (t19 + 32U);
    t26 = *((char **)t23);
    memcpy(t26, t7, 15U);
    xsi_driver_first_trans_fast(t16);
    goto LAB6;

LAB19:    if (-1 == 1)
        goto LAB22;

LAB23:    t10 = 14;
    goto LAB21;

LAB22:    t10 = 0;
    goto LAB21;

LAB24:    t10 = 14;
    goto LAB21;

LAB26:    xsi_size_not_matching(15U, t21, 0);
    goto LAB27;

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

LAB0:    xsi_set_current_line(114, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 2372U);
    t3 = *((char **)t1);
    t4 = 1;
    if (15U == 15U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t12 = (t0 + 4088);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    t15 = (t14 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t12);

LAB2:    t17 = (t0 + 3792);
    *((int *)t17) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 4088);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 32U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 15U)
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

LAB0:    t1 = (t0 + 3460U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 4124);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(120, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4124);
    t3 = (t2 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2304U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3360);
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

LAB0:    xsi_set_current_line(125, ng0);

LAB3:    t1 = (t0 + 4160);
    t2 = (t1 + 32U);
    t3 = *((char **)t2);
    t4 = (t3 + 32U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (12500 * 1LL);
    t7 = (t0 + 4160);
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
