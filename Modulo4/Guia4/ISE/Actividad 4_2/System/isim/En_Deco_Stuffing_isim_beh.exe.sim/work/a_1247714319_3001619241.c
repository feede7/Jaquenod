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
static const char *ng0 = "/home/fede/Documents/Jaquenod/GIT/Modulo4/Guia4/ISE/Actividad 4_2/Decodificador/Sources/Recupera_CLK.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1547198987_1035706684(char *, char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1547270861_1035706684(char *, char *, char *, char *, char *, char *);
int ieee_p_1242562249_sub_1657552908_1035706684(char *, char *, char *);
char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_2110339434_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110375371_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2110411308_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_2507238156_503743352(char *, unsigned char , unsigned char );


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

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 4592);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 4484);
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

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 568U);
    t2 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 4492);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 776U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t3 = (t0 + 4628);
    t6 = (t3 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 32U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 776U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t1 = (t0 + 4664);
    t4 = (t1 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 32U);
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

LAB0:    xsi_set_current_line(55, ng0);

LAB3:    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 1236U);
    t4 = *((char **)t1);
    t5 = *((unsigned char *)t4);
    t6 = ieee_p_2592010699_sub_2507238156_503743352(IEEE_P_2592010699, t3, t5);
    t1 = (t0 + 4700);
    t7 = (t1 + 32U);
    t8 = *((char **)t7);
    t9 = (t8 + 32U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_fast(t1);

LAB2:    t11 = (t0 + 4500);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_3(char *t0)
{
    char t1[16];
    char t7[16];
    char t24[16];
    char t25[16];
    char t31[16];
    char t35[16];
    char t58[16];
    char t61[16];
    char t65[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned char t21;
    char *t22;
    char *t23;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    unsigned char t34;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned char t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    char *t52;
    char *t53;
    char *t54;
    unsigned char t55;
    char *t56;
    char *t57;
    char *t59;
    char *t60;
    char *t62;
    char *t63;
    unsigned char t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    char *t71;
    unsigned int t72;
    unsigned int t73;
    unsigned char t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;

LAB0:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t2 = (t0 + 10296U);
    t4 = (t0 + 1972U);
    t5 = *((char **)t4);
    t4 = (t0 + 10280U);
    t6 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t1, t3, t2, t5, t4);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, 10, 10);
    t9 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t6, t1, t8, t7);
    if (t9 != 0)
        goto LAB3;

LAB4:    t17 = (t0 + 2064U);
    t18 = *((char **)t17);
    t17 = (t0 + 10296U);
    t19 = (t0 + 1972U);
    t20 = *((char **)t19);
    t19 = (t0 + 10280U);
    t21 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t18, t17, t20, t19);
    if (t21 == 1)
        goto LAB7;

LAB8:    t16 = (unsigned char)0;

LAB9:    if (t16 != 0)
        goto LAB5;

LAB6:    t51 = (t0 + 1972U);
    t52 = *((char **)t51);
    t51 = (t0 + 10280U);
    t53 = (t0 + 2064U);
    t54 = *((char **)t53);
    t53 = (t0 + 10296U);
    t55 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t52, t51, t54, t53);
    if (t55 == 1)
        goto LAB14;

LAB15:    t50 = (unsigned char)0;

LAB16:    if (t50 != 0)
        goto LAB12;

LAB13:
LAB19:    t80 = (t0 + 1788U);
    t81 = *((char **)t80);
    t80 = (t0 + 4736);
    t82 = (t80 + 32U);
    t83 = *((char **)t82);
    t84 = (t83 + 32U);
    t85 = *((char **)t84);
    memcpy(t85, t81, 8U);
    xsi_driver_first_trans_fast(t80);

LAB2:    t86 = (t0 + 4508);
    *((int *)t86) = 1;

