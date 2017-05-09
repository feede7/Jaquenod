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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo4/Guia4/ISE/Actividad 4_2/Decodificador/Sources/Deco_Stuffing.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


static void work_a_3140484568_3460709091_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 3148);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 3096);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3140484568_3460709091_p_1(char *t0)
{
    char t9[16];
    char t20[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t21;
    int t22;
    int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 684U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1672U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB9;

LAB10:
LAB3:    t1 = (t0 + 3104);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3184);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 3220);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3256);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(50, ng0);
    t1 = (t0 + 3292);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 3328);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3364);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 3400);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(54, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 3436);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(55, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t2 = t1;
    memset(t2, (unsigned char)2, 13U);
    t5 = (t0 + 3472);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    memcpy(t10, t1, 13U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(56, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 4);
    t2 = (t9 + 12U);
    t11 = *((unsigned int *)t2);
    t11 = (t11 * 1U);
    t3 = (4U != t11);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 3508);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB3;

LAB5:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(4U, t11, 0);
    goto LAB8;

LAB9:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 3400);
    t6 = (t2 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1604U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t12 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t1 = (t0 + 3544);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t12;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 3256);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 3220);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 3364);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1788U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 7236U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t20, 1, 4);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t2, t1, t5, t20);
    t7 = (t9 + 12U);
    t11 = *((unsigned int *)t7);
    t21 = (1U * t11);
    t3 = (4U != t21);
    if (t3 == 1)
        goto LAB61;

LAB62:    t8 = (t0 + 3436);
    t10 = (t8 + 32U);
    t16 = *((char **)t10);
    t17 = (t16 + 32U);
    t18 = *((char **)t17);
    memcpy(t18, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 7252U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 6, 4);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t9);
    if (t3 != 0)
        goto LAB63;

LAB65:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB71;

LAB73:    xsi_set_current_line(101, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB76;

LAB77:    t2 = (t0 + 3508);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);

LAB72:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    if (12 > 0)
        goto LAB78;

LAB79:    if (-1 == -1)
        goto LAB83;

LAB84:    t22 = 0;

LAB80:    t23 = (t22 - 12);
    t11 = (t23 * -1);
    t21 = (1U * t11);
    t24 = (0 + t21);
    t1 = (t2 + t24);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3328);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    if (12 > 0)
        goto LAB85;

LAB86:    if (-1 == -1)
        goto LAB90;

LAB91:    t22 = 0;

LAB87:    t23 = (t22 - 1);
    t11 = (12 - t23);
    t21 = (t11 * 1U);
    t24 = (0 + t21);
    t1 = (t2 + t24);
    t5 = (t0 + 1420U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 2312);
    t8 = (t20 + 0U);
    t10 = (t8 + 0U);
    *((int *)t10) = 11;
    t10 = (t8 + 4U);
    *((int *)t10) = 0;
    t10 = (t8 + 8U);
    *((int *)t10) = -1;
    t25 = (0 - 11);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t10 = (t8 + 12U);
    *((unsigned int *)t10) = t26;
    t5 = xsi_base_array_concat(t5, t9, t7, (char)97, t1, t20, (char)99, t3, (char)101);
    t26 = (12U + 1U);
    t4 = (13U != t26);
    if (t4 == 1)
        goto LAB92;

LAB93:    t10 = (t0 + 3472);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 13U);
    xsi_driver_first_trans_fast(t10);

LAB64:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 7236U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 12, 4);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t9);
    if (t3 != 0)
        goto LAB94;

LAB96:
LAB95:
LAB12:    goto LAB3;

LAB11:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1420U);
    t5 = *((char **)t1);
    t13 = *((unsigned char *)t5);
    t14 = (t13 == (unsigned char)3);
    if (t14 == 1)
        goto LAB17;

LAB18:    t12 = (unsigned char)0;

LAB19:    if (t12 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2064U);
    t2 = *((char **)t1);
    t1 = (t0 + 7252U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 6, 4);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t9);
    if (t3 != 0)
        goto LAB30;

LAB32:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(82, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB43;

LAB44:    t2 = (t0 + 3508);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);

LAB39:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 3256);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    if (12 > 0)
        goto LAB45;

LAB46:    if (-1 == -1)
        goto LAB50;

LAB51:    t22 = 0;

LAB47:    t23 = (t22 - 12);
    t11 = (t23 * -1);
    t21 = (1U * t11);
    t24 = (0 + t21);
    t1 = (t2 + t24);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 3328);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1328U);
    t2 = *((char **)t1);
    if (12 > 0)
        goto LAB52;

LAB53:    if (-1 == -1)
        goto LAB57;

LAB58:    t22 = 0;

LAB54:    t23 = (t22 - 1);
    t11 = (12 - t23);
    t21 = (t11 * 1U);
    t24 = (0 + t21);
    t1 = (t2 + t24);
    t5 = (t0 + 1420U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 2312);
    t8 = (t20 + 0U);
    t10 = (t8 + 0U);
    *((int *)t10) = 11;
    t10 = (t8 + 4U);
    *((int *)t10) = 0;
    t10 = (t8 + 8U);
    *((int *)t10) = -1;
    t25 = (0 - 11);
    t26 = (t25 * -1);
    t26 = (t26 + 1);
    t10 = (t8 + 12U);
    *((unsigned int *)t10) = t26;
    t5 = xsi_base_array_concat(t5, t9, t7, (char)97, t1, t20, (char)99, t3, (char)101);
    t26 = (12U + 1U);
    t4 = (13U != t26);
    if (t4 == 1)
        goto LAB59;

