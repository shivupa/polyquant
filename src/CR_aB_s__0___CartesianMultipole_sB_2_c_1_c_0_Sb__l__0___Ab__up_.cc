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
void CR_aB_s__0___CartesianMultipole_sB_2_c_1_c_0_Sb__l__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src1[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->BO_y[vi], fp33, fp26);
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->BO_x[vi], fp53, fp63);
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->BO_x[vi], fp43, fp53);
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->BO_x[vi], fp44, fp54);
LIBINT2_REALTYPE fp133;
fp133 = fp46 * fp27;
LIBINT2_REALTYPE fp132;
fp132 = fp133 * fp4;
target[((hsi*45+21)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_y[vi], fp26, fp20);
LIBINT2_REALTYPE fp135;
fp135 = fp46 * fp21;
LIBINT2_REALTYPE fp134;
fp134 = fp135 * fp6;
target[((hsi*45+20)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->BO_y[vi], fp34, fp33);
LIBINT2_REALTYPE fp137;
fp137 = fp46 * fp35;
LIBINT2_REALTYPE fp136;
fp136 = fp137 * fp2;
target[((hsi*45+19)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_plus(inteval->BO_y[vi], fp20, fp14);
LIBINT2_REALTYPE fp139;
fp139 = fp46 * fp15;
LIBINT2_REALTYPE fp138;
fp138 = fp139 * fp8;
target[((hsi*45+18)*1+lsi)*1] = fp138;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->BO_x[vi], fp68, fp58);
LIBINT2_REALTYPE fp69;
fp69 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->BO_x[vi], fp69, fp68);
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->BO_x[vi], fp71, fp59);
LIBINT2_REALTYPE fp141;
fp141 = fp61 * fp27;
LIBINT2_REALTYPE fp140;
fp140 = fp141 * fp3;
target[((hsi*45+17)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp70;
fp70 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->BO_x[vi], fp70, fp69);
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->BO_x[vi], fp73, fp71);
LIBINT2_REALTYPE fp143;
fp143 = fp75 * fp21;
LIBINT2_REALTYPE fp142;
fp142 = fp143 * fp3;
target[((hsi*45+16)*1+lsi)*1] = fp142;
LIBINT2_REALTYPE fp48;
fp48 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->BO_x[vi], fp58, fp48);
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->BO_x[vi], fp59, fp49);
LIBINT2_REALTYPE fp145;
fp145 = fp51 * fp35;
LIBINT2_REALTYPE fp144;
fp144 = fp145 * fp3;
target[((hsi*45+15)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_y[vi], fp17, fp23);
LIBINT2_REALTYPE fp147;
fp147 = fp61 * fp18;
LIBINT2_REALTYPE fp146;
fp146 = fp147 * fp6;
target[((hsi*45+14)*1+lsi)*1] = fp146;
LIBINT2_REALTYPE fp149;
fp149 = fp75 * fp18;
LIBINT2_REALTYPE fp148;
fp148 = fp149 * fp4;
target[((hsi*45+13)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp151;
fp151 = fp51 * fp18;
LIBINT2_REALTYPE fp150;
fp150 = fp151 * fp8;
target[((hsi*45+12)*1+lsi)*1] = fp150;
LIBINT2_REALTYPE fp78;
fp78 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->BO_x[vi], fp79, fp78);
LIBINT2_REALTYPE fp85;
fp85 = inteval->BO_x[vi] * fp82;
LIBINT2_REALTYPE fp81;
fp81 = inteval->BO_x[vi] * fp78;
LIBINT2_REALTYPE fp77;
fp77 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp80;
fp80 = fp77 + fp81;
LIBINT2_REALTYPE fp84;
fp84 = fp80 + fp85;
LIBINT2_REALTYPE fp175;
fp175 = fp84 * fp35;
LIBINT2_REALTYPE fp174;
fp174 = fp175 * fp8;
target[((hsi*45+0)*1+lsi)*1] = fp174;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->BO_x[vi], fp63, fp79);
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->BO_x[vi], fp54, fp64);
LIBINT2_REALTYPE fp155;
fp155 = fp56 * fp35;
LIBINT2_REALTYPE fp154;
fp154 = fp155 * fp4;
target[((hsi*45+10)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp157;
fp157 = fp56 * fp21;
LIBINT2_REALTYPE fp156;
fp156 = fp157 * fp8;
target[((hsi*45+9)*1+lsi)*1] = fp156;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = fp75 * fp27;
LIBINT2_REALTYPE fp158;
fp158 = fp159 * fp5;
target[((hsi*45+8)*1+lsi)*1] = fp158;
LIBINT2_REALTYPE fp161;
fp161 = fp61 * fp35;
LIBINT2_REALTYPE fp160;
fp160 = fp161 * fp5;
target[((hsi*45+7)*1+lsi)*1] = fp160;
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->BO_y[vi], fp23, fp30);
LIBINT2_REALTYPE fp163;
fp163 = fp75 * fp24;
LIBINT2_REALTYPE fp162;
fp162 = fp163 * fp6;
target[((hsi*45+6)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp165;
fp165 = fp61 * fp24;
LIBINT2_REALTYPE fp164;
fp164 = fp165 * fp8;
target[((hsi*45+5)*1+lsi)*1] = fp164;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->BO_x[vi], fp64, fp82);
LIBINT2_REALTYPE fp167;
fp167 = fp66 * fp35;
LIBINT2_REALTYPE fp166;
fp166 = fp167 * fp6;
target[((hsi*45+4)*1+lsi)*1] = fp166;
LIBINT2_REALTYPE fp169;
fp169 = fp66 * fp27;
LIBINT2_REALTYPE fp168;
fp168 = fp169 * fp8;
target[((hsi*45+3)*1+lsi)*1] = fp168;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp171;
fp171 = fp75 * fp35;
LIBINT2_REALTYPE fp170;
fp170 = fp171 * fp7;
target[((hsi*45+2)*1+lsi)*1] = fp170;
LIBINT2_REALTYPE fp32;
fp32 = inteval->BO_y[vi] * fp30;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp29 + fp32;
LIBINT2_REALTYPE fp173;
fp173 = fp75 * fp31;
LIBINT2_REALTYPE fp172;
fp172 = fp173 * fp8;
target[((hsi*45+1)*1+lsi)*1] = fp172;
LIBINT2_REALTYPE fp153;
fp153 = fp56 * fp27;
LIBINT2_REALTYPE fp152;
fp152 = fp153 * fp6;
target[((hsi*45+11)*1+lsi)*1] = fp152;
LIBINT2_REALTYPE fp87;
fp87 = fp51 * fp15;
LIBINT2_REALTYPE fp86;
fp86 = fp87 * fp2;
target[((hsi*45+44)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->BO_x[vi], fp48, fp43);
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->BO_x[vi], fp49, fp39);
LIBINT2_REALTYPE fp89;
fp89 = fp41 * fp21;
LIBINT2_REALTYPE fp88;
fp88 = fp89 * fp2;
target[((hsi*45+43)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = fp41 * fp15;
LIBINT2_REALTYPE fp90;
fp90 = fp91 * fp4;
target[((hsi*45+42)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = fp51 * fp21;
LIBINT2_REALTYPE fp92;
fp92 = fp93 * fp0;
target[((hsi*45+41)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp95;
fp95 = fp61 * fp15;
LIBINT2_REALTYPE fp94;
fp94 = fp95 * fp0;
target[((hsi*45+40)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
fp97 = fp41 * fp27;
LIBINT2_REALTYPE fp96;
fp96 = fp97 * fp0;
target[((hsi*45+39)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(inteval->BO_y[vi], fp14, fp11);
LIBINT2_REALTYPE fp99;
fp99 = fp51 * fp9;
LIBINT2_REALTYPE fp98;
fp98 = fp99 * fp4;
target[((hsi*45+38)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = fp61 * fp9;
LIBINT2_REALTYPE fp100;
fp100 = fp101 * fp2;
target[((hsi*45+37)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
fp103 = fp41 * fp9;
LIBINT2_REALTYPE fp102;
fp102 = fp103 * fp6;
target[((hsi*45+36)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
fp105 = fp75 * fp9;
LIBINT2_REALTYPE fp104;
fp104 = fp105 * fp0;
target[((hsi*45+35)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->BO_y[vi], fp11, fp17);
LIBINT2_REALTYPE fp131;
fp131 = fp41 * fp12;
LIBINT2_REALTYPE fp130;
fp130 = fp131 * fp8;
target[((hsi*45+22)*1+lsi)*1] = fp130;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_plus(inteval->BO_x[vi], fp39, fp44);
LIBINT2_REALTYPE fp109;
fp109 = fp37 * fp27;
LIBINT2_REALTYPE fp108;
fp108 = fp109 * fp2;
target[((hsi*45+33)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = fp37 * fp15;
LIBINT2_REALTYPE fp110;
fp110 = fp111 * fp6;
target[((hsi*45+32)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
fp113 = fp37 * fp35;
LIBINT2_REALTYPE fp112;
fp112 = fp113 * fp0;
target[((hsi*45+31)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
fp115 = fp37 * fp9;
LIBINT2_REALTYPE fp114;
fp114 = fp115 * fp8;
target[((hsi*45+30)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp117;
fp117 = fp61 * fp21;
LIBINT2_REALTYPE fp116;
fp116 = fp117 * fp1;
target[((hsi*45+29)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
fp119 = fp51 * fp27;
LIBINT2_REALTYPE fp118;
fp118 = fp119 * fp1;
target[((hsi*45+28)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = fp75 * fp15;
LIBINT2_REALTYPE fp120;
fp120 = fp121 * fp1;
target[((hsi*45+27)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
fp123 = fp41 * fp35;
LIBINT2_REALTYPE fp122;
fp122 = fp123 * fp1;
target[((hsi*45+26)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp125;
fp125 = fp61 * fp12;
LIBINT2_REALTYPE fp124;
fp124 = fp125 * fp4;
target[((hsi*45+25)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp127;
fp127 = fp51 * fp12;
LIBINT2_REALTYPE fp126;
fp126 = fp127 * fp6;
target[((hsi*45+24)*1+lsi)*1] = fp126;
LIBINT2_REALTYPE fp129;
fp129 = fp75 * fp12;
LIBINT2_REALTYPE fp128;
fp128 = fp129 * fp2;
target[((hsi*45+23)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp107;
fp107 = fp37 * fp21;
LIBINT2_REALTYPE fp106;
fp106 = fp107 * fp4;
target[((hsi*45+34)*1+lsi)*1] = fp106;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 176 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
