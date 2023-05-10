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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_M__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,28325)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__M__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+91850)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+102740)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+115610)*1+lsi)*1]), &(inteval->stack[((hsi*12870+102740)*1+lsi)*1]), &(inteval->stack[((hsi*10890+91850)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+137390)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+152405)*1+lsi)*1]), &(inteval->stack[((hsi*15015+137390)*1+lsi)*1]), &(inteval->stack[((hsi*12870+102740)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+178145)*1+lsi)*1]), &(inteval->stack[((hsi*25740+152405)*1+lsi)*1]), &(inteval->stack[((hsi*21780+115610)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+102740)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+214445)*1+lsi)*1]), &(inteval->stack[((hsi*10890+91850)*1+lsi)*1]), &(inteval->stack[((hsi*9075+102740)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+232595)*1+lsi)*1]), &(inteval->stack[((hsi*21780+115610)*1+lsi)*1]), &(inteval->stack[((hsi*18150+214445)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+91850)*1+lsi)*1]), &(inteval->stack[((hsi*36300+178145)*1+lsi)*1]), &(inteval->stack[((hsi*30250+232595)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+214445)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+231770)*1+lsi)*1]), &(inteval->stack[((hsi*17325+214445)*1+lsi)*1]), &(inteval->stack[((hsi*15015+137390)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+261800)*1+lsi)*1]), &(inteval->stack[((hsi*30030+231770)*1+lsi)*1]), &(inteval->stack[((hsi*25740+152405)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+304700)*1+lsi)*1]), &(inteval->stack[((hsi*42900+261800)*1+lsi)*1]), &(inteval->stack[((hsi*36300+178145)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+28325)*1+lsi)*1]), &(inteval->stack[((hsi*54450+304700)*1+lsi)*1]), &(inteval->stack[((hsi*45375+91850)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*63525+28325)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
