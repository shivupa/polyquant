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
#include <deriv1eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri2_aB_S__0__D__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+17)*1+lsi)*1];
inteval->stack[((hsi*6+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp1;
fp1 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+16)*1+lsi)*1];
inteval->stack[((hsi*6+34)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp2;
fp2 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+15)*1+lsi)*1];
inteval->stack[((hsi*6+33)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp3;
fp3 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+14)*1+lsi)*1];
inteval->stack[((hsi*6+32)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp4;
fp4 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+13)*1+lsi)*1];
inteval->stack[((hsi*6+31)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+12)*1+lsi)*1];
inteval->stack[((hsi*6+30)*1+lsi)*1] = fp5;
LIBINT2_REALTYPE fp6;
fp6 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+11)*1+lsi)*1];
inteval->stack[((hsi*6+29)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp7;
fp7 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+10)*1+lsi)*1];
inteval->stack[((hsi*6+28)*1+lsi)*1] = fp7;
LIBINT2_REALTYPE fp8;
fp8 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+9)*1+lsi)*1];
inteval->stack[((hsi*6+27)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp9;
fp9 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+8)*1+lsi)*1];
inteval->stack[((hsi*6+26)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp10;
fp10 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+7)*1+lsi)*1];
inteval->stack[((hsi*6+25)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+6)*1+lsi)*1];
inteval->stack[((hsi*6+24)*1+lsi)*1] = fp11;
LIBINT2_REALTYPE fp12;
fp12 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+5)*1+lsi)*1];
inteval->stack[((hsi*6+23)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp13;
fp13 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+4)*1+lsi)*1];
inteval->stack[((hsi*6+22)*1+lsi)*1] = fp13;
LIBINT2_REALTYPE fp14;
fp14 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+3)*1+lsi)*1];
inteval->stack[((hsi*6+21)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp15;
fp15 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+2)*1+lsi)*1];
inteval->stack[((hsi*6+20)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp16;
fp16 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+1)*1+lsi)*1];
inteval->stack[((hsi*6+19)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*6+0)*1+lsi)*1];
inteval->stack[((hsi*6+18)*1+lsi)*1] = fp17;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6+6)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6+12)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6+18)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6+24)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6+30)*1+lsi)*1]);
/** Number of flops = 18 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
