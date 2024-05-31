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
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_K__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11088)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+32256)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7164)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8784)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+36144)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7164)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+41004)*1+lsi)*1]), &(inteval->stack[((hsi*4860+36144)*1+lsi)*1]), &(inteval->stack[((hsi*3888+32256)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+48780)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+54720)*1+lsi)*1]), &(inteval->stack[((hsi*5940+48780)*1+lsi)*1]), &(inteval->stack[((hsi*4860+36144)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+64440)*1+lsi)*1]), &(inteval->stack[((hsi*9720+54720)*1+lsi)*1]), &(inteval->stack[((hsi*7776+41004)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+36144)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10080)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+77400)*1+lsi)*1]), &(inteval->stack[((hsi*3888+32256)*1+lsi)*1]), &(inteval->stack[((hsi*3024+36144)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+83448)*1+lsi)*1]), &(inteval->stack[((hsi*7776+41004)*1+lsi)*1]), &(inteval->stack[((hsi*6048+77400)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+32256)*1+lsi)*1]), &(inteval->stack[((hsi*12960+64440)*1+lsi)*1]), &(inteval->stack[((hsi*10080+83448)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+77400)*1+lsi)*1]), &(inteval->stack[((hsi*2808+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+84528)*1+lsi)*1]), &(inteval->stack[((hsi*7128+77400)*1+lsi)*1]), &(inteval->stack[((hsi*5940+48780)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+96408)*1+lsi)*1]), &(inteval->stack[((hsi*11880+84528)*1+lsi)*1]), &(inteval->stack[((hsi*9720+54720)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+112608)*1+lsi)*1]), &(inteval->stack[((hsi*16200+96408)*1+lsi)*1]), &(inteval->stack[((hsi*12960+64440)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+11088)*1+lsi)*1]), &(inteval->stack[((hsi*19440+112608)*1+lsi)*1]), &(inteval->stack[((hsi*15120+32256)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*21168+11088)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
