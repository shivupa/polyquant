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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,20740)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+77440)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10968)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12816)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+82060)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12816)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14356)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+85840)*1+lsi)*1]), &(inteval->stack[((hsi*4620+77440)*1+lsi)*1]), &(inteval->stack[((hsi*3780+82060)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+93400)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8784)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10968)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+98944)*1+lsi)*1]), &(inteval->stack[((hsi*5544+93400)*1+lsi)*1]), &(inteval->stack[((hsi*4620+77440)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+108184)*1+lsi)*1]), &(inteval->stack[((hsi*9240+98944)*1+lsi)*1]), &(inteval->stack[((hsi*7560+85840)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+77440)*1+lsi)*1]), &(inteval->stack[((hsi*1386+17254)*1+lsi)*1]), &(inteval->stack[((hsi*1155+18640)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+80905)*1+lsi)*1]), &(inteval->stack[((hsi*1155+18640)*1+lsi)*1]), &(inteval->stack[((hsi*945+19795)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+83740)*1+lsi)*1]), &(inteval->stack[((hsi*3465+77440)*1+lsi)*1]), &(inteval->stack[((hsi*2835+80905)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+89410)*1+lsi)*1]), &(inteval->stack[((hsi*1638+15616)*1+lsi)*1]), &(inteval->stack[((hsi*1386+17254)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+93568)*1+lsi)*1]), &(inteval->stack[((hsi*4158+89410)*1+lsi)*1]), &(inteval->stack[((hsi*3465+77440)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+8784)*1+lsi)*1]), &(inteval->stack[((hsi*6930+93568)*1+lsi)*1]), &(inteval->stack[((hsi*5670+83740)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*28350+77440)*1+lsi)*1]), &(inteval->stack[((hsi*12600+108184)*1+lsi)*1]), &(inteval->stack[((hsi*9450+8784)*1+lsi)*1]),450);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+8784)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+14724)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7164)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+120784)*1+lsi)*1]), &(inteval->stack[((hsi*5940+8784)*1+lsi)*1]), &(inteval->stack[((hsi*4860+14724)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+130504)*1+lsi)*1]), &(inteval->stack[((hsi*2808+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+137632)*1+lsi)*1]), &(inteval->stack[((hsi*7128+130504)*1+lsi)*1]), &(inteval->stack[((hsi*5940+8784)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+0)*1+lsi)*1]), &(inteval->stack[((hsi*11880+137632)*1+lsi)*1]), &(inteval->stack[((hsi*9720+120784)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*37800+120784)*1+lsi)*1]), &(inteval->stack[((hsi*16200+0)*1+lsi)*1]), &(inteval->stack[((hsi*12600+108184)*1+lsi)*1]),450);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*56700+20740)*1+lsi)*1]), &(inteval->stack[((hsi*37800+120784)*1+lsi)*1]), &(inteval->stack[((hsi*28350+77440)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*56700+20740)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
