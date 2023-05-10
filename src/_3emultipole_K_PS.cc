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
#include <_3emultipole_K_PS_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_K_PS(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,47520)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_3emultipole_K_PS_prereq(inteval+c, inteval->stack);
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
inteval->targets[0] = &(inteval->stack[((hsi*2376+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2376+2376)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2376+4752)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2376+7128)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2376+9504)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2376+11880)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2376+14256)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2376+16632)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2376+19008)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2376+21384)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2376+23760)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2376+26136)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*2376+28512)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*2376+30888)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*2376+33264)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*2376+35640)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*2376+38016)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*2376+40392)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*2376+42768)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*2376+45144)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
