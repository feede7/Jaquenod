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
extern char *IEEE_P_2592010699;
static const char *ng1 = "/home/fede/Documents/Jaquenod/GIT/Modulo6/Guia/ISE/Actividad_6_1/Handsake/Sources/ClockE.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_853553178_503743352(char *, unsigned char , unsigned char );


char *work_a_1135542979_0043142827_sub_2420223775_727255735(char *t1, int t2, int t3, int t4, char *t5, unsigned char t6)
{
    char t7[72];
    char t8[32];
    char t9[16];
    char t14[16];
    char t19[16];
    char t56[16];
    char t58[16];
    char *t0;
    char *t10;
    char *t11;
    int t12;
    unsigned int t13;
    char *t15;
    int t16;
    char *t17;
    char *t18;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned char t29;
    char *t30;
    char *t31;
    int t32;
    int t33;
    char *t34;
    char *t35;
    int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned char t45;
    unsigned char t46;
    char *t47;
    char *t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned char t53;
    unsigned char t54;
    char *t55;
    char *t57;
    int t59;
    char *t60;
    char *t61;
    int t62;
    unsigned int t63;
    char *t64;
    int t65;
    int t66;
    unsigned int t67;
    unsigned int t68;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 15;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (1 - 15);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 15;
    t15 = (t11 + 4U);
    *((int *)t15) = 1;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t16 = (1 - 15);
    t13 = (t16 * -1);
    t13 = (t13 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t13;
    t15 = (t7 + 4U);
    t17 = (t1 + 2400);
    t18 = (t15 + 52U);
    *((char **)t18) = t17;
    t20 = (t15 + 36U);
    *((char **)t20) = t19;
    memcpy(t19, t5, 15U);
    t21 = (t15 + 40U);
    t22 = (t17 + 44U);
    t23 = *((char **)t22);
    *((char **)t21) = t23;
    t24 = (t15 + 48U);
    *((unsigned int *)t24) = 15U;
    t25 = (t8 + 4U);
    *((int *)t25) = t2;
    t26 = (t8 + 8U);
    *((int *)t26) = t3;
    t27 = (t8 + 12U);
    *((int *)t27) = t4;
    t28 = (t8 + 16U);
    t29 = (t5 != 0);
    if (t29 == 1)
        goto LAB3;

LAB2:    t30 = (t8 + 20U);
    *((char **)t30) = t9;
    t31 = (t8 + 24U);
    *((unsigned char *)t31) = t6;
    t32 = 1;
    t33 = t4;

LAB4:    if (t32 <= t33)
        goto LAB5;

LAB7:    t10 = (t15 + 36U);
    t11 = *((char **)t10);
    xsi_vhdl_check_range_of_slice(15, 1, -1, 15, 1, -1);
    t0 = xsi_get_transient_memory(15U);
    memcpy(t0, t11, 15U);

LAB1:    return t0;
LAB3:    *((char **)t28) = t5;
    goto LAB2;

LAB5:    t34 = (t15 + 36U);
    t35 = *((char **)t34);
    t36 = (t3 - 1);
    t13 = (15 - t36);
    xsi_vhdl_check_range_of_slice(15, 1, -1, t36, 1, -1);
    t37 = (t13 * 1U);
    t38 = (0 + t37);
    t34 = (t35 + t38);
    t39 = (t15 + 36U);
    t40 = *((char **)t39);
    t41 = (t2 - 15);
    t42 = (t41 * -1);
    xsi_vhdl_check_range_of_index(15, 1, -1, t2);
    t43 = (1U * t42);
    t44 = (0 + t43);
    t39 = (t40 + t44);
    t45 = *((unsigned char *)t39);
    t46 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t6, t45);
    t47 = (t15 + 36U);
    t48 = *((char **)t47);
    t49 = (t3 - 15);
    t50 = (t49 * -1);
    xsi_vhdl_check_range_of_index(15, 1, -1, t3);
    t51 = (1U * t50);
    t52 = (0 + t51);
    t47 = (t48 + t52);
    t53 = *((unsigned char *)t47);
    t54 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t46, t53);
    t57 = ((IEEE_P_2592010699) + 2312);
    t59 = (t3 - 1);
    t60 = (t58 + 0U);
    t61 = (t60 + 0U);
    *((int *)t61) = t59;
    t61 = (t60 + 4U);
    *((int *)t61) = 1;
    t61 = (t60 + 8U);
    *((int *)t61) = -1;
    t62 = (1 - t59);
    t63 = (t62 * -1);
    t63 = (t63 + 1);
    t61 = (t60 + 12U);
    *((unsigned int *)t61) = t63;
    t55 = xsi_base_array_concat(t55, t56, t57, (char)97, t34, t58, (char)99, t54, (char)101);
    t61 = (t15 + 36U);
    t64 = *((char **)t61);
    t61 = (t64 + 0);
    t65 = (t3 - 1);
    t66 = (1 - t65);
    t63 = (t66 * -1);
    t63 = (t63 + 1);
    t67 = (1U * t63);
    t68 = (t67 + 1U);
    memcpy(t61, t55, t68);

