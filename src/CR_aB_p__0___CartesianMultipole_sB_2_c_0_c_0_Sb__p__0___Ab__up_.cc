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
void CR_aB_p__0___CartesianMultipole_sB_2_c_0_c_0_Sb__p__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0, const LIBINT2_REALTYPE* src1, const LIBINT2_REALTYPE* src2) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = 0.0000000000000000e+00 + src2[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = 0.0000000000000000e+00 + src1[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 0.0000000000000000e+00 + src0[((hsi*8+2)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = 0.0000000000000000e+00 + src0[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp17;
fp17 = inteval->BO_x[vi] * fp13;
LIBINT2_REALTYPE fp16;
fp16 = fp14 + fp17;
LIBINT2_REALTYPE fp8;
fp8 = 0.0000000000000000e+00 + src0[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = inteval->BO_x[vi] * fp8;
LIBINT2_REALTYPE fp9;
fp9 = fp13 + fp10;
LIBINT2_REALTYPE fp12;
fp12 = inteval->BO_x[vi] * fp9;
LIBINT2_REALTYPE fp11;
fp11 = fp16 + fp12;
LIBINT2_REALTYPE fp37;
fp37 = fp11 * fp7;
LIBINT2_REALTYPE fp36;
fp36 = fp37 * fp0;
target[((hsi*9+8)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp1;
fp1 = 0.0000000000000000e+00 + src2[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = 0.0000000000000000e+00 + src1[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = fp11 * fp6;
LIBINT2_REALTYPE fp38;
fp38 = fp39 * fp1;
target[((hsi*9+7)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp21;
fp21 = inteval->BO_x[vi] * fp16;
LIBINT2_REALTYPE fp19;
fp19 = inteval->BO_x[vi] * fp14;
LIBINT2_REALTYPE fp15;
fp15 = 0.0000000000000000e+00 + src0[((hsi*8+3)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp15 + fp19;
LIBINT2_REALTYPE fp20;
fp20 = fp18 + fp21;
LIBINT2_REALTYPE fp41;
fp41 = fp20 * fp7;
LIBINT2_REALTYPE fp40;
fp40 = fp41 * fp1;
target[((hsi*9+6)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp2;
fp2 = 0.0000000000000000e+00 + src2[((hsi*8+1)*1+lsi)*1];
LIBINT2_REALTYPE fp5;
fp5 = 0.0000000000000000e+00 + src1[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp11 * fp5;
LIBINT2_REALTYPE fp42;
fp42 = fp43 * fp2;
target[((hsi*9+5)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp3;
fp3 = 0.0000000000000000e+00 + src2[((hsi*8+0)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = 0.0000000000000000e+00 + src1[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = fp11 * fp4;
LIBINT2_REALTYPE fp44;
fp44 = fp45 * fp3;
target[((hsi*9+4)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp47;
fp47 = fp20 * fp5;
LIBINT2_REALTYPE fp46;
fp46 = fp47 * fp3;
target[((hsi*9+3)*1+lsi)*1] = fp46;
LIBINT2_REALTYPE fp28;
fp28 = 0.0000000000000000e+00 + src0[((hsi*8+6)*1+lsi)*1];
LIBINT2_REALTYPE fp27;
fp27 = 0.0000000000000000e+00 + src0[((hsi*8+5)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->BO_x[vi] * fp27;
LIBINT2_REALTYPE fp30;
fp30 = fp28 + fp31;
LIBINT2_REALTYPE fp22;
fp22 = 0.0000000000000000e+00 + src0[((hsi*8+4)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = inteval->BO_x[vi] * fp22;
LIBINT2_REALTYPE fp23;
fp23 = fp27 + fp24;
LIBINT2_REALTYPE fp26;
fp26 = inteval->BO_x[vi] * fp23;
LIBINT2_REALTYPE fp25;
fp25 = fp30 + fp26;
LIBINT2_REALTYPE fp49;
fp49 = fp25 * fp7;
LIBINT2_REALTYPE fp48;
fp48 = fp49 * fp2;
target[((hsi*9+2)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp51;
fp51 = fp25 * fp6;
LIBINT2_REALTYPE fp50;
fp50 = fp51 * fp3;
target[((hsi*9+1)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp35;
fp35 = inteval->BO_x[vi] * fp30;
LIBINT2_REALTYPE fp33;
fp33 = inteval->BO_x[vi] * fp28;
LIBINT2_REALTYPE fp29;
fp29 = 0.0000000000000000e+00 + src0[((hsi*8+7)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp29 + fp33;
LIBINT2_REALTYPE fp34;
fp34 = fp32 + fp35;
LIBINT2_REALTYPE fp53;
fp53 = fp34 * fp7;
LIBINT2_REALTYPE fp52;
fp52 = fp53 * fp3;
target[((hsi*9+0)*1+lsi)*1] = fp52;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 54 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