LAB1:    return;
LAB3:    t10 = (t0 + 1788U);
    t11 = *((char **)t10);
    t10 = (t0 + 4736);
    t12 = (t10 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB2;

LAB5:    t36 = (t0 + 1788U);
    t37 = *((char **)t36);
    t36 = (t0 + 10248U);
    t38 = (t0 + 2672U);
    t39 = *((char **)t38);
    t38 = (t0 + 10328U);
    t40 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t35, t37, t36, t39, t38);
    t41 = (t35 + 12U);
    t42 = *((unsigned int *)t41);
    t43 = (1U * t42);
    t44 = (8U != t43);
    if (t44 == 1)
        goto LAB10;

LAB11:    t45 = (t0 + 4736);
    t46 = (t45 + 32U);
    t47 = *((char **)t46);
    t48 = (t47 + 32U);
    t49 = *((char **)t48);
    memcpy(t49, t40, 8U);
    xsi_driver_first_trans_fast(t45);
    goto LAB2;

LAB7:    t22 = (t0 + 1788U);
    t23 = *((char **)t22);
    t22 = (t0 + 10248U);
    t26 = (t0 + 2604U);
    t27 = *((char **)t26);
    t26 = (t0 + 10312U);
    t28 = (t0 + 2672U);
    t29 = *((char **)t28);
    t28 = (t0 + 10328U);
    t30 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t25, t27, t26, t29, t28);
    t32 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t31, 1, 10);
    t33 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t24, t30, t25, t32, t31);
    t34 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t23, t22, t33, t24);
    t16 = t34;
    goto LAB9;

LAB10:    xsi_size_not_matching(8U, t43, 0);
    goto LAB11;

LAB12:    t66 = (t0 + 1788U);
    t67 = *((char **)t66);
    t66 = (t0 + 10248U);
    t68 = (t0 + 2672U);
    t69 = *((char **)t68);
    t68 = (t0 + 10328U);
    t70 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t65, t67, t66, t69, t68);
    t71 = (t65 + 12U);
    t72 = *((unsigned int *)t71);
    t73 = (1U * t72);
    t74 = (8U != t73);
    if (t74 == 1)
        goto LAB17;

LAB18:    t75 = (t0 + 4736);
    t76 = (t75 + 32U);
    t77 = *((char **)t76);
    t78 = (t77 + 32U);
    t79 = *((char **)t78);
    memcpy(t79, t70, 8U);
    xsi_driver_first_trans_fast(t75);
    goto LAB2;

LAB14:    t56 = (t0 + 1788U);
    t57 = *((char **)t56);
    t56 = (t0 + 10248U);
    t59 = (t0 + 2672U);
    t60 = *((char **)t59);
    t59 = (t0 + 10328U);
    t62 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t61, 1, 8);
    t63 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t58, t60, t59, t62, t61);
    t64 = ieee_p_1242562249_sub_2110411308_1035706684(IEEE_P_1242562249, t57, t56, t63, t58);
    t50 = t64;
    goto LAB16;

LAB17:    xsi_size_not_matching(8U, t73, 0);
    goto LAB18;

LAB20:    goto LAB2;

}

static void work_a_1247714319_3001619241_p_4(char *t0)
{
    char t3[16];
    char t10[16];
    char t18[16];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    int t6;
    int t7;
    char *t8;
    unsigned char t9;
    char *t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned char t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 1696U);
    t2 = *((char **)t1);
    t1 = (t0 + 10232U);
    t4 = (t0 + 2604U);
    t5 = *((char **)t4);
    t4 = (t0 + 10312U);
    t6 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t5, t4);
    t7 = (t6 / 2);
    t8 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t3, t7, 8);
    t9 = ieee_p_1242562249_sub_2110339434_1035706684(IEEE_P_1242562249, t2, t1, t8, t3);
    if (t9 != 0)
        goto LAB3;

LAB4:
LAB7:    t19 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t18, 8, 8);
    t20 = (t18 + 12U);
    t21 = *((unsigned int *)t20);
    t21 = (t21 * 1U);
    t22 = (8U != t21);
    if (t22 == 1)
        goto LAB9;

