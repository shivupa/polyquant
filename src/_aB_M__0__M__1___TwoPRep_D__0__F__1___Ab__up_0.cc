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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_M__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,57710)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+239210)*1+lsi)*1]), &(inteval->stack[((hsi*5148+28626)*1+lsi)*1]), &(inteval->stack[((hsi*4356+33774)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+252278)*1+lsi)*1]), &(inteval->stack[((hsi*4356+33774)*1+lsi)*1]), &(inteval->stack[((hsi*3630+38130)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+263168)*1+lsi)*1]), &(inteval->stack[((hsi*13068+239210)*1+lsi)*1]), &(inteval->stack[((hsi*10890+252278)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+284948)*1+lsi)*1]), &(inteval->stack[((hsi*6006+22620)*1+lsi)*1]), &(inteval->stack[((hsi*5148+28626)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+300392)*1+lsi)*1]), &(inteval->stack[((hsi*15444+284948)*1+lsi)*1]), &(inteval->stack[((hsi*13068+239210)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+326528)*1+lsi)*1]), &(inteval->stack[((hsi*26136+300392)*1+lsi)*1]), &(inteval->stack[((hsi*21780+263168)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+239210)*1+lsi)*1]), &(inteval->stack[((hsi*4290+46765)*1+lsi)*1]), &(inteval->stack[((hsi*3630+51055)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+250100)*1+lsi)*1]), &(inteval->stack[((hsi*3630+51055)*1+lsi)*1]), &(inteval->stack[((hsi*3025+54685)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+259175)*1+lsi)*1]), &(inteval->stack[((hsi*10890+239210)*1+lsi)*1]), &(inteval->stack[((hsi*9075+250100)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+277325)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41760)*1+lsi)*1]), &(inteval->stack[((hsi*4290+46765)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+290195)*1+lsi)*1]), &(inteval->stack[((hsi*12870+277325)*1+lsi)*1]), &(inteval->stack[((hsi*10890+239210)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+22620)*1+lsi)*1]), &(inteval->stack[((hsi*21780+290195)*1+lsi)*1]), &(inteval->stack[((hsi*18150+259175)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*90750+362828)*1+lsi)*1]), &(inteval->stack[((hsi*36300+326528)*1+lsi)*1]), &(inteval->stack[((hsi*30250+22620)*1+lsi)*1]),550);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+239210)*1+lsi)*1]), &(inteval->stack[((hsi*6084+7098)*1+lsi)*1]), &(inteval->stack[((hsi*5148+13182)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+254654)*1+lsi)*1]), &(inteval->stack[((hsi*5148+13182)*1+lsi)*1]), &(inteval->stack[((hsi*4290+18330)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+267524)*1+lsi)*1]), &(inteval->stack[((hsi*15444+239210)*1+lsi)*1]), &(inteval->stack[((hsi*12870+254654)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+13182)*1+lsi)*1]), &(inteval->stack[((hsi*7098+0)*1+lsi)*1]), &(inteval->stack[((hsi*6084+7098)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+293264)*1+lsi)*1]), &(inteval->stack[((hsi*18252+13182)*1+lsi)*1]), &(inteval->stack[((hsi*15444+239210)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+0)*1+lsi)*1]), &(inteval->stack[((hsi*30888+293264)*1+lsi)*1]), &(inteval->stack[((hsi*25740+267524)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*108900+453578)*1+lsi)*1]), &(inteval->stack[((hsi*42900+0)*1+lsi)*1]), &(inteval->stack[((hsi*36300+326528)*1+lsi)*1]),550);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*181500+57710)*1+lsi)*1]), &(inteval->stack[((hsi*108900+453578)*1+lsi)*1]), &(inteval->stack[((hsi*90750+362828)*1+lsi)*1]),550);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*181500+57710)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
