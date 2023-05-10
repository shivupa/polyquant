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
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25615)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+92143)*1+lsi)*1]), &(inteval->stack[((hsi*2808+13429)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16237)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+98695)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9919)*1+lsi)*1]), &(inteval->stack[((hsi*2808+13429)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+107119)*1+lsi)*1]), &(inteval->stack[((hsi*8424+98695)*1+lsi)*1]), &(inteval->stack[((hsi*6552+92143)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+92143)*1+lsi)*1]), &(inteval->stack[((hsi*2376+21391)*1+lsi)*1]), &(inteval->stack[((hsi*1848+23767)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+97687)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18421)*1+lsi)*1]), &(inteval->stack[((hsi*2376+21391)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+9919)*1+lsi)*1]), &(inteval->stack[((hsi*7128+97687)*1+lsi)*1]), &(inteval->stack[((hsi*5544+92143)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33264+120223)*1+lsi)*1]), &(inteval->stack[((hsi*13104+107119)*1+lsi)*1]), &(inteval->stack[((hsi*11088+9919)*1+lsi)*1]),168);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7644+9919)*1+lsi)*1]), &(inteval->stack[((hsi*3276+4095)*1+lsi)*1]), &(inteval->stack[((hsi*2548+7371)*1+lsi)*1]),91);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*9828+92143)*1+lsi)*1]), &(inteval->stack[((hsi*4095+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+4095)*1+lsi)*1]),91);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*15288+153487)*1+lsi)*1]), &(inteval->stack[((hsi*9828+92143)*1+lsi)*1]), &(inteval->stack[((hsi*7644+9919)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*39312+168775)*1+lsi)*1]), &(inteval->stack[((hsi*15288+153487)*1+lsi)*1]), &(inteval->stack[((hsi*13104+107119)*1+lsi)*1]),168);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*66528+25615)*1+lsi)*1]), &(inteval->stack[((hsi*39312+168775)*1+lsi)*1]), &(inteval->stack[((hsi*33264+120223)*1+lsi)*1]),168);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*66528+25615)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
