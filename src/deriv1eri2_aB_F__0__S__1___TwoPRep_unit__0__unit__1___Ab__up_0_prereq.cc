/*
 *  Copyright (C) 2004-2021 Edward F. Valeev
 *
 *  This file is part of Libint.
 *
 *  Libint is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint.  If not, see <http://www.gnu.org/licenses/>.
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
void deriv1eri2_aB_F__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp144;
fp144 = 1.0000000000000000e+00 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp172;
fp172 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp114;
fp114 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp113;
fp113 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi] - fp114;
LIBINT2_REALTYPE fp112;
fp112 = fp172 * fp113;
LIBINT2_REALTYPE fp89;
fp89 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_z[vi] * fp89;
LIBINT2_REALTYPE fp106;
fp106 = fp107 + fp112;
LIBINT2_REALTYPE fp118;
fp118 = inteval->two_alpha0_bra[vi] * fp106;
LIBINT2_REALTYPE fp117;
fp117 = fp118 - fp144;
LIBINT2_REALTYPE fp161;
fp161 = inteval->WP_x[vi] * fp117;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_y[vi] * fp161;
LIBINT2_REALTYPE fp29;
fp29 = fp30;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+29)*1+lsi)*1]),&(fp29),1);
LIBINT2_REALTYPE fp137;
fp137 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp125;
fp125 = 2.0000000000000000e+00 * fp137;
LIBINT2_REALTYPE fp156;
fp156 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp105;
fp105 = inteval->WP_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp122;
fp122 = inteval->roz[vi] * fp105;
LIBINT2_REALTYPE fp121;
fp121 = fp137 - fp122;
LIBINT2_REALTYPE fp120;
fp120 = fp156 * fp121;
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_z[vi] * fp106;
LIBINT2_REALTYPE fp119;
fp119 = fp123 + fp120;
LIBINT2_REALTYPE fp126;
fp126 = inteval->two_alpha0_bra[vi] * fp119;
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * fp124;
LIBINT2_REALTYPE fp28;
fp28 = fp31;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+28)*1+lsi)*1]),&(fp28),1);
LIBINT2_REALTYPE fp32;
fp32 = inteval->WP_x[vi] * fp124;
LIBINT2_REALTYPE fp27;
fp27 = fp32;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+27)*1+lsi)*1]),&(fp27),1);
LIBINT2_REALTYPE fp171;
fp171 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp170;
fp170 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp171;
LIBINT2_REALTYPE fp169;
fp169 = fp172 * fp170;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp167;
fp167 = inteval->WP_y[vi] * fp138;
LIBINT2_REALTYPE fp166;
fp166 = fp167 + fp169;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * fp166;
LIBINT2_REALTYPE fp150;
fp150 = inteval->roz[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp149;
fp149 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi] - fp150;
LIBINT2_REALTYPE fp148;
fp148 = fp172 * fp149;
LIBINT2_REALTYPE fp108;
fp108 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_y[vi] * fp108;
LIBINT2_REALTYPE fp141;
fp141 = fp142 + fp148;
LIBINT2_REALTYPE fp62;
fp62 = inteval->roz[vi] * fp141;
LIBINT2_REALTYPE fp61;
fp61 = fp166 - fp62;
LIBINT2_REALTYPE fp47;
fp47 = fp172 * fp61;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WP_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * fp92;
LIBINT2_REALTYPE fp109;
fp109 = fp110 + fp112;
LIBINT2_REALTYPE fp175;
fp175 = inteval->WP_z[vi] * fp109;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_z[vi] * fp175;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * fp46;
LIBINT2_REALTYPE fp33;
fp33 = fp50 - fp83;
LIBINT2_REALTYPE fp26;
fp26 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp176;
fp176 = inteval->WP_x[vi] * fp109;
LIBINT2_REALTYPE fp77;
fp77 = inteval->WP_z[vi] * fp176;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_bra[vi] * fp77;
LIBINT2_REALTYPE fp25;
fp25 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp146;
fp146 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp173;
fp173 = inteval->WP_x[vi] * fp146;
LIBINT2_REALTYPE fp168;
fp168 = fp173 + fp169;
LIBINT2_REALTYPE fp56;
fp56 = 1.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp116;
fp116 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_3[vi];
LIBINT2_REALTYPE fp151;
fp151 = inteval->WP_x[vi] * fp116;
LIBINT2_REALTYPE fp147;
fp147 = fp151 + fp148;
LIBINT2_REALTYPE fp99;
fp99 = inteval->roz[vi] * fp147;
LIBINT2_REALTYPE fp98;
fp98 = fp168 - fp99;
LIBINT2_REALTYPE fp80;
fp80 = fp172 * fp98;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_4[vi];
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_x[vi] * fp95;
LIBINT2_REALTYPE fp111;
fp111 = fp115 + fp112;
LIBINT2_REALTYPE fp177;
fp177 = inteval->WP_z[vi] * fp111;
LIBINT2_REALTYPE fp73;
fp73 = inteval->WP_z[vi] * fp177;
LIBINT2_REALTYPE fp72;
fp72 = fp73 + fp80;
LIBINT2_REALTYPE fp76;
fp76 = inteval->two_alpha0_bra[vi] * fp72;
LIBINT2_REALTYPE fp34;
fp34 = fp76 - fp56;
LIBINT2_REALTYPE fp24;
fp24 = fp34;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp178;
fp178 = inteval->WP_y[vi] * fp111;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_z[vi] * fp178;
LIBINT2_REALTYPE fp54;
fp54 = inteval->two_alpha0_bra[vi] * fp68;
LIBINT2_REALTYPE fp23;
fp23 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_z[vi] * fp137;
LIBINT2_REALTYPE fp164;
fp164 = fp165 + fp169;
LIBINT2_REALTYPE fp41;
fp41 = 3.0000000000000000e+00 * fp164;
LIBINT2_REALTYPE fp100;
fp100 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp140;
fp140 = inteval->WP_z[vi] * fp105;
LIBINT2_REALTYPE fp139;
fp139 = fp140 + fp148;
LIBINT2_REALTYPE fp38;
fp38 = inteval->roz[vi] * fp139;
LIBINT2_REALTYPE fp37;
fp37 = fp164 - fp38;
LIBINT2_REALTYPE fp36;
fp36 = fp100 * fp37;
LIBINT2_REALTYPE fp39;
fp39 = inteval->WP_z[vi] * fp119;
LIBINT2_REALTYPE fp35;
fp35 = fp39 + fp36;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * fp35;
LIBINT2_REALTYPE fp40;
fp40 = fp42 - fp41;
LIBINT2_REALTYPE fp22;
fp22 = fp40;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp132;
fp132 = inteval->roz[vi] * fp108;
LIBINT2_REALTYPE fp131;
fp131 = fp138 - fp132;
LIBINT2_REALTYPE fp130;
fp130 = fp156 * fp131;
LIBINT2_REALTYPE fp133;
fp133 = inteval->WP_y[vi] * fp109;
LIBINT2_REALTYPE fp129;
fp129 = fp133 + fp130;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * fp129;
LIBINT2_REALTYPE fp43;
fp43 = inteval->two_alpha0_bra[vi] * fp51;
LIBINT2_REALTYPE fp21;
fp21 = fp43;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp155;
fp155 = inteval->roz[vi] * fp116;
LIBINT2_REALTYPE fp154;
fp154 = fp146 - fp155;
LIBINT2_REALTYPE fp153;
fp153 = fp156 * fp154;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_x[vi] * fp111;
LIBINT2_REALTYPE fp152;
fp152 = fp157 + fp153;
LIBINT2_REALTYPE fp85;
fp85 = inteval->WP_z[vi] * fp152;
LIBINT2_REALTYPE fp44;
fp44 = inteval->two_alpha0_bra[vi] * fp85;
LIBINT2_REALTYPE fp20;
fp20 = fp44;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp128;
fp128 = inteval->two_alpha0_bra[vi] * fp109;
LIBINT2_REALTYPE fp127;
fp127 = fp128 - fp144;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_x[vi] * fp127;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_z[vi] * fp162;
LIBINT2_REALTYPE fp19;
fp19 = fp45;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * fp164;
LIBINT2_REALTYPE fp49;
fp49 = fp50 - fp75;
LIBINT2_REALTYPE fp18;
fp18 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp174;
fp174 = inteval->WP_x[vi] * fp106;
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_y[vi] * fp174;
LIBINT2_REALTYPE fp71;
fp71 = inteval->two_alpha0_bra[vi] * fp70;
LIBINT2_REALTYPE fp17;
fp17 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp135;
fp135 = 2.0000000000000000e+00 * fp138;
LIBINT2_REALTYPE fp136;
fp136 = inteval->two_alpha0_bra[vi] * fp129;
LIBINT2_REALTYPE fp134;
fp134 = fp136 - fp135;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * fp134;
LIBINT2_REALTYPE fp16;
fp16 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp53;
fp53 = inteval->WP_x[vi] * fp134;
LIBINT2_REALTYPE fp15;
fp15 = fp53;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp14;
fp14 = fp54;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp81;
fp81 = inteval->WP_y[vi] * fp178;
LIBINT2_REALTYPE fp79;
fp79 = fp81 + fp80;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_bra[vi] * fp79;
LIBINT2_REALTYPE fp55;
fp55 = fp84 - fp56;
LIBINT2_REALTYPE fp13;
fp13 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_y[vi] * fp119;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha0_bra[vi] * fp57;
LIBINT2_REALTYPE fp12;
fp12 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * fp166;
LIBINT2_REALTYPE fp60;
fp60 = fp100 * fp61;
LIBINT2_REALTYPE fp63;
fp63 = inteval->WP_y[vi] * fp129;
LIBINT2_REALTYPE fp59;
fp59 = fp63 + fp60;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_bra[vi] * fp59;
LIBINT2_REALTYPE fp64;
fp64 = fp66 - fp65;
LIBINT2_REALTYPE fp11;
fp11 = fp64;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp87;
fp87 = inteval->WP_y[vi] * fp152;
LIBINT2_REALTYPE fp67;
fp67 = inteval->two_alpha0_bra[vi] * fp87;
LIBINT2_REALTYPE fp10;
fp10 = fp67;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp145;
fp145 = inteval->two_alpha0_bra[vi] * fp111;
LIBINT2_REALTYPE fp143;
fp143 = fp145 - fp144;
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_y[vi] * fp143;
LIBINT2_REALTYPE fp69;
fp69 = inteval->WP_z[vi] * fp163;
LIBINT2_REALTYPE fp9;
fp9 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp8;
fp8 = fp71;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
LIBINT2_REALTYPE fp7;
fp7 = fp74;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp6;
fp6 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp5;
fp5 = fp82;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp159;
fp159 = 2.0000000000000000e+00 * fp146;
LIBINT2_REALTYPE fp160;
fp160 = inteval->two_alpha0_bra[vi] * fp152;
LIBINT2_REALTYPE fp158;
fp158 = fp160 - fp159;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * fp158;
LIBINT2_REALTYPE fp4;
fp4 = fp86;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp88;
fp88 = inteval->WP_y[vi] * fp158;
LIBINT2_REALTYPE fp3;
fp3 = fp88;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp90;
fp90 = inteval->WP_x[vi] * fp119;
LIBINT2_REALTYPE fp91;
fp91 = inteval->two_alpha0_bra[vi] * fp90;
LIBINT2_REALTYPE fp2;
fp2 = fp91;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp93;
fp93 = inteval->WP_x[vi] * fp129;
LIBINT2_REALTYPE fp94;
fp94 = inteval->two_alpha0_bra[vi] * fp93;
LIBINT2_REALTYPE fp1;
fp1 = fp94;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp103;
fp103 = 3.0000000000000000e+00 * fp168;
LIBINT2_REALTYPE fp97;
fp97 = fp100 * fp98;
LIBINT2_REALTYPE fp101;
fp101 = inteval->WP_x[vi] * fp152;
LIBINT2_REALTYPE fp96;
fp96 = fp101 + fp97;
LIBINT2_REALTYPE fp104;
fp104 = inteval->two_alpha0_bra[vi] * fp96;
LIBINT2_REALTYPE fp102;
fp102 = fp104 - fp103;
LIBINT2_REALTYPE fp0;
fp0 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*10+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 179 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
