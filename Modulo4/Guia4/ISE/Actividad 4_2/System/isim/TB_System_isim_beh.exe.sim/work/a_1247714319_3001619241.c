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
static const char *ng0 = "/home/fede/GIT/Jaquenod/Modulo4/Guia4/ISE/Actividad 4_2/Decodificador/Sources/Recupera_CLK.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532753770_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434214030532825644_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_17126692536656888728_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
int ieee_p_1242562249_sub_1871261289446890672_1035706684(char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3044623114557194624_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_3044623114557266498_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873186323_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_3525738511873258197_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_1247714319_3001619241_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 6776);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t3 = (t0 + 1992U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 6920);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 6984);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 7048);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

}

static void work_a_1247714319_3001619241_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(53, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 7112);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 6792);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_2(char *t0)
{
    char t5[16];
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
    unsigned char t13;
    char *t14;
    int t15;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    int t25;
    int t26;
    unsigned int t27;
    char *t28;
    int t29;

LAB0:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB15;

LAB16:
LAB3:    t1 = (t0 + 6808);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(67, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t6 = (10U != 10U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 7176);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(68, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (10U != t12);
    if (t3 == 1)
        goto LAB7;

LAB8:    t7 = (t0 + 7240);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(69, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 8, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB9;

LAB10:    t7 = (t0 + 7304);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(70, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB11;

LAB12:    t7 = (t0 + 7368);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(71, ng0);
    t1 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB13;

LAB14:    t7 = (t0 + 7432);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB3;

LAB5:    xsi_size_not_matching(10U, 10U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(10U, t12, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(8U, t12, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(8U, t12, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(8U, t12, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2472U);
    t7 = *((char **)t2);
    t4 = *((unsigned char *)t7);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 12528U);
    t7 = (t0 + 2952U);
    t8 = *((char **)t7);
    t7 = (t0 + 12512U);
    t9 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t2, t1, t8, t7);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t9, t5);
    t3 = (t15 > 10);
    if (t3 != 0)
        goto LAB83;

LAB85:
LAB84:    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB97;

LAB99:
LAB98:    xsi_set_current_line(132, ng0);
    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB102;

LAB104:
LAB103:    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 1, 10);
    t8 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t2, t1, t7, t16);
    t9 = (t5 + 12U);
    t12 = *((unsigned int *)t9);
    t27 = (1U * t12);
    t3 = (10U != t27);
    if (t3 == 1)
        goto LAB107;

LAB108:    t10 = (t0 + 7496);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 10U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB109;

LAB111:
LAB110:
LAB18:    goto LAB3;

LAB17:    xsi_set_current_line(75, ng0);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t13 = (10U != 10U);
    if (t13 == 1)
        goto LAB20;

LAB21:    t8 = (t0 + 7176);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    memcpy(t14, t2, 10U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(76, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (10U != t12);
    if (t3 == 1)
        goto LAB22;

LAB23:    t7 = (t0 + 7240);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(77, ng0);
    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 12528U);
    t7 = (t0 + 2952U);
    t8 = *((char **)t7);
    t7 = (t0 + 12512U);
    t9 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t2, t1, t8, t7);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t9, t5);
    t3 = (t15 > 10);
    if (t3 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(93, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 12512U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t3 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t3 != 0)
        goto LAB47;

LAB49:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 12528U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t4 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t4 == 1)
        goto LAB56;

LAB57:    t8 = (t0 + 3112U);
    t9 = *((char **)t8);
    t8 = (t0 + 12528U);
    t10 = (t0 + 2952U);
    t11 = *((char **)t10);
    t10 = (t0 + 12512U);
    t6 = ieee_p_1242562249_sub_1434214030532825644_1035706684(IEEE_P_1242562249, t9, t8, t11, t10);
    t3 = t6;

LAB58:    if (t3 != 0)
        goto LAB54;

LAB55:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 12528U);
    t7 = (t0 + 2952U);
    t8 = *((char **)t7);
    t7 = (t0 + 12512U);
    t3 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t2, t1, t8, t7);
    if (t3 != 0)
        goto LAB68;

LAB69:    xsi_set_current_line(111, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 8, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB79;

LAB80:    t7 = (t0 + 7304);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(112, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB81;

LAB82:    t7 = (t0 + 7368);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);

LAB48:
LAB25:    goto LAB18;

LAB20:    xsi_size_not_matching(10U, 10U, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(10U, t12, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(80, ng0);
    t10 = (t0 + 3432U);
    t11 = *((char **)t10);
    t10 = (t0 + 12560U);
    t14 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 3, 10);
    t4 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t11, t10, t14, t16);
    if (t4 != 0)
        goto LAB27;

LAB29:    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t1 = (t0 + 12560U);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 5, 10);
    t4 = ieee_p_1242562249_sub_1434214030532825644_1035706684(IEEE_P_1242562249, t2, t1, t7, t5);
    if (t4 == 1)
        goto LAB36;

LAB37:    t3 = (unsigned char)0;

LAB38:    if (t3 != 0)
        goto LAB34;

LAB35:    xsi_set_current_line(87, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 8, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB43;

LAB44:    t7 = (t0 + 7304);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    xsi_set_current_line(88, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB45;

LAB46:    t7 = (t0 + 7368);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);

LAB28:    goto LAB25;

LAB27:    xsi_set_current_line(81, ng0);
    t18 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t17, 7, 8);
    t19 = (t17 + 12U);
    t12 = *((unsigned int *)t19);
    t12 = (t12 * 1U);
    t6 = (8U != t12);
    if (t6 == 1)
        goto LAB30;

LAB31:    t20 = (t0 + 7304);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t18, 8U);
    xsi_driver_first_trans_fast(t20);
    xsi_set_current_line(82, ng0);
    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    t1 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t25 = (t15 / 2);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t25, 8);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB32;

