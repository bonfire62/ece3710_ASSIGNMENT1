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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "F:/Xilinx/ece3700_ASSGINMENT1/LED_Controller.v";
static unsigned int ng1[] = {32768U, 0U};
static unsigned int ng2[] = {24576U, 0U};
static unsigned int ng3[] = {8U, 0U};
static unsigned int ng4[] = {16379U, 0U};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {8192U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static int ng10[] = {0, 0};
static int ng11[] = {1, 0};



static void Always_26_0(char *t0)
{
    char t8[8];
    char t12[8];
    char t28[8];
    char t32[8];
    char t40[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t29;
    char *t30;
    char *t31;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    int t64;
    int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    char *t78;
    char *t79;

LAB0:    t1 = (t0 + 1800U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(26, ng0);
    t2 = (t0 + 1996);
    *((int *)t2) = 1;
    t3 = (t0 + 1828);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(26, ng0);

LAB5:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1276);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    memset(t12, 0, 8);
    t13 = (t8 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB11;

LAB12:    if (*((unsigned int *)t13) != 0)
        goto LAB13;

LAB14:    t20 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t20);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB15;

LAB16:    memcpy(t40, t12, 8);

LAB17:    t72 = (t40 + 4);
    t73 = *((unsigned int *)t72);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB35;

LAB34:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB36;

LAB37:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t10) != 0)
        goto LAB41;

LAB42:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB43;

LAB44:    memcpy(t40, t12, 8);

LAB45:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB58;

LAB59:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB63;

LAB62:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB63;

LAB66:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB64;

LAB65:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t10) != 0)
        goto LAB69;

LAB70:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB71;

LAB72:    memcpy(t40, t12, 8);

LAB73:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB86;

LAB87:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    if (*((unsigned int *)t6) != 0)
        goto LAB91;

LAB90:    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB91;

LAB94:    if (*((unsigned int *)t4) < *((unsigned int *)t5))
        goto LAB92;

LAB93:    memset(t12, 0, 8);
    t10 = (t8 + 4);
    t14 = *((unsigned int *)t10);
    t15 = (~(t14));
    t16 = *((unsigned int *)t8);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB95;

LAB96:    if (*((unsigned int *)t10) != 0)
        goto LAB97;

LAB98:    t13 = (t12 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 || t22);
    if (t23 > 0)
        goto LAB99;

LAB100:    memcpy(t40, t12, 8);

LAB101:    t54 = (t40 + 4);
    t73 = *((unsigned int *)t54);
    t74 = (~(t73));
    t75 = *((unsigned int *)t40);
    t76 = (t75 & t74);
    t77 = (t76 != 0);
    if (t77 > 0)
        goto LAB114;

LAB115:
LAB116:
LAB88:
LAB60:
LAB32:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t6);
    t18 = *((unsigned int *)t7);
    t21 = (t17 ^ t18);
    t22 = (t16 | t21);
    t23 = *((unsigned int *)t6);
    t34 = *((unsigned int *)t7);
    t35 = (t23 | t34);
    t36 = (~(t35));
    t37 = (t22 & t36);
    if (t37 != 0)
        goto LAB121;

LAB118:    if (t35 != 0)
        goto LAB120;

LAB119:    *((unsigned int *)t8) = 1;

LAB121:    t10 = (t8 + 4);
    t38 = *((unsigned int *)t10);
    t41 = (~(t38));
    t42 = *((unsigned int *)t8);
    t43 = (t42 & t41);
    t47 = (t43 != 0);
    if (t47 > 0)
        goto LAB122;

LAB123:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1276);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t8, 0, 8);
    xsi_vlog_unsigned_minus(t8, 32, t4, 16, t5, 32);
    t6 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t6, t8, 0, 0, 16, 0LL);

LAB124:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    *((unsigned int *)t12) = 1;
    goto LAB14;

LAB13:    t19 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB14;

