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
void HRRPart0bra0ket0g001p010(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+7)*lowdim+lsi)*1], src0[((hsi*21+15)*lowdim+lsi)*1]);
target[((hsi*45+21)*lowdim+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
fp81 = 1.0000000000000000e+00 * src3[((hsi*15+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+6)*lowdim+lsi)*1], src0[((hsi*21+13)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp80;
fp80 = fp82 + fp81;
target[((hsi*45+20)*lowdim+lsi)*1] = fp80;
LIBINT2_REALTYPE fp85;
fp85 = 1.0000000000000000e+00 * src2[((hsi*15+6)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+6)*lowdim+lsi)*1], src0[((hsi*21+6)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp84;
fp84 = fp86 - fp85;
target[((hsi*45+19)*lowdim+lsi)*1] = fp84;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+6)*lowdim+lsi)*1], src0[((hsi*21+14)*lowdim+lsi)*1]);
target[((hsi*45+18)*lowdim+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
fp91 = 1.0000000000000000e+00 * src3[((hsi*15+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+5)*lowdim+lsi)*1], src0[((hsi*21+14)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
target[((hsi*45+17)*lowdim+lsi)*1] = fp90;
LIBINT2_REALTYPE fp95;
fp95 = 1.0000000000000000e+00 * src2[((hsi*15+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+5)*lowdim+lsi)*1], src0[((hsi*21+5)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp94;
fp94 = fp96 - fp95;
target[((hsi*45+16)*lowdim+lsi)*1] = fp94;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+5)*lowdim+lsi)*1], src0[((hsi*21+12)*lowdim+lsi)*1]);
target[((hsi*45+15)*lowdim+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
fp101 = 1.0000000000000000e+00 * src3[((hsi*15+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+4)*lowdim+lsi)*1], src0[((hsi*21+10)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp100;
fp100 = fp102 + fp101;
target[((hsi*45+14)*lowdim+lsi)*1] = fp100;
LIBINT2_REALTYPE fp105;
fp105 = 1.0000000000000000e+00 * src2[((hsi*15+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+4)*lowdim+lsi)*1], src0[((hsi*21+11)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp104;
fp104 = fp106 - fp105;
target[((hsi*45+13)*lowdim+lsi)*1] = fp104;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+4)*lowdim+lsi)*1], src0[((hsi*21+4)*lowdim+lsi)*1]);
target[((hsi*45+12)*lowdim+lsi)*1] = fp108;
LIBINT2_REALTYPE fp149;
LIBINT2_REALTYPE fp148;
fp148 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+0)*lowdim+lsi)*1], src0[((hsi*21+0)*lowdim+lsi)*1]);
target[((hsi*45+0)*lowdim+lsi)*1] = fp148;
LIBINT2_REALTYPE fp115;
fp115 = 1.0000000000000000e+00 * src2[((hsi*15+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+3)*lowdim+lsi)*1], src0[((hsi*21+9)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp114;
fp114 = fp116 - fp115;
target[((hsi*45+10)*lowdim+lsi)*1] = fp114;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+3)*lowdim+lsi)*1], src0[((hsi*21+3)*lowdim+lsi)*1]);
target[((hsi*45+9)*lowdim+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
fp121 = 1.0000000000000000e+00 * src3[((hsi*15+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+2)*lowdim+lsi)*1], src0[((hsi*21+2)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp120;
fp120 = fp122 + fp121;
target[((hsi*45+8)*lowdim+lsi)*1] = fp120;
LIBINT2_REALTYPE fp125;
fp125 = 1.0000000000000000e+00 * src2[((hsi*15+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp127;
LIBINT2_REALTYPE fp126;
fp126 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+2)*lowdim+lsi)*1], src0[((hsi*21+8)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp124;
fp124 = fp126 - fp125;
target[((hsi*45+7)*lowdim+lsi)*1] = fp124;
LIBINT2_REALTYPE fp129;
LIBINT2_REALTYPE fp128;
fp128 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+2)*lowdim+lsi)*1], src0[((hsi*21+7)*lowdim+lsi)*1]);
target[((hsi*45+6)*lowdim+lsi)*1] = fp128;
LIBINT2_REALTYPE fp131;
fp131 = 1.0000000000000000e+00 * src3[((hsi*15+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp133;
LIBINT2_REALTYPE fp132;
fp132 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+1)*lowdim+lsi)*1], src0[((hsi*21+6)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp130;
fp130 = fp132 + fp131;
target[((hsi*45+5)*lowdim+lsi)*1] = fp130;
LIBINT2_REALTYPE fp135;
fp135 = 1.0000000000000000e+00 * src2[((hsi*15+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp137;
LIBINT2_REALTYPE fp136;
fp136 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+1)*lowdim+lsi)*1], src0[((hsi*21+1)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp134;
fp134 = fp136 - fp135;
target[((hsi*45+4)*lowdim+lsi)*1] = fp134;
LIBINT2_REALTYPE fp139;
LIBINT2_REALTYPE fp138;
fp138 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+1)*lowdim+lsi)*1], src0[((hsi*21+5)*lowdim+lsi)*1]);
target[((hsi*45+3)*lowdim+lsi)*1] = fp138;
LIBINT2_REALTYPE fp141;
fp141 = 1.0000000000000000e+00 * src3[((hsi*15+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp143;
LIBINT2_REALTYPE fp142;
fp142 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+0)*lowdim+lsi)*1], src0[((hsi*21+4)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp140;
fp140 = fp142 + fp141;
target[((hsi*45+2)*lowdim+lsi)*1] = fp140;
LIBINT2_REALTYPE fp145;
fp145 = 1.0000000000000000e+00 * src2[((hsi*15+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp147;
LIBINT2_REALTYPE fp146;
fp146 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+0)*lowdim+lsi)*1], src0[((hsi*21+3)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp144;
fp144 = fp146 - fp145;
target[((hsi*45+1)*lowdim+lsi)*1] = fp144;
LIBINT2_REALTYPE fp111;
fp111 = 1.0000000000000000e+00 * src3[((hsi*15+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+3)*lowdim+lsi)*1], src0[((hsi*21+11)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp110;
fp110 = fp112 + fp111;
target[((hsi*45+11)*lowdim+lsi)*1] = fp110;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src3[((hsi*15+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+14)*lowdim+lsi)*1], src0[((hsi*21+17)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*45+44)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src2[((hsi*15+14)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+14)*lowdim+lsi)*1], src0[((hsi*21+20)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp4;
fp4 = fp6 - fp5;
target[((hsi*45+43)*lowdim+lsi)*1] = fp4;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+14)*lowdim+lsi)*1], src0[((hsi*21+19)*lowdim+lsi)*1]);
target[((hsi*45+42)*lowdim+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * src3[((hsi*15+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+13)*lowdim+lsi)*1], src0[((hsi*21+20)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*45+41)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = 1.0000000000000000e+00 * src2[((hsi*15+13)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+13)*lowdim+lsi)*1], src0[((hsi*21+14)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp14;
fp14 = fp16 - fp15;
target[((hsi*45+40)*lowdim+lsi)*1] = fp14;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+13)*lowdim+lsi)*1], src0[((hsi*21+18)*lowdim+lsi)*1]);
target[((hsi*45+39)*lowdim+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * src3[((hsi*15+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+12)*lowdim+lsi)*1], src0[((hsi*21+19)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp20;
fp20 = fp22 + fp21;
target[((hsi*45+38)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * src2[((hsi*15+12)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+12)*lowdim+lsi)*1], src0[((hsi*21+18)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp24;
fp24 = fp26 - fp25;
target[((hsi*45+37)*lowdim+lsi)*1] = fp24;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+12)*lowdim+lsi)*1], src0[((hsi*21+11)*lowdim+lsi)*1]);
target[((hsi*45+36)*lowdim+lsi)*1] = fp28;
LIBINT2_REALTYPE fp31;
fp31 = 1.0000000000000000e+00 * src3[((hsi*15+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+11)*lowdim+lsi)*1], src0[((hsi*21+16)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*45+35)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp75;
fp75 = 1.0000000000000000e+00 * src2[((hsi*15+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+7)*lowdim+lsi)*1], src0[((hsi*21+17)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp74;
fp74 = fp76 - fp75;
target[((hsi*45+22)*lowdim+lsi)*1] = fp74;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+11)*lowdim+lsi)*1], src0[((hsi*21+20)*lowdim+lsi)*1]);
target[((hsi*45+33)*lowdim+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
fp41 = 1.0000000000000000e+00 * src3[((hsi*15+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+10)*lowdim+lsi)*1], src0[((hsi*21+15)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp40;
fp40 = fp42 + fp41;
target[((hsi*45+32)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp45;
fp45 = 1.0000000000000000e+00 * src2[((hsi*15+10)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+10)*lowdim+lsi)*1], src0[((hsi*21+19)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp44;
fp44 = fp46 - fp45;
target[((hsi*45+31)*lowdim+lsi)*1] = fp44;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+10)*lowdim+lsi)*1], src0[((hsi*21+10)*lowdim+lsi)*1]);
target[((hsi*45+30)*lowdim+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = 1.0000000000000000e+00 * src3[((hsi*15+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+9)*lowdim+lsi)*1], src0[((hsi*21+18)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp50;
fp50 = fp52 + fp51;
target[((hsi*45+29)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp55;
fp55 = 1.0000000000000000e+00 * src2[((hsi*15+9)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+9)*lowdim+lsi)*1], src0[((hsi*21+12)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp54;
fp54 = fp56 - fp55;
target[((hsi*45+28)*lowdim+lsi)*1] = fp54;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+9)*lowdim+lsi)*1], src0[((hsi*21+9)*lowdim+lsi)*1]);
target[((hsi*45+27)*lowdim+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
fp61 = 1.0000000000000000e+00 * src3[((hsi*15+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+8)*lowdim+lsi)*1], src0[((hsi*21+8)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp60;
fp60 = fp62 + fp61;
target[((hsi*45+26)*lowdim+lsi)*1] = fp60;
LIBINT2_REALTYPE fp65;
fp65 = 1.0000000000000000e+00 * src2[((hsi*15+8)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+8)*lowdim+lsi)*1], src0[((hsi*21+16)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp64;
fp64 = fp66 - fp65;
target[((hsi*45+25)*lowdim+lsi)*1] = fp64;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*15+8)*lowdim+lsi)*1], src0[((hsi*21+17)*lowdim+lsi)*1]);
target[((hsi*45+24)*lowdim+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
fp71 = 1.0000000000000000e+00 * src3[((hsi*15+7)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*15+7)*lowdim+lsi)*1], src0[((hsi*21+7)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp70;
fp70 = fp72 + fp71;
target[((hsi*45+23)*lowdim+lsi)*1] = fp70;
LIBINT2_REALTYPE fp35;
fp35 = 1.0000000000000000e+00 * src2[((hsi*15+11)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*15+11)*lowdim+lsi)*1], src0[((hsi*21+13)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp34;
fp34 = fp36 - fp35;
target[((hsi*45+34)*lowdim+lsi)*1] = fp34;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 150 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
