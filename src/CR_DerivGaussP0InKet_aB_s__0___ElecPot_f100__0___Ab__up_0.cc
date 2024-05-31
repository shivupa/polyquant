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
void CR_DerivGaussP0InKet_aB_s__0___ElecPot_f100__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*15+12)*1+lsi)*1], fp1);
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->two_alpha0_ket[vi] * src0[((hsi*15+14)*1+lsi)*1];
target[((hsi*10+8)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*15+10)*1+lsi)*1], fp5);
target[((hsi*10+7)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = inteval->two_alpha0_ket[vi] * src0[((hsi*15+13)*1+lsi)*1];
target[((hsi*10+6)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp9;
fp9 = 1.0000000000000000e+00 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*15+9)*1+lsi)*1], fp9);
target[((hsi*10+5)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp12;
fp12 = 2.0000000000000000e+00 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp11;
fp11 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*15+4)*1+lsi)*1], fp12);
target[((hsi*10+4)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp15;
fp15 = 2.0000000000000000e+00 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*15+3)*1+lsi)*1], fp15);
target[((hsi*10+3)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->two_alpha0_ket[vi] * src0[((hsi*15+7)*1+lsi)*1];
target[((hsi*10+2)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp18;
fp18 = inteval->two_alpha0_ket[vi] * src0[((hsi*15+5)*1+lsi)*1];
target[((hsi*10+1)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp20;
fp20 = 3.0000000000000000e+00 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*15+0)*1+lsi)*1], fp20);
target[((hsi*10+0)*1+lsi)*1] = fp19;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 22 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