LAB33:    t9 = (t0 + 7368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB28;

LAB30:    xsi_size_not_matching(8U, t12, 0);
    goto LAB31;

LAB32:    xsi_size_not_matching(8U, t12, 0);
    goto LAB33;

LAB34:    xsi_set_current_line(84, ng0);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t17, 8, 8);
    t14 = (t17 + 12U);
    t12 = *((unsigned int *)t14);
    t12 = (t12 * 1U);
    t13 = (8U != t12);
    if (t13 == 1)
        goto LAB39;

LAB40:    t18 = (t0 + 7304);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t11, 8U);
    xsi_driver_first_trans_fast(t18);
    xsi_set_current_line(85, ng0);
    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    t1 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t25 = (t15 / 2);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t25, 8);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB41;

LAB42:    t9 = (t0 + 7368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB28;

LAB36:    t8 = (t0 + 3432U);
    t9 = *((char **)t8);
    t8 = (t0 + 12560U);
    t10 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 8, 10);
    t6 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t9, t8, t10, t16);
    t3 = t6;
    goto LAB38;

LAB39:    xsi_size_not_matching(8U, t12, 0);
    goto LAB40;

LAB41:    xsi_size_not_matching(8U, t12, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(8U, t12, 0);
    goto LAB44;

LAB45:    xsi_size_not_matching(8U, t12, 0);
    goto LAB46;

LAB47:    xsi_set_current_line(94, ng0);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 8, 8);
    t9 = (t16 + 12U);
    t12 = *((unsigned int *)t9);
    t12 = (t12 * 1U);
    t4 = (8U != t12);
    if (t4 == 1)
        goto LAB50;

LAB51:    t10 = (t0 + 7304);
    t11 = (t10 + 56U);
    t14 = *((char **)t11);
    t18 = (t14 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 8U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(95, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 8);
    t2 = (t5 + 12U);
    t12 = *((unsigned int *)t2);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB52;

LAB53:    t7 = (t0 + 7368);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB48;

LAB50:    xsi_size_not_matching(8U, t12, 0);
    goto LAB51;

LAB52:    xsi_size_not_matching(8U, t12, 0);
    goto LAB53;

LAB54:    xsi_set_current_line(97, ng0);
    t14 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 8, 8);
    t18 = (t16 + 12U);
    t12 = *((unsigned int *)t18);
    t12 = (t12 * 1U);
    t13 = (8U != t12);
    if (t13 == 1)
        goto LAB59;

LAB60:    t19 = (t0 + 7304);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t14, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(98, ng0);
    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    t1 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t25 = (t15 / 3);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t25, 8);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB61;

