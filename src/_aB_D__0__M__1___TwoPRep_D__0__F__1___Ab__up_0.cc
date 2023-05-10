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
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__M__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8990)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1188+28790)*1+lsi)*1]), &(inteval->stack[((hsi*660+6229)*1+lsi)*1]), &(inteval->stack[((hsi*396+6889)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+29978)*1+lsi)*1]), &(inteval->stack[((hsi*990+5239)*1+lsi)*1]), &(inteval->stack[((hsi*660+6229)*1+lsi)*1]),66);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2376+31958)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29978)*1+lsi)*1]), &(inteval->stack[((hsi*1188+28790)*1+lsi)*1]),66);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1404+28790)*1+lsi)*1]), &(inteval->stack[((hsi*780+3991)*1+lsi)*1]), &(inteval->stack[((hsi*468+4771)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+4771)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2821)*1+lsi)*1]), &(inteval->stack[((hsi*780+3991)*1+lsi)*1]),78);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2808+34334)*1+lsi)*1]), &(inteval->stack[((hsi*2340+4771)*1+lsi)*1]), &(inteval->stack[((hsi*1404+28790)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+37142)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34334)*1+lsi)*1]), &(inteval->stack[((hsi*2376+31958)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*990+2821)*1+lsi)*1]), &(inteval->stack[((hsi*550+8110)*1+lsi)*1]), &(inteval->stack[((hsi*330+8660)*1+lsi)*1]),55);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+3811)*1+lsi)*1]), &(inteval->stack[((hsi*825+7285)*1+lsi)*1]), &(inteval->stack[((hsi*550+8110)*1+lsi)*1]),55);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1980+5461)*1+lsi)*1]), &(inteval->stack[((hsi*1650+3811)*1+lsi)*1]), &(inteval->stack[((hsi*990+2821)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+44270)*1+lsi)*1]), &(inteval->stack[((hsi*2376+31958)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5461)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+50210)*1+lsi)*1]), &(inteval->stack[((hsi*7128+37142)*1+lsi)*1]), &(inteval->stack[((hsi*5940+44270)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1638+2821)*1+lsi)*1]), &(inteval->stack[((hsi*910+1365)*1+lsi)*1]), &(inteval->stack[((hsi*546+2275)*1+lsi)*1]),91);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2730+44270)*1+lsi)*1]), &(inteval->stack[((hsi*1365+0)*1+lsi)*1]), &(inteval->stack[((hsi*910+1365)*1+lsi)*1]),91);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*3276+28790)*1+lsi)*1]), &(inteval->stack[((hsi*2730+44270)*1+lsi)*1]), &(inteval->stack[((hsi*1638+2821)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+28790)*1+lsi)*1]), &(inteval->stack[((hsi*2808+34334)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+62090)*1+lsi)*1]), &(inteval->stack[((hsi*8424+0)*1+lsi)*1]), &(inteval->stack[((hsi*7128+37142)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+8990)*1+lsi)*1]), &(inteval->stack[((hsi*14256+62090)*1+lsi)*1]), &(inteval->stack[((hsi*11880+50210)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19800+8990)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
