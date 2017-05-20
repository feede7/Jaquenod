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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo4/Guia4/ISE/Actividad 4_2/Decodificador/Sources/Deco_Stuffing.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3496108612141461530_503743352(char *, unsigned char , unsigned char );


static void work_a_3140484568_3460709091_p_0(char *t0)
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

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2632U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 4728);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 4632);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_3140484568_3460709091_p_1(char *t0)
{
    char t10[16];
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
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 4648);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 4792);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 4856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4920);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 4920);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(35, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t2 = t1;
    memset(t2, (unsigned char)2, 13U);
    t5 = (t0 + 4984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 13U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 5048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 5112);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(38, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 5176);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t2 = (t0 + 4920);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 4856);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 5048);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    if (12 > 0)
        goto LAB9;

LAB10:    if (-1 == -1)
        goto LAB14;

LAB15:    t11 = 0;

LAB11:    t12 = (t11 - 1);
    t13 = (12 - t12);
    t14 = (t13 * 1U);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t5 = (t0 + 2472U);
    t6 = *((char **)t5);
    t3 = *((unsigned char *)t6);
    t7 = ((IEEE_P_2592010699) + 4000);
    t8 = (t16 + 0U);
    t9 = (t8 + 0U);
    *((int *)t9) = 11;
    t9 = (t8 + 4U);
    *((int *)t9) = 0;
    t9 = (t8 + 8U);
    *((int *)t9) = -1;
    t17 = (0 - 11);
    t18 = (t17 * -1);
    t18 = (t18 + 1);
    t9 = (t8 + 12U);
    *((unsigned int *)t9) = t18;
    t5 = xsi_base_array_concat(t5, t10, t7, (char)97, t1, t16, (char)99, t3, (char)101);
    t18 = (12U + 1U);
    t4 = (13U != t18);
    if (t4 == 1)
        goto LAB16;

LAB17:    t9 = (t0 + 4984);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t5, 13U);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t23 = (t4 == (unsigned char)3);
    if (t23 == 1)
        goto LAB21;

LAB22:    t3 = (unsigned char)0;

LAB23:    if (t3 != 0)
        goto LAB18;

LAB20:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t23 = (t4 == (unsigned char)3);
    if (t23 == 1)
        goto LAB35;

LAB36:    t3 = (unsigned char)0;

LAB37:    if (t3 != 0)
        goto LAB32;

LAB34:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 8560U);
    t5 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, 6, 4);
    t3 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t5, t10);
    if (t3 != 0)
        goto LAB40;

LAB41:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB47;

LAB49:    xsi_set_current_line(63, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB52;

LAB53:    t2 = (t0 + 5176);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);

LAB48:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 4792);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5112);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB33:
LAB19:    goto LAB3;

LAB9:    if (-1 == 1)
        goto LAB12;

LAB13:    t11 = 12;
    goto LAB11;

LAB12:    t11 = 0;
    goto LAB11;

LAB14:    t11 = 12;
    goto LAB11;

LAB16:    xsi_size_not_matching(13U, t18, 0);
    goto LAB17;

LAB18:    xsi_set_current_line(47, ng0);
    t8 = (t0 + 4856);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((unsigned char *)t21) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(48, ng0);
    t1 = xsi_get_transient_memory(13U);
    memset(t1, 0, 13U);
    t2 = t1;
    memset(t2, (unsigned char)2, 13U);
    t5 = (t0 + 4984);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 13U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(49, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB30;

LAB31:    t2 = (t0 + 5176);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB19;

LAB21:    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 3088U);
    t6 = *((char **)t1);
    t24 = 1;
    if (13U == 13U)
        goto LAB24;

LAB25:    t24 = 0;

LAB26:    t3 = t24;
    goto LAB23;

LAB24:    t13 = 0;

LAB27:    if (t13 < 13U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t1 = (t5 + t13);
    t7 = (t6 + t13);
    if (*((unsigned char *)t1) != *((unsigned char *)t7))
        goto LAB25;

LAB29:    t13 = (t13 + 1);
    goto LAB27;

LAB30:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(52, ng0);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 6, 4);
    t25 = (4U != 4U);
    if (t25 == 1)
        goto LAB38;

LAB39:    t8 = (t0 + 5176);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t7, 4U);
    xsi_driver_first_trans_fast(t8);
    goto LAB33;

LAB35:    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 8560U);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, 5, 4);
    t24 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t5, t1, t6, t10);
    t3 = t24;
    goto LAB37;

LAB38:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB39;

LAB40:    xsi_set_current_line(54, ng0);
    t6 = (t0 + 4792);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t19 = *((char **)t9);
    *((unsigned char *)t19) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB42;

LAB44:
LAB43:    xsi_set_current_line(58, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t10, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB45;

LAB46:    t2 = (t0 + 5176);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB33;

LAB42:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 5048);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB43;

LAB45:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB46;

LAB47:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 2792U);
    t5 = *((char **)t1);
    t1 = (t0 + 8560U);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t16, 1, 4);
    t7 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t10, t5, t1, t6, t16);
    t8 = (t10 + 12U);
    t13 = *((unsigned int *)t8);
    t14 = (1U * t13);
    t23 = (4U != t14);
    if (t23 == 1)
        goto LAB50;

LAB51:    t9 = (t0 + 5176);
    t19 = (t9 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB48;

LAB50:    xsi_size_not_matching(4U, t14, 0);
    goto LAB51;

LAB52:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB53;

}


extern void work_a_3140484568_3460709091_init()
{
	static char *pe[] = {(void *)work_a_3140484568_3460709091_p_0,(void *)work_a_3140484568_3460709091_p_1};
	xsi_register_didat("work_a_3140484568_3460709091", "isim/TB_System_isim_beh.exe.sim/work/a_3140484568_3460709091.didat");
	xsi_register_executes(pe);
}
