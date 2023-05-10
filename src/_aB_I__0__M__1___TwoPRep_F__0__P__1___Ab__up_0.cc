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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_I__0__M__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,19844)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+66044)*1+lsi)*1]), &(inteval->stack[((hsi*2475+13849)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16324)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+71984)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16324)*1+lsi)*1]), &(inteval->stack[((hsi*1540+18304)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+76604)*1+lsi)*1]), &(inteval->stack[((hsi*5940+66044)*1+lsi)*1]), &(inteval->stack[((hsi*4620+71984)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+85844)*1+lsi)*1]), &(inteval->stack[((hsi*3025+10824)*1+lsi)*1]), &(inteval->stack[((hsi*2475+13849)*1+lsi)*1]),55);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+93269)*1+lsi)*1]), &(inteval->stack[((hsi*7425+85844)*1+lsi)*1]), &(inteval->stack[((hsi*5940+66044)*1+lsi)*1]),55);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*15400+105149)*1+lsi)*1]), &(inteval->stack[((hsi*11880+93269)*1+lsi)*1]), &(inteval->stack[((hsi*9240+76604)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+66044)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3630)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6600)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+73172)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6600)*1+lsi)*1]), &(inteval->stack[((hsi*1848+8976)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+78716)*1+lsi)*1]), &(inteval->stack[((hsi*7128+66044)*1+lsi)*1]), &(inteval->stack[((hsi*5544+73172)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+89804)*1+lsi)*1]), &(inteval->stack[((hsi*3630+0)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3630)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*8910+89804)*1+lsi)*1]), &(inteval->stack[((hsi*7128+66044)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+120549)*1+lsi)*1]), &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*11088+78716)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*46200+19844)*1+lsi)*1]), &(inteval->stack[((hsi*18480+120549)*1+lsi)*1]), &(inteval->stack[((hsi*15400+105149)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*46200+19844)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
