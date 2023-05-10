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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
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
#include <_aB_I__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,72160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+336760)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53864)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56240)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+342700)*1+lsi)*1]), &(inteval->stack[((hsi*2808+51056)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53864)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+349828)*1+lsi)*1]), &(inteval->stack[((hsi*7128+342700)*1+lsi)*1]), &(inteval->stack[((hsi*5940+336760)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+361708)*1+lsi)*1]), &(inteval->stack[((hsi*3276+47780)*1+lsi)*1]), &(inteval->stack[((hsi*2808+51056)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+370132)*1+lsi)*1]), &(inteval->stack[((hsi*8424+361708)*1+lsi)*1]), &(inteval->stack[((hsi*7128+342700)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+384388)*1+lsi)*1]), &(inteval->stack[((hsi*14256+370132)*1+lsi)*1]), &(inteval->stack[((hsi*11880+349828)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+342700)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56240)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58220)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+404188)*1+lsi)*1]), &(inteval->stack[((hsi*5940+336760)*1+lsi)*1]), &(inteval->stack[((hsi*4860+342700)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+413908)*1+lsi)*1]), &(inteval->stack[((hsi*11880+349828)*1+lsi)*1]), &(inteval->stack[((hsi*9720+404188)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+336760)*1+lsi)*1]), &(inteval->stack[((hsi*19800+384388)*1+lsi)*1]), &(inteval->stack[((hsi*16200+413908)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+404188)*1+lsi)*1]), &(inteval->stack[((hsi*3780+44000)*1+lsi)*1]), &(inteval->stack[((hsi*3276+47780)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+414016)*1+lsi)*1]), &(inteval->stack[((hsi*9828+404188)*1+lsi)*1]), &(inteval->stack[((hsi*8424+361708)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+430864)*1+lsi)*1]), &(inteval->stack[((hsi*16848+414016)*1+lsi)*1]), &(inteval->stack[((hsi*14256+370132)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+454624)*1+lsi)*1]), &(inteval->stack[((hsi*23760+430864)*1+lsi)*1]), &(inteval->stack[((hsi*19800+384388)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+361060)*1+lsi)*1]), &(inteval->stack[((hsi*29700+454624)*1+lsi)*1]), &(inteval->stack[((hsi*24300+336760)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+336760)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36530)*1+lsi)*1]), &(inteval->stack[((hsi*2475+39500)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+344185)*1+lsi)*1]), &(inteval->stack[((hsi*3510+33020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36530)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+44000)*1+lsi)*1]), &(inteval->stack[((hsi*8910+344185)*1+lsi)*1]), &(inteval->stack[((hsi*7425+336760)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+395080)*1+lsi)*1]), &(inteval->stack[((hsi*4095+28925)*1+lsi)*1]), &(inteval->stack[((hsi*3510+33020)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+405610)*1+lsi)*1]), &(inteval->stack[((hsi*10530+395080)*1+lsi)*1]), &(inteval->stack[((hsi*8910+344185)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+423430)*1+lsi)*1]), &(inteval->stack[((hsi*17820+405610)*1+lsi)*1]), &(inteval->stack[((hsi*14850+44000)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+344185)*1+lsi)*1]), &(inteval->stack[((hsi*2475+39500)*1+lsi)*1]), &(inteval->stack[((hsi*2025+41975)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+448180)*1+lsi)*1]), &(inteval->stack[((hsi*7425+336760)*1+lsi)*1]), &(inteval->stack[((hsi*6075+344185)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+336760)*1+lsi)*1]), &(inteval->stack[((hsi*14850+44000)*1+lsi)*1]), &(inteval->stack[((hsi*12150+448180)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+448180)*1+lsi)*1]), &(inteval->stack[((hsi*24750+423430)*1+lsi)*1]), &(inteval->stack[((hsi*20250+336760)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+33020)*1+lsi)*1]), &(inteval->stack[((hsi*4725+24200)*1+lsi)*1]), &(inteval->stack[((hsi*4095+28925)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+336760)*1+lsi)*1]), &(inteval->stack[((hsi*12285+33020)*1+lsi)*1]), &(inteval->stack[((hsi*10530+395080)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+24200)*1+lsi)*1]), &(inteval->stack[((hsi*21060+336760)*1+lsi)*1]), &(inteval->stack[((hsi*17820+405610)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+478555)*1+lsi)*1]), &(inteval->stack[((hsi*29700+24200)*1+lsi)*1]), &(inteval->stack[((hsi*24750+423430)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+395080)*1+lsi)*1]), &(inteval->stack[((hsi*37125+478555)*1+lsi)*1]), &(inteval->stack[((hsi*30375+448180)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*102060+437605)*1+lsi)*1]), &(inteval->stack[((hsi*42525+395080)*1+lsi)*1]), &(inteval->stack[((hsi*34020+361060)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+24200)*1+lsi)*1]), &(inteval->stack[((hsi*1848+67512)*1+lsi)*1]), &(inteval->stack[((hsi*1540+69360)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+28820)*1+lsi)*1]), &(inteval->stack[((hsi*2184+65328)*1+lsi)*1]), &(inteval->stack[((hsi*1848+67512)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+34364)*1+lsi)*1]), &(inteval->stack[((hsi*5544+28820)*1+lsi)*1]), &(inteval->stack[((hsi*4620+24200)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+336760)*1+lsi)*1]), &(inteval->stack[((hsi*2548+62780)*1+lsi)*1]), &(inteval->stack[((hsi*2184+65328)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+343312)*1+lsi)*1]), &(inteval->stack[((hsi*6552+336760)*1+lsi)*1]), &(inteval->stack[((hsi*5544+28820)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+43604)*1+lsi)*1]), &(inteval->stack[((hsi*11088+343312)*1+lsi)*1]), &(inteval->stack[((hsi*9240+34364)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+354400)*1+lsi)*1]), &(inteval->stack[((hsi*1540+69360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+70900)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+539665)*1+lsi)*1]), &(inteval->stack[((hsi*4620+24200)*1+lsi)*1]), &(inteval->stack[((hsi*3780+354400)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+547225)*1+lsi)*1]), &(inteval->stack[((hsi*9240+34364)*1+lsi)*1]), &(inteval->stack[((hsi*7560+539665)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+24200)*1+lsi)*1]), &(inteval->stack[((hsi*15400+43604)*1+lsi)*1]), &(inteval->stack[((hsi*12600+547225)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+539665)*1+lsi)*1]), &(inteval->stack[((hsi*2940+59840)*1+lsi)*1]), &(inteval->stack[((hsi*2548+62780)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+59004)*1+lsi)*1]), &(inteval->stack[((hsi*7644+539665)*1+lsi)*1]), &(inteval->stack[((hsi*6552+336760)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+539665)*1+lsi)*1]), &(inteval->stack[((hsi*13104+59004)*1+lsi)*1]), &(inteval->stack[((hsi*11088+343312)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+336760)*1+lsi)*1]), &(inteval->stack[((hsi*18480+539665)*1+lsi)*1]), &(inteval->stack[((hsi*15400+43604)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+43100)*1+lsi)*1]), &(inteval->stack[((hsi*23100+336760)*1+lsi)*1]), &(inteval->stack[((hsi*18900+24200)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*79380+539665)*1+lsi)*1]), &(inteval->stack[((hsi*34020+361060)*1+lsi)*1]), &(inteval->stack[((hsi*26460+43100)*1+lsi)*1]),945);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*158760+619045)*1+lsi)*1]), &(inteval->stack[((hsi*102060+437605)*1+lsi)*1]), &(inteval->stack[((hsi*79380+539665)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+539665)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+548740)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+559630)*1+lsi)*1]), &(inteval->stack[((hsi*10890+548740)*1+lsi)*1]), &(inteval->stack[((hsi*9075+539665)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+336760)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+24200)*1+lsi)*1]), &(inteval->stack[((hsi*12870+336760)*1+lsi)*1]), &(inteval->stack[((hsi*10890+548740)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+349630)*1+lsi)*1]), &(inteval->stack[((hsi*21780+24200)*1+lsi)*1]), &(inteval->stack[((hsi*18150+559630)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+577780)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]), &(inteval->stack[((hsi*2475+21725)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+585205)*1+lsi)*1]), &(inteval->stack[((hsi*9075+539665)*1+lsi)*1]), &(inteval->stack[((hsi*7425+577780)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+45980)*1+lsi)*1]), &(inteval->stack[((hsi*18150+559630)*1+lsi)*1]), &(inteval->stack[((hsi*14850+585205)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+539665)*1+lsi)*1]), &(inteval->stack[((hsi*30250+349630)*1+lsi)*1]), &(inteval->stack[((hsi*24750+45980)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+576790)*1+lsi)*1]), &(inteval->stack[((hsi*5775+0)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+591805)*1+lsi)*1]), &(inteval->stack[((hsi*15015+576790)*1+lsi)*1]), &(inteval->stack[((hsi*12870+336760)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+777805)*1+lsi)*1]), &(inteval->stack[((hsi*25740+591805)*1+lsi)*1]), &(inteval->stack[((hsi*21780+24200)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+0)*1+lsi)*1]), &(inteval->stack[((hsi*36300+777805)*1+lsi)*1]), &(inteval->stack[((hsi*30250+349630)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+336760)*1+lsi)*1]), &(inteval->stack[((hsi*45375+0)*1+lsi)*1]), &(inteval->stack[((hsi*37125+539665)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*127575+777805)*1+lsi)*1]), &(inteval->stack[((hsi*51975+336760)*1+lsi)*1]), &(inteval->stack[((hsi*42525+395080)*1+lsi)*1]),945);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*204120+905380)*1+lsi)*1]), &(inteval->stack[((hsi*127575+777805)*1+lsi)*1]), &(inteval->stack[((hsi*102060+437605)*1+lsi)*1]),945);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*264600+72160)*1+lsi)*1]), &(inteval->stack[((hsi*204120+905380)*1+lsi)*1]), &(inteval->stack[((hsi*158760+619045)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*264600+72160)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
