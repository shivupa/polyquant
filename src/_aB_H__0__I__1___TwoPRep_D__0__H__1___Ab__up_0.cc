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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
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
#include <HRRPart1bra0ket0np.h>
#include <_aB_H__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,26180)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+100268)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16660)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17920)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+103292)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15120)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16660)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+107072)*1+lsi)*1]), &(inteval->stack[((hsi*3780+103292)*1+lsi)*1]), &(inteval->stack[((hsi*3024+100268)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+113120)*1+lsi)*1]), &(inteval->stack[((hsi*1848+13272)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15120)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+117740)*1+lsi)*1]), &(inteval->stack[((hsi*4620+113120)*1+lsi)*1]), &(inteval->stack[((hsi*3780+103292)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+125300)*1+lsi)*1]), &(inteval->stack[((hsi*7560+117740)*1+lsi)*1]), &(inteval->stack[((hsi*6048+107072)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+103292)*1+lsi)*1]), &(inteval->stack[((hsi*1008+17920)*1+lsi)*1]), &(inteval->stack[((hsi*784+18928)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+135380)*1+lsi)*1]), &(inteval->stack[((hsi*3024+100268)*1+lsi)*1]), &(inteval->stack[((hsi*2352+103292)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+140084)*1+lsi)*1]), &(inteval->stack[((hsi*6048+107072)*1+lsi)*1]), &(inteval->stack[((hsi*4704+135380)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+100268)*1+lsi)*1]), &(inteval->stack[((hsi*10080+125300)*1+lsi)*1]), &(inteval->stack[((hsi*7840+140084)*1+lsi)*1]),28);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*5544+135380)*1+lsi)*1]), &(inteval->stack[((hsi*2184+11088)*1+lsi)*1]), &(inteval->stack[((hsi*1848+13272)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+140924)*1+lsi)*1]), &(inteval->stack[((hsi*5544+135380)*1+lsi)*1]), &(inteval->stack[((hsi*4620+113120)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+150164)*1+lsi)*1]), &(inteval->stack[((hsi*9240+140924)*1+lsi)*1]), &(inteval->stack[((hsi*7560+117740)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+162764)*1+lsi)*1]), &(inteval->stack[((hsi*12600+150164)*1+lsi)*1]), &(inteval->stack[((hsi*10080+125300)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+112028)*1+lsi)*1]), &(inteval->stack[((hsi*15120+162764)*1+lsi)*1]), &(inteval->stack[((hsi*11760+100268)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+100268)*1+lsi)*1]), &(inteval->stack[((hsi*945+23891)*1+lsi)*1]), &(inteval->stack[((hsi*756+24836)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+102536)*1+lsi)*1]), &(inteval->stack[((hsi*1155+22736)*1+lsi)*1]), &(inteval->stack[((hsi*945+23891)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+11088)*1+lsi)*1]), &(inteval->stack[((hsi*2835+102536)*1+lsi)*1]), &(inteval->stack[((hsi*2268+100268)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+105371)*1+lsi)*1]), &(inteval->stack[((hsi*1386+21350)*1+lsi)*1]), &(inteval->stack[((hsi*1155+22736)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+128492)*1+lsi)*1]), &(inteval->stack[((hsi*3465+105371)*1+lsi)*1]), &(inteval->stack[((hsi*2835+102536)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+134162)*1+lsi)*1]), &(inteval->stack[((hsi*5670+128492)*1+lsi)*1]), &(inteval->stack[((hsi*4536+11088)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+15624)*1+lsi)*1]), &(inteval->stack[((hsi*756+24836)*1+lsi)*1]), &(inteval->stack[((hsi*588+25592)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+141722)*1+lsi)*1]), &(inteval->stack[((hsi*2268+100268)*1+lsi)*1]), &(inteval->stack[((hsi*1764+15624)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+145250)*1+lsi)*1]), &(inteval->stack[((hsi*4536+11088)*1+lsi)*1]), &(inteval->stack[((hsi*3528+141722)*1+lsi)*1]),21);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*8820+151130)*1+lsi)*1]), &(inteval->stack[((hsi*7560+134162)*1+lsi)*1]), &(inteval->stack[((hsi*5880+145250)*1+lsi)*1]),21);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*4158+141722)*1+lsi)*1]), &(inteval->stack[((hsi*1638+19712)*1+lsi)*1]), &(inteval->stack[((hsi*1386+21350)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+11088)*1+lsi)*1]), &(inteval->stack[((hsi*4158+141722)*1+lsi)*1]), &(inteval->stack[((hsi*3465+105371)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+100268)*1+lsi)*1]), &(inteval->stack[((hsi*6930+11088)*1+lsi)*1]), &(inteval->stack[((hsi*5670+128492)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+11088)*1+lsi)*1]), &(inteval->stack[((hsi*9450+100268)*1+lsi)*1]), &(inteval->stack[((hsi*7560+134162)*1+lsi)*1]),21);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*12348+128492)*1+lsi)*1]), &(inteval->stack[((hsi*11340+11088)*1+lsi)*1]), &(inteval->stack[((hsi*8820+151130)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*37044+140840)*1+lsi)*1]), &(inteval->stack[((hsi*16464+112028)*1+lsi)*1]), &(inteval->stack[((hsi*12348+128492)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+11088)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7164)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8784)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+128492)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7164)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+100268)*1+lsi)*1]), &(inteval->stack[((hsi*4860+128492)*1+lsi)*1]), &(inteval->stack[((hsi*3888+11088)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+14976)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5184)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+177884)*1+lsi)*1]), &(inteval->stack[((hsi*5940+14976)*1+lsi)*1]), &(inteval->stack[((hsi*4860+128492)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+187604)*1+lsi)*1]), &(inteval->stack[((hsi*9720+177884)*1+lsi)*1]), &(inteval->stack[((hsi*7776+100268)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+128492)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8784)*1+lsi)*1]), &(inteval->stack[((hsi*1008+10080)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+131516)*1+lsi)*1]), &(inteval->stack[((hsi*3888+11088)*1+lsi)*1]), &(inteval->stack[((hsi*3024+128492)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+200564)*1+lsi)*1]), &(inteval->stack[((hsi*7776+100268)*1+lsi)*1]), &(inteval->stack[((hsi*6048+131516)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+210644)*1+lsi)*1]), &(inteval->stack[((hsi*12960+187604)*1+lsi)*1]), &(inteval->stack[((hsi*10080+200564)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+128492)*1+lsi)*1]), &(inteval->stack[((hsi*2808+0)*1+lsi)*1]), &(inteval->stack[((hsi*2376+2808)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+0)*1+lsi)*1]), &(inteval->stack[((hsi*7128+128492)*1+lsi)*1]), &(inteval->stack[((hsi*5940+14976)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+225764)*1+lsi)*1]), &(inteval->stack[((hsi*11880+0)*1+lsi)*1]), &(inteval->stack[((hsi*9720+177884)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+0)*1+lsi)*1]), &(inteval->stack[((hsi*16200+225764)*1+lsi)*1]), &(inteval->stack[((hsi*12960+187604)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+177884)*1+lsi)*1]), &(inteval->stack[((hsi*19440+0)*1+lsi)*1]), &(inteval->stack[((hsi*15120+210644)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*49392+199052)*1+lsi)*1]), &(inteval->stack[((hsi*21168+177884)*1+lsi)*1]), &(inteval->stack[((hsi*16464+112028)*1+lsi)*1]),588);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*74088+26180)*1+lsi)*1]), &(inteval->stack[((hsi*49392+199052)*1+lsi)*1]), &(inteval->stack[((hsi*37044+140840)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*74088+26180)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
