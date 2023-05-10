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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_0_Sb__g__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp2;
fp2 = fp3 + src4[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp1);
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src4[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+5)*1+lsi)*1], fp7);
target[((hsi*15+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src4[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+3)*1+lsi)*1], fp11);
target[((hsi*15+12)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = fp17 + src4[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->oo2z[vi] * fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+6)*1+lsi)*1], fp15);
target[((hsi*15+11)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp22;
fp22 = fp29 + src4[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp21);
target[((hsi*15+10)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp28;
fp28 = 5.0000000000000000e-01 * src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
LIBINT2_REALTYPE fp26;
fp26 = fp27 + fp28;
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp25);
target[((hsi*15+9)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp34;
fp34 = fp35 + src4[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->oo2z[vi] * fp34;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp33);
target[((hsi*15+8)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp42;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp40;
fp40 = fp41 + src4[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2z[vi] * fp40;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp39);
target[((hsi*15+7)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp46;
fp46 = 0.0000000000000000e+00 + src4[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * fp46;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+1)*1+lsi)*1], fp45);
target[((hsi*15+6)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp52;
fp52 = 5.0000000000000000e-01 * src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp51;
fp51 = fp53 + fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp51 + fp52;
LIBINT2_REALTYPE fp49;
fp49 = inteval->oo2z[vi] * fp50;
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+5)*1+lsi)*1], fp49);
target[((hsi*15+5)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp58;
fp58 = 0.0000000000000000e+00 + src4[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->oo2z[vi] * fp58;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+0)*1+lsi)*1], fp57);
target[((hsi*15+4)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp64;
fp64 = 5.0000000000000000e-01 * src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = 0.0000000000000000e+00 + fp64;
LIBINT2_REALTYPE fp62;
fp62 = fp63 + fp64;
LIBINT2_REALTYPE fp61;
fp61 = inteval->oo2z[vi] * fp62;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+0)*1+lsi)*1], fp61);
target[((hsi*15+3)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp70;
LIBINT2_REALTYPE fp69;
fp69 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = fp69 + src4[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp67);
target[((hsi*15+2)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp76;
fp76 = 5.0000000000000000e-01 * src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp78;
LIBINT2_REALTYPE fp77;
fp77 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp75;
fp75 = fp77 + fp76;
LIBINT2_REALTYPE fp74;
fp74 = fp75 + fp76;
LIBINT2_REALTYPE fp73;
fp73 = inteval->oo2z[vi] * fp74;
LIBINT2_REALTYPE fp79;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp73);
target[((hsi*15+1)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp83;
fp83 = -5.0000000000000000e-01 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp85;
fp85 = 5.0000000000000000e-01 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp87;
LIBINT2_REALTYPE fp86;
fp86 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp84;
fp84 = fp86 + fp85;
LIBINT2_REALTYPE fp82;
fp82 = fp84 - fp83;
LIBINT2_REALTYPE fp81;
fp81 = inteval->oo2z[vi] * fp82;
LIBINT2_REALTYPE fp88;
LIBINT2_REALTYPE fp80;
fp80 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp81);
target[((hsi*15+0)*1+lsi)*1] = fp80;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 89 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
