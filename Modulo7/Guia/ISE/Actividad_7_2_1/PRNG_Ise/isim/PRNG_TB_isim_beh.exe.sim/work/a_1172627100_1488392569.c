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
static const char *ng0 = "/media/storage/Documents/GIT/Jaquenod/Modulo7/Guia/ISE/Actividad_7_2_1/PRNG/Sources/PRNG.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_1172627100_1488392569_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(47, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t3 = (10 - 1);
    t4 = (t3 - 9);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 3784U);
    t10 = *((char **)t9);
    t11 = (0 - 9);
    t12 = (t11 * -1);
    t13 = (1U * t12);
    t14 = (0 + t13);
    t9 = (t10 + t14);
    t15 = *((unsigned char *)t9);
    t16 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t8, t15);
    t17 = (t0 + 3784U);
    t18 = *((char **)t17);
    t19 = (1 - 9);
    t20 = (t19 * -1);
    t21 = (1U * t20);
    t22 = (0 + t21);
    t17 = (t18 + t22);
    t23 = *((unsigned char *)t17);
    t24 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t16, t23);
    t25 = (t0 + 9056);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t24;
    xsi_driver_first_trans_delta(t25, 9U, 1, 0LL);

LAB2:    t30 = (t0 + 8816);
    *((int *)t30) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4200U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4200U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4200U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9120);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 8U, 1, 0LL);

LAB2:    t37 = (t0 + 8832);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4320U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4320U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4320U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9184);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 7U, 1, 0LL);

LAB2:    t37 = (t0 + 8848);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4440U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4440U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4440U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9248);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 6U, 1, 0LL);

LAB2:    t37 = (t0 + 8864);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4560U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4560U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4560U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9312);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 5U, 1, 0LL);

LAB2:    t37 = (t0 + 8880);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_5(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4680U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4680U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4680U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9376);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 4U, 1, 0LL);

LAB2:    t37 = (t0 + 8896);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_6(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4800U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4800U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4800U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9440);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 3U, 1, 0LL);

LAB2:    t37 = (t0 + 8912);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 4920U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 4920U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 4920U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9504);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 2U, 1, 0LL);

LAB2:    t37 = (t0 + 8928);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    char *t21;
    char *t22;
    char *t23;
    int t24;
    int t25;
    int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    unsigned char t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    xsi_set_current_line(49, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t1 = (t0 + 5040U);
    t3 = *((char **)t1);
    t4 = *((int *)t3);
    t5 = (t4 - 1);
    t6 = (t5 - 9);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t2 + t9);
    t10 = *((unsigned char *)t1);
    t11 = (t0 + 3784U);
    t12 = *((char **)t11);
    t11 = (t0 + 5040U);
    t13 = *((char **)t11);
    t14 = *((int *)t13);
    t15 = (t14 - 9);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t11 = (t12 + t18);
    t19 = *((unsigned char *)t11);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t19);
    t21 = (t0 + 3784U);
    t22 = *((char **)t21);
    t21 = (t0 + 5040U);
    t23 = *((char **)t21);
    t24 = *((int *)t23);
    t25 = (t24 + 1);
    t26 = (t25 - 9);
    t27 = (t26 * -1);
    t28 = (1U * t27);
    t29 = (0 + t28);
    t21 = (t22 + t29);
    t30 = *((unsigned char *)t21);
    t31 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t30);
    t32 = (t0 + 9568);
    t33 = (t32 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t31;
    xsi_driver_first_trans_delta(t32, 1U, 1, 0LL);

LAB2:    t37 = (t0 + 8944);
    *((int *)t37) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_9(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(51, ng0);

LAB3:    t1 = (t0 + 3784U);
    t2 = *((char **)t1);
    t3 = (10 - 2);
    t4 = (t3 - 9);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 3784U);
    t10 = *((char **)t9);
    t11 = (10 - 1);
    t12 = (t11 - 9);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t9 = (t10 + t15);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t8, t16);
    t18 = (t0 + 3784U);
    t19 = *((char **)t18);
    t20 = (0 - 9);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t25 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t17, t24);
    t26 = (t0 + 9632);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    *((unsigned char *)t30) = t25;
    xsi_driver_first_trans_delta(t26, 0U, 1, 0LL);

LAB2:    t31 = (t0 + 8960);
    *((int *)t31) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1172627100_1488392569_p_10(char *t0)
{
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

LAB0:    xsi_set_current_line(55, ng0);
    t1 = (t0 + 3104U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8976);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 3304U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)3);
    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3624U);
    t3 = *((char **)t1);
    t1 = (t0 + 9696);
    t4 = (t1 + 56U);
    t7 = *((char **)t4);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 10U);
    xsi_driver_first_trans_fast(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(57, ng0);
    t3 = xsi_get_transient_memory(10U);
    memset(t3, 0, 10U);
    t7 = t3;
    memset(t7, (unsigned char)2, 10U);
    t8 = (t0 + 9696);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t3, 10U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 9696);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t7 = (t4 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 4U, 1, 0LL);
    goto LAB6;

}


extern void work_a_1172627100_1488392569_init()
{
	static char *pe[] = {(void *)work_a_1172627100_1488392569_p_0,(void *)work_a_1172627100_1488392569_p_1,(void *)work_a_1172627100_1488392569_p_2,(void *)work_a_1172627100_1488392569_p_3,(void *)work_a_1172627100_1488392569_p_4,(void *)work_a_1172627100_1488392569_p_5,(void *)work_a_1172627100_1488392569_p_6,(void *)work_a_1172627100_1488392569_p_7,(void *)work_a_1172627100_1488392569_p_8,(void *)work_a_1172627100_1488392569_p_9,(void *)work_a_1172627100_1488392569_p_10};
	xsi_register_didat("work_a_1172627100_1488392569", "isim/PRNG_TB_isim_beh.exe.sim/work/a_1172627100_1488392569.didat");
	xsi_register_executes(pe);
}
