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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo4/Guia4/ISE/Actividad 4_2/Codificador/Sources/Cod_Stuffing.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3496108612141461530_503743352(char *, unsigned char , unsigned char );


static void work_a_0172677930_1775212831_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4848);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4752);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0172677930_1775212831_p_1(char *t0)
{
    char t13[16];
    char t32[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t14;
    int t15;
    int t16;
    int t17;
    char *t18;
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned int t33;
    unsigned int t34;

LAB0:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4768);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t3 = (t0 + 2792U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 2632U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t5, t7);
    t3 = (t0 + 4912);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 8898);
    t15 = xsi_mem_cmp(t1, t3, 2U);
    if (t15 == 1)
        goto LAB15;

LAB20:    t6 = (t0 + 8900);
    t16 = xsi_mem_cmp(t6, t3, 2U);
    if (t16 == 1)
        goto LAB16;

LAB21:    t10 = (t0 + 8902);
    t17 = xsi_mem_cmp(t10, t3, 2U);
    if (t17 == 1)
        goto LAB17;

LAB22:    t12 = (t0 + 8904);
    t19 = xsi_mem_cmp(t12, t3, 2U);
    if (t19 == 1)
        goto LAB18;

LAB23:
LAB19:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 8916);
    t4 = (t0 + 4976);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);

LAB14:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 8896);
    t6 = (t0 + 4976);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 5104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(38, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 5168);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(39, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 10);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (10U != t14);
    if (t2 == 1)
        goto LAB10;

LAB11:    t4 = (t0 + 5232);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(40, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (4U != t14);
    if (t2 == 1)
        goto LAB12;

LAB13:    t4 = (t0 + 5296);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(10U, t14, 0);
    goto LAB11;

LAB12:    xsi_size_not_matching(4U, t14, 0);
    goto LAB13;

LAB15:    xsi_set_current_line(44, ng0);
    t20 = (t0 + 2472U);
    t21 = *((char **)t20);
    t20 = (t0 + 8808U);
    t22 = (t0 + 3208U);
    t23 = *((char **)t22);
    t24 = *((int *)t23);
    t22 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, t24, 10);
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t21, t20, t22, t13);
    if (t2 != 0)
        goto LAB25;

LAB27:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2472U);
    t3 = *((char **)t1);
    t1 = (t0 + 8808U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 1, 10);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t13, t3, t1, t4, t32);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t33 = (1U * t14);
    t2 = (10U != t33);
    if (t2 == 1)
        goto LAB28;

LAB29:    t10 = (t0 + 5232);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t6, 10U);
    xsi_driver_first_trans_fast(t10);

LAB26:    goto LAB14;

LAB16:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 5104);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(63, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB40;

LAB41:    t3 = (t0 + 5168);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB31:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB14;

LAB17:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 3088U);
    t3 = *((char **)t1);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 8776U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t1);
    t16 = (t15 - 14);
    t14 = (t16 * -1);
    xsi_vhdl_check_range_of_index(14, 0, -1, t15);
    t33 = (1U * t14);
    t34 = (0 + t33);
    t6 = (t3 + t34);
    t2 = *((unsigned char *)t6);
    t9 = (t0 + 5104);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = t2;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8776U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 1, 4);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t13, t3, t1, t4, t32);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t33 = (1U * t14);
    t2 = (4U != t33);
    if (t2 == 1)
        goto LAB49;

LAB50:    t10 = (t0 + 5296);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t6, 4U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8776U);
    if (14 > 0)
        goto LAB54;

LAB55:    if (-1 == -1)
        goto LAB59;

LAB60:    t15 = 0;

LAB56:    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, t15, 4);
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB51;

LAB53:
LAB52:    goto LAB14;

LAB18:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(84, ng0);
    t1 = (t0 + 5104);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 8914);
    t4 = (t0 + 4976);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB14;

LAB24:;
LAB25:    xsi_set_current_line(45, ng0);
    t25 = (t0 + 8906);
    t27 = (t0 + 4976);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t25, 2U);
    xsi_driver_first_trans_fast(t27);
    goto LAB26;

LAB28:    xsi_size_not_matching(10U, t33, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 8792U);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 5, 4);
    t7 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t6, t13);
    if (t7 != 0)
        goto LAB33;

LAB35:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8792U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t32, 1, 4);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t13, t3, t1, t4, t32);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t33 = (1U * t14);
    t2 = (4U != t33);
    if (t2 == 1)
        goto LAB38;

LAB39:    t10 = (t0 + 5168);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t6, 4U);
    xsi_driver_first_trans_fast(t10);

LAB34:    goto LAB31;

LAB33:    xsi_set_current_line(56, ng0);
    t9 = (t0 + 5040);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 8908);
    t4 = (t0 + 4976);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(58, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB36;

LAB37:    t3 = (t0 + 5168);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    goto LAB34;

LAB36:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(4U, t33, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 8910);
    t6 = (t0 + 4976);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3088U);
    t3 = *((char **)t1);
    t15 = (0 - 14);
    t14 = (t15 * -1);
    t33 = (1U * t14);
    t34 = (0 + t33);
    t1 = (t3 + t34);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 5104);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(69, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 1, 4);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (4U != t14);
    if (t2 == 1)
        goto LAB45;

LAB46:    t4 = (t0 + 5296);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(70, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (4U != t14);
    if (t2 == 1)
        goto LAB47;

LAB48:    t4 = (t0 + 5168);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB43;

LAB45:    xsi_size_not_matching(4U, t14, 0);
    goto LAB46;

LAB47:    xsi_size_not_matching(4U, t14, 0);
    goto LAB48;

LAB49:    xsi_size_not_matching(4U, t33, 0);
    goto LAB50;

LAB51:    xsi_set_current_line(78, ng0);
    t6 = (t0 + 8912);
    t10 = (t0 + 4976);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t20 = *((char **)t18);
    memcpy(t20, t6, 2U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 5040);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB52;

LAB54:    if (-1 == 1)
        goto LAB57;

LAB58:    t15 = 14;
    goto LAB56;

LAB57:    t15 = 0;
    goto LAB56;

LAB59:    t15 = 14;
    goto LAB56;

}


extern void work_a_0172677930_1775212831_init()
{
	static char *pe[] = {(void *)work_a_0172677930_1775212831_p_0,(void *)work_a_0172677930_1775212831_p_1};
	xsi_register_didat("work_a_0172677930_1775212831", "isim/TB_System_isim_beh.exe.sim/work/a_0172677930_1775212831.didat");
	xsi_register_executes(pe);
}
