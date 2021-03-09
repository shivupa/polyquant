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
void OSVRRP0InBra_aB_f__0__s__1___TwoPRep_unit__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = inteval->WP_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp28;
fp28 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = src1[((hsi*3+1)*1+lsi)*1] - fp28;
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp11 * fp27;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp3 + fp2;
target[((hsi*10+8)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp33;
fp33 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = src1[((hsi*3+0)*1+lsi)*1] - fp33;
LIBINT2_REALTYPE fp10;
fp10 = fp11 * fp32;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp10;
target[((hsi*10+7)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
target[((hsi*10+6)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp24 * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->WP_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp12 + fp10;
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
target[((hsi*10+5)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp15;
fp15 = fp24 * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*10+3)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp34;
fp34 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp20;
fp20 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = src1[((hsi*3+2)*1+lsi)*1] - fp20;
LIBINT2_REALTYPE fp18;
fp18 = fp34 * fp19;
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = fp21 + fp18;
target[((hsi*10+2)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp23;
fp23 = fp24 * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp34 * fp27;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp29 + fp26;
LIBINT2_REALTYPE fp22;
fp22 = fp25 + fp23;
target[((hsi*10+1)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp31;
fp31 = fp34 * fp32;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp35 + fp31;
target[((hsi*10+0)*1+lsi)*1] = fp30;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 36 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
