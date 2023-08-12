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
static const char *ng0 = "F:/UNI/projects/ise/squareRootCalculator/Y_tb.vhd";



static void work_a_0375041354_2372691052_p_0(char *t0)
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
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;
    unsigned char t28;
    unsigned char t29;

LAB0:    t1 = (t0 + 4912U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 4720);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 8478);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8479);
    *((unsigned char *)t4) = (unsigned char)3;
    t5 = (unsigned char)2;
    t6 = (unsigned char)3;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(121, ng0);

LAB59:    *((char **)t1) = &&LAB60;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(91, ng0);
    t7 = (t0 + 8478);
    t8 = (t0 + 5296);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 8480);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8481);
    *((unsigned char *)t4) = (unsigned char)3;
    t13 = (unsigned char)2;
    t14 = (unsigned char)3;

LAB12:    if (t13 <= t14)
        goto LAB13;

LAB15:
LAB10:    t2 = (t0 + 8478);
    t5 = *((unsigned char *)t2);
    t4 = (t0 + 8479);
    t6 = *((unsigned char *)t4);
    if (t5 == t6)
        goto LAB11;

LAB56:    t13 = (t5 + (unsigned char)1);
    t5 = t13;
    t7 = (t0 + 8478);
    *((unsigned char *)t7) = t5;
    goto LAB8;

LAB13:    xsi_set_current_line(93, ng0);
    t7 = (t0 + 8480);
    t8 = (t0 + 5360);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(94, ng0);
    t2 = (t0 + 8482);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8483);
    *((unsigned char *)t4) = (unsigned char)3;
    t15 = (unsigned char)2;
    t16 = (unsigned char)3;

LAB16:    if (t15 <= t16)
        goto LAB17;

LAB19:
LAB14:    t2 = (t0 + 8480);
    t13 = *((unsigned char *)t2);
    t4 = (t0 + 8481);
    t14 = *((unsigned char *)t4);
    if (t13 == t14)
        goto LAB15;

LAB55:    t15 = (t13 + (unsigned char)1);
    t13 = t15;
    t7 = (t0 + 8480);
    *((unsigned char *)t7) = t13;
    goto LAB12;

LAB17:    xsi_set_current_line(95, ng0);
    t7 = (t0 + 8482);
    t8 = (t0 + 5424);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(96, ng0);
    t2 = (t0 + 8484);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8485);
    *((unsigned char *)t4) = (unsigned char)3;
    t17 = (unsigned char)2;
    t18 = (unsigned char)3;

LAB20:    if (t17 <= t18)
        goto LAB21;

LAB23:
LAB18:    t2 = (t0 + 8482);
    t15 = *((unsigned char *)t2);
    t4 = (t0 + 8483);
    t16 = *((unsigned char *)t4);
    if (t15 == t16)
        goto LAB19;

LAB54:    t17 = (t15 + (unsigned char)1);
    t15 = t17;
    t7 = (t0 + 8482);
    *((unsigned char *)t7) = t15;
    goto LAB16;

LAB21:    xsi_set_current_line(97, ng0);
    t7 = (t0 + 8484);
    t8 = (t0 + 5488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 8486);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8487);
    *((unsigned char *)t4) = (unsigned char)3;
    t19 = (unsigned char)2;
    t20 = (unsigned char)3;

LAB24:    if (t19 <= t20)
        goto LAB25;

LAB27:
LAB22:    t2 = (t0 + 8484);
    t17 = *((unsigned char *)t2);
    t4 = (t0 + 8485);
    t18 = *((unsigned char *)t4);
    if (t17 == t18)
        goto LAB23;

LAB53:    t19 = (t17 + (unsigned char)1);
    t17 = t19;
    t7 = (t0 + 8484);
    *((unsigned char *)t7) = t17;
    goto LAB20;

LAB25:    xsi_set_current_line(99, ng0);
    t7 = (t0 + 8486);
    t8 = (t0 + 5552);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 8488);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8489);
    *((unsigned char *)t4) = (unsigned char)3;
    t21 = (unsigned char)2;
    t22 = (unsigned char)3;

LAB28:    if (t21 <= t22)
        goto LAB29;

