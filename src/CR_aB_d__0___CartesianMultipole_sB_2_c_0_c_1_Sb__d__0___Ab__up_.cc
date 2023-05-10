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
void CR_aB_d__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp13);
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
fp60 = 0.0000000000000000e+00 + src0[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->BO_x[vi], fp60, fp70);
LIBINT2_REALTYPE fp61;
fp61 = 0.0000000000000000e+00 + src0[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp61, fp60);
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp64, fp62);
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src1[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
fp133 = fp66 * fp36;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp10;
target[((hsi*36+17)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp38;
fp38 = 0.0000000000000000e+00 + src1[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp69);
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->BO_x[vi], fp62, fp73);
LIBINT2_REALTYPE fp135;
fp135 = fp58 * fp38;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp10;
target[((hsi*36+16)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp16);
LIBINT2_REALTYPE fp137;
fp137 = fp58 * fp36;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp18;
target[((hsi*36+15)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp139;
fp139 = fp66 * fp38;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp14;
target[((hsi*36+14)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp37;
fp37 = 0.0000000000000000e+00 + src1[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp141;
fp141 = fp66 * fp37;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp18;
target[((hsi*36+13)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp76;
fp76 = inteval->BO_x[vi] * fp73;
LIBINT2_REALTYPE fp72;
fp72 = inteval->BO_x[vi] * fp69;
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*18+4)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
fp71 = fp68 + fp72;
LIBINT2_REALTYPE fp75;
fp75 = fp71 + fp76;
LIBINT2_REALTYPE fp143;
fp143 = fp75 * fp38;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp18;
target[((hsi*36+12)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src2[((hsi*18+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src2[((hsi*18+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->BO_z[vi], fp26, fp23);
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp145;
fp145 = fp66 * fp33;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp20;
target[((hsi*36+11)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp35;
fp35 = 0.0000000000000000e+00 + src1[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
fp147 = fp58 * fp35;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp20;
target[((hsi*36+10)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src2[((hsi*18+0)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_z[vi], fp27, fp26);
LIBINT2_REALTYPE fp88;
fp88 = 0.0000000000000000e+00 + src0[((hsi*18+15)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 0.0000000000000000e+00 + src0[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->BO_x[vi], fp89, fp88);
LIBINT2_REALTYPE fp95;
fp95 = inteval->BO_x[vi] * fp92;
LIBINT2_REALTYPE fp91;
fp91 = inteval->BO_x[vi] * fp88;
LIBINT2_REALTYPE fp87;
fp87 = 0.0000000000000000e+00 + src0[((hsi*18+16)*1+lsi)*1];
LIBINT2_REALTYPE fp90;
fp90 = fp87 + fp91;
LIBINT2_REALTYPE fp94;
fp94 = fp90 + fp95;
LIBINT2_REALTYPE fp167;
fp167 = fp94 * fp38;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp28;
target[((hsi*36+0)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp25;
fp25 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src2[((hsi*18+3)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp22 + fp25;
LIBINT2_REALTYPE fp151;
fp151 = fp66 * fp35;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp24;
target[((hsi*36+8)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*18+14)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
fp153 = fp66 * fp34;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp28;
target[((hsi*36+7)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp155;
fp155 = fp75 * fp35;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp28;
target[((hsi*36+6)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*18+13)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp89);
LIBINT2_REALTYPE fp80;
fp80 = 0.0000000000000000e+00 + src0[((hsi*18+12)*1+lsi)*1];
LIBINT2_REALTYPE fp84;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->BO_x[vi], fp80, fp79);
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(inteval->BO_x[vi], fp83, fp81);
LIBINT2_REALTYPE fp157;
fp157 = fp85 * fp36;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp20;
target[((hsi*36+5)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(inteval->BO_x[vi], fp81, fp92);
LIBINT2_REALTYPE fp159;
fp159 = fp77 * fp38;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp20;
target[((hsi*36+4)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp77 * fp36;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp28;
target[((hsi*36+3)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp163;
fp163 = fp85 * fp38;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp24;
target[((hsi*36+2)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp85 * fp37;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp28;
target[((hsi*36+1)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp149;
fp149 = fp58 * fp33;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp28;
target[((hsi*36+9)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp97;
fp97 = fp66 * fp30;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*36+35)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src1[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
fp99 = fp58 * fp32;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp0;
target[((hsi*36+34)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp6);
LIBINT2_REALTYPE fp101;
fp101 = fp58 * fp30;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp8;
target[((hsi*36+33)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp2 + fp5;
LIBINT2_REALTYPE fp103;
fp103 = fp66 * fp32;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp4;
target[((hsi*36+32)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src1[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = fp66 * fp31;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp8;
target[((hsi*36+31)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
fp107 = fp75 * fp32;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp8;
target[((hsi*36+30)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp51;
fp51 = 0.0000000000000000e+00 + src0[((hsi*18+8)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 0.0000000000000000e+00 + src0[((hsi*18+7)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->BO_x[vi], fp41, fp51);
LIBINT2_REALTYPE fp42;
fp42 = 0.0000000000000000e+00 + src0[((hsi*18+6)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->BO_x[vi], fp42, fp41);
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->BO_x[vi], fp45, fp43);
LIBINT2_REALTYPE fp109;
fp109 = fp47 * fp36;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp0;
target[((hsi*36+29)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp50;
fp50 = 0.0000000000000000e+00 + src0[((hsi*18+9)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp51, fp50);
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_x[vi], fp43, fp54);
LIBINT2_REALTYPE fp111;
fp111 = fp39 * fp38;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp0;
target[((hsi*36+28)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp57;
fp57 = inteval->BO_x[vi] * fp54;
LIBINT2_REALTYPE fp53;
fp53 = inteval->BO_x[vi] * fp50;
LIBINT2_REALTYPE fp49;
fp49 = 0.0000000000000000e+00 + src0[((hsi*18+10)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp49 + fp53;
LIBINT2_REALTYPE fp56;
fp56 = fp52 + fp57;
LIBINT2_REALTYPE fp131;
fp131 = fp56 * fp32;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp28;
target[((hsi*36+18)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp115;
fp115 = fp47 * fp38;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp4;
target[((hsi*36+26)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
fp117 = fp47 * fp37;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp8;
target[((hsi*36+25)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp56 * fp38;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp8;
target[((hsi*36+24)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp47 * fp30;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp20;
target[((hsi*36+23)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp39 * fp32;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp20;
target[((hsi*36+22)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp39 * fp30;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp28;
target[((hsi*36+21)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp47 * fp32;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp24;
target[((hsi*36+20)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp47 * fp31;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp28;
target[((hsi*36+19)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp113;
fp113 = fp39 * fp36;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp8;
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
