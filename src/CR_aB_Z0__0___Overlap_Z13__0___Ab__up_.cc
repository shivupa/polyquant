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
void CR_aB_Z0__0___Overlap_Z13__0___Ab__up_(const Libint_t* inteval, LIBINT2_REALTYPE* target, const LIBINT2_REALTYPE* src0) {

LIBINT2_REALTYPE*const  stack = target;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
target[((hsi*14+0)*1+lsi)*1] = inteval->_0_Overlap_0_z[vi];
LIBINT2_REALTYPE fp47;
fp47 = inteval->PB_z[vi] * target[((hsi*14+0)*1+lsi)*1];
target[((hsi*14+1)*1+lsi)*1] = fp47;
LIBINT2_REALTYPE fp42;
fp42 = 2.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp41;
fp41 = fp42 * target[((hsi*14+1)*1+lsi)*1];
LIBINT2_REALTYPE fp45;
fp45 = inteval->oo2z[vi] * target[((hsi*14+0)*1+lsi)*1];
LIBINT2_REALTYPE fp46;
LIBINT2_REALTYPE fp44;
fp44 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+1)*1+lsi)*1], fp45);
target[((hsi*14+2)*1+lsi)*1] = fp44;
LIBINT2_REALTYPE fp43;
LIBINT2_REALTYPE fp40;
fp40 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+2)*1+lsi)*1], fp41);
target[((hsi*14+3)*1+lsi)*1] = fp40;
LIBINT2_REALTYPE fp34;
fp34 = 4.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp33;
fp33 = fp34 * target[((hsi*14+3)*1+lsi)*1];
LIBINT2_REALTYPE fp38;
fp38 = 3.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp37;
fp37 = fp38 * target[((hsi*14+2)*1+lsi)*1];
LIBINT2_REALTYPE fp39;
LIBINT2_REALTYPE fp36;
fp36 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+3)*1+lsi)*1], fp37);
target[((hsi*14+4)*1+lsi)*1] = fp36;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+4)*1+lsi)*1], fp33);
target[((hsi*14+5)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp26;
fp26 = 6.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp25;
fp25 = fp26 * target[((hsi*14+5)*1+lsi)*1];
LIBINT2_REALTYPE fp30;
fp30 = 5.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp29;
fp29 = fp30 * target[((hsi*14+4)*1+lsi)*1];
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+5)*1+lsi)*1], fp29);
target[((hsi*14+6)*1+lsi)*1] = fp28;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+6)*1+lsi)*1], fp25);
target[((hsi*14+7)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp18;
fp18 = 8.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp17;
fp17 = fp18 * target[((hsi*14+7)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = 7.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp21;
fp21 = fp22 * target[((hsi*14+6)*1+lsi)*1];
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+7)*1+lsi)*1], fp21);
target[((hsi*14+8)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+8)*1+lsi)*1], fp17);
target[((hsi*14+9)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp10;
fp10 = 1.0000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp9;
fp9 = fp10 * target[((hsi*14+9)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = 9.0000000000000000e+00 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp13;
fp13 = fp14 * target[((hsi*14+8)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+9)*1+lsi)*1], fp13);
target[((hsi*14+10)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+10)*1+lsi)*1], fp9);
target[((hsi*14+11)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp6;
fp6 = 1.1000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp5;
fp5 = fp6 * target[((hsi*14+10)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+11)*1+lsi)*1], fp5);
target[((hsi*14+12)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp2;
fp2 = 1.2000000000000000e+01 * inteval->oo2z[vi];
LIBINT2_REALTYPE fp1;
fp1 = fp2 * target[((hsi*14+11)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->PB_z[vi], target[((hsi*14+12)*1+lsi)*1], fp1);
target[((hsi*14+13)*1+lsi)*1] = fp0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
/** Number of flops = 48 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
