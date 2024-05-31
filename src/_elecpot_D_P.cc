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
#include <_elecpot_D_P_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_D_P(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_D_P_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp27;
LIBINT2_REALTYPE fp26;
fp26 = libint2::fma_plus(inteval->AB_y[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+2)*1+lsi)*1]);
inteval->stack[((hsi*18+17)*1+lsi)*1] = fp26;
LIBINT2_REALTYPE fp23;
LIBINT2_REALTYPE fp22;
fp22 = libint2::fma_plus(inteval->AB_z[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+4)*1+lsi)*1]);
inteval->stack[((hsi*18+18)*1+lsi)*1] = fp22;
LIBINT2_REALTYPE fp13;
LIBINT2_REALTYPE fp12;
fp12 = libint2::fma_plus(inteval->AB_x[vi], inteval->stack[((hsi*1+7)*1+lsi)*1], inteval->stack[((hsi*1+6)*1+lsi)*1]);
inteval->stack[((hsi*18+19)*1+lsi)*1] = fp12;
LIBINT2_REALTYPE fp17;
LIBINT2_REALTYPE fp16;
fp16 = libint2::fma_plus(inteval->AB_y[vi], inteval->stack[((hsi*1+7)*1+lsi)*1], inteval->stack[((hsi*1+8)*1+lsi)*1]);
inteval->stack[((hsi*18+20)*1+lsi)*1] = fp16;
LIBINT2_REALTYPE fp7;
LIBINT2_REALTYPE fp6;
fp6 = libint2::fma_plus(inteval->AB_z[vi], inteval->stack[((hsi*1+7)*1+lsi)*1], inteval->stack[((hsi*1+9)*1+lsi)*1]);
inteval->stack[((hsi*18+21)*1+lsi)*1] = fp6;
LIBINT2_REALTYPE fp3;
LIBINT2_REALTYPE fp2;
fp2 = libint2::fma_plus(inteval->AB_x[vi], inteval->stack[((hsi*1+12)*1+lsi)*1], inteval->stack[((hsi*1+11)*1+lsi)*1]);
inteval->stack[((hsi*18+22)*1+lsi)*1] = fp2;
LIBINT2_REALTYPE fp1;
LIBINT2_REALTYPE fp0;
fp0 = libint2::fma_plus(inteval->AB_y[vi], inteval->stack[((hsi*1+12)*1+lsi)*1], inteval->stack[((hsi*1+13)*1+lsi)*1]);
inteval->stack[((hsi*18+23)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp5;
LIBINT2_REALTYPE fp4;
fp4 = libint2::fma_plus(inteval->AB_z[vi], inteval->stack[((hsi*1+12)*1+lsi)*1], inteval->stack[((hsi*1+14)*1+lsi)*1]);
inteval->stack[((hsi*18+24)*1+lsi)*1] = fp4;
LIBINT2_REALTYPE fp35;
LIBINT2_REALTYPE fp34;
fp34 = libint2::fma_plus(inteval->AB_x[vi], inteval->stack[((hsi*1+1)*1+lsi)*1], inteval->stack[((hsi*1+0)*1+lsi)*1]);
inteval->stack[((hsi*18+16)*1+lsi)*1] = fp34;
LIBINT2_REALTYPE fp33;
LIBINT2_REALTYPE fp32;
fp32 = libint2::fma_plus(inteval->AB_y[vi], inteval->stack[((hsi*1+3)*1+lsi)*1], inteval->stack[((hsi*1+6)*1+lsi)*1]);
inteval->stack[((hsi*18+26)*1+lsi)*1] = fp32;
LIBINT2_REALTYPE fp19;
LIBINT2_REALTYPE fp18;
fp18 = libint2::fma_plus(inteval->AB_z[vi], inteval->stack[((hsi*1+3)*1+lsi)*1], inteval->stack[((hsi*1+15)*1+lsi)*1]);
inteval->stack[((hsi*18+27)*1+lsi)*1] = fp18;
LIBINT2_REALTYPE fp25;
LIBINT2_REALTYPE fp24;
fp24 = libint2::fma_plus(inteval->AB_x[vi], inteval->stack[((hsi*1+5)*1+lsi)*1], inteval->stack[((hsi*1+4)*1+lsi)*1]);
inteval->stack[((hsi*18+28)*1+lsi)*1] = fp24;
LIBINT2_REALTYPE fp21;
LIBINT2_REALTYPE fp20;
fp20 = libint2::fma_plus(inteval->AB_y[vi], inteval->stack[((hsi*1+5)*1+lsi)*1], inteval->stack[((hsi*1+15)*1+lsi)*1]);
inteval->stack[((hsi*18+29)*1+lsi)*1] = fp20;
LIBINT2_REALTYPE fp31;
LIBINT2_REALTYPE fp30;
fp30 = libint2::fma_plus(inteval->AB_z[vi], inteval->stack[((hsi*1+5)*1+lsi)*1], inteval->stack[((hsi*1+11)*1+lsi)*1]);
inteval->stack[((hsi*18+30)*1+lsi)*1] = fp30;
LIBINT2_REALTYPE fp11;
LIBINT2_REALTYPE fp10;
fp10 = libint2::fma_plus(inteval->AB_x[vi], inteval->stack[((hsi*1+10)*1+lsi)*1], inteval->stack[((hsi*1+15)*1+lsi)*1]);
inteval->stack[((hsi*18+31)*1+lsi)*1] = fp10;
LIBINT2_REALTYPE fp9;
LIBINT2_REALTYPE fp8;
fp8 = libint2::fma_plus(inteval->AB_y[vi], inteval->stack[((hsi*1+10)*1+lsi)*1], inteval->stack[((hsi*1+9)*1+lsi)*1]);
inteval->stack[((hsi*18+32)*1+lsi)*1] = fp8;
LIBINT2_REALTYPE fp15;
LIBINT2_REALTYPE fp14;
fp14 = libint2::fma_plus(inteval->AB_z[vi], inteval->stack[((hsi*1+10)*1+lsi)*1], inteval->stack[((hsi*1+13)*1+lsi)*1]);
inteval->stack[((hsi*18+33)*1+lsi)*1] = fp14;
LIBINT2_REALTYPE fp29;
LIBINT2_REALTYPE fp28;
fp28 = libint2::fma_plus(inteval->AB_x[vi], inteval->stack[((hsi*1+3)*1+lsi)*1], inteval->stack[((hsi*1+2)*1+lsi)*1]);
inteval->stack[((hsi*18+25)*1+lsi)*1] = fp28;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*18+16)*1+lsi)*1]);
/** Number of flops = 36 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
