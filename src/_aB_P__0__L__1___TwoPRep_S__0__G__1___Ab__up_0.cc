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
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_P__0__L__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__L__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1005)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__L__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+3030)*1+lsi)*1]), &(inteval->stack[((hsi*198+507)*1+lsi)*1]), &(inteval->stack[((hsi*165+705)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+3525)*1+lsi)*1]), &(inteval->stack[((hsi*234+273)*1+lsi)*1]), &(inteval->stack[((hsi*198+507)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+4119)*1+lsi)*1]), &(inteval->stack[((hsi*594+3525)*1+lsi)*1]), &(inteval->stack[((hsi*495+3030)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+5109)*1+lsi)*1]), &(inteval->stack[((hsi*165+705)*1+lsi)*1]), &(inteval->stack[((hsi*135+870)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+5514)*1+lsi)*1]), &(inteval->stack[((hsi*495+3030)*1+lsi)*1]), &(inteval->stack[((hsi*405+5109)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+6324)*1+lsi)*1]), &(inteval->stack[((hsi*990+4119)*1+lsi)*1]), &(inteval->stack[((hsi*810+5514)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+5109)*1+lsi)*1]), &(inteval->stack[((hsi*273+0)*1+lsi)*1]), &(inteval->stack[((hsi*234+273)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+7674)*1+lsi)*1]), &(inteval->stack[((hsi*702+5109)*1+lsi)*1]), &(inteval->stack[((hsi*594+3525)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+8862)*1+lsi)*1]), &(inteval->stack[((hsi*1188+7674)*1+lsi)*1]), &(inteval->stack[((hsi*990+4119)*1+lsi)*1]),3);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*2025+1005)*1+lsi)*1]), &(inteval->stack[((hsi*1650+8862)*1+lsi)*1]), &(inteval->stack[((hsi*1350+6324)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2025+1005)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
