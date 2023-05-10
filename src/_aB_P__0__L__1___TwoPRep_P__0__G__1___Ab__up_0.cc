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
#include <HRRPart0bra0ket0pp.h>
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
#include <_aB_P__0__L__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__L__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3015)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__L__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+9090)*1+lsi)*1]), &(inteval->stack[((hsi*198+2517)*1+lsi)*1]), &(inteval->stack[((hsi*165+2715)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+9585)*1+lsi)*1]), &(inteval->stack[((hsi*234+2283)*1+lsi)*1]), &(inteval->stack[((hsi*198+2517)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+10179)*1+lsi)*1]), &(inteval->stack[((hsi*594+9585)*1+lsi)*1]), &(inteval->stack[((hsi*495+9090)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+11169)*1+lsi)*1]), &(inteval->stack[((hsi*165+2715)*1+lsi)*1]), &(inteval->stack[((hsi*135+2880)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+11574)*1+lsi)*1]), &(inteval->stack[((hsi*495+9090)*1+lsi)*1]), &(inteval->stack[((hsi*405+11169)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+12384)*1+lsi)*1]), &(inteval->stack[((hsi*990+10179)*1+lsi)*1]), &(inteval->stack[((hsi*810+11574)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+11169)*1+lsi)*1]), &(inteval->stack[((hsi*273+2010)*1+lsi)*1]), &(inteval->stack[((hsi*234+2283)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+13734)*1+lsi)*1]), &(inteval->stack[((hsi*702+11169)*1+lsi)*1]), &(inteval->stack[((hsi*594+9585)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+14922)*1+lsi)*1]), &(inteval->stack[((hsi*1188+13734)*1+lsi)*1]), &(inteval->stack[((hsi*990+10179)*1+lsi)*1]),3);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*2025+9090)*1+lsi)*1]), &(inteval->stack[((hsi*1650+14922)*1+lsi)*1]), &(inteval->stack[((hsi*1350+12384)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+2010)*1+lsi)*1]), &(inteval->stack[((hsi*396+1014)*1+lsi)*1]), &(inteval->stack[((hsi*330+1410)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+11115)*1+lsi)*1]), &(inteval->stack[((hsi*468+546)*1+lsi)*1]), &(inteval->stack[((hsi*396+1014)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+12303)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11115)*1+lsi)*1]), &(inteval->stack[((hsi*990+2010)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+14283)*1+lsi)*1]), &(inteval->stack[((hsi*330+1410)*1+lsi)*1]), &(inteval->stack[((hsi*270+1740)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+15093)*1+lsi)*1]), &(inteval->stack[((hsi*990+2010)*1+lsi)*1]), &(inteval->stack[((hsi*810+14283)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+16713)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12303)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15093)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+14283)*1+lsi)*1]), &(inteval->stack[((hsi*546+0)*1+lsi)*1]), &(inteval->stack[((hsi*468+546)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+0)*1+lsi)*1]), &(inteval->stack[((hsi*1404+14283)*1+lsi)*1]), &(inteval->stack[((hsi*1188+11115)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+19413)*1+lsi)*1]), &(inteval->stack[((hsi*2376+0)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12303)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+11115)*1+lsi)*1]), &(inteval->stack[((hsi*3300+19413)*1+lsi)*1]), &(inteval->stack[((hsi*2700+16713)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*6075+3015)*1+lsi)*1]), &(inteval->stack[((hsi*4050+11115)*1+lsi)*1]), &(inteval->stack[((hsi*2025+9090)*1+lsi)*1]),675);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6075+3015)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
