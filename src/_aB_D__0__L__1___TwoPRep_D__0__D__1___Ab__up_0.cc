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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_D__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__L__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5146)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*990+14866)*1+lsi)*1]), &(inteval->stack[((hsi*550+2871)*1+lsi)*1]), &(inteval->stack[((hsi*330+3421)*1+lsi)*1]),55);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+15856)*1+lsi)*1]), &(inteval->stack[((hsi*825+2046)*1+lsi)*1]), &(inteval->stack[((hsi*550+2871)*1+lsi)*1]),55);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1980+17506)*1+lsi)*1]), &(inteval->stack[((hsi*1650+15856)*1+lsi)*1]), &(inteval->stack[((hsi*990+14866)*1+lsi)*1]),55);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+14866)*1+lsi)*1]), &(inteval->stack[((hsi*450+4426)*1+lsi)*1]), &(inteval->stack[((hsi*270+4876)*1+lsi)*1]),45);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+15676)*1+lsi)*1]), &(inteval->stack[((hsi*675+3751)*1+lsi)*1]), &(inteval->stack[((hsi*450+4426)*1+lsi)*1]),45);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1620+2046)*1+lsi)*1]), &(inteval->stack[((hsi*1350+15676)*1+lsi)*1]), &(inteval->stack[((hsi*810+14866)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+19486)*1+lsi)*1]), &(inteval->stack[((hsi*1980+17506)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2046)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1188+2046)*1+lsi)*1]), &(inteval->stack[((hsi*660+990)*1+lsi)*1]), &(inteval->stack[((hsi*396+1650)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+14866)*1+lsi)*1]), &(inteval->stack[((hsi*990+0)*1+lsi)*1]), &(inteval->stack[((hsi*660+990)*1+lsi)*1]),66);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2376+24346)*1+lsi)*1]), &(inteval->stack[((hsi*1980+14866)*1+lsi)*1]), &(inteval->stack[((hsi*1188+2046)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+26722)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24346)*1+lsi)*1]), &(inteval->stack[((hsi*1980+17506)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+5146)*1+lsi)*1]), &(inteval->stack[((hsi*5940+26722)*1+lsi)*1]), &(inteval->stack[((hsi*4860+19486)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9720+5146)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
