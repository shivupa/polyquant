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
void CR_aB_s__0___CartesianMultipole_sB_2_c_0_c_1_Sb__f__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = 0.0000000000000000e+00 + src2[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->BO_z[vi] * fp10;
LIBINT2_REALTYPE fp3;
fp3 = fp2 + fp4;
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src1[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = 0.0000000000000000e+00 + src0[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = 0.0000000000000000e+00 + src0[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->BO_x[vi] * fp25;
LIBINT2_REALTYPE fp19;
fp19 = fp32 + fp20;
LIBINT2_REALTYPE fp24;
fp24 = 0.0000000000000000e+00 + src0[((hsi*7+1)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = inteval->BO_x[vi] * fp24;
LIBINT2_REALTYPE fp28;
fp28 = fp25 + fp29;
LIBINT2_REALTYPE fp18;
fp18 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp17;
fp17 = fp19 + fp18;
LIBINT2_REALTYPE fp42;
fp42 = fp17 * fp14;
LIBINT2_REALTYPE fp41;
fp41 = fp42 * fp3;
target[((hsi*10+9)*1+lsi)*1] = fp41;
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src2[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = inteval->BO_z[vi] * fp2;
LIBINT2_REALTYPE fp0;
fp0 = fp5 + fp1;
LIBINT2_REALTYPE fp23;
fp23 = 0.0000000000000000e+00 + src0[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = inteval->BO_x[vi] * fp23;
LIBINT2_REALTYPE fp26;
fp26 = fp24 + fp27;
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp26;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp44;
fp44 = fp30 * fp14;
LIBINT2_REALTYPE fp43;
fp43 = fp44 * fp0;
target[((hsi*10+8)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp16;
fp16 = 0.0000000000000000e+00 + src1[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = fp17 * fp16;
LIBINT2_REALTYPE fp45;
fp45 = fp46 * fp0;
target[((hsi*10+7)*1+lsi)*1] = fp45;
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src1[((hsi*7+2)*1+lsi)*1];
LIBINT2_REALTYPE fp48;
fp48 = fp30 * fp13;
LIBINT2_REALTYPE fp47;
fp47 = fp48 * fp3;
target[((hsi*10+6)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp9;
fp9 = 0.0000000000000000e+00 + src2[((hsi*7+0)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_z[vi] * fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp10 + fp12;
LIBINT2_REALTYPE fp50;
fp50 = fp17 * fp13;
LIBINT2_REALTYPE fp49;
fp49 = fp50 * fp11;
target[((hsi*10+5)*1+lsi)*1] = fp49;
LIBINT2_REALTYPE fp33;
fp33 = 0.0000000000000000e+00 + src0[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
fp36 = inteval->BO_x[vi] * fp32;
LIBINT2_REALTYPE fp35;
fp35 = fp33 + fp36;
LIBINT2_REALTYPE fp22;
fp22 = inteval->BO_x[vi] * fp19;
LIBINT2_REALTYPE fp21;
fp21 = fp35 + fp22;
LIBINT2_REALTYPE fp52;
fp52 = fp21 * fp16;
LIBINT2_REALTYPE fp51;
fp51 = fp52 * fp3;
target[((hsi*10+4)*1+lsi)*1] = fp51;
LIBINT2_REALTYPE fp54;
fp54 = fp21 * fp14;
LIBINT2_REALTYPE fp53;
fp53 = fp54 * fp11;
target[((hsi*10+3)*1+lsi)*1] = fp53;
LIBINT2_REALTYPE fp8;
fp8 = inteval->BO_z[vi] * fp5;
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src2[((hsi*7+4)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp6 + fp8;
LIBINT2_REALTYPE fp56;
fp56 = fp30 * fp16;
LIBINT2_REALTYPE fp55;
fp55 = fp56 * fp7;
target[((hsi*10+2)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src1[((hsi*7+3)*1+lsi)*1];
LIBINT2_REALTYPE fp58;
fp58 = fp30 * fp15;
LIBINT2_REALTYPE fp57;
fp57 = fp58 * fp11;
target[((hsi*10+1)*1+lsi)*1] = fp57;
LIBINT2_REALTYPE fp40;
fp40 = inteval->BO_x[vi] * fp35;
LIBINT2_REALTYPE fp38;
fp38 = inteval->BO_x[vi] * fp33;
LIBINT2_REALTYPE fp34;
fp34 = 0.0000000000000000e+00 + src0[((hsi*7+5)*1+lsi)*1];
LIBINT2_REALTYPE fp37;
fp37 = fp34 + fp38;
LIBINT2_REALTYPE fp39;
fp39 = fp37 + fp40;
LIBINT2_REALTYPE fp60;
fp60 = fp39 * fp16;
LIBINT2_REALTYPE fp59;
fp59 = fp60 * fp11;
target[((hsi*10+0)*1+lsi)*1] = fp59;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 61 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
