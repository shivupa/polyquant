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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_K__0__K__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27472)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+105232)*1+lsi)*1]), &(inteval->stack[((hsi*2475+14080)*1+lsi)*1]), &(inteval->stack[((hsi*2025+16555)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+111307)*1+lsi)*1]), &(inteval->stack[((hsi*2025+16555)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18580)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+116167)*1+lsi)*1]), &(inteval->stack[((hsi*6075+105232)*1+lsi)*1]), &(inteval->stack[((hsi*4860+111307)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+125887)*1+lsi)*1]), &(inteval->stack[((hsi*2970+11110)*1+lsi)*1]), &(inteval->stack[((hsi*2475+14080)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+133312)*1+lsi)*1]), &(inteval->stack[((hsi*7425+125887)*1+lsi)*1]), &(inteval->stack[((hsi*6075+105232)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+145462)*1+lsi)*1]), &(inteval->stack[((hsi*12150+133312)*1+lsi)*1]), &(inteval->stack[((hsi*9720+116167)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+105232)*1+lsi)*1]), &(inteval->stack[((hsi*1980+22576)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24556)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+110092)*1+lsi)*1]), &(inteval->stack[((hsi*1620+24556)*1+lsi)*1]), &(inteval->stack[((hsi*1296+26176)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+113980)*1+lsi)*1]), &(inteval->stack[((hsi*4860+105232)*1+lsi)*1]), &(inteval->stack[((hsi*3888+110092)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+121756)*1+lsi)*1]), &(inteval->stack[((hsi*2376+20200)*1+lsi)*1]), &(inteval->stack[((hsi*1980+22576)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+127696)*1+lsi)*1]), &(inteval->stack[((hsi*5940+121756)*1+lsi)*1]), &(inteval->stack[((hsi*4860+105232)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+11110)*1+lsi)*1]), &(inteval->stack[((hsi*9720+127696)*1+lsi)*1]), &(inteval->stack[((hsi*7776+113980)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*38880+105232)*1+lsi)*1]), &(inteval->stack[((hsi*16200+145462)*1+lsi)*1]), &(inteval->stack[((hsi*12960+11110)*1+lsi)*1]),360);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+11110)*1+lsi)*1]), &(inteval->stack[((hsi*3025+3630)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6655)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+18535)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6655)*1+lsi)*1]), &(inteval->stack[((hsi*1980+9130)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+161662)*1+lsi)*1]), &(inteval->stack[((hsi*7425+11110)*1+lsi)*1]), &(inteval->stack[((hsi*5940+18535)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+173542)*1+lsi)*1]), &(inteval->stack[((hsi*3630+0)*1+lsi)*1]), &(inteval->stack[((hsi*3025+3630)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+182617)*1+lsi)*1]), &(inteval->stack[((hsi*9075+173542)*1+lsi)*1]), &(inteval->stack[((hsi*7425+11110)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+0)*1+lsi)*1]), &(inteval->stack[((hsi*14850+182617)*1+lsi)*1]), &(inteval->stack[((hsi*11880+161662)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*48600+161662)*1+lsi)*1]), &(inteval->stack[((hsi*19800+0)*1+lsi)*1]), &(inteval->stack[((hsi*16200+145462)*1+lsi)*1]),360);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*77760+27472)*1+lsi)*1]), &(inteval->stack[((hsi*48600+161662)*1+lsi)*1]), &(inteval->stack[((hsi*38880+105232)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*77760+27472)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
