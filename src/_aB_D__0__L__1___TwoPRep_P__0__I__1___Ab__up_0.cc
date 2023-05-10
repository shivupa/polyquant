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
#include <_aB_D__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+31640)*1+lsi)*1]), &(inteval->stack[((hsi*396+7964)*1+lsi)*1]), &(inteval->stack[((hsi*330+8360)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+32630)*1+lsi)*1]), &(inteval->stack[((hsi*468+7496)*1+lsi)*1]), &(inteval->stack[((hsi*396+7964)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+33818)*1+lsi)*1]), &(inteval->stack[((hsi*1188+32630)*1+lsi)*1]), &(inteval->stack[((hsi*990+31640)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+35798)*1+lsi)*1]), &(inteval->stack[((hsi*546+6950)*1+lsi)*1]), &(inteval->stack[((hsi*468+7496)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+37202)*1+lsi)*1]), &(inteval->stack[((hsi*1404+35798)*1+lsi)*1]), &(inteval->stack[((hsi*1188+32630)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+39578)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37202)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33818)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+42878)*1+lsi)*1]), &(inteval->stack[((hsi*630+6320)*1+lsi)*1]), &(inteval->stack[((hsi*546+6950)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+44516)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42878)*1+lsi)*1]), &(inteval->stack[((hsi*1404+35798)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+47324)*1+lsi)*1]), &(inteval->stack[((hsi*2808+44516)*1+lsi)*1]), &(inteval->stack[((hsi*2376+37202)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+51284)*1+lsi)*1]), &(inteval->stack[((hsi*3960+47324)*1+lsi)*1]), &(inteval->stack[((hsi*3300+39578)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+35798)*1+lsi)*1]), &(inteval->stack[((hsi*330+8360)*1+lsi)*1]), &(inteval->stack[((hsi*270+8690)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+36608)*1+lsi)*1]), &(inteval->stack[((hsi*990+31640)*1+lsi)*1]), &(inteval->stack[((hsi*810+35798)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+56234)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33818)*1+lsi)*1]), &(inteval->stack[((hsi*1620+36608)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+31640)*1+lsi)*1]), &(inteval->stack[((hsi*3300+39578)*1+lsi)*1]), &(inteval->stack[((hsi*2700+56234)*1+lsi)*1]),6);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*5670+35690)*1+lsi)*1]), &(inteval->stack[((hsi*4950+51284)*1+lsi)*1]), &(inteval->stack[((hsi*4050+31640)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+31640)*1+lsi)*1]), &(inteval->stack[((hsi*720+5600)*1+lsi)*1]), &(inteval->stack[((hsi*630+6320)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+5600)*1+lsi)*1]), &(inteval->stack[((hsi*1890+31640)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42878)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+56234)*1+lsi)*1]), &(inteval->stack[((hsi*3276+5600)*1+lsi)*1]), &(inteval->stack[((hsi*2808+44516)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+41360)*1+lsi)*1]), &(inteval->stack[((hsi*4680+56234)*1+lsi)*1]), &(inteval->stack[((hsi*3960+47324)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+56234)*1+lsi)*1]), &(inteval->stack[((hsi*5940+41360)*1+lsi)*1]), &(inteval->stack[((hsi*4950+51284)*1+lsi)*1]),6);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*7560+41360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+56234)*1+lsi)*1]), &(inteval->stack[((hsi*5670+35690)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+31640)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]), &(inteval->stack[((hsi*550+4600)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+33290)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+35270)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33290)*1+lsi)*1]), &(inteval->stack[((hsi*1650+31640)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+5600)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+48920)*1+lsi)*1]), &(inteval->stack[((hsi*2340+5600)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33290)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+52880)*1+lsi)*1]), &(inteval->stack[((hsi*3960+48920)*1+lsi)*1]), &(inteval->stack[((hsi*3300+35270)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+38570)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+58380)*1+lsi)*1]), &(inteval->stack[((hsi*2730+38570)*1+lsi)*1]), &(inteval->stack[((hsi*2340+5600)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+63060)*1+lsi)*1]), &(inteval->stack[((hsi*4680+58380)*1+lsi)*1]), &(inteval->stack[((hsi*3960+48920)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+69660)*1+lsi)*1]), &(inteval->stack[((hsi*6600+63060)*1+lsi)*1]), &(inteval->stack[((hsi*5500+52880)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+48920)*1+lsi)*1]), &(inteval->stack[((hsi*550+4600)*1+lsi)*1]), &(inteval->stack[((hsi*450+5150)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+2250)*1+lsi)*1]), &(inteval->stack[((hsi*1650+31640)*1+lsi)*1]), &(inteval->stack[((hsi*1350+48920)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+77910)*1+lsi)*1]), &(inteval->stack[((hsi*3300+35270)*1+lsi)*1]), &(inteval->stack[((hsi*2700+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+31640)*1+lsi)*1]), &(inteval->stack[((hsi*5500+52880)*1+lsi)*1]), &(inteval->stack[((hsi*4500+77910)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+48920)*1+lsi)*1]), &(inteval->stack[((hsi*8250+69660)*1+lsi)*1]), &(inteval->stack[((hsi*6750+31640)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+31640)*1+lsi)*1]), &(inteval->stack[((hsi*1200+0)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+0)*1+lsi)*1]), &(inteval->stack[((hsi*3150+31640)*1+lsi)*1]), &(inteval->stack[((hsi*2730+38570)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+31640)*1+lsi)*1]), &(inteval->stack[((hsi*5460+0)*1+lsi)*1]), &(inteval->stack[((hsi*4680+58380)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+77910)*1+lsi)*1]), &(inteval->stack[((hsi*7800+31640)*1+lsi)*1]), &(inteval->stack[((hsi*6600+63060)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+87810)*1+lsi)*1]), &(inteval->stack[((hsi*9900+77910)*1+lsi)*1]), &(inteval->stack[((hsi*8250+69660)*1+lsi)*1]),10);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*12600+58370)*1+lsi)*1]), &(inteval->stack[((hsi*11550+87810)*1+lsi)*1]), &(inteval->stack[((hsi*9450+48920)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*22680+8960)*1+lsi)*1]), &(inteval->stack[((hsi*12600+58370)*1+lsi)*1]), &(inteval->stack[((hsi*7560+41360)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*22680+8960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
