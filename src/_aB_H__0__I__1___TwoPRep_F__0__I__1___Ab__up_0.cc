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
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
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
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0op.h>
#include <_aB_H__0__I__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,51870)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+216510)*1+lsi)*1]), &(inteval->stack[((hsi*1260+40439)*1+lsi)*1]), &(inteval->stack[((hsi*1008+41699)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+219534)*1+lsi)*1]), &(inteval->stack[((hsi*1540+38899)*1+lsi)*1]), &(inteval->stack[((hsi*1260+40439)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+223314)*1+lsi)*1]), &(inteval->stack[((hsi*3780+219534)*1+lsi)*1]), &(inteval->stack[((hsi*3024+216510)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+229362)*1+lsi)*1]), &(inteval->stack[((hsi*1848+37051)*1+lsi)*1]), &(inteval->stack[((hsi*1540+38899)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+233982)*1+lsi)*1]), &(inteval->stack[((hsi*4620+229362)*1+lsi)*1]), &(inteval->stack[((hsi*3780+219534)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+241542)*1+lsi)*1]), &(inteval->stack[((hsi*7560+233982)*1+lsi)*1]), &(inteval->stack[((hsi*6048+223314)*1+lsi)*1]),28);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*5544+251622)*1+lsi)*1]), &(inteval->stack[((hsi*2184+34867)*1+lsi)*1]), &(inteval->stack[((hsi*1848+37051)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+257166)*1+lsi)*1]), &(inteval->stack[((hsi*5544+251622)*1+lsi)*1]), &(inteval->stack[((hsi*4620+229362)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+266406)*1+lsi)*1]), &(inteval->stack[((hsi*9240+257166)*1+lsi)*1]), &(inteval->stack[((hsi*7560+233982)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+279006)*1+lsi)*1]), &(inteval->stack[((hsi*12600+266406)*1+lsi)*1]), &(inteval->stack[((hsi*10080+241542)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+229362)*1+lsi)*1]), &(inteval->stack[((hsi*1008+41699)*1+lsi)*1]), &(inteval->stack[((hsi*784+42707)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+231714)*1+lsi)*1]), &(inteval->stack[((hsi*3024+216510)*1+lsi)*1]), &(inteval->stack[((hsi*2352+229362)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+294126)*1+lsi)*1]), &(inteval->stack[((hsi*6048+223314)*1+lsi)*1]), &(inteval->stack[((hsi*4704+231714)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+216510)*1+lsi)*1]), &(inteval->stack[((hsi*10080+241542)*1+lsi)*1]), &(inteval->stack[((hsi*7840+294126)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+228270)*1+lsi)*1]), &(inteval->stack[((hsi*15120+279006)*1+lsi)*1]), &(inteval->stack[((hsi*11760+216510)*1+lsi)*1]),28);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*6552+216510)*1+lsi)*1]), &(inteval->stack[((hsi*2548+32319)*1+lsi)*1]), &(inteval->stack[((hsi*2184+34867)*1+lsi)*1]),28);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*11088+32319)*1+lsi)*1]), &(inteval->stack[((hsi*6552+216510)*1+lsi)*1]), &(inteval->stack[((hsi*5544+251622)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+294126)*1+lsi)*1]), &(inteval->stack[((hsi*11088+32319)*1+lsi)*1]), &(inteval->stack[((hsi*9240+257166)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+244734)*1+lsi)*1]), &(inteval->stack[((hsi*15400+294126)*1+lsi)*1]), &(inteval->stack[((hsi*12600+266406)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+294126)*1+lsi)*1]), &(inteval->stack[((hsi*18900+244734)*1+lsi)*1]), &(inteval->stack[((hsi*15120+279006)*1+lsi)*1]),28);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*21952+244734)*1+lsi)*1]), &(inteval->stack[((hsi*21168+294126)*1+lsi)*1]), &(inteval->stack[((hsi*16464+228270)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+216510)*1+lsi)*1]), &(inteval->stack[((hsi*1620+28395)*1+lsi)*1]), &(inteval->stack[((hsi*1296+30015)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+220398)*1+lsi)*1]), &(inteval->stack[((hsi*1980+26415)*1+lsi)*1]), &(inteval->stack[((hsi*1620+28395)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+225258)*1+lsi)*1]), &(inteval->stack[((hsi*4860+220398)*1+lsi)*1]), &(inteval->stack[((hsi*3888+216510)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+233034)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24039)*1+lsi)*1]), &(inteval->stack[((hsi*1980+26415)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+32319)*1+lsi)*1]), &(inteval->stack[((hsi*5940+233034)*1+lsi)*1]), &(inteval->stack[((hsi*4860+220398)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+266686)*1+lsi)*1]), &(inteval->stack[((hsi*9720+32319)*1+lsi)*1]), &(inteval->stack[((hsi*7776+225258)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+279646)*1+lsi)*1]), &(inteval->stack[((hsi*2808+21231)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24039)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+286774)*1+lsi)*1]), &(inteval->stack[((hsi*7128+279646)*1+lsi)*1]), &(inteval->stack[((hsi*5940+233034)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+298654)*1+lsi)*1]), &(inteval->stack[((hsi*11880+286774)*1+lsi)*1]), &(inteval->stack[((hsi*9720+32319)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+314854)*1+lsi)*1]), &(inteval->stack[((hsi*16200+298654)*1+lsi)*1]), &(inteval->stack[((hsi*12960+266686)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+233034)*1+lsi)*1]), &(inteval->stack[((hsi*1296+30015)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31311)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+24039)*1+lsi)*1]), &(inteval->stack[((hsi*3888+216510)*1+lsi)*1]), &(inteval->stack[((hsi*3024+233034)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+30087)*1+lsi)*1]), &(inteval->stack[((hsi*7776+225258)*1+lsi)*1]), &(inteval->stack[((hsi*6048+24039)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+216510)*1+lsi)*1]), &(inteval->stack[((hsi*12960+266686)*1+lsi)*1]), &(inteval->stack[((hsi*10080+30087)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+334294)*1+lsi)*1]), &(inteval->stack[((hsi*19440+314854)*1+lsi)*1]), &(inteval->stack[((hsi*15120+216510)*1+lsi)*1]),36);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*8424+216510)*1+lsi)*1]), &(inteval->stack[((hsi*3276+17955)*1+lsi)*1]), &(inteval->stack[((hsi*2808+21231)*1+lsi)*1]),36);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*14256+17955)*1+lsi)*1]), &(inteval->stack[((hsi*8424+216510)*1+lsi)*1]), &(inteval->stack[((hsi*7128+279646)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+216510)*1+lsi)*1]), &(inteval->stack[((hsi*14256+17955)*1+lsi)*1]), &(inteval->stack[((hsi*11880+286774)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+266686)*1+lsi)*1]), &(inteval->stack[((hsi*19800+216510)*1+lsi)*1]), &(inteval->stack[((hsi*16200+298654)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+216510)*1+lsi)*1]), &(inteval->stack[((hsi*24300+266686)*1+lsi)*1]), &(inteval->stack[((hsi*19440+314854)*1+lsi)*1]),36);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*28224+266686)*1+lsi)*1]), &(inteval->stack[((hsi*27216+216510)*1+lsi)*1]), &(inteval->stack[((hsi*21168+334294)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*65856+294910)*1+lsi)*1]), &(inteval->stack[((hsi*28224+266686)*1+lsi)*1]), &(inteval->stack[((hsi*21952+244734)*1+lsi)*1]),784);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+216510)*1+lsi)*1]), &(inteval->stack[((hsi*945+49581)*1+lsi)*1]), &(inteval->stack[((hsi*756+50526)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+218778)*1+lsi)*1]), &(inteval->stack[((hsi*1155+48426)*1+lsi)*1]), &(inteval->stack[((hsi*945+49581)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+17955)*1+lsi)*1]), &(inteval->stack[((hsi*2835+218778)*1+lsi)*1]), &(inteval->stack[((hsi*2268+216510)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+221613)*1+lsi)*1]), &(inteval->stack[((hsi*1386+47040)*1+lsi)*1]), &(inteval->stack[((hsi*1155+48426)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+22491)*1+lsi)*1]), &(inteval->stack[((hsi*3465+221613)*1+lsi)*1]), &(inteval->stack[((hsi*2835+218778)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+225078)*1+lsi)*1]), &(inteval->stack[((hsi*5670+22491)*1+lsi)*1]), &(inteval->stack[((hsi*4536+17955)*1+lsi)*1]),21);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*4158+28161)*1+lsi)*1]), &(inteval->stack[((hsi*1638+45402)*1+lsi)*1]), &(inteval->stack[((hsi*1386+47040)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+232638)*1+lsi)*1]), &(inteval->stack[((hsi*4158+28161)*1+lsi)*1]), &(inteval->stack[((hsi*3465+221613)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+32319)*1+lsi)*1]), &(inteval->stack[((hsi*6930+232638)*1+lsi)*1]), &(inteval->stack[((hsi*5670+22491)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+360766)*1+lsi)*1]), &(inteval->stack[((hsi*9450+32319)*1+lsi)*1]), &(inteval->stack[((hsi*7560+225078)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+218778)*1+lsi)*1]), &(inteval->stack[((hsi*756+50526)*1+lsi)*1]), &(inteval->stack[((hsi*588+51282)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+22491)*1+lsi)*1]), &(inteval->stack[((hsi*2268+216510)*1+lsi)*1]), &(inteval->stack[((hsi*1764+218778)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+216510)*1+lsi)*1]), &(inteval->stack[((hsi*4536+17955)*1+lsi)*1]), &(inteval->stack[((hsi*3528+22491)*1+lsi)*1]),21);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*8820+17955)*1+lsi)*1]), &(inteval->stack[((hsi*7560+225078)*1+lsi)*1]), &(inteval->stack[((hsi*5880+216510)*1+lsi)*1]),21);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*12348+216510)*1+lsi)*1]), &(inteval->stack[((hsi*11340+360766)*1+lsi)*1]), &(inteval->stack[((hsi*8820+17955)*1+lsi)*1]),21);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*4914+17955)*1+lsi)*1]), &(inteval->stack[((hsi*1911+43491)*1+lsi)*1]), &(inteval->stack[((hsi*1638+45402)*1+lsi)*1]),21);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*8316+41769)*1+lsi)*1]), &(inteval->stack[((hsi*4914+17955)*1+lsi)*1]), &(inteval->stack[((hsi*4158+28161)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+17955)*1+lsi)*1]), &(inteval->stack[((hsi*8316+41769)*1+lsi)*1]), &(inteval->stack[((hsi*6930+232638)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+228858)*1+lsi)*1]), &(inteval->stack[((hsi*11550+17955)*1+lsi)*1]), &(inteval->stack[((hsi*9450+32319)*1+lsi)*1]),21);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*15876+17955)*1+lsi)*1]), &(inteval->stack[((hsi*14175+228858)*1+lsi)*1]), &(inteval->stack[((hsi*11340+360766)*1+lsi)*1]),21);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*16464+33831)*1+lsi)*1]), &(inteval->stack[((hsi*15876+17955)*1+lsi)*1]), &(inteval->stack[((hsi*12348+216510)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*49392+360766)*1+lsi)*1]), &(inteval->stack[((hsi*21952+244734)*1+lsi)*1]), &(inteval->stack[((hsi*16464+33831)*1+lsi)*1]),784);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*98784+410158)*1+lsi)*1]), &(inteval->stack[((hsi*65856+294910)*1+lsi)*1]), &(inteval->stack[((hsi*49392+360766)*1+lsi)*1]),784);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+216510)*1+lsi)*1]), &(inteval->stack[((hsi*2025+13050)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15075)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+360766)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10575)*1+lsi)*1]), &(inteval->stack[((hsi*2025+13050)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+221370)*1+lsi)*1]), &(inteval->stack[((hsi*6075+360766)*1+lsi)*1]), &(inteval->stack[((hsi*4860+216510)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+366841)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10575)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+374266)*1+lsi)*1]), &(inteval->stack[((hsi*7425+366841)*1+lsi)*1]), &(inteval->stack[((hsi*6075+360766)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+231090)*1+lsi)*1]), &(inteval->stack[((hsi*12150+374266)*1+lsi)*1]), &(inteval->stack[((hsi*9720+221370)*1+lsi)*1]),45);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*8910+17955)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]), &(inteval->stack[((hsi*2970+7605)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+26865)*1+lsi)*1]), &(inteval->stack[((hsi*8910+17955)*1+lsi)*1]), &(inteval->stack[((hsi*7425+366841)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+386416)*1+lsi)*1]), &(inteval->stack[((hsi*14850+26865)*1+lsi)*1]), &(inteval->stack[((hsi*12150+374266)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+360766)*1+lsi)*1]), &(inteval->stack[((hsi*20250+386416)*1+lsi)*1]), &(inteval->stack[((hsi*16200+231090)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+247290)*1+lsi)*1]), &(inteval->stack[((hsi*1620+15075)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16695)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+251070)*1+lsi)*1]), &(inteval->stack[((hsi*4860+216510)*1+lsi)*1]), &(inteval->stack[((hsi*3780+247290)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+508942)*1+lsi)*1]), &(inteval->stack[((hsi*9720+221370)*1+lsi)*1]), &(inteval->stack[((hsi*7560+251070)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+247290)*1+lsi)*1]), &(inteval->stack[((hsi*16200+231090)*1+lsi)*1]), &(inteval->stack[((hsi*12600+508942)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+216510)*1+lsi)*1]), &(inteval->stack[((hsi*24300+360766)*1+lsi)*1]), &(inteval->stack[((hsi*18900+247290)*1+lsi)*1]),45);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*10530+242970)*1+lsi)*1]), &(inteval->stack[((hsi*4095+0)*1+lsi)*1]), &(inteval->stack[((hsi*3510+4095)*1+lsi)*1]),45);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*17820+0)*1+lsi)*1]), &(inteval->stack[((hsi*10530+242970)*1+lsi)*1]), &(inteval->stack[((hsi*8910+17955)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+508942)*1+lsi)*1]), &(inteval->stack[((hsi*17820+0)*1+lsi)*1]), &(inteval->stack[((hsi*14850+26865)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+0)*1+lsi)*1]), &(inteval->stack[((hsi*24750+508942)*1+lsi)*1]), &(inteval->stack[((hsi*20250+386416)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+508942)*1+lsi)*1]), &(inteval->stack[((hsi*30375+0)*1+lsi)*1]), &(inteval->stack[((hsi*24300+360766)*1+lsi)*1]),45);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*35280+0)*1+lsi)*1]), &(inteval->stack[((hsi*34020+508942)*1+lsi)*1]), &(inteval->stack[((hsi*26460+216510)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*84672+508942)*1+lsi)*1]), &(inteval->stack[((hsi*35280+0)*1+lsi)*1]), &(inteval->stack[((hsi*28224+266686)*1+lsi)*1]),784);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*131712+593614)*1+lsi)*1]), &(inteval->stack[((hsi*84672+508942)*1+lsi)*1]), &(inteval->stack[((hsi*65856+294910)*1+lsi)*1]),784);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*164640+51870)*1+lsi)*1]), &(inteval->stack[((hsi*131712+593614)*1+lsi)*1]), &(inteval->stack[((hsi*98784+410158)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*164640+51870)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
