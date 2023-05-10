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
void CR_aB_X2__0___Overlap_X12__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*39+0)*1+lsi)*1] = inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp179;
fp179 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp178;
fp178 = fp179 * target[((hsi*39+0)*1+lsi)*1];
LIBINT2_REALTYPE fp181;
fp181 = inteval->PB_x[vi] * target[((hsi*39+0)*1+lsi)*1];
target[((hsi*39+1)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp177;
fp177 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+1)*1+lsi)*1], fp178);
target[((hsi*39+2)*1+lsi)*1] = fp177;
LIBINT2_REALTYPE fp171;
fp171 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp170;
fp170 = fp171 * target[((hsi*39+2)*1+lsi)*1];
LIBINT2_REALTYPE fp175;
fp175 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp175 * target[((hsi*39+1)*1+lsi)*1];
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp173;
fp173 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+2)*1+lsi)*1], fp174);
target[((hsi*39+3)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp169;
fp169 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+3)*1+lsi)*1], fp170);
target[((hsi*39+4)*1+lsi)*1] = fp169;
LIBINT2_REALTYPE fp163;
fp163 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp162;
fp162 = fp163 * target[((hsi*39+4)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
fp167 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp166;
fp166 = fp167 * target[((hsi*39+3)*1+lsi)*1];
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+4)*1+lsi)*1], fp166);
target[((hsi*39+5)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp161;
fp161 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+5)*1+lsi)*1], fp162);
target[((hsi*39+6)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp155;
fp155 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp154;
fp154 = fp155 * target[((hsi*39+6)*1+lsi)*1];
LIBINT2_REALTYPE fp159;
fp159 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp158;
fp158 = fp159 * target[((hsi*39+5)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp157;
fp157 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+6)*1+lsi)*1], fp158);
target[((hsi*39+7)*1+lsi)*1] = fp157;
LIBINT2_REALTYPE fp156;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+7)*1+lsi)*1], fp154);
target[((hsi*39+8)*1+lsi)*1] = fp153;
LIBINT2_REALTYPE fp147;
fp147 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp146;
fp146 = fp147 * target[((hsi*39+8)*1+lsi)*1];
LIBINT2_REALTYPE fp151;
fp151 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp150;
fp150 = fp151 * target[((hsi*39+7)*1+lsi)*1];
LIBINT2_REALTYPE fp152;
LIBINT2_REALTYPE fp149;
fp149 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+8)*1+lsi)*1], fp150);
target[((hsi*39+9)*1+lsi)*1] = fp149;
LIBINT2_REALTYPE fp148;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+9)*1+lsi)*1], fp146);
target[((hsi*39+10)*1+lsi)*1] = fp145;
LIBINT2_REALTYPE fp143;
fp143 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp142;
fp142 = fp143 * target[((hsi*39+9)*1+lsi)*1];
LIBINT2_REALTYPE fp144;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+10)*1+lsi)*1], fp142);
target[((hsi*39+11)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp139;
fp139 = 1.1000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp138;
fp138 = fp139 * target[((hsi*39+10)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*39+11)*1+lsi)*1], fp138);
target[((hsi*39+12)*1+lsi)*1] = fp137;
LIBINT2_REALTYPE fp136;
fp136 = inteval->PA_x[vi] * target[((hsi*39+0)*1+lsi)*1];
target[((hsi*39+13)*1+lsi)*1] = fp136;
LIBINT2_REALTYPE fp134;
fp134 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp134 * target[((hsi*39+0)*1+lsi)*1];
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+1)*1+lsi)*1], fp133);
target[((hsi*39+14)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp130;
fp130 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp129;
fp129 = fp130 * target[((hsi*39+1)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+2)*1+lsi)*1], fp129);
target[((hsi*39+15)*1+lsi)*1] = fp128;
LIBINT2_REALTYPE fp126;
fp126 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp126 * target[((hsi*39+2)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+3)*1+lsi)*1], fp125);
target[((hsi*39+16)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp122;
fp122 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp121;
fp121 = fp122 * target[((hsi*39+3)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+4)*1+lsi)*1], fp121);
target[((hsi*39+17)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp118;
fp118 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp118 * target[((hsi*39+4)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+5)*1+lsi)*1], fp117);
target[((hsi*39+18)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp110;
fp110 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp109;
fp109 = fp110 * target[((hsi*39+6)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+7)*1+lsi)*1], fp109);
target[((hsi*39+20)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp106;
fp106 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp105;
fp105 = fp106 * target[((hsi*39+7)*1+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+8)*1+lsi)*1], fp105);
target[((hsi*39+21)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp102;
fp102 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp101;
fp101 = fp102 * target[((hsi*39+8)*1+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+9)*1+lsi)*1], fp101);
target[((hsi*39+22)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
fp98 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp97;
fp97 = fp98 * target[((hsi*39+9)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+10)*1+lsi)*1], fp97);
target[((hsi*39+23)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp94;
fp94 = 1.1000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp93;
fp93 = fp94 * target[((hsi*39+10)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+11)*1+lsi)*1], fp93);
target[((hsi*39+24)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp114;
fp114 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp113;
fp113 = fp114 * target[((hsi*39+5)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+6)*1+lsi)*1], fp113);
target[((hsi*39+19)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp90;
fp90 = 1.2000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp89;
fp89 = fp90 * target[((hsi*39+11)*1+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+12)*1+lsi)*1], fp89);
target[((hsi*39+25)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp9;
fp9 = 1.1000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp9 * target[((hsi*39+23)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp11;
fp11 = fp12 * target[((hsi*39+11)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+24)*1+lsi)*1], fp11);
LIBINT2_REALTYPE fp7;
fp7 = fp10 + fp8;
target[((hsi*39+37)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*39+22)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*39+10)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+23)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp14;
fp14 = fp17 + fp15;
target[((hsi*39+36)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp23;
fp23 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp23 * target[((hsi*39+21)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*39+9)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+22)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp21;
fp21 = fp24 + fp22;
target[((hsi*39+35)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp30;
fp30 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*39+20)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp33 * target[((hsi*39+8)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+21)*1+lsi)*1], fp32);
LIBINT2_REALTYPE fp28;
fp28 = fp31 + fp29;
target[((hsi*39+34)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
fp37 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp37 * target[((hsi*39+19)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp40 * target[((hsi*39+7)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+20)*1+lsi)*1], fp39);
LIBINT2_REALTYPE fp35;
fp35 = fp38 + fp36;
target[((hsi*39+33)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp44;
fp44 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp43;
fp43 = fp44 * target[((hsi*39+18)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp46;
fp46 = fp47 * target[((hsi*39+6)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+19)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp42;
fp42 = fp45 + fp43;
target[((hsi*39+32)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp51;
fp51 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp50;
fp50 = fp51 * target[((hsi*39+17)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * target[((hsi*39+5)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+18)*1+lsi)*1], fp53);
LIBINT2_REALTYPE fp49;
fp49 = fp52 + fp50;
target[((hsi*39+31)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp58;
fp58 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp57;
fp57 = fp58 * target[((hsi*39+16)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*39+4)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+17)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp56;
fp56 = fp59 + fp57;
target[((hsi*39+30)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp64;
fp64 = fp65 * target[((hsi*39+15)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp67;
fp67 = fp68 * target[((hsi*39+3)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+16)*1+lsi)*1], fp67);
LIBINT2_REALTYPE fp63;
fp63 = fp66 + fp64;
target[((hsi*39+29)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp72;
fp72 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp72 * target[((hsi*39+14)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp74;
fp74 = fp75 * target[((hsi*39+2)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+15)*1+lsi)*1], fp74);
LIBINT2_REALTYPE fp70;
fp70 = fp73 + fp71;
target[((hsi*39+28)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp78;
fp78 = fp79 * target[((hsi*39+13)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp81;
fp81 = fp82 * target[((hsi*39+1)*1+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+14)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp77;
fp77 = fp80 + fp78;
target[((hsi*39+27)*1+lsi)*1] = fp77;
LIBINT2_REALTYPE fp86;
fp86 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp85;
fp85 = fp86 * target[((hsi*39+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+13)*1+lsi)*1], fp85);
target[((hsi*39+26)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp2;
fp2 = 1.2000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*39+24)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp4;
fp4 = fp5 * target[((hsi*39+12)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*39+25)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*39+38)*1+lsi)*1] = fp0;
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
