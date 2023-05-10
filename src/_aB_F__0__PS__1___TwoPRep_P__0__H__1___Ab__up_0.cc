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
#include <HRRPart0bra0ket0fp.h>
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
#include <_aB_F__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+56480)*1+lsi)*1]), &(inteval->stack[((hsi*910+12550)*1+lsi)*1]), &(inteval->stack[((hsi*780+13460)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+58820)*1+lsi)*1]), &(inteval->stack[((hsi*1050+11500)*1+lsi)*1]), &(inteval->stack[((hsi*910+12550)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+61550)*1+lsi)*1]), &(inteval->stack[((hsi*2730+58820)*1+lsi)*1]), &(inteval->stack[((hsi*2340+56480)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+66230)*1+lsi)*1]), &(inteval->stack[((hsi*1200+10300)*1+lsi)*1]), &(inteval->stack[((hsi*1050+11500)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+69380)*1+lsi)*1]), &(inteval->stack[((hsi*3150+66230)*1+lsi)*1]), &(inteval->stack[((hsi*2730+58820)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+74840)*1+lsi)*1]), &(inteval->stack[((hsi*5460+69380)*1+lsi)*1]), &(inteval->stack[((hsi*4680+61550)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+58820)*1+lsi)*1]), &(inteval->stack[((hsi*780+13460)*1+lsi)*1]), &(inteval->stack[((hsi*660+14240)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+82640)*1+lsi)*1]), &(inteval->stack[((hsi*2340+56480)*1+lsi)*1]), &(inteval->stack[((hsi*1980+58820)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+86600)*1+lsi)*1]), &(inteval->stack[((hsi*4680+61550)*1+lsi)*1]), &(inteval->stack[((hsi*3960+82640)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+93200)*1+lsi)*1]), &(inteval->stack[((hsi*7800+74840)*1+lsi)*1]), &(inteval->stack[((hsi*6600+86600)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+82640)*1+lsi)*1]), &(inteval->stack[((hsi*1360+8940)*1+lsi)*1]), &(inteval->stack[((hsi*1200+10300)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+56480)*1+lsi)*1]), &(inteval->stack[((hsi*3600+82640)*1+lsi)*1]), &(inteval->stack[((hsi*3150+66230)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+82640)*1+lsi)*1]), &(inteval->stack[((hsi*6300+56480)*1+lsi)*1]), &(inteval->stack[((hsi*5460+69380)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+56480)*1+lsi)*1]), &(inteval->stack[((hsi*9100+82640)*1+lsi)*1]), &(inteval->stack[((hsi*7800+74840)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+68180)*1+lsi)*1]), &(inteval->stack[((hsi*11700+56480)*1+lsi)*1]), &(inteval->stack[((hsi*9900+93200)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+56480)*1+lsi)*1]), &(inteval->stack[((hsi*1365+5415)*1+lsi)*1]), &(inteval->stack[((hsi*1170+6780)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+59990)*1+lsi)*1]), &(inteval->stack[((hsi*1575+3840)*1+lsi)*1]), &(inteval->stack[((hsi*1365+5415)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+82040)*1+lsi)*1]), &(inteval->stack[((hsi*4095+59990)*1+lsi)*1]), &(inteval->stack[((hsi*3510+56480)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+8940)*1+lsi)*1]), &(inteval->stack[((hsi*1800+2040)*1+lsi)*1]), &(inteval->stack[((hsi*1575+3840)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+89060)*1+lsi)*1]), &(inteval->stack[((hsi*4725+8940)*1+lsi)*1]), &(inteval->stack[((hsi*4095+59990)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+97250)*1+lsi)*1]), &(inteval->stack[((hsi*8190+89060)*1+lsi)*1]), &(inteval->stack[((hsi*7020+82040)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+59990)*1+lsi)*1]), &(inteval->stack[((hsi*1170+6780)*1+lsi)*1]), &(inteval->stack[((hsi*990+7950)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+108950)*1+lsi)*1]), &(inteval->stack[((hsi*3510+56480)*1+lsi)*1]), &(inteval->stack[((hsi*2970+59990)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+56480)*1+lsi)*1]), &(inteval->stack[((hsi*7020+82040)*1+lsi)*1]), &(inteval->stack[((hsi*5940+108950)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+108950)*1+lsi)*1]), &(inteval->stack[((hsi*11700+97250)*1+lsi)*1]), &(inteval->stack[((hsi*9900+56480)*1+lsi)*1]),15);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*5400+56480)*1+lsi)*1]), &(inteval->stack[((hsi*2040+0)*1+lsi)*1]), &(inteval->stack[((hsi*1800+2040)*1+lsi)*1]),15);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*9450+123800)*1+lsi)*1]), &(inteval->stack[((hsi*5400+56480)*1+lsi)*1]), &(inteval->stack[((hsi*4725+8940)*1+lsi)*1]),15);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*13650+0)*1+lsi)*1]), &(inteval->stack[((hsi*9450+123800)*1+lsi)*1]), &(inteval->stack[((hsi*8190+89060)*1+lsi)*1]),15);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*17550+123800)*1+lsi)*1]), &(inteval->stack[((hsi*13650+0)*1+lsi)*1]), &(inteval->stack[((hsi*11700+97250)*1+lsi)*1]),15);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*20790+82040)*1+lsi)*1]), &(inteval->stack[((hsi*17550+123800)*1+lsi)*1]), &(inteval->stack[((hsi*14850+108950)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*41580+14900)*1+lsi)*1]), &(inteval->stack[((hsi*20790+82040)*1+lsi)*1]), &(inteval->stack[((hsi*13860+68180)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*41580+14900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
