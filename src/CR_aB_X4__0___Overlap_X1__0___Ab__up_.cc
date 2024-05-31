/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
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
void CR_aB_X4__0___Overlap_X1__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*10+0)*1+lsi)*1] = inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp26;
fp26 = inteval->oo2z[vi] * target[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = inteval->PA_x[vi] * target[((hsi*10+0)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp23;
fp23 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+2)*1+lsi)*1], fp26);
target[((hsi*10+4)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp16;
fp16 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp15;
fp15 = fp16 * target[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+4)*1+lsi)*1], fp15);
target[((hsi*10+6)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2z[vi] * target[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->PB_x[vi] * target[((hsi*10+0)*1+lsi)*1];
target[((hsi*10+1)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * target[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+1)*1+lsi)*1], fp26);
target[((hsi*10+3)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+3)*1+lsi)*1], fp21);
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*10+5)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp10;
fp10 = inteval->oo2z[vi] * target[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp16 * target[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+5)*1+lsi)*1], fp12);
LIBINT2_REALTYPE fp9;
fp9 = fp11 + fp10;
target[((hsi*10+7)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * target[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp3;
fp3 = fp7 * target[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+7)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = fp7 * target[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*10+6)*1+lsi)*1], fp6);
target[((hsi*10+8)*1+lsi)*1] = fp5;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 30 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
