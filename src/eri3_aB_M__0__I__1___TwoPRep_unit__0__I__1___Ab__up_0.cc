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
#include <eri3_aB_M__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21945)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+65065)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15950)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18425)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+71005)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15950)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+78430)*1+lsi)*1]), &(inteval->stack[((hsi*7425+71005)*1+lsi)*1]), &(inteval->stack[((hsi*5940+65065)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+90310)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+99385)*1+lsi)*1]), &(inteval->stack[((hsi*9075+90310)*1+lsi)*1]), &(inteval->stack[((hsi*7425+71005)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+114235)*1+lsi)*1]), &(inteval->stack[((hsi*14850+99385)*1+lsi)*1]), &(inteval->stack[((hsi*11880+78430)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+134035)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+144925)*1+lsi)*1]), &(inteval->stack[((hsi*10890+134035)*1+lsi)*1]), &(inteval->stack[((hsi*9075+90310)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+163075)*1+lsi)*1]), &(inteval->stack[((hsi*18150+144925)*1+lsi)*1]), &(inteval->stack[((hsi*14850+99385)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+187825)*1+lsi)*1]), &(inteval->stack[((hsi*24750+163075)*1+lsi)*1]), &(inteval->stack[((hsi*19800+114235)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+90310)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18425)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20405)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+94930)*1+lsi)*1]), &(inteval->stack[((hsi*5940+65065)*1+lsi)*1]), &(inteval->stack[((hsi*4620+90310)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+217525)*1+lsi)*1]), &(inteval->stack[((hsi*11880+78430)*1+lsi)*1]), &(inteval->stack[((hsi*9240+94930)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+65065)*1+lsi)*1]), &(inteval->stack[((hsi*19800+114235)*1+lsi)*1]), &(inteval->stack[((hsi*15400+217525)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+88165)*1+lsi)*1]), &(inteval->stack[((hsi*29700+187825)*1+lsi)*1]), &(inteval->stack[((hsi*23100+65065)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+65065)*1+lsi)*1]), &(inteval->stack[((hsi*5005+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+0)*1+lsi)*1]), &(inteval->stack[((hsi*12870+65065)*1+lsi)*1]), &(inteval->stack[((hsi*10890+134035)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+217525)*1+lsi)*1]), &(inteval->stack[((hsi*21780+0)*1+lsi)*1]), &(inteval->stack[((hsi*18150+144925)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+120505)*1+lsi)*1]), &(inteval->stack[((hsi*30250+217525)*1+lsi)*1]), &(inteval->stack[((hsi*24750+163075)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+217525)*1+lsi)*1]), &(inteval->stack[((hsi*37125+120505)*1+lsi)*1]), &(inteval->stack[((hsi*29700+187825)*1+lsi)*1]),55);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*43120+21945)*1+lsi)*1]), &(inteval->stack[((hsi*41580+217525)*1+lsi)*1]), &(inteval->stack[((hsi*32340+88165)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*43120+21945)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
