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
#include <eri3_aB_H__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8379)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__I__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+24843)*1+lsi)*1]), &(inteval->stack[((hsi*945+6090)*1+lsi)*1]), &(inteval->stack[((hsi*756+7035)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+27111)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4935)*1+lsi)*1]), &(inteval->stack[((hsi*945+6090)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+29946)*1+lsi)*1]), &(inteval->stack[((hsi*2835+27111)*1+lsi)*1]), &(inteval->stack[((hsi*2268+24843)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+34482)*1+lsi)*1]), &(inteval->stack[((hsi*1386+3549)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4935)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+37947)*1+lsi)*1]), &(inteval->stack[((hsi*3465+34482)*1+lsi)*1]), &(inteval->stack[((hsi*2835+27111)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+43617)*1+lsi)*1]), &(inteval->stack[((hsi*5670+37947)*1+lsi)*1]), &(inteval->stack[((hsi*4536+29946)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+51177)*1+lsi)*1]), &(inteval->stack[((hsi*1638+1911)*1+lsi)*1]), &(inteval->stack[((hsi*1386+3549)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+55335)*1+lsi)*1]), &(inteval->stack[((hsi*4158+51177)*1+lsi)*1]), &(inteval->stack[((hsi*3465+34482)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+62265)*1+lsi)*1]), &(inteval->stack[((hsi*6930+55335)*1+lsi)*1]), &(inteval->stack[((hsi*5670+37947)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+71715)*1+lsi)*1]), &(inteval->stack[((hsi*9450+62265)*1+lsi)*1]), &(inteval->stack[((hsi*7560+43617)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+34482)*1+lsi)*1]), &(inteval->stack[((hsi*756+7035)*1+lsi)*1]), &(inteval->stack[((hsi*588+7791)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+36246)*1+lsi)*1]), &(inteval->stack[((hsi*2268+24843)*1+lsi)*1]), &(inteval->stack[((hsi*1764+34482)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+83055)*1+lsi)*1]), &(inteval->stack[((hsi*4536+29946)*1+lsi)*1]), &(inteval->stack[((hsi*3528+36246)*1+lsi)*1]),21);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*8820+24843)*1+lsi)*1]), &(inteval->stack[((hsi*7560+43617)*1+lsi)*1]), &(inteval->stack[((hsi*5880+83055)*1+lsi)*1]),21);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*12348+33663)*1+lsi)*1]), &(inteval->stack[((hsi*11340+71715)*1+lsi)*1]), &(inteval->stack[((hsi*8820+24843)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+24843)*1+lsi)*1]), &(inteval->stack[((hsi*1911+0)*1+lsi)*1]), &(inteval->stack[((hsi*1638+1911)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+0)*1+lsi)*1]), &(inteval->stack[((hsi*4914+24843)*1+lsi)*1]), &(inteval->stack[((hsi*4158+51177)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+83055)*1+lsi)*1]), &(inteval->stack[((hsi*8316+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+55335)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+46011)*1+lsi)*1]), &(inteval->stack[((hsi*11550+83055)*1+lsi)*1]), &(inteval->stack[((hsi*9450+62265)*1+lsi)*1]),21);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*15876+83055)*1+lsi)*1]), &(inteval->stack[((hsi*14175+46011)*1+lsi)*1]), &(inteval->stack[((hsi*11340+71715)*1+lsi)*1]),21);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*16464+8379)*1+lsi)*1]), &(inteval->stack[((hsi*15876+83055)*1+lsi)*1]), &(inteval->stack[((hsi*12348+33663)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*16464+8379)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
