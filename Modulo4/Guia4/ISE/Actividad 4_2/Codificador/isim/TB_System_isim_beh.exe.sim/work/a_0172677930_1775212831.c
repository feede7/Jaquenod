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

LAB0:    xsi_set_current_line(26, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4568);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4472);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0172677930_1775212831_p_1(char *t0)
{
    char t13[16];
    char t23[16];
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
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;

LAB0:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1152U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4488);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(31, ng0);
    t3 = (t0 + 2632U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 2472U);
    t6 = *((char **)t3);
    t7 = *((unsigned char *)t6);
    t8 = ieee_p_2592010699_sub_3496108612141461530_503743352(IEEE_P_2592010699, t5, t7);
    t3 = (t0 + 4632);
    t9 = (t3 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t8;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1992U);
    t3 = *((char **)t1);
    t1 = (t0 + 8265);
    t15 = xsi_mem_cmp(t1, t3, 2U);
    if (t15 == 1)
        goto LAB13;

LAB17:    t6 = (t0 + 8267);
    t16 = xsi_mem_cmp(t6, t3, 2U);
    if (t16 == 1)
        goto LAB14;

LAB18:    t10 = (t0 + 8269);
    t17 = xsi_mem_cmp(t10, t3, 2U);
    if (t17 == 1)
        goto LAB15;

LAB19:
LAB16:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 8279);
    t4 = (t0 + 4696);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);

LAB12:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 8263);
    t6 = (t0 + 4696);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 4824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(36, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(37, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (4U != t14);
    if (t2 == 1)
        goto LAB10;

LAB11:    t4 = (t0 + 4952);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    goto LAB6;

LAB8:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(4U, t14, 0);
    goto LAB11;

LAB13:    xsi_set_current_line(41, ng0);
    t12 = (t0 + 1032U);
    t18 = *((char **)t12);
    t2 = *((unsigned char *)t18);
    t12 = (t0 + 4824);
    t19 = (t12 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t2;
    xsi_driver_first_trans_fast(t12);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(53, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB31;

LAB32:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t3);

LAB22:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t5 = (t2 == (unsigned char)3);
    if (t5 != 0)
        goto LAB33;

LAB35:
LAB34:    goto LAB12;

LAB14:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t1 = (t0 + 2152U);
    t4 = *((char **)t1);
    t1 = (t0 + 8176U);
    t15 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t4, t1);
    t16 = (t15 - 14);
    t14 = (t16 * -1);
    xsi_vhdl_check_range_of_index(14, 0, -1, t15);
    t24 = (1U * t14);
    t25 = (0 + t24);
    t6 = (t3 + t25);
    t2 = *((unsigned char *)t6);
    t9 = (t0 + 4824);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = t2;
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(66, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8176U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t23, 1, 4);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t13, t3, t1, t4, t23);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t24 = (1U * t14);
    t2 = (4U != t24);
    if (t2 == 1)
        goto LAB40;

LAB41:    t10 = (t0 + 4952);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 4U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2152U);
    t3 = *((char **)t1);
    t1 = (t0 + 8176U);
    if (14 > 0)
        goto LAB45;

LAB46:    if (-1 == -1)
        goto LAB50;

LAB51:    t15 = 0;

LAB47:    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, t15, 4);
    t2 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t3, t1, t4, t13);
    if (t2 != 0)
        goto LAB42;

LAB44:
LAB43:    goto LAB12;

LAB15:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(74, ng0);
    t1 = (t0 + 4824);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(75, ng0);
    t1 = (t0 + 8277);
    t4 = (t0 + 4696);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    goto LAB12;

LAB20:;
LAB21:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 2312U);
    t4 = *((char **)t1);
    t1 = (t0 + 8192U);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 5, 4);
    t7 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t4, t1, t6, t13);
    if (t7 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2312U);
    t3 = *((char **)t1);
    t1 = (t0 + 8192U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t23, 1, 4);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t13, t3, t1, t4, t23);
    t9 = (t13 + 12U);
    t14 = *((unsigned int *)t9);
    t24 = (1U * t14);
    t2 = (4U != t24);
    if (t2 == 1)
        goto LAB29;

LAB30:    t10 = (t0 + 4888);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 4U);
    xsi_driver_first_trans_fast(t10);

LAB25:    goto LAB22;

LAB24:    xsi_set_current_line(46, ng0);
    t9 = (t0 + 4760);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t18 = *((char **)t12);
    *((unsigned char *)t18) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 8271);
    t4 = (t0 + 4696);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 2U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(48, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t2 = (4U != 4U);
    if (t2 == 1)
        goto LAB27;

LAB28:    t3 = (t0 + 4888);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 4U);
    xsi_driver_first_trans_fast(t3);
    goto LAB25;

LAB27:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t24, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB32;

LAB33:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 8273);
    t6 = (t0 + 4696);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 2928U);
    t3 = *((char **)t1);
    t15 = (0 - 14);
    t14 = (t15 * -1);
    t24 = (1U * t14);
    t25 = (0 + t24);
    t1 = (t3 + t25);
    t2 = *((unsigned char *)t1);
    t4 = (t0 + 4824);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t2;
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(59, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 1, 4);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (4U != t14);
    if (t2 == 1)
        goto LAB36;

LAB37:    t4 = (t0 + 4952);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(60, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t13, 0, 4);
    t3 = (t13 + 12U);
    t14 = *((unsigned int *)t3);
    t14 = (t14 * 1U);
    t2 = (4U != t14);
    if (t2 == 1)
        goto LAB38;

LAB39:    t4 = (t0 + 4888);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast(t4);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB34;

LAB36:    xsi_size_not_matching(4U, t14, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(4U, t14, 0);
    goto LAB39;

LAB40:    xsi_size_not_matching(4U, t24, 0);
    goto LAB41;

LAB42:    xsi_set_current_line(68, ng0);
    t6 = (t0 + 8275);
    t10 = (t0 + 4696);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t18 = (t12 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t6, 2U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(69, ng0);
    t1 = (t0 + 4760);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    *((unsigned char *)t9) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB43;

LAB45:    if (-1 == 1)
        goto LAB48;

LAB49:    t15 = 14;
    goto LAB47;

LAB48:    t15 = 0;
    goto LAB47;

LAB50:    t15 = 14;
    goto LAB47;

}


extern void work_a_0172677930_1775212831_init()
{
	static char *pe[] = {(void *)work_a_0172677930_1775212831_p_0,(void *)work_a_0172677930_1775212831_p_1};
	xsi_register_didat("work_a_0172677930_1775212831", "isim/TB_System_isim_beh.exe.sim/work/a_0172677930_1775212831.didat");
	xsi_register_executes(pe);
}
