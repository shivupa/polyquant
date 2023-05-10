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
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7285)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1404+21541)*1+lsi)*1]), &(inteval->stack[((hsi*780+3991)*1+lsi)*1]), &(inteval->stack[((hsi*468+4771)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+22945)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2821)*1+lsi)*1]), &(inteval->stack[((hsi*780+3991)*1+lsi)*1]),78);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2808+25285)*1+lsi)*1]), &(inteval->stack[((hsi*2340+22945)*1+lsi)*1]), &(inteval->stack[((hsi*1404+21541)*1+lsi)*1]),78);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1188+21541)*1+lsi)*1]), &(inteval->stack[((hsi*660+6229)*1+lsi)*1]), &(inteval->stack[((hsi*396+6889)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+22729)*1+lsi)*1]), &(inteval->stack[((hsi*990+5239)*1+lsi)*1]), &(inteval->stack[((hsi*660+6229)*1+lsi)*1]),66);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2376+2821)*1+lsi)*1]), &(inteval->stack[((hsi*1980+22729)*1+lsi)*1]), &(inteval->stack[((hsi*1188+21541)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+28093)*1+lsi)*1]), &(inteval->stack[((hsi*2808+25285)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2821)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1638+2821)*1+lsi)*1]), &(inteval->stack[((hsi*910+1365)*1+lsi)*1]), &(inteval->stack[((hsi*546+2275)*1+lsi)*1]),91);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2730+21541)*1+lsi)*1]), &(inteval->stack[((hsi*1365+0)*1+lsi)*1]), &(inteval->stack[((hsi*910+1365)*1+lsi)*1]),91);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*3276+35221)*1+lsi)*1]), &(inteval->stack[((hsi*2730+21541)*1+lsi)*1]), &(inteval->stack[((hsi*1638+2821)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+38497)*1+lsi)*1]), &(inteval->stack[((hsi*3276+35221)*1+lsi)*1]), &(inteval->stack[((hsi*2808+25285)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+7285)*1+lsi)*1]), &(inteval->stack[((hsi*8424+38497)*1+lsi)*1]), &(inteval->stack[((hsi*7128+28093)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*14256+7285)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
