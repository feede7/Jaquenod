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
    char t14[16];
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
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned int t29;

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
    t1 = (t0 + 5089);
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
    t1 = (t0 + 5091);
    t12 = xsi_mem_cmp(t1, t2, 2U);
    if (t12 == 1)
        goto LAB10;

LAB13:    t6 = (t0 + 5093);
    t13 = xsi_mem_cmp(t6, t2, 2U);
    if (t13 == 1)
        goto LAB11;

LAB14:
LAB12:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 5099);
    t5 = (t0 + 2360);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast(t5);

LAB9:    goto LAB3;

LAB10:    xsi_set_current_line(38, ng0);
    t8 = (t0 + 592U);
    t9 = *((char **)t8);
    t3 = *((unsigned char *)t9);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(41, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t3 = (4U != 4U);
    if (t3 == 1)
        goto LAB21;

LAB22:    t2 = (t0 + 2396);
    t5 = (t2 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 4U);
    xsi_driver_first_trans_fast(t2);

LAB17:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t20 = (t4 == (unsigned char)3);
    if (t20 == 1)
        goto LAB26;

LAB27:    t3 = (unsigned char)0;

LAB28:    if (t3 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 592U);
    t5 = *((char **)t1);
    t4 = *((unsigned char *)t5);
    t20 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t1 = (t0 + 2504);
    t6 = (t1 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t20;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 2432);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB24:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB31;

LAB33:
LAB32:    goto LAB9;

LAB11:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1592U);
    t5 = *((char **)t1);
    t1 = (t0 + 1236U);
    t6 = *((char **)t1);
    t1 = (t0 + 5004U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t6, t1);
    t13 = (t12 - 0);
    t18 = (t13 * 1);
    xsi_vhdl_check_range_of_index(0, 13, 1, t12);
    t19 = (1U * t18);
    t29 = (0 + t19);
    t7 = (t5 + t29);
    t4 = *((unsigned char *)t7);
    t20 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t8 = (t0 + 2504);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t20;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 5004U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, 1, 4);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t2, t1, t5, t14);
    t7 = (t11 + 12U);
    t18 = *((unsigned int *)t7);
    t19 = (1U * t18);
    t3 = (4U != t19);
    if (t3 == 1)
        goto LAB38;

LAB39:    t8 = (t0 + 2540);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t1 = (t0 + 5004U);
    t5 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 12, 4);
    t3 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t5, t11);
    if (t3 != 0)
        goto LAB40;

LAB42:
LAB41:    goto LAB9;

LAB15:;
LAB16:    xsi_set_current_line(39, ng0);
    t8 = (t0 + 1328U);
    t10 = *((char **)t8);
    t8 = (t0 + 5020U);
    t15 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t14, 1, 4);
    t16 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t11, t10, t8, t15, t14);
    t17 = (t11 + 12U);
    t18 = *((unsigned int *)t17);
    t19 = (1U * t18);
    t20 = (4U != t19);
    if (t20 == 1)
        goto LAB19;

LAB20:    t21 = (t0 + 2396);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    memcpy(t25, t16, 4U);
    xsi_driver_first_trans_fast(t21);
    goto LAB17;

LAB19:    xsi_size_not_matching(4U, t19, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(4U, 4U, 0);
    goto LAB22;

LAB23:    xsi_set_current_line(45, ng0);
    t7 = (t0 + 1420U);
    t8 = *((char **)t7);
    t27 = *((unsigned char *)t8);
    t28 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t27);
    t7 = (t0 + 2468);
    t9 = (t7 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    *((unsigned char *)t16) = t28;
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(46, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t2 = (t11 + 12U);
    t18 = *((unsigned int *)t2);
    t18 = (t18 * 1U);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB29;

LAB30:    t5 = (t0 + 2396);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB24;

LAB26:    t1 = (t0 + 1328U);
    t5 = *((char **)t1);
    t1 = (t0 + 5020U);
    t6 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 6, 4);
    t26 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t5, t1, t6, t11);
    t3 = t26;
    goto LAB28;

LAB29:    xsi_size_not_matching(4U, t18, 0);
    goto LAB30;

LAB31:    xsi_set_current_line(53, ng0);
    t1 = (t0 + 5095);
    t6 = (t0 + 2360);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 2U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1592U);
    t5 = *((char **)t1);
    t12 = (0 - 0);
    t18 = (t12 * 1);
    t19 = (1U * t18);
    t29 = (0 + t19);
    t1 = (t5 + t29);
    t4 = *((unsigned char *)t1);
    t20 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t3, t4);
    t6 = (t0 + 2504);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t20;
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(55, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 1, 4);
    t2 = (t11 + 12U);
    t18 = *((unsigned int *)t2);
    t18 = (t18 * 1U);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB34;

LAB35:    t5 = (t0 + 2540);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(56, ng0);
    t1 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t11, 0, 4);
    t2 = (t11 + 12U);
    t18 = *((unsigned int *)t2);
    t18 = (t18 * 1U);
    t3 = (4U != t18);
    if (t3 == 1)
        goto LAB36;

LAB37:    t5 = (t0 + 2396);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(57, ng0);
    t1 = (t0 + 2432);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB32;

LAB34:    xsi_size_not_matching(4U, t18, 0);
    goto LAB35;

LAB36:    xsi_size_not_matching(4U, t18, 0);
    goto LAB37;

LAB38:    xsi_size_not_matching(4U, t19, 0);
    goto LAB39;

LAB40:    xsi_set_current_line(64, ng0);
    t6 = (t0 + 5097);
    t8 = (t0 + 2360);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t15 = (t10 + 32U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 2U);
    xsi_driver_first_trans_fast(t8);
    goto LAB41;

}


extern void work_a_0172677930_1775212831_init()
{
	static char *pe[] = {(void *)work_a_0172677930_1775212831_p_0};
	xsi_register_didat("work_a_0172677930_1775212831", "isim/TB_System_isim_beh.exe.sim/work/a_0172677930_1775212831.didat");
	xsi_register_executes(pe);
}
