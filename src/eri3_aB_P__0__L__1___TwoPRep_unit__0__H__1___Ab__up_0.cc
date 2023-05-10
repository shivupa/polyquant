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
#include <eri3_aB_P__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_P__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_P__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+4155)*1+lsi)*1]), &(inteval->stack[((hsi*198+822)*1+lsi)*1]), &(inteval->stack[((hsi*165+1020)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+4650)*1+lsi)*1]), &(inteval->stack[((hsi*234+588)*1+lsi)*1]), &(inteval->stack[((hsi*198+822)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+5244)*1+lsi)*1]), &(inteval->stack[((hsi*594+4650)*1+lsi)*1]), &(inteval->stack[((hsi*495+4155)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+6234)*1+lsi)*1]), &(inteval->stack[((hsi*273+315)*1+lsi)*1]), &(inteval->stack[((hsi*234+588)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+6936)*1+lsi)*1]), &(inteval->stack[((hsi*702+6234)*1+lsi)*1]), &(inteval->stack[((hsi*594+4650)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+8124)*1+lsi)*1]), &(inteval->stack[((hsi*1188+6936)*1+lsi)*1]), &(inteval->stack[((hsi*990+5244)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+4650)*1+lsi)*1]), &(inteval->stack[((hsi*165+1020)*1+lsi)*1]), &(inteval->stack[((hsi*135+1185)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+9774)*1+lsi)*1]), &(inteval->stack[((hsi*495+4155)*1+lsi)*1]), &(inteval->stack[((hsi*405+4650)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+10584)*1+lsi)*1]), &(inteval->stack[((hsi*990+5244)*1+lsi)*1]), &(inteval->stack[((hsi*810+9774)*1+lsi)*1]),3);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*2025+4155)*1+lsi)*1]), &(inteval->stack[((hsi*1650+8124)*1+lsi)*1]), &(inteval->stack[((hsi*1350+10584)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+9774)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*273+315)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+10593)*1+lsi)*1]), &(inteval->stack[((hsi*819+9774)*1+lsi)*1]), &(inteval->stack[((hsi*702+6234)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+11997)*1+lsi)*1]), &(inteval->stack[((hsi*1404+10593)*1+lsi)*1]), &(inteval->stack[((hsi*1188+6936)*1+lsi)*1]),3);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*2475+13977)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11997)*1+lsi)*1]), &(inteval->stack[((hsi*1650+8124)*1+lsi)*1]),3);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*2835+1320)*1+lsi)*1]), &(inteval->stack[((hsi*2475+13977)*1+lsi)*1]), &(inteval->stack[((hsi*2025+4155)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2835+1320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
