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
void HRRPart0bra0ket0d001d010(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp67;
fp67 = 1.0000000000000000e+00 * src3[((hsi*18+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+7)*lowdim+lsi)*1], src0[((hsi*30+7)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp66;
fp66 = fp68 + fp67;
target[((hsi*36+17)*lowdim+lsi)*1] = fp66;
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * src3[((hsi*18+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+6)*lowdim+lsi)*1], src0[((hsi*30+6)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*36+16)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src2[((hsi*18+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+6)*lowdim+lsi)*1], src0[((hsi*30+24)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
target[((hsi*36+15)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp79;
fp79 = 1.0000000000000000e+00 * src3[((hsi*18+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+8)*lowdim+lsi)*1], src0[((hsi*30+8)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp78;
fp78 = fp80 + fp79;
target[((hsi*36+14)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp83;
fp83 = 1.0000000000000000e+00 * src2[((hsi*18+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+7)*lowdim+lsi)*1], src0[((hsi*30+25)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
target[((hsi*36+13)*lowdim+lsi)*1] = fp82;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+6)*lowdim+lsi)*1], src0[((hsi*30+21)*lowdim+lsi)*1]);
target[((hsi*36+12)*lowdim+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
fp89 = 1.0000000000000000e+00 * src3[((hsi*18+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+4)*lowdim+lsi)*1], src0[((hsi*30+19)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp88;
fp88 = fp90 + fp89;
target[((hsi*36+11)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp93;
fp93 = 1.0000000000000000e+00 * src3[((hsi*18+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+3)*lowdim+lsi)*1], src0[((hsi*30+18)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
target[((hsi*36+10)*lowdim+lsi)*1] = fp92;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp130;
fp130 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+0)*lowdim+lsi)*1], src0[((hsi*30+0)*lowdim+lsi)*1]);
target[((hsi*36+0)*lowdim+lsi)*1] = fp130;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src3[((hsi*18+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+5)*lowdim+lsi)*1], src0[((hsi*30+20)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*36+8)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * src2[((hsi*18+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+4)*lowdim+lsi)*1], src0[((hsi*30+4)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
target[((hsi*36+7)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+3)*lowdim+lsi)*1], src0[((hsi*30+15)*lowdim+lsi)*1]);
target[((hsi*36+6)*lowdim+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * src3[((hsi*18+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+1)*lowdim+lsi)*1], src0[((hsi*30+13)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
target[((hsi*36+5)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src3[((hsi*18+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+0)*lowdim+lsi)*1], src0[((hsi*30+12)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp114;
fp114 = fp116 + fp115;
target[((hsi*36+4)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp119;
fp119 = 1.0000000000000000e+00 * src2[((hsi*18+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+0)*lowdim+lsi)*1], src0[((hsi*30+9)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp118;
fp118 = fp120 - fp119;
target[((hsi*36+3)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp123;
fp123 = 1.0000000000000000e+00 * src3[((hsi*18+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+2)*lowdim+lsi)*1], src0[((hsi*30+14)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp122;
fp122 = fp124 + fp123;
target[((hsi*36+2)*lowdim+lsi)*1] = fp122;
LIBINT2_REALTYPE fp127;
fp127 = 1.0000000000000000e+00 * src2[((hsi*18+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+1)*lowdim+lsi)*1], src0[((hsi*30+10)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp126;
fp126 = fp128 - fp127;
target[((hsi*36+1)*lowdim+lsi)*1] = fp126;
LIBINT2_REALTYPE fp97;
fp97 = 1.0000000000000000e+00 * src2[((hsi*18+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+3)*lowdim+lsi)*1], src0[((hsi*30+3)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp96;
fp96 = fp98 - fp97;
target[((hsi*36+9)*lowdim+lsi)*1] = fp96;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src3[((hsi*18+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+16)*lowdim+lsi)*1], src0[((hsi*30+25)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*36+35)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src3[((hsi*18+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+15)*lowdim+lsi)*1], src0[((hsi*30+24)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = fp6 + fp5;
target[((hsi*36+34)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * src2[((hsi*18+15)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+15)*lowdim+lsi)*1], src0[((hsi*30+18)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp8;
fp8 = fp10 - fp9;
target[((hsi*36+33)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src3[((hsi*18+17)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+17)*lowdim+lsi)*1], src0[((hsi*30+26)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
target[((hsi*36+32)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = 1.0000000000000000e+00 * src2[((hsi*18+16)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+16)*lowdim+lsi)*1], src0[((hsi*30+19)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp16;
fp16 = fp18 - fp17;
target[((hsi*36+31)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+15)*lowdim+lsi)*1], src0[((hsi*30+27)*lowdim+lsi)*1]);
target[((hsi*36+30)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * src3[((hsi*18+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+13)*lowdim+lsi)*1], src0[((hsi*30+22)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*36+29)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * src3[((hsi*18+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+12)*lowdim+lsi)*1], src0[((hsi*30+21)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*36+28)*lowdim+lsi)*1] = fp26;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+9)*lowdim+lsi)*1], src0[((hsi*30+9)*lowdim+lsi)*1]);
target[((hsi*36+18)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * src3[((hsi*18+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+14)*lowdim+lsi)*1], src0[((hsi*30+23)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
target[((hsi*36+26)*lowdim+lsi)*1] = fp34;
LIBINT2_REALTYPE fp39;
fp39 = 1.0000000000000000e+00 * src2[((hsi*18+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+13)*lowdim+lsi)*1], src0[((hsi*30+28)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp38;
fp38 = fp40 - fp39;
target[((hsi*36+25)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*18+12)*lowdim+lsi)*1], src0[((hsi*30+12)*lowdim+lsi)*1]);
target[((hsi*36+24)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * src3[((hsi*18+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+10)*lowdim+lsi)*1], src0[((hsi*30+28)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp44;
fp44 = fp46 + fp45;
target[((hsi*36+23)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp49;
fp49 = 1.0000000000000000e+00 * src3[((hsi*18+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+9)*lowdim+lsi)*1], src0[((hsi*30+27)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
target[((hsi*36+22)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src2[((hsi*18+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+9)*lowdim+lsi)*1], src0[((hsi*30+15)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
target[((hsi*36+21)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * src3[((hsi*18+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*18+11)*lowdim+lsi)*1], src0[((hsi*30+29)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*36+20)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * src2[((hsi*18+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+10)*lowdim+lsi)*1], src0[((hsi*30+16)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp60;
fp60 = fp62 - fp61;
target[((hsi*36+19)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * src2[((hsi*18+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*18+12)*lowdim+lsi)*1], src0[((hsi*30+27)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp30;
fp30 = fp32 - fp31;
target[((hsi*36+27)*lowdim+lsi)*1] = fp30;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 132 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
