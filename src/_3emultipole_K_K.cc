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
#include <_3emultipole_K_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25920)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_3emultipole_K_K_prereq(inteval+c, inteval->stack);
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
inteval->targets[0] = &(inteval->stack[((hsi*1296+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1296+1296)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1296+2592)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1296+3888)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1296+5184)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1296+6480)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1296+7776)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1296+9072)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1296+10368)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1296+11664)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1296+12960)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1296+14256)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*1296+15552)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*1296+16848)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*1296+18144)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*1296+19440)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*1296+20736)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*1296+22032)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*1296+23328)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*1296+24624)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
