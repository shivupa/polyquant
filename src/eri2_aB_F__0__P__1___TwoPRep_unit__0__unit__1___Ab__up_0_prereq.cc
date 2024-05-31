/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <GenericContract.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri2_aB_F__0__P__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp107;
fp107 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp102;
fp102 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_minus(inteval->roz[vi], fp101, fp102);
LIBINT2_REALTYPE fp104;
fp104 = fp107 * fp105;
LIBINT2_REALTYPE fp137;
fp137 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp136;
LIBINT2_REALTYPE fp135;
fp135 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi]);
LIBINT2_REALTYPE fp134;
fp134 = fp137 * fp135;
LIBINT2_REALTYPE fp120;
fp120 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp138;
LIBINT2_REALTYPE fp133;
fp133 = libint2::fma_minus(inteval->WP_x[vi], fp120, fp134);
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_minus(inteval->WP_x[vi], fp133, fp104);
LIBINT2_REALTYPE fp100;
fp100 = inteval->WQ_y[vi] * fp103;
LIBINT2_REALTYPE fp1;
fp1 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->WQ_z[vi] * fp103;
LIBINT2_REALTYPE fp2;
fp2 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_minus(inteval->roz[vi], fp91, fp92);
LIBINT2_REALTYPE fp94;
fp94 = fp107 * fp95;
LIBINT2_REALTYPE fp119;
fp119 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp128;
LIBINT2_REALTYPE fp127;
fp127 = libint2::fma_minus(inteval->WP_y[vi], fp119, fp134);
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->WP_y[vi], fp127, fp94);
LIBINT2_REALTYPE fp98;
fp98 = inteval->WQ_x[vi] * fp93;
LIBINT2_REALTYPE fp3;
fp3 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp116;
fp116 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_minus(inteval->roz[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi], inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi]);
LIBINT2_REALTYPE fp110;
fp110 = fp137 * fp111;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->WP_y[vi], fp91, fp110);
LIBINT2_REALTYPE fp89;
fp89 = fp116 * fp86;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->WQ_y[vi], fp93, fp89);
LIBINT2_REALTYPE fp4;
fp4 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp85;
fp85 = inteval->WQ_z[vi] * fp93;
LIBINT2_REALTYPE fp5;
fp5 = fp85;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_minus(inteval->roz[vi], fp77, fp78);
LIBINT2_REALTYPE fp80;
fp80 = fp107 * fp81;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_minus(inteval->WP_z[vi], fp118, fp134);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_minus(inteval->WP_z[vi], fp121, fp80);
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_x[vi] * fp79;
LIBINT2_REALTYPE fp6;
fp6 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_y[vi] * fp79;
LIBINT2_REALTYPE fp7;
fp7 = fp76;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_minus(inteval->WP_z[vi], fp77, fp110);
LIBINT2_REALTYPE fp74;
fp74 = fp116 * fp71;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->WQ_z[vi], fp79, fp74);
LIBINT2_REALTYPE fp8;
fp8 = fp73;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp142;
fp142 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp142 * fp101;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp140;
fp140 = libint2::fma_plus(inteval->WQ_x[vi], fp133, fp141);
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * fp140;
LIBINT2_REALTYPE fp9;
fp9 = fp70;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_minus(inteval->WP_x[vi], fp101, fp110);
LIBINT2_REALTYPE fp64;
fp64 = fp68 * fp109;
LIBINT2_REALTYPE fp139;
fp139 = inteval->WQ_y[vi] * fp133;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->WP_y[vi], fp139, fp64);
LIBINT2_REALTYPE fp10;
fp10 = fp63;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp149;
fp149 = inteval->WQ_z[vi] * fp133;
LIBINT2_REALTYPE fp62;
fp62 = inteval->WP_y[vi] * fp149;
LIBINT2_REALTYPE fp11;
fp11 = fp62;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * fp140;
LIBINT2_REALTYPE fp12;
fp12 = fp61;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * fp139;
LIBINT2_REALTYPE fp13;
fp13 = fp60;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->WP_z[vi], fp149, fp64);
LIBINT2_REALTYPE fp14;
fp14 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp115;
fp115 = fp116 * fp109;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->WQ_x[vi], fp103, fp115);
LIBINT2_REALTYPE fp0;
fp0 = fp114;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+0)*1+lsi)*1]),&(fp0),1);
LIBINT2_REALTYPE fp130;
fp130 = fp142 * fp91;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->WQ_y[vi], fp127, fp130);
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_x[vi] * fp129;
LIBINT2_REALTYPE fp16;
fp16 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_z[vi] * fp127;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_x[vi] * fp148;
LIBINT2_REALTYPE fp17;
fp17 = fp51;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->WQ_x[vi] * fp127;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_z[vi] * fp132;
LIBINT2_REALTYPE fp18;
fp18 = fp50;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp49;
fp49 = inteval->WP_z[vi] * fp129;
LIBINT2_REALTYPE fp19;
fp19 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp56;
fp56 = fp68 * fp86;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->WP_z[vi], fp148, fp56);
LIBINT2_REALTYPE fp20;
fp20 = fp47;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp45;
fp45 = fp68 * fp71;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WQ_x[vi] * fp121;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->WP_x[vi], fp126, fp45);
LIBINT2_REALTYPE fp21;
fp21 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp147;
fp147 = inteval->WQ_y[vi] * fp121;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_x[vi] * fp147;
LIBINT2_REALTYPE fp22;
fp22 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp124;
fp124 = fp142 * fp77;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->WQ_z[vi], fp121, fp124);
LIBINT2_REALTYPE fp42;
fp42 = inteval->WP_x[vi] * fp123;
LIBINT2_REALTYPE fp23;
fp23 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_y[vi] * fp126;
LIBINT2_REALTYPE fp24;
fp24 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->WP_y[vi], fp147, fp45);
LIBINT2_REALTYPE fp25;
fp25 = fp37;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp36;
fp36 = inteval->WP_y[vi] * fp123;
LIBINT2_REALTYPE fp26;
fp26 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp67;
fp67 = fp68 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp34;
fp34 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->WP_x[vi], fp34, fp67);
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_y[vi] * fp66;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * fp146;
LIBINT2_REALTYPE fp27;
fp27 = fp35;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp32;
fp32 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->WP_y[vi], fp32, fp67);
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * fp52;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_z[vi] * fp145;
LIBINT2_REALTYPE fp28;
fp28 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->WP_z[vi], fp30, fp67);
LIBINT2_REALTYPE fp144;
fp144 = inteval->WP_x[vi] * fp40;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * fp144;
LIBINT2_REALTYPE fp29;
fp29 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->WP_x[vi], fp132, fp56);
LIBINT2_REALTYPE fp15;
fp15 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*30+15)*1+lsi)*1]),&(fp15),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
