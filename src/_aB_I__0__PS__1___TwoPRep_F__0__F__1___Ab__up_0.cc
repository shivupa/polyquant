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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,55760)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+240560)*1+lsi)*1]), &(inteval->stack[((hsi*3510+36434)*1+lsi)*1]), &(inteval->stack[((hsi*2808+39944)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+248984)*1+lsi)*1]), &(inteval->stack[((hsi*2808+39944)*1+lsi)*1]), &(inteval->stack[((hsi*2184+42752)*1+lsi)*1]),78);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*13104+255536)*1+lsi)*1]), &(inteval->stack[((hsi*8424+240560)*1+lsi)*1]), &(inteval->stack[((hsi*6552+248984)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+268640)*1+lsi)*1]), &(inteval->stack[((hsi*4290+32144)*1+lsi)*1]), &(inteval->stack[((hsi*3510+36434)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+279170)*1+lsi)*1]), &(inteval->stack[((hsi*10530+268640)*1+lsi)*1]), &(inteval->stack[((hsi*8424+240560)*1+lsi)*1]),78);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*21840+296018)*1+lsi)*1]), &(inteval->stack[((hsi*16848+279170)*1+lsi)*1]), &(inteval->stack[((hsi*13104+255536)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*9828+240560)*1+lsi)*1]), &(inteval->stack[((hsi*4095+22225)*1+lsi)*1]), &(inteval->stack[((hsi*3276+26320)*1+lsi)*1]),91);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*7644+250388)*1+lsi)*1]), &(inteval->stack[((hsi*3276+26320)*1+lsi)*1]), &(inteval->stack[((hsi*2548+29596)*1+lsi)*1]),91);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*15288+258032)*1+lsi)*1]), &(inteval->stack[((hsi*9828+240560)*1+lsi)*1]), &(inteval->stack[((hsi*7644+250388)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+273320)*1+lsi)*1]), &(inteval->stack[((hsi*5005+17220)*1+lsi)*1]), &(inteval->stack[((hsi*4095+22225)*1+lsi)*1]),91);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*19656+17220)*1+lsi)*1]), &(inteval->stack[((hsi*12285+273320)*1+lsi)*1]), &(inteval->stack[((hsi*9828+240560)*1+lsi)*1]),91);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*25480+317858)*1+lsi)*1]), &(inteval->stack[((hsi*19656+17220)*1+lsi)*1]), &(inteval->stack[((hsi*15288+258032)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*65520+343338)*1+lsi)*1]), &(inteval->stack[((hsi*25480+317858)*1+lsi)*1]), &(inteval->stack[((hsi*21840+296018)*1+lsi)*1]),280);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+240560)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48566)*1+lsi)*1]), &(inteval->stack[((hsi*2376+51536)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+247688)*1+lsi)*1]), &(inteval->stack[((hsi*2376+51536)*1+lsi)*1]), &(inteval->stack[((hsi*1848+53912)*1+lsi)*1]),66);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*11088+253232)*1+lsi)*1]), &(inteval->stack[((hsi*7128+240560)*1+lsi)*1]), &(inteval->stack[((hsi*5544+247688)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+264320)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44936)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48566)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+17220)*1+lsi)*1]), &(inteval->stack[((hsi*8910+264320)*1+lsi)*1]), &(inteval->stack[((hsi*7128+240560)*1+lsi)*1]),66);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*18480+264320)*1+lsi)*1]), &(inteval->stack[((hsi*14256+17220)*1+lsi)*1]), &(inteval->stack[((hsi*11088+253232)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*55440+408858)*1+lsi)*1]), &(inteval->stack[((hsi*21840+296018)*1+lsi)*1]), &(inteval->stack[((hsi*18480+264320)*1+lsi)*1]),280);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*110880+464298)*1+lsi)*1]), &(inteval->stack[((hsi*65520+343338)*1+lsi)*1]), &(inteval->stack[((hsi*55440+408858)*1+lsi)*1]),280);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*11340+240560)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5775)*1+lsi)*1]), &(inteval->stack[((hsi*3780+10500)*1+lsi)*1]),105);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*8820+251900)*1+lsi)*1]), &(inteval->stack[((hsi*3780+10500)*1+lsi)*1]), &(inteval->stack[((hsi*2940+14280)*1+lsi)*1]),105);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*17640+260720)*1+lsi)*1]), &(inteval->stack[((hsi*11340+240560)*1+lsi)*1]), &(inteval->stack[((hsi*8820+251900)*1+lsi)*1]),105);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+408858)*1+lsi)*1]), &(inteval->stack[((hsi*5775+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5775)*1+lsi)*1]),105);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*22680+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+408858)*1+lsi)*1]), &(inteval->stack[((hsi*11340+240560)*1+lsi)*1]),105);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*29400+408858)*1+lsi)*1]), &(inteval->stack[((hsi*22680+0)*1+lsi)*1]), &(inteval->stack[((hsi*17640+260720)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*76440+240560)*1+lsi)*1]), &(inteval->stack[((hsi*29400+408858)*1+lsi)*1]), &(inteval->stack[((hsi*25480+317858)*1+lsi)*1]),280);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*131040+575178)*1+lsi)*1]), &(inteval->stack[((hsi*76440+240560)*1+lsi)*1]), &(inteval->stack[((hsi*65520+343338)*1+lsi)*1]),280);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*184800+55760)*1+lsi)*1]), &(inteval->stack[((hsi*131040+575178)*1+lsi)*1]), &(inteval->stack[((hsi*110880+464298)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*184800+55760)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
