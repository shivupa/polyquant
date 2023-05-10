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
#include <eri3_aB_D__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_D__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2760)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_D__0__PS__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+8700)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+10104)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+11742)*1+lsi)*1]), &(inteval->stack[((hsi*1638+10104)*1+lsi)*1]), &(inteval->stack[((hsi*1404+8700)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+14550)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]), &(inteval->stack[((hsi*396+2364)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+15738)*1+lsi)*1]), &(inteval->stack[((hsi*1404+8700)*1+lsi)*1]), &(inteval->stack[((hsi*1188+14550)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+18114)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11742)*1+lsi)*1]), &(inteval->stack[((hsi*2376+15738)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+14550)*1+lsi)*1]), &(inteval->stack[((hsi*720+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+22074)*1+lsi)*1]), &(inteval->stack[((hsi*1890+14550)*1+lsi)*1]), &(inteval->stack[((hsi*1638+10104)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+25350)*1+lsi)*1]), &(inteval->stack[((hsi*3276+22074)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11742)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+2760)*1+lsi)*1]), &(inteval->stack[((hsi*4680+25350)*1+lsi)*1]), &(inteval->stack[((hsi*3960+18114)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5940+2760)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
