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
#include <_aB_L__0__I__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__I__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,30800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__I__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+110180)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25895)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27920)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+115040)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23420)*1+lsi)*1]), &(inteval->stack[((hsi*2025+25895)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+121115)*1+lsi)*1]), &(inteval->stack[((hsi*6075+115040)*1+lsi)*1]), &(inteval->stack[((hsi*4860+110180)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+130835)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20450)*1+lsi)*1]), &(inteval->stack[((hsi*2475+23420)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+138260)*1+lsi)*1]), &(inteval->stack[((hsi*7425+130835)*1+lsi)*1]), &(inteval->stack[((hsi*6075+115040)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+150410)*1+lsi)*1]), &(inteval->stack[((hsi*12150+138260)*1+lsi)*1]), &(inteval->stack[((hsi*9720+121115)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+115040)*1+lsi)*1]), &(inteval->stack[((hsi*1620+27920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29540)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+166610)*1+lsi)*1]), &(inteval->stack[((hsi*4860+110180)*1+lsi)*1]), &(inteval->stack[((hsi*3780+115040)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+174170)*1+lsi)*1]), &(inteval->stack[((hsi*9720+121115)*1+lsi)*1]), &(inteval->stack[((hsi*7560+166610)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+110180)*1+lsi)*1]), &(inteval->stack[((hsi*16200+150410)*1+lsi)*1]), &(inteval->stack[((hsi*12600+174170)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+166610)*1+lsi)*1]), &(inteval->stack[((hsi*3510+16940)*1+lsi)*1]), &(inteval->stack[((hsi*2970+20450)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+175520)*1+lsi)*1]), &(inteval->stack[((hsi*8910+166610)*1+lsi)*1]), &(inteval->stack[((hsi*7425+130835)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+190370)*1+lsi)*1]), &(inteval->stack[((hsi*14850+175520)*1+lsi)*1]), &(inteval->stack[((hsi*12150+138260)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+210620)*1+lsi)*1]), &(inteval->stack[((hsi*20250+190370)*1+lsi)*1]), &(inteval->stack[((hsi*16200+150410)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+129080)*1+lsi)*1]), &(inteval->stack[((hsi*24300+210620)*1+lsi)*1]), &(inteval->stack[((hsi*18900+110180)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+110180)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+16940)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]), &(inteval->stack[((hsi*2475+10945)*1+lsi)*1]),55);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*11880+116120)*1+lsi)*1]), &(inteval->stack[((hsi*7425+16940)*1+lsi)*1]), &(inteval->stack[((hsi*5940+110180)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+155540)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*3025+7920)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+164615)*1+lsi)*1]), &(inteval->stack[((hsi*9075+155540)*1+lsi)*1]), &(inteval->stack[((hsi*7425+16940)*1+lsi)*1]),55);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*19800+179465)*1+lsi)*1]), &(inteval->stack[((hsi*14850+164615)*1+lsi)*1]), &(inteval->stack[((hsi*11880+116120)*1+lsi)*1]),55);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+16940)*1+lsi)*1]), &(inteval->stack[((hsi*1980+13420)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15400)*1+lsi)*1]),55);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*9240+21560)*1+lsi)*1]), &(inteval->stack[((hsi*5940+110180)*1+lsi)*1]), &(inteval->stack[((hsi*4620+16940)*1+lsi)*1]),55);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*15400+199265)*1+lsi)*1]), &(inteval->stack[((hsi*11880+116120)*1+lsi)*1]), &(inteval->stack[((hsi*9240+21560)*1+lsi)*1]),55);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*23100+214665)*1+lsi)*1]), &(inteval->stack[((hsi*19800+179465)*1+lsi)*1]), &(inteval->stack[((hsi*15400+199265)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+7920)*1+lsi)*1]), &(inteval->stack[((hsi*4290+0)*1+lsi)*1]), &(inteval->stack[((hsi*3630+4290)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+110180)*1+lsi)*1]), &(inteval->stack[((hsi*10890+7920)*1+lsi)*1]), &(inteval->stack[((hsi*9075+155540)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+0)*1+lsi)*1]), &(inteval->stack[((hsi*18150+110180)*1+lsi)*1]), &(inteval->stack[((hsi*14850+164615)*1+lsi)*1]),55);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*29700+237765)*1+lsi)*1]), &(inteval->stack[((hsi*24750+0)*1+lsi)*1]), &(inteval->stack[((hsi*19800+179465)*1+lsi)*1]),55);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*32340+155540)*1+lsi)*1]), &(inteval->stack[((hsi*29700+237765)*1+lsi)*1]), &(inteval->stack[((hsi*23100+214665)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*79380+30800)*1+lsi)*1]), &(inteval->stack[((hsi*32340+155540)*1+lsi)*1]), &(inteval->stack[((hsi*26460+129080)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*79380+30800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
