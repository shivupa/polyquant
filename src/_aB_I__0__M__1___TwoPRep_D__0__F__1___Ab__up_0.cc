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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31610)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+124010)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16326)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19134)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+131138)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19134)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21510)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+137078)*1+lsi)*1]), &(inteval->stack[((hsi*7128+124010)*1+lsi)*1]), &(inteval->stack[((hsi*5940+131138)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+148958)*1+lsi)*1]), &(inteval->stack[((hsi*3276+13050)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16326)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+157382)*1+lsi)*1]), &(inteval->stack[((hsi*8424+148958)*1+lsi)*1]), &(inteval->stack[((hsi*7128+124010)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+171638)*1+lsi)*1]), &(inteval->stack[((hsi*14256+157382)*1+lsi)*1]), &(inteval->stack[((hsi*11880+137078)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+124010)*1+lsi)*1]), &(inteval->stack[((hsi*2184+26038)*1+lsi)*1]), &(inteval->stack[((hsi*1848+28222)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+129554)*1+lsi)*1]), &(inteval->stack[((hsi*1848+28222)*1+lsi)*1]), &(inteval->stack[((hsi*1540+30070)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+134174)*1+lsi)*1]), &(inteval->stack[((hsi*5544+124010)*1+lsi)*1]), &(inteval->stack[((hsi*4620+129554)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+143414)*1+lsi)*1]), &(inteval->stack[((hsi*2548+23490)*1+lsi)*1]), &(inteval->stack[((hsi*2184+26038)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+149966)*1+lsi)*1]), &(inteval->stack[((hsi*6552+143414)*1+lsi)*1]), &(inteval->stack[((hsi*5544+124010)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+13050)*1+lsi)*1]), &(inteval->stack[((hsi*11088+149966)*1+lsi)*1]), &(inteval->stack[((hsi*9240+134174)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*46200+124010)*1+lsi)*1]), &(inteval->stack[((hsi*19800+171638)*1+lsi)*1]), &(inteval->stack[((hsi*15400+13050)*1+lsi)*1]),550);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+13050)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+21960)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10575)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+191438)*1+lsi)*1]), &(inteval->stack[((hsi*8910+13050)*1+lsi)*1]), &(inteval->stack[((hsi*7425+21960)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+206288)*1+lsi)*1]), &(inteval->stack[((hsi*4095+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+216818)*1+lsi)*1]), &(inteval->stack[((hsi*10530+206288)*1+lsi)*1]), &(inteval->stack[((hsi*8910+13050)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+0)*1+lsi)*1]), &(inteval->stack[((hsi*17820+216818)*1+lsi)*1]), &(inteval->stack[((hsi*14850+191438)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*59400+191438)*1+lsi)*1]), &(inteval->stack[((hsi*24750+0)*1+lsi)*1]), &(inteval->stack[((hsi*19800+171638)*1+lsi)*1]),550);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*92400+31610)*1+lsi)*1]), &(inteval->stack[((hsi*59400+191438)*1+lsi)*1]), &(inteval->stack[((hsi*46200+124010)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*92400+31610)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
