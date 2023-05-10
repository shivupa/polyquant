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
void OSVRRP0InBra_aB_g__0__s__1___TwoPRep_unit__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+3)*1+lsi)*1], src1[((hsi*6+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp26;
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp1);
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
target[((hsi*15+13)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp4;
fp4 = inteval->WP_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*15+12)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+1)*1+lsi)*1], src1[((hsi*6+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp6;
fp6 = inteval->oo2z[vi] * fp39;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+6)*1+lsi)*1], fp6);
target[((hsi*15+11)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+0)*1+lsi)*1], src1[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp11);
target[((hsi*15+10)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp12;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp11);
target[((hsi*15+9)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp28;
fp28 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp15;
fp15 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+5)*1+lsi)*1], src1[((hsi*6+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp14;
fp14 = fp28 * fp15;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp14);
target[((hsi*15+8)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+4)*1+lsi)*1], src1[((hsi*6+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp19;
fp19 = fp28 * fp20;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp19);
target[((hsi*15+7)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*15+6)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp25;
fp25 = fp28 * fp26;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*10+5)*1+lsi)*1], fp25);
target[((hsi*15+5)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+4)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp31;
fp31 = inteval->WP_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*15+3)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp46;
fp46 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->roz[vi], src2[((hsi*6+2)*1+lsi)*1], src1[((hsi*6+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp33;
fp33 = fp46 * fp34;
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->WP_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp33);
target[((hsi*15+2)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp38;
fp38 = fp46 * fp39;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp37;
fp37 = libint2::fma_minus(inteval->WP_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp38);
target[((hsi*15+1)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp43;
fp43 = fp46 * fp44;
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->WP_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp43);
target[((hsi*15+0)*1+lsi)*1] = fp42;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 48 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
