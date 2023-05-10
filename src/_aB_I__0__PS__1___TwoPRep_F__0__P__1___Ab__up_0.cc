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
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,23616)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+79056)*1+lsi)*1]), &(inteval->stack[((hsi*2970+16422)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19392)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+86184)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19392)*1+lsi)*1]), &(inteval->stack[((hsi*1848+21768)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+91728)*1+lsi)*1]), &(inteval->stack[((hsi*7128+79056)*1+lsi)*1]), &(inteval->stack[((hsi*5544+86184)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+102816)*1+lsi)*1]), &(inteval->stack[((hsi*3630+12792)*1+lsi)*1]), &(inteval->stack[((hsi*2970+16422)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+111726)*1+lsi)*1]), &(inteval->stack[((hsi*8910+102816)*1+lsi)*1]), &(inteval->stack[((hsi*7128+79056)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+125982)*1+lsi)*1]), &(inteval->stack[((hsi*14256+111726)*1+lsi)*1]), &(inteval->stack[((hsi*11088+91728)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+79056)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4290)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7800)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+87480)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7800)*1+lsi)*1]), &(inteval->stack[((hsi*2184+10608)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+94032)*1+lsi)*1]), &(inteval->stack[((hsi*8424+79056)*1+lsi)*1]), &(inteval->stack[((hsi*6552+87480)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+107136)*1+lsi)*1]), &(inteval->stack[((hsi*4290+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4290)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+0)*1+lsi)*1]), &(inteval->stack[((hsi*10530+107136)*1+lsi)*1]), &(inteval->stack[((hsi*8424+79056)*1+lsi)*1]),78);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*21840+144462)*1+lsi)*1]), &(inteval->stack[((hsi*16848+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+94032)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*55440+23616)*1+lsi)*1]), &(inteval->stack[((hsi*21840+144462)*1+lsi)*1]), &(inteval->stack[((hsi*18480+125982)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*55440+23616)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
