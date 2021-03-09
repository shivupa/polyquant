/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void OSVRRP0InBra_aB_p001__0__f__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp165;
fp165 = inteval->WP_x[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp166;
fp166 = inteval->PA_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = fp166 + fp165;
target[((hsi*30+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp162;
fp162 = inteval->WP_x[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = inteval->PA_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp163 + fp162;
target[((hsi*30+2)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp157;
fp157 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp156;
fp156 = fp157 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = inteval->WP_x[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
fp160 = inteval->PA_x[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
fp158 = fp160 + fp159;
LIBINT2_REALTYPE fp155;
fp155 = fp158 + fp156;
target[((hsi*30+3)*1+lsi)*1] = fp155;
LIBINT2_REALTYPE fp151;
fp151 = fp157 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = inteval->WP_x[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp154;
fp154 = inteval->PA_x[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
fp152 = fp154 + fp153;
LIBINT2_REALTYPE fp150;
fp150 = fp152 + fp151;
target[((hsi*30+4)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp146;
fp146 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp145;
fp145 = fp146 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp148;
fp148 = inteval->WP_x[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp149;
fp149 = inteval->PA_x[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp149 + fp148;
LIBINT2_REALTYPE fp144;
fp144 = fp147 + fp145;
target[((hsi*30+5)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp142;
fp142 = inteval->WP_x[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = inteval->PA_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp143 + fp142;
target[((hsi*30+6)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp137;
fp137 = fp146 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = inteval->WP_x[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
fp140 = inteval->PA_x[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp138;
fp138 = fp140 + fp139;
LIBINT2_REALTYPE fp136;
fp136 = fp138 + fp137;
target[((hsi*30+7)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = inteval->WP_x[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = inteval->PA_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp135 + fp134;
target[((hsi*30+8)*1+lsi)*1] = fp133;
LIBINT2_REALTYPE fp129;
fp129 = fp146 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
fp131 = inteval->WP_x[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp132;
fp132 = inteval->PA_x[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
LIBINT2_REALTYPE fp128;
fp128 = fp130 + fp129;
target[((hsi*30+9)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp126;
fp126 = inteval->WP_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp125;
fp125 = fp127 + fp126;
target[((hsi*30+10)*1+lsi)*1] = fp125;
LIBINT2_REALTYPE fp169;
fp169 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp169 * src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
fp123 = inteval->WP_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = inteval->PA_y[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
target[((hsi*30+11)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp118;
fp118 = inteval->WP_y[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = inteval->PA_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp119 + fp118;
target[((hsi*30+12)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp113;
fp113 = fp146 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
fp115 = inteval->WP_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
fp116 = inteval->PA_y[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
LIBINT2_REALTYPE fp112;
fp112 = fp114 + fp113;
target[((hsi*30+13)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp110;
fp110 = inteval->WP_y[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
fp111 = inteval->PA_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = fp111 + fp110;
target[((hsi*30+14)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = inteval->WP_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
fp172 = inteval->PA_x[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp170;
fp170 = fp172 + fp171;
LIBINT2_REALTYPE fp167;
fp167 = fp170 + fp168;
target[((hsi*30+0)*1+lsi)*1] = fp167;
LIBINT2_REALTYPE fp101;
fp101 = fp157 * src2[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = inteval->WP_y[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = inteval->PA_y[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
fp102 = fp104 + fp103;
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*30+16)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
fp98 = inteval->WP_y[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = inteval->PA_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp99 + fp98;
target[((hsi*30+17)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WP_y[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = inteval->PA_y[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp96 + fp95;
LIBINT2_REALTYPE fp93;
fp93 = fp94 + fp137;
target[((hsi*30+18)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp89;
fp89 = fp146 * src2[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = inteval->WP_y[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->PA_y[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
target[((hsi*30+19)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp83;
fp83 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = fp84 + fp83;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * fp82;
LIBINT2_REALTYPE fp86;
fp86 = inteval->WP_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
fp87 = inteval->PA_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = fp87 + fp86;
LIBINT2_REALTYPE fp80;
fp80 = fp85 - fp81;
target[((hsi*30+20)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp75;
fp75 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp76 + fp75;
LIBINT2_REALTYPE fp73;
fp73 = 1.0000000000000000e+00 * fp74;
LIBINT2_REALTYPE fp78;
fp78 = inteval->WP_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->PA_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
fp77 = fp79 + fp78;
LIBINT2_REALTYPE fp72;
fp72 = fp77 - fp73;
target[((hsi*30+21)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp65;
fp65 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
fp64 = fp66 + fp65;
LIBINT2_REALTYPE fp63;
fp63 = 1.0000000000000000e+00 * fp64;
LIBINT2_REALTYPE fp68;
fp68 = fp169 * src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = inteval->WP_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = inteval->PA_z[vi] * src0[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp71 + fp70;
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp62;
fp62 = fp67 - fp63;
target[((hsi*30+22)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp57;
fp57 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * fp56;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WP_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = inteval->PA_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = fp61 + fp60;
LIBINT2_REALTYPE fp54;
fp54 = fp59 - fp55;
target[((hsi*30+23)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp48;
fp48 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = 1.0000000000000000e+00 * fp47;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WP_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = inteval->PA_z[vi] * src0[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + fp113;
LIBINT2_REALTYPE fp45;
fp45 = fp50 - fp46;
target[((hsi*30+24)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp40;
fp40 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp41 + fp40;
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * fp39;
LIBINT2_REALTYPE fp43;
fp43 = inteval->WP_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = inteval->PA_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp44 + fp43;
LIBINT2_REALTYPE fp37;
fp37 = fp42 - fp38;
target[((hsi*30+25)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp31;
fp31 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * fp30;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->PA_z[vi] * src0[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp33;
fp33 = fp34 + fp145;
LIBINT2_REALTYPE fp28;
fp28 = fp33 - fp29;
target[((hsi*30+26)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp22;
fp22 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp23 + fp22;
LIBINT2_REALTYPE fp20;
fp20 = 1.0000000000000000e+00 * fp21;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->PA_z[vi] * src0[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp27 + fp26;
LIBINT2_REALTYPE fp24;
fp24 = fp25 + fp151;
LIBINT2_REALTYPE fp19;
fp19 = fp24 - fp20;
target[((hsi*30+27)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp13;
fp13 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * fp12;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = inteval->PA_z[vi] * src0[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp101;
LIBINT2_REALTYPE fp10;
fp10 = fp15 - fp11;
target[((hsi*30+28)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp3;
fp3 = inteval->alpha1_rho_over_zeta2[vi] * src4[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->rho12_over_alpha1[vi] * src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = fp146 * src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->WP_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * src0[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
LIBINT2_REALTYPE fp0;
fp0 = fp5 - fp1;
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp107;
fp107 = inteval->WP_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
fp108 = inteval->PA_y[vi] * src0[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = fp108 + fp107;
LIBINT2_REALTYPE fp105;
fp105 = fp106 + fp156;
target[((hsi*30+15)*1+lsi)*1] = fp105;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 173 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
