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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
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
#include <_aB_I__0__I__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,50512)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+215152)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37964)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39584)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+219040)*1+lsi)*1]), &(inteval->stack[((hsi*1980+35984)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37964)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+223900)*1+lsi)*1]), &(inteval->stack[((hsi*4860+219040)*1+lsi)*1]), &(inteval->stack[((hsi*3888+215152)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+231676)*1+lsi)*1]), &(inteval->stack[((hsi*2376+33608)*1+lsi)*1]), &(inteval->stack[((hsi*1980+35984)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+237616)*1+lsi)*1]), &(inteval->stack[((hsi*5940+231676)*1+lsi)*1]), &(inteval->stack[((hsi*4860+219040)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+247336)*1+lsi)*1]), &(inteval->stack[((hsi*9720+237616)*1+lsi)*1]), &(inteval->stack[((hsi*7776+223900)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+219040)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39584)*1+lsi)*1]), &(inteval->stack[((hsi*1008+40880)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+260296)*1+lsi)*1]), &(inteval->stack[((hsi*3888+215152)*1+lsi)*1]), &(inteval->stack[((hsi*3024+219040)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+266344)*1+lsi)*1]), &(inteval->stack[((hsi*7776+223900)*1+lsi)*1]), &(inteval->stack[((hsi*6048+260296)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+215152)*1+lsi)*1]), &(inteval->stack[((hsi*12960+247336)*1+lsi)*1]), &(inteval->stack[((hsi*10080+266344)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+260296)*1+lsi)*1]), &(inteval->stack[((hsi*2808+30800)*1+lsi)*1]), &(inteval->stack[((hsi*2376+33608)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+267424)*1+lsi)*1]), &(inteval->stack[((hsi*7128+260296)*1+lsi)*1]), &(inteval->stack[((hsi*5940+231676)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+279304)*1+lsi)*1]), &(inteval->stack[((hsi*11880+267424)*1+lsi)*1]), &(inteval->stack[((hsi*9720+237616)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+295504)*1+lsi)*1]), &(inteval->stack[((hsi*16200+279304)*1+lsi)*1]), &(inteval->stack[((hsi*12960+247336)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+230272)*1+lsi)*1]), &(inteval->stack[((hsi*19440+295504)*1+lsi)*1]), &(inteval->stack[((hsi*15120+215152)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+215152)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25895)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27920)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+30800)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23420)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25895)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+220012)*1+lsi)*1]), &(inteval->stack[((hsi*6075+30800)*1+lsi)*1]), &(inteval->stack[((hsi*4860+215152)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+251440)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20450)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23420)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+258865)*1+lsi)*1]), &(inteval->stack[((hsi*7425+251440)*1+lsi)*1]), &(inteval->stack[((hsi*6075+30800)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+271015)*1+lsi)*1]), &(inteval->stack[((hsi*12150+258865)*1+lsi)*1]), &(inteval->stack[((hsi*9720+220012)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+30800)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29540)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+287215)*1+lsi)*1]), &(inteval->stack[((hsi*4860+215152)*1+lsi)*1]), &(inteval->stack[((hsi*3780+30800)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+23420)*1+lsi)*1]), &(inteval->stack[((hsi*9720+220012)*1+lsi)*1]), &(inteval->stack[((hsi*7560+287215)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+287215)*1+lsi)*1]), &(inteval->stack[((hsi*16200+271015)*1+lsi)*1]), &(inteval->stack[((hsi*12600+23420)*1+lsi)*1]),45);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*8910+23420)*1+lsi)*1]), &(inteval->stack[((hsi*3510+16940)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20450)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+215152)*1+lsi)*1]), &(inteval->stack[((hsi*8910+23420)*1+lsi)*1]), &(inteval->stack[((hsi*7425+251440)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+16940)*1+lsi)*1]), &(inteval->stack[((hsi*14850+215152)*1+lsi)*1]), &(inteval->stack[((hsi*12150+258865)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+306115)*1+lsi)*1]), &(inteval->stack[((hsi*20250+16940)*1+lsi)*1]), &(inteval->stack[((hsi*16200+271015)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+251440)*1+lsi)*1]), &(inteval->stack[((hsi*24300+306115)*1+lsi)*1]), &(inteval->stack[((hsi*18900+287215)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*63504+277900)*1+lsi)*1]), &(inteval->stack[((hsi*26460+251440)*1+lsi)*1]), &(inteval->stack[((hsi*21168+230272)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+16940)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47460)*1+lsi)*1]), &(inteval->stack[((hsi*1008+48720)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+19964)*1+lsi)*1]), &(inteval->stack[((hsi*1540+45920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+47460)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+23744)*1+lsi)*1]), &(inteval->stack[((hsi*3780+19964)*1+lsi)*1]), &(inteval->stack[((hsi*3024+16940)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+215152)*1+lsi)*1]), &(inteval->stack[((hsi*1848+44072)*1+lsi)*1]), &(inteval->stack[((hsi*1540+45920)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+29792)*1+lsi)*1]), &(inteval->stack[((hsi*4620+215152)*1+lsi)*1]), &(inteval->stack[((hsi*3780+19964)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+219772)*1+lsi)*1]), &(inteval->stack[((hsi*7560+29792)*1+lsi)*1]), &(inteval->stack[((hsi*6048+23744)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+37352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+48720)*1+lsi)*1]), &(inteval->stack[((hsi*784+49728)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+341404)*1+lsi)*1]), &(inteval->stack[((hsi*3024+16940)*1+lsi)*1]), &(inteval->stack[((hsi*2352+37352)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+346108)*1+lsi)*1]), &(inteval->stack[((hsi*6048+23744)*1+lsi)*1]), &(inteval->stack[((hsi*4704+341404)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+16940)*1+lsi)*1]), &(inteval->stack[((hsi*10080+219772)*1+lsi)*1]), &(inteval->stack[((hsi*7840+346108)*1+lsi)*1]),28);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*5544+341404)*1+lsi)*1]), &(inteval->stack[((hsi*2184+41888)*1+lsi)*1]), &(inteval->stack[((hsi*1848+44072)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+37352)*1+lsi)*1]), &(inteval->stack[((hsi*5544+341404)*1+lsi)*1]), &(inteval->stack[((hsi*4620+215152)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+341404)*1+lsi)*1]), &(inteval->stack[((hsi*9240+37352)*1+lsi)*1]), &(inteval->stack[((hsi*7560+29792)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+28700)*1+lsi)*1]), &(inteval->stack[((hsi*12600+341404)*1+lsi)*1]), &(inteval->stack[((hsi*10080+219772)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+341404)*1+lsi)*1]), &(inteval->stack[((hsi*15120+28700)*1+lsi)*1]), &(inteval->stack[((hsi*11760+16940)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*49392+357868)*1+lsi)*1]), &(inteval->stack[((hsi*21168+230272)*1+lsi)*1]), &(inteval->stack[((hsi*16464+341404)*1+lsi)*1]),588);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*98784+407260)*1+lsi)*1]), &(inteval->stack[((hsi*63504+277900)*1+lsi)*1]), &(inteval->stack[((hsi*49392+357868)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+341404)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+347344)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+354769)*1+lsi)*1]), &(inteval->stack[((hsi*7425+347344)*1+lsi)*1]), &(inteval->stack[((hsi*5940+341404)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+366649)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+215152)*1+lsi)*1]), &(inteval->stack[((hsi*9075+366649)*1+lsi)*1]), &(inteval->stack[((hsi*7425+347344)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+16940)*1+lsi)*1]), &(inteval->stack[((hsi*14850+215152)*1+lsi)*1]), &(inteval->stack[((hsi*11880+354769)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+375724)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15400)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+380344)*1+lsi)*1]), &(inteval->stack[((hsi*5940+341404)*1+lsi)*1]), &(inteval->stack[((hsi*4620+375724)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+230002)*1+lsi)*1]), &(inteval->stack[((hsi*11880+354769)*1+lsi)*1]), &(inteval->stack[((hsi*9240+380344)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+375724)*1+lsi)*1]), &(inteval->stack[((hsi*19800+16940)*1+lsi)*1]), &(inteval->stack[((hsi*15400+230002)*1+lsi)*1]),55);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*10890+341404)*1+lsi)*1]), &(inteval->stack[((hsi*4290+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+230002)*1+lsi)*1]), &(inteval->stack[((hsi*10890+341404)*1+lsi)*1]), &(inteval->stack[((hsi*9075+366649)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+341404)*1+lsi)*1]), &(inteval->stack[((hsi*18150+230002)*1+lsi)*1]), &(inteval->stack[((hsi*14850+215152)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+215152)*1+lsi)*1]), &(inteval->stack[((hsi*24750+341404)*1+lsi)*1]), &(inteval->stack[((hsi*19800+16940)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+0)*1+lsi)*1]), &(inteval->stack[((hsi*29700+215152)*1+lsi)*1]), &(inteval->stack[((hsi*23100+375724)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*79380+506044)*1+lsi)*1]), &(inteval->stack[((hsi*32340+0)*1+lsi)*1]), &(inteval->stack[((hsi*26460+251440)*1+lsi)*1]),588);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*127008+585424)*1+lsi)*1]), &(inteval->stack[((hsi*79380+506044)*1+lsi)*1]), &(inteval->stack[((hsi*63504+277900)*1+lsi)*1]),588);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*164640+50512)*1+lsi)*1]), &(inteval->stack[((hsi*127008+585424)*1+lsi)*1]), &(inteval->stack[((hsi*98784+407260)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*164640+50512)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
