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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo6/Guia/ISE/Actividad_6_1/Handsake/Sources/UART_TX.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3888242307_1136862851_p_0(char *t0)
{
    char t11[16];
    char t44[16];
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
    int t12;
    int t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    static char *nl0[] = {&&LAB9, &&LAB10, &&LAB11, &&LAB12};

LAB0:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2384);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(36, ng0);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1144U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (char *)((nl0) + t2);
    goto **((char **)t1);

LAB5:    xsi_set_current_line(37, ng0);
    t3 = (t0 + 2428);
    t7 = (t3 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)0;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 2464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 2536);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 868U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB8;

LAB10:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1420U);
    t3 = *((char **)t1);
    t1 = (t0 + 5338);
    t12 = xsi_mem_cmp(t1, t3, 4U);
    if (t12 == 1)
        goto LAB20;

LAB31:    t7 = (t0 + 5342);
    t13 = xsi_mem_cmp(t7, t3, 4U);
    if (t13 == 1)
        goto LAB21;

LAB32:    t9 = (t0 + 5346);
    t14 = xsi_mem_cmp(t9, t3, 4U);
    if (t14 == 1)
        goto LAB22;

LAB33:    t15 = (t0 + 5350);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB23;

LAB34:    t18 = (t0 + 5354);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB24;

LAB35:    t21 = (t0 + 5358);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB25;

LAB36:    t24 = (t0 + 5362);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB26;

LAB37:    t27 = (t0 + 5366);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB27;

LAB38:    t30 = (t0 + 5370);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB28;

LAB39:    t33 = (t0 + 5374);
    t35 = xsi_mem_cmp(t33, t3, 4U);
    if (t35 == 1)
        goto LAB29;

LAB40:
LAB30:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2500);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB19:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2428);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB8;

LAB12:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 1236U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB47;

LAB49:
LAB48:    goto LAB8;

LAB13:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 2428);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

LAB14:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2536);
    t4 = (t1 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 2464);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB17;

LAB18:    t3 = (t0 + 2572);
    t4 = (t3 + 32U);
    t7 = *((char **)t4);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2428);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)1;
    xsi_driver_first_trans_fast(t1);
    goto LAB15;

LAB17:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB18;

LAB20:    xsi_set_current_line(54, ng0);
    t36 = (t0 + 2500);
    t37 = (t36 + 32U);
    t38 = *((char **)t37);
    t39 = (t38 + 32U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t36);
    goto LAB19;

LAB21:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (0 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB22:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (1 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB23:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (2 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB24:    xsi_set_current_line(58, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (3 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB25:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (4 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB26:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (5 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB27:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (6 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB28:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t12 = (7 - 7);
    t41 = (t12 * -1);
    t42 = (1U * t41);
    t43 = (0 + t42);
    t1 = (t3 + t43);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 2500);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t2;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB19;

LAB29:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 2500);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB41:;
LAB42:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 5288U);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t44, 1, 4);
    t8 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t4, t1, t7, t44);
    t9 = (t11 + 12U);
    t41 = *((unsigned int *)t9);
    t42 = (1U * t41);
    t6 = (4U != t42);
    if (t6 == 1)
        goto LAB45;

LAB46:    t10 = (t0 + 2572);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    t18 = (t16 + 32U);
    t19 = *((char **)t18);
    memcpy(t19, t8, 4U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 2428);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB43;

LAB45:    xsi_size_not_matching(4U, t42, 0);
    goto LAB46;

LAB47:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 1420U);
    t4 = *((char **)t1);
    t1 = (t0 + 5288U);
    t7 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 10, 4);
    t6 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t4, t1, t7, t11);
    if (t6 != 0)
        goto LAB50;

LAB52:    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2428);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)0;
    xsi_driver_first_trans_fast(t1);

LAB51:    goto LAB48;

LAB50:    xsi_set_current_line(77, ng0);
    t8 = (t0 + 2428);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = (unsigned char)1;
    xsi_driver_first_trans_fast(t8);
    goto LAB51;

}


extern void work_a_3888242307_1136862851_init()
{
	static char *pe[] = {(void *)work_a_3888242307_1136862851_p_0};
	xsi_register_didat("work_a_3888242307_1136862851", "isim/En_System_isim_beh.exe.sim/work/a_3888242307_1136862851.didat");
	xsi_register_executes(pe);
}
