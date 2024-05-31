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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14824)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+51112)*1+lsi)*1]), &(inteval->stack[((hsi*1620+8020)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9640)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+54892)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5995)*1+lsi)*1]), &(inteval->stack[((hsi*1620+8020)*1+lsi)*1]),45);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*7560+59752)*1+lsi)*1]), &(inteval->stack[((hsi*4860+54892)*1+lsi)*1]), &(inteval->stack[((hsi*3780+51112)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+51112)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12520)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13816)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+54136)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10900)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12520)*1+lsi)*1]),36);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*6048+5995)*1+lsi)*1]), &(inteval->stack[((hsi*3888+54136)*1+lsi)*1]), &(inteval->stack[((hsi*3024+51112)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*18144+67312)*1+lsi)*1]), &(inteval->stack[((hsi*7560+59752)*1+lsi)*1]), &(inteval->stack[((hsi*6048+5995)*1+lsi)*1]),168);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+5995)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2475)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4455)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+51112)*1+lsi)*1]), &(inteval->stack[((hsi*2475+0)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2475)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+85456)*1+lsi)*1]), &(inteval->stack[((hsi*5940+51112)*1+lsi)*1]), &(inteval->stack[((hsi*4620+5995)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*22680+94696)*1+lsi)*1]), &(inteval->stack[((hsi*9240+85456)*1+lsi)*1]), &(inteval->stack[((hsi*7560+59752)*1+lsi)*1]),168);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*36288+14824)*1+lsi)*1]), &(inteval->stack[((hsi*22680+94696)*1+lsi)*1]), &(inteval->stack[((hsi*18144+67312)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*36288+14824)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
