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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ii.h>
#include <HRRPart1bra0ket0ip.h>
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
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_P__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_P__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1197)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_P__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3549)*1+lsi)*1]), &(inteval->stack[((hsi*135+870)*1+lsi)*1]), &(inteval->stack[((hsi*108+1005)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+3873)*1+lsi)*1]), &(inteval->stack[((hsi*165+705)*1+lsi)*1]), &(inteval->stack[((hsi*135+870)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+4278)*1+lsi)*1]), &(inteval->stack[((hsi*405+3873)*1+lsi)*1]), &(inteval->stack[((hsi*324+3549)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+4926)*1+lsi)*1]), &(inteval->stack[((hsi*198+507)*1+lsi)*1]), &(inteval->stack[((hsi*165+705)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+5421)*1+lsi)*1]), &(inteval->stack[((hsi*495+4926)*1+lsi)*1]), &(inteval->stack[((hsi*405+3873)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+6231)*1+lsi)*1]), &(inteval->stack[((hsi*810+5421)*1+lsi)*1]), &(inteval->stack[((hsi*648+4278)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+7311)*1+lsi)*1]), &(inteval->stack[((hsi*234+273)*1+lsi)*1]), &(inteval->stack[((hsi*198+507)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+7905)*1+lsi)*1]), &(inteval->stack[((hsi*594+7311)*1+lsi)*1]), &(inteval->stack[((hsi*495+4926)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+8895)*1+lsi)*1]), &(inteval->stack[((hsi*990+7905)*1+lsi)*1]), &(inteval->stack[((hsi*810+5421)*1+lsi)*1]),3);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*1620+10245)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8895)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6231)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+4926)*1+lsi)*1]), &(inteval->stack[((hsi*108+1005)*1+lsi)*1]), &(inteval->stack[((hsi*84+1113)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+5178)*1+lsi)*1]), &(inteval->stack[((hsi*324+3549)*1+lsi)*1]), &(inteval->stack[((hsi*252+4926)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+11865)*1+lsi)*1]), &(inteval->stack[((hsi*648+4278)*1+lsi)*1]), &(inteval->stack[((hsi*504+5178)*1+lsi)*1]),3);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*1260+3549)*1+lsi)*1]), &(inteval->stack[((hsi*1080+6231)*1+lsi)*1]), &(inteval->stack[((hsi*840+11865)*1+lsi)*1]),3);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*1764+4809)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10245)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3549)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+3549)*1+lsi)*1]), &(inteval->stack[((hsi*273+0)*1+lsi)*1]), &(inteval->stack[((hsi*234+273)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+0)*1+lsi)*1]), &(inteval->stack[((hsi*702+3549)*1+lsi)*1]), &(inteval->stack[((hsi*594+7311)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+11865)*1+lsi)*1]), &(inteval->stack[((hsi*1188+0)*1+lsi)*1]), &(inteval->stack[((hsi*990+7905)*1+lsi)*1]),3);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*2025+6573)*1+lsi)*1]), &(inteval->stack[((hsi*1650+11865)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8895)*1+lsi)*1]),3);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*2268+11865)*1+lsi)*1]), &(inteval->stack[((hsi*2025+6573)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10245)*1+lsi)*1]),3);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*2352+1197)*1+lsi)*1]), &(inteval->stack[((hsi*2268+11865)*1+lsi)*1]), &(inteval->stack[((hsi*1764+4809)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2352+1197)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
