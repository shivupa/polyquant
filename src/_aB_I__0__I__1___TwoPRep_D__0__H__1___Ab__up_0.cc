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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
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
#include <_aB_I__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,33572)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+132356)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21024)*1+lsi)*1]), &(inteval->stack[((hsi*1296+22644)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+136244)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19044)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21024)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+141104)*1+lsi)*1]), &(inteval->stack[((hsi*4860+136244)*1+lsi)*1]), &(inteval->stack[((hsi*3888+132356)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+148880)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16668)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19044)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+154820)*1+lsi)*1]), &(inteval->stack[((hsi*5940+148880)*1+lsi)*1]), &(inteval->stack[((hsi*4860+136244)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+164540)*1+lsi)*1]), &(inteval->stack[((hsi*9720+154820)*1+lsi)*1]), &(inteval->stack[((hsi*7776+141104)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+136244)*1+lsi)*1]), &(inteval->stack[((hsi*1296+22644)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23940)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+177500)*1+lsi)*1]), &(inteval->stack[((hsi*3888+132356)*1+lsi)*1]), &(inteval->stack[((hsi*3024+136244)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+183548)*1+lsi)*1]), &(inteval->stack[((hsi*7776+141104)*1+lsi)*1]), &(inteval->stack[((hsi*6048+177500)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+132356)*1+lsi)*1]), &(inteval->stack[((hsi*12960+164540)*1+lsi)*1]), &(inteval->stack[((hsi*10080+183548)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+177500)*1+lsi)*1]), &(inteval->stack[((hsi*2808+13860)*1+lsi)*1]), &(inteval->stack[((hsi*2376+16668)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+184628)*1+lsi)*1]), &(inteval->stack[((hsi*7128+177500)*1+lsi)*1]), &(inteval->stack[((hsi*5940+148880)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+196508)*1+lsi)*1]), &(inteval->stack[((hsi*11880+184628)*1+lsi)*1]), &(inteval->stack[((hsi*9720+154820)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+212708)*1+lsi)*1]), &(inteval->stack[((hsi*16200+196508)*1+lsi)*1]), &(inteval->stack[((hsi*12960+164540)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+147476)*1+lsi)*1]), &(inteval->stack[((hsi*19440+212708)*1+lsi)*1]), &(inteval->stack[((hsi*15120+132356)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+132356)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30520)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31780)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+135380)*1+lsi)*1]), &(inteval->stack[((hsi*1540+28980)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30520)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+13860)*1+lsi)*1]), &(inteval->stack[((hsi*3780+135380)*1+lsi)*1]), &(inteval->stack[((hsi*3024+132356)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+139160)*1+lsi)*1]), &(inteval->stack[((hsi*1848+27132)*1+lsi)*1]), &(inteval->stack[((hsi*1540+28980)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+168644)*1+lsi)*1]), &(inteval->stack[((hsi*4620+139160)*1+lsi)*1]), &(inteval->stack[((hsi*3780+135380)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+176204)*1+lsi)*1]), &(inteval->stack[((hsi*7560+168644)*1+lsi)*1]), &(inteval->stack[((hsi*6048+13860)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+19908)*1+lsi)*1]), &(inteval->stack[((hsi*1008+31780)*1+lsi)*1]), &(inteval->stack[((hsi*784+32788)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+186284)*1+lsi)*1]), &(inteval->stack[((hsi*3024+132356)*1+lsi)*1]), &(inteval->stack[((hsi*2352+19908)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+190988)*1+lsi)*1]), &(inteval->stack[((hsi*6048+13860)*1+lsi)*1]), &(inteval->stack[((hsi*4704+186284)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+198828)*1+lsi)*1]), &(inteval->stack[((hsi*10080+176204)*1+lsi)*1]), &(inteval->stack[((hsi*7840+190988)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+186284)*1+lsi)*1]), &(inteval->stack[((hsi*2184+24948)*1+lsi)*1]), &(inteval->stack[((hsi*1848+27132)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+13860)*1+lsi)*1]), &(inteval->stack[((hsi*5544+186284)*1+lsi)*1]), &(inteval->stack[((hsi*4620+139160)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+132356)*1+lsi)*1]), &(inteval->stack[((hsi*9240+13860)*1+lsi)*1]), &(inteval->stack[((hsi*7560+168644)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+13860)*1+lsi)*1]), &(inteval->stack[((hsi*12600+132356)*1+lsi)*1]), &(inteval->stack[((hsi*10080+176204)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+168644)*1+lsi)*1]), &(inteval->stack[((hsi*15120+13860)*1+lsi)*1]), &(inteval->stack[((hsi*11760+198828)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*49392+185108)*1+lsi)*1]), &(inteval->stack[((hsi*21168+147476)*1+lsi)*1]), &(inteval->stack[((hsi*16464+168644)*1+lsi)*1]),588);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+13860)*1+lsi)*1]), &(inteval->stack[((hsi*2025+8955)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10980)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+168644)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6480)*1+lsi)*1]), &(inteval->stack[((hsi*2025+8955)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+132356)*1+lsi)*1]), &(inteval->stack[((hsi*6075+168644)*1+lsi)*1]), &(inteval->stack[((hsi*4860+13860)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+18720)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3510)*1+lsi)*1]), &(inteval->stack[((hsi*2475+6480)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+234500)*1+lsi)*1]), &(inteval->stack[((hsi*7425+18720)*1+lsi)*1]), &(inteval->stack[((hsi*6075+168644)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+168644)*1+lsi)*1]), &(inteval->stack[((hsi*12150+234500)*1+lsi)*1]), &(inteval->stack[((hsi*9720+132356)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+26145)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10980)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12600)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+246650)*1+lsi)*1]), &(inteval->stack[((hsi*4860+13860)*1+lsi)*1]), &(inteval->stack[((hsi*3780+26145)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+254210)*1+lsi)*1]), &(inteval->stack[((hsi*9720+132356)*1+lsi)*1]), &(inteval->stack[((hsi*7560+246650)*1+lsi)*1]),45);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*18900+266810)*1+lsi)*1]), &(inteval->stack[((hsi*16200+168644)*1+lsi)*1]), &(inteval->stack[((hsi*12600+254210)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+246650)*1+lsi)*1]), &(inteval->stack[((hsi*3510+0)*1+lsi)*1]), &(inteval->stack[((hsi*2970+3510)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+0)*1+lsi)*1]), &(inteval->stack[((hsi*8910+246650)*1+lsi)*1]), &(inteval->stack[((hsi*7425+18720)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+285710)*1+lsi)*1]), &(inteval->stack[((hsi*14850+0)*1+lsi)*1]), &(inteval->stack[((hsi*12150+234500)*1+lsi)*1]),45);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*24300+0)*1+lsi)*1]), &(inteval->stack[((hsi*20250+285710)*1+lsi)*1]), &(inteval->stack[((hsi*16200+168644)*1+lsi)*1]),45);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*26460+234500)*1+lsi)*1]), &(inteval->stack[((hsi*24300+0)*1+lsi)*1]), &(inteval->stack[((hsi*18900+266810)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*63504+260960)*1+lsi)*1]), &(inteval->stack[((hsi*26460+234500)*1+lsi)*1]), &(inteval->stack[((hsi*21168+147476)*1+lsi)*1]),588);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*98784+33572)*1+lsi)*1]), &(inteval->stack[((hsi*63504+260960)*1+lsi)*1]), &(inteval->stack[((hsi*49392+185108)*1+lsi)*1]),588);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*98784+33572)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
