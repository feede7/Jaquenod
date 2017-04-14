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
static const char *ng1 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo3/Guia3/ISE/Rate_Multiplier/Sources/Rate_Multiplier.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
int ieee_p_1242562249_sub_17802405650254020620_1035706684(char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


char *work_a_1185279324_3162837701_sub_3492498615405416538_2703698151(char *t1, int t2, int t3, int t4, char *t5, unsigned char t6)
{
    char t7[128];
    char t8[40];
    char t9[16];
    char t14[16];
    char t19[8];
    char t49[16];
    char t50[16];
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
    char *t32;
    char *t33;
    char *t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned char t42;
    int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned char t47;
    unsigned char t48;
    int t51;
    int t52;
    unsigned int t53;
    int t54;
    int t55;
    unsigned int t56;
    unsigned int t57;

LAB0:    t10 = (t9 + 0U);
    t11 = (t10 + 0U);
    *((int *)t11) = 5;
    t11 = (t10 + 4U);
    *((int *)t11) = 1;
    t11 = (t10 + 8U);
    *((int *)t11) = -1;
    t12 = (1 - 5);
    t13 = (t12 * -1);
    t13 = (t13 + 1);
    t11 = (t10 + 12U);
    *((unsigned int *)t11) = t13;
    t11 = (t14 + 0U);
    t15 = (t11 + 0U);
    *((int *)t15) = 5;
    t15 = (t11 + 4U);
    *((int *)t15) = 1;
    t15 = (t11 + 8U);
    *((int *)t15) = -1;
    t16 = (1 - 5);
    t13 = (t16 * -1);
    t13 = (t13 + 1);
    t15 = (t11 + 12U);
    *((unsigned int *)t15) = t13;
    t15 = (t7 + 4U);
    t17 = (t1 + 5840);
    t18 = (t15 + 88U);
    *((char **)t18) = t17;
    t20 = (t15 + 56U);
    *((char **)t20) = t19;
    xsi_type_set_default_value(t17, t19, 0);
    t21 = (t15 + 64U);
    t22 = (t17 + 72U);
    t23 = *((char **)t22);
    *((char **)t21) = t23;
    t24 = (t15 + 80U);
    *((unsigned int *)t24) = 5U;
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

LAB2:    t30 = (t8 + 24U);
    *((char **)t30) = t9;
    t31 = (t8 + 32U);
    *((unsigned char *)t31) = t6;
    t32 = (t15 + 56U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    t34 = (t9 + 12U);
    t13 = *((unsigned int *)t34);
    t13 = (t13 * 1U);
    memcpy(t32, t5, t13);
    t12 = 1;
    t16 = t4;

LAB4:    if (t12 <= t16)
        goto LAB5;

LAB7:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    xsi_vhdl_check_range_of_slice(5, 1, -1, 5, 1, -1);
    t0 = xsi_get_transient_memory(5U);
    memcpy(t0, t11, 5U);

LAB1:    return t0;
LAB3:    *((char **)t28) = t5;
    goto LAB2;

LAB5:    t10 = (t15 + 56U);
    t11 = *((char **)t10);
    t35 = (t3 - 1);
    t13 = (5 - t35);
    xsi_vhdl_check_range_of_slice(5, 1, -1, t35, 1, -1);
    t36 = (t13 * 1U);
    t37 = (0 + t36);
    t10 = (t11 + t37);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    t38 = (t2 - 5);
    t39 = (t38 * -1);
    xsi_vhdl_check_range_of_index(5, 1, -1, t2);
    t40 = (1U * t39);
    t41 = (0 + t40);
    t17 = (t18 + t41);
    t29 = *((unsigned char *)t17);
    t42 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t6, t29);
    t20 = (t15 + 56U);
    t21 = *((char **)t20);
    t43 = (t3 - 5);
    t44 = (t43 * -1);
    xsi_vhdl_check_range_of_index(5, 1, -1, t3);
    t45 = (1U * t44);
    t46 = (0 + t45);
    t20 = (t21 + t46);
    t47 = *((unsigned char *)t20);
    t48 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t42, t47);
    t23 = ((IEEE_P_2592010699) + 4000);
    t51 = (t3 - 1);
    t24 = (t50 + 0U);
    t32 = (t24 + 0U);
    *((int *)t32) = t51;
    t32 = (t24 + 4U);
    *((int *)t32) = 1;
    t32 = (t24 + 8U);
    *((int *)t32) = -1;
    t52 = (1 - t51);
    t53 = (t52 * -1);
    t53 = (t53 + 1);
    t32 = (t24 + 12U);
    *((unsigned int *)t32) = t53;
    t22 = xsi_base_array_concat(t22, t49, t23, (char)97, t10, t50, (char)99, t48, (char)101);
    t32 = (t15 + 56U);
    t33 = *((char **)t32);
    t32 = (t33 + 0);
    t54 = (t3 - 1);
    t55 = (1 - t54);
    t53 = (t55 * -1);
    t53 = (t53 + 1);
    t56 = (1U * t53);
    t57 = (t56 + 1U);
    memcpy(t32, t22, t57);

LAB6:    if (t12 == t16)
        goto LAB7;

LAB8:    t35 = (t12 + 1);
    t12 = t35;
    goto LAB4;

LAB9:;
}

