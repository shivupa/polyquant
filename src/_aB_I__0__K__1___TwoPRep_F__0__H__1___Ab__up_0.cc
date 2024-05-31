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
#include <_aB_I__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__K__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,60844)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+272524)*1+lsi)*1]), &(inteval->stack[((hsi*1980+45560)*1+lsi)*1]), &(inteval->stack[((hsi*1620+47540)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+277384)*1+lsi)*1]), &(inteval->stack[((hsi*2376+43184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+45560)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+283324)*1+lsi)*1]), &(inteval->stack[((hsi*5940+277384)*1+lsi)*1]), &(inteval->stack[((hsi*4860+272524)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+293044)*1+lsi)*1]), &(inteval->stack[((hsi*2808+40376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+43184)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+300172)*1+lsi)*1]), &(inteval->stack[((hsi*7128+293044)*1+lsi)*1]), &(inteval->stack[((hsi*5940+277384)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+312052)*1+lsi)*1]), &(inteval->stack[((hsi*11880+300172)*1+lsi)*1]), &(inteval->stack[((hsi*9720+283324)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+277384)*1+lsi)*1]), &(inteval->stack[((hsi*1620+47540)*1+lsi)*1]), &(inteval->stack[((hsi*1296+49160)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+328252)*1+lsi)*1]), &(inteval->stack[((hsi*4860+272524)*1+lsi)*1]), &(inteval->stack[((hsi*3888+277384)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+336028)*1+lsi)*1]), &(inteval->stack[((hsi*9720+283324)*1+lsi)*1]), &(inteval->stack[((hsi*7776+328252)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+272524)*1+lsi)*1]), &(inteval->stack[((hsi*16200+312052)*1+lsi)*1]), &(inteval->stack[((hsi*12960+336028)*1+lsi)*1]),36);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*8424+328252)*1+lsi)*1]), &(inteval->stack[((hsi*3276+37100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+40376)*1+lsi)*1]),36);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*14256+336676)*1+lsi)*1]), &(inteval->stack[((hsi*8424+328252)*1+lsi)*1]), &(inteval->stack[((hsi*7128+293044)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+350932)*1+lsi)*1]), &(inteval->stack[((hsi*14256+336676)*1+lsi)*1]), &(inteval->stack[((hsi*11880+300172)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+370732)*1+lsi)*1]), &(inteval->stack[((hsi*19800+350932)*1+lsi)*1]), &(inteval->stack[((hsi*16200+312052)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+291964)*1+lsi)*1]), &(inteval->stack[((hsi*24300+370732)*1+lsi)*1]), &(inteval->stack[((hsi*19440+272524)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+272524)*1+lsi)*1]), &(inteval->stack[((hsi*2475+30980)*1+lsi)*1]), &(inteval->stack[((hsi*2025+33455)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+278599)*1+lsi)*1]), &(inteval->stack[((hsi*2970+28010)*1+lsi)*1]), &(inteval->stack[((hsi*2475+30980)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+37100)*1+lsi)*1]), &(inteval->stack[((hsi*7425+278599)*1+lsi)*1]), &(inteval->stack[((hsi*6075+272524)*1+lsi)*1]),45);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*8910+319180)*1+lsi)*1]), &(inteval->stack[((hsi*3510+24500)*1+lsi)*1]), &(inteval->stack[((hsi*2970+28010)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+328090)*1+lsi)*1]), &(inteval->stack[((hsi*8910+319180)*1+lsi)*1]), &(inteval->stack[((hsi*7425+278599)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+342940)*1+lsi)*1]), &(inteval->stack[((hsi*14850+328090)*1+lsi)*1]), &(inteval->stack[((hsi*12150+37100)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+278599)*1+lsi)*1]), &(inteval->stack[((hsi*2025+33455)*1+lsi)*1]), &(inteval->stack[((hsi*1620+35480)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+363190)*1+lsi)*1]), &(inteval->stack[((hsi*6075+272524)*1+lsi)*1]), &(inteval->stack[((hsi*4860+278599)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+272524)*1+lsi)*1]), &(inteval->stack[((hsi*12150+37100)*1+lsi)*1]), &(inteval->stack[((hsi*9720+363190)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+363190)*1+lsi)*1]), &(inteval->stack[((hsi*20250+342940)*1+lsi)*1]), &(inteval->stack[((hsi*16200+272524)*1+lsi)*1]),45);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*10530+28010)*1+lsi)*1]), &(inteval->stack[((hsi*4095+20405)*1+lsi)*1]), &(inteval->stack[((hsi*3510+24500)*1+lsi)*1]),45);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*17820+272524)*1+lsi)*1]), &(inteval->stack[((hsi*10530+28010)*1+lsi)*1]), &(inteval->stack[((hsi*8910+319180)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+20405)*1+lsi)*1]), &(inteval->stack[((hsi*17820+272524)*1+lsi)*1]), &(inteval->stack[((hsi*14850+328090)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+387490)*1+lsi)*1]), &(inteval->stack[((hsi*24750+20405)*1+lsi)*1]), &(inteval->stack[((hsi*20250+342940)*1+lsi)*1]),45);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*34020+319180)*1+lsi)*1]), &(inteval->stack[((hsi*30375+387490)*1+lsi)*1]), &(inteval->stack[((hsi*24300+363190)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*81648+353200)*1+lsi)*1]), &(inteval->stack[((hsi*34020+319180)*1+lsi)*1]), &(inteval->stack[((hsi*27216+291964)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+20405)*1+lsi)*1]), &(inteval->stack[((hsi*1540+57036)*1+lsi)*1]), &(inteval->stack[((hsi*1260+58576)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+24185)*1+lsi)*1]), &(inteval->stack[((hsi*1848+55188)*1+lsi)*1]), &(inteval->stack[((hsi*1540+57036)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+28805)*1+lsi)*1]), &(inteval->stack[((hsi*4620+24185)*1+lsi)*1]), &(inteval->stack[((hsi*3780+20405)*1+lsi)*1]),28);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*5544+272524)*1+lsi)*1]), &(inteval->stack[((hsi*2184+53004)*1+lsi)*1]), &(inteval->stack[((hsi*1848+55188)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+36365)*1+lsi)*1]), &(inteval->stack[((hsi*5544+272524)*1+lsi)*1]), &(inteval->stack[((hsi*4620+24185)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+278068)*1+lsi)*1]), &(inteval->stack[((hsi*9240+36365)*1+lsi)*1]), &(inteval->stack[((hsi*7560+28805)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+45605)*1+lsi)*1]), &(inteval->stack[((hsi*1260+58576)*1+lsi)*1]), &(inteval->stack[((hsi*1008+59836)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+434848)*1+lsi)*1]), &(inteval->stack[((hsi*3780+20405)*1+lsi)*1]), &(inteval->stack[((hsi*3024+45605)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+440896)*1+lsi)*1]), &(inteval->stack[((hsi*7560+28805)*1+lsi)*1]), &(inteval->stack[((hsi*6048+434848)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+20405)*1+lsi)*1]), &(inteval->stack[((hsi*12600+278068)*1+lsi)*1]), &(inteval->stack[((hsi*10080+440896)*1+lsi)*1]),28);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*6552+434848)*1+lsi)*1]), &(inteval->stack[((hsi*2548+50456)*1+lsi)*1]), &(inteval->stack[((hsi*2184+53004)*1+lsi)*1]),28);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*11088+45605)*1+lsi)*1]), &(inteval->stack[((hsi*6552+434848)*1+lsi)*1]), &(inteval->stack[((hsi*5544+272524)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+434848)*1+lsi)*1]), &(inteval->stack[((hsi*11088+45605)*1+lsi)*1]), &(inteval->stack[((hsi*9240+36365)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+35525)*1+lsi)*1]), &(inteval->stack[((hsi*15400+434848)*1+lsi)*1]), &(inteval->stack[((hsi*12600+278068)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+434848)*1+lsi)*1]), &(inteval->stack[((hsi*18900+35525)*1+lsi)*1]), &(inteval->stack[((hsi*15120+20405)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*63504+456016)*1+lsi)*1]), &(inteval->stack[((hsi*27216+291964)*1+lsi)*1]), &(inteval->stack[((hsi*21168+434848)*1+lsi)*1]),756);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*127008+519520)*1+lsi)*1]), &(inteval->stack[((hsi*81648+353200)*1+lsi)*1]), &(inteval->stack[((hsi*63504+456016)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+434848)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15950)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+442273)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]), &(inteval->stack[((hsi*3025+12925)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+451348)*1+lsi)*1]), &(inteval->stack[((hsi*9075+442273)*1+lsi)*1]), &(inteval->stack[((hsi*7425+434848)*1+lsi)*1]),55);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*10890+466198)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9295)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+272524)*1+lsi)*1]), &(inteval->stack[((hsi*10890+466198)*1+lsi)*1]), &(inteval->stack[((hsi*9075+442273)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+477088)*1+lsi)*1]), &(inteval->stack[((hsi*18150+272524)*1+lsi)*1]), &(inteval->stack[((hsi*14850+451348)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+20405)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15950)*1+lsi)*1]), &(inteval->stack[((hsi*1980+18425)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+26345)*1+lsi)*1]), &(inteval->stack[((hsi*7425+434848)*1+lsi)*1]), &(inteval->stack[((hsi*5940+20405)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+290674)*1+lsi)*1]), &(inteval->stack[((hsi*14850+451348)*1+lsi)*1]), &(inteval->stack[((hsi*11880+26345)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+9295)*1+lsi)*1]), &(inteval->stack[((hsi*24750+477088)*1+lsi)*1]), &(inteval->stack[((hsi*19800+290674)*1+lsi)*1]),55);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*12870+434848)*1+lsi)*1]), &(inteval->stack[((hsi*5005+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5005)*1+lsi)*1]),55);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*21780+290674)*1+lsi)*1]), &(inteval->stack[((hsi*12870+434848)*1+lsi)*1]), &(inteval->stack[((hsi*10890+466198)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+434848)*1+lsi)*1]), &(inteval->stack[((hsi*21780+290674)*1+lsi)*1]), &(inteval->stack[((hsi*18150+272524)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+272524)*1+lsi)*1]), &(inteval->stack[((hsi*30250+434848)*1+lsi)*1]), &(inteval->stack[((hsi*24750+477088)*1+lsi)*1]),55);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*41580+434848)*1+lsi)*1]), &(inteval->stack[((hsi*37125+272524)*1+lsi)*1]), &(inteval->stack[((hsi*29700+9295)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*102060+646528)*1+lsi)*1]), &(inteval->stack[((hsi*41580+434848)*1+lsi)*1]), &(inteval->stack[((hsi*34020+319180)*1+lsi)*1]),756);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*163296+748588)*1+lsi)*1]), &(inteval->stack[((hsi*102060+646528)*1+lsi)*1]), &(inteval->stack[((hsi*81648+353200)*1+lsi)*1]),756);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*211680+60844)*1+lsi)*1]), &(inteval->stack[((hsi*163296+748588)*1+lsi)*1]), &(inteval->stack[((hsi*127008+519520)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*211680+60844)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