LAB62:    t9 = (t0 + 7368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(99, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 12544U);
    t7 = (t0 + 4368U);
    t8 = *((char **)t7);
    t7 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t7);
    t9 = (t0 + 4488U);
    t10 = *((char **)t9);
    t25 = *((int *)t10);
    t26 = (t15 / t25);
    t9 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t5, t26, 8);
    t3 = ieee_p_1242562249_sub_3044623114557194624_1035706684(IEEE_P_1242562249, t2, t1, t9, t5);
    if (t3 != 0)
        goto LAB63;

LAB65:
LAB64:    goto LAB48;

LAB56:    t3 = (unsigned char)1;
    goto LAB58;

LAB59:    xsi_size_not_matching(8U, t12, 0);
    goto LAB60;

LAB61:    xsi_size_not_matching(8U, t12, 0);
    goto LAB62;

LAB63:    xsi_set_current_line(102, ng0);
    t11 = (t0 + 3272U);
    t14 = *((char **)t11);
    t11 = (t0 + 12544U);
    t18 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t17, 1, 8);
    t19 = ieee_p_1242562249_sub_3525738511873186323_1035706684(IEEE_P_1242562249, t16, t14, t11, t18, t17);
    t20 = (t16 + 12U);
    t12 = *((unsigned int *)t20);
    t27 = (1U * t12);
    t4 = (8U != t27);
    if (t4 == 1)
        goto LAB66;

LAB67:    t21 = (t0 + 7432);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t28 = *((char **)t24);
    memcpy(t28, t19, 8U);
    xsi_driver_first_trans_fast(t21);
    goto LAB64;

LAB66:    xsi_size_not_matching(8U, t27, 0);
    goto LAB67;

LAB68:    xsi_set_current_line(105, ng0);
    t9 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 7, 8);
    t10 = (t5 + 12U);
    t12 = *((unsigned int *)t10);
    t12 = (t12 * 1U);
    t4 = (8U != t12);
    if (t4 == 1)
        goto LAB70;

LAB71:    t11 = (t0 + 7304);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(106, ng0);
    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    t1 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t25 = (t15 * 2);
    t26 = (t25 / 3);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t26, 8);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB72;

LAB73:    t9 = (t0 + 7368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(107, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 12544U);
    t7 = (t0 + 4368U);
    t8 = *((char **)t7);
    t7 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t8, t7);
    t9 = (t0 + 4488U);
    t10 = *((char **)t9);
    t25 = *((int *)t10);
    t26 = (t15 / t25);
    t29 = (0 - t26);
    t9 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t5, t29, 8);
    t3 = ieee_p_1242562249_sub_3044623114557266498_1035706684(IEEE_P_1242562249, t2, t1, t9, t5);
    if (t3 != 0)
        goto LAB74;

LAB76:
LAB75:    goto LAB48;

LAB70:    xsi_size_not_matching(8U, t12, 0);
    goto LAB71;

LAB72:    xsi_size_not_matching(8U, t12, 0);
    goto LAB73;

LAB74:    xsi_set_current_line(108, ng0);
    t11 = (t0 + 3272U);
    t14 = *((char **)t11);
    t11 = (t0 + 12544U);
    t18 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t17, 1, 8);
    t19 = ieee_p_1242562249_sub_3525738511873258197_1035706684(IEEE_P_1242562249, t16, t14, t11, t18, t17);
    t20 = (t16 + 12U);
    t12 = *((unsigned int *)t20);
    t27 = (1U * t12);
    t4 = (8U != t27);
    if (t4 == 1)
        goto LAB77;

LAB78:    t21 = (t0 + 7432);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t28 = *((char **)t24);
    memcpy(t28, t19, 8U);
    xsi_driver_first_trans_fast(t21);
    goto LAB75;

LAB77:    xsi_size_not_matching(8U, t27, 0);
    goto LAB78;

LAB79:    xsi_size_not_matching(8U, t12, 0);
    goto LAB80;

LAB81:    xsi_size_not_matching(8U, t12, 0);
    goto LAB82;

LAB83:    xsi_set_current_line(118, ng0);
    t10 = (t0 + 3272U);
    t11 = *((char **)t10);
    t10 = (t0 + 12544U);
    t14 = ieee_p_1242562249_sub_17126692536656888728_1035706684(IEEE_P_1242562249, t16, 0, 8);
    t4 = ieee_p_1242562249_sub_3044623114557194624_1035706684(IEEE_P_1242562249, t11, t10, t14, t16);
    if (t4 != 0)
        goto LAB86;

