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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c__minus_1_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp109;
fp109 = -5.0000000000000000e-01 * src2[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp111;
LIBINT2_REALTYPE fp110;
fp110 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp108;
fp108 = fp110 + fp109;
LIBINT2_REALTYPE fp107;
fp107 = inteval->oo2z[vi] * fp108;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp106;
fp106 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp107);
target[((hsi*21+1)*1+lsi)*1] = fp106;
LIBINT2_REALTYPE fp104;
LIBINT2_REALTYPE fp103;
fp103 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp102;
fp102 = fp103 + src3[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp101;
fp101 = inteval->oo2z[vi] * fp102;
LIBINT2_REALTYPE fp105;
LIBINT2_REALTYPE fp100;
fp100 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp101);
target[((hsi*21+2)*1+lsi)*1] = fp100;
LIBINT2_REALTYPE fp98;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(-5.0000000000000000e-01, src2[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp96;
fp96 = inteval->oo2z[vi] * fp97;
LIBINT2_REALTYPE fp99;
LIBINT2_REALTYPE fp95;
fp95 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp96);
target[((hsi*21+3)*1+lsi)*1] = fp95;
LIBINT2_REALTYPE fp93;
fp93 = 0.0000000000000000e+00 + src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp92;
fp92 = inteval->oo2z[vi] * fp93;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp91;
fp91 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp92);
target[((hsi*21+4)*1+lsi)*1] = fp91;
LIBINT2_REALTYPE fp87;
fp87 = -5.0000000000000000e-01 * src2[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp89;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp86;
fp86 = fp88 + fp87;
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp90;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp85);
target[((hsi*21+5)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
fp82 = 0.0000000000000000e+00 + src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2z[vi] * fp82;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp81);
target[((hsi*21+6)*1+lsi)*1] = fp80;
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp76;
fp76 = fp77 + src3[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = inteval->oo2z[vi] * fp76;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp74;
fp74 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp75);
target[((hsi*21+7)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp70;
fp70 = fp71 + src3[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = inteval->oo2z[vi] * fp70;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp68;
fp68 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp69);
target[((hsi*21+8)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp64;
fp64 = -5.0000000000000000e-01 * src2[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp63;
fp63 = fp65 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp67;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp62);
target[((hsi*21+9)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp116;
LIBINT2_REALTYPE fp115;
fp115 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp114;
fp114 = inteval->oo2z[vi] * fp115;
LIBINT2_REALTYPE fp117;
LIBINT2_REALTYPE fp113;
fp113 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp114);
target[((hsi*21+0)*1+lsi)*1] = fp113;
LIBINT2_REALTYPE fp53;
fp53 = 0.0000000000000000e+00 + src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = inteval->oo2z[vi] * fp53;
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp51;
fp51 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp52);
target[((hsi*21+11)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp47;
fp47 = -5.0000000000000000e-01 * src2[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp45);
target[((hsi*21+12)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp40;
fp40 = fp41 + src3[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp39);
target[((hsi*21+13)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp35);
target[((hsi*21+14)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp30;
fp30 = fp31 + src3[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp29);
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp24;
fp24 = fp25 + src3[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp23);
target[((hsi*21+16)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp18;
fp18 = fp19 + src3[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp17);
target[((hsi*21+17)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp13);
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src3[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp7);
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src3[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src3[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp56);
target[((hsi*21+10)*1+lsi)*1] = fp55;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 118 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
