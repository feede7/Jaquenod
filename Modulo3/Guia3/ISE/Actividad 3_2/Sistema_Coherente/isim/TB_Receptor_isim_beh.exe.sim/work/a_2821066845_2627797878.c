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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo3/Guia3/ISE/Actividad 3_2/Sistema_Coherente/Sources/Div_Bresenham.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_3044623114557266498_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2821066845_2627797878_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(31, ng0);

LAB3:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t2 = (t0 + 7600U);
    t4 = (t0 + 2312U);
    t5 = *((char **)t4);
    t4 = (t0 + 7616U);
    t6 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (9U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 4288);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 9U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 4192);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(9U, t9, 0);
    goto LAB6;

}

static void work_a_2821066845_2627797878_p_1(char *t0)
{
    char t5[16];
    char t15[16];
    char t16[16];
    char t17[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB9;

LAB10:
LAB3:    t1 = (t0 + 4208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t6 = (8U != 8U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 4352);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(37, ng0);
    t1 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t5, 0, 9);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (9U != t12);
    if (t3 == 1)
        goto LAB7;

LAB8:    t7 = (t0 + 4416);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 9U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 7552U);
    t1 = xsi_base_array_concat(t1, t5, t7, (char)99, (unsigned char)2, (char)97, t2, t8, (char)101);
    t9 = (t0 + 4480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 9U);
    xsi_driver_first_trans_fast(t9);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(9U, t12, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4544);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7584U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t3 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 7584U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t15, 1, 8);
    t8 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t5, t2, t1, t7, t15);
    t9 = (t5 + 12U);
    t12 = *((unsigned int *)t9);
    t22 = (1U * t12);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB21;

LAB22:    t10 = (t0 + 4352);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t8, 8U);
    xsi_driver_first_trans_fast(t10);

LAB12:    goto LAB3;

LAB11:    xsi_set_current_line(42, ng0);
    t8 = (t0 + 4544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 4416);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 9U);
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 7632U);
    t7 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t5, 0, 9);
    t3 = ieee_p_1242562249_sub_3044623114557266498_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t3 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t0 + 7552U);
    t1 = xsi_base_array_concat(t1, t5, t7, (char)99, (unsigned char)2, (char)97, t2, t8, (char)101);
    t9 = (t0 + 4480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 9U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7536U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t15, 1, 8);
    t8 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t5, t2, t1, t7, t15);
    t9 = (t5 + 12U);
    t12 = *((unsigned int *)t9);
    t22 = (1U * t12);
    t3 = (8U != t22);
    if (t3 == 1)
        goto LAB19;

LAB20:    t10 = (t0 + 4352);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    t14 = (t13 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t8, 8U);
    xsi_driver_first_trans_fast(t10);

LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(45, ng0);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = ((IEEE_P_2592010699) + 4000);
    t11 = (t0 + 7552U);
    t8 = xsi_base_array_concat(t8, t16, t10, (char)99, (unsigned char)2, (char)97, t9, t11, (char)101);
    t13 = (t0 + 1672U);
    t14 = *((char **)t13);
    t18 = ((IEEE_P_2592010699) + 4000);
    t19 = (t0 + 7568U);
    t13 = xsi_base_array_concat(t13, t17, t18, (char)99, (unsigned char)2, (char)97, t14, t19, (char)101);
    t20 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t15, t8, t16, t13, t17);
    t21 = (t15 + 12U);
    t12 = *((unsigned int *)t21);
    t22 = (1U * t12);
    t4 = (9U != t22);
    if (t4 == 1)
        goto LAB17;

LAB18:    t23 = (t0 + 4480);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t20, 9U);
    xsi_driver_first_trans_fast(t23);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4352);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_size_not_matching(9U, t22, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(8U, t22, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t22, 0);
    goto LAB22;

}


extern void work_a_2821066845_2627797878_init()
{
	static char *pe[] = {(void *)work_a_2821066845_2627797878_p_0,(void *)work_a_2821066845_2627797878_p_1};
	xsi_register_didat("work_a_2821066845_2627797878", "isim/TB_Receptor_isim_beh.exe.sim/work/a_2821066845_2627797878.didat");
	xsi_register_executes(pe);
}
