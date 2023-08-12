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
static const char *ng0 = "F:/UNI/projects/ise/squareRootCalculator/CAS_tb.vhd";



static void work_a_0183376493_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    unsigned char t17;
    unsigned char t18;
    unsigned char t19;

LAB0:    t1 = (t0 + 3312U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 5940);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 5941);
    *((unsigned char *)t4) = (unsigned char)3;
    t5 = (unsigned char)2;
    t6 = (unsigned char)3;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(74, ng0);

LAB34:    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(60, ng0);
    t7 = (t0 + 5940);
    t8 = (t0 + 3696);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 5942);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 5943);
    *((unsigned char *)t4) = (unsigned char)3;
    t13 = (unsigned char)2;
    t14 = (unsigned char)3;

LAB12:    if (t13 <= t14)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 5940);
    t5 = *((unsigned char *)t2);
    t4 = (t0 + 5941);
    t6 = *((unsigned char *)t4);
    if (t5 == t6)
        goto LAB11;

LAB31:    t13 = (t5 + (unsigned char)1);
    t5 = t13;
    t7 = (t0 + 5940);
    *((unsigned char *)t7) = t5;
    goto LAB8;

LAB13:    xsi_set_current_line(62, ng0);
    t7 = (t0 + 5942);
    t8 = (t0 + 3760);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5944);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 5945);
    *((unsigned char *)t4) = (unsigned char)3;
    t15 = (unsigned char)2;
    t16 = (unsigned char)3;

LAB16:    if (t15 <= t16)
        goto LAB17;

LAB19:
LAB14:    t2 = (t0 + 5942);
    t13 = *((unsigned char *)t2);
    t4 = (t0 + 5943);
    t14 = *((unsigned char *)t4);
    if (t13 == t14)
        goto LAB15;

LAB30:    t15 = (t13 + (unsigned char)1);
    t13 = t15;
    t7 = (t0 + 5942);
    *((unsigned char *)t7) = t13;
    goto LAB12;

LAB17:    xsi_set_current_line(64, ng0);
    t7 = (t0 + 5944);
    t8 = (t0 + 3824);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5946);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 5947);
    *((unsigned char *)t4) = (unsigned char)3;
    t17 = (unsigned char)2;
    t18 = (unsigned char)3;

LAB20:    if (t17 <= t18)
        goto LAB21;

LAB23:
LAB18:    t2 = (t0 + 5944);
    t15 = *((unsigned char *)t2);
    t4 = (t0 + 5945);
    t16 = *((unsigned char *)t4);
    if (t15 == t16)
        goto LAB19;

LAB29:    t17 = (t15 + (unsigned char)1);
    t15 = t17;
    t7 = (t0 + 5944);
    *((unsigned char *)t7) = t15;
    goto LAB16;

LAB21:    xsi_set_current_line(66, ng0);
    t7 = (t0 + 5946);
    t8 = (t0 + 3888);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(67, ng0);
    t3 = (50 * 1000LL);
    t2 = (t0 + 3120);
    xsi_process_wait(t2, t3);

LAB26:    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB22:    t2 = (t0 + 5946);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 5947);
    t18 = *((unsigned char *)t4);
    if (t17 == t18)
        goto LAB23;

LAB28:    t19 = (t17 + (unsigned char)1);
    t17 = t19;
    t7 = (t0 + 5946);
    *((unsigned char *)t7) = t17;
    goto LAB20;

LAB24:    goto LAB22;

LAB25:    goto LAB24;

LAB27:    goto LAB25;

LAB32:    goto LAB2;

LAB33:    goto LAB32;

LAB35:    goto LAB33;

}


extern void work_a_0183376493_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0183376493_2372691052_p_0};
	xsi_register_didat("work_a_0183376493_2372691052", "isim/CAS_tb_isim_beh.exe.sim/work/a_0183376493_2372691052.didat");
	xsi_register_executes(pe);
}
