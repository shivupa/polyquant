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
#include <_3emultipole_L_M_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_L_M(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,49500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_3emultipole_L_M_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2475+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2475+2475)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2475+4950)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2475+7425)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2475+9900)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2475+12375)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2475+14850)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2475+17325)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2475+19800)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2475+22275)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2475+24750)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2475+27225)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*2475+29700)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*2475+32175)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*2475+34650)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*2475+37125)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*2475+39600)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*2475+42075)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*2475+44550)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*2475+47025)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif