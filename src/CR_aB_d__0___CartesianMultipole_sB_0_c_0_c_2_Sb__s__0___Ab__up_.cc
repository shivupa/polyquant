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
void CR_aB_d__0___CartesianMultipole_sB_0_c_0_c_2_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->BO_z[vi], fp2, fp1);
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp1;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp0 + fp4;
LIBINT2_REALTYPE fp7;
fp7 = fp3 + fp8;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src1[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp31 * fp27;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp7;
target[((hsi*6+5)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src1[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp30 * fp29;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp7;
target[((hsi*6+4)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src2[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src2[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->BO_z[vi], fp20, fp19);
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_z[vi] * fp23;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_z[vi] * fp19;
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src2[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp18 + fp22;
LIBINT2_REALTYPE fp25;
fp25 = fp21 + fp26;
LIBINT2_REALTYPE fp38;
fp38 = fp30 * fp27;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp25;
target[((hsi*6+3)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src2[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->BO_z[vi], fp11, fp10);
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_z[vi] * fp14;
LIBINT2_REALTYPE fp13;
fp13 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp9 + fp13;
LIBINT2_REALTYPE fp16;
fp16 = fp12 + fp17;
LIBINT2_REALTYPE fp40;
fp40 = fp31 * fp29;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp16;
target[((hsi*6+2)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src1[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp42;
fp42 = fp31 * fp28;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp25;
target[((hsi*6+1)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
fp44 = fp32 * fp29;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp25;
target[((hsi*6+0)*1+lsi)*1] = fp43;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 45 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
