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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_M__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_M__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,24200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_M__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+76175)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+85250)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+96140)*1+lsi)*1]), &(inteval->stack[((hsi*10890+85250)*1+lsi)*1]), &(inteval->stack[((hsi*9075+76175)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+114290)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+127160)*1+lsi)*1]), &(inteval->stack[((hsi*12870+114290)*1+lsi)*1]), &(inteval->stack[((hsi*10890+85250)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+148940)*1+lsi)*1]), &(inteval->stack[((hsi*21780+127160)*1+lsi)*1]), &(inteval->stack[((hsi*18150+96140)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+85250)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]), &(inteval->stack[((hsi*2475+21725)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+179190)*1+lsi)*1]), &(inteval->stack[((hsi*9075+76175)*1+lsi)*1]), &(inteval->stack[((hsi*7425+85250)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+194040)*1+lsi)*1]), &(inteval->stack[((hsi*18150+96140)*1+lsi)*1]), &(inteval->stack[((hsi*14850+179190)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+76175)*1+lsi)*1]), &(inteval->stack[((hsi*30250+148940)*1+lsi)*1]), &(inteval->stack[((hsi*24750+194040)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+179190)*1+lsi)*1]), &(inteval->stack[((hsi*5775+0)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+194205)*1+lsi)*1]), &(inteval->stack[((hsi*15015+179190)*1+lsi)*1]), &(inteval->stack[((hsi*12870+114290)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+219945)*1+lsi)*1]), &(inteval->stack[((hsi*25740+194205)*1+lsi)*1]), &(inteval->stack[((hsi*21780+127160)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+256245)*1+lsi)*1]), &(inteval->stack[((hsi*36300+219945)*1+lsi)*1]), &(inteval->stack[((hsi*30250+148940)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+24200)*1+lsi)*1]), &(inteval->stack[((hsi*45375+256245)*1+lsi)*1]), &(inteval->stack[((hsi*37125+76175)*1+lsi)*1]),55);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*51975+24200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
