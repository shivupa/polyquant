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
#include <_aB_D__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+25180)*1+lsi)*1]), &(inteval->stack[((hsi*546+5950)*1+lsi)*1]), &(inteval->stack[((hsi*468+6496)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+26584)*1+lsi)*1]), &(inteval->stack[((hsi*630+5320)*1+lsi)*1]), &(inteval->stack[((hsi*546+5950)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+28222)*1+lsi)*1]), &(inteval->stack[((hsi*1638+26584)*1+lsi)*1]), &(inteval->stack[((hsi*1404+25180)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+31030)*1+lsi)*1]), &(inteval->stack[((hsi*468+6496)*1+lsi)*1]), &(inteval->stack[((hsi*396+6964)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+32218)*1+lsi)*1]), &(inteval->stack[((hsi*1404+25180)*1+lsi)*1]), &(inteval->stack[((hsi*1188+31030)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+34594)*1+lsi)*1]), &(inteval->stack[((hsi*2808+28222)*1+lsi)*1]), &(inteval->stack[((hsi*2376+32218)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+31030)*1+lsi)*1]), &(inteval->stack[((hsi*720+4600)*1+lsi)*1]), &(inteval->stack[((hsi*630+5320)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+38554)*1+lsi)*1]), &(inteval->stack[((hsi*1890+31030)*1+lsi)*1]), &(inteval->stack[((hsi*1638+26584)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+41830)*1+lsi)*1]), &(inteval->stack[((hsi*3276+38554)*1+lsi)*1]), &(inteval->stack[((hsi*2808+28222)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+25180)*1+lsi)*1]), &(inteval->stack[((hsi*4680+41830)*1+lsi)*1]), &(inteval->stack[((hsi*3960+34594)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+4600)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+31120)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]), &(inteval->stack[((hsi*910+2250)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+33850)*1+lsi)*1]), &(inteval->stack[((hsi*2730+31120)*1+lsi)*1]), &(inteval->stack[((hsi*2340+4600)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+38530)*1+lsi)*1]), &(inteval->stack[((hsi*780+3160)*1+lsi)*1]), &(inteval->stack[((hsi*660+3940)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+40510)*1+lsi)*1]), &(inteval->stack[((hsi*2340+4600)*1+lsi)*1]), &(inteval->stack[((hsi*1980+38530)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+44470)*1+lsi)*1]), &(inteval->stack[((hsi*4680+33850)*1+lsi)*1]), &(inteval->stack[((hsi*3960+40510)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+38530)*1+lsi)*1]), &(inteval->stack[((hsi*1200+0)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1200)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+0)*1+lsi)*1]), &(inteval->stack[((hsi*3150+38530)*1+lsi)*1]), &(inteval->stack[((hsi*2730+31120)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+51070)*1+lsi)*1]), &(inteval->stack[((hsi*5460+0)*1+lsi)*1]), &(inteval->stack[((hsi*4680+33850)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+31120)*1+lsi)*1]), &(inteval->stack[((hsi*7800+51070)*1+lsi)*1]), &(inteval->stack[((hsi*6600+44470)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*17820+7360)*1+lsi)*1]), &(inteval->stack[((hsi*9900+31120)*1+lsi)*1]), &(inteval->stack[((hsi*5940+25180)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*17820+7360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
