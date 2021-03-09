/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2635)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*504+7171)*1+lsi)*1]), &(inteval->stack[((hsi*280+1536)*1+lsi)*1]), &(inteval->stack[((hsi*168+1816)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+7675)*1+lsi)*1]), &(inteval->stack[((hsi*420+1116)*1+lsi)*1]), &(inteval->stack[((hsi*280+1536)*1+lsi)*1]),28);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+8515)*1+lsi)*1]), &(inteval->stack[((hsi*840+7675)*1+lsi)*1]), &(inteval->stack[((hsi*504+7171)*1+lsi)*1]),28);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*378+7171)*1+lsi)*1]), &(inteval->stack[((hsi*210+2299)*1+lsi)*1]), &(inteval->stack[((hsi*126+2509)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+7549)*1+lsi)*1]), &(inteval->stack[((hsi*315+1984)*1+lsi)*1]), &(inteval->stack[((hsi*210+2299)*1+lsi)*1]),21);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*756+1116)*1+lsi)*1]), &(inteval->stack[((hsi*630+7549)*1+lsi)*1]), &(inteval->stack[((hsi*378+7171)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+9523)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8515)*1+lsi)*1]), &(inteval->stack[((hsi*756+1116)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+1116)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*216+900)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+7171)*1+lsi)*1]), &(inteval->stack[((hsi*540+0)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+11791)*1+lsi)*1]), &(inteval->stack[((hsi*1080+7171)*1+lsi)*1]), &(inteval->stack[((hsi*648+1116)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+13087)*1+lsi)*1]), &(inteval->stack[((hsi*1296+11791)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8515)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+2635)*1+lsi)*1]), &(inteval->stack[((hsi*3024+13087)*1+lsi)*1]), &(inteval->stack[((hsi*2268+9523)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4536+2635)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
