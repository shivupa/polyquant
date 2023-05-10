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
void OSVRRSMultipole_aB_g__0___SphericalMultipole_sB_2_c_1_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

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
fp2 = fp3 + src3[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp1);
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src3[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = inteval->oo2z[vi] * fp8;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+5)*1+lsi)*1], fp7);
target[((hsi*15+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src3[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+3)*1+lsi)*1], fp11);
target[((hsi*15+12)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp16;
fp16 = fp17 + src3[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->oo2z[vi] * fp16;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+6)*1+lsi)*1], fp15);
target[((hsi*15+11)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp22;
fp22 = fp26 + src3[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp22;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp21);
target[((hsi*15+10)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp25);
target[((hsi*15+9)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+5)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp31;
fp31 = fp32 + src3[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->oo2z[vi] * fp31;
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp30);
target[((hsi*15+8)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+4)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp37;
fp37 = fp38 + src3[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->oo2z[vi] * fp37;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp36);
target[((hsi*15+7)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp43;
fp43 = 0.0000000000000000e+00 + src3[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = inteval->oo2z[vi] * fp43;
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp41;
fp41 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+1)*1+lsi)*1], fp42);
target[((hsi*15+6)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*6+3)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp46;
fp46 = inteval->oo2z[vi] * fp47;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+5)*1+lsi)*1], fp46);
target[((hsi*15+5)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp52;
fp52 = 0.0000000000000000e+00 + src3[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = inteval->oo2z[vi] * fp52;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+0)*1+lsi)*1], fp51);
target[((hsi*15+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+3)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp57;
fp57 = fp58 + src3[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = inteval->oo2z[vi] * fp57;
LIBINT2_REALTYPE fp60;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp56);
target[((hsi*15+2)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp62;
fp62 = inteval->oo2z[vi] * fp63;
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp61;
fp61 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp62);
target[((hsi*15+1)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp69;
fp69 = 5.0000000000000000e-01 * src2[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp71;
LIBINT2_REALTYPE fp70;
fp70 = libint2::fma_plus(3.0000000000000000e+00, src1[((hsi*6+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp68;
fp68 = fp70 - fp69;
LIBINT2_REALTYPE fp67;
fp67 = inteval->oo2z[vi] * fp68;
LIBINT2_REALTYPE fp72;
LIBINT2_REALTYPE fp66;
fp66 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp67);
target[((hsi*15+0)*1+lsi)*1] = fp66;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 73 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
