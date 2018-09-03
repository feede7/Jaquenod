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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo4/Guia4/ISE/Actividad 4_2/Decodificador/Sources/Recupera_CLK.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532753770_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_1434214030532825644_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141789389_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_1247714319_3001619241_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(38, ng0);

LAB3:    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 8456);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 8248);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_1(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 8264);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 8520);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 8584);
    t4 = (t1 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

}

static void work_a_1247714319_3001619241_p_2(char *t0)
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

LAB0:    xsi_set_current_line(58, ng0);

LAB3:    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 2472U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 8648);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 8280);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_3(char *t0)
{
    char t12[16];
    char t35[16];
    char t38[16];
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t11;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned char t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t36;
    unsigned char t37;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    unsigned int t45;
    unsigned int t46;
    unsigned char t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;

LAB0:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3912U);
    t3 = *((char **)t2);
    t2 = (t0 + 15312U);
    t4 = (t0 + 3752U);
    t5 = *((char **)t4);
    t4 = (t0 + 15296U);
    t6 = ieee_p_1242562249_sub_1434214030532825644_1035706684(IEEE_P_1242562249, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t28 = (t0 + 3752U);
    t29 = *((char **)t28);
    t28 = (t0 + 15296U);
    t30 = (t0 + 3912U);
    t31 = *((char **)t30);
    t30 = (t0 + 15312U);
    t32 = ieee_p_1242562249_sub_1434214030532825644_1035706684(IEEE_P_1242562249, t29, t28, t31, t30);
    if (t32 == 1)
        goto LAB12;

LAB13:    t27 = (unsigned char)0;

LAB14:    if (t27 != 0)
        goto LAB10;

LAB11:
LAB17:    t53 = (t0 + 3432U);
    t54 = *((char **)t53);
    t53 = (t0 + 8712);
    t55 = (t53 + 56U);
    t56 = *((char **)t55);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memcpy(t58, t54, 8U);
    xsi_driver_first_trans_fast(t53);

LAB2:    t59 = (t0 + 8296);
    *((int *)t59) = 1;

LAB1:    return;
LAB3:    t13 = (t0 + 3432U);
    t14 = *((char **)t13);
    t13 = (t0 + 15264U);
    t15 = (t0 + 4968U);
    t16 = *((char **)t15);
    t15 = (t0 + 15344U);
    t17 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t12, t14, t13, t16, t15);
    t18 = (t12 + 12U);
    t19 = *((unsigned int *)t18);
    t20 = (1U * t19);
    t21 = (8U != t20);
    if (t21 == 1)
        goto LAB8;

LAB9:    t22 = (t0 + 8712);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t17, 8U);
    xsi_driver_first_trans_fast(t22);
    goto LAB2;

LAB5:    t7 = (t0 + 3432U);
    t8 = *((char **)t7);
    t7 = (t0 + 15264U);
    t9 = (t0 + 4848U);
    t10 = *((char **)t9);
    t9 = (t0 + 15328U);
    t11 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t8, t7, t10, t9);
    t1 = t11;
    goto LAB7;

LAB8:    xsi_size_not_matching(8U, t20, 0);
    goto LAB9;

LAB10:    t39 = (t0 + 3432U);
    t40 = *((char **)t39);
    t39 = (t0 + 15264U);
    t41 = (t0 + 4968U);
    t42 = *((char **)t41);
    t41 = (t0 + 15344U);
    t43 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t38, t40, t39, t42, t41);
    t44 = (t38 + 12U);
    t45 = *((unsigned int *)t44);
    t46 = (1U * t45);
    t47 = (8U != t46);
    if (t47 == 1)
        goto LAB15;

LAB16:    t48 = (t0 + 8712);
    t49 = (t48 + 56U);
    t50 = *((char **)t49);
    t51 = (t50 + 56U);
    t52 = *((char **)t51);
    memcpy(t52, t43, 8U);
    xsi_driver_first_trans_fast(t48);
    goto LAB2;

LAB12:    t33 = (t0 + 3432U);
    t34 = *((char **)t33);
    t33 = (t0 + 15264U);
    t36 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t35, 0, 8);
    t37 = ieee_p_1242562249_sub_1434214030532825644_1035706684(IEEE_P_1242562249, t34, t33, t36, t35);
    t27 = t37;
    goto LAB14;

LAB15:    xsi_size_not_matching(8U, t46, 0);
    goto LAB16;

LAB18:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_4(char *t0)
{
    char t3[16];
    char t6[16];
    char t14[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t7;
    unsigned char t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    t1 = (t0 + 15248U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 10, 8);
    t5 = ieee_p_1242562249_sub_1434214030532753770_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB7:    t15 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t14, 8, 8);
    t16 = (t14 + 12U);
    t17 = *((unsigned int *)t16);
    t17 = (t17 * 1U);
    t18 = (8U != t17);
    if (t18 == 1)
        goto LAB9;

LAB10:    t19 = (t0 + 8776);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t15, 8U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 8312);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t6, 7, 8);
    t8 = (8U != 8U);
    if (t8 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 8776);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t7, 8U);
    xsi_driver_first_trans_fast(t9);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(8U, t17, 0);
    goto LAB10;

}

