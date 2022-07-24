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
void OSVRRP0InBra_aB_f010__0__s__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

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
LIBINT2_REALTYPE fp30;
fp30 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = src1[((hsi*3+1)*1+lsi)*1] - fp30;
LIBINT2_REALTYPE fp12;
fp12 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp2;
fp2 = fp12 * fp29;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp3 + fp2;
target[((hsi*10+8)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp35;
fp35 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = src1[((hsi*3+0)*1+lsi)*1] - fp35;
LIBINT2_REALTYPE fp11;
fp11 = fp12 * fp34;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp11;
target[((hsi*10+7)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
target[((hsi*10+6)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 1.0000000000000000e+00 * fp9;
LIBINT2_REALTYPE fp13;
fp13 = inteval->WP_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp13 + fp11;
LIBINT2_REALTYPE fp7;
fp7 = fp10 - fp8;
target[((hsi*10+5)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+4)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * fp17;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp18 - fp16;
target[((hsi*10+3)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp36;
fp36 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp22;
fp22 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = src1[((hsi*3+2)*1+lsi)*1] - fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp36 * fp21;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp23 + fp20;
target[((hsi*10+2)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp26;
fp26 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 1.0000000000000000e+00 * fp26;
LIBINT2_REALTYPE fp28;
fp28 = fp36 * fp29;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = fp31 + fp28;
LIBINT2_REALTYPE fp24;
fp24 = fp27 - fp25;
target[((hsi*10+1)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp33;
fp33 = fp36 * fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp37 + fp33;
target[((hsi*10+0)*1+lsi)*1] = fp32;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 38 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
