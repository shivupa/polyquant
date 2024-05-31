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
void OSVRRSMultipole_aB_s__0___SphericalMultipole_sB_2_c_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp2;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+3)*1+lsi)*1], fp1);
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*3+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp6;
fp6 = fp7 + src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->oo2z[vi] * fp6;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+5)*1+lsi)*1], fp5);
target[((hsi*10+8)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(1.0000000000000000e+00, src1[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp12;
fp12 = fp20 + src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp12;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+4)*1+lsi)*1], fp11);
target[((hsi*10+7)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->oo2z[vi] * fp16;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+1)*1+lsi)*1], fp15);
target[((hsi*10+6)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * fp20;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*6+3)*1+lsi)*1], fp19);
target[((hsi*10+5)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->oo2z[vi] * fp25;
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+0)*1+lsi)*1], fp24);
target[((hsi*10+4)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp27;
fp27 = inteval->PB_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+3)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+2)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp30;
fp30 = fp31 + src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->oo2z[vi] * fp30;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_z[vi], src0[((hsi*6+2)*1+lsi)*1], fp29);
target[((hsi*10+2)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+1)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * fp36;
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PB_y[vi], src0[((hsi*6+1)*1+lsi)*1], fp35);
target[((hsi*10+1)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp42;
fp42 = 5.0000000000000000e-01 * src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(2.0000000000000000e+00, src1[((hsi*3+0)*1+lsi)*1], 0.0000000000000000e+00);
LIBINT2_REALTYPE fp41;
fp41 = fp43 - fp42;
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * fp41;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PB_x[vi], src0[((hsi*6+0)*1+lsi)*1], fp40);
target[((hsi*10+0)*1+lsi)*1] = fp39;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 46 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
