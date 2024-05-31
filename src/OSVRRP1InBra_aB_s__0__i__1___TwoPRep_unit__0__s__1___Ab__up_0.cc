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
void OSVRRP1InBra_aB_s__0__i__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp176;
LIBINT2_REALTYPE fp175;
fp175 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+1)*1+lsi)*1], src2[((hsi*15+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp177;
fp177 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp174;
fp174 = fp177 * fp175;
LIBINT2_REALTYPE fp179;
fp179 = inteval->WQ_y[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp180;
LIBINT2_REALTYPE fp178;
fp178 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*21+1)*1+lsi)*1], fp179);
LIBINT2_REALTYPE fp173;
fp173 = fp178 - fp174;
target[((hsi*28+1)*1+lsi)*1] = fp173;
LIBINT2_REALTYPE fp168;
LIBINT2_REALTYPE fp167;
fp167 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+2)*1+lsi)*1], src2[((hsi*15+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp169;
fp169 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp166;
fp166 = fp169 * fp167;
LIBINT2_REALTYPE fp171;
fp171 = inteval->WQ_z[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp172;
LIBINT2_REALTYPE fp170;
fp170 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+2)*1+lsi)*1], fp171);
LIBINT2_REALTYPE fp165;
fp165 = fp170 - fp166;
target[((hsi*28+2)*1+lsi)*1] = fp165;
LIBINT2_REALTYPE fp163;
fp163 = inteval->WQ_y[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
LIBINT2_REALTYPE fp162;
fp162 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*21+0)*1+lsi)*1], fp163);
target[((hsi*28+3)*1+lsi)*1] = fp162;
LIBINT2_REALTYPE fp160;
fp160 = inteval->WQ_z[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp161;
LIBINT2_REALTYPE fp159;
fp159 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+0)*1+lsi)*1], fp160);
target[((hsi*28+4)*1+lsi)*1] = fp159;
LIBINT2_REALTYPE fp154;
LIBINT2_REALTYPE fp153;
fp153 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+5)*1+lsi)*1], src2[((hsi*15+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp155;
fp155 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp152;
fp152 = fp155 * fp153;
LIBINT2_REALTYPE fp157;
fp157 = inteval->WQ_y[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp158;
LIBINT2_REALTYPE fp156;
fp156 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*21+5)*1+lsi)*1], fp157);
LIBINT2_REALTYPE fp151;
fp151 = fp156 - fp152;
target[((hsi*28+5)*1+lsi)*1] = fp151;
LIBINT2_REALTYPE fp149;
fp149 = inteval->WQ_z[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+1)*1+lsi)*1], fp149);
target[((hsi*28+6)*1+lsi)*1] = fp148;
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+7)*1+lsi)*1], src2[((hsi*15+7)*1+lsi)*1]);
LIBINT2_REALTYPE fp144;
fp144 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp141;
fp141 = fp144 * fp142;
LIBINT2_REALTYPE fp146;
fp146 = inteval->WQ_z[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp145;
fp145 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+7)*1+lsi)*1], fp146);
LIBINT2_REALTYPE fp140;
fp140 = fp145 - fp141;
target[((hsi*28+7)*1+lsi)*1] = fp140;
LIBINT2_REALTYPE fp135;
LIBINT2_REALTYPE fp134;
fp134 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+8)*1+lsi)*1], src2[((hsi*15+8)*1+lsi)*1]);
LIBINT2_REALTYPE fp136;
fp136 = 4.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp133;
fp133 = fp136 * fp134;
LIBINT2_REALTYPE fp138;
fp138 = inteval->WQ_z[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp137;
fp137 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+8)*1+lsi)*1], fp138);
LIBINT2_REALTYPE fp132;
fp132 = fp137 - fp133;
target[((hsi*28+8)*1+lsi)*1] = fp132;
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+0)*1+lsi)*1], src2[((hsi*15+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp128;
fp128 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp128 * fp126;
LIBINT2_REALTYPE fp130;
fp130 = inteval->WQ_y[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*21+3)*1+lsi)*1], fp130);
LIBINT2_REALTYPE fp124;
fp124 = fp129 - fp125;
target[((hsi*28+9)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+0)*1+lsi)*1], src2[((hsi*15+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp120;
fp120 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp120 * fp118;
LIBINT2_REALTYPE fp122;
fp122 = inteval->WQ_z[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+4)*1+lsi)*1], fp122);
LIBINT2_REALTYPE fp116;
fp116 = fp121 - fp117;
target[((hsi*28+10)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp114;
fp114 = inteval->WQ_z[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+3)*1+lsi)*1], fp114);
target[((hsi*28+11)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+9)*1+lsi)*1], src2[((hsi*15+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp109;
fp109 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp106;
fp106 = fp109 * fp107;
LIBINT2_REALTYPE fp111;
fp111 = inteval->WQ_y[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*21+12)*1+lsi)*1], fp111);
LIBINT2_REALTYPE fp105;
fp105 = fp110 - fp106;
target[((hsi*28+12)*1+lsi)*1] = fp105;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+1)*1+lsi)*1], src2[((hsi*15+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp98;
fp98 = fp101 * fp99;
LIBINT2_REALTYPE fp103;
fp103 = inteval->WQ_z[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+6)*1+lsi)*1], fp103);
LIBINT2_REALTYPE fp97;
fp97 = fp102 - fp98;
target[((hsi*28+13)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp184;
LIBINT2_REALTYPE fp183;
fp183 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+0)*1+lsi)*1], src2[((hsi*15+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp185;
fp185 = 5.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp182;
fp182 = fp185 * fp183;
LIBINT2_REALTYPE fp187;
fp187 = inteval->WQ_x[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp188;
LIBINT2_REALTYPE fp186;
fp186 = libint2::fma_plus(inteval->QC_x[vi], src0[((hsi*21+0)*1+lsi)*1], fp187);
LIBINT2_REALTYPE fp181;
fp181 = fp186 - fp182;
target[((hsi*28+0)*1+lsi)*1] = fp181;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+10)*1+lsi)*1], src2[((hsi*15+10)*1+lsi)*1]);
LIBINT2_REALTYPE fp90;
fp90 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp90 * fp88;
LIBINT2_REALTYPE fp92;
fp92 = inteval->WQ_z[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+15)*1+lsi)*1], fp92);
LIBINT2_REALTYPE fp86;
fp86 = fp91 - fp87;
target[((hsi*28+15)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+11)*1+lsi)*1], src2[((hsi*15+11)*1+lsi)*1]);
LIBINT2_REALTYPE fp82;
fp82 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp79;
fp79 = fp82 * fp80;
LIBINT2_REALTYPE fp84;
fp84 = inteval->WQ_z[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+16)*1+lsi)*1], fp84);
LIBINT2_REALTYPE fp78;
fp78 = fp83 - fp79;
target[((hsi*28+16)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+14)*1+lsi)*1], src2[((hsi*15+14)*1+lsi)*1]);
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp71;
fp71 = fp74 * fp72;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WQ_z[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+17)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp70;
fp70 = fp75 - fp71;
target[((hsi*28+17)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+3)*1+lsi)*1], src2[((hsi*15+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp66;
fp66 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp66 * fp64;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WQ_y[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->QC_y[vi], src0[((hsi*21+9)*1+lsi)*1], fp68);
LIBINT2_REALTYPE fp62;
fp62 = fp67 - fp63;
target[((hsi*28+18)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+4)*1+lsi)*1], src2[((hsi*15+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp55;
fp55 = fp58 * fp56;
LIBINT2_REALTYPE fp60;
fp60 = inteval->WQ_z[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+10)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp54;
fp54 = fp59 - fp55;
target[((hsi*28+19)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp52;
fp52 = inteval->WQ_z[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+9)*1+lsi)*1], fp52);
target[((hsi*28+20)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+3)*1+lsi)*1], src2[((hsi*15+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp47 * fp45;
LIBINT2_REALTYPE fp49;
fp49 = inteval->WQ_z[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+11)*1+lsi)*1], fp49);
LIBINT2_REALTYPE fp43;
fp43 = fp48 - fp44;
target[((hsi*28+21)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+6)*1+lsi)*1], src2[((hsi*15+6)*1+lsi)*1]);
LIBINT2_REALTYPE fp39;
fp39 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp36;
fp36 = fp39 * fp37;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WQ_z[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+13)*1+lsi)*1], fp41);
LIBINT2_REALTYPE fp35;
fp35 = fp40 - fp36;
target[((hsi*28+22)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WQ_z[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+12)*1+lsi)*1], fp33);
target[((hsi*28+23)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+5)*1+lsi)*1], src2[((hsi*15+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp28;
fp28 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WQ_z[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+14)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp24;
fp24 = fp29 - fp25;
target[((hsi*28+24)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+12)*1+lsi)*1], src2[((hsi*15+12)*1+lsi)*1]);
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp20 * fp18;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WQ_z[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+19)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp16;
fp16 = fp21 - fp17;
target[((hsi*28+25)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+13)*1+lsi)*1], src2[((hsi*15+13)*1+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = 2.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp12 * fp10;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WQ_z[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+20)*1+lsi)*1], fp14);
LIBINT2_REALTYPE fp8;
fp8 = fp13 - fp9;
target[((hsi*28+26)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_minus(inteval->roe[vi], src3[((hsi*15+9)*1+lsi)*1], src2[((hsi*15+9)*1+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * inteval->oo2e[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp4 * fp2;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WQ_z[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+18)*1+lsi)*1], fp6);
LIBINT2_REALTYPE fp0;
fp0 = fp5 - fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp95;
fp95 = inteval->WQ_z[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->QC_z[vi], src0[((hsi*21+5)*1+lsi)*1], fp95);
target[((hsi*28+14)*1+lsi)*1] = fp94;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 189 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
