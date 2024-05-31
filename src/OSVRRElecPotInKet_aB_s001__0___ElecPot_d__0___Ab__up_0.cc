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
void OSVRRElecPotInKet_aB_s001__0___ElecPot_d__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4, const LIBINT2_REALTYPE* src5) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp18;
fp18 = 1.0000000000000000e+00 * inteval->rho12_over_alpha2[vi];
LIBINT2_REALTYPE fp2;
fp2 = src4[((hsi*3+1)*1+lsi)*1] - src5[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp18 * fp2;
LIBINT2_REALTYPE fp4;
fp4 = inteval->PC_z[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*3+1)*1+lsi)*1], fp4);
LIBINT2_REALTYPE fp0;
fp0 = fp3 + fp1;
target[((hsi*6+5)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp8;
fp8 = src4[((hsi*3+0)*1+lsi)*1] - src5[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp18 * fp8;
LIBINT2_REALTYPE fp10;
fp10 = inteval->PC_z[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*3+0)*1+lsi)*1], fp10);
LIBINT2_REALTYPE fp6;
fp6 = fp9 + fp7;
target[((hsi*6+4)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp13;
fp13 = inteval->PC_y[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*3+0)*1+lsi)*1], fp13);
target[((hsi*6+3)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = src4[((hsi*3+2)*1+lsi)*1] - src5[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp18 * fp17;
LIBINT2_REALTYPE fp29;
fp29 = src2[((hsi*1+0)*1+lsi)*1] - src3[((hsi*1+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp28;
fp28 = fp30 * fp29;
LIBINT2_REALTYPE fp21;
fp21 = inteval->PC_z[vi] * src1[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_minus(inteval->PB_z[vi], src0[((hsi*3+2)*1+lsi)*1], fp21);
LIBINT2_REALTYPE fp19;
fp19 = fp20 + fp28;
LIBINT2_REALTYPE fp15;
fp15 = fp19 + fp16;
target[((hsi*6+2)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp25;
fp25 = inteval->PC_y[vi] * src1[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->PB_y[vi], src0[((hsi*3+1)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp23;
fp23 = fp24 + fp28;
target[((hsi*6+1)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp32;
fp32 = inteval->PC_x[vi] * src1[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp31;
fp31 = libint2::fma_minus(inteval->PB_x[vi], src0[((hsi*3+0)*1+lsi)*1], fp32);
LIBINT2_REALTYPE fp27;
fp27 = fp31 + fp28;
target[((hsi*6+0)*1+lsi)*1] = fp27;
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