LAB15:    t24 = (t0 + 1276);
    t25 = (t24 + 36U);
    t26 = *((char **)t25);
    t27 = ((char*)((ng2)));
    memset(t28, 0, 8);
    t29 = (t26 + 4);
    if (*((unsigned int *)t29) != 0)
        goto LAB19;

LAB18:    t30 = (t27 + 4);
    if (*((unsigned int *)t30) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t26) > *((unsigned int *)t27))
        goto LAB20;

LAB21:    memset(t32, 0, 8);
    t33 = (t28 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t33) != 0)
        goto LAB25;

LAB26:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t44 = (t12 + 4);
    t45 = (t32 + 4);
    t46 = (t40 + 4);
    t47 = *((unsigned int *)t44);
    t48 = *((unsigned int *)t45);
    t49 = (t47 | t48);
    *((unsigned int *)t46) = t49;
    t50 = *((unsigned int *)t46);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB27;

LAB28:
LAB29:    goto LAB17;

LAB19:    t31 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t28) = 1;
    goto LAB21;

LAB23:    *((unsigned int *)t32) = 1;
    goto LAB26;

LAB25:    t39 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB26;

LAB27:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t46);
    *((unsigned int *)t40) = (t52 | t53);
    t54 = (t12 + 4);
    t55 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t54);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t55);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t68 & t66);
    t69 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB29;

LAB30:    xsi_set_current_line(27, ng0);

LAB33:    xsi_set_current_line(28, ng0);
    t78 = ((char*)((ng3)));
    t79 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t79, t78, 0, 0, 4, 0LL);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 12);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 12);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 15U);
    t5 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 4, 0LL);
    goto LAB32;

LAB35:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t8) = 1;
    goto LAB37;

LAB39:    *((unsigned int *)t12) = 1;
    goto LAB42;

LAB41:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB42;

LAB43:    t19 = (t0 + 1276);
    t20 = (t19 + 36U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng4)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB47;

LAB46:    t27 = (t25 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB47;

LAB50:    if (*((unsigned int *)t24) > *((unsigned int *)t25))
        goto LAB48;

LAB49:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB51;

LAB52:    if (*((unsigned int *)t30) != 0)
        goto LAB53;

LAB54:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB55;

LAB56:
LAB57:    goto LAB45;

LAB47:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB49;

LAB48:    *((unsigned int *)t28) = 1;
    goto LAB49;

LAB51:    *((unsigned int *)t32) = 1;
    goto LAB54;

LAB53:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB54;

LAB55:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB57;

LAB58:    xsi_set_current_line(31, ng0);

LAB61:    xsi_set_current_line(32, ng0);
    t55 = ((char*)((ng5)));
    t72 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t72, t55, 0, 0, 4, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 8);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 8);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 15U);
    t5 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 4, 0LL);
    goto LAB60;

LAB63:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB65;

LAB64:    *((unsigned int *)t8) = 1;
    goto LAB65;

LAB67:    *((unsigned int *)t12) = 1;
    goto LAB70;

LAB69:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB70;

LAB71:    t19 = (t0 + 1276);
    t20 = (t19 + 36U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng6)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB75;

LAB74:    t27 = (t25 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB75;

LAB78:    if (*((unsigned int *)t24) > *((unsigned int *)t25))
        goto LAB76;

LAB77:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t30) != 0)
        goto LAB81;

LAB82:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB83;

LAB84:
LAB85:    goto LAB73;

LAB75:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB77;

LAB76:    *((unsigned int *)t28) = 1;
    goto LAB77;

LAB79:    *((unsigned int *)t32) = 1;
    goto LAB82;

LAB81:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB82;

LAB83:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB85;

LAB86:    xsi_set_current_line(35, ng0);

LAB89:    xsi_set_current_line(36, ng0);
    t55 = ((char*)((ng7)));
    t72 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t72, t55, 0, 0, 4, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 4);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 4);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 15U);
    t5 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 4, 0LL);
    goto LAB88;

LAB91:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB93;

LAB92:    *((unsigned int *)t8) = 1;
    goto LAB93;

LAB95:    *((unsigned int *)t12) = 1;
    goto LAB98;

