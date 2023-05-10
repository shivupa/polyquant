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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__L__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__L__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15616)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__L__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+53416)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10968)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12816)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+58036)*1+lsi)*1]), &(inteval->stack[((hsi*1540+12816)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14356)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+61816)*1+lsi)*1]), &(inteval->stack[((hsi*4620+53416)*1+lsi)*1]), &(inteval->stack[((hsi*3780+58036)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+69376)*1+lsi)*1]), &(inteval->stack[((hsi*2184+8784)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10968)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+74920)*1+lsi)*1]), &(inteval->stack[((hsi*5544+69376)*1+lsi)*1]), &(inteval->stack[((hsi*4620+53416)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+84160)*1+lsi)*1]), &(inteval->stack[((hsi*9240+74920)*1+lsi)*1]), &(inteval->stack[((hsi*7560+61816)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+53416)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+59356)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7164)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+64216)*1+lsi)*1]), &(inteval->stack[((hsi*5940+53416)*1+lsi)*1]), &(inteval->stack[((hsi*4860+59356)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+5184)*1+lsi)*1]), &(inteval->stack[((hsi*2808+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+96760)*1+lsi)*1]), &(inteval->stack[((hsi*7128+5184)*1+lsi)*1]), &(inteval->stack[((hsi*5940+53416)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+108640)*1+lsi)*1]), &(inteval->stack[((hsi*11880+96760)*1+lsi)*1]), &(inteval->stack[((hsi*9720+64216)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*37800+15616)*1+lsi)*1]), &(inteval->stack[((hsi*16200+108640)*1+lsi)*1]), &(inteval->stack[((hsi*12600+84160)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*37800+15616)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
