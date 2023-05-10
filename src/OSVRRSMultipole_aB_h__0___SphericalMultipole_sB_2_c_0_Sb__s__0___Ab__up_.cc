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
void OSVRRSMultipole_aB_h__0___SphericalMultipole_sB_2_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp117;
fp117 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp119;
fp119 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp121;
LIBINT2_REALTYPE fp120;
fp120 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp118;
fp118 = fp120 + fp119;
LIBINT2_REALTYPE fp116;
fp116 = fp118 + fp117;
LIBINT2_REALTYPE fp115;
fp115 = inteval->oo2z[vi] * fp116;
LIBINT2_REALTYPE fp122;
LIBINT2_REALTYPE fp114;
fp114 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp115);
target[((hsi*21+1)*1+lsi)*1] = fp114;
LIBINT2_REALTYPE fp112;
LIBINT2_REALTYPE fp111;
fp111 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp110;
fp110 = fp111 + src4[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp109;
fp109 = inteval->oo2z[vi] * fp110;
LIBINT2_REALTYPE fp113;
LIBINT2_REALTYPE fp108;
fp108 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp109);
target[((hsi*21+2)*1+lsi)*1] = fp108;
LIBINT2_REALTYPE fp104;
fp104 = 5.0000000000000000e-01 * src3[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp106;
LIBINT2_REALTYPE fp105;
fp105 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp103;
fp103 = fp105 + fp104;
LIBINT2_REALTYPE fp102;
fp102 = inteval->oo2z[vi] * fp103;
LIBINT2_REALTYPE fp107;
LIBINT2_REALTYPE fp101;
fp101 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp102);
target[((hsi*21+3)*1+lsi)*1] = fp101;
LIBINT2_REALTYPE fp99;
fp99 = 0.0000000000000000e+00 + src4[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp98;
fp98 = inteval->oo2z[vi] * fp99;
LIBINT2_REALTYPE fp100;
LIBINT2_REALTYPE fp97;
fp97 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+0)*1+lsi)*1], fp98);
target[((hsi*21+4)*1+lsi)*1] = fp97;
LIBINT2_REALTYPE fp91;
fp91 = 5.0000000000000000e-01 * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
fp93 = 5.0000000000000000e-01 * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp95;
LIBINT2_REALTYPE fp94;
fp94 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp92;
fp92 = fp94 + fp93;
LIBINT2_REALTYPE fp90;
fp90 = fp92 + fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp96;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp89);
target[((hsi*21+5)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp86;
fp86 = 0.0000000000000000e+00 + src4[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = inteval->oo2z[vi] * fp86;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp84;
fp84 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+1)*1+lsi)*1], fp85);
target[((hsi*21+6)*1+lsi)*1] = fp84;
LIBINT2_REALTYPE fp82;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp80;
fp80 = fp81 + src4[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp79;
fp79 = inteval->oo2z[vi] * fp80;
LIBINT2_REALTYPE fp83;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp79);
target[((hsi*21+7)*1+lsi)*1] = fp78;
LIBINT2_REALTYPE fp76;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp74;
fp74 = fp75 + src4[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp73);
target[((hsi*21+8)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp66;
fp66 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp67;
fp67 = fp69 + fp68;
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp64);
target[((hsi*21+9)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp126;
fp126 = -5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp128;
fp128 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp130;
LIBINT2_REALTYPE fp129;
fp129 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp127;
fp127 = fp129 + fp128;
LIBINT2_REALTYPE fp125;
fp125 = fp127 - fp126;
LIBINT2_REALTYPE fp124;
fp124 = inteval->oo2z[vi] * fp125;
LIBINT2_REALTYPE fp131;
LIBINT2_REALTYPE fp123;
fp123 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp124);
target[((hsi*21+0)*1+lsi)*1] = fp123;
LIBINT2_REALTYPE fp55;
fp55 = 0.0000000000000000e+00 + src4[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = inteval->oo2z[vi] * fp55;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+3)*1+lsi)*1], fp54);
target[((hsi*21+11)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp47;
fp47 = 5.0000000000000000e-01 * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
fp49 = 5.0000000000000000e-01 * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp48;
fp48 = fp50 + fp49;
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp45);
target[((hsi*21+12)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp40;
fp40 = fp41 + src4[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp39);
target[((hsi*21+13)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp36;
fp36 = 0.0000000000000000e+00 + src4[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+5)*1+lsi)*1], fp35);
target[((hsi*21+14)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp30;
fp30 = fp31 + src4[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp29);
target[((hsi*21+15)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp24;
fp24 = fp25 + src4[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->oo2z[vi] * fp24;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp23);
target[((hsi*21+16)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp18;
fp18 = fp19 + src4[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp17);
target[((hsi*21+17)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src4[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * fp14;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+9)*1+lsi)*1], fp13);
target[((hsi*21+18)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp8;
fp8 = fp9 + src4[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp7);
target[((hsi*21+19)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp59;
fp59 = fp60 + src4[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp58);
target[((hsi*21+10)*1+lsi)*1] = fp57;
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
