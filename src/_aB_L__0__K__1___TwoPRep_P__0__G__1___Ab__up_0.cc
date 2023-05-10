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
#include <HRRPart0bra0ket0lp.h>
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
#include <_aB_L__0__K__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__K__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,28000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__K__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+100900)*1+lsi)*1]), &(inteval->stack[((hsi*2475+21880)*1+lsi)*1]), &(inteval->stack[((hsi*2025+24355)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+106975)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18910)*1+lsi)*1]), &(inteval->stack[((hsi*2475+21880)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+114400)*1+lsi)*1]), &(inteval->stack[((hsi*7425+106975)*1+lsi)*1]), &(inteval->stack[((hsi*6075+100900)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+126550)*1+lsi)*1]), &(inteval->stack[((hsi*2025+24355)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26380)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+131410)*1+lsi)*1]), &(inteval->stack[((hsi*6075+100900)*1+lsi)*1]), &(inteval->stack[((hsi*4860+126550)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+141130)*1+lsi)*1]), &(inteval->stack[((hsi*12150+114400)*1+lsi)*1]), &(inteval->stack[((hsi*9720+131410)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+126550)*1+lsi)*1]), &(inteval->stack[((hsi*3510+15400)*1+lsi)*1]), &(inteval->stack[((hsi*2970+18910)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+157330)*1+lsi)*1]), &(inteval->stack[((hsi*8910+126550)*1+lsi)*1]), &(inteval->stack[((hsi*7425+106975)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+172180)*1+lsi)*1]), &(inteval->stack[((hsi*14850+157330)*1+lsi)*1]), &(inteval->stack[((hsi*12150+114400)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+100900)*1+lsi)*1]), &(inteval->stack[((hsi*20250+172180)*1+lsi)*1]), &(inteval->stack[((hsi*16200+141130)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+15400)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+125200)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+134275)*1+lsi)*1]), &(inteval->stack[((hsi*9075+125200)*1+lsi)*1]), &(inteval->stack[((hsi*7425+15400)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+149125)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+155065)*1+lsi)*1]), &(inteval->stack[((hsi*7425+15400)*1+lsi)*1]), &(inteval->stack[((hsi*5940+149125)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+7920)*1+lsi)*1]), &(inteval->stack[((hsi*14850+134275)*1+lsi)*1]), &(inteval->stack[((hsi*11880+155065)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+149125)*1+lsi)*1]), &(inteval->stack[((hsi*4290+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+160015)*1+lsi)*1]), &(inteval->stack[((hsi*10890+149125)*1+lsi)*1]), &(inteval->stack[((hsi*9075+125200)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+178165)*1+lsi)*1]), &(inteval->stack[((hsi*18150+160015)*1+lsi)*1]), &(inteval->stack[((hsi*14850+134275)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+125200)*1+lsi)*1]), &(inteval->stack[((hsi*24750+178165)*1+lsi)*1]), &(inteval->stack[((hsi*19800+7920)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*72900+28000)*1+lsi)*1]), &(inteval->stack[((hsi*29700+125200)*1+lsi)*1]), &(inteval->stack[((hsi*24300+100900)*1+lsi)*1]),540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*72900+28000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
