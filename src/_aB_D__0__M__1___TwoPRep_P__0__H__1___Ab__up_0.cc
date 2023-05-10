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
#include <_aB_D__0__M__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__M__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__M__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+29030)*1+lsi)*1]), &(inteval->stack[((hsi*468+7046)*1+lsi)*1]), &(inteval->stack[((hsi*396+7514)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+30218)*1+lsi)*1]), &(inteval->stack[((hsi*546+6500)*1+lsi)*1]), &(inteval->stack[((hsi*468+7046)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+31622)*1+lsi)*1]), &(inteval->stack[((hsi*1404+30218)*1+lsi)*1]), &(inteval->stack[((hsi*1188+29030)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+33998)*1+lsi)*1]), &(inteval->stack[((hsi*630+5870)*1+lsi)*1]), &(inteval->stack[((hsi*546+6500)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+35636)*1+lsi)*1]), &(inteval->stack[((hsi*1638+33998)*1+lsi)*1]), &(inteval->stack[((hsi*1404+30218)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+38444)*1+lsi)*1]), &(inteval->stack[((hsi*2808+35636)*1+lsi)*1]), &(inteval->stack[((hsi*2376+31622)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+30218)*1+lsi)*1]), &(inteval->stack[((hsi*396+7514)*1+lsi)*1]), &(inteval->stack[((hsi*330+7910)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+42404)*1+lsi)*1]), &(inteval->stack[((hsi*1188+29030)*1+lsi)*1]), &(inteval->stack[((hsi*990+30218)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+44384)*1+lsi)*1]), &(inteval->stack[((hsi*2376+31622)*1+lsi)*1]), &(inteval->stack[((hsi*1980+42404)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+29030)*1+lsi)*1]), &(inteval->stack[((hsi*3960+38444)*1+lsi)*1]), &(inteval->stack[((hsi*3300+44384)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+42404)*1+lsi)*1]), &(inteval->stack[((hsi*720+5150)*1+lsi)*1]), &(inteval->stack[((hsi*630+5870)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+44294)*1+lsi)*1]), &(inteval->stack[((hsi*1890+42404)*1+lsi)*1]), &(inteval->stack[((hsi*1638+33998)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+47570)*1+lsi)*1]), &(inteval->stack[((hsi*3276+44294)*1+lsi)*1]), &(inteval->stack[((hsi*2808+35636)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+52250)*1+lsi)*1]), &(inteval->stack[((hsi*4680+47570)*1+lsi)*1]), &(inteval->stack[((hsi*3960+38444)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+33980)*1+lsi)*1]), &(inteval->stack[((hsi*5940+52250)*1+lsi)*1]), &(inteval->stack[((hsi*4950+29030)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+29030)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+5150)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+40910)*1+lsi)*1]), &(inteval->stack[((hsi*2340+5150)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29030)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+31010)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+44870)*1+lsi)*1]), &(inteval->stack[((hsi*2730+31010)*1+lsi)*1]), &(inteval->stack[((hsi*2340+5150)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+49550)*1+lsi)*1]), &(inteval->stack[((hsi*4680+44870)*1+lsi)*1]), &(inteval->stack[((hsi*3960+40910)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+5150)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]), &(inteval->stack[((hsi*550+4600)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+56150)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29030)*1+lsi)*1]), &(inteval->stack[((hsi*1650+5150)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+2250)*1+lsi)*1]), &(inteval->stack[((hsi*3960+40910)*1+lsi)*1]), &(inteval->stack[((hsi*3300+56150)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+56150)*1+lsi)*1]), &(inteval->stack[((hsi*6600+49550)*1+lsi)*1]), &(inteval->stack[((hsi*5500+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+2250)*1+lsi)*1]), &(inteval->stack[((hsi*1200+0)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+64400)*1+lsi)*1]), &(inteval->stack[((hsi*3150+2250)*1+lsi)*1]), &(inteval->stack[((hsi*2730+31010)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+0)*1+lsi)*1]), &(inteval->stack[((hsi*5460+64400)*1+lsi)*1]), &(inteval->stack[((hsi*4680+44870)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+64400)*1+lsi)*1]), &(inteval->stack[((hsi*7800+0)*1+lsi)*1]), &(inteval->stack[((hsi*6600+49550)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+40910)*1+lsi)*1]), &(inteval->stack[((hsi*9900+64400)*1+lsi)*1]), &(inteval->stack[((hsi*8250+56150)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*20790+8240)*1+lsi)*1]), &(inteval->stack[((hsi*11550+40910)*1+lsi)*1]), &(inteval->stack[((hsi*6930+33980)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*20790+8240)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
