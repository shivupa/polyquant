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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__M__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+14540)*1+lsi)*1]), &(inteval->stack[((hsi*468+3446)*1+lsi)*1]), &(inteval->stack[((hsi*396+3914)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+15728)*1+lsi)*1]), &(inteval->stack[((hsi*396+3914)*1+lsi)*1]), &(inteval->stack[((hsi*330+4310)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+16718)*1+lsi)*1]), &(inteval->stack[((hsi*1188+14540)*1+lsi)*1]), &(inteval->stack[((hsi*990+15728)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+18698)*1+lsi)*1]), &(inteval->stack[((hsi*546+2900)*1+lsi)*1]), &(inteval->stack[((hsi*468+3446)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+20102)*1+lsi)*1]), &(inteval->stack[((hsi*1404+18698)*1+lsi)*1]), &(inteval->stack[((hsi*1188+14540)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+22478)*1+lsi)*1]), &(inteval->stack[((hsi*2376+20102)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16718)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+14540)*1+lsi)*1]), &(inteval->stack[((hsi*780+910)*1+lsi)*1]), &(inteval->stack[((hsi*660+1690)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+16520)*1+lsi)*1]), &(inteval->stack[((hsi*660+1690)*1+lsi)*1]), &(inteval->stack[((hsi*550+2350)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+18170)*1+lsi)*1]), &(inteval->stack[((hsi*1980+14540)*1+lsi)*1]), &(inteval->stack[((hsi*1650+16520)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+1690)*1+lsi)*1]), &(inteval->stack[((hsi*910+0)*1+lsi)*1]), &(inteval->stack[((hsi*780+910)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+25778)*1+lsi)*1]), &(inteval->stack[((hsi*2340+1690)*1+lsi)*1]), &(inteval->stack[((hsi*1980+14540)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+29738)*1+lsi)*1]), &(inteval->stack[((hsi*3960+25778)*1+lsi)*1]), &(inteval->stack[((hsi*3300+18170)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*9900+4640)*1+lsi)*1]), &(inteval->stack[((hsi*5500+29738)*1+lsi)*1]), &(inteval->stack[((hsi*3300+22478)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*9900+4640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
