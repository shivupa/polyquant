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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <eri3_aB_PS__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_PS__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10824)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_PS__0__I__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+29304)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3630)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6600)*1+lsi)*1]),66);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+36432)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6600)*1+lsi)*1]), &(inteval->stack[((hsi*1848+8976)*1+lsi)*1]),66);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*11088+41976)*1+lsi)*1]), &(inteval->stack[((hsi*7128+29304)*1+lsi)*1]), &(inteval->stack[((hsi*5544+36432)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+53064)*1+lsi)*1]), &(inteval->stack[((hsi*3630+0)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3630)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+61974)*1+lsi)*1]), &(inteval->stack[((hsi*8910+53064)*1+lsi)*1]), &(inteval->stack[((hsi*7128+29304)*1+lsi)*1]),66);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*18480+10824)*1+lsi)*1]), &(inteval->stack[((hsi*14256+61974)*1+lsi)*1]), &(inteval->stack[((hsi*11088+41976)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*18480+10824)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
