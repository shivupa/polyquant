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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_F__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__L__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7636)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+23836)*1+lsi)*1]), &(inteval->stack[((hsi*825+4191)*1+lsi)*1]), &(inteval->stack[((hsi*550+5016)*1+lsi)*1]),55);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+25486)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3036)*1+lsi)*1]), &(inteval->stack[((hsi*825+4191)*1+lsi)*1]),55);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3300+27961)*1+lsi)*1]), &(inteval->stack[((hsi*2475+25486)*1+lsi)*1]), &(inteval->stack[((hsi*1650+23836)*1+lsi)*1]),55);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+23836)*1+lsi)*1]), &(inteval->stack[((hsi*675+6511)*1+lsi)*1]), &(inteval->stack[((hsi*450+7186)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+25186)*1+lsi)*1]), &(inteval->stack[((hsi*945+5566)*1+lsi)*1]), &(inteval->stack[((hsi*675+6511)*1+lsi)*1]),45);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2700+3036)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25186)*1+lsi)*1]), &(inteval->stack[((hsi*1350+23836)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8100+31261)*1+lsi)*1]), &(inteval->stack[((hsi*3300+27961)*1+lsi)*1]), &(inteval->stack[((hsi*2700+3036)*1+lsi)*1]),60);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+3036)*1+lsi)*1]), &(inteval->stack[((hsi*990+1386)*1+lsi)*1]), &(inteval->stack[((hsi*660+2376)*1+lsi)*1]),66);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+23836)*1+lsi)*1]), &(inteval->stack[((hsi*1386+0)*1+lsi)*1]), &(inteval->stack[((hsi*990+1386)*1+lsi)*1]),66);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3960+39361)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23836)*1+lsi)*1]), &(inteval->stack[((hsi*1980+3036)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9900+43321)*1+lsi)*1]), &(inteval->stack[((hsi*3960+39361)*1+lsi)*1]), &(inteval->stack[((hsi*3300+27961)*1+lsi)*1]),60);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*16200+7636)*1+lsi)*1]), &(inteval->stack[((hsi*9900+43321)*1+lsi)*1]), &(inteval->stack[((hsi*8100+31261)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*16200+7636)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif