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
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_S__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_S__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,395)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_S__0__M__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*198+1220)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]),1);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+1418)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]),1);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*396+1652)*1+lsi)*1]), &(inteval->stack[((hsi*234+1418)*1+lsi)*1]), &(inteval->stack[((hsi*198+1220)*1+lsi)*1]),1);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2048)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]),1);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*330+2213)*1+lsi)*1]), &(inteval->stack[((hsi*198+1220)*1+lsi)*1]), &(inteval->stack[((hsi*165+2048)*1+lsi)*1]),1);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*550+2543)*1+lsi)*1]), &(inteval->stack[((hsi*396+1652)*1+lsi)*1]), &(inteval->stack[((hsi*330+2213)*1+lsi)*1]),1);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+2048)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]),1);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+3093)*1+lsi)*1]), &(inteval->stack[((hsi*273+2048)*1+lsi)*1]), &(inteval->stack[((hsi*234+1418)*1+lsi)*1]),1);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*660+3561)*1+lsi)*1]), &(inteval->stack[((hsi*468+3093)*1+lsi)*1]), &(inteval->stack[((hsi*396+1652)*1+lsi)*1]),1);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*825+395)*1+lsi)*1]), &(inteval->stack[((hsi*660+3561)*1+lsi)*1]), &(inteval->stack[((hsi*550+2543)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*825+395)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
