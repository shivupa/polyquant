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
#include <deriv1eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri2_aB_S__0__S__1___TwoPRep_unit__0__unit__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
LIBINT2_REALTYPE fp0;
fp0 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+2)*1+lsi)*1];
inteval->stack[((hsi*1+5)*1+lsi)*1] = fp0;
LIBINT2_REALTYPE fp1;
fp1 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+1)*1+lsi)*1];
inteval->stack[((hsi*1+4)*1+lsi)*1] = fp1;
LIBINT2_REALTYPE fp2;
fp2 = -1.0000000000000000e+00 * inteval->stack[((hsi*1+0)*1+lsi)*1];
inteval->stack[((hsi*1+3)*1+lsi)*1] = fp2;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1+1)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1+2)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1+3)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1+4)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1+5)*1+lsi)*1]);
/** Number of flops = 3 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
