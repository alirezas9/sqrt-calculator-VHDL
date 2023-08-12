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
static const char *ng0 = "F:/UNI/projects/ise/squareRootCalculator/sqrtcalc_tb.vhd";
extern char *IEEE_P_1242562249;

char *ieee_p_1242562249_sub_180853171_1035706684(char *, char *, int , int );


static void work_a_0680375300_2372691052_p_0(char *t0)
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
    int t10;
    int t11;
    int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    t1 = (t0 + 2352U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(40, ng0);
    t2 = (t0 + 4496);
    *((int *)t2) = 1;
    t4 = (t0 + 4500);
    *((int *)t4) = 127;
    t5 = 1;
    t6 = 127;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(45, ng0);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(41, ng0);
    t8 = (t0 + 4496);
    t9 = (t0 + 4496);
    t10 = *((int *)t8);
    t11 = *((int *)t9);
    t12 = (t10 * t11);
    t13 = ieee_p_1242562249_sub_180853171_1035706684(IEEE_P_1242562249, t7, t12, 16);
    t14 = (t0 + 2736);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t13, 16U);
    xsi_driver_first_trans_fast(t14);
    xsi_set_current_line(42, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 2160);
    xsi_process_wait(t2, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 4496);
    t5 = *((int *)t2);
    t4 = (t0 + 4500);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB11;

LAB16:    t10 = (t5 + 1);
    t5 = t10;
    t8 = (t0 + 4496);
    *((int *)t8) = t5;
    goto LAB8;

LAB12:    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    goto LAB2;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

}


extern void work_a_0680375300_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0680375300_2372691052_p_0};
	xsi_register_didat("work_a_0680375300_2372691052", "isim/sqrtcalc_tb_isim_beh.exe.sim/work/a_0680375300_2372691052.didat");
	xsi_register_executes(pe);
}
