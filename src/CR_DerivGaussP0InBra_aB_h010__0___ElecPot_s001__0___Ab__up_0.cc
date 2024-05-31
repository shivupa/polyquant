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
void CR_DerivGaussP0InBra_aB_h010__0___ElecPot_s001__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp48;
fp48 = 5.0000000000000000e+00 * src1[((hsi*15+1)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+1)*1+lsi)*1], fp48);
target[((hsi*21+1)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp46;
fp46 = inteval->two_alpha0_bra[vi] * src0[((hsi*28+8)*1+lsi)*1];
target[((hsi*21+2)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp44;
fp44 = 1.0000000000000000e+00 * src1[((hsi*15+0)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+9)*1+lsi)*1], fp44);
target[((hsi*21+3)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp42;
fp42 = inteval->two_alpha0_bra[vi] * src0[((hsi*28+11)*1+lsi)*1];
target[((hsi*21+4)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = 4.0000000000000000e+00 * src1[((hsi*15+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+5)*1+lsi)*1], fp40);
target[((hsi*21+5)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp37;
fp37 = 4.0000000000000000e+00 * src1[((hsi*15+6)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+6)*1+lsi)*1], fp37);
target[((hsi*21+6)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
fp35 = inteval->two_alpha0_bra[vi] * src0[((hsi*28+17)*1+lsi)*1];
target[((hsi*21+7)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * src1[((hsi*15+2)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+16)*1+lsi)*1], fp33);
target[((hsi*21+8)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp30;
fp30 = 2.0000000000000000e+00 * src1[((hsi*15+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+18)*1+lsi)*1], fp30);
target[((hsi*21+9)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp50;
fp50 = inteval->two_alpha0_bra[vi] * src0[((hsi*28+3)*1+lsi)*1];
target[((hsi*21+0)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp26;
fp26 = 1.0000000000000000e+00 * src1[((hsi*15+4)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+20)*1+lsi)*1], fp26);
target[((hsi*21+11)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * src1[((hsi*15+9)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+12)*1+lsi)*1], fp23);
target[((hsi*21+12)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = 3.0000000000000000e+00 * src1[((hsi*15+11)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+13)*1+lsi)*1], fp20);
target[((hsi*21+13)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = 3.0000000000000000e+00 * src1[((hsi*15+13)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+14)*1+lsi)*1], fp17);
target[((hsi*21+14)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->two_alpha0_bra[vi] * src0[((hsi*28+25)*1+lsi)*1];
target[((hsi*21+15)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 2.0000000000000000e+00 * src1[((hsi*15+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+22)*1+lsi)*1], fp13);
target[((hsi*21+16)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * src1[((hsi*15+7)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+26)*1+lsi)*1], fp10);
target[((hsi*21+17)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp7;
fp7 = 2.0000000000000000e+00 * src1[((hsi*15+12)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+23)*1+lsi)*1], fp7);
target[((hsi*21+18)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * src1[((hsi*15+10)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+27)*1+lsi)*1], fp4);
target[((hsi*21+19)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp1;
fp1 = 2.0000000000000000e+00 * src1[((hsi*15+14)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->two_alpha0_bra[vi], src0[((hsi*28+24)*1+lsi)*1], fp1);
target[((hsi*21+20)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp28;
fp28 = inteval->two_alpha0_bra[vi] * src0[((hsi*28+21)*1+lsi)*1];
target[((hsi*21+10)*1+lsi)*1] = fp28;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 51 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
