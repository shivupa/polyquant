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
void OSVRRP0InBra_aB_p__0__f__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp57;
fp57 = inteval->WP_x[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*30+1)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp56;
fp56 = inteval->WP_x[vi] * src0[((hsi*10+2)*1+lsi)*1];
target[((hsi*30+2)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp54;
fp54 = 2.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp53;
fp53 = fp54 * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*10+3)*1+lsi)*1], fp53);
target[((hsi*30+3)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp50;
fp50 = fp54 * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp49;
fp49 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*10+4)*1+lsi)*1], fp50);
target[((hsi*30+4)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp47;
fp47 = inteval->oo2ze[vi] * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
LIBINT2_REALTYPE fp46;
fp46 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*10+5)*1+lsi)*1], fp47);
target[((hsi*30+5)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp45;
fp45 = inteval->WP_x[vi] * src0[((hsi*10+6)*1+lsi)*1];
target[((hsi*30+6)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = inteval->oo2ze[vi] * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*10+7)*1+lsi)*1], fp43);
target[((hsi*30+7)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
fp41 = inteval->WP_x[vi] * src0[((hsi*10+8)*1+lsi)*1];
target[((hsi*30+8)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp39;
fp39 = inteval->oo2ze[vi] * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*10+9)*1+lsi)*1], fp39);
target[((hsi*30+9)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_y[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*30+10)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp60;
fp60 = 3.0000000000000000e+00 * inteval->oo2ze[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp60 * src1[((hsi*6+1)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp35);
target[((hsi*30+11)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
fp33 = inteval->WP_y[vi] * src0[((hsi*10+2)*1+lsi)*1];
target[((hsi*30+12)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp31;
fp31 = inteval->oo2ze[vi] * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp31);
target[((hsi*30+13)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp29;
fp29 = inteval->WP_y[vi] * src0[((hsi*10+4)*1+lsi)*1];
target[((hsi*30+14)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * src1[((hsi*6+0)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->WP_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp59);
target[((hsi*30+0)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp25;
fp25 = fp54 * src1[((hsi*6+5)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*10+6)*1+lsi)*1], fp25);
target[((hsi*30+16)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * src0[((hsi*10+7)*1+lsi)*1];
target[((hsi*30+17)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp22;
LIBINT2_REALTYPE fp21;
fp21 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*10+8)*1+lsi)*1], fp43);
target[((hsi*30+18)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp19;
fp19 = inteval->oo2ze[vi] * src1[((hsi*6+4)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*10+9)*1+lsi)*1], fp19);
target[((hsi*30+19)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp17;
fp17 = inteval->WP_z[vi] * src0[((hsi*10+0)*1+lsi)*1];
target[((hsi*30+20)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp16;
fp16 = inteval->WP_z[vi] * src0[((hsi*10+1)*1+lsi)*1];
target[((hsi*30+21)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp14;
fp14 = fp60 * src1[((hsi*6+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp14);
target[((hsi*30+22)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp12;
fp12 = inteval->WP_z[vi] * src0[((hsi*10+3)*1+lsi)*1];
target[((hsi*30+23)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp31);
target[((hsi*30+24)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src0[((hsi*10+5)*1+lsi)*1];
target[((hsi*30+25)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*10+6)*1+lsi)*1], fp47);
target[((hsi*30+26)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp6;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp50);
target[((hsi*30+27)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp25);
target[((hsi*30+28)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2ze[vi] * src1[((hsi*6+3)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->WP_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp1);
target[((hsi*30+29)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_plus(inteval->WP_y[vi], src0[((hsi*10+5)*1+lsi)*1], fp53);
target[((hsi*30+15)*1+lsi)*1] = fp27;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 62 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
