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
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_L__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27556)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+100456)*1+lsi)*1]), &(inteval->stack[((hsi*3025+14586)*1+lsi)*1]), &(inteval->stack[((hsi*2475+17611)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+107881)*1+lsi)*1]), &(inteval->stack[((hsi*3630+10956)*1+lsi)*1]), &(inteval->stack[((hsi*3025+14586)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+116956)*1+lsi)*1]), &(inteval->stack[((hsi*9075+107881)*1+lsi)*1]), &(inteval->stack[((hsi*7425+100456)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+100456)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23056)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25531)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+106531)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20086)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23056)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+10956)*1+lsi)*1]), &(inteval->stack[((hsi*7425+106531)*1+lsi)*1]), &(inteval->stack[((hsi*6075+100456)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*36450+131806)*1+lsi)*1]), &(inteval->stack[((hsi*14850+116956)*1+lsi)*1]), &(inteval->stack[((hsi*12150+10956)*1+lsi)*1]),270);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+10956)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7986)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+100456)*1+lsi)*1]), &(inteval->stack[((hsi*4356+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4356)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+168256)*1+lsi)*1]), &(inteval->stack[((hsi*10890+100456)*1+lsi)*1]), &(inteval->stack[((hsi*8910+10956)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*44550+186076)*1+lsi)*1]), &(inteval->stack[((hsi*17820+168256)*1+lsi)*1]), &(inteval->stack[((hsi*14850+116956)*1+lsi)*1]),270);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*72900+27556)*1+lsi)*1]), &(inteval->stack[((hsi*44550+186076)*1+lsi)*1]), &(inteval->stack[((hsi*36450+131806)*1+lsi)*1]),270);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*72900+27556)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
