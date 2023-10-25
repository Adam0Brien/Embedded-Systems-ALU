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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/20093460/Downloads/Embedded-Systems-ALU-main/Embedded-Systems-ALU-main/CPU_PROJ/comparator.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

unsigned char ieee_p_1242562249_sub_2720006528_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2720042465_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_2720078402_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_4063966832_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_4079383805_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_1242562249_sub_4081755647_1035706684(char *, char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_2683404259_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    int t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;

LAB0:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3152);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 3232);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t1 = (t0 + 5520);
    t8 = xsi_mem_cmp(t1, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB13:    t5 = (t0 + 5523);
    t9 = xsi_mem_cmp(t5, t3, 3U);
    if (t9 == 1)
        goto LAB7;

LAB14:    t7 = (t0 + 5526);
    t11 = xsi_mem_cmp(t7, t3, 3U);
    if (t11 == 1)
        goto LAB8;

LAB15:    t12 = (t0 + 5529);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB9;

LAB16:    t15 = (t0 + 5532);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB10;

LAB17:    t18 = (t0 + 5535);
    t20 = xsi_mem_cmp(t18, t3, 3U);
    if (t20 == 1)
        goto LAB11;

LAB18:
LAB12:    xsi_set_current_line(72, ng0);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(48, ng0);
    t21 = (t0 + 1192U);
    t22 = *((char **)t21);
    t21 = (t0 + 5428U);
    t23 = (t0 + 1352U);
    t24 = *((char **)t23);
    t23 = (t0 + 5444U);
    t2 = ieee_p_1242562249_sub_2720042465_1035706684(IEEE_P_1242562249, t22, t21, t24, t23);
    if (t2 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB5;

LAB7:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5428U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 5444U);
    t2 = ieee_p_1242562249_sub_4063966832_1035706684(IEEE_P_1242562249, t3, t1, t5, t4);
    if (t2 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB5;

LAB8:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5428U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 5444U);
    t2 = ieee_p_1242562249_sub_2720078402_1035706684(IEEE_P_1242562249, t3, t1, t5, t4);
    if (t2 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB5;

LAB9:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5428U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 5444U);
    t2 = ieee_p_1242562249_sub_4081755647_1035706684(IEEE_P_1242562249, t3, t1, t5, t4);
    if (t2 != 0)
        goto LAB29;

LAB31:
LAB30:    goto LAB5;

LAB10:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5428U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 5444U);
    t2 = ieee_p_1242562249_sub_2720006528_1035706684(IEEE_P_1242562249, t3, t1, t5, t4);
    if (t2 != 0)
        goto LAB32;

LAB34:
LAB33:    goto LAB5;

LAB11:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t1 = (t0 + 5428U);
    t4 = (t0 + 1352U);
    t5 = *((char **)t4);
    t4 = (t0 + 5444U);
    t2 = ieee_p_1242562249_sub_4079383805_1035706684(IEEE_P_1242562249, t3, t1, t5, t4);
    if (t2 != 0)
        goto LAB35;

LAB37:
LAB36:    goto LAB5;

LAB19:;
LAB20:    xsi_set_current_line(49, ng0);
    t25 = (t0 + 3232);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t25);
    goto LAB21;

LAB23:    xsi_set_current_line(53, ng0);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB24;

LAB26:    xsi_set_current_line(57, ng0);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB27;

LAB29:    xsi_set_current_line(61, ng0);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB30;

LAB32:    xsi_set_current_line(65, ng0);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB33;

LAB35:    xsi_set_current_line(69, ng0);
    t6 = (t0 + 3232);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB36;

}


extern void work_a_2683404259_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2683404259_3212880686_p_0};
	xsi_register_didat("work_a_2683404259_3212880686", "isim/comparator_tb_isim_beh.exe.sim/work/a_2683404259_3212880686.didat");
	xsi_register_executes(pe);
}