LAB10:    t23 = (t0 + 4772);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 32U);
    t27 = *((char **)t26);
    memcpy(t27, t19, 8U);
    xsi_driver_first_trans_fast(t23);

LAB2:    t28 = (t0 + 4516);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t11 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t10, 7, 8);
    t12 = (8U != 8U);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 4772);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 8U);
    xsi_driver_first_trans_fast(t13);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(8U, t21, 0);
    goto LAB10;

}

static void work_a_1247714319_3001619241_p_5(char *t0)
{
    char t3[16];
    char t6[16];
    char t9[16];
    char t25[16];
    char t28[16];
    char *t1;
    char *t2;
    char *t4;
    unsigned char t5;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    unsigned char t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    int t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned char t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 10200U);
    t4 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t3, 7, 8);
    t5 = ieee_p_1242562249_sub_2110375371_1035706684(IEEE_P_1242562249, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB7:    t26 = (t0 + 1696U);
    t27 = *((char **)t26);
    t26 = (t0 + 10232U);
    t29 = (t0 + 2604U);
    t30 = *((char **)t29);
    t29 = (t0 + 10312U);
    t31 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t30, t29);
    t32 = (t31 / 2);
    t33 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t28, t32, 8);
    t34 = ieee_p_1242562249_sub_1547270861_1035706684(IEEE_P_1242562249, t25, t27, t26, t33, t28);
    t35 = (t25 + 12U);
    t36 = *((unsigned int *)t35);
    t37 = (1U * t36);
    t38 = (8U != t37);
    if (t38 == 1)
        goto LAB9;

LAB10:    t39 = (t0 + 4808);
    t40 = (t39 + 32U);
    t41 = *((char **)t40);
    t42 = (t41 + 32U);
    t43 = *((char **)t42);
    memcpy(t43, t34, 8U);
    xsi_driver_first_trans_fast(t39);

LAB2:    t44 = (t0 + 4524);
    *((int *)t44) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 1696U);
    t8 = *((char **)t7);
    t7 = (t0 + 10232U);
    t10 = (t0 + 2604U);
    t11 = *((char **)t10);
    t10 = (t0 + 10312U);
    t12 = ieee_p_1242562249_sub_1657552908_1035706684(IEEE_P_1242562249, t11, t10);
    t13 = (t12 / 2);
    t14 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, t13, 8);
    t15 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t6, t8, t7, t14, t9);
    t16 = (t6 + 12U);
    t17 = *((unsigned int *)t16);
    t18 = (1U * t17);
    t19 = (8U != t18);
    if (t19 == 1)
        goto LAB5;

LAB6:    t20 = (t0 + 4808);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    t23 = (t22 + 32U);
    t24 = *((char **)t23);
    memcpy(t24, t15, 8U);
    xsi_driver_first_trans_fast(t20);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t18, 0);
    goto LAB6;

LAB8:    goto LAB2;

LAB9:    xsi_size_not_matching(8U, t37, 0);
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
    char *t22;

LAB0:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1328U);
    t6 = *((char **)t2);
    t7 = *((unsigned char *)t6);
    t8 = (t7 == (unsigned char)3);
    t1 = t8;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 568U);
    t1 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB12;

LAB13:
LAB3:    t2 = (t0 + 4532);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(80, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 10);
    t10 = (10U != 10U);
    if (t10 == 1)
        goto LAB8;

LAB9:    t11 = (t0 + 4844);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 32U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 10U);
    xsi_driver_first_trans_fast(t11);
    xsi_set_current_line(81, ng0);
    t2 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t9, 0, 10);
    t3 = (t9 + 12U);
    t16 = *((unsigned int *)t3);
    t16 = (t16 * 1U);
    t1 = (10U != t16);
    if (t1 == 1)
        goto LAB10;

