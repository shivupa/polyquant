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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_K__0__I__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__I__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,62216)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__I__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+273896)*1+lsi)*1]), &(inteval->stack[((hsi*2025+46223)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48248)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+278756)*1+lsi)*1]), &(inteval->stack[((hsi*2475+43748)*1+lsi)*1]), &(inteval->stack[((hsi*2025+46223)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+284831)*1+lsi)*1]), &(inteval->stack[((hsi*6075+278756)*1+lsi)*1]), &(inteval->stack[((hsi*4860+273896)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+294551)*1+lsi)*1]), &(inteval->stack[((hsi*2970+40778)*1+lsi)*1]), &(inteval->stack[((hsi*2475+43748)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+301976)*1+lsi)*1]), &(inteval->stack[((hsi*7425+294551)*1+lsi)*1]), &(inteval->stack[((hsi*6075+278756)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+314126)*1+lsi)*1]), &(inteval->stack[((hsi*12150+301976)*1+lsi)*1]), &(inteval->stack[((hsi*9720+284831)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+278756)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48248)*1+lsi)*1]), &(inteval->stack[((hsi*1260+49868)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+330326)*1+lsi)*1]), &(inteval->stack[((hsi*4860+273896)*1+lsi)*1]), &(inteval->stack[((hsi*3780+278756)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+337886)*1+lsi)*1]), &(inteval->stack[((hsi*9720+284831)*1+lsi)*1]), &(inteval->stack[((hsi*7560+330326)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+273896)*1+lsi)*1]), &(inteval->stack[((hsi*16200+314126)*1+lsi)*1]), &(inteval->stack[((hsi*12600+337886)*1+lsi)*1]),45);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*8910+330326)*1+lsi)*1]), &(inteval->stack[((hsi*3510+37268)*1+lsi)*1]), &(inteval->stack[((hsi*2970+40778)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+339236)*1+lsi)*1]), &(inteval->stack[((hsi*8910+330326)*1+lsi)*1]), &(inteval->stack[((hsi*7425+294551)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+354086)*1+lsi)*1]), &(inteval->stack[((hsi*14850+339236)*1+lsi)*1]), &(inteval->stack[((hsi*12150+301976)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+374336)*1+lsi)*1]), &(inteval->stack[((hsi*20250+354086)*1+lsi)*1]), &(inteval->stack[((hsi*16200+314126)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+292796)*1+lsi)*1]), &(inteval->stack[((hsi*24300+374336)*1+lsi)*1]), &(inteval->stack[((hsi*18900+273896)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+273896)*1+lsi)*1]), &(inteval->stack[((hsi*2475+31273)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33748)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+37268)*1+lsi)*1]), &(inteval->stack[((hsi*3025+28248)*1+lsi)*1]), &(inteval->stack[((hsi*2475+31273)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+279836)*1+lsi)*1]), &(inteval->stack[((hsi*7425+37268)*1+lsi)*1]), &(inteval->stack[((hsi*5940+273896)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+319256)*1+lsi)*1]), &(inteval->stack[((hsi*3630+24618)*1+lsi)*1]), &(inteval->stack[((hsi*3025+28248)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+328331)*1+lsi)*1]), &(inteval->stack[((hsi*9075+319256)*1+lsi)*1]), &(inteval->stack[((hsi*7425+37268)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+343181)*1+lsi)*1]), &(inteval->stack[((hsi*14850+328331)*1+lsi)*1]), &(inteval->stack[((hsi*11880+279836)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+37268)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33748)*1+lsi)*1]), &(inteval->stack[((hsi*1540+35728)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+41888)*1+lsi)*1]), &(inteval->stack[((hsi*5940+273896)*1+lsi)*1]), &(inteval->stack[((hsi*4620+37268)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+362981)*1+lsi)*1]), &(inteval->stack[((hsi*11880+279836)*1+lsi)*1]), &(inteval->stack[((hsi*9240+41888)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+378381)*1+lsi)*1]), &(inteval->stack[((hsi*19800+343181)*1+lsi)*1]), &(inteval->stack[((hsi*15400+362981)*1+lsi)*1]),55);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*10890+28248)*1+lsi)*1]), &(inteval->stack[((hsi*4290+20328)*1+lsi)*1]), &(inteval->stack[((hsi*3630+24618)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+273896)*1+lsi)*1]), &(inteval->stack[((hsi*10890+28248)*1+lsi)*1]), &(inteval->stack[((hsi*9075+319256)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+20328)*1+lsi)*1]), &(inteval->stack[((hsi*18150+273896)*1+lsi)*1]), &(inteval->stack[((hsi*14850+328331)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+401481)*1+lsi)*1]), &(inteval->stack[((hsi*24750+20328)*1+lsi)*1]), &(inteval->stack[((hsi*19800+343181)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+319256)*1+lsi)*1]), &(inteval->stack[((hsi*29700+401481)*1+lsi)*1]), &(inteval->stack[((hsi*23100+378381)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*79380+351596)*1+lsi)*1]), &(inteval->stack[((hsi*32340+319256)*1+lsi)*1]), &(inteval->stack[((hsi*26460+292796)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+20328)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58292)*1+lsi)*1]), &(inteval->stack[((hsi*1296+59912)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+24216)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56312)*1+lsi)*1]), &(inteval->stack[((hsi*1620+58292)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+29076)*1+lsi)*1]), &(inteval->stack[((hsi*4860+24216)*1+lsi)*1]), &(inteval->stack[((hsi*3888+20328)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+273896)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53936)*1+lsi)*1]), &(inteval->stack[((hsi*1980+56312)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+36852)*1+lsi)*1]), &(inteval->stack[((hsi*5940+273896)*1+lsi)*1]), &(inteval->stack[((hsi*4860+24216)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+279836)*1+lsi)*1]), &(inteval->stack[((hsi*9720+36852)*1+lsi)*1]), &(inteval->stack[((hsi*7776+29076)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+24216)*1+lsi)*1]), &(inteval->stack[((hsi*1296+59912)*1+lsi)*1]), &(inteval->stack[((hsi*1008+61208)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+430976)*1+lsi)*1]), &(inteval->stack[((hsi*3888+20328)*1+lsi)*1]), &(inteval->stack[((hsi*3024+24216)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+437024)*1+lsi)*1]), &(inteval->stack[((hsi*7776+29076)*1+lsi)*1]), &(inteval->stack[((hsi*6048+430976)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+20328)*1+lsi)*1]), &(inteval->stack[((hsi*12960+279836)*1+lsi)*1]), &(inteval->stack[((hsi*10080+437024)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+430976)*1+lsi)*1]), &(inteval->stack[((hsi*2808+51128)*1+lsi)*1]), &(inteval->stack[((hsi*2376+53936)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+46572)*1+lsi)*1]), &(inteval->stack[((hsi*7128+430976)*1+lsi)*1]), &(inteval->stack[((hsi*5940+273896)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+430976)*1+lsi)*1]), &(inteval->stack[((hsi*11880+46572)*1+lsi)*1]), &(inteval->stack[((hsi*9720+36852)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+35448)*1+lsi)*1]), &(inteval->stack[((hsi*16200+430976)*1+lsi)*1]), &(inteval->stack[((hsi*12960+279836)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+430976)*1+lsi)*1]), &(inteval->stack[((hsi*19440+35448)*1+lsi)*1]), &(inteval->stack[((hsi*15120+20328)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*63504+452144)*1+lsi)*1]), &(inteval->stack[((hsi*26460+292796)*1+lsi)*1]), &(inteval->stack[((hsi*21168+430976)*1+lsi)*1]),588);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*127008+515648)*1+lsi)*1]), &(inteval->stack[((hsi*79380+351596)*1+lsi)*1]), &(inteval->stack[((hsi*63504+452144)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+430976)*1+lsi)*1]), &(inteval->stack[((hsi*2970+13134)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16104)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+438104)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9504)*1+lsi)*1]), &(inteval->stack[((hsi*2970+13134)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+447014)*1+lsi)*1]), &(inteval->stack[((hsi*8910+438104)*1+lsi)*1]), &(inteval->stack[((hsi*7128+430976)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+461270)*1+lsi)*1]), &(inteval->stack[((hsi*4356+5148)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9504)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+273896)*1+lsi)*1]), &(inteval->stack[((hsi*10890+461270)*1+lsi)*1]), &(inteval->stack[((hsi*8910+438104)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+472160)*1+lsi)*1]), &(inteval->stack[((hsi*17820+273896)*1+lsi)*1]), &(inteval->stack[((hsi*14256+447014)*1+lsi)*1]),66);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+20328)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16104)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18480)*1+lsi)*1]),66);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*11088+25872)*1+lsi)*1]), &(inteval->stack[((hsi*7128+430976)*1+lsi)*1]), &(inteval->stack[((hsi*5544+20328)*1+lsi)*1]),66);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*18480+291716)*1+lsi)*1]), &(inteval->stack[((hsi*14256+447014)*1+lsi)*1]), &(inteval->stack[((hsi*11088+25872)*1+lsi)*1]),66);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+9504)*1+lsi)*1]), &(inteval->stack[((hsi*23760+472160)*1+lsi)*1]), &(inteval->stack[((hsi*18480+291716)*1+lsi)*1]),66);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*13068+430976)*1+lsi)*1]), &(inteval->stack[((hsi*5148+0)*1+lsi)*1]), &(inteval->stack[((hsi*4356+5148)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+291716)*1+lsi)*1]), &(inteval->stack[((hsi*13068+430976)*1+lsi)*1]), &(inteval->stack[((hsi*10890+461270)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+430976)*1+lsi)*1]), &(inteval->stack[((hsi*21780+291716)*1+lsi)*1]), &(inteval->stack[((hsi*17820+273896)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+273896)*1+lsi)*1]), &(inteval->stack[((hsi*29700+430976)*1+lsi)*1]), &(inteval->stack[((hsi*23760+472160)*1+lsi)*1]),66);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*38808+430976)*1+lsi)*1]), &(inteval->stack[((hsi*35640+273896)*1+lsi)*1]), &(inteval->stack[((hsi*27720+9504)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*97020+642656)*1+lsi)*1]), &(inteval->stack[((hsi*38808+430976)*1+lsi)*1]), &(inteval->stack[((hsi*32340+319256)*1+lsi)*1]),588);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*158760+739676)*1+lsi)*1]), &(inteval->stack[((hsi*97020+642656)*1+lsi)*1]), &(inteval->stack[((hsi*79380+351596)*1+lsi)*1]),588);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*211680+62216)*1+lsi)*1]), &(inteval->stack[((hsi*158760+739676)*1+lsi)*1]), &(inteval->stack[((hsi*127008+515648)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*211680+62216)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
