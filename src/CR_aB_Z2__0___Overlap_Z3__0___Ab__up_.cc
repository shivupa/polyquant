/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
void CR_aB_Z2__0___Overlap_Z3__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*12+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2z[vi] * target[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = inteval->PB_z[vi] * target[((hsi*12+0)*1+lsi)*1];
target[((hsi*12+1)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PB_z[vi] * target[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*12+2)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp27;
fp27 = fp28 * target[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = inteval->PA_z[vi] * target[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp22 + fp27;
target[((hsi*12+6)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp24;
fp24 = inteval->PA_z[vi] * target[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp24 + fp31;
target[((hsi*12+5)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PA_z[vi] * target[((hsi*12+0)*1+lsi)*1];
target[((hsi*12+4)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_z[vi] * target[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp29 + fp27;
target[((hsi*12+3)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp19;
fp19 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp18;
fp18 = fp19 * target[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->PA_z[vi] * target[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp20 + fp18;
target[((hsi*12+7)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp1;
fp1 = fp19 * target[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = inteval->oo2z[vi] * target[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * target[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*12+11)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = fp28 * target[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = inteval->oo2z[vi] * target[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * target[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*12+10)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * target[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->oo2z[vi] * target[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->PA_z[vi] * target[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp14 + fp13;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*12+9)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp16;
fp16 = inteval->PA_z[vi] * target[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp16 + fp31;
target[((hsi*12+8)*1+lsi)*1] = fp15;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 34 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
