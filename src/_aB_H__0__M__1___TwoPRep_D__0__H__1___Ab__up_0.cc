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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,43775)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+189305)*1+lsi)*1]), &(inteval->stack[((hsi*2184+27388)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29572)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+194849)*1+lsi)*1]), &(inteval->stack[((hsi*2548+24840)*1+lsi)*1]), &(inteval->stack[((hsi*2184+27388)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+201401)*1+lsi)*1]), &(inteval->stack[((hsi*6552+194849)*1+lsi)*1]), &(inteval->stack[((hsi*5544+189305)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+212489)*1+lsi)*1]), &(inteval->stack[((hsi*2940+21900)*1+lsi)*1]), &(inteval->stack[((hsi*2548+24840)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+220133)*1+lsi)*1]), &(inteval->stack[((hsi*7644+212489)*1+lsi)*1]), &(inteval->stack[((hsi*6552+194849)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+233237)*1+lsi)*1]), &(inteval->stack[((hsi*13104+220133)*1+lsi)*1]), &(inteval->stack[((hsi*11088+201401)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+194849)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29572)*1+lsi)*1]), &(inteval->stack[((hsi*1540+31420)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+251717)*1+lsi)*1]), &(inteval->stack[((hsi*5544+189305)*1+lsi)*1]), &(inteval->stack[((hsi*4620+194849)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+260957)*1+lsi)*1]), &(inteval->stack[((hsi*11088+201401)*1+lsi)*1]), &(inteval->stack[((hsi*9240+251717)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+189305)*1+lsi)*1]), &(inteval->stack[((hsi*18480+233237)*1+lsi)*1]), &(inteval->stack[((hsi*15400+260957)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+251717)*1+lsi)*1]), &(inteval->stack[((hsi*3360+18540)*1+lsi)*1]), &(inteval->stack[((hsi*2940+21900)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+260537)*1+lsi)*1]), &(inteval->stack[((hsi*8820+251717)*1+lsi)*1]), &(inteval->stack[((hsi*7644+212489)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+275825)*1+lsi)*1]), &(inteval->stack[((hsi*15288+260537)*1+lsi)*1]), &(inteval->stack[((hsi*13104+220133)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+297665)*1+lsi)*1]), &(inteval->stack[((hsi*21840+275825)*1+lsi)*1]), &(inteval->stack[((hsi*18480+233237)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+212405)*1+lsi)*1]), &(inteval->stack[((hsi*27720+297665)*1+lsi)*1]), &(inteval->stack[((hsi*23100+189305)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+189305)*1+lsi)*1]), &(inteval->stack[((hsi*1638+39596)*1+lsi)*1]), &(inteval->stack[((hsi*1386+41234)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+193463)*1+lsi)*1]), &(inteval->stack[((hsi*1911+37685)*1+lsi)*1]), &(inteval->stack[((hsi*1638+39596)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+18540)*1+lsi)*1]), &(inteval->stack[((hsi*4914+193463)*1+lsi)*1]), &(inteval->stack[((hsi*4158+189305)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+198377)*1+lsi)*1]), &(inteval->stack[((hsi*2205+35480)*1+lsi)*1]), &(inteval->stack[((hsi*1911+37685)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+244745)*1+lsi)*1]), &(inteval->stack[((hsi*5733+198377)*1+lsi)*1]), &(inteval->stack[((hsi*4914+193463)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+254573)*1+lsi)*1]), &(inteval->stack[((hsi*9828+244745)*1+lsi)*1]), &(inteval->stack[((hsi*8316+18540)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+204110)*1+lsi)*1]), &(inteval->stack[((hsi*1386+41234)*1+lsi)*1]), &(inteval->stack[((hsi*1155+42620)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+268433)*1+lsi)*1]), &(inteval->stack[((hsi*4158+189305)*1+lsi)*1]), &(inteval->stack[((hsi*3465+204110)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+275363)*1+lsi)*1]), &(inteval->stack[((hsi*8316+18540)*1+lsi)*1]), &(inteval->stack[((hsi*6930+268433)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+286913)*1+lsi)*1]), &(inteval->stack[((hsi*13860+254573)*1+lsi)*1]), &(inteval->stack[((hsi*11550+275363)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+268433)*1+lsi)*1]), &(inteval->stack[((hsi*2520+32960)*1+lsi)*1]), &(inteval->stack[((hsi*2205+35480)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+18540)*1+lsi)*1]), &(inteval->stack[((hsi*6615+268433)*1+lsi)*1]), &(inteval->stack[((hsi*5733+198377)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+189305)*1+lsi)*1]), &(inteval->stack[((hsi*11466+18540)*1+lsi)*1]), &(inteval->stack[((hsi*9828+244745)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+18540)*1+lsi)*1]), &(inteval->stack[((hsi*16380+189305)*1+lsi)*1]), &(inteval->stack[((hsi*13860+254573)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+244745)*1+lsi)*1]), &(inteval->stack[((hsi*20790+18540)*1+lsi)*1]), &(inteval->stack[((hsi*17325+286913)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*72765+269000)*1+lsi)*1]), &(inteval->stack[((hsi*32340+212405)*1+lsi)*1]), &(inteval->stack[((hsi*24255+244745)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+18540)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+244745)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+189305)*1+lsi)*1]), &(inteval->stack[((hsi*8424+244745)*1+lsi)*1]), &(inteval->stack[((hsi*7128+18540)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+25668)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+341765)*1+lsi)*1]), &(inteval->stack[((hsi*9828+25668)*1+lsi)*1]), &(inteval->stack[((hsi*8424+244745)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+244745)*1+lsi)*1]), &(inteval->stack[((hsi*16848+341765)*1+lsi)*1]), &(inteval->stack[((hsi*14256+189305)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+203561)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+358613)*1+lsi)*1]), &(inteval->stack[((hsi*7128+18540)*1+lsi)*1]), &(inteval->stack[((hsi*5940+203561)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+370493)*1+lsi)*1]), &(inteval->stack[((hsi*14256+189305)*1+lsi)*1]), &(inteval->stack[((hsi*11880+358613)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+390293)*1+lsi)*1]), &(inteval->stack[((hsi*23760+244745)*1+lsi)*1]), &(inteval->stack[((hsi*19800+370493)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+358613)*1+lsi)*1]), &(inteval->stack[((hsi*4320+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*11340+358613)*1+lsi)*1]), &(inteval->stack[((hsi*9828+25668)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+358613)*1+lsi)*1]), &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*16848+341765)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+0)*1+lsi)*1]), &(inteval->stack[((hsi*28080+358613)*1+lsi)*1]), &(inteval->stack[((hsi*23760+244745)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+341765)*1+lsi)*1]), &(inteval->stack[((hsi*35640+0)*1+lsi)*1]), &(inteval->stack[((hsi*29700+390293)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*97020+383345)*1+lsi)*1]), &(inteval->stack[((hsi*41580+341765)*1+lsi)*1]), &(inteval->stack[((hsi*32340+212405)*1+lsi)*1]),1155);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*145530+43775)*1+lsi)*1]), &(inteval->stack[((hsi*97020+383345)*1+lsi)*1]), &(inteval->stack[((hsi*72765+269000)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*145530+43775)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
