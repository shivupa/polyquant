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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,33184)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+130384)*1+lsi)*1]), &(inteval->stack[((hsi*2970+16930)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19900)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+137809)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19900)*1+lsi)*1]), &(inteval->stack[((hsi*2025+22375)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+143884)*1+lsi)*1]), &(inteval->stack[((hsi*7425+130384)*1+lsi)*1]), &(inteval->stack[((hsi*6075+137809)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+156034)*1+lsi)*1]), &(inteval->stack[((hsi*3510+13420)*1+lsi)*1]), &(inteval->stack[((hsi*2970+16930)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+164944)*1+lsi)*1]), &(inteval->stack[((hsi*8910+156034)*1+lsi)*1]), &(inteval->stack[((hsi*7425+130384)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+179794)*1+lsi)*1]), &(inteval->stack[((hsi*14850+164944)*1+lsi)*1]), &(inteval->stack[((hsi*12150+143884)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+130384)*1+lsi)*1]), &(inteval->stack[((hsi*2376+27208)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29584)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+136324)*1+lsi)*1]), &(inteval->stack[((hsi*1980+29584)*1+lsi)*1]), &(inteval->stack[((hsi*1620+31564)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+141184)*1+lsi)*1]), &(inteval->stack[((hsi*5940+130384)*1+lsi)*1]), &(inteval->stack[((hsi*4860+136324)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+150904)*1+lsi)*1]), &(inteval->stack[((hsi*2808+24400)*1+lsi)*1]), &(inteval->stack[((hsi*2376+27208)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+158032)*1+lsi)*1]), &(inteval->stack[((hsi*7128+150904)*1+lsi)*1]), &(inteval->stack[((hsi*5940+130384)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+13420)*1+lsi)*1]), &(inteval->stack[((hsi*11880+158032)*1+lsi)*1]), &(inteval->stack[((hsi*9720+141184)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*48600+130384)*1+lsi)*1]), &(inteval->stack[((hsi*20250+179794)*1+lsi)*1]), &(inteval->stack[((hsi*16200+13420)*1+lsi)*1]),450);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+13420)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+22495)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+200044)*1+lsi)*1]), &(inteval->stack[((hsi*9075+13420)*1+lsi)*1]), &(inteval->stack[((hsi*7425+22495)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+214894)*1+lsi)*1]), &(inteval->stack[((hsi*4290+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+225784)*1+lsi)*1]), &(inteval->stack[((hsi*10890+214894)*1+lsi)*1]), &(inteval->stack[((hsi*9075+13420)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+0)*1+lsi)*1]), &(inteval->stack[((hsi*18150+225784)*1+lsi)*1]), &(inteval->stack[((hsi*14850+200044)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*60750+200044)*1+lsi)*1]), &(inteval->stack[((hsi*24750+0)*1+lsi)*1]), &(inteval->stack[((hsi*20250+179794)*1+lsi)*1]),450);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*97200+33184)*1+lsi)*1]), &(inteval->stack[((hsi*60750+200044)*1+lsi)*1]), &(inteval->stack[((hsi*48600+130384)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*97200+33184)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
