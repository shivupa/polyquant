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
void OSVRRP0InBra_aB_d__0__s__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = inteval->WP_z[vi] * src0[((hsi*3+1)*1+lsi)*1];
target[((hsi*6+5)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp1;
fp1 = inteval->WP_z[vi] * src0[((hsi*3+0)*1+lsi)*1];
target[((hsi*6+4)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp2;
fp2 = inteval->WP_y[vi] * src0[((hsi*3+0)*1+lsi)*1];
target[((hsi*6+3)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*1+0)*1+lsi)*1], src1[((hsi*1+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp8;
fp8 = inteval->oo2z[vi] * fp9;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*3+2)*1+lsi)*1], fp8);
target[((hsi*6+2)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*3+1)*1+lsi)*1], fp8);
target[((hsi*6+1)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*3+0)*1+lsi)*1], fp8);
target[((hsi*6+0)*1+lsi)*1] = fp7;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 12 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif