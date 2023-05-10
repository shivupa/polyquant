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
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10540)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1404+34300)*1+lsi)*1]), &(inteval->stack[((hsi*780+7246)*1+lsi)*1]), &(inteval->stack[((hsi*468+8026)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+35704)*1+lsi)*1]), &(inteval->stack[((hsi*1170+6076)*1+lsi)*1]), &(inteval->stack[((hsi*780+7246)*1+lsi)*1]),78);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2808+38044)*1+lsi)*1]), &(inteval->stack[((hsi*2340+35704)*1+lsi)*1]), &(inteval->stack[((hsi*1404+34300)*1+lsi)*1]),78);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1638+34300)*1+lsi)*1]), &(inteval->stack[((hsi*910+4620)*1+lsi)*1]), &(inteval->stack[((hsi*546+5530)*1+lsi)*1]),91);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2730+5530)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3255)*1+lsi)*1]), &(inteval->stack[((hsi*910+4620)*1+lsi)*1]),91);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*3276+40852)*1+lsi)*1]), &(inteval->stack[((hsi*2730+5530)*1+lsi)*1]), &(inteval->stack[((hsi*1638+34300)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+44128)*1+lsi)*1]), &(inteval->stack[((hsi*3276+40852)*1+lsi)*1]), &(inteval->stack[((hsi*2808+38044)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1188+3255)*1+lsi)*1]), &(inteval->stack[((hsi*660+9484)*1+lsi)*1]), &(inteval->stack[((hsi*396+10144)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+4443)*1+lsi)*1]), &(inteval->stack[((hsi*990+8494)*1+lsi)*1]), &(inteval->stack[((hsi*660+9484)*1+lsi)*1]),66);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*2376+6423)*1+lsi)*1]), &(inteval->stack[((hsi*1980+4443)*1+lsi)*1]), &(inteval->stack[((hsi*1188+3255)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+52552)*1+lsi)*1]), &(inteval->stack[((hsi*2808+38044)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6423)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+59680)*1+lsi)*1]), &(inteval->stack[((hsi*8424+44128)*1+lsi)*1]), &(inteval->stack[((hsi*7128+52552)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*1890+3255)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1575)*1+lsi)*1]), &(inteval->stack[((hsi*630+2625)*1+lsi)*1]),105);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*3150+52552)*1+lsi)*1]), &(inteval->stack[((hsi*1575+0)*1+lsi)*1]), &(inteval->stack[((hsi*1050+1575)*1+lsi)*1]),105);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*3780+34300)*1+lsi)*1]), &(inteval->stack[((hsi*3150+52552)*1+lsi)*1]), &(inteval->stack[((hsi*1890+3255)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+34300)*1+lsi)*1]), &(inteval->stack[((hsi*3276+40852)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+73936)*1+lsi)*1]), &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*8424+44128)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+10540)*1+lsi)*1]), &(inteval->stack[((hsi*16848+73936)*1+lsi)*1]), &(inteval->stack[((hsi*14256+59680)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*23760+10540)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
