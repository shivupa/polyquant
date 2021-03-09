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
void OSVRRP0InBra_aB_f001__0__s__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = 1.0000000000000000e+00 * fp2;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp3 - fp1;
target[((hsi*10+9)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 1.0000000000000000e+00 * fp6;
LIBINT2_REALTYPE fp39;
fp39 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = src1[((hsi*3+1)*1+lsi)*1] - fp39;
LIBINT2_REALTYPE fp21;
fp21 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp8;
fp8 = fp21 * fp38;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp4;
fp4 = fp7 - fp5;
target[((hsi*10+8)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp12;
fp12 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 1.0000000000000000e+00 * fp12;
LIBINT2_REALTYPE fp44;
fp44 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = src1[((hsi*3+0)*1+lsi)*1] - fp44;
LIBINT2_REALTYPE fp20;
fp20 = fp21 * fp43;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src0[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp14 + fp20;
LIBINT2_REALTYPE fp10;
fp10 = fp13 - fp11;
target[((hsi*10+7)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp17;
fp17 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 1.0000000000000000e+00 * fp17;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp18 - fp16;
target[((hsi*10+6)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp22;
fp22 = inteval->WP_y[vi] * src0[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp22 + fp20;
target[((hsi*10+5)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp25;
fp25 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 1.0000000000000000e+00 * fp25;
LIBINT2_REALTYPE fp26;
fp26 = inteval->WP_z[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = fp26 - fp24;
target[((hsi*10+4)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp27;
fp27 = inteval->WP_y[vi] * src0[((hsi*6+0)*1+lsi)*1];
target[((hsi*10+3)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->alpha1_rho_over_zeta2[vi] * src3[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * fp30;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp34;
fp34 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp33;
fp33 = src1[((hsi*3+2)*1+lsi)*1] - fp34;
LIBINT2_REALTYPE fp32;
fp32 = fp45 * fp33;
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_z[vi] * src0[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = fp35 + fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp31 - fp29;
target[((hsi*10+2)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp37;
fp37 = fp45 * fp38;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_y[vi] * src0[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = fp40 + fp37;
target[((hsi*10+1)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp42;
fp42 = fp45 * fp43;
LIBINT2_REALTYPE fp46;
fp46 = inteval->WP_x[vi] * src0[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp46 + fp42;
target[((hsi*10+0)*1+lsi)*1] = fp41;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 47 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
