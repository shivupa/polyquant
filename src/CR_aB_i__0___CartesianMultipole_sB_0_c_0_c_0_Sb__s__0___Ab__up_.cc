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
void CR_aB_i__0___CartesianMultipole_sB_0_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src1[((hsi*7+6)*1+lsi)*1];
LIBINT2_REALTYPE fp74;
fp74 = fp19 * fp12;
LIBINT2_REALTYPE fp73;
fp73 = fp74 * fp6;
target[((hsi*28+1)*1+lsi)*1] = fp73;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*7+6)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp72;
fp72 = fp19 * fp13;
LIBINT2_REALTYPE fp71;
fp71 = fp72 * fp5;
target[((hsi*28+2)*1+lsi)*1] = fp71;
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = 0.0000000000000000e+00 + src0[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp70;
fp70 = fp18 * fp11;
LIBINT2_REALTYPE fp69;
fp69 = fp70 * fp6;
target[((hsi*28+3)*1+lsi)*1] = fp69;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp68;
fp68 = fp18 * fp13;
LIBINT2_REALTYPE fp67;
fp67 = fp68 * fp4;
target[((hsi*28+4)*1+lsi)*1] = fp67;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp66;
fp66 = fp17 * fp10;
LIBINT2_REALTYPE fp65;
fp65 = fp66 * fp6;
target[((hsi*28+5)*1+lsi)*1] = fp65;
LIBINT2_REALTYPE fp64;
fp64 = fp19 * fp10;
LIBINT2_REALTYPE fp63;
fp63 = fp64 * fp4;
target[((hsi*28+6)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
fp62 = fp17 * fp13;
LIBINT2_REALTYPE fp61;
fp61 = fp62 * fp3;
target[((hsi*28+7)*1+lsi)*1] = fp61;
LIBINT2_REALTYPE fp60;
fp60 = fp19 * fp11;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp3;
target[((hsi*28+8)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp16 * fp9;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp6;
target[((hsi*28+9)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp56;
fp56 = fp16 * fp13;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp2;
target[((hsi*28+10)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp54;
fp54 = fp16 * fp11;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp4;
target[((hsi*28+11)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp52;
fp52 = fp15 * fp8;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp6;
target[((hsi*28+12)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp50;
fp50 = fp19 * fp8;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp2;
target[((hsi*28+13)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src0[((hsi*7+6)*1+lsi)*1];
LIBINT2_REALTYPE fp76;
fp76 = fp20 * fp13;
LIBINT2_REALTYPE fp75;
fp75 = fp76 * fp6;
target[((hsi*28+0)*1+lsi)*1] = fp75;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp15 * fp13;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp1;
target[((hsi*28+15)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp44;
fp44 = fp19 * fp9;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp1;
target[((hsi*28+16)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp42;
fp42 = fp17 * fp11;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp1;
target[((hsi*28+17)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp14 * fp7;
LIBINT2_REALTYPE fp39;
fp39 = fp40 * fp6;
target[((hsi*28+18)*1+lsi)*1] = fp39;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp14 * fp13;
LIBINT2_REALTYPE fp37;
fp37 = fp38 * fp0;
target[((hsi*28+19)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp36;
fp36 = fp14 * fp9;
LIBINT2_REALTYPE fp35;
fp35 = fp36 * fp4;
target[((hsi*28+20)*1+lsi)*1] = fp35;
LIBINT2_REALTYPE fp34;
fp34 = fp14 * fp11;
LIBINT2_REALTYPE fp33;
fp33 = fp34 * fp2;
target[((hsi*28+21)*1+lsi)*1] = fp33;
LIBINT2_REALTYPE fp32;
fp32 = fp19 * fp7;
LIBINT2_REALTYPE fp31;
fp31 = fp32 * fp0;
target[((hsi*28+22)*1+lsi)*1] = fp31;
LIBINT2_REALTYPE fp30;
fp30 = fp15 * fp7;
LIBINT2_REALTYPE fp29;
fp29 = fp30 * fp4;
target[((hsi*28+23)*1+lsi)*1] = fp29;
LIBINT2_REALTYPE fp28;
fp28 = fp17 * fp7;
LIBINT2_REALTYPE fp27;
fp27 = fp28 * fp2;
target[((hsi*28+24)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp26;
fp26 = fp15 * fp11;
LIBINT2_REALTYPE fp25;
fp25 = fp26 * fp0;
target[((hsi*28+25)*1+lsi)*1] = fp25;
LIBINT2_REALTYPE fp24;
fp24 = fp17 * fp9;
LIBINT2_REALTYPE fp23;
fp23 = fp24 * fp0;
target[((hsi*28+26)*1+lsi)*1] = fp23;
LIBINT2_REALTYPE fp22;
fp22 = fp15 * fp9;
LIBINT2_REALTYPE fp21;
fp21 = fp22 * fp2;
target[((hsi*28+27)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp48;
fp48 = fp17 * fp8;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp4;
target[((hsi*28+14)*1+lsi)*1] = fp47;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 77 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
