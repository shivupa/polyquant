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
#include <HRRPart0bra0ket0ip.h>
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
#include <_aB_I__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,25536)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+91392)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22484)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23744)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+94416)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20944)*1+lsi)*1]), &(inteval->stack[((hsi*1260+22484)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+98196)*1+lsi)*1]), &(inteval->stack[((hsi*3780+94416)*1+lsi)*1]), &(inteval->stack[((hsi*3024+91392)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+104244)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19096)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20944)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+108864)*1+lsi)*1]), &(inteval->stack[((hsi*4620+104244)*1+lsi)*1]), &(inteval->stack[((hsi*3780+94416)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+116424)*1+lsi)*1]), &(inteval->stack[((hsi*7560+108864)*1+lsi)*1]), &(inteval->stack[((hsi*6048+98196)*1+lsi)*1]),28);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*5544+126504)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16912)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19096)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+132048)*1+lsi)*1]), &(inteval->stack[((hsi*5544+126504)*1+lsi)*1]), &(inteval->stack[((hsi*4620+104244)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+141288)*1+lsi)*1]), &(inteval->stack[((hsi*9240+132048)*1+lsi)*1]), &(inteval->stack[((hsi*7560+108864)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+153888)*1+lsi)*1]), &(inteval->stack[((hsi*12600+141288)*1+lsi)*1]), &(inteval->stack[((hsi*10080+116424)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+104244)*1+lsi)*1]), &(inteval->stack[((hsi*1008+23744)*1+lsi)*1]), &(inteval->stack[((hsi*784+24752)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+106596)*1+lsi)*1]), &(inteval->stack[((hsi*3024+91392)*1+lsi)*1]), &(inteval->stack[((hsi*2352+104244)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+169008)*1+lsi)*1]), &(inteval->stack[((hsi*6048+98196)*1+lsi)*1]), &(inteval->stack[((hsi*4704+106596)*1+lsi)*1]),28);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*11760+91392)*1+lsi)*1]), &(inteval->stack[((hsi*10080+116424)*1+lsi)*1]), &(inteval->stack[((hsi*7840+169008)*1+lsi)*1]),28);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*16464+103152)*1+lsi)*1]), &(inteval->stack[((hsi*15120+153888)*1+lsi)*1]), &(inteval->stack[((hsi*11760+91392)*1+lsi)*1]),28);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*6552+91392)*1+lsi)*1]), &(inteval->stack[((hsi*2548+14364)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16912)*1+lsi)*1]),28);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*11088+14364)*1+lsi)*1]), &(inteval->stack[((hsi*6552+91392)*1+lsi)*1]), &(inteval->stack[((hsi*5544+126504)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+169008)*1+lsi)*1]), &(inteval->stack[((hsi*11088+14364)*1+lsi)*1]), &(inteval->stack[((hsi*9240+132048)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+119616)*1+lsi)*1]), &(inteval->stack[((hsi*15400+169008)*1+lsi)*1]), &(inteval->stack[((hsi*12600+141288)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+169008)*1+lsi)*1]), &(inteval->stack[((hsi*18900+119616)*1+lsi)*1]), &(inteval->stack[((hsi*15120+153888)*1+lsi)*1]),28);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*21952+119616)*1+lsi)*1]), &(inteval->stack[((hsi*21168+169008)*1+lsi)*1]), &(inteval->stack[((hsi*16464+103152)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+91392)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10440)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12060)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+95280)*1+lsi)*1]), &(inteval->stack[((hsi*1980+8460)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10440)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+100140)*1+lsi)*1]), &(inteval->stack[((hsi*4860+95280)*1+lsi)*1]), &(inteval->stack[((hsi*3888+91392)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+107916)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6084)*1+lsi)*1]), &(inteval->stack[((hsi*1980+8460)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+14364)*1+lsi)*1]), &(inteval->stack[((hsi*5940+107916)*1+lsi)*1]), &(inteval->stack[((hsi*4860+95280)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+141568)*1+lsi)*1]), &(inteval->stack[((hsi*9720+14364)*1+lsi)*1]), &(inteval->stack[((hsi*7776+100140)*1+lsi)*1]),36);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*7128+154528)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3276)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6084)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+161656)*1+lsi)*1]), &(inteval->stack[((hsi*7128+154528)*1+lsi)*1]), &(inteval->stack[((hsi*5940+107916)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+173536)*1+lsi)*1]), &(inteval->stack[((hsi*11880+161656)*1+lsi)*1]), &(inteval->stack[((hsi*9720+14364)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+189736)*1+lsi)*1]), &(inteval->stack[((hsi*16200+173536)*1+lsi)*1]), &(inteval->stack[((hsi*12960+141568)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+107916)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12060)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13356)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+6084)*1+lsi)*1]), &(inteval->stack[((hsi*3888+91392)*1+lsi)*1]), &(inteval->stack[((hsi*3024+107916)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+12132)*1+lsi)*1]), &(inteval->stack[((hsi*7776+100140)*1+lsi)*1]), &(inteval->stack[((hsi*6048+6084)*1+lsi)*1]),36);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*15120+91392)*1+lsi)*1]), &(inteval->stack[((hsi*12960+141568)*1+lsi)*1]), &(inteval->stack[((hsi*10080+12132)*1+lsi)*1]),36);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*21168+209176)*1+lsi)*1]), &(inteval->stack[((hsi*19440+189736)*1+lsi)*1]), &(inteval->stack[((hsi*15120+91392)*1+lsi)*1]),36);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*8424+91392)*1+lsi)*1]), &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3276)*1+lsi)*1]),36);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*8424+91392)*1+lsi)*1]), &(inteval->stack[((hsi*7128+154528)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+91392)*1+lsi)*1]), &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*11880+161656)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+141568)*1+lsi)*1]), &(inteval->stack[((hsi*19800+91392)*1+lsi)*1]), &(inteval->stack[((hsi*16200+173536)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+91392)*1+lsi)*1]), &(inteval->stack[((hsi*24300+141568)*1+lsi)*1]), &(inteval->stack[((hsi*19440+189736)*1+lsi)*1]),36);
HRRPart1bra0ket0ii(inteval, &(inteval->stack[((hsi*28224+141568)*1+lsi)*1]), &(inteval->stack[((hsi*27216+91392)*1+lsi)*1]), &(inteval->stack[((hsi*21168+209176)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*65856+25536)*1+lsi)*1]), &(inteval->stack[((hsi*28224+141568)*1+lsi)*1]), &(inteval->stack[((hsi*21952+119616)*1+lsi)*1]),784);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*65856+25536)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
