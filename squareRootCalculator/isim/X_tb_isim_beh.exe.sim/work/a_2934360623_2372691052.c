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
static const char *ng0 = "F:/UNI/projects/ise/squareRootCalculator/X_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_2934360623_2372691052_p_0(char *t0)
{
    char t7[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int t5;
    int t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;
    int t20;

LAB0:    t1 = (t0 + 2992U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(51, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2800);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 5493);
    *((int *)t2) = 0;
    t4 = (t0 + 5497);
    *((int *)t4) = 31;
    t5 = 0;
    t6 = 31;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(63, ng0);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(53, ng0);
    t8 = (t0 + 5493);
    t9 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, *((int *)t8), 5);
    t10 = (t0 + 3376);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 5U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(54, ng0);
    t2 = (t0 + 5501);
    *((int *)t2) = 0;
    t4 = (t0 + 5505);
    *((int *)t4) = 3;
    t15 = 0;
    t16 = 3;

LAB12:    if (t15 <= t16)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 5493);
    t5 = *((int *)t2);
    t4 = (t0 + 5497);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB11;

LAB26:    t15 = (t5 + 1);
    t5 = t15;
    t8 = (t0 + 5493);
    *((int *)t8) = t5;
    goto LAB8;

LAB13:    xsi_set_current_line(55, ng0);
    t8 = (t0 + 5501);
    t9 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, *((int *)t8), 2);
    t10 = (t0 + 3440);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t9, 2U);
    xsi_driver_first_trans_fast(t10);
    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5509);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 5510);
    *((unsigned char *)t4) = (unsigned char)3;
    t17 = (unsigned char)2;
    t18 = (unsigned char)3;

LAB16:    if (t17 <= t18)
        goto LAB17;

LAB19:
LAB14:    t2 = (t0 + 5501);
    t15 = *((int *)t2);
    t4 = (t0 + 5505);
    t16 = *((int *)t4);
    if (t15 == t16)
        goto LAB15;

LAB25:    t20 = (t15 + 1);
    t15 = t20;
    t8 = (t0 + 5501);
    *((int *)t8) = t15;
    goto LAB12;

LAB17:    xsi_set_current_line(57, ng0);
    t8 = (t0 + 5509);
    t9 = (t0 + 3504);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = *((unsigned char *)t8);
    xsi_driver_first_trans_fast(t9);
    xsi_set_current_line(58, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2800);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB18:    t2 = (t0 + 5509);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5510);
    t18 = *((unsigned char *)t4);
    if (t17 == t18)
        goto LAB19;

LAB24:    t19 = (t17 + (unsigned char)1);
    t17 = t19;
    t8 = (t0 + 5509);
    *((unsigned char *)t8) = t17;
    goto LAB16;

LAB20:    goto LAB18;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB27:    goto LAB2;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

}


extern void work_a_2934360623_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2934360623_2372691052_p_0};
	xsi_register_didat("work_a_2934360623_2372691052", "isim/X_tb_isim_beh.exe.sim/work/a_2934360623_2372691052.didat");
	xsi_register_executes(pe);
}
