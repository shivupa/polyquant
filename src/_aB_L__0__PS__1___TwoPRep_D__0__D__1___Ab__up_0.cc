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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,39010)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+145930)*1+lsi)*1]), &(inteval->stack[((hsi*4290+20254)*1+lsi)*1]), &(inteval->stack[((hsi*3510+24544)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+156460)*1+lsi)*1]), &(inteval->stack[((hsi*5148+15106)*1+lsi)*1]), &(inteval->stack[((hsi*4290+20254)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+169330)*1+lsi)*1]), &(inteval->stack[((hsi*12870+156460)*1+lsi)*1]), &(inteval->stack[((hsi*10530+145930)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+145930)*1+lsi)*1]), &(inteval->stack[((hsi*3630+32410)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36040)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+154840)*1+lsi)*1]), &(inteval->stack[((hsi*4356+28054)*1+lsi)*1]), &(inteval->stack[((hsi*3630+32410)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+15106)*1+lsi)*1]), &(inteval->stack[((hsi*10890+154840)*1+lsi)*1]), &(inteval->stack[((hsi*8910+145930)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*53460+190390)*1+lsi)*1]), &(inteval->stack[((hsi*21060+169330)*1+lsi)*1]), &(inteval->stack[((hsi*17820+15106)*1+lsi)*1]),270);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+15106)*1+lsi)*1]), &(inteval->stack[((hsi*5005+6006)*1+lsi)*1]), &(inteval->stack[((hsi*4095+11011)*1+lsi)*1]),91);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+145930)*1+lsi)*1]), &(inteval->stack[((hsi*6006+0)*1+lsi)*1]), &(inteval->stack[((hsi*5005+6006)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+243850)*1+lsi)*1]), &(inteval->stack[((hsi*15015+145930)*1+lsi)*1]), &(inteval->stack[((hsi*12285+15106)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*63180+268420)*1+lsi)*1]), &(inteval->stack[((hsi*24570+243850)*1+lsi)*1]), &(inteval->stack[((hsi*21060+169330)*1+lsi)*1]),270);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*106920+39010)*1+lsi)*1]), &(inteval->stack[((hsi*63180+268420)*1+lsi)*1]), &(inteval->stack[((hsi*53460+190390)*1+lsi)*1]),270);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*106920+39010)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
