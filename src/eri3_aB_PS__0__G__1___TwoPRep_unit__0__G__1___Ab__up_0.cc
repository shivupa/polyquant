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
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gg.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <eri3_aB_PS__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_PS__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9570)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_PS__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+24420)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]), &(inteval->stack[((hsi*1386+7194)*1+lsi)*1]),66);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+28578)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]), &(inteval->stack[((hsi*1848+5346)*1+lsi)*1]),66);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+34122)*1+lsi)*1]), &(inteval->stack[((hsi*5544+28578)*1+lsi)*1]), &(inteval->stack[((hsi*4158+24420)*1+lsi)*1]),66);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+42438)*1+lsi)*1]), &(inteval->stack[((hsi*1386+7194)*1+lsi)*1]), &(inteval->stack[((hsi*990+8580)*1+lsi)*1]),66);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+45408)*1+lsi)*1]), &(inteval->stack[((hsi*4158+24420)*1+lsi)*1]), &(inteval->stack[((hsi*2970+42438)*1+lsi)*1]),66);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*9900+51348)*1+lsi)*1]), &(inteval->stack[((hsi*8316+34122)*1+lsi)*1]), &(inteval->stack[((hsi*5940+45408)*1+lsi)*1]),66);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+42438)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2970)*1+lsi)*1]),66);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*11088+61248)*1+lsi)*1]), &(inteval->stack[((hsi*7128+42438)*1+lsi)*1]), &(inteval->stack[((hsi*5544+28578)*1+lsi)*1]),66);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*13860+72336)*1+lsi)*1]), &(inteval->stack[((hsi*11088+61248)*1+lsi)*1]), &(inteval->stack[((hsi*8316+34122)*1+lsi)*1]),66);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*14850+9570)*1+lsi)*1]), &(inteval->stack[((hsi*13860+72336)*1+lsi)*1]), &(inteval->stack[((hsi*9900+51348)*1+lsi)*1]),66);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*14850+9570)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