LAB31:
LAB26:    t2 = (t0 + 8486);
    t19 = *((unsigned char *)t2);
    t4 = (t0 + 8487);
    t20 = *((unsigned char *)t4);
    if (t19 == t20)
        goto LAB27;

LAB52:    t21 = (t19 + (unsigned char)1);
    t19 = t21;
    t7 = (t0 + 8486);
    *((unsigned char *)t7) = t19;
    goto LAB24;

LAB29:    xsi_set_current_line(101, ng0);
    t7 = (t0 + 8488);
    t8 = (t0 + 5616);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 8490);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8491);
    *((unsigned char *)t4) = (unsigned char)3;
    t23 = (unsigned char)2;
    t24 = (unsigned char)3;

LAB32:    if (t23 <= t24)
        goto LAB33;

LAB35:
LAB30:    t2 = (t0 + 8488);
    t21 = *((unsigned char *)t2);
    t4 = (t0 + 8489);
    t22 = *((unsigned char *)t4);
    if (t21 == t22)
        goto LAB31;

LAB51:    t23 = (t21 + (unsigned char)1);
    t21 = t23;
    t7 = (t0 + 8488);
    *((unsigned char *)t7) = t21;
    goto LAB28;

LAB33:    xsi_set_current_line(103, ng0);
    t7 = (t0 + 8490);
    t8 = (t0 + 5680);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 8492);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8493);
    *((unsigned char *)t4) = (unsigned char)3;
    t25 = (unsigned char)2;
    t26 = (unsigned char)3;

LAB36:    if (t25 <= t26)
        goto LAB37;

LAB39:
LAB34:    t2 = (t0 + 8490);
    t23 = *((unsigned char *)t2);
    t4 = (t0 + 8491);
    t24 = *((unsigned char *)t4);
    if (t23 == t24)
        goto LAB35;

LAB50:    t25 = (t23 + (unsigned char)1);
    t23 = t25;
    t7 = (t0 + 8490);
    *((unsigned char *)t7) = t23;
    goto LAB32;

LAB37:    xsi_set_current_line(105, ng0);
    t7 = (t0 + 8492);
    t8 = (t0 + 5744);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(106, ng0);
    t2 = (t0 + 8494);
    *((unsigned char *)t2) = (unsigned char)2;
    t4 = (t0 + 8495);
    *((unsigned char *)t4) = (unsigned char)3;
    t27 = (unsigned char)2;
    t28 = (unsigned char)3;

LAB40:    if (t27 <= t28)
        goto LAB41;

LAB43:
LAB38:    t2 = (t0 + 8492);
    t25 = *((unsigned char *)t2);
    t4 = (t0 + 8493);
    t26 = *((unsigned char *)t4);
    if (t25 == t26)
        goto LAB39;

LAB49:    t27 = (t25 + (unsigned char)1);
    t25 = t27;
    t7 = (t0 + 8492);
    *((unsigned char *)t7) = t25;
    goto LAB36;

LAB41:    xsi_set_current_line(107, ng0);
    t7 = (t0 + 8494);
    t8 = (t0 + 5808);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = *((unsigned char *)t7);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(108, ng0);
    t3 = (10 * 1000LL);
    t2 = (t0 + 4720);
    xsi_process_wait(t2, t3);

LAB46:    *((char **)t1) = &&LAB47;
    goto LAB1;

LAB42:    t2 = (t0 + 8494);
    t27 = *((unsigned char *)t2);
    t4 = (t0 + 8495);
    t28 = *((unsigned char *)t4);
    if (t27 == t28)
        goto LAB43;

LAB48:    t29 = (t27 + (unsigned char)1);
    t27 = t29;
    t7 = (t0 + 8494);
    *((unsigned char *)t7) = t27;
    goto LAB40;

LAB44:    goto LAB42;

LAB45:    goto LAB44;

LAB47:    goto LAB45;

LAB57:    goto LAB2;

LAB58:    goto LAB57;

LAB60:    goto LAB58;

}


extern void work_a_0375041354_2372691052_init()
{
	static char *pe[] = {(void *)work_a_0375041354_2372691052_p_0};
	xsi_register_didat("work_a_0375041354_2372691052", "isim/Y_tb_isim_beh.exe.sim/work/a_0375041354_2372691052.didat");
	xsi_register_executes(pe);
}
