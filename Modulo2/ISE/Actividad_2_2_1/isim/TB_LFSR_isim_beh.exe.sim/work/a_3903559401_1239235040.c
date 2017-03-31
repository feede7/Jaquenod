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

/* This file is designed for use with ISim build 0x8ddf5b5d */

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
static const char *ng1 = "/home/fede/GIT/Jaquenod/Modulo2/ISE/Actividad_2_2_1/Sources/LFSR.vhd";

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


char *work_a_3903559401_1239235040_sub_3747107540478793502_485037659(char *t1, int t2, int t3, char *t4, unsigned char t5)
{
    char t6[248];
    char t7[32];
    char t8[16];
    char t13[16];
    char t18[8];
    char t25[8];
    char *t0;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    int t42;
    int t43;
    int t44;
    unsigned int t45;
    int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned char t49;
    unsigned char t50;

LAB0:    t9 = (t8 + 0U);
    t10 = (t9 + 0U);
    *((int *)t10) = 7;
    t10 = (t9 + 4U);
    *((int *)t10) = 1;
    t10 = (t9 + 8U);
    *((int *)t10) = -1;
    t11 = (1 - 7);
    t12 = (t11 * -1);
    t12 = (t12 + 1);
    t10 = (t9 + 12U);
    *((unsigned int *)t10) = t12;
    t10 = (t13 + 0U);
    t14 = (t10 + 0U);
    *((int *)t14) = 7;
    t14 = (t10 + 4U);
    *((int *)t14) = 1;
    t14 = (t10 + 8U);
    *((int *)t14) = -1;
    t15 = (1 - 7);
    t12 = (t15 * -1);
    t12 = (t12 + 1);
    t14 = (t10 + 12U);
    *((unsigned int *)t14) = t12;
    t14 = (t6 + 4U);
    t16 = ((IEEE_P_2592010699) + 4000);
    t17 = (t14 + 88U);
    *((char **)t17) = t16;
    t19 = (t14 + 56U);
    *((char **)t19) = t18;
    xsi_type_set_default_value(t16, t18, t13);
    t20 = (t14 + 64U);
    *((char **)t20) = t13;
    t21 = (t14 + 80U);
    *((unsigned int *)t21) = 7U;
    t22 = (t6 + 124U);
    t23 = ((IEEE_P_2592010699) + 3312);
    t24 = (t22 + 88U);
    *((char **)t24) = t23;
    t26 = (t22 + 56U);
    *((char **)t26) = t25;
    xsi_type_set_default_value(t23, t25, 0);
    t27 = (t22 + 80U);
    *((unsigned int *)t27) = 1U;
    t28 = (t7 + 4U);
    *((int *)t28) = t2;
    t29 = (t7 + 8U);
    *((int *)t29) = t3;
    t30 = (t7 + 12U);
    t31 = (t4 != 0);
    if (t31 == 1)
        goto LAB3;

LAB2:    t32 = (t7 + 20U);
    *((char **)t32) = t8;
    t33 = (t7 + 28U);
    *((unsigned char *)t33) = t5;
    t34 = (t14 + 56U);
    t35 = *((char **)t34);
    t34 = (t35 + 0);
    t36 = (t8 + 12U);
    t12 = *((unsigned int *)t36);
    t12 = (t12 * 1U);
    memcpy(t34, t4, t12);
    t11 = 1;
    t15 = t3;

LAB4:    if (t11 <= t15)
        goto LAB5;

LAB7:    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 12U);
    t12 = *((unsigned int *)t9);
    t12 = (t12 * 1U);
    t16 = (t13 + 0U);
    t11 = *((int *)t16);
    t17 = (t13 + 4U);
    t15 = *((int *)t17);
    t19 = (t13 + 8U);
    t37 = *((int *)t19);
    xsi_vhdl_check_range_of_slice(7, 1, -1, t11, t15, t37);
    t0 = xsi_get_transient_memory(t12);
    memcpy(t0, t10, t12);

LAB1:    return t0;
LAB3:    *((char **)t30) = t4;
    goto LAB2;

LAB5:    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (2 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (t2 - t42);
    t45 = (t44 * t43);
    t23 = (t13 + 4U);
    t46 = *((int *)t23);
    xsi_vhdl_check_range_of_index(t42, t46, t43, t2);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t24 = (t20 + t48);
    t49 = *((unsigned char *)t24);
    t50 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t31, t49);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    t26 = (t27 + 0);
    *((unsigned char *)t26) = t50;
    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (6 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (7 - t42);
    t45 = (t44 * t43);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t23 = (t20 + t48);
    *((unsigned char *)t23) = t31;
    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (5 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (6 - t42);
    t45 = (t44 * t43);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t23 = (t20 + t48);
    *((unsigned char *)t23) = t31;
    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (4 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (5 - t42);
    t45 = (t44 * t43);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t23 = (t20 + t48);
    *((unsigned char *)t23) = t31;
    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (3 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (4 - t42);
    t45 = (t44 * t43);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t23 = (t20 + t48);
    *((unsigned char *)t23) = t31;
    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (2 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (3 - t42);
    t45 = (t44 * t43);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t23 = (t20 + t48);
    *((unsigned char *)t23) = t31;
    t9 = (t14 + 56U);
    t10 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t16 = (t13 + 8U);
    t38 = *((int *)t16);
    t39 = (1 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t17 = (t10 + t41);
    t31 = *((unsigned char *)t17);
    t19 = (t14 + 56U);
    t20 = *((char **)t19);
    t19 = (t13 + 0U);
    t42 = *((int *)t19);
    t21 = (t13 + 8U);
    t43 = *((int *)t21);
    t44 = (2 - t42);
    t45 = (t44 * t43);
    t47 = (1U * t45);
    t48 = (0 + t47);
    t23 = (t20 + t48);
    *((unsigned char *)t23) = t31;
    t9 = (t22 + 56U);
    t10 = *((char **)t9);
    t31 = *((unsigned char *)t10);
    t49 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t5, t31);
    t9 = (t14 + 56U);
    t16 = *((char **)t9);
    t9 = (t13 + 0U);
    t37 = *((int *)t9);
    t17 = (t13 + 8U);
    t38 = *((int *)t17);
    t39 = (1 - t37);
    t12 = (t39 * t38);
    t40 = (1U * t12);
    t41 = (0 + t40);
    t19 = (t16 + t41);
    *((unsigned char *)t19) = t49;

LAB6:    if (t11 == t15)
        goto LAB7;

LAB8:    t37 = (t11 + 1);
    t11 = t37;
    goto LAB4;

LAB9:;
}

static void work_a_3903559401_1239235040_p_0(char *t0)
{
    char *t1;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(72, ng1);

LAB3:    t1 = (t0 + 4240);
    t3 = work_a_3903559401_1239235040_sub_3747107540478793502_485037659(t0, 4, 3, t1, (unsigned char)2);
    t4 = (7U != 7U);
    if (t4 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 2568);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB6;

}


void ieee_p_2592010699_sub_7991387870887201249_503743352();

extern void work_a_3903559401_1239235040_init()
{
	static char *pe[] = {(void *)work_a_3903559401_1239235040_p_0};
	static char *se[] = {(void *)work_a_3903559401_1239235040_sub_3747107540478793502_485037659};
	xsi_register_didat("work_a_3903559401_1239235040", "isim/TB_LFSR_isim_beh.exe.sim/work/a_3903559401_1239235040.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_7991387870887201249_503743352, 3);
}
