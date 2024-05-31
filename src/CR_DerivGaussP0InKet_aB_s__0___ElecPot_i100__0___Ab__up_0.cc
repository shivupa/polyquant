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
void CR_DerivGaussP0InKet_aB_s__0___ElecPot_i100__0___Ab__up_0(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp66;
fp66 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+5)*1+lsi)*1];
target[((hsi*28+1)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+7)*1+lsi)*1];
target[((hsi*28+2)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp63;
fp63 = 5.0000000000000000e+00 * src1[((hsi*21+3)*1+lsi)*1];
LIBINT2_REALTYPE fp64;
LIBINT2_REALTYPE fp62;
fp62 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+3)*1+lsi)*1], fp63);
target[((hsi*28+3)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp60;
fp60 = 5.0000000000000000e+00 * src1[((hsi*21+4)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+4)*1+lsi)*1], fp60);
target[((hsi*28+4)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp57;
fp57 = 1.0000000000000000e+00 * src1[((hsi*21+1)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp56;
fp56 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+12)*1+lsi)*1], fp57);
target[((hsi*28+5)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp55;
fp55 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+14)*1+lsi)*1];
target[((hsi*28+6)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp53;
fp53 = 1.0000000000000000e+00 * src1[((hsi*21+2)*1+lsi)*1];
LIBINT2_REALTYPE fp54;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+15)*1+lsi)*1], fp53);
target[((hsi*28+7)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+17)*1+lsi)*1];
target[((hsi*28+8)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp49;
fp49 = 4.0000000000000000e+00 * src1[((hsi*21+9)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+9)*1+lsi)*1], fp49);
target[((hsi*28+9)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp46;
fp46 = 4.0000000000000000e+00 * src1[((hsi*21+10)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp45;
fp45 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+10)*1+lsi)*1], fp46);
target[((hsi*28+10)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp43;
fp43 = 4.0000000000000000e+00 * src1[((hsi*21+11)*1+lsi)*1];
LIBINT2_REALTYPE fp44;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+11)*1+lsi)*1], fp43);
target[((hsi*28+11)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp40;
fp40 = 2.0000000000000000e+00 * src1[((hsi*21+5)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+22)*1+lsi)*1], fp40);
target[((hsi*28+12)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp38;
fp38 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+25)*1+lsi)*1];
target[((hsi*28+13)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp68;
fp68 = 6.0000000000000000e+00 * src1[((hsi*21+0)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
LIBINT2_REALTYPE fp67;
fp67 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+0)*1+lsi)*1], fp68);
target[((hsi*28+0)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp33;
fp33 = 2.0000000000000000e+00 * src1[((hsi*21+7)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+26)*1+lsi)*1], fp33);
target[((hsi*28+15)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp31;
fp31 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+29)*1+lsi)*1];
target[((hsi*28+16)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp29;
fp29 = 1.0000000000000000e+00 * src1[((hsi*21+8)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+28)*1+lsi)*1], fp29);
target[((hsi*28+17)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp26;
fp26 = 3.0000000000000000e+00 * src1[((hsi*21+12)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp25;
fp25 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+18)*1+lsi)*1], fp26);
target[((hsi*28+18)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp23;
fp23 = 3.0000000000000000e+00 * src1[((hsi*21+15)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+19)*1+lsi)*1], fp23);
target[((hsi*28+19)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = 3.0000000000000000e+00 * src1[((hsi*21+18)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+20)*1+lsi)*1], fp20);
target[((hsi*28+20)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp17;
fp17 = 3.0000000000000000e+00 * src1[((hsi*21+19)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+21)*1+lsi)*1], fp17);
target[((hsi*28+21)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp15;
fp15 = inteval->two_alpha0_ket[vi] * src0[((hsi*36+33)*1+lsi)*1];
target[((hsi*28+22)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp13;
fp13 = 2.0000000000000000e+00 * src1[((hsi*21+14)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+30)*1+lsi)*1], fp13);
target[((hsi*28+23)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+00 * src1[((hsi*21+13)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp9;
fp9 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+34)*1+lsi)*1], fp10);
target[((hsi*28+24)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp7;
fp7 = 2.0000000000000000e+00 * src1[((hsi*21+17)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+31)*1+lsi)*1], fp7);
target[((hsi*28+25)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp4;
fp4 = 1.0000000000000000e+00 * src1[((hsi*21+16)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp3;
fp3 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+35)*1+lsi)*1], fp4);
target[((hsi*28+26)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp1;
fp1 = 2.0000000000000000e+00 * src1[((hsi*21+20)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+32)*1+lsi)*1], fp1);
target[((hsi*28+27)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp36;
fp36 = 1.0000000000000000e+00 * src1[((hsi*21+6)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp35;
fp35 = libint2::fma_minus(inteval->two_alpha0_ket[vi], src0[((hsi*36+24)*1+lsi)*1], fp36);
target[((hsi*28+14)*1+lsi)*1] = fp35;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 70 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
