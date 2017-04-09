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
extern char *STD_STANDARD;
static const char *ng2 = "/home/fedeserver/Documents/Jaquenod/GIT/Modulo2/ISE/Actividad_2_2_3/Sources/LFSR.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


char *work_a_0321367792_1239235040_sub_3009137902_485037659(char *t1, int t2, int t3, char *t4, unsigned char t5)
{
    char t6[144];
    char t7[24];
    char t8[16];
    char t13[16];
    char t18[8];
    char t27[8];
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
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    unsigned char t33;
    char *t34;
    char *t35;
    int t36;
    int t37;
    char *t38;
    char *t39;
    int t40;
    int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;
    char *t45;
    char *t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned char t51;
    unsigned char t52;
    char *t53;
    char *t54;
    int t55;
    int t56;
    int t57;

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
    t16 = (t1 + 2208);
    t17 = (t14 + 52U);
    *((char **)t17) = t16;
    t19 = (t14 + 36U);
    *((char **)t19) = t18;
    memcpy(t18, t4, 7U);
    t20 = (t14 + 40U);
    t21 = (t16 + 44U);
    t22 = *((char **)t21);
    *((char **)t20) = t22;
    t23 = (t14 + 48U);
    *((unsigned int *)t23) = 7U;
    t24 = (t6 + 72U);
    t25 = ((IEEE_P_2592010699) + 1892);
    t26 = (t24 + 52U);
    *((char **)t26) = t25;
    t28 = (t24 + 36U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 48U);
    *((unsigned int *)t29) = 1U;
    t30 = (t7 + 4U);
    *((int *)t30) = t2;
    t31 = (t7 + 8U);
    *((int *)t31) = t3;
    t32 = (t7 + 12U);
    t33 = (t4 != 0);
    if (t33 == 1)
        goto LAB3;

LAB2:    t34 = (t7 + 16U);
    *((char **)t34) = t8;
    t35 = (t7 + 20U);
    *((unsigned char *)t35) = t5;
    t36 = 1;
    t37 = t3;

LAB4:    if (t36 <= t37)
        goto LAB5;

LAB7:    t9 = (t14 + 36U);
    t10 = *((char **)t9);
    xsi_vhdl_check_range_of_slice(7, 1, -1, 7, 1, -1);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t10, 7U);

LAB1:    return t0;
LAB3:    *((char **)t32) = t4;
    goto LAB2;

LAB5:    t38 = (t14 + 36U);
    t39 = *((char **)t38);
    t40 = (t2 - 1);
    t41 = (t40 - 7);
    t12 = (t41 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t40);
    t42 = (1U * t12);
    t43 = (0 + t42);
    t38 = (t39 + t43);
    t44 = *((unsigned char *)t38);
    t45 = (t14 + 36U);
    t46 = *((char **)t45);
    t47 = (t2 - 7);
    t48 = (t47 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t2);
    t49 = (1U * t48);
    t50 = (0 + t49);
    t45 = (t46 + t50);
    t51 = *((unsigned char *)t45);
    t52 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t44, t51);
    t53 = (t24 + 36U);
    t54 = *((char **)t53);
    t53 = (t54 + 0);
    *((unsigned char *)t53) = t52;
    t11 = (7 - 2);
    t15 = 0;
    t40 = t11;

LAB8:    if (t15 <= t40)
        goto LAB9;

LAB11:    t9 = (t24 + 36U);
    t10 = *((char **)t9);
    t33 = *((unsigned char *)t10);
    t44 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t5, t33);
    t9 = (t14 + 36U);
    t16 = *((char **)t9);
    t11 = (1 - 7);
    t12 = (t11 * -1);
    t42 = (1U * t12);
    t43 = (0 + t42);
    t9 = (t16 + t43);
    *((unsigned char *)t9) = t44;

LAB6:    if (t36 == t37)
        goto LAB7;

LAB13:    t11 = (t36 + 1);
    t36 = t11;
    goto LAB4;

