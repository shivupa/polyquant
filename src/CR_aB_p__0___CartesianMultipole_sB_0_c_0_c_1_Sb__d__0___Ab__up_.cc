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
void CR_aB_p__0___CartesianMultipole_sB_0_c_0_c_1_Sb__d__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->BO_z[vi], fp17, fp16);
LIBINT2_REALTYPE fp30;
fp30 = 0.0000000000000000e+00 + src0[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src1[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
fp65 = fp30 * fp24;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp18;
target[((hsi*18+1)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src2[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_z[vi] * fp13;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src2[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp12 + fp15;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp30 * fp25;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp14;
target[((hsi*18+2)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp61;
fp61 = fp29 * fp23;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp18;
target[((hsi*18+3)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->BO_z[vi], fp16, fp13);
LIBINT2_REALTYPE fp59;
fp59 = fp29 * fp25;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp10;
target[((hsi*18+4)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp57;
fp57 = fp30 * fp23;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp10;
target[((hsi*18+5)*1+lsi)*1] = fp56;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp55;
fp55 = fp28 * fp22;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp18;
target[((hsi*18+6)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src1[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp27 * fp21;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp18;
target[((hsi*18+7)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp51;
fp51 = fp27 * fp22;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp14;
target[((hsi*18+8)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp31;
fp31 = 0.0000000000000000e+00 + src0[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp31 * fp25;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp18;
target[((hsi*18+0)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp26;
fp26 = 0.0000000000000000e+00 + src0[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp26 * fp22;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp10;
target[((hsi*18+10)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp27 * fp20;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp10;
target[((hsi*18+11)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->BO_z[vi], fp7, fp6);
LIBINT2_REALTYPE fp43;
fp43 = fp28 * fp25;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp8;
target[((hsi*18+12)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
fp41 = fp27 * fp24;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp8;
target[((hsi*18+13)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = inteval->BO_z[vi] * fp3;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp2 + fp5;
LIBINT2_REALTYPE fp39;
fp39 = fp27 * fp25;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp4;
target[((hsi*18+14)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp37;
fp37 = fp26 * fp23;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp8;
target[((hsi*18+15)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->BO_z[vi], fp6, fp3);
LIBINT2_REALTYPE fp35;
fp35 = fp26 * fp25;
LIBINT2_REALTYPE fp34;
fp34 = fp35 * fp0;
target[((hsi*18+16)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
fp33 = fp27 * fp23;
LIBINT2_REALTYPE fp32;
fp32 = fp33 * fp0;
target[((hsi*18+17)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp49;
fp49 = fp26 * fp20;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp18;
target[((hsi*18+9)*1+lsi)*1] = fp48;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 68 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
