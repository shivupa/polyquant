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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
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
#include <_aB_F__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,20240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+76940)*1+lsi)*1]), &(inteval->stack[((hsi*990+13350)*1+lsi)*1]), &(inteval->stack[((hsi*825+14340)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+79415)*1+lsi)*1]), &(inteval->stack[((hsi*1170+12180)*1+lsi)*1]), &(inteval->stack[((hsi*990+13350)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+82385)*1+lsi)*1]), &(inteval->stack[((hsi*2970+79415)*1+lsi)*1]), &(inteval->stack[((hsi*2475+76940)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+87335)*1+lsi)*1]), &(inteval->stack[((hsi*1365+10815)*1+lsi)*1]), &(inteval->stack[((hsi*1170+12180)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+90845)*1+lsi)*1]), &(inteval->stack[((hsi*3510+87335)*1+lsi)*1]), &(inteval->stack[((hsi*2970+79415)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+96785)*1+lsi)*1]), &(inteval->stack[((hsi*5940+90845)*1+lsi)*1]), &(inteval->stack[((hsi*4950+82385)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+79415)*1+lsi)*1]), &(inteval->stack[((hsi*825+14340)*1+lsi)*1]), &(inteval->stack[((hsi*675+15165)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+105035)*1+lsi)*1]), &(inteval->stack[((hsi*2475+76940)*1+lsi)*1]), &(inteval->stack[((hsi*2025+79415)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+109085)*1+lsi)*1]), &(inteval->stack[((hsi*4950+82385)*1+lsi)*1]), &(inteval->stack[((hsi*4050+105035)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+76940)*1+lsi)*1]), &(inteval->stack[((hsi*8250+96785)*1+lsi)*1]), &(inteval->stack[((hsi*6750+109085)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+105035)*1+lsi)*1]), &(inteval->stack[((hsi*1575+9240)*1+lsi)*1]), &(inteval->stack[((hsi*1365+10815)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+109130)*1+lsi)*1]), &(inteval->stack[((hsi*4095+105035)*1+lsi)*1]), &(inteval->stack[((hsi*3510+87335)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+116150)*1+lsi)*1]), &(inteval->stack[((hsi*7020+109130)*1+lsi)*1]), &(inteval->stack[((hsi*5940+90845)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+126050)*1+lsi)*1]), &(inteval->stack[((hsi*9900+116150)*1+lsi)*1]), &(inteval->stack[((hsi*8250+96785)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+87065)*1+lsi)*1]), &(inteval->stack[((hsi*12375+126050)*1+lsi)*1]), &(inteval->stack[((hsi*10125+76940)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+76940)*1+lsi)*1]), &(inteval->stack[((hsi*660+18580)*1+lsi)*1]), &(inteval->stack[((hsi*550+19240)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+78590)*1+lsi)*1]), &(inteval->stack[((hsi*780+17800)*1+lsi)*1]), &(inteval->stack[((hsi*660+18580)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+9240)*1+lsi)*1]), &(inteval->stack[((hsi*1980+78590)*1+lsi)*1]), &(inteval->stack[((hsi*1650+76940)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+80570)*1+lsi)*1]), &(inteval->stack[((hsi*910+16890)*1+lsi)*1]), &(inteval->stack[((hsi*780+17800)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+82910)*1+lsi)*1]), &(inteval->stack[((hsi*2340+80570)*1+lsi)*1]), &(inteval->stack[((hsi*1980+78590)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+101240)*1+lsi)*1]), &(inteval->stack[((hsi*3960+82910)*1+lsi)*1]), &(inteval->stack[((hsi*3300+9240)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+12540)*1+lsi)*1]), &(inteval->stack[((hsi*550+19240)*1+lsi)*1]), &(inteval->stack[((hsi*450+19790)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+106740)*1+lsi)*1]), &(inteval->stack[((hsi*1650+76940)*1+lsi)*1]), &(inteval->stack[((hsi*1350+12540)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+109440)*1+lsi)*1]), &(inteval->stack[((hsi*3300+9240)*1+lsi)*1]), &(inteval->stack[((hsi*2700+106740)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+113940)*1+lsi)*1]), &(inteval->stack[((hsi*5500+101240)*1+lsi)*1]), &(inteval->stack[((hsi*4500+109440)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+106740)*1+lsi)*1]), &(inteval->stack[((hsi*1050+15840)*1+lsi)*1]), &(inteval->stack[((hsi*910+16890)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+9240)*1+lsi)*1]), &(inteval->stack[((hsi*2730+106740)*1+lsi)*1]), &(inteval->stack[((hsi*2340+80570)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+106740)*1+lsi)*1]), &(inteval->stack[((hsi*4680+9240)*1+lsi)*1]), &(inteval->stack[((hsi*3960+82910)*1+lsi)*1]),10);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*8250+9240)*1+lsi)*1]), &(inteval->stack[((hsi*6600+106740)*1+lsi)*1]), &(inteval->stack[((hsi*5500+101240)*1+lsi)*1]),10);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*9450+101240)*1+lsi)*1]), &(inteval->stack[((hsi*8250+9240)*1+lsi)*1]), &(inteval->stack[((hsi*6750+113940)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*28350+110690)*1+lsi)*1]), &(inteval->stack[((hsi*14175+87065)*1+lsi)*1]), &(inteval->stack[((hsi*9450+101240)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+9240)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7140)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+76940)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+101240)*1+lsi)*1]), &(inteval->stack[((hsi*4158+76940)*1+lsi)*1]), &(inteval->stack[((hsi*3465+9240)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+12705)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+139040)*1+lsi)*1]), &(inteval->stack[((hsi*4914+12705)*1+lsi)*1]), &(inteval->stack[((hsi*4158+76940)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+147356)*1+lsi)*1]), &(inteval->stack[((hsi*8316+139040)*1+lsi)*1]), &(inteval->stack[((hsi*6930+101240)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+76940)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7140)*1+lsi)*1]), &(inteval->stack[((hsi*945+8295)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+79775)*1+lsi)*1]), &(inteval->stack[((hsi*3465+9240)*1+lsi)*1]), &(inteval->stack[((hsi*2835+76940)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+158906)*1+lsi)*1]), &(inteval->stack[((hsi*6930+101240)*1+lsi)*1]), &(inteval->stack[((hsi*5670+79775)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+168356)*1+lsi)*1]), &(inteval->stack[((hsi*11550+147356)*1+lsi)*1]), &(inteval->stack[((hsi*9450+158906)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+76940)*1+lsi)*1]), &(inteval->stack[((hsi*2205+0)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*5733+76940)*1+lsi)*1]), &(inteval->stack[((hsi*4914+12705)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+182531)*1+lsi)*1]), &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*8316+139040)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+0)*1+lsi)*1]), &(inteval->stack[((hsi*13860+182531)*1+lsi)*1]), &(inteval->stack[((hsi*11550+147356)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+139040)*1+lsi)*1]), &(inteval->stack[((hsi*17325+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+168356)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*42525+158885)*1+lsi)*1]), &(inteval->stack[((hsi*19845+139040)*1+lsi)*1]), &(inteval->stack[((hsi*14175+87065)*1+lsi)*1]),945);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*56700+20240)*1+lsi)*1]), &(inteval->stack[((hsi*42525+158885)*1+lsi)*1]), &(inteval->stack[((hsi*28350+110690)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*56700+20240)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
