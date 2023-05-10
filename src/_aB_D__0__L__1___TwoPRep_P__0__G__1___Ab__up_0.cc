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
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__L__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__L__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__L__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+17510)*1+lsi)*1]), &(inteval->stack[((hsi*396+4364)*1+lsi)*1]), &(inteval->stack[((hsi*330+4760)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+18500)*1+lsi)*1]), &(inteval->stack[((hsi*468+3896)*1+lsi)*1]), &(inteval->stack[((hsi*396+4364)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+19688)*1+lsi)*1]), &(inteval->stack[((hsi*1188+18500)*1+lsi)*1]), &(inteval->stack[((hsi*990+17510)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+21668)*1+lsi)*1]), &(inteval->stack[((hsi*330+4760)*1+lsi)*1]), &(inteval->stack[((hsi*270+5090)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+22478)*1+lsi)*1]), &(inteval->stack[((hsi*990+17510)*1+lsi)*1]), &(inteval->stack[((hsi*810+21668)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+24098)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19688)*1+lsi)*1]), &(inteval->stack[((hsi*1620+22478)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+21668)*1+lsi)*1]), &(inteval->stack[((hsi*546+3350)*1+lsi)*1]), &(inteval->stack[((hsi*468+3896)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+26798)*1+lsi)*1]), &(inteval->stack[((hsi*1404+21668)*1+lsi)*1]), &(inteval->stack[((hsi*1188+18500)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+29174)*1+lsi)*1]), &(inteval->stack[((hsi*2376+26798)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19688)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+17510)*1+lsi)*1]), &(inteval->stack[((hsi*3300+29174)*1+lsi)*1]), &(inteval->stack[((hsi*2700+24098)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+3350)*1+lsi)*1]), &(inteval->stack[((hsi*660+1690)*1+lsi)*1]), &(inteval->stack[((hsi*550+2350)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+21560)*1+lsi)*1]), &(inteval->stack[((hsi*780+910)*1+lsi)*1]), &(inteval->stack[((hsi*660+1690)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+23540)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21560)*1+lsi)*1]), &(inteval->stack[((hsi*1650+3350)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+26840)*1+lsi)*1]), &(inteval->stack[((hsi*550+2350)*1+lsi)*1]), &(inteval->stack[((hsi*450+2900)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+28190)*1+lsi)*1]), &(inteval->stack[((hsi*1650+3350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+26840)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+30890)*1+lsi)*1]), &(inteval->stack[((hsi*3300+23540)*1+lsi)*1]), &(inteval->stack[((hsi*2700+28190)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+26840)*1+lsi)*1]), &(inteval->stack[((hsi*910+0)*1+lsi)*1]), &(inteval->stack[((hsi*780+910)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+0)*1+lsi)*1]), &(inteval->stack[((hsi*2340+26840)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21560)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+35390)*1+lsi)*1]), &(inteval->stack[((hsi*3960+0)*1+lsi)*1]), &(inteval->stack[((hsi*3300+23540)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+21560)*1+lsi)*1]), &(inteval->stack[((hsi*5500+35390)*1+lsi)*1]), &(inteval->stack[((hsi*4500+30890)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*12150+5360)*1+lsi)*1]), &(inteval->stack[((hsi*6750+21560)*1+lsi)*1]), &(inteval->stack[((hsi*4050+17510)*1+lsi)*1]),675);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12150+5360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
