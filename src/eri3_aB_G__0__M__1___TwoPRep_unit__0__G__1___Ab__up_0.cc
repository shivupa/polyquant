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
#include <eri3_aB_G__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_G__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5925)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_G__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+18300)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2940)*1+lsi)*1]), &(inteval->stack[((hsi*990+4110)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+21270)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1575)*1+lsi)*1]), &(inteval->stack[((hsi*1170+2940)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+24780)*1+lsi)*1]), &(inteval->stack[((hsi*3510+21270)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18300)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+30720)*1+lsi)*1]), &(inteval->stack[((hsi*990+4110)*1+lsi)*1]), &(inteval->stack[((hsi*825+5100)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+33195)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18300)*1+lsi)*1]), &(inteval->stack[((hsi*2475+30720)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+38145)*1+lsi)*1]), &(inteval->stack[((hsi*5940+24780)*1+lsi)*1]), &(inteval->stack[((hsi*4950+33195)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+30720)*1+lsi)*1]), &(inteval->stack[((hsi*1575+0)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1575)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+46395)*1+lsi)*1]), &(inteval->stack[((hsi*4095+30720)*1+lsi)*1]), &(inteval->stack[((hsi*3510+21270)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+53415)*1+lsi)*1]), &(inteval->stack[((hsi*7020+46395)*1+lsi)*1]), &(inteval->stack[((hsi*5940+24780)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+5925)*1+lsi)*1]), &(inteval->stack[((hsi*9900+53415)*1+lsi)*1]), &(inteval->stack[((hsi*8250+38145)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12375+5925)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif