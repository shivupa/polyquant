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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
#include <_elecpot_L_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_L_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_L_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1385)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+1550)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+1748)*1+lsi)*1]), &(inteval->stack[((hsi*198+1550)*1+lsi)*1]), &(inteval->stack[((hsi*165+1385)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+2078)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+2312)*1+lsi)*1]), &(inteval->stack[((hsi*234+2078)*1+lsi)*1]), &(inteval->stack[((hsi*198+1550)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+2708)*1+lsi)*1]), &(inteval->stack[((hsi*396+2312)*1+lsi)*1]), &(inteval->stack[((hsi*330+1748)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1550)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]), &(inteval->stack[((hsi*45+395)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+3258)*1+lsi)*1]), &(inteval->stack[((hsi*165+1385)*1+lsi)*1]), &(inteval->stack[((hsi*135+1550)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3528)*1+lsi)*1]), &(inteval->stack[((hsi*330+1748)*1+lsi)*1]), &(inteval->stack[((hsi*270+3258)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+1385)*1+lsi)*1]), &(inteval->stack[((hsi*550+2708)*1+lsi)*1]), &(inteval->stack[((hsi*450+3528)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+3258)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+3531)*1+lsi)*1]), &(inteval->stack[((hsi*273+3258)*1+lsi)*1]), &(inteval->stack[((hsi*234+2078)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+3999)*1+lsi)*1]), &(inteval->stack[((hsi*468+3531)*1+lsi)*1]), &(inteval->stack[((hsi*396+2312)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+4659)*1+lsi)*1]), &(inteval->stack[((hsi*660+3999)*1+lsi)*1]), &(inteval->stack[((hsi*550+2708)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+440)*1+lsi)*1]), &(inteval->stack[((hsi*825+4659)*1+lsi)*1]), &(inteval->stack[((hsi*675+1385)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
