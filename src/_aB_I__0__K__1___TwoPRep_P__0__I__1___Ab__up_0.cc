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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kp.h>
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
#include <_aB_I__0__K__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__K__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,30464)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__K__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+115136)*1+lsi)*1]), &(inteval->stack[((hsi*1540+26656)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28196)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+118916)*1+lsi)*1]), &(inteval->stack[((hsi*1848+24808)*1+lsi)*1]), &(inteval->stack[((hsi*1540+26656)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+123536)*1+lsi)*1]), &(inteval->stack[((hsi*4620+118916)*1+lsi)*1]), &(inteval->stack[((hsi*3780+115136)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+131096)*1+lsi)*1]), &(inteval->stack[((hsi*2184+22624)*1+lsi)*1]), &(inteval->stack[((hsi*1848+24808)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+136640)*1+lsi)*1]), &(inteval->stack[((hsi*5544+131096)*1+lsi)*1]), &(inteval->stack[((hsi*4620+118916)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+145880)*1+lsi)*1]), &(inteval->stack[((hsi*9240+136640)*1+lsi)*1]), &(inteval->stack[((hsi*7560+123536)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+158480)*1+lsi)*1]), &(inteval->stack[((hsi*2548+20076)*1+lsi)*1]), &(inteval->stack[((hsi*2184+22624)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+165032)*1+lsi)*1]), &(inteval->stack[((hsi*6552+158480)*1+lsi)*1]), &(inteval->stack[((hsi*5544+131096)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+176120)*1+lsi)*1]), &(inteval->stack[((hsi*11088+165032)*1+lsi)*1]), &(inteval->stack[((hsi*9240+136640)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+191520)*1+lsi)*1]), &(inteval->stack[((hsi*15400+176120)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145880)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+131096)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28196)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29456)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+134120)*1+lsi)*1]), &(inteval->stack[((hsi*3780+115136)*1+lsi)*1]), &(inteval->stack[((hsi*3024+131096)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+210420)*1+lsi)*1]), &(inteval->stack[((hsi*7560+123536)*1+lsi)*1]), &(inteval->stack[((hsi*6048+134120)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+115136)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145880)*1+lsi)*1]), &(inteval->stack[((hsi*10080+210420)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+130256)*1+lsi)*1]), &(inteval->stack[((hsi*18900+191520)*1+lsi)*1]), &(inteval->stack[((hsi*15120+115136)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+115136)*1+lsi)*1]), &(inteval->stack[((hsi*2940+17136)*1+lsi)*1]), &(inteval->stack[((hsi*2548+20076)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+17136)*1+lsi)*1]), &(inteval->stack[((hsi*7644+115136)*1+lsi)*1]), &(inteval->stack[((hsi*6552+158480)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+210420)*1+lsi)*1]), &(inteval->stack[((hsi*13104+17136)*1+lsi)*1]), &(inteval->stack[((hsi*11088+165032)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+151424)*1+lsi)*1]), &(inteval->stack[((hsi*18480+210420)*1+lsi)*1]), &(inteval->stack[((hsi*15400+176120)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+210420)*1+lsi)*1]), &(inteval->stack[((hsi*23100+151424)*1+lsi)*1]), &(inteval->stack[((hsi*18900+191520)*1+lsi)*1]),28);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*28224+151424)*1+lsi)*1]), &(inteval->stack[((hsi*26460+210420)*1+lsi)*1]), &(inteval->stack[((hsi*21168+130256)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+115136)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14220)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+119996)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9864)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+125936)*1+lsi)*1]), &(inteval->stack[((hsi*5940+119996)*1+lsi)*1]), &(inteval->stack[((hsi*4860+115136)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+135656)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7056)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9864)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+17136)*1+lsi)*1]), &(inteval->stack[((hsi*7128+135656)*1+lsi)*1]), &(inteval->stack[((hsi*5940+119996)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+179648)*1+lsi)*1]), &(inteval->stack[((hsi*11880+17136)*1+lsi)*1]), &(inteval->stack[((hsi*9720+125936)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+142784)*1+lsi)*1]), &(inteval->stack[((hsi*3276+3780)*1+lsi)*1]), &(inteval->stack[((hsi*2808+7056)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+195848)*1+lsi)*1]), &(inteval->stack[((hsi*8424+142784)*1+lsi)*1]), &(inteval->stack[((hsi*7128+135656)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+210104)*1+lsi)*1]), &(inteval->stack[((hsi*14256+195848)*1+lsi)*1]), &(inteval->stack[((hsi*11880+17136)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+229904)*1+lsi)*1]), &(inteval->stack[((hsi*19800+210104)*1+lsi)*1]), &(inteval->stack[((hsi*16200+179648)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+17136)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14220)*1+lsi)*1]), &(inteval->stack[((hsi*1296+15840)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+7056)*1+lsi)*1]), &(inteval->stack[((hsi*4860+115136)*1+lsi)*1]), &(inteval->stack[((hsi*3888+17136)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+14832)*1+lsi)*1]), &(inteval->stack[((hsi*9720+125936)*1+lsi)*1]), &(inteval->stack[((hsi*7776+7056)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+115136)*1+lsi)*1]), &(inteval->stack[((hsi*16200+179648)*1+lsi)*1]), &(inteval->stack[((hsi*12960+14832)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+254204)*1+lsi)*1]), &(inteval->stack[((hsi*24300+229904)*1+lsi)*1]), &(inteval->stack[((hsi*19440+115136)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+115136)*1+lsi)*1]), &(inteval->stack[((hsi*3780+0)*1+lsi)*1]), &(inteval->stack[((hsi*3276+3780)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+115136)*1+lsi)*1]), &(inteval->stack[((hsi*8424+142784)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+115136)*1+lsi)*1]), &(inteval->stack[((hsi*16848+0)*1+lsi)*1]), &(inteval->stack[((hsi*14256+195848)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+0)*1+lsi)*1]), &(inteval->stack[((hsi*23760+115136)*1+lsi)*1]), &(inteval->stack[((hsi*19800+210104)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+179648)*1+lsi)*1]), &(inteval->stack[((hsi*29700+0)*1+lsi)*1]), &(inteval->stack[((hsi*24300+229904)*1+lsi)*1]),36);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*36288+115136)*1+lsi)*1]), &(inteval->stack[((hsi*34020+179648)*1+lsi)*1]), &(inteval->stack[((hsi*27216+254204)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84672+30464)*1+lsi)*1]), &(inteval->stack[((hsi*36288+115136)*1+lsi)*1]), &(inteval->stack[((hsi*28224+151424)*1+lsi)*1]),1008);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*84672+30464)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
