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
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__I__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,51128)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+209888)*1+lsi)*1]), &(inteval->stack[((hsi*2475+31273)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33748)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+215828)*1+lsi)*1]), &(inteval->stack[((hsi*3025+28248)*1+lsi)*1]), &(inteval->stack[((hsi*2475+31273)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+223253)*1+lsi)*1]), &(inteval->stack[((hsi*7425+215828)*1+lsi)*1]), &(inteval->stack[((hsi*5940+209888)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+235133)*1+lsi)*1]), &(inteval->stack[((hsi*3630+24618)*1+lsi)*1]), &(inteval->stack[((hsi*3025+28248)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+244208)*1+lsi)*1]), &(inteval->stack[((hsi*9075+235133)*1+lsi)*1]), &(inteval->stack[((hsi*7425+215828)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+259058)*1+lsi)*1]), &(inteval->stack[((hsi*14850+244208)*1+lsi)*1]), &(inteval->stack[((hsi*11880+223253)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+215828)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33748)*1+lsi)*1]), &(inteval->stack[((hsi*1540+35728)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+278858)*1+lsi)*1]), &(inteval->stack[((hsi*5940+209888)*1+lsi)*1]), &(inteval->stack[((hsi*4620+215828)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+288098)*1+lsi)*1]), &(inteval->stack[((hsi*11880+223253)*1+lsi)*1]), &(inteval->stack[((hsi*9240+278858)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+209888)*1+lsi)*1]), &(inteval->stack[((hsi*19800+259058)*1+lsi)*1]), &(inteval->stack[((hsi*15400+288098)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+278858)*1+lsi)*1]), &(inteval->stack[((hsi*4290+20328)*1+lsi)*1]), &(inteval->stack[((hsi*3630+24618)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+289748)*1+lsi)*1]), &(inteval->stack[((hsi*10890+278858)*1+lsi)*1]), &(inteval->stack[((hsi*9075+235133)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+307898)*1+lsi)*1]), &(inteval->stack[((hsi*18150+289748)*1+lsi)*1]), &(inteval->stack[((hsi*14850+244208)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+332648)*1+lsi)*1]), &(inteval->stack[((hsi*24750+307898)*1+lsi)*1]), &(inteval->stack[((hsi*19800+259058)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+232988)*1+lsi)*1]), &(inteval->stack[((hsi*29700+332648)*1+lsi)*1]), &(inteval->stack[((hsi*23100+209888)*1+lsi)*1]),55);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+209888)*1+lsi)*1]), &(inteval->stack[((hsi*2025+46223)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48248)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+214748)*1+lsi)*1]), &(inteval->stack[((hsi*2475+43748)*1+lsi)*1]), &(inteval->stack[((hsi*2025+46223)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+20328)*1+lsi)*1]), &(inteval->stack[((hsi*6075+214748)*1+lsi)*1]), &(inteval->stack[((hsi*4860+209888)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+220823)*1+lsi)*1]), &(inteval->stack[((hsi*2970+40778)*1+lsi)*1]), &(inteval->stack[((hsi*2475+43748)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+265328)*1+lsi)*1]), &(inteval->stack[((hsi*7425+220823)*1+lsi)*1]), &(inteval->stack[((hsi*6075+214748)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+277478)*1+lsi)*1]), &(inteval->stack[((hsi*12150+265328)*1+lsi)*1]), &(inteval->stack[((hsi*9720+20328)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+30048)*1+lsi)*1]), &(inteval->stack[((hsi*1620+48248)*1+lsi)*1]), &(inteval->stack[((hsi*1260+49868)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+293678)*1+lsi)*1]), &(inteval->stack[((hsi*4860+209888)*1+lsi)*1]), &(inteval->stack[((hsi*3780+30048)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+301238)*1+lsi)*1]), &(inteval->stack[((hsi*9720+20328)*1+lsi)*1]), &(inteval->stack[((hsi*7560+293678)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+313838)*1+lsi)*1]), &(inteval->stack[((hsi*16200+277478)*1+lsi)*1]), &(inteval->stack[((hsi*12600+301238)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+293678)*1+lsi)*1]), &(inteval->stack[((hsi*3510+37268)*1+lsi)*1]), &(inteval->stack[((hsi*2970+40778)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+20328)*1+lsi)*1]), &(inteval->stack[((hsi*8910+293678)*1+lsi)*1]), &(inteval->stack[((hsi*7425+220823)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+209888)*1+lsi)*1]), &(inteval->stack[((hsi*14850+20328)*1+lsi)*1]), &(inteval->stack[((hsi*12150+265328)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+20328)*1+lsi)*1]), &(inteval->stack[((hsi*20250+209888)*1+lsi)*1]), &(inteval->stack[((hsi*16200+277478)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+265328)*1+lsi)*1]), &(inteval->stack[((hsi*24300+20328)*1+lsi)*1]), &(inteval->stack[((hsi*18900+313838)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*79380+291788)*1+lsi)*1]), &(inteval->stack[((hsi*32340+232988)*1+lsi)*1]), &(inteval->stack[((hsi*26460+265328)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+20328)*1+lsi)*1]), &(inteval->stack[((hsi*2970+13134)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16104)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+265328)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9504)*1+lsi)*1]), &(inteval->stack[((hsi*2970+13134)*1+lsi)*1]),66);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+27456)*1+lsi)*1]), &(inteval->stack[((hsi*8910+265328)*1+lsi)*1]), &(inteval->stack[((hsi*7128+20328)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+209888)*1+lsi)*1]), &(inteval->stack[((hsi*4356+5148)*1+lsi)*1]), &(inteval->stack[((hsi*3630+9504)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+371168)*1+lsi)*1]), &(inteval->stack[((hsi*10890+209888)*1+lsi)*1]), &(inteval->stack[((hsi*8910+265328)*1+lsi)*1]),66);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+265328)*1+lsi)*1]), &(inteval->stack[((hsi*17820+371168)*1+lsi)*1]), &(inteval->stack[((hsi*14256+27456)*1+lsi)*1]),66);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+220778)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16104)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18480)*1+lsi)*1]),66);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*11088+388988)*1+lsi)*1]), &(inteval->stack[((hsi*7128+20328)*1+lsi)*1]), &(inteval->stack[((hsi*5544+220778)*1+lsi)*1]),66);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*18480+400076)*1+lsi)*1]), &(inteval->stack[((hsi*14256+27456)*1+lsi)*1]), &(inteval->stack[((hsi*11088+388988)*1+lsi)*1]),66);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*27720+9504)*1+lsi)*1]), &(inteval->stack[((hsi*23760+265328)*1+lsi)*1]), &(inteval->stack[((hsi*18480+400076)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+37224)*1+lsi)*1]), &(inteval->stack[((hsi*5148+0)*1+lsi)*1]), &(inteval->stack[((hsi*4356+5148)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+388988)*1+lsi)*1]), &(inteval->stack[((hsi*13068+37224)*1+lsi)*1]), &(inteval->stack[((hsi*10890+209888)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+410768)*1+lsi)*1]), &(inteval->stack[((hsi*21780+388988)*1+lsi)*1]), &(inteval->stack[((hsi*17820+371168)*1+lsi)*1]),66);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*35640+371168)*1+lsi)*1]), &(inteval->stack[((hsi*29700+410768)*1+lsi)*1]), &(inteval->stack[((hsi*23760+265328)*1+lsi)*1]),66);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*38808+406808)*1+lsi)*1]), &(inteval->stack[((hsi*35640+371168)*1+lsi)*1]), &(inteval->stack[((hsi*27720+9504)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*97020+445616)*1+lsi)*1]), &(inteval->stack[((hsi*38808+406808)*1+lsi)*1]), &(inteval->stack[((hsi*32340+232988)*1+lsi)*1]),588);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*158760+51128)*1+lsi)*1]), &(inteval->stack[((hsi*97020+445616)*1+lsi)*1]), &(inteval->stack[((hsi*79380+291788)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*158760+51128)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
