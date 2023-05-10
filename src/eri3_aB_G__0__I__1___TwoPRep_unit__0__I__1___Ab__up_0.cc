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
#include <eri3_aB_G__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_G__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5985)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_G__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+17745)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]), &(inteval->stack[((hsi*540+5025)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+19365)*1+lsi)*1]), &(inteval->stack[((hsi*825+3525)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+21390)*1+lsi)*1]), &(inteval->stack[((hsi*2025+19365)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17745)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+24630)*1+lsi)*1]), &(inteval->stack[((hsi*990+2535)*1+lsi)*1]), &(inteval->stack[((hsi*825+3525)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+27105)*1+lsi)*1]), &(inteval->stack[((hsi*2475+24630)*1+lsi)*1]), &(inteval->stack[((hsi*2025+19365)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+31155)*1+lsi)*1]), &(inteval->stack[((hsi*4050+27105)*1+lsi)*1]), &(inteval->stack[((hsi*3240+21390)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+36555)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1365)*1+lsi)*1]), &(inteval->stack[((hsi*990+2535)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+39525)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36555)*1+lsi)*1]), &(inteval->stack[((hsi*2475+24630)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+44475)*1+lsi)*1]), &(inteval->stack[((hsi*4950+39525)*1+lsi)*1]), &(inteval->stack[((hsi*4050+27105)*1+lsi)*1]),15);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*8100+51225)*1+lsi)*1]), &(inteval->stack[((hsi*6750+44475)*1+lsi)*1]), &(inteval->stack[((hsi*5400+31155)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+24630)*1+lsi)*1]), &(inteval->stack[((hsi*540+5025)*1+lsi)*1]), &(inteval->stack[((hsi*420+5565)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+25890)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17745)*1+lsi)*1]), &(inteval->stack[((hsi*1260+24630)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+59325)*1+lsi)*1]), &(inteval->stack[((hsi*3240+21390)*1+lsi)*1]), &(inteval->stack[((hsi*2520+25890)*1+lsi)*1]),15);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*6300+17745)*1+lsi)*1]), &(inteval->stack[((hsi*5400+31155)*1+lsi)*1]), &(inteval->stack[((hsi*4200+59325)*1+lsi)*1]),15);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*8820+24045)*1+lsi)*1]), &(inteval->stack[((hsi*8100+51225)*1+lsi)*1]), &(inteval->stack[((hsi*6300+17745)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+17745)*1+lsi)*1]), &(inteval->stack[((hsi*1365+0)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1365)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+17745)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36555)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+59325)*1+lsi)*1]), &(inteval->stack[((hsi*5940+0)*1+lsi)*1]), &(inteval->stack[((hsi*4950+39525)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+32865)*1+lsi)*1]), &(inteval->stack[((hsi*8250+59325)*1+lsi)*1]), &(inteval->stack[((hsi*6750+44475)*1+lsi)*1]),15);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*11340+59325)*1+lsi)*1]), &(inteval->stack[((hsi*10125+32865)*1+lsi)*1]), &(inteval->stack[((hsi*8100+51225)*1+lsi)*1]),15);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*11760+5985)*1+lsi)*1]), &(inteval->stack[((hsi*11340+59325)*1+lsi)*1]), &(inteval->stack[((hsi*8820+24045)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11760+5985)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
