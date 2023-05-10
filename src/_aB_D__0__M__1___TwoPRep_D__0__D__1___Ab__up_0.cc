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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__M__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__M__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6169)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__M__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1188+18049)*1+lsi)*1]), &(inteval->stack[((hsi*660+3408)*1+lsi)*1]), &(inteval->stack[((hsi*396+4068)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+19237)*1+lsi)*1]), &(inteval->stack[((hsi*990+2418)*1+lsi)*1]), &(inteval->stack[((hsi*660+3408)*1+lsi)*1]),66);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2376+21217)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19237)*1+lsi)*1]), &(inteval->stack[((hsi*1188+18049)*1+lsi)*1]),66);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*990+18049)*1+lsi)*1]), &(inteval->stack[((hsi*550+5289)*1+lsi)*1]), &(inteval->stack[((hsi*330+5839)*1+lsi)*1]),55);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+19039)*1+lsi)*1]), &(inteval->stack[((hsi*825+4464)*1+lsi)*1]), &(inteval->stack[((hsi*550+5289)*1+lsi)*1]),55);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1980+2418)*1+lsi)*1]), &(inteval->stack[((hsi*1650+19039)*1+lsi)*1]), &(inteval->stack[((hsi*990+18049)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+23593)*1+lsi)*1]), &(inteval->stack[((hsi*2376+21217)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2418)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1404+2418)*1+lsi)*1]), &(inteval->stack[((hsi*780+1170)*1+lsi)*1]), &(inteval->stack[((hsi*468+1950)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+18049)*1+lsi)*1]), &(inteval->stack[((hsi*1170+0)*1+lsi)*1]), &(inteval->stack[((hsi*780+1170)*1+lsi)*1]),78);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2808+29533)*1+lsi)*1]), &(inteval->stack[((hsi*2340+18049)*1+lsi)*1]), &(inteval->stack[((hsi*1404+2418)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+32341)*1+lsi)*1]), &(inteval->stack[((hsi*2808+29533)*1+lsi)*1]), &(inteval->stack[((hsi*2376+21217)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+6169)*1+lsi)*1]), &(inteval->stack[((hsi*7128+32341)*1+lsi)*1]), &(inteval->stack[((hsi*5940+23593)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11880+6169)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
