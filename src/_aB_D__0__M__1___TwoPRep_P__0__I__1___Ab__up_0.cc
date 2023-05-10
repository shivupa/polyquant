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
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__M__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10416)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+38136)*1+lsi)*1]), &(inteval->stack[((hsi*468+9222)*1+lsi)*1]), &(inteval->stack[((hsi*396+9690)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+39324)*1+lsi)*1]), &(inteval->stack[((hsi*546+8676)*1+lsi)*1]), &(inteval->stack[((hsi*468+9222)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+40728)*1+lsi)*1]), &(inteval->stack[((hsi*1404+39324)*1+lsi)*1]), &(inteval->stack[((hsi*1188+38136)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+43104)*1+lsi)*1]), &(inteval->stack[((hsi*630+8046)*1+lsi)*1]), &(inteval->stack[((hsi*546+8676)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+44742)*1+lsi)*1]), &(inteval->stack[((hsi*1638+43104)*1+lsi)*1]), &(inteval->stack[((hsi*1404+39324)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+47550)*1+lsi)*1]), &(inteval->stack[((hsi*2808+44742)*1+lsi)*1]), &(inteval->stack[((hsi*2376+40728)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+51510)*1+lsi)*1]), &(inteval->stack[((hsi*720+7326)*1+lsi)*1]), &(inteval->stack[((hsi*630+8046)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+53400)*1+lsi)*1]), &(inteval->stack[((hsi*1890+51510)*1+lsi)*1]), &(inteval->stack[((hsi*1638+43104)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+56676)*1+lsi)*1]), &(inteval->stack[((hsi*3276+53400)*1+lsi)*1]), &(inteval->stack[((hsi*2808+44742)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+61356)*1+lsi)*1]), &(inteval->stack[((hsi*4680+56676)*1+lsi)*1]), &(inteval->stack[((hsi*3960+47550)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+43104)*1+lsi)*1]), &(inteval->stack[((hsi*396+9690)*1+lsi)*1]), &(inteval->stack[((hsi*330+10086)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+44094)*1+lsi)*1]), &(inteval->stack[((hsi*1188+38136)*1+lsi)*1]), &(inteval->stack[((hsi*990+43104)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+67296)*1+lsi)*1]), &(inteval->stack[((hsi*2376+40728)*1+lsi)*1]), &(inteval->stack[((hsi*1980+44094)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+38136)*1+lsi)*1]), &(inteval->stack[((hsi*3960+47550)*1+lsi)*1]), &(inteval->stack[((hsi*3300+67296)*1+lsi)*1]),6);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*6930+43086)*1+lsi)*1]), &(inteval->stack[((hsi*5940+61356)*1+lsi)*1]), &(inteval->stack[((hsi*4950+38136)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+38136)*1+lsi)*1]), &(inteval->stack[((hsi*816+6510)*1+lsi)*1]), &(inteval->stack[((hsi*720+7326)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+6510)*1+lsi)*1]), &(inteval->stack[((hsi*2160+38136)*1+lsi)*1]), &(inteval->stack[((hsi*1890+51510)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+67296)*1+lsi)*1]), &(inteval->stack[((hsi*3780+6510)*1+lsi)*1]), &(inteval->stack[((hsi*3276+53400)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+72756)*1+lsi)*1]), &(inteval->stack[((hsi*5460+67296)*1+lsi)*1]), &(inteval->stack[((hsi*4680+56676)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+50016)*1+lsi)*1]), &(inteval->stack[((hsi*7020+72756)*1+lsi)*1]), &(inteval->stack[((hsi*5940+61356)*1+lsi)*1]),6);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*9240+58332)*1+lsi)*1]), &(inteval->stack[((hsi*8316+50016)*1+lsi)*1]), &(inteval->stack[((hsi*6930+43086)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+38136)*1+lsi)*1]), &(inteval->stack[((hsi*780+4520)*1+lsi)*1]), &(inteval->stack[((hsi*660+5300)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+40116)*1+lsi)*1]), &(inteval->stack[((hsi*910+3610)*1+lsi)*1]), &(inteval->stack[((hsi*780+4520)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+42456)*1+lsi)*1]), &(inteval->stack[((hsi*2340+40116)*1+lsi)*1]), &(inteval->stack[((hsi*1980+38136)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+46416)*1+lsi)*1]), &(inteval->stack[((hsi*1050+2560)*1+lsi)*1]), &(inteval->stack[((hsi*910+3610)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+49146)*1+lsi)*1]), &(inteval->stack[((hsi*2730+46416)*1+lsi)*1]), &(inteval->stack[((hsi*2340+40116)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+67572)*1+lsi)*1]), &(inteval->stack[((hsi*4680+49146)*1+lsi)*1]), &(inteval->stack[((hsi*3960+42456)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+53826)*1+lsi)*1]), &(inteval->stack[((hsi*1200+1360)*1+lsi)*1]), &(inteval->stack[((hsi*1050+2560)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+74172)*1+lsi)*1]), &(inteval->stack[((hsi*3150+53826)*1+lsi)*1]), &(inteval->stack[((hsi*2730+46416)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+79632)*1+lsi)*1]), &(inteval->stack[((hsi*5460+74172)*1+lsi)*1]), &(inteval->stack[((hsi*4680+49146)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+87432)*1+lsi)*1]), &(inteval->stack[((hsi*7800+79632)*1+lsi)*1]), &(inteval->stack[((hsi*6600+67572)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+46416)*1+lsi)*1]), &(inteval->stack[((hsi*660+5300)*1+lsi)*1]), &(inteval->stack[((hsi*550+5960)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+2560)*1+lsi)*1]), &(inteval->stack[((hsi*1980+38136)*1+lsi)*1]), &(inteval->stack[((hsi*1650+46416)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+46416)*1+lsi)*1]), &(inteval->stack[((hsi*3960+42456)*1+lsi)*1]), &(inteval->stack[((hsi*3300+2560)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+38136)*1+lsi)*1]), &(inteval->stack[((hsi*6600+67572)*1+lsi)*1]), &(inteval->stack[((hsi*5500+46416)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+97332)*1+lsi)*1]), &(inteval->stack[((hsi*9900+87432)*1+lsi)*1]), &(inteval->stack[((hsi*8250+38136)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+38136)*1+lsi)*1]), &(inteval->stack[((hsi*1360+0)*1+lsi)*1]), &(inteval->stack[((hsi*1200+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+41736)*1+lsi)*1]), &(inteval->stack[((hsi*3600+38136)*1+lsi)*1]), &(inteval->stack[((hsi*3150+53826)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+0)*1+lsi)*1]), &(inteval->stack[((hsi*6300+41736)*1+lsi)*1]), &(inteval->stack[((hsi*5460+74172)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+38136)*1+lsi)*1]), &(inteval->stack[((hsi*9100+0)*1+lsi)*1]), &(inteval->stack[((hsi*7800+79632)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+67572)*1+lsi)*1]), &(inteval->stack[((hsi*11700+38136)*1+lsi)*1]), &(inteval->stack[((hsi*9900+87432)*1+lsi)*1]),10);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*15400+38136)*1+lsi)*1]), &(inteval->stack[((hsi*13860+67572)*1+lsi)*1]), &(inteval->stack[((hsi*11550+97332)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*27720+10416)*1+lsi)*1]), &(inteval->stack[((hsi*15400+38136)*1+lsi)*1]), &(inteval->stack[((hsi*9240+58332)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*27720+10416)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
