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
void HRRPart0bra0ket0d100p010(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2, const LIBINT2_REALTYPE* src3, int lowdim) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int lsi = 0; lsi<lowdim; lsi++) {
{
const int vi = 0;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src3[((hsi*6+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp55;
LIBINT2_REALTYPE fp54;
fp54 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*6+0)*lowdim+lsi)*1], src0[((hsi*10+3)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp52;
fp52 = fp54 - fp53;
target[((hsi*18+1)*lowdim+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*6+0)*lowdim+lsi)*1], src0[((hsi*10+4)*lowdim+lsi)*1]);
target[((hsi*18+2)*lowdim+lsi)*1] = fp50;
LIBINT2_REALTYPE fp47;
fp47 = 1.0000000000000000e+00 * src2[((hsi*6+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*6+1)*lowdim+lsi)*1], src0[((hsi*10+5)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp46;
fp46 = fp48 + fp47;
target[((hsi*18+3)*lowdim+lsi)*1] = fp46;
LIBINT2_REALTYPE fp43;
fp43 = 1.0000000000000000e+00 * src3[((hsi*6+1)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp45;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*6+1)*lowdim+lsi)*1], src0[((hsi*10+1)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp42;
fp42 = fp44 - fp43;
target[((hsi*18+4)*lowdim+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*6+1)*lowdim+lsi)*1], src0[((hsi*10+6)*lowdim+lsi)*1]);
target[((hsi*18+5)*lowdim+lsi)*1] = fp40;
LIBINT2_REALTYPE fp37;
fp37 = 1.0000000000000000e+00 * src2[((hsi*6+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*6+2)*lowdim+lsi)*1], src0[((hsi*10+7)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp36;
fp36 = fp38 + fp37;
target[((hsi*18+6)*lowdim+lsi)*1] = fp36;
LIBINT2_REALTYPE fp33;
fp33 = 1.0000000000000000e+00 * src3[((hsi*6+2)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*6+2)*lowdim+lsi)*1], src0[((hsi*10+8)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp32;
fp32 = fp34 - fp33;
target[((hsi*18+7)*lowdim+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*6+2)*lowdim+lsi)*1], src0[((hsi*10+2)*lowdim+lsi)*1]);
target[((hsi*18+8)*lowdim+lsi)*1] = fp30;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * src2[((hsi*6+0)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp59;
LIBINT2_REALTYPE fp58;
fp58 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*6+0)*lowdim+lsi)*1], src0[((hsi*10+0)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp56;
fp56 = fp58 + fp57;
target[((hsi*18+0)*lowdim+lsi)*1] = fp56;
LIBINT2_REALTYPE fp23;
fp23 = 1.0000000000000000e+00 * src3[((hsi*6+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*6+3)*lowdim+lsi)*1], src0[((hsi*10+5)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp22;
fp22 = fp24 - fp23;
target[((hsi*18+10)*lowdim+lsi)*1] = fp22;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*6+3)*lowdim+lsi)*1], src0[((hsi*10+9)*lowdim+lsi)*1]);
target[((hsi*18+11)*lowdim+lsi)*1] = fp20;
LIBINT2_REALTYPE fp17;
fp17 = 1.0000000000000000e+00 * src2[((hsi*6+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*6+4)*lowdim+lsi)*1], src0[((hsi*10+4)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp16;
fp16 = fp18 + fp17;
target[((hsi*18+12)*lowdim+lsi)*1] = fp16;
LIBINT2_REALTYPE fp13;
fp13 = 1.0000000000000000e+00 * src3[((hsi*6+4)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*6+4)*lowdim+lsi)*1], src0[((hsi*10+9)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp12;
fp12 = fp14 - fp13;
target[((hsi*18+13)*lowdim+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*6+4)*lowdim+lsi)*1], src0[((hsi*10+7)*lowdim+lsi)*1]);
target[((hsi*18+14)*lowdim+lsi)*1] = fp10;
LIBINT2_REALTYPE fp7;
fp7 = 1.0000000000000000e+00 * src2[((hsi*6+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*6+5)*lowdim+lsi)*1], src0[((hsi*10+9)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp6;
fp6 = fp8 + fp7;
target[((hsi*18+15)*lowdim+lsi)*1] = fp6;
LIBINT2_REALTYPE fp3;
fp3 = 1.0000000000000000e+00 * src3[((hsi*6+5)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->AB_y[vi], src1[((hsi*6+5)*lowdim+lsi)*1], src0[((hsi*10+6)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp2;
fp2 = fp4 - fp3;
target[((hsi*18+16)*lowdim+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->AB_z[vi], src1[((hsi*6+5)*lowdim+lsi)*1], src0[((hsi*10+8)*lowdim+lsi)*1]);
target[((hsi*18+17)*lowdim+lsi)*1] = fp0;
LIBINT2_REALTYPE fp27;
fp27 = 1.0000000000000000e+00 * src2[((hsi*6+3)*lowdim+lsi)*1];
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->AB_x[vi], src1[((hsi*6+3)*lowdim+lsi)*1], src0[((hsi*10+3)*lowdim+lsi)*1]);
LIBINT2_REALTYPE fp26;
fp26 = fp28 + fp27;
target[((hsi*18+9)*lowdim+lsi)*1] = fp26;
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
