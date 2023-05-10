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
void CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->BO_x[vi], fp15, fp25);
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->BO_x[vi], fp16, fp15);
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->BO_x[vi], fp19, fp17);
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = fp21 * fp10;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp0;
target[((hsi*6+5)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->BO_x[vi], fp25, fp24);
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->BO_x[vi], fp17, fp28);
LIBINT2_REALTYPE fp35;
fp35 = fp13 * fp12;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp0;
target[((hsi*6+4)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp6);
LIBINT2_REALTYPE fp37;
fp37 = fp13 * fp10;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp8;
target[((hsi*6+3)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp2 + fp5;
LIBINT2_REALTYPE fp39;
fp39 = fp21 * fp12;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp4;
target[((hsi*6+2)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp21 * fp11;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp8;
target[((hsi*6+1)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_x[vi] * fp24;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp23 + fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp26 + fp31;
LIBINT2_REALTYPE fp43;
fp43 = fp30 * fp12;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp8;
target[((hsi*6+0)*1+lsi)*1] = fp42;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 44 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
