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
void CR_aB_h__0___CartesianMultipole_sB_1_c_0_c_0_Sb__s__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*12+1)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = fp29 + fp31;
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src1[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp75;
fp75 = fp30 * fp10;
LIBINT2_REALTYPE fp74;
fp74 = fp75 * fp5;
target[((hsi*21+1)*1+lsi)*1] = fp74;
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src2[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp11;
fp11 = 0.0000000000000000e+00 + src1[((hsi*12+0)*1+lsi)*1];
LIBINT2_REALTYPE fp73;
fp73 = fp30 * fp11;
LIBINT2_REALTYPE fp72;
fp72 = fp73 * fp4;
target[((hsi*21+2)*1+lsi)*1] = fp72;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src1[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_x[vi] * fp24;
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*12+9)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = fp25 + fp27;
LIBINT2_REALTYPE fp71;
fp71 = fp26 * fp9;
LIBINT2_REALTYPE fp70;
fp70 = fp71 * fp5;
target[((hsi*21+3)*1+lsi)*1] = fp70;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp69;
fp69 = fp26 * fp11;
LIBINT2_REALTYPE fp68;
fp68 = fp69 * fp3;
target[((hsi*21+4)*1+lsi)*1] = fp68;
LIBINT2_REALTYPE fp20;
fp20 = 0.0000000000000000e+00 + src0[((hsi*12+2)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
fp23 = inteval->BO_x[vi] * fp20;
LIBINT2_REALTYPE fp21;
fp21 = 0.0000000000000000e+00 + src0[((hsi*12+3)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp21 + fp23;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src1[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp67;
fp67 = fp22 * fp8;
LIBINT2_REALTYPE fp66;
fp66 = fp67 * fp5;
target[((hsi*21+5)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp65;
fp65 = fp30 * fp8;
LIBINT2_REALTYPE fp64;
fp64 = fp65 * fp3;
target[((hsi*21+6)*1+lsi)*1] = fp64;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*12+8)*1+lsi)*1];
LIBINT2_REALTYPE fp63;
fp63 = fp22 * fp11;
LIBINT2_REALTYPE fp62;
fp62 = fp63 * fp2;
target[((hsi*21+7)*1+lsi)*1] = fp62;
LIBINT2_REALTYPE fp61;
fp61 = fp30 * fp9;
LIBINT2_REALTYPE fp60;
fp60 = fp61 * fp2;
target[((hsi*21+8)*1+lsi)*1] = fp60;
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src0[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_x[vi] * fp16;
LIBINT2_REALTYPE fp17;
fp17 = 0.0000000000000000e+00 + src0[((hsi*12+7)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp17 + fp19;
LIBINT2_REALTYPE fp59;
fp59 = fp18 * fp7;
LIBINT2_REALTYPE fp58;
fp58 = fp59 * fp5;
target[((hsi*21+9)*1+lsi)*1] = fp58;
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*12+10)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*12+11)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp33 + fp35;
LIBINT2_REALTYPE fp77;
fp77 = fp34 * fp11;
LIBINT2_REALTYPE fp76;
fp76 = fp77 * fp5;
target[((hsi*21+0)*1+lsi)*1] = fp76;
LIBINT2_REALTYPE fp55;
fp55 = fp18 * fp9;
LIBINT2_REALTYPE fp54;
fp54 = fp55 * fp3;
target[((hsi*21+11)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp12;
fp12 = 0.0000000000000000e+00 + src0[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = inteval->BO_x[vi] * fp12;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*12+5)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp13 + fp15;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp53;
fp53 = fp14 * fp6;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp5;
target[((hsi*21+12)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*12+4)*1+lsi)*1];
LIBINT2_REALTYPE fp51;
fp51 = fp30 * fp6;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp1;
target[((hsi*21+13)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp49;
fp49 = fp22 * fp6;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp3;
target[((hsi*21+14)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*12+6)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp14 * fp11;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp0;
target[((hsi*21+15)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp45;
fp45 = fp30 * fp7;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp0;
target[((hsi*21+16)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp43;
fp43 = fp22 * fp9;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp0;
target[((hsi*21+17)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
fp41 = fp14 * fp7;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp3;
target[((hsi*21+18)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp39;
fp39 = fp14 * fp9;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp1;
target[((hsi*21+19)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp37;
fp37 = fp22 * fp7;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp1;
target[((hsi*21+20)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp57;
fp57 = fp18 * fp11;
LIBINT2_REALTYPE fp56;
fp56 = fp57 * fp1;
target[((hsi*21+10)*1+lsi)*1] = fp56;
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
