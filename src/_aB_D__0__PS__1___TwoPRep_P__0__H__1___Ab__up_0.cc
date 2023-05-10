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
#include <_aB_D__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9536)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+34484)*1+lsi)*1]), &(inteval->stack[((hsi*546+8126)*1+lsi)*1]), &(inteval->stack[((hsi*468+8672)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+35888)*1+lsi)*1]), &(inteval->stack[((hsi*630+7496)*1+lsi)*1]), &(inteval->stack[((hsi*546+8126)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+37526)*1+lsi)*1]), &(inteval->stack[((hsi*1638+35888)*1+lsi)*1]), &(inteval->stack[((hsi*1404+34484)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+40334)*1+lsi)*1]), &(inteval->stack[((hsi*720+6776)*1+lsi)*1]), &(inteval->stack[((hsi*630+7496)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+42224)*1+lsi)*1]), &(inteval->stack[((hsi*1890+40334)*1+lsi)*1]), &(inteval->stack[((hsi*1638+35888)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+45500)*1+lsi)*1]), &(inteval->stack[((hsi*3276+42224)*1+lsi)*1]), &(inteval->stack[((hsi*2808+37526)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+35888)*1+lsi)*1]), &(inteval->stack[((hsi*468+8672)*1+lsi)*1]), &(inteval->stack[((hsi*396+9140)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+50180)*1+lsi)*1]), &(inteval->stack[((hsi*1404+34484)*1+lsi)*1]), &(inteval->stack[((hsi*1188+35888)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+52556)*1+lsi)*1]), &(inteval->stack[((hsi*2808+37526)*1+lsi)*1]), &(inteval->stack[((hsi*2376+50180)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+56516)*1+lsi)*1]), &(inteval->stack[((hsi*4680+45500)*1+lsi)*1]), &(inteval->stack[((hsi*3960+52556)*1+lsi)*1]),6);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*2160+50180)*1+lsi)*1]), &(inteval->stack[((hsi*816+5960)*1+lsi)*1]), &(inteval->stack[((hsi*720+6776)*1+lsi)*1]),6);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*3780+34484)*1+lsi)*1]), &(inteval->stack[((hsi*2160+50180)*1+lsi)*1]), &(inteval->stack[((hsi*1890+40334)*1+lsi)*1]),6);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*5460+50180)*1+lsi)*1]), &(inteval->stack[((hsi*3780+34484)*1+lsi)*1]), &(inteval->stack[((hsi*3276+42224)*1+lsi)*1]),6);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*7020+34484)*1+lsi)*1]), &(inteval->stack[((hsi*5460+50180)*1+lsi)*1]), &(inteval->stack[((hsi*4680+45500)*1+lsi)*1]),6);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*8316+41504)*1+lsi)*1]), &(inteval->stack[((hsi*7020+34484)*1+lsi)*1]), &(inteval->stack[((hsi*5940+56516)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+34484)*1+lsi)*1]), &(inteval->stack[((hsi*910+3610)*1+lsi)*1]), &(inteval->stack[((hsi*780+4520)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+36824)*1+lsi)*1]), &(inteval->stack[((hsi*1050+2560)*1+lsi)*1]), &(inteval->stack[((hsi*910+3610)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+49820)*1+lsi)*1]), &(inteval->stack[((hsi*2730+36824)*1+lsi)*1]), &(inteval->stack[((hsi*2340+34484)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+5960)*1+lsi)*1]), &(inteval->stack[((hsi*1200+1360)*1+lsi)*1]), &(inteval->stack[((hsi*1050+2560)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+54500)*1+lsi)*1]), &(inteval->stack[((hsi*3150+5960)*1+lsi)*1]), &(inteval->stack[((hsi*2730+36824)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+59960)*1+lsi)*1]), &(inteval->stack[((hsi*5460+54500)*1+lsi)*1]), &(inteval->stack[((hsi*4680+49820)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+36824)*1+lsi)*1]), &(inteval->stack[((hsi*780+4520)*1+lsi)*1]), &(inteval->stack[((hsi*660+5300)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+67760)*1+lsi)*1]), &(inteval->stack[((hsi*2340+34484)*1+lsi)*1]), &(inteval->stack[((hsi*1980+36824)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+34484)*1+lsi)*1]), &(inteval->stack[((hsi*4680+49820)*1+lsi)*1]), &(inteval->stack[((hsi*3960+67760)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+67760)*1+lsi)*1]), &(inteval->stack[((hsi*7800+59960)*1+lsi)*1]), &(inteval->stack[((hsi*6600+34484)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+34484)*1+lsi)*1]), &(inteval->stack[((hsi*1360+0)*1+lsi)*1]), &(inteval->stack[((hsi*1200+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+77660)*1+lsi)*1]), &(inteval->stack[((hsi*3600+34484)*1+lsi)*1]), &(inteval->stack[((hsi*3150+5960)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+0)*1+lsi)*1]), &(inteval->stack[((hsi*6300+77660)*1+lsi)*1]), &(inteval->stack[((hsi*5460+54500)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+77660)*1+lsi)*1]), &(inteval->stack[((hsi*9100+0)*1+lsi)*1]), &(inteval->stack[((hsi*7800+59960)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+49820)*1+lsi)*1]), &(inteval->stack[((hsi*11700+77660)*1+lsi)*1]), &(inteval->stack[((hsi*9900+67760)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*24948+9536)*1+lsi)*1]), &(inteval->stack[((hsi*13860+49820)*1+lsi)*1]), &(inteval->stack[((hsi*8316+41504)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*24948+9536)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
