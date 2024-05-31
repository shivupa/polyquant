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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ii.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
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
#include <_aB_D__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__I__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6384)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+20496)*1+lsi)*1]), &(inteval->stack[((hsi*270+5730)*1+lsi)*1]), &(inteval->stack[((hsi*216+6000)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+21144)*1+lsi)*1]), &(inteval->stack[((hsi*330+5400)*1+lsi)*1]), &(inteval->stack[((hsi*270+5730)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+21954)*1+lsi)*1]), &(inteval->stack[((hsi*810+21144)*1+lsi)*1]), &(inteval->stack[((hsi*648+20496)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+23250)*1+lsi)*1]), &(inteval->stack[((hsi*396+5004)*1+lsi)*1]), &(inteval->stack[((hsi*330+5400)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+24240)*1+lsi)*1]), &(inteval->stack[((hsi*990+23250)*1+lsi)*1]), &(inteval->stack[((hsi*810+21144)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+25860)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24240)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21954)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+28020)*1+lsi)*1]), &(inteval->stack[((hsi*468+4536)*1+lsi)*1]), &(inteval->stack[((hsi*396+5004)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+29208)*1+lsi)*1]), &(inteval->stack[((hsi*1188+28020)*1+lsi)*1]), &(inteval->stack[((hsi*990+23250)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+31188)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29208)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24240)*1+lsi)*1]),6);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*3240+33888)*1+lsi)*1]), &(inteval->stack[((hsi*2700+31188)*1+lsi)*1]), &(inteval->stack[((hsi*2160+25860)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+23250)*1+lsi)*1]), &(inteval->stack[((hsi*216+6000)*1+lsi)*1]), &(inteval->stack[((hsi*168+6216)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+23754)*1+lsi)*1]), &(inteval->stack[((hsi*648+20496)*1+lsi)*1]), &(inteval->stack[((hsi*504+23250)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+37128)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21954)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23754)*1+lsi)*1]),6);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*2520+20496)*1+lsi)*1]), &(inteval->stack[((hsi*2160+25860)*1+lsi)*1]), &(inteval->stack[((hsi*1680+37128)*1+lsi)*1]),6);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*3528+23016)*1+lsi)*1]), &(inteval->stack[((hsi*3240+33888)*1+lsi)*1]), &(inteval->stack[((hsi*2520+20496)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+20496)*1+lsi)*1]), &(inteval->stack[((hsi*546+3990)*1+lsi)*1]), &(inteval->stack[((hsi*468+4536)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+3990)*1+lsi)*1]), &(inteval->stack[((hsi*1404+20496)*1+lsi)*1]), &(inteval->stack[((hsi*1188+28020)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+37128)*1+lsi)*1]), &(inteval->stack[((hsi*2376+3990)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29208)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+26544)*1+lsi)*1]), &(inteval->stack[((hsi*3300+37128)*1+lsi)*1]), &(inteval->stack[((hsi*2700+31188)*1+lsi)*1]),6);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*4536+37128)*1+lsi)*1]), &(inteval->stack[((hsi*4050+26544)*1+lsi)*1]), &(inteval->stack[((hsi*3240+33888)*1+lsi)*1]),6);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*4704+26544)*1+lsi)*1]), &(inteval->stack[((hsi*4536+37128)*1+lsi)*1]), &(inteval->stack[((hsi*3528+23016)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+20496)*1+lsi)*1]), &(inteval->stack[((hsi*450+2900)*1+lsi)*1]), &(inteval->stack[((hsi*360+3350)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+21576)*1+lsi)*1]), &(inteval->stack[((hsi*550+2350)*1+lsi)*1]), &(inteval->stack[((hsi*450+2900)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+22926)*1+lsi)*1]), &(inteval->stack[((hsi*1350+21576)*1+lsi)*1]), &(inteval->stack[((hsi*1080+20496)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+3990)*1+lsi)*1]), &(inteval->stack[((hsi*660+1690)*1+lsi)*1]), &(inteval->stack[((hsi*550+2350)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+31248)*1+lsi)*1]), &(inteval->stack[((hsi*1650+3990)*1+lsi)*1]), &(inteval->stack[((hsi*1350+21576)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+33948)*1+lsi)*1]), &(inteval->stack[((hsi*2700+31248)*1+lsi)*1]), &(inteval->stack[((hsi*2160+22926)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+37548)*1+lsi)*1]), &(inteval->stack[((hsi*780+910)*1+lsi)*1]), &(inteval->stack[((hsi*660+1690)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+39528)*1+lsi)*1]), &(inteval->stack[((hsi*1980+37548)*1+lsi)*1]), &(inteval->stack[((hsi*1650+3990)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+42828)*1+lsi)*1]), &(inteval->stack[((hsi*3300+39528)*1+lsi)*1]), &(inteval->stack[((hsi*2700+31248)*1+lsi)*1]),10);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*5400+47328)*1+lsi)*1]), &(inteval->stack[((hsi*4500+42828)*1+lsi)*1]), &(inteval->stack[((hsi*3600+33948)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+31248)*1+lsi)*1]), &(inteval->stack[((hsi*360+3350)*1+lsi)*1]), &(inteval->stack[((hsi*280+3710)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+1690)*1+lsi)*1]), &(inteval->stack[((hsi*1080+20496)*1+lsi)*1]), &(inteval->stack[((hsi*840+31248)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+3370)*1+lsi)*1]), &(inteval->stack[((hsi*2160+22926)*1+lsi)*1]), &(inteval->stack[((hsi*1680+1690)*1+lsi)*1]),10);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*4200+20496)*1+lsi)*1]), &(inteval->stack[((hsi*3600+33948)*1+lsi)*1]), &(inteval->stack[((hsi*2800+3370)*1+lsi)*1]),10);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*5880+31248)*1+lsi)*1]), &(inteval->stack[((hsi*5400+47328)*1+lsi)*1]), &(inteval->stack[((hsi*4200+20496)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+20496)*1+lsi)*1]), &(inteval->stack[((hsi*910+0)*1+lsi)*1]), &(inteval->stack[((hsi*780+910)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+0)*1+lsi)*1]), &(inteval->stack[((hsi*2340+20496)*1+lsi)*1]), &(inteval->stack[((hsi*1980+37548)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+20496)*1+lsi)*1]), &(inteval->stack[((hsi*3960+0)*1+lsi)*1]), &(inteval->stack[((hsi*3300+39528)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+52728)*1+lsi)*1]), &(inteval->stack[((hsi*5500+20496)*1+lsi)*1]), &(inteval->stack[((hsi*4500+42828)*1+lsi)*1]),10);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*7560+37128)*1+lsi)*1]), &(inteval->stack[((hsi*6750+52728)*1+lsi)*1]), &(inteval->stack[((hsi*5400+47328)*1+lsi)*1]),10);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*7840+44688)*1+lsi)*1]), &(inteval->stack[((hsi*7560+37128)*1+lsi)*1]), &(inteval->stack[((hsi*5880+31248)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*14112+6384)*1+lsi)*1]), &(inteval->stack[((hsi*7840+44688)*1+lsi)*1]), &(inteval->stack[((hsi*4704+26544)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*14112+6384)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
