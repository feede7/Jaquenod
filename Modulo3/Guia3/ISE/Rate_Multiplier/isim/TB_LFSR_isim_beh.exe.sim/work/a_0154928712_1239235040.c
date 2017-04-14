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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo3/Guia3/ISE/Rate_Multiplier/Sources/LFSR.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_0154928712_1239235040_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(17, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 3768);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3672);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0154928712_1239235040_p_1(char *t0)
{
    char t28[16];
    char t30[16];
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
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned char t26;
    unsigned char t27;
    char *t29;
    char *t31;
    char *t32;
    int t33;
    unsigned int t34;
    unsigned char t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3688);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t13 = (5 - 1);
    t14 = (5 - t13);
    t15 = (t14 * 1U);
    t16 = (0 + t15);
    t1 = (t3 + t16);
    t4 = (t0 + 1352U);
    t7 = *((char **)t4);
    t2 = *((unsigned char *)t7);
    t4 = (t0 + 1832U);
    t8 = *((char **)t4);
    t4 = (t0 + 1512U);
    t9 = *((char **)t4);
    t17 = *((int *)t9);
    t18 = (t17 - 5);
    t19 = (t18 * -1);
    xsi_vhdl_check_range_of_index(5, 1, -1, t17);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t4 = (t8 + t21);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t2, t5);
    t10 = (t0 + 1832U);
    t11 = *((char **)t10);
    t22 = (5 - 5);
    t23 = (t22 * -1);
    t24 = (1U * t23);
    t25 = (0 + t24);
    t10 = (t11 + t25);
    t26 = *((unsigned char *)t10);
    t27 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t6, t26);
    t29 = ((IEEE_P_1242562249) + 2976);
    t31 = (t30 + 0U);
    t32 = (t31 + 0U);
    *((int *)t32) = 4;
    t32 = (t31 + 4U);
    *((int *)t32) = 1;
    t32 = (t31 + 8U);
    *((int *)t32) = -1;
    t33 = (1 - 4);
    t34 = (t33 * -1);
    t34 = (t34 + 1);
    t32 = (t31 + 12U);
    *((unsigned int *)t32) = t34;
    t12 = xsi_base_array_concat(t12, t28, t29, (char)97, t1, t30, (char)99, t27, (char)101);
    t34 = (4U + 1U);
    t35 = (5U != t34);
    if (t35 == 1)
        goto LAB8;

LAB9:    t32 = (t0 + 3832);
    t36 = (t32 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t12, 5U);
    xsi_driver_first_trans_fast(t32);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t3 = xsi_get_transient_memory(5U);
    memset(t3, 0, 5U);
    t7 = t3;
    memset(t7, (unsigned char)2, 5U);
    t8 = (t0 + 3832);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 5U);
    xsi_driver_first_trans_fast(t8);
    goto LAB6;

LAB8:    xsi_size_not_matching(5U, t34, 0);
    goto LAB9;

}


extern void work_a_0154928712_1239235040_init()
{
	static char *pe[] = {(void *)work_a_0154928712_1239235040_p_0,(void *)work_a_0154928712_1239235040_p_1};
	xsi_register_didat("work_a_0154928712_1239235040", "isim/TB_LFSR_isim_beh.exe.sim/work/a_0154928712_1239235040.didat");
	xsi_register_executes(pe);
}
