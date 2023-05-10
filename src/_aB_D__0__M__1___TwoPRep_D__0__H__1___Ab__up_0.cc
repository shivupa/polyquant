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
#include <_aB_D__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15965)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+57545)*1+lsi)*1]), &(inteval->stack[((hsi*780+10885)*1+lsi)*1]), &(inteval->stack[((hsi*660+11665)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+59525)*1+lsi)*1]), &(inteval->stack[((hsi*910+9975)*1+lsi)*1]), &(inteval->stack[((hsi*780+10885)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+61865)*1+lsi)*1]), &(inteval->stack[((hsi*2340+59525)*1+lsi)*1]), &(inteval->stack[((hsi*1980+57545)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+65825)*1+lsi)*1]), &(inteval->stack[((hsi*1050+8925)*1+lsi)*1]), &(inteval->stack[((hsi*910+9975)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+68555)*1+lsi)*1]), &(inteval->stack[((hsi*2730+65825)*1+lsi)*1]), &(inteval->stack[((hsi*2340+59525)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+73235)*1+lsi)*1]), &(inteval->stack[((hsi*4680+68555)*1+lsi)*1]), &(inteval->stack[((hsi*3960+61865)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+59525)*1+lsi)*1]), &(inteval->stack[((hsi*660+11665)*1+lsi)*1]), &(inteval->stack[((hsi*550+12325)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+79835)*1+lsi)*1]), &(inteval->stack[((hsi*1980+57545)*1+lsi)*1]), &(inteval->stack[((hsi*1650+59525)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+83135)*1+lsi)*1]), &(inteval->stack[((hsi*3960+61865)*1+lsi)*1]), &(inteval->stack[((hsi*3300+79835)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+57545)*1+lsi)*1]), &(inteval->stack[((hsi*6600+73235)*1+lsi)*1]), &(inteval->stack[((hsi*5500+83135)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+79835)*1+lsi)*1]), &(inteval->stack[((hsi*1200+7725)*1+lsi)*1]), &(inteval->stack[((hsi*1050+8925)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+82985)*1+lsi)*1]), &(inteval->stack[((hsi*3150+79835)*1+lsi)*1]), &(inteval->stack[((hsi*2730+65825)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+88445)*1+lsi)*1]), &(inteval->stack[((hsi*5460+82985)*1+lsi)*1]), &(inteval->stack[((hsi*4680+68555)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+96245)*1+lsi)*1]), &(inteval->stack[((hsi*7800+88445)*1+lsi)*1]), &(inteval->stack[((hsi*6600+73235)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+65795)*1+lsi)*1]), &(inteval->stack[((hsi*9900+96245)*1+lsi)*1]), &(inteval->stack[((hsi*8250+57545)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+57545)*1+lsi)*1]), &(inteval->stack[((hsi*468+14771)*1+lsi)*1]), &(inteval->stack[((hsi*396+15239)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+58733)*1+lsi)*1]), &(inteval->stack[((hsi*546+14225)*1+lsi)*1]), &(inteval->stack[((hsi*468+14771)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+60137)*1+lsi)*1]), &(inteval->stack[((hsi*1404+58733)*1+lsi)*1]), &(inteval->stack[((hsi*1188+57545)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+7725)*1+lsi)*1]), &(inteval->stack[((hsi*630+13595)*1+lsi)*1]), &(inteval->stack[((hsi*546+14225)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+9363)*1+lsi)*1]), &(inteval->stack[((hsi*1638+7725)*1+lsi)*1]), &(inteval->stack[((hsi*1404+58733)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+77345)*1+lsi)*1]), &(inteval->stack[((hsi*2808+9363)*1+lsi)*1]), &(inteval->stack[((hsi*2376+60137)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+62513)*1+lsi)*1]), &(inteval->stack[((hsi*396+15239)*1+lsi)*1]), &(inteval->stack[((hsi*330+15635)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+63503)*1+lsi)*1]), &(inteval->stack[((hsi*1188+57545)*1+lsi)*1]), &(inteval->stack[((hsi*990+62513)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+81305)*1+lsi)*1]), &(inteval->stack[((hsi*2376+60137)*1+lsi)*1]), &(inteval->stack[((hsi*1980+63503)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+57545)*1+lsi)*1]), &(inteval->stack[((hsi*3960+77345)*1+lsi)*1]), &(inteval->stack[((hsi*3300+81305)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+62495)*1+lsi)*1]), &(inteval->stack[((hsi*720+12875)*1+lsi)*1]), &(inteval->stack[((hsi*630+13595)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+12171)*1+lsi)*1]), &(inteval->stack[((hsi*1890+62495)*1+lsi)*1]), &(inteval->stack[((hsi*1638+7725)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+81305)*1+lsi)*1]), &(inteval->stack[((hsi*3276+12171)*1+lsi)*1]), &(inteval->stack[((hsi*2808+9363)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+7725)*1+lsi)*1]), &(inteval->stack[((hsi*4680+81305)*1+lsi)*1]), &(inteval->stack[((hsi*3960+77345)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+77345)*1+lsi)*1]), &(inteval->stack[((hsi*5940+7725)*1+lsi)*1]), &(inteval->stack[((hsi*4950+57545)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*20790+84275)*1+lsi)*1]), &(inteval->stack[((hsi*11550+65795)*1+lsi)*1]), &(inteval->stack[((hsi*6930+77345)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+57545)*1+lsi)*1]), &(inteval->stack[((hsi*1170+4740)*1+lsi)*1]), &(inteval->stack[((hsi*990+5910)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+7725)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3375)*1+lsi)*1]), &(inteval->stack[((hsi*1170+4740)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+77345)*1+lsi)*1]), &(inteval->stack[((hsi*3510+7725)*1+lsi)*1]), &(inteval->stack[((hsi*2970+57545)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+60515)*1+lsi)*1]), &(inteval->stack[((hsi*1575+1800)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3375)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+105065)*1+lsi)*1]), &(inteval->stack[((hsi*4095+60515)*1+lsi)*1]), &(inteval->stack[((hsi*3510+7725)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+112085)*1+lsi)*1]), &(inteval->stack[((hsi*7020+105065)*1+lsi)*1]), &(inteval->stack[((hsi*5940+77345)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+7725)*1+lsi)*1]), &(inteval->stack[((hsi*990+5910)*1+lsi)*1]), &(inteval->stack[((hsi*825+6900)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+10200)*1+lsi)*1]), &(inteval->stack[((hsi*2970+57545)*1+lsi)*1]), &(inteval->stack[((hsi*2475+7725)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+121985)*1+lsi)*1]), &(inteval->stack[((hsi*5940+77345)*1+lsi)*1]), &(inteval->stack[((hsi*4950+10200)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+3375)*1+lsi)*1]), &(inteval->stack[((hsi*9900+112085)*1+lsi)*1]), &(inteval->stack[((hsi*8250+121985)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+77345)*1+lsi)*1]), &(inteval->stack[((hsi*1800+0)*1+lsi)*1]), &(inteval->stack[((hsi*1575+1800)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+121985)*1+lsi)*1]), &(inteval->stack[((hsi*4725+77345)*1+lsi)*1]), &(inteval->stack[((hsi*4095+60515)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+130175)*1+lsi)*1]), &(inteval->stack[((hsi*8190+121985)*1+lsi)*1]), &(inteval->stack[((hsi*7020+105065)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+141875)*1+lsi)*1]), &(inteval->stack[((hsi*11700+130175)*1+lsi)*1]), &(inteval->stack[((hsi*9900+112085)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+105065)*1+lsi)*1]), &(inteval->stack[((hsi*14850+141875)*1+lsi)*1]), &(inteval->stack[((hsi*12375+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*34650+122390)*1+lsi)*1]), &(inteval->stack[((hsi*17325+105065)*1+lsi)*1]), &(inteval->stack[((hsi*11550+65795)*1+lsi)*1]),1155);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*41580+15965)*1+lsi)*1]), &(inteval->stack[((hsi*34650+122390)*1+lsi)*1]), &(inteval->stack[((hsi*20790+84275)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*41580+15965)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