LAB9:    t9 = (t14 + 36U);
    t10 = *((char **)t9);
    t41 = (7 - t15);
    t47 = (t41 - 1);
    t55 = (t47 - 7);
    t12 = (t55 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t47);
    t42 = (1U * t12);
    t43 = (0 + t42);
    t9 = (t10 + t43);
    t33 = *((unsigned char *)t9);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    t56 = (7 - t15);
    t57 = (t56 - 7);
    t48 = (t57 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t56);
    t49 = (1U * t48);
    t50 = (0 + t49);
    t16 = (t17 + t50);
    *((unsigned char *)t16) = t33;

LAB10:    if (t15 == t40)
        goto LAB11;

LAB12:    t11 = (t15 + 1);
    t15 = t11;
    goto LAB8;

LAB14:;
}

unsigned char work_a_0321367792_1239235040_sub_1455154532_485037659(char *t1, int t2, int t3, char *t4, unsigned char t5)
{
    char t6[208];
    char t7[24];
    char t8[16];
    char t13[16];
    char t18[8];
    char t27[8];
    char t33[8];
    unsigned char t0;
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
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    unsigned char t39;
    char *t40;
    char *t41;
    int t42;
    int t43;
    char *t44;
    char *t45;
    int t46;
    int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned char t50;
    char *t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned char t57;
    unsigned char t58;
    char *t59;
    char *t60;
    int t61;
    int t62;
    int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;

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
    t16 = (t1 + 2208);
    t17 = (t14 + 52U);
    *((char **)t17) = t16;
    t19 = (t14 + 36U);
    *((char **)t19) = t18;
    memcpy(t18, t4, 7U);
    t20 = (t14 + 40U);
    t21 = (t16 + 44U);
    t22 = *((char **)t21);
    *((char **)t20) = t22;
    t23 = (t14 + 48U);
    *((unsigned int *)t23) = 7U;
    t24 = (t6 + 72U);
    t25 = ((IEEE_P_2592010699) + 1892);
    t26 = (t24 + 52U);
    *((char **)t26) = t25;
    t28 = (t24 + 36U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 48U);
    *((unsigned int *)t29) = 1U;
    t30 = (t6 + 140U);
    t31 = ((IEEE_P_2592010699) + 1892);
    t32 = (t30 + 52U);
    *((char **)t32) = t31;
    t34 = (t30 + 36U);
    *((char **)t34) = t33;
    *((unsigned char *)t33) = (unsigned char)2;
    t35 = (t30 + 48U);
    *((unsigned int *)t35) = 1U;
    t36 = (t7 + 4U);
    *((int *)t36) = t2;
    t37 = (t7 + 8U);
    *((int *)t37) = t3;
    t38 = (t7 + 12U);
    t39 = (t4 != 0);
    if (t39 == 1)
        goto LAB3;

LAB2:    t40 = (t7 + 16U);
    *((char **)t40) = t8;
    t41 = (t7 + 20U);
    *((unsigned char *)t41) = t5;
    t42 = 1;
    t43 = t3;

LAB4:    if (t42 <= t43)
        goto LAB5;

LAB7:    t9 = (t30 + 36U);
    t10 = *((char **)t9);
    t39 = *((unsigned char *)t10);
    t0 = t39;

LAB1:    return t0;
LAB3:    *((char **)t38) = t4;
    goto LAB2;

LAB5:    t44 = (t14 + 36U);
    t45 = *((char **)t44);
    t46 = (t2 - 1);
    t47 = (t46 - 7);
    t12 = (t47 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t46);
    t48 = (1U * t12);
    t49 = (0 + t48);
    t44 = (t45 + t49);
    t50 = *((unsigned char *)t44);
    t51 = (t14 + 36U);
    t52 = *((char **)t51);
    t53 = (t2 - 7);
    t54 = (t53 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t2);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t51 = (t52 + t56);
    t57 = *((unsigned char *)t51);
    t58 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t50, t57);
    t59 = (t24 + 36U);
    t60 = *((char **)t59);
    t59 = (t60 + 0);
    *((unsigned char *)t59) = t58;
    t11 = (7 - 2);
    t15 = 0;
    t46 = t11;

LAB8:    if (t15 <= t46)
        goto LAB9;

