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
#include <_3emultipole_S_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_S_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,420)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_3emultipole_S_H_prereq(inteval+c, inteval->stack);
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
inteval->targets[0] = &(inteval->stack[((hsi*21+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*21+21)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*21+42)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*21+63)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*21+84)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*21+105)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*21+126)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*21+147)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*21+168)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*21+189)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*21+210)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*21+231)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*21+252)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*21+273)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*21+294)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*21+315)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*21+336)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*21+357)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*21+378)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*21+399)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
