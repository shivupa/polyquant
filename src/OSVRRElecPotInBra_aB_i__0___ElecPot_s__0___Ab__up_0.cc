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
void OSVRRElecPotInBra_aB_i__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp156;
fp156 = src2[((hsi*15+1)*1+lsi)*1] - src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp157;
fp157 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp155;
fp155 = fp157 * fp156;
LIBINT2_REALTYPE fp159;
fp159 = inteval->PC_y[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp160;
LIBINT2_REALTYPE fp158;
fp158 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*21+1)*1+lsi)*1], fp159);
LIBINT2_REALTYPE fp154;
fp154 = fp158 + fp155;
target[((hsi*28+1)*1+lsi)*1] = fp154;
LIBINT2_REALTYPE fp149;
fp149 = src2[((hsi*15+2)*1+lsi)*1] - src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp150;
fp150 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp148;
fp148 = fp150 * fp149;
LIBINT2_REALTYPE fp152;
fp152 = inteval->PC_z[vi] * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp153;
LIBINT2_REALTYPE fp151;
fp151 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+2)*1+lsi)*1], fp152);
LIBINT2_REALTYPE fp147;
fp147 = fp151 + fp148;
target[((hsi*28+2)*1+lsi)*1] = fp147;
LIBINT2_REALTYPE fp145;
fp145 = inteval->PC_y[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp146;
LIBINT2_REALTYPE fp144;
fp144 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*21+0)*1+lsi)*1], fp145);
target[((hsi*28+3)*1+lsi)*1] = fp144;
LIBINT2_REALTYPE fp142;
fp142 = inteval->PC_z[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp141;
fp141 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+0)*1+lsi)*1], fp142);
target[((hsi*28+4)*1+lsi)*1] = fp141;
LIBINT2_REALTYPE fp136;
fp136 = src2[((hsi*15+5)*1+lsi)*1] - src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp137;
fp137 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp135;
fp135 = fp137 * fp136;
LIBINT2_REALTYPE fp139;
fp139 = inteval->PC_y[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp140;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*21+5)*1+lsi)*1], fp139);
LIBINT2_REALTYPE fp134;
fp134 = fp138 + fp135;
target[((hsi*28+5)*1+lsi)*1] = fp134;
LIBINT2_REALTYPE fp132;
fp132 = inteval->PC_z[vi] * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp131;
fp131 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+1)*1+lsi)*1], fp132);
target[((hsi*28+6)*1+lsi)*1] = fp131;
LIBINT2_REALTYPE fp126;
fp126 = src2[((hsi*15+7)*1+lsi)*1] - src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp127;
fp127 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp125;
fp125 = fp127 * fp126;
LIBINT2_REALTYPE fp129;
fp129 = inteval->PC_z[vi] * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+7)*1+lsi)*1], fp129);
LIBINT2_REALTYPE fp124;
fp124 = fp128 + fp125;
target[((hsi*28+7)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp119;
fp119 = src2[((hsi*15+8)*1+lsi)*1] - src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp120;
fp120 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp118;
fp118 = fp120 * fp119;
LIBINT2_REALTYPE fp122;
fp122 = inteval->PC_z[vi] * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp121;
fp121 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+8)*1+lsi)*1], fp122);
LIBINT2_REALTYPE fp117;
fp117 = fp121 + fp118;
target[((hsi*28+8)*1+lsi)*1] = fp117;
LIBINT2_REALTYPE fp112;
fp112 = src2[((hsi*15+0)*1+lsi)*1] - src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp113;
fp113 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp111;
fp111 = fp113 * fp112;
LIBINT2_REALTYPE fp115;
fp115 = inteval->PC_y[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*21+3)*1+lsi)*1], fp115);
LIBINT2_REALTYPE fp110;
fp110 = fp114 + fp111;
target[((hsi*28+9)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp105;
fp105 = src2[((hsi*15+0)*1+lsi)*1] - src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
fp106 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp104;
fp104 = fp106 * fp105;
LIBINT2_REALTYPE fp108;
fp108 = inteval->PC_z[vi] * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp107;
fp107 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+4)*1+lsi)*1], fp108);
LIBINT2_REALTYPE fp103;
fp103 = fp107 + fp104;
target[((hsi*28+10)*1+lsi)*1] = fp103;
LIBINT2_REALTYPE fp101;
fp101 = inteval->PC_z[vi] * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp102;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+3)*1+lsi)*1], fp101);
target[((hsi*28+11)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp95;
fp95 = src2[((hsi*15+9)*1+lsi)*1] - src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp96;
fp96 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp94;
fp94 = fp96 * fp95;
LIBINT2_REALTYPE fp98;
fp98 = inteval->PC_y[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*21+12)*1+lsi)*1], fp98);
LIBINT2_REALTYPE fp93;
fp93 = fp97 + fp94;
target[((hsi*28+12)*1+lsi)*1] = fp93;
LIBINT2_REALTYPE fp88;
fp88 = src2[((hsi*15+1)*1+lsi)*1] - src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
fp89 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp87;
fp87 = fp89 * fp88;
LIBINT2_REALTYPE fp91;
fp91 = inteval->PC_z[vi] * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+6)*1+lsi)*1], fp91);
LIBINT2_REALTYPE fp86;
fp86 = fp90 + fp87;
target[((hsi*28+13)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp163;
fp163 = src2[((hsi*15+0)*1+lsi)*1] - src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp164;
fp164 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp162;
fp162 = fp164 * fp163;
LIBINT2_REALTYPE fp166;
fp166 = inteval->PC_x[vi] * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp167;
LIBINT2_REALTYPE fp165;
fp165 = libint2::fma_minus(inteval->PA_x[vi], src0[((hsi*21+0)*1+lsi)*1], fp166);
LIBINT2_REALTYPE fp161;
fp161 = fp165 + fp162;
target[((hsi*28+0)*1+lsi)*1] = fp161;
LIBINT2_REALTYPE fp78;
fp78 = src2[((hsi*15+10)*1+lsi)*1] - src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp77;
fp77 = fp79 * fp78;
LIBINT2_REALTYPE fp81;
fp81 = inteval->PC_z[vi] * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+15)*1+lsi)*1], fp81);
LIBINT2_REALTYPE fp76;
fp76 = fp80 + fp77;
target[((hsi*28+15)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp71;
fp71 = src2[((hsi*15+11)*1+lsi)*1] - src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp70;
fp70 = fp72 * fp71;
LIBINT2_REALTYPE fp74;
fp74 = inteval->PC_z[vi] * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+16)*1+lsi)*1], fp74);
LIBINT2_REALTYPE fp69;
fp69 = fp73 + fp70;
target[((hsi*28+16)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp64;
fp64 = src2[((hsi*15+14)*1+lsi)*1] - src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp63;
fp63 = fp65 * fp64;
LIBINT2_REALTYPE fp67;
fp67 = inteval->PC_z[vi] * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+17)*1+lsi)*1], fp67);
LIBINT2_REALTYPE fp62;
fp62 = fp66 + fp63;
target[((hsi*28+17)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp57;
fp57 = src2[((hsi*15+3)*1+lsi)*1] - src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp58 * fp57;
LIBINT2_REALTYPE fp60;
fp60 = inteval->PC_y[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*21+9)*1+lsi)*1], fp60);
LIBINT2_REALTYPE fp55;
fp55 = fp59 + fp56;
target[((hsi*28+18)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp50;
fp50 = src2[((hsi*15+4)*1+lsi)*1] - src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp51 * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PC_z[vi] * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+10)*1+lsi)*1], fp53);
LIBINT2_REALTYPE fp48;
fp48 = fp52 + fp49;
target[((hsi*28+19)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_z[vi] * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+9)*1+lsi)*1], fp46);
target[((hsi*28+20)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp40;
fp40 = src2[((hsi*15+3)*1+lsi)*1] - src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp39;
fp39 = fp41 * fp40;
LIBINT2_REALTYPE fp43;
fp43 = inteval->PC_z[vi] * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+11)*1+lsi)*1], fp43);
LIBINT2_REALTYPE fp38;
fp38 = fp42 + fp39;
target[((hsi*28+21)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp33;
fp33 = src2[((hsi*15+6)*1+lsi)*1] - src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp34 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_z[vi] * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+13)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
target[((hsi*28+22)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_z[vi] * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+12)*1+lsi)*1], fp29);
target[((hsi*28+23)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp23;
fp23 = src2[((hsi*15+5)*1+lsi)*1] - src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = fp24 * fp23;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PC_z[vi] * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+14)*1+lsi)*1], fp26);
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
target[((hsi*28+24)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp16;
fp16 = src2[((hsi*15+12)*1+lsi)*1] - src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp17 * fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->PC_z[vi] * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+19)*1+lsi)*1], fp19);
LIBINT2_REALTYPE fp14;
fp14 = fp18 + fp15;
target[((hsi*28+25)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = src2[((hsi*15+13)*1+lsi)*1] - src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp10 * fp9;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PC_z[vi] * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+20)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp7;
fp7 = fp11 + fp8;
target[((hsi*28+26)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*15+9)*1+lsi)*1] - src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp3 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+18)*1+lsi)*1], fp5);
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_z[vi] * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*21+5)*1+lsi)*1], fp84);
target[((hsi*28+14)*1+lsi)*1] = fp83;
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