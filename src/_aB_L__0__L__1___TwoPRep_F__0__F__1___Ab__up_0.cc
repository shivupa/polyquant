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
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__L__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,59536)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+262036)*1+lsi)*1]), &(inteval->stack[((hsi*3630+39426)*1+lsi)*1]), &(inteval->stack[((hsi*3025+43056)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+271111)*1+lsi)*1]), &(inteval->stack[((hsi*3025+43056)*1+lsi)*1]), &(inteval->stack[((hsi*2475+46081)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+278536)*1+lsi)*1]), &(inteval->stack[((hsi*9075+262036)*1+lsi)*1]), &(inteval->stack[((hsi*7425+271111)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+293386)*1+lsi)*1]), &(inteval->stack[((hsi*4290+35136)*1+lsi)*1]), &(inteval->stack[((hsi*3630+39426)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+304276)*1+lsi)*1]), &(inteval->stack[((hsi*10890+293386)*1+lsi)*1]), &(inteval->stack[((hsi*9075+262036)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+322426)*1+lsi)*1]), &(inteval->stack[((hsi*18150+304276)*1+lsi)*1]), &(inteval->stack[((hsi*14850+278536)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+262036)*1+lsi)*1]), &(inteval->stack[((hsi*4356+24180)*1+lsi)*1]), &(inteval->stack[((hsi*3630+28536)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+272926)*1+lsi)*1]), &(inteval->stack[((hsi*3630+28536)*1+lsi)*1]), &(inteval->stack[((hsi*2970+32166)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+281836)*1+lsi)*1]), &(inteval->stack[((hsi*10890+262036)*1+lsi)*1]), &(inteval->stack[((hsi*8910+272926)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+299656)*1+lsi)*1]), &(inteval->stack[((hsi*5148+19032)*1+lsi)*1]), &(inteval->stack[((hsi*4356+24180)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+19032)*1+lsi)*1]), &(inteval->stack[((hsi*13068+299656)*1+lsi)*1]), &(inteval->stack[((hsi*10890+262036)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+347176)*1+lsi)*1]), &(inteval->stack[((hsi*21780+19032)*1+lsi)*1]), &(inteval->stack[((hsi*17820+281836)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*74250+376876)*1+lsi)*1]), &(inteval->stack[((hsi*29700+347176)*1+lsi)*1]), &(inteval->stack[((hsi*24750+322426)*1+lsi)*1]),450);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+262036)*1+lsi)*1]), &(inteval->stack[((hsi*2970+52066)*1+lsi)*1]), &(inteval->stack[((hsi*2475+55036)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+269461)*1+lsi)*1]), &(inteval->stack[((hsi*2475+55036)*1+lsi)*1]), &(inteval->stack[((hsi*2025+57511)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+275536)*1+lsi)*1]), &(inteval->stack[((hsi*7425+262036)*1+lsi)*1]), &(inteval->stack[((hsi*6075+269461)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+287686)*1+lsi)*1]), &(inteval->stack[((hsi*3510+48556)*1+lsi)*1]), &(inteval->stack[((hsi*2970+52066)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+19032)*1+lsi)*1]), &(inteval->stack[((hsi*8910+287686)*1+lsi)*1]), &(inteval->stack[((hsi*7425+262036)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+287686)*1+lsi)*1]), &(inteval->stack[((hsi*14850+19032)*1+lsi)*1]), &(inteval->stack[((hsi*12150+275536)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*60750+451126)*1+lsi)*1]), &(inteval->stack[((hsi*24750+322426)*1+lsi)*1]), &(inteval->stack[((hsi*20250+287686)*1+lsi)*1]),450);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*121500+511876)*1+lsi)*1]), &(inteval->stack[((hsi*74250+376876)*1+lsi)*1]), &(inteval->stack[((hsi*60750+451126)*1+lsi)*1]),450);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+262036)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+274906)*1+lsi)*1]), &(inteval->stack[((hsi*4290+11232)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15522)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+285436)*1+lsi)*1]), &(inteval->stack[((hsi*12870+262036)*1+lsi)*1]), &(inteval->stack[((hsi*10530+274906)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+451126)*1+lsi)*1]), &(inteval->stack[((hsi*6084+0)*1+lsi)*1]), &(inteval->stack[((hsi*5148+6084)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+0)*1+lsi)*1]), &(inteval->stack[((hsi*15444+451126)*1+lsi)*1]), &(inteval->stack[((hsi*12870+262036)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+451126)*1+lsi)*1]), &(inteval->stack[((hsi*25740+0)*1+lsi)*1]), &(inteval->stack[((hsi*21060+285436)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*89100+633376)*1+lsi)*1]), &(inteval->stack[((hsi*35100+451126)*1+lsi)*1]), &(inteval->stack[((hsi*29700+347176)*1+lsi)*1]),450);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*148500+722476)*1+lsi)*1]), &(inteval->stack[((hsi*89100+633376)*1+lsi)*1]), &(inteval->stack[((hsi*74250+376876)*1+lsi)*1]),450);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*202500+59536)*1+lsi)*1]), &(inteval->stack[((hsi*148500+722476)*1+lsi)*1]), &(inteval->stack[((hsi*121500+511876)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*202500+59536)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
