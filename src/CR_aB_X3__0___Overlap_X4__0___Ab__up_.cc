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
void CR_aB_X3__0___Overlap_X4__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*20+0)*1+lsi)*1] = inteval->_0_Overlap_0_x[vi];
LIBINT2_REALTYPE fp66;
fp66 = inteval->PB_x[vi] * target[((hsi*20+0)*1+lsi)*1];
target[((hsi*20+1)*1+lsi)*1] = fp66;
LIBINT2_REALTYPE fp64;
fp64 = inteval->oo2z[vi] * target[((hsi*20+0)*1+lsi)*1];
LIBINT2_REALTYPE fp65;
LIBINT2_REALTYPE fp63;
fp63 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*20+1)*1+lsi)*1], fp64);
target[((hsi*20+2)*1+lsi)*1] = fp63;
LIBINT2_REALTYPE fp61;
fp61 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp60;
fp60 = fp61 * target[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp62;
LIBINT2_REALTYPE fp59;
fp59 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*20+2)*1+lsi)*1], fp60);
target[((hsi*20+3)*1+lsi)*1] = fp59;
LIBINT2_REALTYPE fp54;
fp54 = inteval->PA_x[vi] * target[((hsi*20+0)*1+lsi)*1];
target[((hsi*20+5)*1+lsi)*1] = fp54;
LIBINT2_REALTYPE fp51;
LIBINT2_REALTYPE fp50;
fp50 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+2)*1+lsi)*1], fp60);
target[((hsi*20+7)*1+lsi)*1] = fp50;
LIBINT2_REALTYPE fp57;
fp57 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp56;
fp56 = fp57 * target[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp49;
LIBINT2_REALTYPE fp48;
fp48 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+3)*1+lsi)*1], fp56);
target[((hsi*20+8)*1+lsi)*1] = fp48;
LIBINT2_REALTYPE fp58;
LIBINT2_REALTYPE fp55;
fp55 = libint2::fma_plus(inteval->PB_x[vi], target[((hsi*20+3)*1+lsi)*1], fp56);
target[((hsi*20+4)*1+lsi)*1] = fp55;
LIBINT2_REALTYPE fp53;
LIBINT2_REALTYPE fp52;
fp52 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+1)*1+lsi)*1], fp64);
target[((hsi*20+6)*1+lsi)*1] = fp52;
LIBINT2_REALTYPE fp46;
fp46 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp45;
fp45 = fp46 * target[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp47;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+4)*1+lsi)*1], fp45);
target[((hsi*20+9)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp38;
fp38 = inteval->oo2z[vi] * target[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp40;
fp40 = inteval->oo2z[vi] * target[((hsi*20+1)*1+lsi)*1];
LIBINT2_REALTYPE fp41;
LIBINT2_REALTYPE fp39;
fp39 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+6)*1+lsi)*1], fp40);
LIBINT2_REALTYPE fp37;
fp37 = fp39 + fp38;
target[((hsi*20+11)*1+lsi)*1] = fp37;
LIBINT2_REALTYPE fp33;
fp33 = fp61 * target[((hsi*20+6)*1+lsi)*1];
LIBINT2_REALTYPE fp35;
fp35 = inteval->oo2z[vi] * target[((hsi*20+2)*1+lsi)*1];
LIBINT2_REALTYPE fp36;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+7)*1+lsi)*1], fp35);
LIBINT2_REALTYPE fp32;
fp32 = fp34 + fp33;
target[((hsi*20+12)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp28;
fp28 = fp57 * target[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = inteval->oo2z[vi] * target[((hsi*20+3)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp29;
fp29 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+8)*1+lsi)*1], fp30);
LIBINT2_REALTYPE fp27;
fp27 = fp29 + fp28;
target[((hsi*20+13)*1+lsi)*1] = fp27;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp42;
fp42 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+5)*1+lsi)*1], fp64);
target[((hsi*20+10)*1+lsi)*1] = fp42;
LIBINT2_REALTYPE fp23;
fp23 = fp46 * target[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = inteval->oo2z[vi] * target[((hsi*20+4)*1+lsi)*1];
LIBINT2_REALTYPE fp26;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+9)*1+lsi)*1], fp25);
LIBINT2_REALTYPE fp22;
fp22 = fp24 + fp23;
target[((hsi*20+14)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp20;
fp20 = fp61 * target[((hsi*20+5)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp19;
fp19 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+10)*1+lsi)*1], fp20);
target[((hsi*20+15)*1+lsi)*1] = fp19;
LIBINT2_REALTYPE fp16;
fp16 = inteval->oo2z[vi] * target[((hsi*20+10)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
LIBINT2_REALTYPE fp17;
fp17 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+11)*1+lsi)*1], fp33);
LIBINT2_REALTYPE fp15;
fp15 = fp17 + fp16;
target[((hsi*20+16)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp11;
fp11 = fp61 * target[((hsi*20+11)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp61 * target[((hsi*20+7)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+12)*1+lsi)*1], fp13);
LIBINT2_REALTYPE fp10;
fp10 = fp12 + fp11;
target[((hsi*20+17)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp6;
fp6 = fp57 * target[((hsi*20+12)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp61 * target[((hsi*20+8)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp7;
fp7 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+13)*1+lsi)*1], fp8);
LIBINT2_REALTYPE fp5;
fp5 = fp7 + fp6;
target[((hsi*20+18)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp1;
fp1 = fp46 * target[((hsi*20+13)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp61 * target[((hsi*20+9)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->PA_x[vi], target[((hsi*20+14)*1+lsi)*1], fp3);
LIBINT2_REALTYPE fp0;
fp0 = fp2 + fp1;
target[((hsi*20+19)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 67 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
