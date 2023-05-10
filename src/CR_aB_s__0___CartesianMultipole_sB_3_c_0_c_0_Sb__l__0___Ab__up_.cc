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

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void CR_aB_s__0___CartesianMultipole_sB_3_c_0_c_0_Sb__l__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->BO_x[vi], fp51, fp79);
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->BO_x[vi], fp37, fp51);
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->BO_x[vi], fp38, fp52);
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_x[vi], fp30, fp37);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_x[vi], fp24, fp38);
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_x[vi], fp26, fp40);
LIBINT2_REALTYPE fp137;
fp137 = fp28 * fp15;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp4;
target[((hsi*45+21)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp28 * fp13;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp6;
target[((hsi*45+20)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp28 * fp17;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp2;
target[((hsi*45+19)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
fp143 = fp28 * fp11;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp8;
target[((hsi*45+18)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp44);
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp61, fp58);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp45);
LIBINT2_REALTYPE fp62;
fp62 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp61);
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->BO_x[vi], fp64, fp59);
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_x[vi], fp68, fp47);
LIBINT2_REALTYPE fp145;
fp145 = fp49 * fp15;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp3;
target[((hsi*45+17)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp62);
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp66, fp64);
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp68);
LIBINT2_REALTYPE fp147;
fp147 = fp72 * fp13;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp3;
target[((hsi*45+16)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->BO_x[vi], fp44, fp30);
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp33;
fp33 = libint2::fma_plus(inteval->BO_x[vi], fp45, fp31);
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_x[vi], fp47, fp33);
LIBINT2_REALTYPE fp149;
fp149 = fp35 * fp17;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp3;
target[((hsi*45+15)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp49 * fp12;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp6;
target[((hsi*45+14)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp153;
fp153 = fp72 * fp12;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp4;
target[((hsi*45+13)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp35 * fp12;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp8;
target[((hsi*45+12)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp77);
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp78);
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp82, fp80);
LIBINT2_REALTYPE fp89;
fp89 = inteval->BO_x[vi] * fp86;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp80;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp77;
LIBINT2_REALTYPE fp74;
fp74 = 0.0000000000000000e+00 + src0[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp74 + fp76;
LIBINT2_REALTYPE fp84;
fp84 = fp75 + fp85;
LIBINT2_REALTYPE fp88;
fp88 = fp84 + fp89;
LIBINT2_REALTYPE fp179;
fp179 = fp88 * fp17;
LIBINT2_REALTYPE fp178;
fp178 = fp179 * fp8;
target[((hsi*45+0)*1+lsi)*1] = fp178;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp52, fp82);
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->BO_x[vi], fp40, fp54);
LIBINT2_REALTYPE fp159;
fp159 = fp42 * fp17;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp4;
target[((hsi*45+10)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp42 * fp13;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp8;
target[((hsi*45+9)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp163;
fp163 = fp72 * fp15;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp5;
target[((hsi*45+8)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp49 * fp17;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp5;
target[((hsi*45+7)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = fp72 * fp14;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp6;
target[((hsi*45+6)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp49 * fp14;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp8;
target[((hsi*45+5)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_x[vi], fp54, fp86);
LIBINT2_REALTYPE fp171;
fp171 = fp56 * fp17;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp6;
target[((hsi*45+4)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp173;
fp173 = fp56 * fp15;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp8;
target[((hsi*45+3)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = fp72 * fp17;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp7;
target[((hsi*45+2)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp177;
fp177 = fp72 * fp16;
LIBINT2_REALTYPE fp176;
fp176 = fp177 * fp8;
target[((hsi*45+1)*1+lsi)*1] = fp176;
LIBINT2_REALTYPE fp157;
fp157 = fp42 * fp15;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp6;
target[((hsi*45+11)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp91;
fp91 = fp35 * fp11;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp2;
target[((hsi*45+44)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_x[vi], fp31, fp24);
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_x[vi], fp33, fp20);
LIBINT2_REALTYPE fp93;
fp93 = fp22 * fp13;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp2;
target[((hsi*45+43)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp22 * fp11;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp4;
target[((hsi*45+42)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp35 * fp13;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*45+41)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
fp99 = fp49 * fp11;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp0;
target[((hsi*45+40)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp22 * fp15;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp0;
target[((hsi*45+39)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp35 * fp9;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*45+38)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp49 * fp9;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
target[((hsi*45+37)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp22 * fp9;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp6;
target[((hsi*45+36)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
fp109 = fp72 * fp9;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp0;
target[((hsi*45+35)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
fp135 = fp22 * fp10;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp8;
target[((hsi*45+22)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_x[vi], fp20, fp26);
LIBINT2_REALTYPE fp113;
fp113 = fp18 * fp15;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp2;
target[((hsi*45+33)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp18 * fp11;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp6;
target[((hsi*45+32)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp18 * fp17;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp0;
target[((hsi*45+31)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp18 * fp9;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp8;
target[((hsi*45+30)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
fp121 = fp49 * fp13;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp1;
target[((hsi*45+29)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp35 * fp15;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp1;
target[((hsi*45+28)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp72 * fp11;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp1;
target[((hsi*45+27)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp22 * fp17;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp1;
target[((hsi*45+26)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp49 * fp10;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp4;
target[((hsi*45+25)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = fp35 * fp10;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp6;
target[((hsi*45+24)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp133;
fp133 = fp72 * fp10;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp2;
target[((hsi*45+23)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp111;
fp111 = fp18 * fp13;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp4;
target[((hsi*45+34)*1+lsi)*1] = fp110;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 180 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
