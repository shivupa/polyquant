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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
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
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__K__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__K__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31535)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+126791)*1+lsi)*1]), &(inteval->stack[((hsi*1540+19936)*1+lsi)*1]), &(inteval->stack[((hsi*1260+21476)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+130571)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18088)*1+lsi)*1]), &(inteval->stack[((hsi*1540+19936)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+135191)*1+lsi)*1]), &(inteval->stack[((hsi*4620+130571)*1+lsi)*1]), &(inteval->stack[((hsi*3780+126791)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+142751)*1+lsi)*1]), &(inteval->stack[((hsi*2184+15904)*1+lsi)*1]), &(inteval->stack[((hsi*1848+18088)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+148295)*1+lsi)*1]), &(inteval->stack[((hsi*5544+142751)*1+lsi)*1]), &(inteval->stack[((hsi*4620+130571)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+157535)*1+lsi)*1]), &(inteval->stack[((hsi*9240+148295)*1+lsi)*1]), &(inteval->stack[((hsi*7560+135191)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+130571)*1+lsi)*1]), &(inteval->stack[((hsi*1260+21476)*1+lsi)*1]), &(inteval->stack[((hsi*1008+22736)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+170135)*1+lsi)*1]), &(inteval->stack[((hsi*3780+126791)*1+lsi)*1]), &(inteval->stack[((hsi*3024+130571)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+176183)*1+lsi)*1]), &(inteval->stack[((hsi*7560+135191)*1+lsi)*1]), &(inteval->stack[((hsi*6048+170135)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+126791)*1+lsi)*1]), &(inteval->stack[((hsi*12600+157535)*1+lsi)*1]), &(inteval->stack[((hsi*10080+176183)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+170135)*1+lsi)*1]), &(inteval->stack[((hsi*2548+13356)*1+lsi)*1]), &(inteval->stack[((hsi*2184+15904)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+176687)*1+lsi)*1]), &(inteval->stack[((hsi*6552+170135)*1+lsi)*1]), &(inteval->stack[((hsi*5544+142751)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+187775)*1+lsi)*1]), &(inteval->stack[((hsi*11088+176687)*1+lsi)*1]), &(inteval->stack[((hsi*9240+148295)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+203175)*1+lsi)*1]), &(inteval->stack[((hsi*15400+187775)*1+lsi)*1]), &(inteval->stack[((hsi*12600+157535)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+141911)*1+lsi)*1]), &(inteval->stack[((hsi*18900+203175)*1+lsi)*1]), &(inteval->stack[((hsi*15120+126791)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+126791)*1+lsi)*1]), &(inteval->stack[((hsi*1155+28679)*1+lsi)*1]), &(inteval->stack[((hsi*945+29834)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+129626)*1+lsi)*1]), &(inteval->stack[((hsi*1386+27293)*1+lsi)*1]), &(inteval->stack[((hsi*1155+28679)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+13356)*1+lsi)*1]), &(inteval->stack[((hsi*3465+129626)*1+lsi)*1]), &(inteval->stack[((hsi*2835+126791)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+133091)*1+lsi)*1]), &(inteval->stack[((hsi*1638+25655)*1+lsi)*1]), &(inteval->stack[((hsi*1386+27293)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+163079)*1+lsi)*1]), &(inteval->stack[((hsi*4158+133091)*1+lsi)*1]), &(inteval->stack[((hsi*3465+129626)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+170009)*1+lsi)*1]), &(inteval->stack[((hsi*6930+163079)*1+lsi)*1]), &(inteval->stack[((hsi*5670+13356)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+19026)*1+lsi)*1]), &(inteval->stack[((hsi*945+29834)*1+lsi)*1]), &(inteval->stack[((hsi*756+30779)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+137249)*1+lsi)*1]), &(inteval->stack[((hsi*2835+126791)*1+lsi)*1]), &(inteval->stack[((hsi*2268+19026)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+179459)*1+lsi)*1]), &(inteval->stack[((hsi*5670+13356)*1+lsi)*1]), &(inteval->stack[((hsi*4536+137249)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+187019)*1+lsi)*1]), &(inteval->stack[((hsi*9450+170009)*1+lsi)*1]), &(inteval->stack[((hsi*7560+179459)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+13356)*1+lsi)*1]), &(inteval->stack[((hsi*1911+23744)*1+lsi)*1]), &(inteval->stack[((hsi*1638+25655)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+18270)*1+lsi)*1]), &(inteval->stack[((hsi*4914+13356)*1+lsi)*1]), &(inteval->stack[((hsi*4158+133091)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+126791)*1+lsi)*1]), &(inteval->stack[((hsi*8316+18270)*1+lsi)*1]), &(inteval->stack[((hsi*6930+163079)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+13356)*1+lsi)*1]), &(inteval->stack[((hsi*11550+126791)*1+lsi)*1]), &(inteval->stack[((hsi*9450+170009)*1+lsi)*1]),21);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*15876+163079)*1+lsi)*1]), &(inteval->stack[((hsi*14175+13356)*1+lsi)*1]), &(inteval->stack[((hsi*11340+187019)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*47628+178955)*1+lsi)*1]), &(inteval->stack[((hsi*21168+141911)*1+lsi)*1]), &(inteval->stack[((hsi*15876+163079)*1+lsi)*1]),756);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+13356)*1+lsi)*1]), &(inteval->stack[((hsi*1980+8460)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10440)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+163079)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6084)*1+lsi)*1]), &(inteval->stack[((hsi*1980+8460)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+126791)*1+lsi)*1]), &(inteval->stack[((hsi*5940+163079)*1+lsi)*1]), &(inteval->stack[((hsi*4860+13356)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+18216)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3276)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6084)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+226583)*1+lsi)*1]), &(inteval->stack[((hsi*7128+18216)*1+lsi)*1]), &(inteval->stack[((hsi*5940+163079)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+238463)*1+lsi)*1]), &(inteval->stack[((hsi*11880+226583)*1+lsi)*1]), &(inteval->stack[((hsi*9720+126791)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+163079)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10440)*1+lsi)*1]), &(inteval->stack[((hsi*1296+12060)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+166967)*1+lsi)*1]), &(inteval->stack[((hsi*4860+13356)*1+lsi)*1]), &(inteval->stack[((hsi*3888+163079)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+254663)*1+lsi)*1]), &(inteval->stack[((hsi*9720+126791)*1+lsi)*1]), &(inteval->stack[((hsi*7776+166967)*1+lsi)*1]),36);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*19440+267623)*1+lsi)*1]), &(inteval->stack[((hsi*16200+238463)*1+lsi)*1]), &(inteval->stack[((hsi*12960+254663)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+163079)*1+lsi)*1]), &(inteval->stack[((hsi*3276+0)*1+lsi)*1]), &(inteval->stack[((hsi*2808+3276)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*8424+163079)*1+lsi)*1]), &(inteval->stack[((hsi*7128+18216)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+287063)*1+lsi)*1]), &(inteval->stack[((hsi*14256+0)*1+lsi)*1]), &(inteval->stack[((hsi*11880+226583)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+0)*1+lsi)*1]), &(inteval->stack[((hsi*19800+287063)*1+lsi)*1]), &(inteval->stack[((hsi*16200+238463)*1+lsi)*1]),36);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*27216+226583)*1+lsi)*1]), &(inteval->stack[((hsi*24300+0)*1+lsi)*1]), &(inteval->stack[((hsi*19440+267623)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*63504+253799)*1+lsi)*1]), &(inteval->stack[((hsi*27216+226583)*1+lsi)*1]), &(inteval->stack[((hsi*21168+141911)*1+lsi)*1]),756);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*95256+31535)*1+lsi)*1]), &(inteval->stack[((hsi*63504+253799)*1+lsi)*1]), &(inteval->stack[((hsi*47628+178955)*1+lsi)*1]),756);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*95256+31535)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