LAB88:    xsi_set_current_line(122, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 8, 8);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB93;

LAB94:    t2 = (t0 + 7304);
    t7 = (t2 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(123, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 12544U);
    t15 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t2, t1);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t15, 8);
    t8 = (t5 + 12U);
    t12 = *((unsigned int *)t8);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB95;

LAB96:    t9 = (t0 + 7368);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    memcpy(t18, t7, 8U);
    xsi_driver_first_trans_fast(t9);

LAB87:    goto LAB84;

LAB86:    xsi_set_current_line(119, ng0);
    t18 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t17, 7, 8);
    t6 = (8U != 8U);
    if (t6 == 1)
        goto LAB89;

LAB90:    t19 = (t0 + 7304);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t18, 8U);
    xsi_driver_first_trans_fast(t19);
    xsi_set_current_line(120, ng0);
    t1 = (t0 + 4368U);
    t2 = *((char **)t1);
    t1 = (t0 + 12576U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t2, t1);
    t7 = (t0 + 3272U);
    t8 = *((char **)t7);
    t7 = (t0 + 12544U);
    t25 = ieee_p_1242562249_sub_1871261289446890672_1035706684(IEEE_P_1242562249, t8, t7);
    t26 = (t15 + t25);
    t9 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, t26, 8);
    t10 = (t5 + 12U);
    t12 = *((unsigned int *)t10);
    t12 = (t12 * 1U);
    t3 = (8U != t12);
    if (t3 == 1)
        goto LAB91;

LAB92:    t11 = (t0 + 7368);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 8U);
    xsi_driver_first_trans_fast(t11);
    goto LAB87;

LAB89:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB90;

LAB91:    xsi_size_not_matching(8U, t12, 0);
    goto LAB92;

LAB93:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB94;

LAB95:    xsi_size_not_matching(8U, t12, 0);
    goto LAB96;

LAB97:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 2952U);
    t7 = *((char **)t1);
    t1 = (t0 + 12512U);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 1, 10);
    t9 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t7, t1, t8, t16);
    t10 = (t5 + 12U);
    t12 = *((unsigned int *)t10);
    t27 = (1U * t12);
    t6 = (10U != t27);
    if (t6 == 1)
        goto LAB100;

LAB101:    t11 = (t0 + 7240);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 10U);
    xsi_driver_first_trans_fast(t11);
    goto LAB98;

LAB100:    xsi_size_not_matching(10U, t27, 0);
    goto LAB101;

LAB102:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3112U);
    t7 = *((char **)t1);
    t1 = (t0 + 12528U);
    t8 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 1, 10);
    t9 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t5, t7, t1, t8, t16);
    t10 = (t5 + 12U);
    t12 = *((unsigned int *)t10);
    t27 = (1U * t12);
    t6 = (10U != t27);
    if (t6 == 1)
        goto LAB105;

LAB106:    t11 = (t0 + 7176);
    t14 = (t11 + 56U);
    t18 = *((char **)t14);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t9, 10U);
    xsi_driver_first_trans_fast(t11);
    goto LAB103;

LAB105:    xsi_size_not_matching(10U, t27, 0);
    goto LAB106;

LAB107:    xsi_size_not_matching(10U, t27, 0);
    goto LAB108;

LAB109:    xsi_set_current_line(140, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t5, 0, 10);
    t6 = (10U != 10U);
    if (t6 == 1)
        goto LAB112;

LAB113:    t7 = (t0 + 7496);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 10U);
    xsi_driver_first_trans_fast(t7);
    goto LAB110;

LAB112:    xsi_size_not_matching(10U, 10U, 0);
    goto LAB113;

}

static void work_a_1247714319_3001619241_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(38, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7560);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 6824);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 7624);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 6840);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1247714319_3001619241_init()
{
	static char *pe[] = {(void *)work_a_1247714319_3001619241_p_0,(void *)work_a_1247714319_3001619241_p_1,(void *)work_a_1247714319_3001619241_p_2,(void *)work_a_1247714319_3001619241_p_3,(void *)work_a_1247714319_3001619241_p_4};
	xsi_register_didat("work_a_1247714319_3001619241", "isim/TB_System_isim_beh.exe.sim/work/a_1247714319_3001619241.didat");
	xsi_register_executes(pe);
}
