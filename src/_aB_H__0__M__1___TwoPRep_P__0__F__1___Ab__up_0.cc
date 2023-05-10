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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14210)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+48860)*1+lsi)*1]), &(inteval->stack[((hsi*1638+10031)*1+lsi)*1]), &(inteval->stack[((hsi*1386+11669)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+53018)*1+lsi)*1]), &(inteval->stack[((hsi*1386+11669)*1+lsi)*1]), &(inteval->stack[((hsi*1155+13055)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+56483)*1+lsi)*1]), &(inteval->stack[((hsi*4158+48860)*1+lsi)*1]), &(inteval->stack[((hsi*3465+53018)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+63413)*1+lsi)*1]), &(inteval->stack[((hsi*1911+8120)*1+lsi)*1]), &(inteval->stack[((hsi*1638+10031)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+68327)*1+lsi)*1]), &(inteval->stack[((hsi*4914+63413)*1+lsi)*1]), &(inteval->stack[((hsi*4158+48860)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+76643)*1+lsi)*1]), &(inteval->stack[((hsi*8316+68327)*1+lsi)*1]), &(inteval->stack[((hsi*6930+56483)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+48860)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2548)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4732)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+54404)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4732)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6580)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+59024)*1+lsi)*1]), &(inteval->stack[((hsi*5544+48860)*1+lsi)*1]), &(inteval->stack[((hsi*4620+54404)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+4732)*1+lsi)*1]), &(inteval->stack[((hsi*2548+0)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2548)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+88193)*1+lsi)*1]), &(inteval->stack[((hsi*6552+4732)*1+lsi)*1]), &(inteval->stack[((hsi*5544+48860)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+99281)*1+lsi)*1]), &(inteval->stack[((hsi*11088+88193)*1+lsi)*1]), &(inteval->stack[((hsi*9240+59024)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*34650+14210)*1+lsi)*1]), &(inteval->stack[((hsi*15400+99281)*1+lsi)*1]), &(inteval->stack[((hsi*11550+76643)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*34650+14210)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
