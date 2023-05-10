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
#include <_aB_D__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__L__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+47660)*1+lsi)*1]), &(inteval->stack[((hsi*660+9340)*1+lsi)*1]), &(inteval->stack[((hsi*550+10000)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+49310)*1+lsi)*1]), &(inteval->stack[((hsi*780+8560)*1+lsi)*1]), &(inteval->stack[((hsi*660+9340)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+51290)*1+lsi)*1]), &(inteval->stack[((hsi*1980+49310)*1+lsi)*1]), &(inteval->stack[((hsi*1650+47660)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+54590)*1+lsi)*1]), &(inteval->stack[((hsi*910+7650)*1+lsi)*1]), &(inteval->stack[((hsi*780+8560)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+56930)*1+lsi)*1]), &(inteval->stack[((hsi*2340+54590)*1+lsi)*1]), &(inteval->stack[((hsi*1980+49310)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+60890)*1+lsi)*1]), &(inteval->stack[((hsi*3960+56930)*1+lsi)*1]), &(inteval->stack[((hsi*3300+51290)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+49310)*1+lsi)*1]), &(inteval->stack[((hsi*550+10000)*1+lsi)*1]), &(inteval->stack[((hsi*450+10550)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+66390)*1+lsi)*1]), &(inteval->stack[((hsi*1650+47660)*1+lsi)*1]), &(inteval->stack[((hsi*1350+49310)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+69090)*1+lsi)*1]), &(inteval->stack[((hsi*3300+51290)*1+lsi)*1]), &(inteval->stack[((hsi*2700+66390)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+47660)*1+lsi)*1]), &(inteval->stack[((hsi*5500+60890)*1+lsi)*1]), &(inteval->stack[((hsi*4500+69090)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+66390)*1+lsi)*1]), &(inteval->stack[((hsi*1050+6600)*1+lsi)*1]), &(inteval->stack[((hsi*910+7650)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+69120)*1+lsi)*1]), &(inteval->stack[((hsi*2730+66390)*1+lsi)*1]), &(inteval->stack[((hsi*2340+54590)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+73800)*1+lsi)*1]), &(inteval->stack[((hsi*4680+69120)*1+lsi)*1]), &(inteval->stack[((hsi*3960+56930)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+80400)*1+lsi)*1]), &(inteval->stack[((hsi*6600+73800)*1+lsi)*1]), &(inteval->stack[((hsi*5500+60890)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+54410)*1+lsi)*1]), &(inteval->stack[((hsi*8250+80400)*1+lsi)*1]), &(inteval->stack[((hsi*6750+47660)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+47660)*1+lsi)*1]), &(inteval->stack[((hsi*396+12644)*1+lsi)*1]), &(inteval->stack[((hsi*330+13040)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+48650)*1+lsi)*1]), &(inteval->stack[((hsi*468+12176)*1+lsi)*1]), &(inteval->stack[((hsi*396+12644)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+49838)*1+lsi)*1]), &(inteval->stack[((hsi*1188+48650)*1+lsi)*1]), &(inteval->stack[((hsi*990+47660)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+6600)*1+lsi)*1]), &(inteval->stack[((hsi*546+11630)*1+lsi)*1]), &(inteval->stack[((hsi*468+12176)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+8004)*1+lsi)*1]), &(inteval->stack[((hsi*1404+6600)*1+lsi)*1]), &(inteval->stack[((hsi*1188+48650)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+63860)*1+lsi)*1]), &(inteval->stack[((hsi*2376+8004)*1+lsi)*1]), &(inteval->stack[((hsi*1980+49838)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+51818)*1+lsi)*1]), &(inteval->stack[((hsi*330+13040)*1+lsi)*1]), &(inteval->stack[((hsi*270+13370)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+52628)*1+lsi)*1]), &(inteval->stack[((hsi*990+47660)*1+lsi)*1]), &(inteval->stack[((hsi*810+51818)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+67160)*1+lsi)*1]), &(inteval->stack[((hsi*1980+49838)*1+lsi)*1]), &(inteval->stack[((hsi*1620+52628)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+47660)*1+lsi)*1]), &(inteval->stack[((hsi*3300+63860)*1+lsi)*1]), &(inteval->stack[((hsi*2700+67160)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+51710)*1+lsi)*1]), &(inteval->stack[((hsi*630+11000)*1+lsi)*1]), &(inteval->stack[((hsi*546+11630)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+10380)*1+lsi)*1]), &(inteval->stack[((hsi*1638+51710)*1+lsi)*1]), &(inteval->stack[((hsi*1404+6600)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+67160)*1+lsi)*1]), &(inteval->stack[((hsi*2808+10380)*1+lsi)*1]), &(inteval->stack[((hsi*2376+8004)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+6600)*1+lsi)*1]), &(inteval->stack[((hsi*3960+67160)*1+lsi)*1]), &(inteval->stack[((hsi*3300+63860)*1+lsi)*1]),6);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*5670+63860)*1+lsi)*1]), &(inteval->stack[((hsi*4950+6600)*1+lsi)*1]), &(inteval->stack[((hsi*4050+47660)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*17010+69530)*1+lsi)*1]), &(inteval->stack[((hsi*9450+54410)*1+lsi)*1]), &(inteval->stack[((hsi*5670+63860)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+6600)*1+lsi)*1]), &(inteval->stack[((hsi*990+4110)*1+lsi)*1]), &(inteval->stack[((hsi*825+5100)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+47660)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2940)*1+lsi)*1]), &(inteval->stack[((hsi*990+4110)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+63860)*1+lsi)*1]), &(inteval->stack[((hsi*2970+47660)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6600)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+9075)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1575)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2940)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+86540)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9075)*1+lsi)*1]), &(inteval->stack[((hsi*2970+47660)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+92480)*1+lsi)*1]), &(inteval->stack[((hsi*5940+86540)*1+lsi)*1]), &(inteval->stack[((hsi*4950+63860)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+47660)*1+lsi)*1]), &(inteval->stack[((hsi*825+5100)*1+lsi)*1]), &(inteval->stack[((hsi*675+5925)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+49685)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6600)*1+lsi)*1]), &(inteval->stack[((hsi*2025+47660)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+100730)*1+lsi)*1]), &(inteval->stack[((hsi*4950+63860)*1+lsi)*1]), &(inteval->stack[((hsi*4050+49685)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+107480)*1+lsi)*1]), &(inteval->stack[((hsi*8250+92480)*1+lsi)*1]), &(inteval->stack[((hsi*6750+100730)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+100730)*1+lsi)*1]), &(inteval->stack[((hsi*1575+0)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1575)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+0)*1+lsi)*1]), &(inteval->stack[((hsi*4095+100730)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9075)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+117605)*1+lsi)*1]), &(inteval->stack[((hsi*7020+0)*1+lsi)*1]), &(inteval->stack[((hsi*5940+86540)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+0)*1+lsi)*1]), &(inteval->stack[((hsi*9900+117605)*1+lsi)*1]), &(inteval->stack[((hsi*8250+92480)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+86540)*1+lsi)*1]), &(inteval->stack[((hsi*12375+0)*1+lsi)*1]), &(inteval->stack[((hsi*10125+107480)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*28350+100715)*1+lsi)*1]), &(inteval->stack[((hsi*14175+86540)*1+lsi)*1]), &(inteval->stack[((hsi*9450+54410)*1+lsi)*1]),945);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*34020+13640)*1+lsi)*1]), &(inteval->stack[((hsi*28350+100715)*1+lsi)*1]), &(inteval->stack[((hsi*17010+69530)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*34020+13640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
