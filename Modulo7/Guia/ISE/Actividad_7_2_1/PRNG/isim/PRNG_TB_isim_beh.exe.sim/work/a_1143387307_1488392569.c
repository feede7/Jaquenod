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
static const char *ng0 = "/media/fede/Datos/Documents/GIT/Jaquenod/Modulo7/Guia/ISE/Actividad_7_2_1/PRNG_Ise/Sources/PRNG.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_1143387307_1488392569_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned char t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t25 = (t0 + 9968);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)2;
    xsi_driver_first_trans_delta(t25, 10U, 1, 0LL);

LAB2:    t30 = (t0 + 9696);
    *((int *)t30) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t6 = (0 - 10);
    t7 = (t6 * -1);
    t8 = (1U * t7);
    t9 = (0 + t8);
    t1 = (t5 + t9);
    t10 = *((unsigned char *)t1);
    t11 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, (unsigned char)2, t10);
    t12 = (t0 + 4048U);
    t13 = *((char **)t12);
    t14 = (1 - 10);
    t15 = (t14 * -1);
    t16 = (1U * t15);
    t17 = (0 + t16);
    t12 = (t13 + t17);
    t18 = *((unsigned char *)t12);
    t19 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t11, t18);
    t20 = (t0 + 9968);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    *((unsigned char *)t24) = t19;
    xsi_driver_first_trans_delta(t20, 10U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10032);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 9U, 1, 0LL);

LAB2:    t45 = (t0 + 9712);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 4464U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 4464U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 4464U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10032);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 9U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_2(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10096);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 8U, 1, 0LL);

LAB2:    t45 = (t0 + 9728);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 4584U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 4584U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 4584U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10096);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 8U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10160);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 7U, 1, 0LL);

LAB2:    t45 = (t0 + 9744);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 4704U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 4704U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 4704U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10160);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 7U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10224);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 6U, 1, 0LL);

LAB2:    t45 = (t0 + 9760);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 4824U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 4824U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 4824U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10224);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 6U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10288);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 5U, 1, 0LL);

LAB2:    t45 = (t0 + 9776);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 4944U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 4944U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 4944U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10288);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 5U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10352);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 4U, 1, 0LL);

LAB2:    t45 = (t0 + 9792);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 5064U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 5064U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 5064U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10352);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 4U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_7(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10416);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 3U, 1, 0LL);

LAB2:    t45 = (t0 + 9808);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 5184U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 5184U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 5184U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10416);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 3U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_8(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10480);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 2U, 1, 0LL);

LAB2:    t45 = (t0 + 9824);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 5304U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 5304U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 5304U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10480);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 2U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_9(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    int t7;
    int t8;
    int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned char t33;
    unsigned char t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t40 = (t0 + 10544);
    t41 = (t40 + 56U);
    t42 = *((char **)t41);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = (unsigned char)2;
    xsi_driver_first_trans_delta(t40, 1U, 1, 0LL);

LAB2:    t45 = (t0 + 9840);
    *((int *)t45) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t1 = (t0 + 5424U);
    t6 = *((char **)t1);
    t7 = *((int *)t6);
    t8 = (t7 - 1);
    t9 = (t8 - 10);
    t10 = (t9 * -1);
    t11 = (1U * t10);
    t12 = (0 + t11);
    t1 = (t5 + t12);
    t13 = *((unsigned char *)t1);
    t14 = (t0 + 4048U);
    t15 = *((char **)t14);
    t14 = (t0 + 5424U);
    t16 = *((char **)t14);
    t17 = *((int *)t16);
    t18 = (t17 - 10);
    t19 = (t18 * -1);
    t20 = (1U * t19);
    t21 = (0 + t20);
    t14 = (t15 + t21);
    t22 = *((unsigned char *)t14);
    t23 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t13, t22);
    t24 = (t0 + 4048U);
    t25 = *((char **)t24);
    t24 = (t0 + 5424U);
    t26 = *((char **)t24);
    t27 = *((int *)t26);
    t28 = (t27 + 1);
    t29 = (t28 - 10);
    t30 = (t29 * -1);
    t31 = (1U * t30);
    t32 = (0 + t31);
    t24 = (t25 + t32);
    t33 = *((unsigned char *)t24);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t23, t33);
    t35 = (t0 + 10544);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    *((unsigned char *)t39) = t34;
    xsi_driver_first_trans_delta(t35, 1U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_10(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    int t6;
    int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    int t14;
    int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    unsigned char t20;
    unsigned char t21;
    char *t22;
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

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB5:    t27 = (t0 + 10608);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    *((unsigned char *)t31) = (unsigned char)2;
    xsi_driver_first_trans_delta(t27, 0U, 1, 0LL);

LAB2:    t32 = (t0 + 9856);
    *((int *)t32) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 4048U);
    t5 = *((char **)t1);
    t6 = (11 - 2);
    t7 = (t6 - 10);
    t8 = (t7 * -1);
    t9 = (1U * t8);
    t10 = (0 + t9);
    t1 = (t5 + t10);
    t11 = *((unsigned char *)t1);
    t12 = (t0 + 4048U);
    t13 = *((char **)t12);
    t14 = (11 - 1);
    t15 = (t14 - 10);
    t16 = (t15 * -1);
    t17 = (1U * t16);
    t18 = (0 + t17);
    t12 = (t13 + t18);
    t19 = *((unsigned char *)t12);
    t20 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t11, t19);
    t21 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, (unsigned char)2);
    t22 = (t0 + 10608);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    *((unsigned char *)t26) = t21;
    xsi_driver_first_trans_delta(t22, 0U, 1, 0LL);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_1143387307_1488392569_p_11(char *t0)
{
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

LAB0:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3368U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 9872);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(57, ng0);
    t1 = xsi_get_transient_memory(11U);
    memset(t1, 0, 11U);
    t5 = t1;
    memset(t5, (unsigned char)2, 11U);
    t6 = (t0 + 10672);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 11U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(60, ng0);
    t1 = (t0 + 10672);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 5U, 1, 0LL);
    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3888U);
    t5 = *((char **)t2);
    t2 = (t0 + 10672);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 11U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

}

static void work_a_1143387307_1488392569_p_12(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(66, ng0);

LAB3:    t1 = (t0 + 4048U);
    t2 = *((char **)t1);
    t1 = (t0 + 10736);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 11U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 9888);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1143387307_1488392569_init()
{
	static char *pe[] = {(void *)work_a_1143387307_1488392569_p_0,(void *)work_a_1143387307_1488392569_p_1,(void *)work_a_1143387307_1488392569_p_2,(void *)work_a_1143387307_1488392569_p_3,(void *)work_a_1143387307_1488392569_p_4,(void *)work_a_1143387307_1488392569_p_5,(void *)work_a_1143387307_1488392569_p_6,(void *)work_a_1143387307_1488392569_p_7,(void *)work_a_1143387307_1488392569_p_8,(void *)work_a_1143387307_1488392569_p_9,(void *)work_a_1143387307_1488392569_p_10,(void *)work_a_1143387307_1488392569_p_11,(void *)work_a_1143387307_1488392569_p_12};
	xsi_register_didat("work_a_1143387307_1488392569", "isim/PRNG_TB_isim_beh.exe.sim/work/a_1143387307_1488392569.didat");
	xsi_register_executes(pe);
}
