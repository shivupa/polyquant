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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_D__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_D__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_D__0__L__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+10920)*1+lsi)*1]), &(inteval->stack[((hsi*396+2364)*1+lsi)*1]), &(inteval->stack[((hsi*330+2760)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+11910)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]), &(inteval->stack[((hsi*396+2364)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+13098)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11910)*1+lsi)*1]), &(inteval->stack[((hsi*990+10920)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+15078)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+16482)*1+lsi)*1]), &(inteval->stack[((hsi*1404+15078)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11910)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+18858)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16482)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13098)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+22158)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+23796)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22158)*1+lsi)*1]), &(inteval->stack[((hsi*1404+15078)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+26604)*1+lsi)*1]), &(inteval->stack[((hsi*2808+23796)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16482)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+30564)*1+lsi)*1]), &(inteval->stack[((hsi*3960+26604)*1+lsi)*1]), &(inteval->stack[((hsi*3300+18858)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+15078)*1+lsi)*1]), &(inteval->stack[((hsi*330+2760)*1+lsi)*1]), &(inteval->stack[((hsi*270+3090)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+15888)*1+lsi)*1]), &(inteval->stack[((hsi*990+10920)*1+lsi)*1]), &(inteval->stack[((hsi*810+15078)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+35514)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13098)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15888)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+10920)*1+lsi)*1]), &(inteval->stack[((hsi*3300+18858)*1+lsi)*1]), &(inteval->stack[((hsi*2700+35514)*1+lsi)*1]),6);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*5670+14970)*1+lsi)*1]), &(inteval->stack[((hsi*4950+30564)*1+lsi)*1]), &(inteval->stack[((hsi*4050+10920)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+10920)*1+lsi)*1]), &(inteval->stack[((hsi*720+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*1890+10920)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22158)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+35514)*1+lsi)*1]), &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*2808+23796)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+20640)*1+lsi)*1]), &(inteval->stack[((hsi*4680+35514)*1+lsi)*1]), &(inteval->stack[((hsi*3960+26604)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+35514)*1+lsi)*1]), &(inteval->stack[((hsi*5940+20640)*1+lsi)*1]), &(inteval->stack[((hsi*4950+30564)*1+lsi)*1]),6);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*7560+3360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+35514)*1+lsi)*1]), &(inteval->stack[((hsi*5670+14970)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7560+3360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
