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
#include <eri3_aB_H__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7035)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__L__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+21210)*1+lsi)*1]), &(inteval->stack[((hsi*1386+3549)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4935)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+24675)*1+lsi)*1]), &(inteval->stack[((hsi*1638+1911)*1+lsi)*1]), &(inteval->stack[((hsi*1386+3549)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+28833)*1+lsi)*1]), &(inteval->stack[((hsi*4158+24675)*1+lsi)*1]), &(inteval->stack[((hsi*3465+21210)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+35763)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4935)*1+lsi)*1]), &(inteval->stack[((hsi*945+6090)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+38598)*1+lsi)*1]), &(inteval->stack[((hsi*3465+21210)*1+lsi)*1]), &(inteval->stack[((hsi*2835+35763)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+44268)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28833)*1+lsi)*1]), &(inteval->stack[((hsi*5670+38598)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+35763)*1+lsi)*1]), &(inteval->stack[((hsi*1911+0)*1+lsi)*1]), &(inteval->stack[((hsi*1638+1911)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+53718)*1+lsi)*1]), &(inteval->stack[((hsi*4914+35763)*1+lsi)*1]), &(inteval->stack[((hsi*4158+24675)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+62034)*1+lsi)*1]), &(inteval->stack[((hsi*8316+53718)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28833)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+7035)*1+lsi)*1]), &(inteval->stack[((hsi*11550+62034)*1+lsi)*1]), &(inteval->stack[((hsi*9450+44268)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*14175+7035)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif