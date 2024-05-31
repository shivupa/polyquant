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
void OSVRRP0InBra_aB_g__0__s__1___TwoPRep_s__0__s__1___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+3)*1+lsi)*1], src2[((hsi*6+3)*1+lsi)*1]);
LIBINT2_REALTYPE fp1;
fp1 = inteval->oo2z[vi] * fp44;
LIBINT2_REALTYPE fp3;
fp3 = inteval->WP_z[vi] * src1[((hsi*10+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+9)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 - fp1;
target[((hsi*15+14)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = inteval->WP_z[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp5;
fp5 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+5)*1+lsi)*1], fp6);
target[((hsi*15+13)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp9;
fp9 = inteval->WP_z[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+3)*1+lsi)*1], fp9);
target[((hsi*15+12)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp66;
LIBINT2_REALTYPE fp65;
fp65 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+1)*1+lsi)*1], src2[((hsi*6+1)*1+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = inteval->oo2z[vi] * fp65;
LIBINT2_REALTYPE fp14;
fp14 = inteval->WP_z[vi] * src1[((hsi*10+6)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp13;
fp13 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+6)*1+lsi)*1], fp14);
LIBINT2_REALTYPE fp11;
fp11 = fp13 - fp12;
target[((hsi*15+11)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp73;
LIBINT2_REALTYPE fp72;
fp72 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+0)*1+lsi)*1], src2[((hsi*6+0)*1+lsi)*1]);
LIBINT2_REALTYPE fp21;
fp21 = inteval->oo2z[vi] * fp72;
LIBINT2_REALTYPE fp18;
fp18 = inteval->WP_z[vi] * src1[((hsi*10+4)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+4)*1+lsi)*1], fp18);
LIBINT2_REALTYPE fp16;
fp16 = fp17 - fp21;
target[((hsi*15+10)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp23;
fp23 = inteval->WP_y[vi] * src1[((hsi*10+3)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+3)*1+lsi)*1], fp23);
LIBINT2_REALTYPE fp20;
fp20 = fp22 - fp21;
target[((hsi*15+9)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp46;
fp46 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp28;
LIBINT2_REALTYPE fp27;
fp27 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+5)*1+lsi)*1], src2[((hsi*6+5)*1+lsi)*1]);
LIBINT2_REALTYPE fp26;
fp26 = fp46 * fp27;
LIBINT2_REALTYPE fp30;
fp30 = inteval->WP_z[vi] * src1[((hsi*10+8)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+8)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp25;
fp25 = fp29 - fp26;
target[((hsi*15+8)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+4)*1+lsi)*1], src2[((hsi*6+4)*1+lsi)*1]);
LIBINT2_REALTYPE fp33;
fp33 = fp46 * fp34;
LIBINT2_REALTYPE fp37;
fp37 = inteval->WP_z[vi] * src1[((hsi*10+7)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+7)*1+lsi)*1], fp37);
LIBINT2_REALTYPE fp32;
fp32 = fp36 - fp33;
target[((hsi*15+7)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp40;
fp40 = inteval->WP_z[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+1)*1+lsi)*1], fp40);
target[((hsi*15+6)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp43;
fp43 = fp46 * fp44;
LIBINT2_REALTYPE fp48;
fp48 = inteval->WP_y[vi] * src1[((hsi*10+5)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+5)*1+lsi)*1], fp48);
LIBINT2_REALTYPE fp42;
fp42 = fp47 - fp43;
target[((hsi*15+5)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp51;
fp51 = inteval->WP_z[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+0)*1+lsi)*1], fp51);
target[((hsi*15+4)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp54;
fp54 = inteval->WP_y[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp53;
fp53 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+0)*1+lsi)*1], fp54);
target[((hsi*15+3)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp74;
fp74 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_minus(inteval->roz[vi], src3[((hsi*6+2)*1+lsi)*1], src2[((hsi*6+2)*1+lsi)*1]);
LIBINT2_REALTYPE fp57;
fp57 = fp74 * fp58;
LIBINT2_REALTYPE fp61;
fp61 = inteval->WP_z[vi] * src1[((hsi*10+2)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp60;
fp60 = libint2::fma_plus(inteval->PA_z[vi], src0[((hsi*10+2)*1+lsi)*1], fp61);
LIBINT2_REALTYPE fp56;
fp56 = fp60 - fp57;
target[((hsi*15+2)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp64;
fp64 = fp74 * fp65;
LIBINT2_REALTYPE fp68;
fp68 = inteval->WP_y[vi] * src1[((hsi*10+1)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_plus(inteval->PA_y[vi], src0[((hsi*10+1)*1+lsi)*1], fp68);
LIBINT2_REALTYPE fp63;
fp63 = fp67 - fp64;
target[((hsi*15+1)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp71;
fp71 = fp74 * fp72;
LIBINT2_REALTYPE fp76;
fp76 = inteval->WP_x[vi] * src1[((hsi*10+0)*1+lsi)*1];
LIBINT2_REALTYPE fp77;
LIBINT2_REALTYPE fp75;
fp75 = libint2::fma_plus(inteval->PA_x[vi], src0[((hsi*10+0)*1+lsi)*1], fp76);
LIBINT2_REALTYPE fp70;
fp70 = fp75 - fp71;
target[((hsi*15+0)*1+lsi)*1] = fp70;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 78 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