LAB60:    t10 = (t0 + 3472);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t5, 13U);
    xsi_driver_first_trans_fast(t10);

LAB31:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);
    t10 = (t0 + 3184);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(68, ng0);
    t1 = (t0 + 3220);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(69, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 3436);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(70, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t2 = t1;
    memset(t2, (unsigned char)2, 13U);
    t5 = (t0 + 3472);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    memcpy(t10, t1, 13U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(71, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 4);
    t2 = (t9 + 12U);
    t11 = *((unsigned int *)t2);
    t11 = (t11 * 1U);
    t3 = (4U != t11);
    if (t3 == 1)
        goto LAB28;

LAB29:    t5 = (t0 + 3508);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB15;

LAB17:    t1 = (t0 + 1328U);
    t6 = *((char **)t1);
    t1 = (t0 + 2236U);
    t7 = *((char **)t1);
    t15 = 1;
    if (13U == 13U)
        goto LAB20;

LAB21:    t15 = 0;

LAB22:    t12 = t15;
    goto LAB19;

LAB20:    t11 = 0;

LAB23:    if (t11 < 13U)
        goto LAB24;
    else
        goto LAB22;

LAB24:    t1 = (t6 + t11);
    t8 = (t7 + t11);
    if (*((unsigned char *)t1) != *((unsigned char *)t8))
        goto LAB21;

LAB25:    t11 = (t11 + 1);
    goto LAB23;

LAB26:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB27;

LAB28:    xsi_size_not_matching(4U, t11, 0);
    goto LAB29;

LAB30:    xsi_set_current_line(74, ng0);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t20, 0, 4);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB33;

LAB34:    t7 = (t0 + 3508);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB31;

LAB33:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB34;

LAB35:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 3364);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB36;

LAB38:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 2064U);
    t5 = *((char **)t1);
    t1 = (t0 + 7252U);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t20, 1, 4);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t5, t1, t6, t20);
    t8 = (t9 + 12U);
    t11 = *((unsigned int *)t8);
    t21 = (1U * t11);
    t12 = (4U != t21);
    if (t12 == 1)
        goto LAB41;

LAB42:    t10 = (t0 + 3508);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB39;

LAB41:    xsi_size_not_matching(4U, t21, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB44;

LAB45:    if (-1 == 1)
        goto LAB48;

LAB49:    t22 = 12;
    goto LAB47;

LAB48:    t22 = 0;
    goto LAB47;

LAB50:    t22 = 12;
    goto LAB47;

LAB52:    if (-1 == 1)
        goto LAB55;

LAB56:    t22 = 12;
    goto LAB54;

LAB55:    t22 = 0;
    goto LAB54;

LAB57:    t22 = 12;
    goto LAB54;

LAB59:    xsi_size_not_matching(13U, t26, 0);
    goto LAB60;

LAB61:    xsi_size_not_matching(4U, t21, 0);
    goto LAB62;

LAB63:    xsi_set_current_line(93, ng0);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t20, 0, 4);
    t4 = (4U != 4U);
    if (t4 == 1)
        goto LAB66;

LAB67:    t7 = (t0 + 3508);
    t8 = (t7 + 32U);
    t10 = *((char **)t8);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 4U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB68;

LAB70:
LAB69:    goto LAB64;

LAB66:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB67;

LAB68:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3364);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB69;

LAB71:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 2064U);
    t5 = *((char **)t1);
    t1 = (t0 + 7252U);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t20, 1, 4);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t5, t1, t6, t20);
    t8 = (t9 + 12U);
    t11 = *((unsigned int *)t8);
    t21 = (1U * t11);
    t12 = (4U != t21);
    if (t12 == 1)
        goto LAB74;

LAB75:    t10 = (t0 + 3508);
    t16 = (t10 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t7, 4U);
    xsi_driver_first_trans_fast(t10);
    goto LAB72;

LAB74:    xsi_size_not_matching(4U, t21, 0);
    goto LAB75;

LAB76:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB77;

LAB78:    if (-1 == 1)
        goto LAB81;

LAB82:    t22 = 12;
    goto LAB80;

LAB81:    t22 = 0;
    goto LAB80;

LAB83:    t22 = 12;
    goto LAB80;

LAB85:    if (-1 == 1)
        goto LAB88;

LAB89:    t22 = 12;
    goto LAB87;

LAB88:    t22 = 0;
    goto LAB87;

LAB90:    t22 = 12;
    goto LAB87;

LAB92:    xsi_size_not_matching(13U, t26, 0);
    goto LAB93;

LAB94:    xsi_set_current_line(108, ng0);
    t6 = (t0 + 3184);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t10 = (t8 + 32U);
    t16 = *((char **)t10);
    *((unsigned char *)t16) = (unsigned char)2;
    xsi_driver_first_trans_fast(t6);
    goto LAB95;

}


extern void work_a_3140484568_3460709091_init()
{
	static char *pe[] = {(void *)work_a_3140484568_3460709091_p_0,(void *)work_a_3140484568_3460709091_p_1};
	xsi_register_didat("work_a_3140484568_3460709091", "isim/TB_System_isim_beh.exe.sim/work/a_3140484568_3460709091.didat");
	xsi_register_executes(pe);
}