LAB11:    t6 = (t0 + 4880);
    t11 = (t6 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 32U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 10U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1880U);
    t3 = *((char **)t2);
    t2 = (t0 + 4916);
    t6 = (t2 + 32U);
    t11 = *((char **)t6);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 4952);
    t6 = (t2 + 32U);
    t11 = *((char **)t6);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1696U);
    t3 = *((char **)t2);
    t2 = (t0 + 4988);
    t6 = (t2 + 32U);
    t11 = *((char **)t6);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    memcpy(t13, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_size_not_matching(10U, 10U, 0);
    goto LAB9;

LAB10:    xsi_size_not_matching(10U, t16, 0);
    goto LAB11;

LAB12:    xsi_set_current_line(86, ng0);
    t3 = (t0 + 2156U);
    t6 = *((char **)t3);
    t4 = *((unsigned char *)t6);
    t5 = (t4 == (unsigned char)3);
    if (t5 != 0)
        goto LAB14;

LAB16:
LAB15:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t4 = (t1 == (unsigned char)2);
    if (t4 != 0)
        goto LAB19;

LAB21:
LAB20:    goto LAB3;

LAB14:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 1972U);
    t11 = *((char **)t3);
    t3 = (t0 + 10280U);
    t12 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 1, 10);
    t13 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t11, t3, t12, t17);
    t14 = (t9 + 12U);
    t16 = *((unsigned int *)t14);
    t18 = (1U * t16);
    t7 = (10U != t18);
    if (t7 == 1)
        goto LAB17;

LAB18:    t15 = (t0 + 4880);
    t19 = (t15 + 32U);
    t20 = *((char **)t19);
    t21 = (t20 + 32U);
    t22 = *((char **)t21);
    memcpy(t22, t13, 10U);
    xsi_driver_first_trans_fast(t15);
    goto LAB15;

LAB17:    xsi_size_not_matching(10U, t18, 0);
    goto LAB18;

LAB19:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 2064U);
    t6 = *((char **)t2);
    t2 = (t0 + 10296U);
    t11 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t17, 1, 10);
    t12 = ieee_p_1242562249_sub_1547198987_1035706684(IEEE_P_1242562249, t9, t6, t2, t11, t17);
    t13 = (t9 + 12U);
    t16 = *((unsigned int *)t13);
    t18 = (1U * t16);
    t5 = (10U != t18);
    if (t5 == 1)
        goto LAB22;

LAB23:    t14 = (t0 + 4844);
    t15 = (t14 + 32U);
    t19 = *((char **)t15);
    t20 = (t19 + 32U);
    t21 = *((char **)t20);
    memcpy(t21, t12, 10U);
    xsi_driver_first_trans_fast(t14);
    goto LAB20;

LAB22:    xsi_size_not_matching(10U, t18, 0);
    goto LAB23;

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

LAB0:    xsi_set_current_line(41, ng0);

LAB3:    t1 = (t0 + 1420U);
    t2 = *((char **)t1);
    t1 = (t0 + 5024);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 4540);
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

LAB0:    xsi_set_current_line(42, ng0);

LAB3:    t1 = (t0 + 1604U);
    t2 = *((char **)t1);
    t1 = (t0 + 5060);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 32U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 4548);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1247714319_3001619241_init()
{
	static char *pe[] = {(void *)work_a_1247714319_3001619241_p_0,(void *)work_a_1247714319_3001619241_p_1,(void *)work_a_1247714319_3001619241_p_2,(void *)work_a_1247714319_3001619241_p_3,(void *)work_a_1247714319_3001619241_p_4,(void *)work_a_1247714319_3001619241_p_5,(void *)work_a_1247714319_3001619241_p_6,(void *)work_a_1247714319_3001619241_p_7,(void *)work_a_1247714319_3001619241_p_8};
	xsi_register_didat("work_a_1247714319_3001619241", "isim/En_Deco_Stuffing_isim_beh.exe.sim/work/a_1247714319_3001619241.didat");
	xsi_register_executes(pe);
}
