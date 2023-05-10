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
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__L__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+24050)*1+lsi)*1]), &(inteval->stack[((hsi*396+6044)*1+lsi)*1]), &(inteval->stack[((hsi*330+6440)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+25040)*1+lsi)*1]), &(inteval->stack[((hsi*468+5576)*1+lsi)*1]), &(inteval->stack[((hsi*396+6044)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+26228)*1+lsi)*1]), &(inteval->stack[((hsi*1188+25040)*1+lsi)*1]), &(inteval->stack[((hsi*990+24050)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+28208)*1+lsi)*1]), &(inteval->stack[((hsi*546+5030)*1+lsi)*1]), &(inteval->stack[((hsi*468+5576)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+29612)*1+lsi)*1]), &(inteval->stack[((hsi*1404+28208)*1+lsi)*1]), &(inteval->stack[((hsi*1188+25040)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+31988)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29612)*1+lsi)*1]), &(inteval->stack[((hsi*1980+26228)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+25040)*1+lsi)*1]), &(inteval->stack[((hsi*330+6440)*1+lsi)*1]), &(inteval->stack[((hsi*270+6770)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+35288)*1+lsi)*1]), &(inteval->stack[((hsi*990+24050)*1+lsi)*1]), &(inteval->stack[((hsi*810+25040)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+36908)*1+lsi)*1]), &(inteval->stack[((hsi*1980+26228)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35288)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+24050)*1+lsi)*1]), &(inteval->stack[((hsi*3300+31988)*1+lsi)*1]), &(inteval->stack[((hsi*2700+36908)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+35288)*1+lsi)*1]), &(inteval->stack[((hsi*630+4400)*1+lsi)*1]), &(inteval->stack[((hsi*546+5030)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+36926)*1+lsi)*1]), &(inteval->stack[((hsi*1638+35288)*1+lsi)*1]), &(inteval->stack[((hsi*1404+28208)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+39734)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36926)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29612)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+43694)*1+lsi)*1]), &(inteval->stack[((hsi*3960+39734)*1+lsi)*1]), &(inteval->stack[((hsi*3300+31988)*1+lsi)*1]),6);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*5670+28100)*1+lsi)*1]), &(inteval->stack[((hsi*4950+43694)*1+lsi)*1]), &(inteval->stack[((hsi*4050+24050)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+24050)*1+lsi)*1]), &(inteval->stack[((hsi*660+2740)*1+lsi)*1]), &(inteval->stack[((hsi*550+3400)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+4400)*1+lsi)*1]), &(inteval->stack[((hsi*780+1960)*1+lsi)*1]), &(inteval->stack[((hsi*660+2740)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+33770)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4400)*1+lsi)*1]), &(inteval->stack[((hsi*1650+24050)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+25700)*1+lsi)*1]), &(inteval->stack[((hsi*910+1050)*1+lsi)*1]), &(inteval->stack[((hsi*780+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+37070)*1+lsi)*1]), &(inteval->stack[((hsi*2340+25700)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4400)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+41030)*1+lsi)*1]), &(inteval->stack[((hsi*3960+37070)*1+lsi)*1]), &(inteval->stack[((hsi*3300+33770)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+4400)*1+lsi)*1]), &(inteval->stack[((hsi*550+3400)*1+lsi)*1]), &(inteval->stack[((hsi*450+3950)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+46530)*1+lsi)*1]), &(inteval->stack[((hsi*1650+24050)*1+lsi)*1]), &(inteval->stack[((hsi*1350+4400)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+1960)*1+lsi)*1]), &(inteval->stack[((hsi*3300+33770)*1+lsi)*1]), &(inteval->stack[((hsi*2700+46530)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+46530)*1+lsi)*1]), &(inteval->stack[((hsi*5500+41030)*1+lsi)*1]), &(inteval->stack[((hsi*4500+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+1960)*1+lsi)*1]), &(inteval->stack[((hsi*1050+0)*1+lsi)*1]), &(inteval->stack[((hsi*910+1050)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+53280)*1+lsi)*1]), &(inteval->stack[((hsi*2730+1960)*1+lsi)*1]), &(inteval->stack[((hsi*2340+25700)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*4680+53280)*1+lsi)*1]), &(inteval->stack[((hsi*3960+37070)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+53280)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5500+41030)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+33770)*1+lsi)*1]), &(inteval->stack[((hsi*8250+53280)*1+lsi)*1]), &(inteval->stack[((hsi*6750+46530)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*17010+7040)*1+lsi)*1]), &(inteval->stack[((hsi*9450+33770)*1+lsi)*1]), &(inteval->stack[((hsi*5670+28100)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*17010+7040)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
