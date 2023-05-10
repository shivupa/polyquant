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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,40504)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+162004)*1+lsi)*1]), &(inteval->stack[((hsi*3630+20394)*1+lsi)*1]), &(inteval->stack[((hsi*3025+24024)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+171079)*1+lsi)*1]), &(inteval->stack[((hsi*3025+24024)*1+lsi)*1]), &(inteval->stack[((hsi*2475+27049)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+178504)*1+lsi)*1]), &(inteval->stack[((hsi*9075+162004)*1+lsi)*1]), &(inteval->stack[((hsi*7425+171079)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+193354)*1+lsi)*1]), &(inteval->stack[((hsi*4290+16104)*1+lsi)*1]), &(inteval->stack[((hsi*3630+20394)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+204244)*1+lsi)*1]), &(inteval->stack[((hsi*10890+193354)*1+lsi)*1]), &(inteval->stack[((hsi*9075+162004)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+222394)*1+lsi)*1]), &(inteval->stack[((hsi*18150+204244)*1+lsi)*1]), &(inteval->stack[((hsi*14850+178504)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+162004)*1+lsi)*1]), &(inteval->stack[((hsi*2970+33034)*1+lsi)*1]), &(inteval->stack[((hsi*2475+36004)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+169429)*1+lsi)*1]), &(inteval->stack[((hsi*2475+36004)*1+lsi)*1]), &(inteval->stack[((hsi*2025+38479)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+175504)*1+lsi)*1]), &(inteval->stack[((hsi*7425+162004)*1+lsi)*1]), &(inteval->stack[((hsi*6075+169429)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+187654)*1+lsi)*1]), &(inteval->stack[((hsi*3510+29524)*1+lsi)*1]), &(inteval->stack[((hsi*2970+33034)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+196564)*1+lsi)*1]), &(inteval->stack[((hsi*8910+187654)*1+lsi)*1]), &(inteval->stack[((hsi*7425+162004)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+16104)*1+lsi)*1]), &(inteval->stack[((hsi*14850+196564)*1+lsi)*1]), &(inteval->stack[((hsi*12150+175504)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*60750+247144)*1+lsi)*1]), &(inteval->stack[((hsi*24750+222394)*1+lsi)*1]), &(inteval->stack[((hsi*20250+16104)*1+lsi)*1]),450);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+162004)*1+lsi)*1]), &(inteval->stack[((hsi*4356+5148)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9504)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+172894)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9504)*1+lsi)*1]), &(inteval->stack[((hsi*2970+13134)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+181804)*1+lsi)*1]), &(inteval->stack[((hsi*10890+162004)*1+lsi)*1]), &(inteval->stack[((hsi*8910+172894)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+9504)*1+lsi)*1]), &(inteval->stack[((hsi*5148+0)*1+lsi)*1]), &(inteval->stack[((hsi*4356+5148)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+199624)*1+lsi)*1]), &(inteval->stack[((hsi*13068+9504)*1+lsi)*1]), &(inteval->stack[((hsi*10890+162004)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+0)*1+lsi)*1]), &(inteval->stack[((hsi*21780+199624)*1+lsi)*1]), &(inteval->stack[((hsi*17820+181804)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*74250+307894)*1+lsi)*1]), &(inteval->stack[((hsi*29700+0)*1+lsi)*1]), &(inteval->stack[((hsi*24750+222394)*1+lsi)*1]),450);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*121500+40504)*1+lsi)*1]), &(inteval->stack[((hsi*74250+307894)*1+lsi)*1]), &(inteval->stack[((hsi*60750+247144)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*121500+40504)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
