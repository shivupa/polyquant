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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_4_c_4_Sb__h__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp84;
fp84 = 5.0000000000000000e-01 * src3[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp86;
LIBINT2_REALTYPE fp85;
fp85 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp83;
fp83 = fp85 + fp84;
LIBINT2_REALTYPE fp82;
fp82 = inteval->oo2z[vi] * fp83;
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp81;
fp81 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+1)*1+lsi)*1], fp82);
target[((hsi*21+1)*1+lsi)*1] = fp81;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp78;
fp78 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp77;
fp77 = inteval->oo2z[vi] * fp78;
LIBINT2_REALTYPE fp80;
LIBINT2_REALTYPE fp76;
fp76 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+2)*1+lsi)*1], fp77);
target[((hsi*21+2)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp74;
LIBINT2_REALTYPE fp73;
fp73 = libint2::fma_plus(5.0000000000000000e-01, src3[((hsi*15+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp72;
fp72 = inteval->oo2z[vi] * fp73;
LIBINT2_REALTYPE fp75;
LIBINT2_REALTYPE fp71;
fp71 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+0)*1+lsi)*1], fp72);
target[((hsi*21+3)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp70;
fp70 = inteval->PB_z[vi] * src0[((hsi*15+0)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp66;
fp66 = 5.0000000000000000e-01 * src3[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp65;
fp65 = fp67 + fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+5)*1+lsi)*1], fp64);
target[((hsi*21+5)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp62;
fp62 = inteval->PB_z[vi] * src0[((hsi*15+1)*1+lsi)*1];
target[((hsi*21+6)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+7)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp58;
fp58 = inteval->oo2z[vi] * fp59;
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp57;
fp57 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+7)*1+lsi)*1], fp58);
target[((hsi*21+7)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*10+8)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp53;
fp53 = inteval->oo2z[vi] * fp54;
LIBINT2_REALTYPE fp56;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+8)*1+lsi)*1], fp53);
target[((hsi*21+8)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp48;
fp48 = 5.0000000000000000e-01 * src3[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+3)*1+lsi)*1], fp46);
target[((hsi*21+9)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp91;
fp91 = 5.0000000000000000e-01 * src2[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp93;
LIBINT2_REALTYPE fp92;
fp92 = libint2::fma_plus(4.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp90;
fp90 = fp92 - fp91;
LIBINT2_REALTYPE fp89;
fp89 = inteval->oo2z[vi] * fp90;
LIBINT2_REALTYPE fp94;
LIBINT2_REALTYPE fp88;
fp88 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*15+0)*1+lsi)*1], fp89);
target[((hsi*21+0)*1+lsi)*1] = fp88;
LIBINT2_REALTYPE fp39;
fp39 = inteval->PB_z[vi] * src0[((hsi*15+3)*1+lsi)*1];
target[((hsi*21+11)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp35;
fp35 = 5.0000000000000000e-01 * src3[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp34;
fp34 = fp36 + fp35;
LIBINT2_REALTYPE fp33;
fp33 = inteval->oo2z[vi] * fp34;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*15+9)*1+lsi)*1], fp33);
target[((hsi*21+12)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2z[vi] * fp29;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+6)*1+lsi)*1], fp28);
target[((hsi*21+13)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp26;
fp26 = inteval->PB_z[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*21+14)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp22;
fp22 = inteval->oo2z[vi] * fp23;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+10)*1+lsi)*1], fp22);
target[((hsi*21+15)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+6)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+11)*1+lsi)*1], fp17);
target[((hsi*21+16)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*10+9)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp12;
fp12 = inteval->oo2z[vi] * fp13;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+14)*1+lsi)*1], fp12);
target[((hsi*21+17)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp10;
fp10 = inteval->PB_z[vi] * src0[((hsi*15+9)*1+lsi)*1];
target[((hsi*21+18)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp7;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+12)*1+lsi)*1], fp6);
target[((hsi*21+19)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+13)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*10+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = inteval->oo2z[vi] * fp42;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*15+4)*1+lsi)*1], fp41);
target[((hsi*21+10)*1+lsi)*1] = fp40;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 95 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
