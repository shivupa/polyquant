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
#include <deriv1_aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_S__0__P__1___TwoPRep_S__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp2;
fp2 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+8)*1+lsi)*1];
LIBINT2_REALTYPE fp1;
fp1 = fp2 - inteval->stack[((hsi*3+17)*1+lsi)*1];
LIBINT2_REALTYPE fp0;
fp0 = fp1 - inteval->stack[((hsi*3+26)*1+lsi)*1];
inteval->stack[((hsi*3+35)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
fp5 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+7)*1+lsi)*1];
LIBINT2_REALTYPE fp4;
fp4 = fp5 - inteval->stack[((hsi*3+16)*1+lsi)*1];
LIBINT2_REALTYPE fp3;
fp3 = fp4 - inteval->stack[((hsi*3+25)*1+lsi)*1];
inteval->stack[((hsi*3+34)*1+lsi)*1] = fp3;
LIBINT2_REALTYPE fp8;
fp8 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+6)*1+lsi)*1];
LIBINT2_REALTYPE fp7;
fp7 = fp8 - inteval->stack[((hsi*3+15)*1+lsi)*1];
LIBINT2_REALTYPE fp6;
fp6 = fp7 - inteval->stack[((hsi*3+24)*1+lsi)*1];
inteval->stack[((hsi*3+33)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp11;
fp11 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+5)*1+lsi)*1];
LIBINT2_REALTYPE fp10;
fp10 = fp11 - inteval->stack[((hsi*3+14)*1+lsi)*1];
LIBINT2_REALTYPE fp9;
fp9 = fp10 - inteval->stack[((hsi*3+23)*1+lsi)*1];
inteval->stack[((hsi*3+32)*1+lsi)*1] = fp9;
LIBINT2_REALTYPE fp14;
fp14 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+4)*1+lsi)*1];
LIBINT2_REALTYPE fp13;
fp13 = fp14 - inteval->stack[((hsi*3+13)*1+lsi)*1];
LIBINT2_REALTYPE fp12;
fp12 = fp13 - inteval->stack[((hsi*3+22)*1+lsi)*1];
inteval->stack[((hsi*3+31)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
fp17 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+3)*1+lsi)*1];
LIBINT2_REALTYPE fp16;
fp16 = fp17 - inteval->stack[((hsi*3+12)*1+lsi)*1];
LIBINT2_REALTYPE fp15;
fp15 = fp16 - inteval->stack[((hsi*3+21)*1+lsi)*1];
inteval->stack[((hsi*3+30)*1+lsi)*1] = fp15;
LIBINT2_REALTYPE fp20;
fp20 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+2)*1+lsi)*1];
LIBINT2_REALTYPE fp19;
fp19 = fp20 - inteval->stack[((hsi*3+11)*1+lsi)*1];
LIBINT2_REALTYPE fp18;
fp18 = fp19 - inteval->stack[((hsi*3+20)*1+lsi)*1];
inteval->stack[((hsi*3+29)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp23;
fp23 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+1)*1+lsi)*1];
LIBINT2_REALTYPE fp22;
fp22 = fp23 - inteval->stack[((hsi*3+10)*1+lsi)*1];
LIBINT2_REALTYPE fp21;
fp21 = fp22 - inteval->stack[((hsi*3+19)*1+lsi)*1];
inteval->stack[((hsi*3+28)*1+lsi)*1] = fp21;
LIBINT2_REALTYPE fp26;
fp26 = -1.0000000000000000e+00 * inteval->stack[((hsi*3+0)*1+lsi)*1];
LIBINT2_REALTYPE fp25;
fp25 = fp26 - inteval->stack[((hsi*3+9)*1+lsi)*1];
LIBINT2_REALTYPE fp24;
fp24 = fp25 - inteval->stack[((hsi*3+18)*1+lsi)*1];
inteval->stack[((hsi*3+27)*1+lsi)*1] = fp24;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3+3)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3+6)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3+9)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3+12)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3+15)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3+27)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3+30)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3+33)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*3+18)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*3+21)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*3+24)*1+lsi)*1]);
/** Number of flops = 27 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
