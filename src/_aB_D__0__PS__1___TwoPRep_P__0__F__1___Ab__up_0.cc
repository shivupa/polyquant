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
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_D__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+17320)*1+lsi)*1]), &(inteval->stack[((hsi*546+4030)*1+lsi)*1]), &(inteval->stack[((hsi*468+4576)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+18724)*1+lsi)*1]), &(inteval->stack[((hsi*468+4576)*1+lsi)*1]), &(inteval->stack[((hsi*396+5044)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+19912)*1+lsi)*1]), &(inteval->stack[((hsi*1404+17320)*1+lsi)*1]), &(inteval->stack[((hsi*1188+18724)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+22288)*1+lsi)*1]), &(inteval->stack[((hsi*630+3400)*1+lsi)*1]), &(inteval->stack[((hsi*546+4030)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+23926)*1+lsi)*1]), &(inteval->stack[((hsi*1638+22288)*1+lsi)*1]), &(inteval->stack[((hsi*1404+17320)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+26734)*1+lsi)*1]), &(inteval->stack[((hsi*2808+23926)*1+lsi)*1]), &(inteval->stack[((hsi*2376+19912)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+17320)*1+lsi)*1]), &(inteval->stack[((hsi*910+1050)*1+lsi)*1]), &(inteval->stack[((hsi*780+1960)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+19660)*1+lsi)*1]), &(inteval->stack[((hsi*780+1960)*1+lsi)*1]), &(inteval->stack[((hsi*660+2740)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+21640)*1+lsi)*1]), &(inteval->stack[((hsi*2340+17320)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19660)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+1960)*1+lsi)*1]), &(inteval->stack[((hsi*1050+0)*1+lsi)*1]), &(inteval->stack[((hsi*910+1050)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+30694)*1+lsi)*1]), &(inteval->stack[((hsi*2730+1960)*1+lsi)*1]), &(inteval->stack[((hsi*2340+17320)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+35374)*1+lsi)*1]), &(inteval->stack[((hsi*4680+30694)*1+lsi)*1]), &(inteval->stack[((hsi*3960+21640)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*11880+5440)*1+lsi)*1]), &(inteval->stack[((hsi*6600+35374)*1+lsi)*1]), &(inteval->stack[((hsi*3960+26734)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11880+5440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif