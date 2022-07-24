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
void CR_aB_s__0___CartesianMultipole_sB_0_c_1_c_0_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*4+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*4+2)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*4+1)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_y[vi] * fp10;
LIBINT2_REALTYPE fp3;
fp3 = fp5 + fp4;
LIBINT2_REALTYPE fp17;
fp17 = fp14 * fp3;
LIBINT2_REALTYPE fp16;
fp16 = fp17 * fp0;
target[((hsi*6+5)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_y[vi] * fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*4+1)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp13 * fp11;
LIBINT2_REALTYPE fp18;
fp18 = fp19 * fp0;
target[((hsi*6+4)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*4+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp13 * fp3;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp2;
target[((hsi*6+3)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*4+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp14 * fp11;
LIBINT2_REALTYPE fp22;
fp22 = fp23 * fp1;
target[((hsi*6+2)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_y[vi] * fp5;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*4+3)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp25;
fp25 = fp14 * fp7;
LIBINT2_REALTYPE fp24;
fp24 = fp25 * fp2;
target[((hsi*6+1)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*4+2)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp15 * fp11;
LIBINT2_REALTYPE fp26;
fp26 = fp27 * fp2;
target[((hsi*6+0)*1+lsi)*1] = fp26;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 28 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
