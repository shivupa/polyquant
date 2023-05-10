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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__M__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15730)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+50380)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11055)*1+lsi)*1]), &(inteval->stack[((hsi*1540+13035)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+55000)*1+lsi)*1]), &(inteval->stack[((hsi*1540+13035)*1+lsi)*1]), &(inteval->stack[((hsi*1155+14575)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+58465)*1+lsi)*1]), &(inteval->stack[((hsi*4620+50380)*1+lsi)*1]), &(inteval->stack[((hsi*3465+55000)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+65395)*1+lsi)*1]), &(inteval->stack[((hsi*2475+8580)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11055)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+71335)*1+lsi)*1]), &(inteval->stack[((hsi*5940+65395)*1+lsi)*1]), &(inteval->stack[((hsi*4620+50380)*1+lsi)*1]),55);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*11550+80575)*1+lsi)*1]), &(inteval->stack[((hsi*9240+71335)*1+lsi)*1]), &(inteval->stack[((hsi*6930+58465)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+50380)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+55924)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]), &(inteval->stack[((hsi*1386+7194)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+60082)*1+lsi)*1]), &(inteval->stack[((hsi*5544+50380)*1+lsi)*1]), &(inteval->stack[((hsi*4158+55924)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+68398)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+0)*1+lsi)*1]), &(inteval->stack[((hsi*7128+68398)*1+lsi)*1]), &(inteval->stack[((hsi*5544+50380)*1+lsi)*1]),66);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+92125)*1+lsi)*1]), &(inteval->stack[((hsi*11088+0)*1+lsi)*1]), &(inteval->stack[((hsi*8316+60082)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*34650+15730)*1+lsi)*1]), &(inteval->stack[((hsi*13860+92125)*1+lsi)*1]), &(inteval->stack[((hsi*11550+80575)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*34650+15730)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
