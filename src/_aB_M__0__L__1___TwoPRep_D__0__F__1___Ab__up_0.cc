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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_M__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__L__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,48556)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__L__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+197056)*1+lsi)*1]), &(inteval->stack[((hsi*4356+24180)*1+lsi)*1]), &(inteval->stack[((hsi*3630+28536)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+207946)*1+lsi)*1]), &(inteval->stack[((hsi*3630+28536)*1+lsi)*1]), &(inteval->stack[((hsi*2970+32166)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+216856)*1+lsi)*1]), &(inteval->stack[((hsi*10890+197056)*1+lsi)*1]), &(inteval->stack[((hsi*8910+207946)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+234676)*1+lsi)*1]), &(inteval->stack[((hsi*5148+19032)*1+lsi)*1]), &(inteval->stack[((hsi*4356+24180)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+247744)*1+lsi)*1]), &(inteval->stack[((hsi*13068+234676)*1+lsi)*1]), &(inteval->stack[((hsi*10890+197056)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+269524)*1+lsi)*1]), &(inteval->stack[((hsi*21780+247744)*1+lsi)*1]), &(inteval->stack[((hsi*17820+216856)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+197056)*1+lsi)*1]), &(inteval->stack[((hsi*3630+39426)*1+lsi)*1]), &(inteval->stack[((hsi*3025+43056)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+206131)*1+lsi)*1]), &(inteval->stack[((hsi*3025+43056)*1+lsi)*1]), &(inteval->stack[((hsi*2475+46081)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+213556)*1+lsi)*1]), &(inteval->stack[((hsi*9075+197056)*1+lsi)*1]), &(inteval->stack[((hsi*7425+206131)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+228406)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35136)*1+lsi)*1]), &(inteval->stack[((hsi*3630+39426)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+239296)*1+lsi)*1]), &(inteval->stack[((hsi*10890+228406)*1+lsi)*1]), &(inteval->stack[((hsi*9075+197056)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+19032)*1+lsi)*1]), &(inteval->stack[((hsi*18150+239296)*1+lsi)*1]), &(inteval->stack[((hsi*14850+213556)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*74250+299224)*1+lsi)*1]), &(inteval->stack[((hsi*29700+269524)*1+lsi)*1]), &(inteval->stack[((hsi*24750+19032)*1+lsi)*1]),450);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+197056)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+209926)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15522)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+220456)*1+lsi)*1]), &(inteval->stack[((hsi*12870+197056)*1+lsi)*1]), &(inteval->stack[((hsi*10530+209926)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+11232)*1+lsi)*1]), &(inteval->stack[((hsi*6084+0)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+241516)*1+lsi)*1]), &(inteval->stack[((hsi*15444+11232)*1+lsi)*1]), &(inteval->stack[((hsi*12870+197056)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+0)*1+lsi)*1]), &(inteval->stack[((hsi*25740+241516)*1+lsi)*1]), &(inteval->stack[((hsi*21060+220456)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*89100+373474)*1+lsi)*1]), &(inteval->stack[((hsi*35100+0)*1+lsi)*1]), &(inteval->stack[((hsi*29700+269524)*1+lsi)*1]),450);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*148500+48556)*1+lsi)*1]), &(inteval->stack[((hsi*89100+373474)*1+lsi)*1]), &(inteval->stack[((hsi*74250+299224)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*148500+48556)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