LAB6:    if (t32 == t33)
        goto LAB7;

LAB8:    t12 = (t32 + 1);
    t32 = t12;
    goto LAB4;

LAB9:;
}

static void work_a_1135542979_0043142827_p_0(char *t0)
{
    char t3[16];
    int t1;
    int t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(32, ng1);

LAB3:    t1 = (40000000 / 1843200);
    t2 = (t1 - 1);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t3, 0, 15);
    t5 = work_a_1135542979_0043142827_sub_2420223775_727255735(t0, 1, 15, t2, t4, (unsigned char)3);
    t6 = (t0 + 2172);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t5, 15U);
    xsi_driver_first_trans_fast(t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1135542979_0043142827_p_1(char *t0)
{
    char t25[16];
    char t26[16];
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
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t27;
    int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;

LAB0:    xsi_set_current_line(36, ng1);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2128);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(37, ng1);
    t3 = (t0 + 684U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(40, ng1);
    t1 = (t0 + 2244);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(41, ng1);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t1 = (t0 + 868U);
    t4 = *((char **)t1);
    t2 = 1;
    if (15U == 15U)
        goto LAB11;

LAB12:    t2 = 0;

LAB13:    if (t2 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(45, ng1);
    t1 = (t0 + 960U);
    t3 = *((char **)t1);
    t14 = (15 - 1);
    t13 = (15 - t14);
    t15 = (t13 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 960U);
    t7 = *((char **)t4);
    t17 = (1 - 15);
    t18 = (t17 * -1);
    t19 = (1U * t18);
    t20 = (0 + t19);
    t4 = (t7 + t20);
    t2 = *((unsigned char *)t4);
    t8 = (t0 + 960U);
    t9 = *((char **)t8);
    t21 = (15 - 15);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t8 = (t9 + t24);
    t5 = *((unsigned char *)t8);
    t6 = ieee_p_2592010699_sub_853553178_503743352(IEEE_P_2592010699, t2, t5);
    t11 = ((IEEE_P_2592010699) + 2312);
    t12 = (t26 + 0U);
    t27 = (t12 + 0U);
    *((int *)t27) = 14;
    t27 = (t12 + 4U);
    *((int *)t27) = 1;
    t27 = (t12 + 8U);
    *((int *)t27) = -1;
    t28 = (1 - 14);
    t29 = (t28 * -1);
    t29 = (t29 + 1);
    t27 = (t12 + 12U);
    *((unsigned int *)t27) = t29;
    t10 = xsi_base_array_concat(t10, t25, t11, (char)97, t1, t26, (char)99, t6, (char)101);
    t29 = (14U + 1U);
    t30 = (15U != t29);
    if (t30 == 1)
        goto LAB17;

LAB18:    t27 = (t0 + 2208);
    t31 = (t27 + 32U);
    t32 = *((char **)t31);
    t33 = (t32 + 32U);
    t34 = *((char **)t33);
    memcpy(t34, t10, 15U);
    xsi_driver_first_trans_fast(t27);

LAB9:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(38, ng1);
    t3 = xsi_get_transient_memory(15U);
    memset(t3, 0, 15U);
    t7 = t3;
    memset(t7, (unsigned char)2, 15U);
    t8 = (t0 + 2208);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 15U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_set_current_line(42, ng1);
    t8 = (t0 + 2244);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    t11 = (t10 + 32U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(43, ng1);
    t1 = xsi_get_transient_memory(15U);
    memset(t1, 0, 15U);
    t3 = t1;
    memset(t3, (unsigned char)2, 15U);
    t4 = (t0 + 2208);
    t7 = (t4 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 15U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    t13 = 0;

LAB14:    if (t13 < 15U)
        goto LAB15;
    else
        goto LAB13;

LAB15:    t1 = (t3 + t13);
    t7 = (t4 + t13);
    if (*((unsigned char *)t1) != *((unsigned char *)t7))
        goto LAB12;

LAB16:    t13 = (t13 + 1);
    goto LAB14;

LAB17:    xsi_size_not_matching(15U, t29, 0);
    goto LAB18;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_1135542979_0043142827_init()
{
	static char *pe[] = {(void *)work_a_1135542979_0043142827_p_0,(void *)work_a_1135542979_0043142827_p_1};
	static char *se[] = {(void *)work_a_1135542979_0043142827_sub_2420223775_727255735};
	xsi_register_didat("work_a_1135542979_0043142827", "isim/En_System_isim_beh.exe.sim/work/a_1135542979_0043142827.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 5);
}