LAB97:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB98;

LAB99:    t19 = (t0 + 1276);
    t20 = (t19 + 36U);
    t24 = *((char **)t20);
    t25 = ((char*)((ng8)));
    memset(t28, 0, 8);
    t26 = (t24 + 4);
    if (*((unsigned int *)t26) != 0)
        goto LAB103;

LAB102:    t27 = (t25 + 4);
    if (*((unsigned int *)t27) != 0)
        goto LAB103;

LAB106:    if (*((unsigned int *)t24) > *((unsigned int *)t25))
        goto LAB104;

LAB105:    memset(t32, 0, 8);
    t30 = (t28 + 4);
    t34 = *((unsigned int *)t30);
    t35 = (~(t34));
    t36 = *((unsigned int *)t28);
    t37 = (t36 & t35);
    t38 = (t37 & 1U);
    if (t38 != 0)
        goto LAB107;

LAB108:    if (*((unsigned int *)t30) != 0)
        goto LAB109;

LAB110:    t41 = *((unsigned int *)t12);
    t42 = *((unsigned int *)t32);
    t43 = (t41 & t42);
    *((unsigned int *)t40) = t43;
    t33 = (t12 + 4);
    t39 = (t32 + 4);
    t44 = (t40 + 4);
    t47 = *((unsigned int *)t33);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 != 0);
    if (t51 == 1)
        goto LAB111;

LAB112:
LAB113:    goto LAB101;

LAB103:    t29 = (t28 + 4);
    *((unsigned int *)t28) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB105;

LAB104:    *((unsigned int *)t28) = 1;
    goto LAB105;

LAB107:    *((unsigned int *)t32) = 1;
    goto LAB110;

LAB109:    t31 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB110;

LAB111:    t52 = *((unsigned int *)t40);
    t53 = *((unsigned int *)t44);
    *((unsigned int *)t40) = (t52 | t53);
    t45 = (t12 + 4);
    t46 = (t32 + 4);
    t56 = *((unsigned int *)t12);
    t57 = (~(t56));
    t58 = *((unsigned int *)t45);
    t59 = (~(t58));
    t60 = *((unsigned int *)t32);
    t61 = (~(t60));
    t62 = *((unsigned int *)t46);
    t63 = (~(t62));
    t64 = (t57 & t59);
    t65 = (t61 & t63);
    t66 = (~(t64));
    t67 = (~(t65));
    t68 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t68 & t66);
    t69 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t69 & t67);
    t70 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t70 & t66);
    t71 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t71 & t67);
    goto LAB113;

LAB114:    xsi_set_current_line(39, ng0);

LAB117:    xsi_set_current_line(40, ng0);
    t55 = ((char*)((ng9)));
    t72 = (t0 + 1092);
    xsi_vlogvar_wait_assign_value(t72, t55, 0, 0, 4, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    memset(t8, 0, 8);
    t2 = (t8 + 4);
    t4 = (t3 + 4);
    t14 = *((unsigned int *)t3);
    t15 = (t14 >> 0);
    *((unsigned int *)t8) = t15;
    t16 = *((unsigned int *)t4);
    t17 = (t16 >> 0);
    *((unsigned int *)t2) = t17;
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 15U);
    t21 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t21 & 15U);
    t5 = (t0 + 1184);
    xsi_vlogvar_wait_assign_value(t5, t8, 0, 0, 4, 0LL);
    goto LAB116;

LAB120:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB121;

LAB122:    xsi_set_current_line(45, ng0);
    t11 = ((char*)((ng1)));
    t13 = (t0 + 1276);
    xsi_vlogvar_wait_assign_value(t13, t11, 0, 0, 16, 0LL);
    goto LAB124;

}


extern void work_m_00000000002340788483_0947108277_init()
{
	static char *pe[] = {(void *)Always_26_0};
	xsi_register_didat("work_m_00000000002340788483_0947108277", "isim/TOP_isim_beh.exe.sim/work/m_00000000002340788483_0947108277.didat");
	xsi_register_executes(pe);
}
