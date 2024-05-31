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
void CR_aB_Y3__0___Overlap_Y3__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*16+0)*1+lsi)*1] = inteval->_0_Overlap_0_y[vi];
LIBINT2_REALTYPE fp48;
fp48 = inteval->oo2z[vi] * target[((hsi*16+0)*1+lsi)*1];
LIBINT2_REALTYPE fp50;
fp50 = inteval->PB_y[vi] * target[((hsi*16+0)*1+lsi)*1];
target[((hsi*16+1)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp47;
fp47 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*16+1)*1+lsi)*1], fp48);
target[((hsi*16+2)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp45;
fp45 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp44;
fp44 = fp45 * target[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp38;
fp38 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+2)*1+lsi)*1], fp44);
target[((hsi*16+6)*1+lsi)*1] = fp38;
LIBINT2_REALTYPE fp42;
fp42 = inteval->PA_y[vi] * target[((hsi*16+0)*1+lsi)*1];
target[((hsi*16+4)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+1)*1+lsi)*1], fp48);
target[((hsi*16+5)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp23;
fp23 = fp45 * target[((hsi*16+5)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * target[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+6)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*16+10)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp28;
fp28 = inteval->oo2z[vi] * target[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->oo2z[vi] * target[((hsi*16+1)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+5)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
target[((hsi*16+9)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+4)*1+lsi)*1], fp48);
target[((hsi*16+8)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp36;
fp36 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp35;
fp35 = fp36 * target[((hsi*16+2)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp43;
fp43 = libint2::fma_plus(inteval->PB_y[vi], target[((hsi*16+2)*1+lsi)*1], fp44);
target[((hsi*16+3)*1+lsi)*1] = fp43;
LIBINT2_REALTYPE fp37;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+3)*1+lsi)*1], fp35);
target[((hsi*16+7)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp18;
fp18 = fp36 * target[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp20;
fp20 = inteval->oo2z[vi] * target[((hsi*16+3)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+7)*1+lsi)*1], fp20);
LIBINT2_REALTYPE fp17;
fp17 = fp19 + fp18;
target[((hsi*16+11)*1+lsi)*1] = fp17;
LIBINT2_REALTYPE fp1;
fp1 = fp36 * target[((hsi*16+10)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp45 * target[((hsi*16+7)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+11)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*16+15)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp6;
fp6 = fp45 * target[((hsi*16+9)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp45 * target[((hsi*16+6)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+10)*1+lsi)*1], fp8);
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*16+14)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp11;
fp11 = inteval->oo2z[vi] * target[((hsi*16+8)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+9)*1+lsi)*1], fp23);
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*16+13)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp15;
fp15 = fp45 * target[((hsi*16+4)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->PA_y[vi], target[((hsi*16+8)*1+lsi)*1], fp15);
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
