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
void OSVRRElecPotInBra_aB_h__0___ElecPot_s__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp111;
fp111 = src2[((hsi*10+1)*1+lsi)*1] - src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp112;
fp112 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp110;
fp110 = fp112 * fp111;
LIBINT2_REALTYPE fp114;
fp114 = inteval->PC_y[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp114);
LIBINT2_REALTYPE fp109;
fp109 = fp113 + fp110;
target[((hsi*21+1)*1+lsi)*1] = fp109;
LIBINT2_REALTYPE fp104;
fp104 = src2[((hsi*10+2)*1+lsi)*1] - src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp105;
fp105 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp103;
fp103 = fp105 * fp104;
LIBINT2_REALTYPE fp107;
fp107 = inteval->PC_z[vi] * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp108;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp107);
LIBINT2_REALTYPE fp102;
fp102 = fp106 + fp103;
target[((hsi*21+2)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp100;
fp100 = inteval->PC_y[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp99;
fp99 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp100);
target[((hsi*21+3)*1+lsi)*1] = fp99;
LIBINT2_REALTYPE fp97;
fp97 = inteval->PC_z[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp97);
target[((hsi*21+4)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp91;
fp91 = src2[((hsi*10+5)*1+lsi)*1] - src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp90;
fp90 = fp92 * fp91;
LIBINT2_REALTYPE fp94;
fp94 = inteval->PC_y[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp93;
fp93 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp94);
LIBINT2_REALTYPE fp89;
fp89 = fp93 + fp90;
target[((hsi*21+5)*1+lsi)*1] = fp89;
LIBINT2_REALTYPE fp87;
fp87 = inteval->PC_z[vi] * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp87);
target[((hsi*21+6)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp81;
fp81 = src2[((hsi*10+7)*1+lsi)*1] - src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp82;
fp82 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp80;
fp80 = fp82 * fp81;
LIBINT2_REALTYPE fp84;
fp84 = inteval->PC_z[vi] * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp83;
fp83 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp84);
LIBINT2_REALTYPE fp79;
fp79 = fp83 + fp80;
target[((hsi*21+7)*1+lsi)*1] = fp79;
LIBINT2_REALTYPE fp74;
fp74 = src2[((hsi*10+8)*1+lsi)*1] - src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp73;
fp73 = fp75 * fp74;
LIBINT2_REALTYPE fp77;
fp77 = inteval->PC_z[vi] * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp77);
LIBINT2_REALTYPE fp72;
fp72 = fp76 + fp73;
target[((hsi*21+8)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp67;
fp67 = src2[((hsi*10+0)*1+lsi)*1] - src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp66;
fp66 = fp68 * fp67;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PC_y[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp70);
LIBINT2_REALTYPE fp65;
fp65 = fp69 + fp66;
target[((hsi*21+9)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp118;
fp118 = src2[((hsi*10+0)*1+lsi)*1] - src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp117;
fp117 = fp119 * fp118;
LIBINT2_REALTYPE fp121;
fp121 = inteval->PC_x[vi] * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_minus(inteval->PA_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp121);
LIBINT2_REALTYPE fp116;
fp116 = fp120 + fp117;
target[((hsi*21+0)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp56;
fp56 = inteval->PC_z[vi] * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp56);
target[((hsi*21+11)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp50;
fp50 = src2[((hsi*10+3)*1+lsi)*1] - src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp49;
fp49 = fp51 * fp50;
LIBINT2_REALTYPE fp53;
fp53 = inteval->PC_y[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->PA_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp53);
LIBINT2_REALTYPE fp48;
fp48 = fp52 + fp49;
target[((hsi*21+12)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp43;
fp43 = src2[((hsi*10+1)*1+lsi)*1] - src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp42;
fp42 = fp44 * fp43;
LIBINT2_REALTYPE fp46;
fp46 = inteval->PC_z[vi] * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp46);
LIBINT2_REALTYPE fp41;
fp41 = fp45 + fp42;
target[((hsi*21+13)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PC_z[vi] * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp39);
target[((hsi*21+14)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp33;
fp33 = src2[((hsi*10+4)*1+lsi)*1] - src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp32;
fp32 = fp34 * fp33;
LIBINT2_REALTYPE fp36;
fp36 = inteval->PC_z[vi] * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp36);
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
target[((hsi*21+15)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp26;
fp26 = src2[((hsi*10+6)*1+lsi)*1] - src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp27 * fp26;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PC_z[vi] * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp29);
LIBINT2_REALTYPE fp24;
fp24 = fp28 + fp25;
target[((hsi*21+16)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp19;
fp19 = src2[((hsi*10+9)*1+lsi)*1] - src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp20 * fp19;
LIBINT2_REALTYPE fp22;
fp22 = inteval->PC_z[vi] * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp22);
LIBINT2_REALTYPE fp17;
fp17 = fp21 + fp18;
target[((hsi*21+17)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PC_z[vi] * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp15);
target[((hsi*21+18)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp9;
fp9 = src2[((hsi*10+3)*1+lsi)*1] - src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp10 * fp9;
LIBINT2_REALTYPE fp12;
fp12 = inteval->PC_z[vi] * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp7;
fp7 = fp11 + fp8;
target[((hsi*21+19)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp2;
fp2 = src2[((hsi*10+5)*1+lsi)*1] - src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp3 * fp2;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PC_z[vi] * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp5);
LIBINT2_REALTYPE fp0;
fp0 = fp4 + fp1;
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp60;
fp60 = src2[((hsi*10+0)*1+lsi)*1] - src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
fp59 = fp61 * fp60;
LIBINT2_REALTYPE fp63;
fp63 = inteval->PC_z[vi] * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->PA_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp63);
LIBINT2_REALTYPE fp58;
fp58 = fp62 + fp59;
target[((hsi*21+10)*1+lsi)*1] = fp58;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 123 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
