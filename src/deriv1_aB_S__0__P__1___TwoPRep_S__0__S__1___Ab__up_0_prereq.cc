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
void deriv1_aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0_prereq(const Libint_t* inteval, LIBINT2_REALTYPE* parent_stack) {

LIBINT2_REALTYPE*const  stack = parent_stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp108;
fp108 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp32;
fp32 = inteval->CD_z[vi] * fp106;
LIBINT2_REALTYPE fp62;
fp62 = inteval->roe[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp61;
fp61 = inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi] - fp62;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp63 * fp61;
LIBINT2_REALTYPE fp104;
fp104 = inteval->WQ_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp105;
fp105 = inteval->QC_z[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WQ_z[vi] * fp103;
LIBINT2_REALTYPE fp30;
fp30 = inteval->QC_z[vi] * fp106;
LIBINT2_REALTYPE fp28;
fp28 = fp30 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = fp28 + fp60;
LIBINT2_REALTYPE fp31;
fp31 = fp27 + fp32;
LIBINT2_REALTYPE fp33;
fp33 = inteval->two_alpha1_ket[vi] * fp31;
LIBINT2_REALTYPE fp26;
fp26 = fp33;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+26)*1+lsi)*1]),&(fp26),1);
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp112;
fp112 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
LIBINT2_REALTYPE fp151;
fp151 = inteval->WQ_z[vi] * fp110;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp115;
fp115 = inteval->QC_y[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp115 + fp114;
LIBINT2_REALTYPE fp152;
fp152 = inteval->QC_z[vi] * fp113;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
LIBINT2_REALTYPE fp35;
fp35 = inteval->CD_z[vi] * fp113;
LIBINT2_REALTYPE fp34;
fp34 = fp150 + fp35;
LIBINT2_REALTYPE fp36;
fp36 = inteval->two_alpha1_ket[vi] * fp34;
LIBINT2_REALTYPE fp25;
fp25 = fp36;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+25)*1+lsi)*1]),&(fp25),1);
LIBINT2_REALTYPE fp118;
fp118 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_2[vi];
LIBINT2_REALTYPE fp119;
fp119 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
LIBINT2_REALTYPE fp148;
fp148 = inteval->WQ_z[vi] * fp117;
LIBINT2_REALTYPE fp121;
fp121 = inteval->WQ_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp122;
fp122 = inteval->QC_x[vi] * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_0[vi];
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
LIBINT2_REALTYPE fp149;
fp149 = inteval->QC_z[vi] * fp120;
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp38;
fp38 = inteval->CD_z[vi] * fp120;
LIBINT2_REALTYPE fp37;
fp37 = fp147 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = inteval->two_alpha1_ket[vi] * fp37;
LIBINT2_REALTYPE fp24;
fp24 = fp39;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+24)*1+lsi)*1]),&(fp24),1);
LIBINT2_REALTYPE fp41;
fp41 = inteval->CD_y[vi] * fp106;
LIBINT2_REALTYPE fp40;
fp40 = fp150 + fp41;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha1_ket[vi] * fp40;
LIBINT2_REALTYPE fp23;
fp23 = fp42;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+23)*1+lsi)*1]),&(fp23),1);
LIBINT2_REALTYPE fp48;
fp48 = inteval->CD_y[vi] * fp113;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WQ_y[vi] * fp110;
LIBINT2_REALTYPE fp46;
fp46 = inteval->QC_y[vi] * fp113;
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
LIBINT2_REALTYPE fp43;
fp43 = fp44 + fp60;
LIBINT2_REALTYPE fp47;
fp47 = fp43 + fp48;
LIBINT2_REALTYPE fp49;
fp49 = inteval->two_alpha1_ket[vi] * fp47;
LIBINT2_REALTYPE fp22;
fp22 = fp49;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+22)*1+lsi)*1]),&(fp22),1);
LIBINT2_REALTYPE fp154;
fp154 = inteval->WQ_y[vi] * fp117;
LIBINT2_REALTYPE fp155;
fp155 = inteval->QC_y[vi] * fp120;
LIBINT2_REALTYPE fp153;
fp153 = fp155 + fp154;
LIBINT2_REALTYPE fp51;
fp51 = inteval->CD_y[vi] * fp120;
LIBINT2_REALTYPE fp50;
fp50 = fp153 + fp51;
LIBINT2_REALTYPE fp52;
fp52 = inteval->two_alpha1_ket[vi] * fp50;
LIBINT2_REALTYPE fp21;
fp21 = fp52;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+21)*1+lsi)*1]),&(fp21),1);
LIBINT2_REALTYPE fp54;
fp54 = inteval->CD_x[vi] * fp106;
LIBINT2_REALTYPE fp53;
fp53 = fp147 + fp54;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha1_ket[vi] * fp53;
LIBINT2_REALTYPE fp20;
fp20 = fp55;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+20)*1+lsi)*1]),&(fp20),1);
LIBINT2_REALTYPE fp57;
fp57 = inteval->CD_x[vi] * fp113;
LIBINT2_REALTYPE fp56;
fp56 = fp153 + fp57;
LIBINT2_REALTYPE fp58;
fp58 = inteval->two_alpha1_ket[vi] * fp56;
LIBINT2_REALTYPE fp19;
fp19 = fp58;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+19)*1+lsi)*1]),&(fp19),1);
LIBINT2_REALTYPE fp68;
fp68 = inteval->CD_x[vi] * fp120;
LIBINT2_REALTYPE fp65;
fp65 = inteval->WQ_x[vi] * fp117;
LIBINT2_REALTYPE fp66;
fp66 = inteval->QC_x[vi] * fp120;
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp59;
fp59 = fp64 + fp60;
LIBINT2_REALTYPE fp67;
fp67 = fp59 + fp68;
LIBINT2_REALTYPE fp69;
fp69 = inteval->two_alpha1_ket[vi] * fp67;
LIBINT2_REALTYPE fp18;
fp18 = fp69;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+18)*1+lsi)*1]),&(fp18),1);
LIBINT2_REALTYPE fp134;
fp134 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * inteval->_aB_s___0__s___1___TwoPRep_s___0__s___1___Ab__up_1[vi];
LIBINT2_REALTYPE fp136;
fp136 = inteval->WP_z[vi] * fp103;
LIBINT2_REALTYPE fp137;
fp137 = inteval->PA_z[vi] * fp106;
LIBINT2_REALTYPE fp135;
fp135 = fp137 + fp136;
LIBINT2_REALTYPE fp132;
fp132 = fp135 + fp133;
LIBINT2_REALTYPE fp71;
fp71 = inteval->AB_z[vi] * fp106;
LIBINT2_REALTYPE fp70;
fp70 = fp132 + fp71;
LIBINT2_REALTYPE fp72;
fp72 = inteval->two_alpha0_ket[vi] * fp70;
LIBINT2_REALTYPE fp17;
fp17 = fp72;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+17)*1+lsi)*1]),&(fp17),1);
LIBINT2_REALTYPE fp160;
fp160 = inteval->WP_z[vi] * fp110;
LIBINT2_REALTYPE fp161;
fp161 = inteval->PA_z[vi] * fp113;
LIBINT2_REALTYPE fp159;
fp159 = fp161 + fp160;
LIBINT2_REALTYPE fp74;
fp74 = inteval->AB_z[vi] * fp113;
LIBINT2_REALTYPE fp73;
fp73 = fp159 + fp74;
LIBINT2_REALTYPE fp75;
fp75 = inteval->two_alpha0_ket[vi] * fp73;
LIBINT2_REALTYPE fp16;
fp16 = fp75;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+16)*1+lsi)*1]),&(fp16),1);
LIBINT2_REALTYPE fp157;
fp157 = inteval->WP_z[vi] * fp117;
LIBINT2_REALTYPE fp158;
fp158 = inteval->PA_z[vi] * fp120;
LIBINT2_REALTYPE fp156;
fp156 = fp158 + fp157;
LIBINT2_REALTYPE fp77;
fp77 = inteval->AB_z[vi] * fp120;
LIBINT2_REALTYPE fp76;
fp76 = fp156 + fp77;
LIBINT2_REALTYPE fp78;
fp78 = inteval->two_alpha0_ket[vi] * fp76;
LIBINT2_REALTYPE fp15;
fp15 = fp78;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+15)*1+lsi)*1]),&(fp15),1);
LIBINT2_REALTYPE fp163;
fp163 = inteval->WP_y[vi] * fp103;
LIBINT2_REALTYPE fp164;
fp164 = inteval->PA_y[vi] * fp106;
LIBINT2_REALTYPE fp162;
fp162 = fp164 + fp163;
LIBINT2_REALTYPE fp80;
fp80 = inteval->AB_y[vi] * fp106;
LIBINT2_REALTYPE fp79;
fp79 = fp162 + fp80;
LIBINT2_REALTYPE fp81;
fp81 = inteval->two_alpha0_ket[vi] * fp79;
LIBINT2_REALTYPE fp14;
fp14 = fp81;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+14)*1+lsi)*1]),&(fp14),1);
LIBINT2_REALTYPE fp130;
fp130 = inteval->WP_y[vi] * fp110;
LIBINT2_REALTYPE fp131;
fp131 = inteval->PA_y[vi] * fp113;
LIBINT2_REALTYPE fp129;
fp129 = fp131 + fp130;
LIBINT2_REALTYPE fp128;
fp128 = fp129 + fp133;
LIBINT2_REALTYPE fp83;
fp83 = inteval->AB_y[vi] * fp113;
LIBINT2_REALTYPE fp82;
fp82 = fp128 + fp83;
LIBINT2_REALTYPE fp84;
fp84 = inteval->two_alpha0_ket[vi] * fp82;
LIBINT2_REALTYPE fp13;
fp13 = fp84;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+13)*1+lsi)*1]),&(fp13),1);
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_y[vi] * fp117;
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_y[vi] * fp120;
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
LIBINT2_REALTYPE fp86;
fp86 = inteval->AB_y[vi] * fp120;
LIBINT2_REALTYPE fp85;
fp85 = fp138 + fp86;
LIBINT2_REALTYPE fp87;
fp87 = inteval->two_alpha0_ket[vi] * fp85;
LIBINT2_REALTYPE fp12;
fp12 = fp87;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+12)*1+lsi)*1]),&(fp12),1);
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_x[vi] * fp103;
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_x[vi] * fp106;
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
LIBINT2_REALTYPE fp89;
fp89 = inteval->AB_x[vi] * fp106;
LIBINT2_REALTYPE fp88;
fp88 = fp141 + fp89;
LIBINT2_REALTYPE fp90;
fp90 = inteval->two_alpha0_ket[vi] * fp88;
LIBINT2_REALTYPE fp11;
fp11 = fp90;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+11)*1+lsi)*1]),&(fp11),1);
LIBINT2_REALTYPE fp145;
fp145 = inteval->WP_x[vi] * fp110;
LIBINT2_REALTYPE fp146;
fp146 = inteval->PA_x[vi] * fp113;
LIBINT2_REALTYPE fp144;
fp144 = fp146 + fp145;
LIBINT2_REALTYPE fp92;
fp92 = inteval->AB_x[vi] * fp113;
LIBINT2_REALTYPE fp91;
fp91 = fp144 + fp92;
LIBINT2_REALTYPE fp93;
fp93 = inteval->two_alpha0_ket[vi] * fp91;
LIBINT2_REALTYPE fp10;
fp10 = fp93;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+10)*1+lsi)*1]),&(fp10),1);
LIBINT2_REALTYPE fp125;
fp125 = inteval->WP_x[vi] * fp117;
LIBINT2_REALTYPE fp126;
fp126 = inteval->PA_x[vi] * fp120;
LIBINT2_REALTYPE fp124;
fp124 = fp126 + fp125;
LIBINT2_REALTYPE fp123;
fp123 = fp124 + fp133;
LIBINT2_REALTYPE fp95;
fp95 = inteval->AB_x[vi] * fp120;
LIBINT2_REALTYPE fp94;
fp94 = fp123 + fp95;
LIBINT2_REALTYPE fp96;
fp96 = inteval->two_alpha0_ket[vi] * fp94;
LIBINT2_REALTYPE fp9;
fp9 = fp96;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+9)*1+lsi)*1]),&(fp9),1);
LIBINT2_REALTYPE fp97;
fp97 = inteval->two_alpha0_bra[vi] * fp132;
LIBINT2_REALTYPE fp8;
fp8 = fp97;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+8)*1+lsi)*1]),&(fp8),1);
LIBINT2_REALTYPE fp98;
fp98 = inteval->two_alpha0_bra[vi] * fp159;
LIBINT2_REALTYPE fp7;
fp7 = fp98;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+7)*1+lsi)*1]),&(fp7),1);
LIBINT2_REALTYPE fp99;
fp99 = inteval->two_alpha0_bra[vi] * fp156;
LIBINT2_REALTYPE fp6;
fp6 = fp99;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+6)*1+lsi)*1]),&(fp6),1);
LIBINT2_REALTYPE fp100;
fp100 = inteval->two_alpha0_bra[vi] * fp162;
LIBINT2_REALTYPE fp5;
fp5 = fp100;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+5)*1+lsi)*1]),&(fp5),1);
LIBINT2_REALTYPE fp101;
fp101 = inteval->two_alpha0_bra[vi] * fp128;
LIBINT2_REALTYPE fp4;
fp4 = fp101;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+4)*1+lsi)*1]),&(fp4),1);
LIBINT2_REALTYPE fp102;
fp102 = inteval->two_alpha0_bra[vi] * fp138;
LIBINT2_REALTYPE fp3;
fp3 = fp102;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+3)*1+lsi)*1]),&(fp3),1);
LIBINT2_REALTYPE fp109;
fp109 = inteval->two_alpha0_bra[vi] * fp141;
LIBINT2_REALTYPE fp2;
fp2 = fp109;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+2)*1+lsi)*1]),&(fp2),1);
LIBINT2_REALTYPE fp116;
fp116 = inteval->two_alpha0_bra[vi] * fp144;
LIBINT2_REALTYPE fp1;
fp1 = fp116;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+1)*1+lsi)*1]),&(fp1),1);
LIBINT2_REALTYPE fp127;
fp127 = inteval->two_alpha0_bra[vi] * fp123;
LIBINT2_REALTYPE fp0;
fp0 = fp127;
_libint2_static_api_inc1_short_(&(stack[((hsi*3+0)*1+lsi)*1]),&(fp0),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 165 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
