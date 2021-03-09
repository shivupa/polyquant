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
#include <deriv1eri3_aB_P__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__S__1___TwoPRep_unit__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp1;
fp1 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+8)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp1 - inteval->stack[((hsi*3+17)*1+lsi)*1];
inteval->stack[((hsi*3+26)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp3;
fp3 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+7)*1+lsi)*1];
LIBINT2_REALTYPE fp2;
fp2 = fp3 - inteval->stack[((hsi*3+16)*1+lsi)*1];
inteval->stack[((hsi*3+25)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+6)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 - inteval->stack[((hsi*3+15)*1+lsi)*1];
inteval->stack[((hsi*3+24)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp7;
fp7 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+5)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 - inteval->stack[((hsi*3+14)*1+lsi)*1];
inteval->stack[((hsi*3+23)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp9;
fp9 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+4)*1+lsi)*1];
LIBINT2_REALTYPE fp8;
fp8 = fp9 - inteval->stack[((hsi*3+13)*1+lsi)*1];
inteval->stack[((hsi*3+22)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+3)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp11 - inteval->stack[((hsi*3+12)*1+lsi)*1];
inteval->stack[((hsi*3+21)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp13;
fp13 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 - inteval->stack[((hsi*3+11)*1+lsi)*1];
inteval->stack[((hsi*3+20)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp15;
fp15 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp14;
fp14 = fp15 - inteval->stack[((hsi*3+10)*1+lsi)*1];
inteval->stack[((hsi*3+19)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 - inteval->stack[((hsi*3+9)*1+lsi)*1];
inteval->stack[((hsi*3+18)*1+lsi)*1] = fp16;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3+3)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3+6)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3+18)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3+21)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3+24)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3+9)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3+12)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3+15)*1+lsi)*1]);
/** Number of flops = 18 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
