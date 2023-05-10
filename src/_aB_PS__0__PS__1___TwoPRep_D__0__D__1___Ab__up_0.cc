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
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,55225)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+212041)*1+lsi)*1]), &(inteval->stack[((hsi*6084+28483)*1+lsi)*1]), &(inteval->stack[((hsi*5148+34567)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+227485)*1+lsi)*1]), &(inteval->stack[((hsi*7098+21385)*1+lsi)*1]), &(inteval->stack[((hsi*6084+28483)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+245737)*1+lsi)*1]), &(inteval->stack[((hsi*18252+227485)*1+lsi)*1]), &(inteval->stack[((hsi*15444+212041)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+212041)*1+lsi)*1]), &(inteval->stack[((hsi*5148+45721)*1+lsi)*1]), &(inteval->stack[((hsi*4356+50869)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+225109)*1+lsi)*1]), &(inteval->stack[((hsi*6006+39715)*1+lsi)*1]), &(inteval->stack[((hsi*5148+45721)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+21385)*1+lsi)*1]), &(inteval->stack[((hsi*15444+225109)*1+lsi)*1]), &(inteval->stack[((hsi*13068+212041)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*78408+276625)*1+lsi)*1]), &(inteval->stack[((hsi*30888+245737)*1+lsi)*1]), &(inteval->stack[((hsi*26136+21385)*1+lsi)*1]),396);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+21385)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8281)*1+lsi)*1]), &(inteval->stack[((hsi*6006+15379)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+212041)*1+lsi)*1]), &(inteval->stack[((hsi*8281+0)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8281)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+355033)*1+lsi)*1]), &(inteval->stack[((hsi*21294+212041)*1+lsi)*1]), &(inteval->stack[((hsi*18018+21385)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*92664+391069)*1+lsi)*1]), &(inteval->stack[((hsi*36036+355033)*1+lsi)*1]), &(inteval->stack[((hsi*30888+245737)*1+lsi)*1]),396);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*156816+55225)*1+lsi)*1]), &(inteval->stack[((hsi*92664+391069)*1+lsi)*1]), &(inteval->stack[((hsi*78408+276625)*1+lsi)*1]),396);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*156816+55225)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
