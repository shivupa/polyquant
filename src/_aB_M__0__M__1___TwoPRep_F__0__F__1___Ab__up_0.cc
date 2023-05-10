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
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_M__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,84100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+386600)*1+lsi)*1]), &(inteval->stack[((hsi*5148+55016)*1+lsi)*1]), &(inteval->stack[((hsi*4356+60164)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+399668)*1+lsi)*1]), &(inteval->stack[((hsi*4356+60164)*1+lsi)*1]), &(inteval->stack[((hsi*3630+64520)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+410558)*1+lsi)*1]), &(inteval->stack[((hsi*13068+386600)*1+lsi)*1]), &(inteval->stack[((hsi*10890+399668)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+432338)*1+lsi)*1]), &(inteval->stack[((hsi*6006+49010)*1+lsi)*1]), &(inteval->stack[((hsi*5148+55016)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+447782)*1+lsi)*1]), &(inteval->stack[((hsi*15444+432338)*1+lsi)*1]), &(inteval->stack[((hsi*13068+386600)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+473918)*1+lsi)*1]), &(inteval->stack[((hsi*26136+447782)*1+lsi)*1]), &(inteval->stack[((hsi*21780+410558)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+386600)*1+lsi)*1]), &(inteval->stack[((hsi*6084+33488)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39572)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+402044)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39572)*1+lsi)*1]), &(inteval->stack[((hsi*4290+44720)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+414914)*1+lsi)*1]), &(inteval->stack[((hsi*15444+386600)*1+lsi)*1]), &(inteval->stack[((hsi*12870+402044)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+440654)*1+lsi)*1]), &(inteval->stack[((hsi*7098+26390)*1+lsi)*1]), &(inteval->stack[((hsi*6084+33488)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+26390)*1+lsi)*1]), &(inteval->stack[((hsi*18252+440654)*1+lsi)*1]), &(inteval->stack[((hsi*15444+386600)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+510218)*1+lsi)*1]), &(inteval->stack[((hsi*30888+26390)*1+lsi)*1]), &(inteval->stack[((hsi*25740+414914)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*108900+553118)*1+lsi)*1]), &(inteval->stack[((hsi*42900+510218)*1+lsi)*1]), &(inteval->stack[((hsi*36300+473918)*1+lsi)*1]),550);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+386600)*1+lsi)*1]), &(inteval->stack[((hsi*4290+73155)*1+lsi)*1]), &(inteval->stack[((hsi*3630+77445)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+397490)*1+lsi)*1]), &(inteval->stack[((hsi*3630+77445)*1+lsi)*1]), &(inteval->stack[((hsi*3025+81075)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+406565)*1+lsi)*1]), &(inteval->stack[((hsi*10890+386600)*1+lsi)*1]), &(inteval->stack[((hsi*9075+397490)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+424715)*1+lsi)*1]), &(inteval->stack[((hsi*5005+68150)*1+lsi)*1]), &(inteval->stack[((hsi*4290+73155)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+26390)*1+lsi)*1]), &(inteval->stack[((hsi*12870+424715)*1+lsi)*1]), &(inteval->stack[((hsi*10890+386600)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+424715)*1+lsi)*1]), &(inteval->stack[((hsi*21780+26390)*1+lsi)*1]), &(inteval->stack[((hsi*18150+406565)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*90750+662018)*1+lsi)*1]), &(inteval->stack[((hsi*36300+473918)*1+lsi)*1]), &(inteval->stack[((hsi*30250+424715)*1+lsi)*1]),550);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*181500+752768)*1+lsi)*1]), &(inteval->stack[((hsi*108900+553118)*1+lsi)*1]), &(inteval->stack[((hsi*90750+662018)*1+lsi)*1]),550);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+386600)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8281)*1+lsi)*1]), &(inteval->stack[((hsi*6006+15379)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+404618)*1+lsi)*1]), &(inteval->stack[((hsi*6006+15379)*1+lsi)*1]), &(inteval->stack[((hsi*5005+21385)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+662018)*1+lsi)*1]), &(inteval->stack[((hsi*18018+386600)*1+lsi)*1]), &(inteval->stack[((hsi*15015+404618)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+404618)*1+lsi)*1]), &(inteval->stack[((hsi*8281+0)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8281)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+425912)*1+lsi)*1]), &(inteval->stack[((hsi*21294+404618)*1+lsi)*1]), &(inteval->stack[((hsi*18018+386600)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+0)*1+lsi)*1]), &(inteval->stack[((hsi*36036+425912)*1+lsi)*1]), &(inteval->stack[((hsi*30030+662018)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*128700+934268)*1+lsi)*1]), &(inteval->stack[((hsi*50050+0)*1+lsi)*1]), &(inteval->stack[((hsi*42900+510218)*1+lsi)*1]),550);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*217800+1062968)*1+lsi)*1]), &(inteval->stack[((hsi*128700+934268)*1+lsi)*1]), &(inteval->stack[((hsi*108900+553118)*1+lsi)*1]),550);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*302500+84100)*1+lsi)*1]), &(inteval->stack[((hsi*217800+1062968)*1+lsi)*1]), &(inteval->stack[((hsi*181500+752768)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*302500+84100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
