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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo4/Guia4/ISE/Actividad 4_2/Codificador/Sources/Cod_Stuffing.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


static void work_a_0172677930_1775212831_p_0(char *t0)
{
    char t11[16];
    char t21[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    int t12;
    int t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;

LAB0:    xsi_set_current_line(26, ng0);
    t1 = (t0 + 868U);
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
LAB3:    t1 = (t0 + 2316);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 5093);
    t6 = (t0 + 2360);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(28, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2396);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 2432);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 2468);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 2504);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 2432);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2468);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 5095);
    t12 = xsi_mem_cmp(t1, t2, 2U);
    if (t12 == 1)
        goto LAB10;

LAB13:    t6 = (t0 + 5097);
    t13 = xsi_mem_cmp(t6, t2, 2U);
    if (t13 == 1)
        goto LAB11;

LAB14:
LAB12:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5103);
    t5 = (t0 + 2360);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB10:    xsi_set_current_line(38, ng0);
    t8 = (t0 + 1328U);
    t9 = *((char **)t8);
    t8 = (t0 + 5024U);
    t10 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 6, 4);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t9, t8, t10, t11);
    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB21;

LAB23:    xsi_set_current_line(45, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB26;

LAB27:    t2 = (t0 + 2396);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);

LAB22:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 592U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t16 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t1 = (t0 + 2504);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t16;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2432);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB17:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB28;

LAB30:
LAB29:    goto LAB9;

LAB11:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1592U);
    t5 = *((char **)t1);
    t1 = (t0 + 1236U);
    t6 = *((char **)t1);
    t1 = (t0 + 5008U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t1);
    t13 = (t12 - 0);
    t22 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 13, 1, t12);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t7 = (t5 + t24);
    t4 = *((unsigned char *)t7);
    t16 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t8 = (t0 + 2504);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 32U);
    t15 = *((char **)t14);
    *((unsigned char *)t15) = t16;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 5008U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, 1, 4);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t2, t1, t5, t21);
    t7 = (t11 + 12U);
    t22 = *((unsigned int *)t7);
    t23 = (1U * t22);
    t3 = (4U != t23);
    if (t3 == 1)
        goto LAB35;

LAB36:    t8 = (t0 + 2540);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(62, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t2 = (t11 + 12U);
    t22 = *((unsigned int *)t2);
    t22 = (t22 * 1U);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB37;

LAB38:    t5 = (t0 + 2396);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 5008U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 12, 4);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB39;

LAB41:
LAB40:    goto LAB9;

LAB15:;
LAB16:    xsi_set_current_line(39, ng0);
    t14 = (t0 + 1420U);
    t15 = *((char **)t14);
    t4 = *((unsigned char *)t15);
    t16 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t4);
    t14 = (t0 + 2504);
    t17 = (t14 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 32U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(40, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 2396);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB20;

LAB21:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1328U);
    t5 = *((char **)t1);
    t1 = (t0 + 5024U);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t21, 1, 4);
    t7 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t5, t1, t6, t21);
    t8 = (t11 + 12U);
    t22 = *((unsigned int *)t8);
    t23 = (1U * t22);
    t16 = (4U != t23);
    if (t16 == 1)
        goto LAB24;

LAB25:    t9 = (t0 + 2396);
    t10 = (t9 + 32U);
    t14 = *((char **)t10);
    t15 = (t14 + 32U);
    t17 = *((char **)t15);
    memcpy(t17, t7, 4U);
    xsi_driver_first_trans_fast(t9);
    goto LAB22;

LAB24:    xsi_size_not_matching(4U, t23, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB27;

LAB28:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 5099);
    t6 = (t0 + 2360);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(53, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1592U);
    t5 = *((char **)t1);
    t12 = (0 - 0);
    t22 = (t12 * 1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t1 = (t5 + t24);
    t4 = *((unsigned char *)t1);
    t16 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t6 = (t0 + 2504);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t16;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(54, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 1, 4);
    t2 = (t11 + 12U);
    t22 = *((unsigned int *)t2);
    t22 = (t22 * 1U);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB31;

LAB32:    t5 = (t0 + 2540);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(55, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t2 = (t11 + 12U);
    t22 = *((unsigned int *)t2);
    t22 = (t22 * 1U);
    t3 = (4U != t22);
    if (t3 == 1)
        goto LAB33;

LAB34:    t5 = (t0 + 2396);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 2432);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB29;

LAB31:    xsi_size_not_matching(4U, t22, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(4U, t22, 0);
    goto LAB34;

LAB35:    xsi_size_not_matching(4U, t23, 0);
    goto LAB36;

LAB37:    xsi_size_not_matching(4U, t22, 0);
    goto LAB38;

LAB39:    xsi_set_current_line(64, ng0);
    t6 = (t0 + 5101);
    t8 = (t0 + 2360);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t14 = (t10 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB40;

}


extern void work_a_0172677930_1775212831_init()
{
	static char *pe[] = {(void *)work_a_0172677930_1775212831_p_0};
	xsi_register_didat("work_a_0172677930_1775212831", "isim/TB_System_isim_beh.exe.sim/work/a_0172677930_1775212831.didat");
	xsi_register_executes(pe);
}