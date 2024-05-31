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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_i__0___CartesianMultipole_sB_0_c_3_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp124;
fp124 = 0.0000000000000000e+00 + src0[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = 0.0000000000000000e+00 + src1[((hsi*28+26)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
fp91 = 0.0000000000000000e+00 + src1[((hsi*28+25)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_plus(inteval->BO_y[vi], fp91, fp90);
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src1[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->BO_y[vi], fp92, fp91);
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_plus(inteval->BO_y[vi], fp95, fp93);
LIBINT2_REALTYPE fp102;
fp102 = inteval->BO_y[vi] * fp99;
LIBINT2_REALTYPE fp98;
fp98 = inteval->BO_y[vi] * fp93;
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_y[vi] * fp90;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src1[((hsi*28+27)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
fp88 = fp87 + fp89;
LIBINT2_REALTYPE fp97;
fp97 = fp88 + fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp97 + fp102;
LIBINT2_REALTYPE fp179;
fp179 = fp124 * fp101;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp6;
target[((hsi*28+1)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 0.0000000000000000e+00 + src1[((hsi*28+2)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
fp107 = 0.0000000000000000e+00 + src1[((hsi*28+1)*1+lsi)*1];
LIBINT2_REALTYPE fp110;
LIBINT2_REALTYPE fp109;
fp109 = libint2::fma_plus(inteval->BO_y[vi], fp107, fp106);
LIBINT2_REALTYPE fp108;
fp108 = 0.0000000000000000e+00 + src1[((hsi*28+0)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(inteval->BO_y[vi], fp108, fp107);
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(inteval->BO_y[vi], fp111, fp109);
LIBINT2_REALTYPE fp118;
fp118 = inteval->BO_y[vi] * fp115;
LIBINT2_REALTYPE fp114;
fp114 = inteval->BO_y[vi] * fp109;
LIBINT2_REALTYPE fp105;
fp105 = inteval->BO_y[vi] * fp106;
LIBINT2_REALTYPE fp103;
fp103 = 0.0000000000000000e+00 + src1[((hsi*28+3)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
fp104 = fp103 + fp105;
LIBINT2_REALTYPE fp113;
fp113 = fp104 + fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp113 + fp118;
LIBINT2_REALTYPE fp177;
fp177 = fp124 * fp117;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp5;
target[((hsi*28+2)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src1[((hsi*28+6)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 0.0000000000000000e+00 + src1[((hsi*28+5)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_y[vi], fp75, fp74);
LIBINT2_REALTYPE fp76;
fp76 = 0.0000000000000000e+00 + src1[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp79;
fp79 = libint2::fma_plus(inteval->BO_y[vi], fp76, fp75);
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_y[vi], fp79, fp77);
LIBINT2_REALTYPE fp86;
fp86 = inteval->BO_y[vi] * fp83;
LIBINT2_REALTYPE fp82;
fp82 = inteval->BO_y[vi] * fp77;
LIBINT2_REALTYPE fp73;
fp73 = inteval->BO_y[vi] * fp74;
LIBINT2_REALTYPE fp71;
fp71 = 0.0000000000000000e+00 + src1[((hsi*28+7)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp71 + fp73;
LIBINT2_REALTYPE fp81;
fp81 = fp72 + fp82;
LIBINT2_REALTYPE fp85;
fp85 = fp81 + fp86;
LIBINT2_REALTYPE fp123;
fp123 = 0.0000000000000000e+00 + src0[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp123 * fp85;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp6;
target[((hsi*28+3)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp173;
fp173 = fp123 * fp117;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp4;
target[((hsi*28+4)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp122;
fp122 = 0.0000000000000000e+00 + src0[((hsi*28+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*28+22)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*28+21)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_y[vi], fp59, fp58);
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src1[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->BO_y[vi], fp60, fp59);
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->BO_y[vi], fp63, fp61);
LIBINT2_REALTYPE fp70;
fp70 = inteval->BO_y[vi] * fp67;
LIBINT2_REALTYPE fp66;
fp66 = inteval->BO_y[vi] * fp61;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_y[vi] * fp58;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src1[((hsi*28+23)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp55 + fp57;
LIBINT2_REALTYPE fp65;
fp65 = fp56 + fp66;
LIBINT2_REALTYPE fp69;
fp69 = fp65 + fp70;
LIBINT2_REALTYPE fp171;
fp171 = fp122 * fp69;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp6;
target[((hsi*28+5)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp169;
fp169 = fp124 * fp69;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp4;
target[((hsi*28+6)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*28+20)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp122 * fp117;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp3;
target[((hsi*28+7)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp165;
fp165 = fp124 * fp85;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp3;
target[((hsi*28+8)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src1[((hsi*28+10)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src1[((hsi*28+9)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp42);
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src1[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp44, fp43);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_y[vi], fp47, fp45);
LIBINT2_REALTYPE fp54;
fp54 = inteval->BO_y[vi] * fp51;
LIBINT2_REALTYPE fp50;
fp50 = inteval->BO_y[vi] * fp45;
LIBINT2_REALTYPE fp41;
fp41 = inteval->BO_y[vi] * fp42;
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*28+11)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp39 + fp41;
LIBINT2_REALTYPE fp49;
fp49 = fp40 + fp50;
LIBINT2_REALTYPE fp53;
fp53 = fp49 + fp54;
LIBINT2_REALTYPE fp121;
fp121 = 0.0000000000000000e+00 + src0[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp121 * fp53;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp6;
target[((hsi*28+9)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
fp161 = fp121 * fp117;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp2;
target[((hsi*28+10)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp159;
fp159 = fp121 * fp85;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp4;
target[((hsi*28+11)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp120;
fp120 = 0.0000000000000000e+00 + src0[((hsi*28+8)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*28+18)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*28+17)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->BO_y[vi], fp27, fp26);
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_y[vi], fp28, fp27);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp31, fp29);
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_y[vi] * fp35;
LIBINT2_REALTYPE fp34;
fp34 = inteval->BO_y[vi] * fp29;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_y[vi] * fp26;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*28+19)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp23 + fp25;
LIBINT2_REALTYPE fp33;
fp33 = fp24 + fp34;
LIBINT2_REALTYPE fp37;
fp37 = fp33 + fp38;
LIBINT2_REALTYPE fp157;
fp157 = fp120 * fp37;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp6;
target[((hsi*28+12)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp155;
fp155 = fp124 * fp37;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp2;
target[((hsi*28+13)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp125;
fp125 = 0.0000000000000000e+00 + src0[((hsi*28+24)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = fp125 * fp117;
LIBINT2_REALTYPE fp180;
fp180 = fp181 * fp6;
target[((hsi*28+0)*1+lsi)*1] = fp180;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*28+16)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp120 * fp117;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp1;
target[((hsi*28+15)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp149;
fp149 = fp124 * fp53;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp1;
target[((hsi*28+16)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp147;
fp147 = fp122 * fp85;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp1;
target[((hsi*28+17)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*28+14)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*28+13)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_y[vi], fp11, fp10);
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_y[vi], fp12, fp11);
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_y[vi], fp15, fp13);
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_y[vi] * fp19;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_y[vi] * fp13;
LIBINT2_REALTYPE fp9;
fp9 = inteval->BO_y[vi] * fp10;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*28+15)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp7 + fp9;
LIBINT2_REALTYPE fp17;
fp17 = fp8 + fp18;
LIBINT2_REALTYPE fp21;
fp21 = fp17 + fp22;
LIBINT2_REALTYPE fp119;
fp119 = 0.0000000000000000e+00 + src0[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp119 * fp21;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp6;
target[((hsi*28+18)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*28+12)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp119 * fp117;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp0;
target[((hsi*28+19)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp141;
fp141 = fp119 * fp53;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp4;
target[((hsi*28+20)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp139;
fp139 = fp119 * fp85;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp2;
target[((hsi*28+21)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp137;
fp137 = fp124 * fp21;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp0;
target[((hsi*28+22)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp135;
fp135 = fp120 * fp21;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp4;
target[((hsi*28+23)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp133;
fp133 = fp122 * fp21;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
target[((hsi*28+24)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp131;
fp131 = fp120 * fp85;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp0;
target[((hsi*28+25)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp129;
fp129 = fp122 * fp53;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp0;
target[((hsi*28+26)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp127;
fp127 = fp120 * fp53;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp2;
target[((hsi*28+27)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp153;
fp153 = fp122 * fp37;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp4;
target[((hsi*28+14)*1+lsi)*1] = fp152;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 182 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