static void work_a_1185279324_3162837701_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(44, ng1);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5320);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5176);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1185279324_3162837701_p_1(char *t0)
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

LAB0:    xsi_set_current_line(46, ng1);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 5384);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 5192);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1185279324_3162837701_p_2(char *t0)
{
    char t7[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    int t6;
    char *t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(50, ng1);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 5208);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(51, ng1);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t5 = xsi_vhdl_pow(2, 5);
    t6 = (t5 - 2);
    t3 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t7, 0, 5);
    t8 = work_a_1185279324_3162837701_sub_3492498615405416538_2703698151(t0, 2, 5, t6, t3, (unsigned char)3);
    t9 = 1;
    if (5U == 5U)
        goto LAB8;

LAB9:    t9 = 0;

LAB10:    if (t9 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(54, ng1);
    t1 = (t0 + 5448);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t8 = (t4 + 56U);
    t11 = *((char **)t8);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(52, ng1);
    t13 = (t0 + 5448);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast(t13);
    goto LAB6;

LAB8:    t10 = 0;

LAB11:    if (t10 < 5U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t11 = (t4 + t10);
    t12 = (t8 + t10);
    if (*((unsigned char *)t11) != *((unsigned char *)t12))
        goto LAB9;

LAB13:    t10 = (t10 + 1);
    goto LAB11;

}

static void work_a_1185279324_3162837701_p_3(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    int t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    unsigned char t10;
    int t11;
    int t12;
    unsigned char t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned char t19;
    int t20;
    int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;

LAB0:    xsi_set_current_line(67, ng1);
    t3 = xsi_vhdl_pow(2, 5);
    t4 = (t3 - 1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t5 = (t0 + 1680U);
    t7 = *((char **)t5);
    t8 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t6, t7);
    t9 = (t4 - t8);
    t10 = (t9 <= 0);
    if (t10 == 1)
        goto LAB8;

LAB9:    t2 = (unsigned char)0;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t15 = (t0 + 1672U);
    t16 = *((char **)t15);
    t15 = (t0 + 1680U);
    t17 = *((char **)t15);
    t18 = ieee_p_1242562249_sub_17802405650254020620_1035706684(IEEE_P_1242562249, t16, t17);
    t19 = (t18 < 0);
    if (t19 == 1)
        goto LAB11;

LAB12:    t14 = (unsigned char)0;

LAB13:    t1 = t14;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB14:    t28 = (t0 + 5512);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    *((unsigned char *)t32) = (unsigned char)2;
    xsi_driver_first_trans_fast(t28);

LAB2:    t33 = (t0 + 5224);
    *((int *)t33) = 1;

LAB1:    return;
LAB3:    t23 = (t0 + 5512);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)3;
    xsi_driver_first_trans_fast(t23);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t11 = xsi_vhdl_pow(2, 5);
    t12 = (t11 / 2);
    t13 = (0 < t12);
    t2 = t13;
    goto LAB10;

LAB11:    t20 = xsi_vhdl_pow(2, 5);
    t21 = (t20 / 2);
    t22 = (0 >= t21);
    t14 = t22;
    goto LAB13;

LAB15:    goto LAB2;

}

static void work_a_1185279324_3162837701_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(71, ng1);
    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t15 = (t0 + 5576);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 5240);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 1032U);
    t9 = *((char **)t2);
    t10 = *((unsigned char *)t9);
    t2 = (t0 + 5576);
    t11 = (t2 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = t10;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB2;

LAB5:    t2 = (t0 + 1192U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)2);
    t1 = t8;
    goto LAB7;

LAB9:    goto LAB2;

}


void ieee_p_2592010699_sub_7991387870887201249_503743352();

extern void work_a_1185279324_3162837701_init()
{
	static char *pe[] = {(void *)work_a_1185279324_3162837701_p_0,(void *)work_a_1185279324_3162837701_p_1,(void *)work_a_1185279324_3162837701_p_2,(void *)work_a_1185279324_3162837701_p_3,(void *)work_a_1185279324_3162837701_p_4};
	static char *se[] = {(void *)work_a_1185279324_3162837701_sub_3492498615405416538_2703698151};
	xsi_register_didat("work_a_1185279324_3162837701", "isim/TB_LFSR_isim_beh.exe.sim/work/a_1185279324_3162837701.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_7991387870887201249_503743352, 5);
}
