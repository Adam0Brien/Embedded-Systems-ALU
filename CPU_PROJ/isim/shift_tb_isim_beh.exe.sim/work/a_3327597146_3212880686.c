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
static const char *ng0 = "C:/Users/20093460/Downloads/Embedded-Systems-ALU-main/Embedded-Systems-ALU-main/CPU_PROJ/shift.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_1830103426_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_2770553711_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_3077134611_1035706684(char *, char *, char *, char *, int );
char *ieee_p_1242562249_sub_4109847776_1035706684(char *, char *, char *, char *, int );
unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );


static void work_a_3327597146_3212880686_p_0(char *t0)
{
    char t25[16];
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    int t15;
    char *t16;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 992U);
    t2 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 2992);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 1192U);
    t4 = *((char **)t3);
    t3 = (t0 + 5164);
    t6 = xsi_mem_cmp(t3, t4, 3U);
    if (t6 == 1)
        goto LAB6;

LAB12:    t7 = (t0 + 5167);
    t9 = xsi_mem_cmp(t7, t4, 3U);
    if (t9 == 1)
        goto LAB7;

LAB13:    t10 = (t0 + 5170);
    t12 = xsi_mem_cmp(t10, t4, 3U);
    if (t12 == 1)
        goto LAB8;

LAB14:    t13 = (t0 + 5173);
    t15 = xsi_mem_cmp(t13, t4, 3U);
    if (t15 == 1)
        goto LAB9;

LAB15:    t16 = (t0 + 5176);
    t18 = xsi_mem_cmp(t16, t4, 3U);
    if (t18 == 1)
        goto LAB10;

LAB16:
LAB11:    xsi_set_current_line(58, ng0);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(48, ng0);
    t19 = (t0 + 1352U);
    t20 = *((char **)t19);
    t19 = (t0 + 3072);
    t21 = (t19 + 56U);
    t22 = *((char **)t21);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    memcpy(t24, t20, 16U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB5;

LAB7:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 5104U);
    t4 = ieee_p_1242562249_sub_2770553711_1035706684(IEEE_P_1242562249, t25, t3, t1, 1);
    t5 = (t25 + 12U);
    t26 = *((unsigned int *)t5);
    t26 = (t26 * 1U);
    t2 = (16U != t26);
    if (t2 == 1)
        goto LAB18;

LAB19:    t7 = (t0 + 3072);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB5;

LAB8:    xsi_set_current_line(52, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 5104U);
    t4 = ieee_p_1242562249_sub_1830103426_1035706684(IEEE_P_1242562249, t25, t3, t1, 1);
    t5 = (t25 + 12U);
    t26 = *((unsigned int *)t5);
    t26 = (t26 * 1U);
    t2 = (16U != t26);
    if (t2 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 3072);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB5;

LAB9:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 5104U);
    t4 = ieee_p_1242562249_sub_4109847776_1035706684(IEEE_P_1242562249, t25, t3, t1, 1);
    t5 = (t25 + 12U);
    t26 = *((unsigned int *)t5);
    t26 = (t26 * 1U);
    t2 = (16U != t26);
    if (t2 == 1)
        goto LAB22;

LAB23:    t7 = (t0 + 3072);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB5;

LAB10:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t1 = (t0 + 5104U);
    t4 = ieee_p_1242562249_sub_3077134611_1035706684(IEEE_P_1242562249, t25, t3, t1, 1);
    t5 = (t25 + 12U);
    t26 = *((unsigned int *)t5);
    t26 = (t26 * 1U);
    t2 = (16U != t26);
    if (t2 == 1)
        goto LAB24;

LAB25:    t7 = (t0 + 3072);
    t8 = (t7 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t4, 16U);
    xsi_driver_first_trans_fast_port(t7);
    goto LAB5;

LAB17:;
LAB18:    xsi_size_not_matching(16U, t26, 0);
    goto LAB19;

LAB20:    xsi_size_not_matching(16U, t26, 0);
    goto LAB21;

LAB22:    xsi_size_not_matching(16U, t26, 0);
    goto LAB23;

LAB24:    xsi_size_not_matching(16U, t26, 0);
    goto LAB25;

}


extern void work_a_3327597146_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3327597146_3212880686_p_0};
	xsi_register_didat("work_a_3327597146_3212880686", "isim/shift_tb_isim_beh.exe.sim/work/a_3327597146_3212880686.didat");
	xsi_register_executes(pe);
}
