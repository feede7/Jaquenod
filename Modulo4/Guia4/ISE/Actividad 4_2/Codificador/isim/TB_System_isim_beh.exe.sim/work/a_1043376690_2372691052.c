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
static const char *ng0 = "/home/fede/Documents/Jaquenod/Jaquenod/Modulo4/Guia4/ISE/Actividad 4_2/Codificador/Sources/TB_Codificador.vhd";
extern char *IEEE_P_1242562249;
extern char *IEEE_P_2592010699;

char *ieee_p_1242562249_sub_10420449594411817395_1035706684(char *, char *, int , int );
unsigned char ieee_p_1242562249_sub_1434214030532789707_1035706684(char *, char *, char *, char *, char *);
char *ieee_p_1242562249_sub_1701011461141717515_1035706684(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_1043376690_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5144);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2768U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3792);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1043376690_2372691052_p_1(char *t0)
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
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    xsi_set_current_line(56, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    if (14 > 0)
        goto LAB5;

LAB6:    if (-1 == -1)
        goto LAB10;

LAB11:    t3 = 0;

LAB7:    t4 = (t3 - 14);
    t5 = (t4 * -1);
    t6 = (1U * t5);
    t7 = (0 + t6);
    t1 = (t2 + t7);
    t8 = *((unsigned char *)t1);
    t9 = (t0 + 5208);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t8;
    xsi_driver_first_trans_fast(t9);

LAB2:    t14 = (t0 + 5048);
    *((int *)t14) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    if (-1 == 1)
        goto LAB8;

LAB9:    t3 = 14;
    goto LAB7;

LAB8:    t3 = 0;
    goto LAB7;

LAB10:    t3 = 14;
    goto LAB7;

}

static void work_a_1043376690_2372691052_p_2(char *t0)
{
    char t9[16];
    char t12[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t10;
    unsigned char t11;
    unsigned char t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    int t22;
    unsigned int t23;

LAB0:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1152U);
    t3 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB7;

LAB8:
LAB3:    t1 = (t0 + 5064);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 5272);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 5336);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(63, ng0);
    t1 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t9, 0, 8);
    t3 = (8U != 8U);
    if (t3 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 5400);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t1, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB6;

LAB7:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5272);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(67, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB9;

LAB11:
LAB10:    goto LAB3;

LAB9:    xsi_set_current_line(74, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 9280U);
    t10 = (15U - 1);
    t6 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t9, t10, 8);
    t11 = ieee_p_1242562249_sub_1434214030532789707_1035706684(IEEE_P_1242562249, t5, t1, t6, t9);
    if (t11 != 0)
        goto LAB12;

LAB14:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    if (14 > 0)
        goto LAB17;

LAB18:    if (-1 == -1)
        goto LAB22;

LAB23:    t10 = 0;

LAB19:    t18 = (t10 - 1);
    t19 = (14 - t18);
    t20 = (t19 * 1U);
    t21 = (0 + t20);
    t1 = (t2 + t21);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t12 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 13;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t22 = (0 - 13);
    t23 = (t22 * -1);
    t23 = (t23 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t23;
    t5 = xsi_base_array_concat(t5, t9, t6, (char)97, t1, t12, (char)99, (unsigned char)3, (char)101);
    t23 = (14U + 1U);
    t3 = (15U != t23);
    if (t3 == 1)
        goto LAB24;

LAB25:    t8 = (t0 + 5464);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t5, 15U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 9280U);
    t5 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, 1, 8);
    t6 = ieee_p_1242562249_sub_1701011461141717515_1035706684(IEEE_P_1242562249, t9, t2, t1, t5, t12);
    t7 = (t9 + 12U);
    t19 = *((unsigned int *)t7);
    t20 = (1U * t19);
    t3 = (8U != t20);
    if (t3 == 1)
        goto LAB26;

LAB27:    t8 = (t0 + 5400);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 8U);
    xsi_driver_first_trans_fast(t8);

LAB13:    goto LAB10;

LAB12:    xsi_set_current_line(75, ng0);
    t7 = ieee_p_1242562249_sub_10420449594411817395_1035706684(IEEE_P_1242562249, t12, 0, 8);
    t13 = (8U != 8U);
    if (t13 == 1)
        goto LAB15;

LAB16:    t8 = (t0 + 5400);
    t14 = (t8 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t7, 8U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(76, ng0);
    t1 = (t0 + 5272);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t1);
    goto LAB13;

LAB15:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB16;

LAB17:    if (-1 == 1)
        goto LAB20;

LAB21:    t10 = 14;
    goto LAB19;

LAB20:    t10 = 0;
    goto LAB19;

LAB22:    t10 = 14;
    goto LAB19;

LAB24:    xsi_size_not_matching(15U, t23, 0);
    goto LAB25;

LAB26:    xsi_size_not_matching(8U, t20, 0);
    goto LAB27;

}

static void work_a_1043376690_2372691052_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int64 t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(88, ng0);

LAB3:    t1 = (t0 + 5528);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    *((unsigned char *)t5) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    t6 = (12500 * 1LL);
    t7 = (t0 + 5528);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)2;
    xsi_driver_subsequent_trans_delta(t7, 0U, 1, t6);

LAB2:
LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1043376690_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1043376690_2372691052_p_0,(void *)work_a_1043376690_2372691052_p_1,(void *)work_a_1043376690_2372691052_p_2,(void *)work_a_1043376690_2372691052_p_3};
	xsi_register_didat("work_a_1043376690_2372691052", "isim/TB_System_isim_beh.exe.sim/work/a_1043376690_2372691052.didat");
	xsi_register_executes(pe);
}
