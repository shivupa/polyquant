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
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__L__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__L__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3904)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__L__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+12004)*1+lsi)*1]), &(inteval->stack[((hsi*396+2908)*1+lsi)*1]), &(inteval->stack[((hsi*330+3304)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+12994)*1+lsi)*1]), &(inteval->stack[((hsi*330+3304)*1+lsi)*1]), &(inteval->stack[((hsi*270+3634)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+13804)*1+lsi)*1]), &(inteval->stack[((hsi*990+12004)*1+lsi)*1]), &(inteval->stack[((hsi*810+12994)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+15424)*1+lsi)*1]), &(inteval->stack[((hsi*468+2440)*1+lsi)*1]), &(inteval->stack[((hsi*396+2908)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+16612)*1+lsi)*1]), &(inteval->stack[((hsi*1188+15424)*1+lsi)*1]), &(inteval->stack[((hsi*990+12004)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+18592)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16612)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13804)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+12004)*1+lsi)*1]), &(inteval->stack[((hsi*660+780)*1+lsi)*1]), &(inteval->stack[((hsi*550+1440)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+13654)*1+lsi)*1]), &(inteval->stack[((hsi*550+1440)*1+lsi)*1]), &(inteval->stack[((hsi*450+1990)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+15004)*1+lsi)*1]), &(inteval->stack[((hsi*1650+12004)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13654)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+1440)*1+lsi)*1]), &(inteval->stack[((hsi*780+0)*1+lsi)*1]), &(inteval->stack[((hsi*660+780)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+21292)*1+lsi)*1]), &(inteval->stack[((hsi*1980+1440)*1+lsi)*1]), &(inteval->stack[((hsi*1650+12004)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+24592)*1+lsi)*1]), &(inteval->stack[((hsi*3300+21292)*1+lsi)*1]), &(inteval->stack[((hsi*2700+15004)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*8100+3904)*1+lsi)*1]), &(inteval->stack[((hsi*4500+24592)*1+lsi)*1]), &(inteval->stack[((hsi*2700+18592)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8100+3904)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
