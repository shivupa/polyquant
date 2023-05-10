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
void HRRPart1bra0ket0hp(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, int highdim) {

LIBINT2_REALTYPE*const  stack = target;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int hsi = 0; hsi<highdim; hsi++) {
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp64;
fp64 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+10)*1+lsi)*1], src0[((hsi*28+10)*1+lsi)*1]);
target[((hsi*63+30)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+9)*1+lsi)*1], src0[((hsi*28+20)*1+lsi)*1]);
target[((hsi*63+29)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+9)*1+lsi)*1], src0[((hsi*28+18)*1+lsi)*1]);
target[((hsi*63+28)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+9)*1+lsi)*1], src0[((hsi*28+9)*1+lsi)*1]);
target[((hsi*63+27)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+8)*1+lsi)*1], src0[((hsi*28+8)*1+lsi)*1]);
target[((hsi*63+26)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+8)*1+lsi)*1], src0[((hsi*28+16)*1+lsi)*1]);
target[((hsi*63+25)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+8)*1+lsi)*1], src0[((hsi*28+17)*1+lsi)*1]);
target[((hsi*63+24)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+7)*1+lsi)*1], src0[((hsi*28+7)*1+lsi)*1]);
target[((hsi*63+23)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp81;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+7)*1+lsi)*1], src0[((hsi*28+17)*1+lsi)*1]);
target[((hsi*63+22)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp82;
fp82 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+7)*1+lsi)*1], src0[((hsi*28+15)*1+lsi)*1]);
target[((hsi*63+21)*1+lsi)*1] = fp82;
LIBINT2_REALTYPE fp85;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+6)*1+lsi)*1], src0[((hsi*28+13)*1+lsi)*1]);
target[((hsi*63+20)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+6)*1+lsi)*1], src0[((hsi*28+6)*1+lsi)*1]);
target[((hsi*63+19)*1+lsi)*1] = fp86;
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+6)*1+lsi)*1], src0[((hsi*28+14)*1+lsi)*1]);
target[((hsi*63+18)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp91;
LIBINT2_REALTYPE fp90;
fp90 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+5)*1+lsi)*1], src0[((hsi*28+14)*1+lsi)*1]);
target[((hsi*63+17)*1+lsi)*1] = fp90;
LIBINT2_REALTYPE fp125;
LIBINT2_REALTYPE fp124;
fp124 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+0)*1+lsi)*1], src0[((hsi*28+0)*1+lsi)*1]);
target[((hsi*63+0)*1+lsi)*1] = fp124;
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+5)*1+lsi)*1], src0[((hsi*28+12)*1+lsi)*1]);
target[((hsi*63+15)*1+lsi)*1] = fp94;
LIBINT2_REALTYPE fp97;
LIBINT2_REALTYPE fp96;
fp96 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+4)*1+lsi)*1], src0[((hsi*28+10)*1+lsi)*1]);
target[((hsi*63+14)*1+lsi)*1] = fp96;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp98;
fp98 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+4)*1+lsi)*1], src0[((hsi*28+11)*1+lsi)*1]);
target[((hsi*63+13)*1+lsi)*1] = fp98;
LIBINT2_REALTYPE fp101;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+4)*1+lsi)*1], src0[((hsi*28+4)*1+lsi)*1]);
target[((hsi*63+12)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp103;
LIBINT2_REALTYPE fp102;
fp102 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+3)*1+lsi)*1], src0[((hsi*28+11)*1+lsi)*1]);
target[((hsi*63+11)*1+lsi)*1] = fp102;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp104;
fp104 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+3)*1+lsi)*1], src0[((hsi*28+9)*1+lsi)*1]);
target[((hsi*63+10)*1+lsi)*1] = fp104;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+3)*1+lsi)*1], src0[((hsi*28+3)*1+lsi)*1]);
target[((hsi*63+9)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp109;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+2)*1+lsi)*1], src0[((hsi*28+2)*1+lsi)*1]);
target[((hsi*63+8)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+2)*1+lsi)*1], src0[((hsi*28+8)*1+lsi)*1]);
target[((hsi*63+7)*1+lsi)*1] = fp110;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp112;
fp112 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+2)*1+lsi)*1], src0[((hsi*28+7)*1+lsi)*1]);
target[((hsi*63+6)*1+lsi)*1] = fp112;
LIBINT2_REALTYPE fp115;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+1)*1+lsi)*1], src0[((hsi*28+6)*1+lsi)*1]);
target[((hsi*63+5)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp116;
fp116 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+1)*1+lsi)*1], src0[((hsi*28+1)*1+lsi)*1]);
target[((hsi*63+4)*1+lsi)*1] = fp116;
LIBINT2_REALTYPE fp119;
LIBINT2_REALTYPE fp118;
fp118 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+1)*1+lsi)*1], src0[((hsi*28+5)*1+lsi)*1]);
target[((hsi*63+3)*1+lsi)*1] = fp118;
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+0)*1+lsi)*1], src0[((hsi*28+4)*1+lsi)*1]);
target[((hsi*63+2)*1+lsi)*1] = fp120;
LIBINT2_REALTYPE fp123;
LIBINT2_REALTYPE fp122;
fp122 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+0)*1+lsi)*1], src0[((hsi*28+3)*1+lsi)*1]);
target[((hsi*63+1)*1+lsi)*1] = fp122;
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+5)*1+lsi)*1], src0[((hsi*28+5)*1+lsi)*1]);
target[((hsi*63+16)*1+lsi)*1] = fp92;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+20)*1+lsi)*1], src0[((hsi*28+26)*1+lsi)*1]);
target[((hsi*63+62)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+20)*1+lsi)*1], src0[((hsi*28+24)*1+lsi)*1]);
target[((hsi*63+61)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+20)*1+lsi)*1], src0[((hsi*28+27)*1+lsi)*1]);
target[((hsi*63+60)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+19)*1+lsi)*1], src0[((hsi*28+25)*1+lsi)*1]);
target[((hsi*63+59)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+19)*1+lsi)*1], src0[((hsi*28+27)*1+lsi)*1]);
target[((hsi*63+58)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+19)*1+lsi)*1], src0[((hsi*28+21)*1+lsi)*1]);
target[((hsi*63+57)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+18)*1+lsi)*1], src0[((hsi*28+27)*1+lsi)*1]);
target[((hsi*63+56)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+18)*1+lsi)*1], src0[((hsi*28+23)*1+lsi)*1]);
target[((hsi*63+55)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+18)*1+lsi)*1], src0[((hsi*28+20)*1+lsi)*1]);
target[((hsi*63+54)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+17)*1+lsi)*1], src0[((hsi*28+17)*1+lsi)*1]);
target[((hsi*63+53)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+17)*1+lsi)*1], src0[((hsi*28+26)*1+lsi)*1]);
target[((hsi*63+52)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+17)*1+lsi)*1], src0[((hsi*28+25)*1+lsi)*1]);
target[((hsi*63+51)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+16)*1+lsi)*1], src0[((hsi*28+16)*1+lsi)*1]);
target[((hsi*63+50)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+16)*1+lsi)*1], src0[((hsi*28+22)*1+lsi)*1]);
target[((hsi*63+49)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+16)*1+lsi)*1], src0[((hsi*28+26)*1+lsi)*1]);
target[((hsi*63+48)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp63;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+10)*1+lsi)*1], src0[((hsi*28+21)*1+lsi)*1]);
target[((hsi*63+31)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+15)*1+lsi)*1], src0[((hsi*28+25)*1+lsi)*1]);
target[((hsi*63+46)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+15)*1+lsi)*1], src0[((hsi*28+19)*1+lsi)*1]);
target[((hsi*63+45)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+14)*1+lsi)*1], src0[((hsi*28+24)*1+lsi)*1]);
target[((hsi*63+44)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+14)*1+lsi)*1], src0[((hsi*28+14)*1+lsi)*1]);
target[((hsi*63+43)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+14)*1+lsi)*1], src0[((hsi*28+23)*1+lsi)*1]);
target[((hsi*63+42)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+13)*1+lsi)*1], src0[((hsi*28+22)*1+lsi)*1]);
target[((hsi*63+41)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+13)*1+lsi)*1], src0[((hsi*28+13)*1+lsi)*1]);
target[((hsi*63+40)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+13)*1+lsi)*1], src0[((hsi*28+24)*1+lsi)*1]);
target[((hsi*63+39)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+12)*1+lsi)*1], src0[((hsi*28+23)*1+lsi)*1]);
target[((hsi*63+38)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+12)*1+lsi)*1], src0[((hsi*28+12)*1+lsi)*1]);
target[((hsi*63+37)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+12)*1+lsi)*1], src0[((hsi*28+18)*1+lsi)*1]);
target[((hsi*63+36)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+11)*1+lsi)*1], src0[((hsi*28+21)*1+lsi)*1]);
target[((hsi*63+35)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp57;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->CD_y[vi], src1[((hsi*21+11)*1+lsi)*1], src0[((hsi*28+20)*1+lsi)*1]);
target[((hsi*63+34)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->CD_x[vi], src1[((hsi*21+11)*1+lsi)*1], src0[((hsi*28+11)*1+lsi)*1]);
target[((hsi*63+33)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+10)*1+lsi)*1], src0[((hsi*28+19)*1+lsi)*1]);
target[((hsi*63+32)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->CD_z[vi], src1[((hsi*21+15)*1+lsi)*1], src0[((hsi*28+15)*1+lsi)*1]);
target[((hsi*63+47)*1+lsi)*1] = fp30;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 126 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
