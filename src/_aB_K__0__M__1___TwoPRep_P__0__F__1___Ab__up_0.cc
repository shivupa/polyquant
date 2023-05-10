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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__M__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,23490)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+82890)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16326)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19134)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+90018)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19134)*1+lsi)*1]), &(inteval->stack[((hsi*1980+21510)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+95958)*1+lsi)*1]), &(inteval->stack[((hsi*7128+82890)*1+lsi)*1]), &(inteval->stack[((hsi*5940+90018)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+107838)*1+lsi)*1]), &(inteval->stack[((hsi*3276+13050)*1+lsi)*1]), &(inteval->stack[((hsi*2808+16326)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+116262)*1+lsi)*1]), &(inteval->stack[((hsi*8424+107838)*1+lsi)*1]), &(inteval->stack[((hsi*7128+82890)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+130518)*1+lsi)*1]), &(inteval->stack[((hsi*14256+116262)*1+lsi)*1]), &(inteval->stack[((hsi*11880+95958)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+82890)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+91800)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10575)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+99225)*1+lsi)*1]), &(inteval->stack[((hsi*8910+82890)*1+lsi)*1]), &(inteval->stack[((hsi*7425+91800)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+114075)*1+lsi)*1]), &(inteval->stack[((hsi*4095+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+0)*1+lsi)*1]), &(inteval->stack[((hsi*10530+114075)*1+lsi)*1]), &(inteval->stack[((hsi*8910+82890)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+150318)*1+lsi)*1]), &(inteval->stack[((hsi*17820+0)*1+lsi)*1]), &(inteval->stack[((hsi*14850+99225)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*59400+23490)*1+lsi)*1]), &(inteval->stack[((hsi*24750+150318)*1+lsi)*1]), &(inteval->stack[((hsi*19800+130518)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*59400+23490)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
