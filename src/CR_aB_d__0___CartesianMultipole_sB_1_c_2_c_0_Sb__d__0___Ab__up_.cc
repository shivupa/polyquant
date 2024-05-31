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
void CR_aB_d__0___CartesianMultipole_sB_1_c_2_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp78);
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src1[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->BO_y[vi], fp57, fp50);
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->BO_y[vi], fp58, fp57);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_y[vi], fp60, fp53);
LIBINT2_REALTYPE fp133;
fp133 = fp80 * fp47;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp3;
target[((hsi*36+17)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp59;
fp59 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_y[vi], fp59, fp58);
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_y[vi], fp62, fp60);
LIBINT2_REALTYPE fp83;
fp83 = 0.0000000000000000e+00 + src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->BO_x[vi], fp78, fp83);
LIBINT2_REALTYPE fp135;
fp135 = fp76 * fp64;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp3;
target[((hsi*36+16)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = fp76 * fp47;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp5;
target[((hsi*36+15)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
fp139 = fp80 * fp64;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp4;
target[((hsi*36+14)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp56;
fp56 = inteval->BO_y[vi] * fp53;
LIBINT2_REALTYPE fp52;
fp52 = inteval->BO_y[vi] * fp50;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src1[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp49 + fp52;
LIBINT2_REALTYPE fp55;
fp55 = fp51 + fp56;
LIBINT2_REALTYPE fp141;
fp141 = fp80 * fp55;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp5;
target[((hsi*36+13)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp83;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
fp84 = fp82 + fp85;
LIBINT2_REALTYPE fp143;
fp143 = fp84 * fp64;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp5;
target[((hsi*36+12)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->BO_y[vi], fp38, fp31);
LIBINT2_REALTYPE fp39;
fp39 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_y[vi], fp39, fp38);
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_y[vi], fp41, fp34);
LIBINT2_REALTYPE fp145;
fp145 = fp80 * fp28;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp6;
target[((hsi*36+11)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp40;
fp40 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_y[vi], fp40, fp39);
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_y[vi], fp43, fp41);
LIBINT2_REALTYPE fp147;
fp147 = fp76 * fp45;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp6;
target[((hsi*36+10)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_x[vi] * fp93;
LIBINT2_REALTYPE fp92;
fp92 = 0.0000000000000000e+00 + src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp94;
fp94 = fp92 + fp95;
LIBINT2_REALTYPE fp167;
fp167 = fp94 * fp64;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp8;
target[((hsi*36+0)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = fp80 * fp45;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp7;
target[((hsi*36+8)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp37;
fp37 = inteval->BO_y[vi] * fp34;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_y[vi] * fp31;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp30 + fp33;
LIBINT2_REALTYPE fp36;
fp36 = fp32 + fp37;
LIBINT2_REALTYPE fp153;
fp153 = fp80 * fp36;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp8;
target[((hsi*36+7)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp84 * fp45;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp8;
target[((hsi*36+6)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->BO_x[vi], fp89, fp88);
LIBINT2_REALTYPE fp157;
fp157 = fp90 * fp47;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp6;
target[((hsi*36+5)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->BO_x[vi], fp88, fp93);
LIBINT2_REALTYPE fp159;
fp159 = fp86 * fp64;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp6;
target[((hsi*36+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp86 * fp47;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp8;
target[((hsi*36+3)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp90 * fp64;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp7;
target[((hsi*36+2)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp90 * fp55;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp8;
target[((hsi*36+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp149;
fp149 = fp76 * fp28;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp8;
target[((hsi*36+9)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_y[vi], fp19, fp12);
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->BO_y[vi], fp20, fp19);
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_y[vi], fp22, fp15);
LIBINT2_REALTYPE fp97;
fp97 = fp80 * fp9;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*36+35)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_y[vi], fp21, fp20);
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->BO_y[vi], fp24, fp22);
LIBINT2_REALTYPE fp99;
fp99 = fp76 * fp26;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp0;
target[((hsi*36+34)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = fp76 * fp9;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp2;
target[((hsi*36+33)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
fp103 = fp80 * fp26;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp1;
target[((hsi*36+32)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_y[vi] * fp15;
LIBINT2_REALTYPE fp14;
fp14 = inteval->BO_y[vi] * fp12;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp11 + fp14;
LIBINT2_REALTYPE fp17;
fp17 = fp13 + fp18;
LIBINT2_REALTYPE fp105;
fp105 = fp80 * fp17;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp2;
target[((hsi*36+31)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp84 * fp26;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp2;
target[((hsi*36+30)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp68);
LIBINT2_REALTYPE fp109;
fp109 = fp70 * fp47;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp73;
fp73 = 0.0000000000000000e+00 + src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp68, fp73);
LIBINT2_REALTYPE fp111;
fp111 = fp66 * fp64;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp75;
fp75 = inteval->BO_x[vi] * fp73;
LIBINT2_REALTYPE fp72;
fp72 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp72 + fp75;
LIBINT2_REALTYPE fp131;
fp131 = fp74 * fp26;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp8;
target[((hsi*36+18)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp115;
fp115 = fp70 * fp64;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp1;
target[((hsi*36+26)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp70 * fp55;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp2;
target[((hsi*36+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp74 * fp64;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp2;
target[((hsi*36+24)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp70 * fp9;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp6;
target[((hsi*36+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp66 * fp26;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp6;
target[((hsi*36+22)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp66 * fp9;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp8;
target[((hsi*36+21)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp70 * fp26;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp7;
target[((hsi*36+20)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp70 * fp17;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp8;
target[((hsi*36+19)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp113;
fp113 = fp66 * fp47;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp2;
target[((hsi*36+27)*1+lsi)*1] = fp112;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 168 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
