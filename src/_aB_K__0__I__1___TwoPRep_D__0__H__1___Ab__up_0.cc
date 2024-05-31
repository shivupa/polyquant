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
#include <_aB_K__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__I__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,41888)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+168896)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25895)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27920)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+173756)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23420)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25895)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+179831)*1+lsi)*1]), &(inteval->stack[((hsi*6075+173756)*1+lsi)*1]), &(inteval->stack[((hsi*4860+168896)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+189551)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20450)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23420)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+196976)*1+lsi)*1]), &(inteval->stack[((hsi*7425+189551)*1+lsi)*1]), &(inteval->stack[((hsi*6075+173756)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+209126)*1+lsi)*1]), &(inteval->stack[((hsi*12150+196976)*1+lsi)*1]), &(inteval->stack[((hsi*9720+179831)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+173756)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29540)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+225326)*1+lsi)*1]), &(inteval->stack[((hsi*4860+168896)*1+lsi)*1]), &(inteval->stack[((hsi*3780+173756)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+232886)*1+lsi)*1]), &(inteval->stack[((hsi*9720+179831)*1+lsi)*1]), &(inteval->stack[((hsi*7560+225326)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+168896)*1+lsi)*1]), &(inteval->stack[((hsi*16200+209126)*1+lsi)*1]), &(inteval->stack[((hsi*12600+232886)*1+lsi)*1]),45);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*8910+225326)*1+lsi)*1]), &(inteval->stack[((hsi*3510+16940)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20450)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+234236)*1+lsi)*1]), &(inteval->stack[((hsi*8910+225326)*1+lsi)*1]), &(inteval->stack[((hsi*7425+189551)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+249086)*1+lsi)*1]), &(inteval->stack[((hsi*14850+234236)*1+lsi)*1]), &(inteval->stack[((hsi*12150+196976)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+269336)*1+lsi)*1]), &(inteval->stack[((hsi*20250+249086)*1+lsi)*1]), &(inteval->stack[((hsi*16200+209126)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+187796)*1+lsi)*1]), &(inteval->stack[((hsi*24300+269336)*1+lsi)*1]), &(inteval->stack[((hsi*18900+168896)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+168896)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37964)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39584)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+172784)*1+lsi)*1]), &(inteval->stack[((hsi*1980+35984)*1+lsi)*1]), &(inteval->stack[((hsi*1620+37964)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+16940)*1+lsi)*1]), &(inteval->stack[((hsi*4860+172784)*1+lsi)*1]), &(inteval->stack[((hsi*3888+168896)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+177644)*1+lsi)*1]), &(inteval->stack[((hsi*2376+33608)*1+lsi)*1]), &(inteval->stack[((hsi*1980+35984)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+214256)*1+lsi)*1]), &(inteval->stack[((hsi*5940+177644)*1+lsi)*1]), &(inteval->stack[((hsi*4860+172784)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+223976)*1+lsi)*1]), &(inteval->stack[((hsi*9720+214256)*1+lsi)*1]), &(inteval->stack[((hsi*7776+16940)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+24716)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39584)*1+lsi)*1]), &(inteval->stack[((hsi*1008+40880)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+236936)*1+lsi)*1]), &(inteval->stack[((hsi*3888+168896)*1+lsi)*1]), &(inteval->stack[((hsi*3024+24716)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+242984)*1+lsi)*1]), &(inteval->stack[((hsi*7776+16940)*1+lsi)*1]), &(inteval->stack[((hsi*6048+236936)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+253064)*1+lsi)*1]), &(inteval->stack[((hsi*12960+223976)*1+lsi)*1]), &(inteval->stack[((hsi*10080+242984)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+236936)*1+lsi)*1]), &(inteval->stack[((hsi*2808+30800)*1+lsi)*1]), &(inteval->stack[((hsi*2376+33608)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+16940)*1+lsi)*1]), &(inteval->stack[((hsi*7128+236936)*1+lsi)*1]), &(inteval->stack[((hsi*5940+177644)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+168896)*1+lsi)*1]), &(inteval->stack[((hsi*11880+16940)*1+lsi)*1]), &(inteval->stack[((hsi*9720+214256)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+16940)*1+lsi)*1]), &(inteval->stack[((hsi*16200+168896)*1+lsi)*1]), &(inteval->stack[((hsi*12960+223976)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+214256)*1+lsi)*1]), &(inteval->stack[((hsi*19440+16940)*1+lsi)*1]), &(inteval->stack[((hsi*15120+253064)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*63504+235424)*1+lsi)*1]), &(inteval->stack[((hsi*26460+187796)*1+lsi)*1]), &(inteval->stack[((hsi*21168+214256)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+16940)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+214256)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+22880)*1+lsi)*1]), &(inteval->stack[((hsi*7425+214256)*1+lsi)*1]), &(inteval->stack[((hsi*5940+16940)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+168896)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+298928)*1+lsi)*1]), &(inteval->stack[((hsi*9075+168896)*1+lsi)*1]), &(inteval->stack[((hsi*7425+214256)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+214256)*1+lsi)*1]), &(inteval->stack[((hsi*14850+298928)*1+lsi)*1]), &(inteval->stack[((hsi*11880+22880)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+177971)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15400)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+313778)*1+lsi)*1]), &(inteval->stack[((hsi*5940+16940)*1+lsi)*1]), &(inteval->stack[((hsi*4620+177971)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+323018)*1+lsi)*1]), &(inteval->stack[((hsi*11880+22880)*1+lsi)*1]), &(inteval->stack[((hsi*9240+313778)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+7920)*1+lsi)*1]), &(inteval->stack[((hsi*19800+214256)*1+lsi)*1]), &(inteval->stack[((hsi*15400+323018)*1+lsi)*1]),55);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*10890+313778)*1+lsi)*1]), &(inteval->stack[((hsi*4290+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+324668)*1+lsi)*1]), &(inteval->stack[((hsi*10890+313778)*1+lsi)*1]), &(inteval->stack[((hsi*9075+168896)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+342818)*1+lsi)*1]), &(inteval->stack[((hsi*18150+324668)*1+lsi)*1]), &(inteval->stack[((hsi*14850+298928)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+298928)*1+lsi)*1]), &(inteval->stack[((hsi*24750+342818)*1+lsi)*1]), &(inteval->stack[((hsi*19800+214256)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+328628)*1+lsi)*1]), &(inteval->stack[((hsi*29700+298928)*1+lsi)*1]), &(inteval->stack[((hsi*23100+7920)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*79380+360968)*1+lsi)*1]), &(inteval->stack[((hsi*32340+328628)*1+lsi)*1]), &(inteval->stack[((hsi*26460+187796)*1+lsi)*1]),588);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*127008+41888)*1+lsi)*1]), &(inteval->stack[((hsi*79380+360968)*1+lsi)*1]), &(inteval->stack[((hsi*63504+235424)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*127008+41888)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
