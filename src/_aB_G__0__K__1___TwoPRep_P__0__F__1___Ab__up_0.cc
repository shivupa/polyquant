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
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_G__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7272)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+23472)*1+lsi)*1]), &(inteval->stack[((hsi*825+5232)*1+lsi)*1]), &(inteval->stack[((hsi*675+6057)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+25497)*1+lsi)*1]), &(inteval->stack[((hsi*675+6057)*1+lsi)*1]), &(inteval->stack[((hsi*540+6732)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+27117)*1+lsi)*1]), &(inteval->stack[((hsi*2025+23472)*1+lsi)*1]), &(inteval->stack[((hsi*1620+25497)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+30357)*1+lsi)*1]), &(inteval->stack[((hsi*990+4242)*1+lsi)*1]), &(inteval->stack[((hsi*825+5232)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+32832)*1+lsi)*1]), &(inteval->stack[((hsi*2475+30357)*1+lsi)*1]), &(inteval->stack[((hsi*2025+23472)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+36882)*1+lsi)*1]), &(inteval->stack[((hsi*4050+32832)*1+lsi)*1]), &(inteval->stack[((hsi*3240+27117)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+23472)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1386)*1+lsi)*1]), &(inteval->stack[((hsi*945+2541)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+26307)*1+lsi)*1]), &(inteval->stack[((hsi*945+2541)*1+lsi)*1]), &(inteval->stack[((hsi*756+3486)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+28575)*1+lsi)*1]), &(inteval->stack[((hsi*2835+23472)*1+lsi)*1]), &(inteval->stack[((hsi*2268+26307)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+2541)*1+lsi)*1]), &(inteval->stack[((hsi*1386+0)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1386)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+42282)*1+lsi)*1]), &(inteval->stack[((hsi*3465+2541)*1+lsi)*1]), &(inteval->stack[((hsi*2835+23472)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+47952)*1+lsi)*1]), &(inteval->stack[((hsi*5670+42282)*1+lsi)*1]), &(inteval->stack[((hsi*4536+28575)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*16200+7272)*1+lsi)*1]), &(inteval->stack[((hsi*7560+47952)*1+lsi)*1]), &(inteval->stack[((hsi*5400+36882)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*16200+7272)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
