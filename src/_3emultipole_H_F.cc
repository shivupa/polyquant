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
#include <_3emultipole_H_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _3emultipole_H_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_3emultipole_H_F_prereq(inteval+c, inteval->stack);
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
inteval->targets[0] = &(inteval->stack[((hsi*210+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*210+210)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*210+420)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*210+630)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*210+840)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*210+1050)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*210+1260)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*210+1470)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*210+1680)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*210+1890)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*210+2100)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*210+2310)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*210+2520)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*210+2730)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*210+2940)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*210+3150)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*210+3360)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*210+3570)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*210+3780)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*210+3990)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
