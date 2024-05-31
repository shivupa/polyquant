/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
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
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0op.h>
#include <eri3_aB_G__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_G__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5565)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_G__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+16905)*1+lsi)*1]), &(inteval->stack[((hsi*825+3525)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+18930)*1+lsi)*1]), &(inteval->stack[((hsi*990+2535)*1+lsi)*1]), &(inteval->stack[((hsi*825+3525)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+21405)*1+lsi)*1]), &(inteval->stack[((hsi*2475+18930)*1+lsi)*1]), &(inteval->stack[((hsi*2025+16905)*1+lsi)*1]),15);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*2970+25455)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1365)*1+lsi)*1]), &(inteval->stack[((hsi*990+2535)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+28425)*1+lsi)*1]), &(inteval->stack[((hsi*2970+25455)*1+lsi)*1]), &(inteval->stack[((hsi*2475+18930)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+33375)*1+lsi)*1]), &(inteval->stack[((hsi*4950+28425)*1+lsi)*1]), &(inteval->stack[((hsi*4050+21405)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+18930)*1+lsi)*1]), &(inteval->stack[((hsi*675+4350)*1+lsi)*1]), &(inteval->stack[((hsi*540+5025)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+40125)*1+lsi)*1]), &(inteval->stack[((hsi*2025+16905)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18930)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+43365)*1+lsi)*1]), &(inteval->stack[((hsi*4050+21405)*1+lsi)*1]), &(inteval->stack[((hsi*3240+40125)*1+lsi)*1]),15);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*8100+16905)*1+lsi)*1]), &(inteval->stack[((hsi*6750+33375)*1+lsi)*1]), &(inteval->stack[((hsi*5400+43365)*1+lsi)*1]),15);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*3510+40125)*1+lsi)*1]), &(inteval->stack[((hsi*1365+0)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1365)*1+lsi)*1]),15);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*5940+43635)*1+lsi)*1]), &(inteval->stack[((hsi*3510+40125)*1+lsi)*1]), &(inteval->stack[((hsi*2970+25455)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+49575)*1+lsi)*1]), &(inteval->stack[((hsi*5940+43635)*1+lsi)*1]), &(inteval->stack[((hsi*4950+28425)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+57825)*1+lsi)*1]), &(inteval->stack[((hsi*8250+49575)*1+lsi)*1]), &(inteval->stack[((hsi*6750+33375)*1+lsi)*1]),15);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*11340+5565)*1+lsi)*1]), &(inteval->stack[((hsi*10125+57825)*1+lsi)*1]), &(inteval->stack[((hsi*8100+16905)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11340+5565)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
