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
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+103250)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20045)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23555)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+112160)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23555)*1+lsi)*1]), &(inteval->stack[((hsi*2475+26525)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+119585)*1+lsi)*1]), &(inteval->stack[((hsi*8910+103250)*1+lsi)*1]), &(inteval->stack[((hsi*7425+112160)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+134435)*1+lsi)*1]), &(inteval->stack[((hsi*4095+15950)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20045)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+144965)*1+lsi)*1]), &(inteval->stack[((hsi*10530+134435)*1+lsi)*1]), &(inteval->stack[((hsi*8910+103250)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+162785)*1+lsi)*1]), &(inteval->stack[((hsi*17820+144965)*1+lsi)*1]), &(inteval->stack[((hsi*14850+119585)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+103250)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+114140)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+123215)*1+lsi)*1]), &(inteval->stack[((hsi*10890+103250)*1+lsi)*1]), &(inteval->stack[((hsi*9075+114140)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+141365)*1+lsi)*1]), &(inteval->stack[((hsi*5005+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+0)*1+lsi)*1]), &(inteval->stack[((hsi*12870+141365)*1+lsi)*1]), &(inteval->stack[((hsi*10890+103250)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+187535)*1+lsi)*1]), &(inteval->stack[((hsi*21780+0)*1+lsi)*1]), &(inteval->stack[((hsi*18150+123215)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*74250+29000)*1+lsi)*1]), &(inteval->stack[((hsi*30250+187535)*1+lsi)*1]), &(inteval->stack[((hsi*24750+162785)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*74250+29000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif