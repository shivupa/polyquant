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
void OSVRRSMultipole_aB_f__0___SphericalMultipole_sB_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = inteval->PA_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + fp4;
LIBINT2_REALTYPE fp2;
fp2 = inteval->oo2z[vi] * fp3;
LIBINT2_REALTYPE fp5;
fp5 = inteval->PA_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp5 + fp2;
target[((hsi*10+8)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + fp12;
LIBINT2_REALTYPE fp10;
fp10 = inteval->oo2z[vi] * fp11;
LIBINT2_REALTYPE fp7;
fp7 = inteval->PA_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 + fp10;
target[((hsi*10+7)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp8;
fp8 = inteval->PA_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
target[((hsi*10+6)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp13 + fp10;
target[((hsi*10+5)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp15;
fp15 = inteval->PA_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+3)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp19;
fp19 = 2.0000000000000000e+00 * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + fp19;
LIBINT2_REALTYPE fp17;
fp17 = inteval->oo2z[vi] * fp18;
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp20 + fp17;
target[((hsi*10+2)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp24;
fp24 = 2.0000000000000000e+00 * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + fp24;
LIBINT2_REALTYPE fp22;
fp22 = inteval->oo2z[vi] * fp23;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp25 + fp22;
target[((hsi*10+1)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp29;
fp29 = 2.0000000000000000e+00 * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + fp29;
LIBINT2_REALTYPE fp27;
fp27 = inteval->oo2z[vi] * fp28;
LIBINT2_REALTYPE fp30;
fp30 = inteval->PA_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp30 + fp27;
target[((hsi*10+0)*1+lsi)*1] = fp26;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 31 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