LAB11:    t9 = (t24 + 36U);
    t10 = *((char **)t9);
    t39 = *((unsigned char *)t10);
    t50 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t5, t39);
    t9 = (t14 + 36U);
    t16 = *((char **)t9);
    t11 = (1 - 7);
    t12 = (t11 * -1);
    t48 = (1U * t12);
    t49 = (0 + t48);
    t9 = (t16 + t49);
    *((unsigned char *)t9) = t50;
    t9 = (t14 + 36U);
    t10 = *((char **)t9);
    t12 = (7 - t2);
    xsi_vhdl_check_range_of_slice(7, 1, -1, t2, 1, -1);
    t48 = (t12 * 1U);
    t49 = (0 + t48);
    t9 = (t10 + t49);
    t11 = (1 - t2);
    t54 = (t11 * -1);
    t54 = (t54 + 1);
    t55 = (1U * t54);
    t56 = (7 - t2);
    xsi_vhdl_check_range_of_slice(7, 1, -1, t2, 1, -1);
    t64 = (t56 * 1U);
    t65 = (0 + t64);
    t16 = (t4 + t65);
    t15 = (1 - t2);
    t66 = (t15 * -1);
    t66 = (t66 + 1);
    t67 = (1U * t66);
    t39 = 1;
    if (t55 == t67)
        goto LAB16;

LAB17:    t39 = 0;

LAB18:    if (t39 != 0)
        goto LAB13;

LAB15:
LAB14:
LAB6:    if (t42 == t43)
        goto LAB7;

LAB22:    t11 = (t42 + 1);
    t42 = t11;
    goto LAB4;

LAB9:    t9 = (t14 + 36U);
    t10 = *((char **)t9);
    t47 = (7 - t15);
    t53 = (t47 - 1);
    t61 = (t53 - 7);
    t12 = (t61 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t53);
    t48 = (1U * t12);
    t49 = (0 + t48);
    t9 = (t10 + t49);
    t39 = *((unsigned char *)t9);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    t62 = (7 - t15);
    t63 = (t62 - 7);
    t54 = (t63 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t62);
    t55 = (1U * t54);
    t56 = (0 + t55);
    t16 = (t17 + t56);
    *((unsigned char *)t16) = t39;

LAB10:    if (t15 == t46)
        goto LAB11;

LAB12:    t11 = (t15 + 1);
    t15 = t11;
    goto LAB8;

LAB13:    t20 = (t30 + 36U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    *((unsigned char *)t20) = (unsigned char)3;
    goto LAB14;

LAB16:    t68 = 0;

LAB19:    if (t68 < t55)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t17 = (t9 + t68);
    t19 = (t16 + t68);
    if (*((unsigned char *)t17) != *((unsigned char *)t19))
        goto LAB17;

LAB21:    t68 = (t68 + 1);
    goto LAB19;

LAB23:;
}

