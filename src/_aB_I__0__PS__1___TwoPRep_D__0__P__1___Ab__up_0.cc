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
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15696)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_D__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+48960)*1+lsi)*1]), &(inteval->stack[((hsi*2376+11472)*1+lsi)*1]), &(inteval->stack[((hsi*1848+13848)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+54504)*1+lsi)*1]), &(inteval->stack[((hsi*2970+8502)*1+lsi)*1]), &(inteval->stack[((hsi*2376+11472)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+61632)*1+lsi)*1]), &(inteval->stack[((hsi*7128+54504)*1+lsi)*1]), &(inteval->stack[((hsi*5544+48960)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+48960)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3510)*1+lsi)*1]), &(inteval->stack[((hsi*2184+6318)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+6318)*1+lsi)*1]), &(inteval->stack[((hsi*3510+0)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3510)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+72720)*1+lsi)*1]), &(inteval->stack[((hsi*8424+6318)*1+lsi)*1]), &(inteval->stack[((hsi*6552+48960)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33264+15696)*1+lsi)*1]), &(inteval->stack[((hsi*13104+72720)*1+lsi)*1]), &(inteval->stack[((hsi*11088+61632)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*33264+15696)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif