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
#include <_sphemultipole_S_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_S_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,700)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_S_I_prereq(inteval+c, inteval->stack);
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
inteval->targets[0] = &(inteval->stack[((hsi*28+0)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*28+28)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*28+56)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*28+84)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*28+112)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*28+140)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*28+168)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*28+196)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*28+224)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*28+252)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*28+280)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*28+308)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*28+336)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*28+364)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*28+392)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*28+420)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*28+448)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*28+476)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*28+504)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*28+532)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*28+560)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*28+588)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*28+616)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*28+644)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*28+672)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif