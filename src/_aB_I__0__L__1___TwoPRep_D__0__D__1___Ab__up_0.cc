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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_I__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__L__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18094)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+63454)*1+lsi)*1]), &(inteval->stack[((hsi*1980+9669)*1+lsi)*1]), &(inteval->stack[((hsi*1540+11649)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+68074)*1+lsi)*1]), &(inteval->stack[((hsi*2475+7194)*1+lsi)*1]), &(inteval->stack[((hsi*1980+9669)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+74014)*1+lsi)*1]), &(inteval->stack[((hsi*5940+68074)*1+lsi)*1]), &(inteval->stack[((hsi*4620+63454)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+63454)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15214)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16834)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+67234)*1+lsi)*1]), &(inteval->stack[((hsi*2025+13189)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15214)*1+lsi)*1]),45);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*7560+7194)*1+lsi)*1]), &(inteval->stack[((hsi*4860+67234)*1+lsi)*1]), &(inteval->stack[((hsi*3780+63454)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*22680+83254)*1+lsi)*1]), &(inteval->stack[((hsi*9240+74014)*1+lsi)*1]), &(inteval->stack[((hsi*7560+7194)*1+lsi)*1]),168);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+7194)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+63454)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+105934)*1+lsi)*1]), &(inteval->stack[((hsi*7128+63454)*1+lsi)*1]), &(inteval->stack[((hsi*5544+7194)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*27720+117022)*1+lsi)*1]), &(inteval->stack[((hsi*11088+105934)*1+lsi)*1]), &(inteval->stack[((hsi*9240+74014)*1+lsi)*1]),168);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*45360+18094)*1+lsi)*1]), &(inteval->stack[((hsi*27720+117022)*1+lsi)*1]), &(inteval->stack[((hsi*22680+83254)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*45360+18094)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