int work_a_0321367792_1239235040_sub_1530743023_485037659(char *t1, int t2, int t3, char *t4, unsigned char t5)
{
    char t6[280];
    char t7[24];
    char t8[16];
    char t13[16];
    char t18[8];
    char t27[8];
    char t33[8];
    char t39[8];
    int t0;
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
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned char t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned char t50;
    unsigned char t51;
    char *t52;
    int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned char t56;
    char *t57;
    char *t58;
    int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned char t63;
    unsigned char t64;
    char *t65;
    char *t66;
    int t67;
    int t68;
    int t69;
    int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;

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
    t16 = (t1 + 2208);
    t17 = (t14 + 52U);
    *((char **)t17) = t16;
    t19 = (t14 + 36U);
    *((char **)t19) = t18;
    memcpy(t18, t4, 7U);
    t20 = (t14 + 40U);
    t21 = (t16 + 44U);
    t22 = *((char **)t21);
    *((char **)t20) = t22;
    t23 = (t14 + 48U);
    *((unsigned int *)t23) = 7U;
    t24 = (t6 + 72U);
    t25 = ((IEEE_P_2592010699) + 1892);
    t26 = (t24 + 52U);
    *((char **)t26) = t25;
    t28 = (t24 + 36U);
    *((char **)t28) = t27;
    xsi_type_set_default_value(t25, t27, 0);
    t29 = (t24 + 48U);
    *((unsigned int *)t29) = 1U;
    t30 = (t6 + 140U);
    t31 = ((IEEE_P_2592010699) + 1892);
    t32 = (t30 + 52U);
    *((char **)t32) = t31;
    t34 = (t30 + 36U);
    *((char **)t34) = t33;
    *((unsigned char *)t33) = (unsigned char)2;
    t35 = (t30 + 48U);
    *((unsigned int *)t35) = 1U;
    t36 = (t6 + 208U);
    t37 = ((STD_STANDARD) + 240);
    t38 = (t36 + 52U);
    *((char **)t38) = t37;
    t40 = (t36 + 36U);
    *((char **)t40) = t39;
    *((int *)t39) = 1;
    t41 = (t36 + 48U);
    *((unsigned int *)t41) = 4U;
    t42 = (t7 + 4U);
    *((int *)t42) = t2;
    t43 = (t7 + 8U);
    *((int *)t43) = t3;
    t44 = (t7 + 12U);
    t45 = (t4 != 0);
    if (t45 == 1)
        goto LAB3;

LAB2:    t46 = (t7 + 16U);
    *((char **)t46) = t8;
    t47 = (t7 + 20U);
    *((unsigned char *)t47) = t5;

LAB4:    t48 = (t30 + 36U);
    t49 = *((char **)t48);
    t50 = *((unsigned char *)t49);
    t51 = (t50 == (unsigned char)2);
    if (t51 != 0)
        goto LAB5;

LAB7:    t9 = (t36 + 36U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t0 = t11;

LAB1:    return t0;
LAB3:    *((char **)t44) = t4;
    goto LAB2;

LAB5:    t48 = (t14 + 36U);
    t52 = *((char **)t48);
    t53 = (t2 - 7);
    t12 = (t53 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t2);
    t54 = (1U * t12);
    t55 = (0 + t54);
    t48 = (t52 + t55);
    t56 = *((unsigned char *)t48);
    t57 = (t14 + 36U);
    t58 = *((char **)t57);
    t59 = (t3 - 7);
    t60 = (t59 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t3);
    t61 = (1U * t60);
    t62 = (0 + t61);
    t57 = (t58 + t62);
    t63 = *((unsigned char *)t57);
    t64 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t56, t63);
    t65 = (t24 + 36U);
    t66 = *((char **)t65);
    t65 = (t66 + 0);
    *((unsigned char *)t65) = t64;
    t11 = (7 - 2);
    t15 = 0;
    t53 = t11;

LAB8:    if (t15 <= t53)
        goto LAB9;

LAB11:    t9 = (t24 + 36U);
    t10 = *((char **)t9);
    t45 = *((unsigned char *)t10);
    t50 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t5, t45);
    t9 = (t14 + 36U);
    t16 = *((char **)t9);
    t11 = (1 - 7);
    t12 = (t11 * -1);
    t54 = (1U * t12);
    t55 = (0 + t54);
    t9 = (t16 + t55);
    *((unsigned char *)t9) = t50;
    t9 = (t14 + 36U);
    t10 = *((char **)t9);
    t12 = (7 - t3);
    xsi_vhdl_check_range_of_slice(7, 1, -1, t3, 1, -1);
    t54 = (t12 * 1U);
    t55 = (0 + t54);
    t9 = (t10 + t55);
    t11 = (1 - t3);
    t60 = (t11 * -1);
    t60 = (t60 + 1);
    t61 = (1U * t60);
    t62 = (7 - t3);
    xsi_vhdl_check_range_of_slice(7, 1, -1, t3, 1, -1);
    t71 = (t62 * 1U);
    t72 = (0 + t71);
    t16 = (t4 + t72);
    t15 = (1 - t3);
    t73 = (t15 * -1);
    t73 = (t73 + 1);
    t74 = (1U * t73);
    t45 = 1;
    if (t61 == t74)
        goto LAB16;

LAB17:    t45 = 0;

