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
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_F__0__L__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8375)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+28625)*1+lsi)*1]), &(inteval->stack[((hsi*660+6715)*1+lsi)*1]), &(inteval->stack[((hsi*550+7375)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+30275)*1+lsi)*1]), &(inteval->stack[((hsi*780+5935)*1+lsi)*1]), &(inteval->stack[((hsi*660+6715)*1+lsi)*1]),10);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*3300+32255)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30275)*1+lsi)*1]), &(inteval->stack[((hsi*1650+28625)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+35555)*1+lsi)*1]), &(inteval->stack[((hsi*550+7375)*1+lsi)*1]), &(inteval->stack[((hsi*450+7925)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+36905)*1+lsi)*1]), &(inteval->stack[((hsi*1650+28625)*1+lsi)*1]), &(inteval->stack[((hsi*1350+35555)*1+lsi)*1]),10);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*4500+39605)*1+lsi)*1]), &(inteval->stack[((hsi*3300+32255)*1+lsi)*1]), &(inteval->stack[((hsi*2700+36905)*1+lsi)*1]),10);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+35555)*1+lsi)*1]), &(inteval->stack[((hsi*910+5025)*1+lsi)*1]), &(inteval->stack[((hsi*780+5935)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+44105)*1+lsi)*1]), &(inteval->stack[((hsi*2340+35555)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30275)*1+lsi)*1]),10);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*5500+48065)*1+lsi)*1]), &(inteval->stack[((hsi*3960+44105)*1+lsi)*1]), &(inteval->stack[((hsi*3300+32255)*1+lsi)*1]),10);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*6750+28625)*1+lsi)*1]), &(inteval->stack[((hsi*5500+48065)*1+lsi)*1]), &(inteval->stack[((hsi*4500+39605)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+5025)*1+lsi)*1]), &(inteval->stack[((hsi*990+2535)*1+lsi)*1]), &(inteval->stack[((hsi*825+3525)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+35375)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1365)*1+lsi)*1]), &(inteval->stack[((hsi*990+2535)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+38345)*1+lsi)*1]), &(inteval->stack[((hsi*2970+35375)*1+lsi)*1]), &(inteval->stack[((hsi*2475+5025)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+43295)*1+lsi)*1]), &(inteval->stack[((hsi*825+3525)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+45320)*1+lsi)*1]), &(inteval->stack[((hsi*2475+5025)*1+lsi)*1]), &(inteval->stack[((hsi*2025+43295)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+49370)*1+lsi)*1]), &(inteval->stack[((hsi*4950+38345)*1+lsi)*1]), &(inteval->stack[((hsi*4050+45320)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+43295)*1+lsi)*1]), &(inteval->stack[((hsi*1365+0)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1365)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+43295)*1+lsi)*1]), &(inteval->stack[((hsi*2970+35375)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+56120)*1+lsi)*1]), &(inteval->stack[((hsi*5940+0)*1+lsi)*1]), &(inteval->stack[((hsi*4950+38345)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+35375)*1+lsi)*1]), &(inteval->stack[((hsi*8250+56120)*1+lsi)*1]), &(inteval->stack[((hsi*6750+49370)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*20250+8375)*1+lsi)*1]), &(inteval->stack[((hsi*10125+35375)*1+lsi)*1]), &(inteval->stack[((hsi*6750+28625)*1+lsi)*1]),675);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*20250+8375)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
