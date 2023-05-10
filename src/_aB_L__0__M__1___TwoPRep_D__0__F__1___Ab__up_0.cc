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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,48140)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+196640)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24145)*1+lsi)*1]), &(inteval->stack[((hsi*3630+28435)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+207530)*1+lsi)*1]), &(inteval->stack[((hsi*3630+28435)*1+lsi)*1]), &(inteval->stack[((hsi*3025+32065)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+216605)*1+lsi)*1]), &(inteval->stack[((hsi*10890+196640)*1+lsi)*1]), &(inteval->stack[((hsi*9075+207530)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+234755)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19140)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24145)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+247625)*1+lsi)*1]), &(inteval->stack[((hsi*12870+234755)*1+lsi)*1]), &(inteval->stack[((hsi*10890+196640)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+269405)*1+lsi)*1]), &(inteval->stack[((hsi*21780+247625)*1+lsi)*1]), &(inteval->stack[((hsi*18150+216605)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+196640)*1+lsi)*1]), &(inteval->stack[((hsi*3510+39185)*1+lsi)*1]), &(inteval->stack[((hsi*2970+42695)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+205550)*1+lsi)*1]), &(inteval->stack[((hsi*2970+42695)*1+lsi)*1]), &(inteval->stack[((hsi*2475+45665)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+212975)*1+lsi)*1]), &(inteval->stack[((hsi*8910+196640)*1+lsi)*1]), &(inteval->stack[((hsi*7425+205550)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+227825)*1+lsi)*1]), &(inteval->stack[((hsi*4095+35090)*1+lsi)*1]), &(inteval->stack[((hsi*3510+39185)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+238355)*1+lsi)*1]), &(inteval->stack[((hsi*10530+227825)*1+lsi)*1]), &(inteval->stack[((hsi*8910+196640)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+19140)*1+lsi)*1]), &(inteval->stack[((hsi*17820+238355)*1+lsi)*1]), &(inteval->stack[((hsi*14850+212975)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*74250+299655)*1+lsi)*1]), &(inteval->stack[((hsi*30250+269405)*1+lsi)*1]), &(inteval->stack[((hsi*24750+19140)*1+lsi)*1]),550);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+196640)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6006)*1+lsi)*1]), &(inteval->stack[((hsi*4356+11154)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+209708)*1+lsi)*1]), &(inteval->stack[((hsi*4356+11154)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15510)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+220598)*1+lsi)*1]), &(inteval->stack[((hsi*13068+196640)*1+lsi)*1]), &(inteval->stack[((hsi*10890+209708)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+11154)*1+lsi)*1]), &(inteval->stack[((hsi*6006+0)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6006)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+242378)*1+lsi)*1]), &(inteval->stack[((hsi*15444+11154)*1+lsi)*1]), &(inteval->stack[((hsi*13068+196640)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+0)*1+lsi)*1]), &(inteval->stack[((hsi*26136+242378)*1+lsi)*1]), &(inteval->stack[((hsi*21780+220598)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*90750+373905)*1+lsi)*1]), &(inteval->stack[((hsi*36300+0)*1+lsi)*1]), &(inteval->stack[((hsi*30250+269405)*1+lsi)*1]),550);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*148500+48140)*1+lsi)*1]), &(inteval->stack[((hsi*90750+373905)*1+lsi)*1]), &(inteval->stack[((hsi*74250+299655)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*148500+48140)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
