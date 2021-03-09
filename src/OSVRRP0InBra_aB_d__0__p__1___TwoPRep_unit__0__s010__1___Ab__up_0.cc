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
void OSVRRP0InBra_aB_d__0__p__1___TwoPRep_unit__0__s010__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, const LIBINT2_REALTYPE* src4) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp58;
fp58 = 1.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp49;
fp49 = inteval->roz[vi] * src2[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = src1[((hsi*3+1)*1+lsi)*1] - fp49;
LIBINT2_REALTYPE fp47;
fp47 = fp58 * fp48;
LIBINT2_REALTYPE fp50;
fp50 = inteval->WP_x[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp50 + fp47;
target[((hsi*18+1)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp44;
fp44 = inteval->roz[vi] * src2[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = src1[((hsi*3+2)*1+lsi)*1] - fp44;
LIBINT2_REALTYPE fp42;
fp42 = fp58 * fp43;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_x[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
fp41 = fp45 + fp42;
target[((hsi*18+2)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp38;
fp38 = 1.0000000000000000e+00 * inteval->alpha4_over_zetapluseta[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * src4[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp57;
fp57 = inteval->roz[vi] * src2[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = src1[((hsi*3+0)*1+lsi)*1] - fp57;
LIBINT2_REALTYPE fp55;
fp55 = fp58 * fp56;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_y[vi] * src0[((hsi*9+3)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp40 + fp55;
LIBINT2_REALTYPE fp36;
fp36 = fp39 + fp37;
target[((hsi*18+3)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp31;
fp31 = fp38 * src4[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp53 * src3[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->WP_y[vi] * src0[((hsi*9+4)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp35 + fp47;
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
LIBINT2_REALTYPE fp30;
fp30 = fp32 + fp31;
target[((hsi*18+4)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp27;
fp27 = fp38 * src4[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_y[vi] * src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = fp29 + fp42;
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*18+5)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp25;
fp25 = inteval->WP_z[vi] * src0[((hsi*9+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 + fp55;
target[((hsi*18+6)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*9+7)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp23 + fp47;
target[((hsi*18+7)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp19;
fp19 = fp53 * src3[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->WP_z[vi] * src0[((hsi*9+8)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = fp21 + fp42;
LIBINT2_REALTYPE fp18;
fp18 = fp20 + fp19;
target[((hsi*18+8)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * src3[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp59;
fp59 = inteval->WP_x[vi] * src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
fp54 = fp59 + fp55;
LIBINT2_REALTYPE fp51;
fp51 = fp54 + fp52;
target[((hsi*18+0)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp12;
fp12 = fp38 * src4[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_y[vi] * src0[((hsi*9+1)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp14 + fp52;
LIBINT2_REALTYPE fp11;
fp11 = fp13 + fp12;
target[((hsi*18+10)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp9;
fp9 = fp38 * src4[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->WP_y[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp10 + fp9;
target[((hsi*18+11)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp7;
fp7 = inteval->WP_z[vi] * src0[((hsi*9+0)*1+lsi)*1];
target[((hsi*18+12)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src0[((hsi*9+1)*1+lsi)*1];
target[((hsi*18+13)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp5;
fp5 = inteval->WP_z[vi] * src0[((hsi*9+2)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 + fp52;
target[((hsi*18+14)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*9+3)*1+lsi)*1];
target[((hsi*18+15)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp2;
fp2 = inteval->WP_z[vi] * src0[((hsi*9+4)*1+lsi)*1];
target[((hsi*18+16)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
fp1 = inteval->WP_z[vi] * src0[((hsi*9+5)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp1 + fp33;
target[((hsi*18+17)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp16;
fp16 = fp38 * src4[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_y[vi] * src0[((hsi*9+0)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
target[((hsi*18+9)*1+lsi)*1] = fp15;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 60 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