static void work_a_1247714319_3001619241_p_5(char *t0)
{
    char t3[16];
    char t6[16];
    char t9[16];
    char t21[16];
    char t24[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t1 = (t0 + 15216U);
    t4 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t3, 7, 8);
    t5 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB7:    t22 = (t0 + 3272U);
    t23 = *((char **)t22);
    t22 = (t0 + 15248U);
    t25 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t24, 10, 8);
    t26 = ieee_p_1242562249_sub_1701011461141789389_1035706684(IEEE_P_1242562249, t21, t23, t22, t25, t24);
    t27 = (t21 + 12U);
    t28 = *((unsigned int *)t27);
    t29 = (1U * t28);
    t30 = (8U != t29);
    if (t30 == 1)
        goto LAB9;

LAB10:    t31 = (t0 + 8840);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t26, 8U);
    xsi_driver_first_trans_fast(t31);

LAB2:    t36 = (t0 + 8328);
    *((int *)t36) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 3272U);
    t8 = *((char **)t7);
    t7 = (t0 + 15248U);
    t10 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t9, 10, 8);
    t11 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t6, t8, t7, t10, t9);
    t12 = (t6 + 12U);
    t13 = *((unsigned int *)t12);
    t14 = (1U * t13);
    t15 = (8U != t14);
    if (t15 == 1)
        goto LAB5;

LAB6:    t16 = (t0 + 8840);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t11, 8U);
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t14, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(8U, t29, 0);
    goto LAB10;

}

static void work_a_1247714319_3001619241_p_6(char *t0)
{
    char t9[16];
    char t17[16];
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    unsigned char t7;
    unsigned char t8;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t21;

LAB0:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t1 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB12;

LAB13:
LAB3:    t2 = (t0 + 8344);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(73, ng0);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t9, 0, 10);
    t10 = (10U != 10U);
    if (t10 == 1)
        goto LAB8;

LAB9:    t11 = (t0 + 8904);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 10U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(74, ng0);
    t2 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t9, 0, 10);
    t3 = (t9 + 12U);
    t16 = *((unsigned int *)t3);
    t16 = (t16 * 1U);
    t1 = (10U != t16);
    if (t1 == 1)
        goto LAB10;

LAB11:    t6 = (t0 + 8968);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 10U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3592U);
    t3 = *((char **)t2);
    t2 = (t0 + 9032);
    t6 = (t2 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 2952U);
    t3 = *((char **)t2);
    t2 = (t0 + 9096);
    t6 = (t2 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3272U);
    t3 = *((char **)t2);
    t2 = (t0 + 9160);
    t6 = (t2 + 56U);
    t11 = *((char **)t6);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 9224);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_size_not_matching(10U, 10U, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(10U, t16, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(80, ng0);
    t3 = (t0 + 2152U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 4072U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4072U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)3);
    if (t4 != 0)
        goto LAB22;

LAB24:
LAB23:    goto LAB3;

LAB14:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 9224);
    t11 = (t3 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast(t3);
    goto LAB15;

LAB17:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3752U);
    t6 = *((char **)t2);
    t2 = (t0 + 15296U);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t17, 1, 10);
    t12 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t9, t6, t2, t11, t17);
    t13 = (t9 + 12U);
    t16 = *((unsigned int *)t13);
    t18 = (1U * t16);
    t5 = (10U != t18);
    if (t5 == 1)
        goto LAB20;

LAB21:    t14 = (t0 + 8968);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 10U);
    xsi_driver_first_trans_fast(t14);
    goto LAB18;

LAB20:    xsi_size_not_matching(10U, t18, 0);
    goto LAB21;

LAB22:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 3912U);
    t6 = *((char **)t2);
    t2 = (t0 + 15312U);
    t11 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t17, 1, 10);
    t12 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t9, t6, t2, t11, t17);
    t13 = (t9 + 12U);
    t16 = *((unsigned int *)t13);
    t18 = (1U * t16);
    t5 = (10U != t18);
    if (t5 == 1)
        goto LAB25;

LAB26:    t14 = (t0 + 8904);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 10U);
    xsi_driver_first_trans_fast(t14);
    goto LAB23;

LAB25:    xsi_size_not_matching(10U, t18, 0);
    goto LAB26;

}

static void work_a_1247714319_3001619241_p_7(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t1 = (t0 + 9288);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 8360);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_8(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(45, ng0);

LAB3:    t1 = (t0 + 3112U);
    t2 = *((char **)t1);
    t1 = (t0 + 9352);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 8376);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1247714319_3001619241_init()
{
	static char *pe[] = {(void *)work_a_1247714319_3001619241_p_0,(void *)work_a_1247714319_3001619241_p_1,(void *)work_a_1247714319_3001619241_p_2,(void *)work_a_1247714319_3001619241_p_3,(void *)work_a_1247714319_3001619241_p_4,(void *)work_a_1247714319_3001619241_p_5,(void *)work_a_1247714319_3001619241_p_6,(void *)work_a_1247714319_3001619241_p_7,(void *)work_a_1247714319_3001619241_p_8};
	xsi_register_didat("work_a_1247714319_3001619241", "isim/TB_Recup_CLK_isim_beh.exe.sim/work/a_1247714319_3001619241.didat");
	xsi_register_executes(pe);
}