LAB18:    if (t45 != 0)
        goto LAB13;

LAB15:    t9 = (t36 + 36U);
    t10 = *((char **)t9);
    t11 = *((int *)t10);
    t15 = (t11 + 1);
    t9 = (t36 + 36U);
    t16 = *((char **)t9);
    t9 = (t16 + 0);
    *((int *)t9) = t15;

LAB14:    goto LAB4;

LAB6:;
LAB9:    t9 = (t14 + 36U);
    t10 = *((char **)t9);
    t59 = (7 - t15);
    t67 = (t59 - 1);
    t68 = (t67 - 7);
    t12 = (t68 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t67);
    t54 = (1U * t12);
    t55 = (0 + t54);
    t9 = (t10 + t55);
    t45 = *((unsigned char *)t9);
    t16 = (t14 + 36U);
    t17 = *((char **)t16);
    t69 = (7 - t15);
    t70 = (t69 - 7);
    t60 = (t70 * -1);
    xsi_vhdl_check_range_of_index(7, 1, -1, t69);
    t61 = (1U * t60);
    t62 = (0 + t61);
    t16 = (t17 + t62);
    *((unsigned char *)t16) = t45;

LAB10:    if (t15 == t53)
        goto LAB11;

LAB12:    t11 = (t15 + 1);
    t15 = t11;
    goto LAB8;

LAB13:    t20 = (t30 + 36U);
    t21 = *((char **)t20);
    t20 = (t21 + 0);
    *((unsigned char *)t20) = (unsigned char)3;
    goto LAB14;

LAB16:    t75 = 0;

LAB19:    if (t75 < t61)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t17 = (t9 + t75);
    t19 = (t16 + t75);
    if (*((unsigned char *)t17) != *((unsigned char *)t19))
        goto LAB17;

LAB21:    t75 = (t75 + 1);
    goto LAB19;

LAB22:;
}

static void work_a_0321367792_1239235040_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(75, ng2);

LAB3:    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, 0, 7);
    t3 = work_a_0321367792_1239235040_sub_3009137902_485037659(t0, 4, 14, t2, (unsigned char)3);
    t4 = (7U != 7U);
    if (t4 == 1)
        goto LAB5;

LAB6:    t5 = (t0 + 1980);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 7U);
    xsi_driver_first_trans_fast_port(t5);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, 7U, 0);
    goto LAB6;

}

static void work_a_0321367792_1239235040_p_1(char *t0)
{
    char t1[16];
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(76, ng2);

LAB3:    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t1, 0, 7);
    t3 = work_a_0321367792_1239235040_sub_1455154532_485037659(t0, 4, 14, t2, (unsigned char)3);
    t4 = (t0 + 2016);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 32U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t3;
    xsi_driver_first_trans_fast_port(t4);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0321367792_1239235040_p_2(char *t0)
{
    char t2[16];
    int t1;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(77, ng2);

LAB3:    t1 = (7 - 2);
    t3 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t2, 2, 7);
    t4 = work_a_0321367792_1239235040_sub_1530743023_485037659(t0, t1, 7, t3, (unsigned char)2);
    t5 = (t0 + 2052);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((int *)t9) = t4;
    xsi_driver_first_trans_fast_port(t5);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


void ieee_p_2592010699_sub_3130575329_503743352();

extern void work_a_0321367792_1239235040_init()
{
	static char *pe[] = {(void *)work_a_0321367792_1239235040_p_0,(void *)work_a_0321367792_1239235040_p_1,(void *)work_a_0321367792_1239235040_p_2};
	static char *se[] = {(void *)work_a_0321367792_1239235040_sub_3009137902_485037659,(void *)work_a_0321367792_1239235040_sub_1455154532_485037659,(void *)work_a_0321367792_1239235040_sub_1530743023_485037659};
	xsi_register_didat("work_a_0321367792_1239235040", "isim/En_LFSR_isim_beh.exe.sim/work/a_0321367792_1239235040.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
	xsi_register_resolution_function(1, 2, (void *)ieee_p_2592010699_sub_3130575329_503743352, 6);
}
