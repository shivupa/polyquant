/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0op.h>
#include <_aB_P__0__K__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__K__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3339)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__K__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+10143)*1+lsi)*1]), &(inteval->stack[((hsi*165+2931)*1+lsi)*1]), &(inteval->stack[((hsi*135+3096)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+10548)*1+lsi)*1]), &(inteval->stack[((hsi*198+2733)*1+lsi)*1]), &(inteval->stack[((hsi*165+2931)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+11043)*1+lsi)*1]), &(inteval->stack[((hsi*495+10548)*1+lsi)*1]), &(inteval->stack[((hsi*405+10143)*1+lsi)*1]),3);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*594+11853)*1+lsi)*1]), &(inteval->stack[((hsi*234+2499)*1+lsi)*1]), &(inteval->stack[((hsi*198+2733)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+12447)*1+lsi)*1]), &(inteval->stack[((hsi*594+11853)*1+lsi)*1]), &(inteval->stack[((hsi*495+10548)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+13437)*1+lsi)*1]), &(inteval->stack[((hsi*990+12447)*1+lsi)*1]), &(inteval->stack[((hsi*810+11043)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+10548)*1+lsi)*1]), &(inteval->stack[((hsi*135+3096)*1+lsi)*1]), &(inteval->stack[((hsi*108+3231)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+14787)*1+lsi)*1]), &(inteval->stack[((hsi*405+10143)*1+lsi)*1]), &(inteval->stack[((hsi*324+10548)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+15435)*1+lsi)*1]), &(inteval->stack[((hsi*810+11043)*1+lsi)*1]), &(inteval->stack[((hsi*648+14787)*1+lsi)*1]),3);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*1620+10143)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13437)*1+lsi)*1]), &(inteval->stack[((hsi*1080+15435)*1+lsi)*1]),3);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*702+14787)*1+lsi)*1]), &(inteval->stack[((hsi*273+2226)*1+lsi)*1]), &(inteval->stack[((hsi*234+2499)*1+lsi)*1]),3);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*1188+15489)*1+lsi)*1]), &(inteval->stack[((hsi*702+14787)*1+lsi)*1]), &(inteval->stack[((hsi*594+11853)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+16677)*1+lsi)*1]), &(inteval->stack[((hsi*1188+15489)*1+lsi)*1]), &(inteval->stack[((hsi*990+12447)*1+lsi)*1]),3);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*2025+18327)*1+lsi)*1]), &(inteval->stack[((hsi*1650+16677)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13437)*1+lsi)*1]),3);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*2268+11763)*1+lsi)*1]), &(inteval->stack[((hsi*2025+18327)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10143)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+10143)*1+lsi)*1]), &(inteval->stack[((hsi*330+1410)*1+lsi)*1]), &(inteval->stack[((hsi*270+1740)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+2226)*1+lsi)*1]), &(inteval->stack[((hsi*396+1014)*1+lsi)*1]), &(inteval->stack[((hsi*330+1410)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+14031)*1+lsi)*1]), &(inteval->stack[((hsi*990+2226)*1+lsi)*1]), &(inteval->stack[((hsi*810+10143)*1+lsi)*1]),6);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*1188+15651)*1+lsi)*1]), &(inteval->stack[((hsi*468+546)*1+lsi)*1]), &(inteval->stack[((hsi*396+1014)*1+lsi)*1]),6);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*1980+16839)*1+lsi)*1]), &(inteval->stack[((hsi*1188+15651)*1+lsi)*1]), &(inteval->stack[((hsi*990+2226)*1+lsi)*1]),6);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*2700+18819)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16839)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14031)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+2226)*1+lsi)*1]), &(inteval->stack[((hsi*270+1740)*1+lsi)*1]), &(inteval->stack[((hsi*216+2010)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+21519)*1+lsi)*1]), &(inteval->stack[((hsi*810+10143)*1+lsi)*1]), &(inteval->stack[((hsi*648+2226)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+1014)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14031)*1+lsi)*1]), &(inteval->stack[((hsi*1296+21519)*1+lsi)*1]),6);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*3240+21519)*1+lsi)*1]), &(inteval->stack[((hsi*2700+18819)*1+lsi)*1]), &(inteval->stack[((hsi*2160+1014)*1+lsi)*1]),6);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*1404+1014)*1+lsi)*1]), &(inteval->stack[((hsi*546+0)*1+lsi)*1]), &(inteval->stack[((hsi*468+546)*1+lsi)*1]),6);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*2376+24759)*1+lsi)*1]), &(inteval->stack[((hsi*1404+1014)*1+lsi)*1]), &(inteval->stack[((hsi*1188+15651)*1+lsi)*1]),6);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*3300+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24759)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16839)*1+lsi)*1]),6);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*4050+14031)*1+lsi)*1]), &(inteval->stack[((hsi*3300+0)*1+lsi)*1]), &(inteval->stack[((hsi*2700+18819)*1+lsi)*1]),6);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*4536+24759)*1+lsi)*1]), &(inteval->stack[((hsi*4050+14031)*1+lsi)*1]), &(inteval->stack[((hsi*3240+21519)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*6804+3339)*1+lsi)*1]), &(inteval->stack[((hsi*4536+24759)*1+lsi)*1]), &(inteval->stack[((hsi*2268+11763)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6804+3339)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
