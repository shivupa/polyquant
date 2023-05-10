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
#include <_aB_P__0__M__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__M__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3555)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__M__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+10980)*1+lsi)*1]), &(inteval->stack[((hsi*234+2958)*1+lsi)*1]), &(inteval->stack[((hsi*198+3192)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+11574)*1+lsi)*1]), &(inteval->stack[((hsi*273+2685)*1+lsi)*1]), &(inteval->stack[((hsi*234+2958)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+12276)*1+lsi)*1]), &(inteval->stack[((hsi*702+11574)*1+lsi)*1]), &(inteval->stack[((hsi*594+10980)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+13464)*1+lsi)*1]), &(inteval->stack[((hsi*198+3192)*1+lsi)*1]), &(inteval->stack[((hsi*165+3390)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+13959)*1+lsi)*1]), &(inteval->stack[((hsi*594+10980)*1+lsi)*1]), &(inteval->stack[((hsi*495+13464)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+14949)*1+lsi)*1]), &(inteval->stack[((hsi*1188+12276)*1+lsi)*1]), &(inteval->stack[((hsi*990+13959)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+13464)*1+lsi)*1]), &(inteval->stack[((hsi*315+2370)*1+lsi)*1]), &(inteval->stack[((hsi*273+2685)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+16599)*1+lsi)*1]), &(inteval->stack[((hsi*819+13464)*1+lsi)*1]), &(inteval->stack[((hsi*702+11574)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+18003)*1+lsi)*1]), &(inteval->stack[((hsi*1404+16599)*1+lsi)*1]), &(inteval->stack[((hsi*1188+12276)*1+lsi)*1]),3);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*2475+10980)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18003)*1+lsi)*1]), &(inteval->stack[((hsi*1650+14949)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+13455)*1+lsi)*1]), &(inteval->stack[((hsi*468+1176)*1+lsi)*1]), &(inteval->stack[((hsi*396+1644)*1+lsi)*1]),6);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+14643)*1+lsi)*1]), &(inteval->stack[((hsi*546+630)*1+lsi)*1]), &(inteval->stack[((hsi*468+1176)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+16047)*1+lsi)*1]), &(inteval->stack[((hsi*1404+14643)*1+lsi)*1]), &(inteval->stack[((hsi*1188+13455)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+2370)*1+lsi)*1]), &(inteval->stack[((hsi*396+1644)*1+lsi)*1]), &(inteval->stack[((hsi*330+2040)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+18423)*1+lsi)*1]), &(inteval->stack[((hsi*1188+13455)*1+lsi)*1]), &(inteval->stack[((hsi*990+2370)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+20403)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16047)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18423)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+1176)*1+lsi)*1]), &(inteval->stack[((hsi*630+0)*1+lsi)*1]), &(inteval->stack[((hsi*546+630)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+23703)*1+lsi)*1]), &(inteval->stack[((hsi*1638+1176)*1+lsi)*1]), &(inteval->stack[((hsi*1404+14643)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+26511)*1+lsi)*1]), &(inteval->stack[((hsi*2808+23703)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16047)*1+lsi)*1]),6);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*4950+13455)*1+lsi)*1]), &(inteval->stack[((hsi*3960+26511)*1+lsi)*1]), &(inteval->stack[((hsi*3300+20403)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*7425+3555)*1+lsi)*1]), &(inteval->stack[((hsi*4950+13455)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10980)*1+lsi)*1]),825);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7425+3555)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
