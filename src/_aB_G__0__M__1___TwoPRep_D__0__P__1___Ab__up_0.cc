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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_G__0__M__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__M__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7744)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__M__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+22594)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5764)*1+lsi)*1]), &(inteval->stack[((hsi*825+6919)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+25069)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4224)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5764)*1+lsi)*1]),55);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4950+28534)*1+lsi)*1]), &(inteval->stack[((hsi*3465+25069)*1+lsi)*1]), &(inteval->stack[((hsi*2475+22594)*1+lsi)*1]),55);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+22594)*1+lsi)*1]), &(inteval->stack[((hsi*1386+1848)*1+lsi)*1]), &(inteval->stack[((hsi*990+3234)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+3234)*1+lsi)*1]), &(inteval->stack[((hsi*1848+0)*1+lsi)*1]), &(inteval->stack[((hsi*1386+1848)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+33484)*1+lsi)*1]), &(inteval->stack[((hsi*4158+3234)*1+lsi)*1]), &(inteval->stack[((hsi*2970+22594)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*14850+7744)*1+lsi)*1]), &(inteval->stack[((hsi*5940+33484)*1+lsi)*1]), &(inteval->stack[((hsi*4950+28534)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*14850+7744)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif