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
#include <_aB_F__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+51800)*1+lsi)*1]), &(inteval->stack[((hsi*660+12340)*1+lsi)*1]), &(inteval->stack[((hsi*550+13000)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+53450)*1+lsi)*1]), &(inteval->stack[((hsi*780+11560)*1+lsi)*1]), &(inteval->stack[((hsi*660+12340)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+55430)*1+lsi)*1]), &(inteval->stack[((hsi*1980+53450)*1+lsi)*1]), &(inteval->stack[((hsi*1650+51800)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+58730)*1+lsi)*1]), &(inteval->stack[((hsi*910+10650)*1+lsi)*1]), &(inteval->stack[((hsi*780+11560)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+61070)*1+lsi)*1]), &(inteval->stack[((hsi*2340+58730)*1+lsi)*1]), &(inteval->stack[((hsi*1980+53450)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+65030)*1+lsi)*1]), &(inteval->stack[((hsi*3960+61070)*1+lsi)*1]), &(inteval->stack[((hsi*3300+55430)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+70530)*1+lsi)*1]), &(inteval->stack[((hsi*1050+9600)*1+lsi)*1]), &(inteval->stack[((hsi*910+10650)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+73260)*1+lsi)*1]), &(inteval->stack[((hsi*2730+70530)*1+lsi)*1]), &(inteval->stack[((hsi*2340+58730)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+77940)*1+lsi)*1]), &(inteval->stack[((hsi*4680+73260)*1+lsi)*1]), &(inteval->stack[((hsi*3960+61070)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+84540)*1+lsi)*1]), &(inteval->stack[((hsi*6600+77940)*1+lsi)*1]), &(inteval->stack[((hsi*5500+65030)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+58730)*1+lsi)*1]), &(inteval->stack[((hsi*550+13000)*1+lsi)*1]), &(inteval->stack[((hsi*450+13550)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+60080)*1+lsi)*1]), &(inteval->stack[((hsi*1650+51800)*1+lsi)*1]), &(inteval->stack[((hsi*1350+58730)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+92790)*1+lsi)*1]), &(inteval->stack[((hsi*3300+55430)*1+lsi)*1]), &(inteval->stack[((hsi*2700+60080)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+51800)*1+lsi)*1]), &(inteval->stack[((hsi*5500+65030)*1+lsi)*1]), &(inteval->stack[((hsi*4500+92790)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+58550)*1+lsi)*1]), &(inteval->stack[((hsi*8250+84540)*1+lsi)*1]), &(inteval->stack[((hsi*6750+51800)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+51800)*1+lsi)*1]), &(inteval->stack[((hsi*1200+8400)*1+lsi)*1]), &(inteval->stack[((hsi*1050+9600)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+8400)*1+lsi)*1]), &(inteval->stack[((hsi*3150+51800)*1+lsi)*1]), &(inteval->stack[((hsi*2730+70530)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+92790)*1+lsi)*1]), &(inteval->stack[((hsi*5460+8400)*1+lsi)*1]), &(inteval->stack[((hsi*4680+73260)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+68000)*1+lsi)*1]), &(inteval->stack[((hsi*7800+92790)*1+lsi)*1]), &(inteval->stack[((hsi*6600+77940)*1+lsi)*1]),10);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*11550+92790)*1+lsi)*1]), &(inteval->stack[((hsi*9900+68000)*1+lsi)*1]), &(inteval->stack[((hsi*8250+84540)*1+lsi)*1]),10);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*12600+68000)*1+lsi)*1]), &(inteval->stack[((hsi*11550+92790)*1+lsi)*1]), &(inteval->stack[((hsi*9450+58550)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+51800)*1+lsi)*1]), &(inteval->stack[((hsi*990+5910)*1+lsi)*1]), &(inteval->stack[((hsi*825+6900)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+54275)*1+lsi)*1]), &(inteval->stack[((hsi*1170+4740)*1+lsi)*1]), &(inteval->stack[((hsi*990+5910)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+57245)*1+lsi)*1]), &(inteval->stack[((hsi*2970+54275)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51800)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+62195)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3375)*1+lsi)*1]), &(inteval->stack[((hsi*1170+4740)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+80600)*1+lsi)*1]), &(inteval->stack[((hsi*3510+62195)*1+lsi)*1]), &(inteval->stack[((hsi*2970+54275)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+86540)*1+lsi)*1]), &(inteval->stack[((hsi*5940+80600)*1+lsi)*1]), &(inteval->stack[((hsi*4950+57245)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+8400)*1+lsi)*1]), &(inteval->stack[((hsi*1575+1800)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3375)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+94790)*1+lsi)*1]), &(inteval->stack[((hsi*4095+8400)*1+lsi)*1]), &(inteval->stack[((hsi*3510+62195)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+101810)*1+lsi)*1]), &(inteval->stack[((hsi*7020+94790)*1+lsi)*1]), &(inteval->stack[((hsi*5940+80600)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+111710)*1+lsi)*1]), &(inteval->stack[((hsi*9900+101810)*1+lsi)*1]), &(inteval->stack[((hsi*8250+86540)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+80600)*1+lsi)*1]), &(inteval->stack[((hsi*825+6900)*1+lsi)*1]), &(inteval->stack[((hsi*675+7725)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+62195)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51800)*1+lsi)*1]), &(inteval->stack[((hsi*2025+80600)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+124085)*1+lsi)*1]), &(inteval->stack[((hsi*4950+57245)*1+lsi)*1]), &(inteval->stack[((hsi*4050+62195)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+51800)*1+lsi)*1]), &(inteval->stack[((hsi*8250+86540)*1+lsi)*1]), &(inteval->stack[((hsi*6750+124085)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+80600)*1+lsi)*1]), &(inteval->stack[((hsi*12375+111710)*1+lsi)*1]), &(inteval->stack[((hsi*10125+51800)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+51800)*1+lsi)*1]), &(inteval->stack[((hsi*1800+0)*1+lsi)*1]), &(inteval->stack[((hsi*1575+1800)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+56525)*1+lsi)*1]), &(inteval->stack[((hsi*4725+51800)*1+lsi)*1]), &(inteval->stack[((hsi*4095+8400)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+0)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56525)*1+lsi)*1]), &(inteval->stack[((hsi*7020+94790)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+51800)*1+lsi)*1]), &(inteval->stack[((hsi*11700+0)*1+lsi)*1]), &(inteval->stack[((hsi*9900+101810)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+124085)*1+lsi)*1]), &(inteval->stack[((hsi*14850+51800)*1+lsi)*1]), &(inteval->stack[((hsi*12375+111710)*1+lsi)*1]),15);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*18900+94775)*1+lsi)*1]), &(inteval->stack[((hsi*17325+124085)*1+lsi)*1]), &(inteval->stack[((hsi*14175+80600)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*37800+14000)*1+lsi)*1]), &(inteval->stack[((hsi*18900+94775)*1+lsi)*1]), &(inteval->stack[((hsi*12600+68000)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*37800+14000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
