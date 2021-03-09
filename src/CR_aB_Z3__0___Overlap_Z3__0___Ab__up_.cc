/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
void CR_aB_Z3__0___Overlap_Z3__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*16+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * target[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_z[vi] * target[((hsi*16+0)*1+lsi)*1];
target[((hsi*16+1)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp49;
fp49 = inteval->PB_z[vi] * target[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
fp47 = fp49 + fp48;
target[((hsi*16+2)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp45 * target[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
fp39 = inteval->PA_z[vi] * target[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = fp39 + fp44;
target[((hsi*16+6)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_z[vi] * target[((hsi*16+0)*1+lsi)*1];
target[((hsi*16+4)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
fp41 = inteval->PA_z[vi] * target[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = fp41 + fp48;
target[((hsi*16+5)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp23;
fp23 = fp45 * target[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * target[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
fp26 = inteval->PA_z[vi] * target[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp26 + fp25;
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*16+10)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2z[vi] * target[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->oo2z[vi] * target[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
fp31 = inteval->PA_z[vi] * target[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp29;
fp29 = fp31 + fp30;
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
target[((hsi*16+9)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp33;
fp33 = inteval->PA_z[vi] * target[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp32;
fp32 = fp33 + fp48;
target[((hsi*16+8)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp36;
fp36 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp36 * target[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
fp46 = inteval->PB_z[vi] * target[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp43;
fp43 = fp46 + fp44;
target[((hsi*16+3)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp37;
fp37 = inteval->PA_z[vi] * target[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp34;
fp34 = fp37 + fp35;
target[((hsi*16+7)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp18;
fp18 = fp36 * target[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2z[vi] * target[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = inteval->PA_z[vi] * target[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp21 + fp20;
LIBINT2_REALTYPE fp17;
fp17 = fp19 + fp18;
target[((hsi*16+11)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp1;
fp1 = fp36 * target[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp45 * target[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = inteval->PA_z[vi] * target[((hsi*16+11)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp4 + fp3;
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*16+15)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = fp45 * target[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp45 * target[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = inteval->PA_z[vi] * target[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp9 + fp8;
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*16+14)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * target[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = inteval->PA_z[vi] * target[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 + fp23;
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*16+13)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = fp45 * target[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = inteval->PA_z[vi] * target[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp16 + fp15;
target[((hsi*16+12)*1+lsi)*1] = fp14;
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
