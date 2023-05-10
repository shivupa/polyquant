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
#include <_aB_F__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+39350)*1+lsi)*1]), &(inteval->stack[((hsi*660+9340)*1+lsi)*1]), &(inteval->stack[((hsi*550+10000)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+41000)*1+lsi)*1]), &(inteval->stack[((hsi*780+8560)*1+lsi)*1]), &(inteval->stack[((hsi*660+9340)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+42980)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41000)*1+lsi)*1]), &(inteval->stack[((hsi*1650+39350)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+46280)*1+lsi)*1]), &(inteval->stack[((hsi*910+7650)*1+lsi)*1]), &(inteval->stack[((hsi*780+8560)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+48620)*1+lsi)*1]), &(inteval->stack[((hsi*2340+46280)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41000)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+52580)*1+lsi)*1]), &(inteval->stack[((hsi*3960+48620)*1+lsi)*1]), &(inteval->stack[((hsi*3300+42980)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+41000)*1+lsi)*1]), &(inteval->stack[((hsi*550+10000)*1+lsi)*1]), &(inteval->stack[((hsi*450+10550)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+58080)*1+lsi)*1]), &(inteval->stack[((hsi*1650+39350)*1+lsi)*1]), &(inteval->stack[((hsi*1350+41000)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+60780)*1+lsi)*1]), &(inteval->stack[((hsi*3300+42980)*1+lsi)*1]), &(inteval->stack[((hsi*2700+58080)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+39350)*1+lsi)*1]), &(inteval->stack[((hsi*5500+52580)*1+lsi)*1]), &(inteval->stack[((hsi*4500+60780)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+58080)*1+lsi)*1]), &(inteval->stack[((hsi*1050+6600)*1+lsi)*1]), &(inteval->stack[((hsi*910+7650)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+60810)*1+lsi)*1]), &(inteval->stack[((hsi*2730+58080)*1+lsi)*1]), &(inteval->stack[((hsi*2340+46280)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+65490)*1+lsi)*1]), &(inteval->stack[((hsi*4680+60810)*1+lsi)*1]), &(inteval->stack[((hsi*3960+48620)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+72090)*1+lsi)*1]), &(inteval->stack[((hsi*6600+65490)*1+lsi)*1]), &(inteval->stack[((hsi*5500+52580)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+46100)*1+lsi)*1]), &(inteval->stack[((hsi*8250+72090)*1+lsi)*1]), &(inteval->stack[((hsi*6750+39350)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+39350)*1+lsi)*1]), &(inteval->stack[((hsi*990+4110)*1+lsi)*1]), &(inteval->stack[((hsi*825+5100)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+6600)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2940)*1+lsi)*1]), &(inteval->stack[((hsi*990+4110)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+55550)*1+lsi)*1]), &(inteval->stack[((hsi*2970+6600)*1+lsi)*1]), &(inteval->stack[((hsi*2475+39350)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+41825)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1575)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2940)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+60500)*1+lsi)*1]), &(inteval->stack[((hsi*3510+41825)*1+lsi)*1]), &(inteval->stack[((hsi*2970+6600)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+66440)*1+lsi)*1]), &(inteval->stack[((hsi*5940+60500)*1+lsi)*1]), &(inteval->stack[((hsi*4950+55550)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+6600)*1+lsi)*1]), &(inteval->stack[((hsi*825+5100)*1+lsi)*1]), &(inteval->stack[((hsi*675+5925)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+74690)*1+lsi)*1]), &(inteval->stack[((hsi*2475+39350)*1+lsi)*1]), &(inteval->stack[((hsi*2025+6600)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+2940)*1+lsi)*1]), &(inteval->stack[((hsi*4950+55550)*1+lsi)*1]), &(inteval->stack[((hsi*4050+74690)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+74690)*1+lsi)*1]), &(inteval->stack[((hsi*8250+66440)*1+lsi)*1]), &(inteval->stack[((hsi*6750+2940)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+2940)*1+lsi)*1]), &(inteval->stack[((hsi*1575+0)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1575)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+84815)*1+lsi)*1]), &(inteval->stack[((hsi*4095+2940)*1+lsi)*1]), &(inteval->stack[((hsi*3510+41825)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+0)*1+lsi)*1]), &(inteval->stack[((hsi*7020+84815)*1+lsi)*1]), &(inteval->stack[((hsi*5940+60500)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+84815)*1+lsi)*1]), &(inteval->stack[((hsi*9900+0)*1+lsi)*1]), &(inteval->stack[((hsi*8250+66440)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+55550)*1+lsi)*1]), &(inteval->stack[((hsi*12375+84815)*1+lsi)*1]), &(inteval->stack[((hsi*10125+74690)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*28350+11000)*1+lsi)*1]), &(inteval->stack[((hsi*14175+55550)*1+lsi)*1]), &(inteval->stack[((hsi*9450+46100)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*28350+11000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
