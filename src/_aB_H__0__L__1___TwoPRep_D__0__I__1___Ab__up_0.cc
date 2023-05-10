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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
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
#include <_aB_H__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,47600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+206360)*1+lsi)*1]), &(inteval->stack[((hsi*1848+31192)*1+lsi)*1]), &(inteval->stack[((hsi*1540+33040)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+210980)*1+lsi)*1]), &(inteval->stack[((hsi*2184+29008)*1+lsi)*1]), &(inteval->stack[((hsi*1848+31192)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+216524)*1+lsi)*1]), &(inteval->stack[((hsi*5544+210980)*1+lsi)*1]), &(inteval->stack[((hsi*4620+206360)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+225764)*1+lsi)*1]), &(inteval->stack[((hsi*2548+26460)*1+lsi)*1]), &(inteval->stack[((hsi*2184+29008)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+232316)*1+lsi)*1]), &(inteval->stack[((hsi*6552+225764)*1+lsi)*1]), &(inteval->stack[((hsi*5544+210980)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+243404)*1+lsi)*1]), &(inteval->stack[((hsi*11088+232316)*1+lsi)*1]), &(inteval->stack[((hsi*9240+216524)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+258804)*1+lsi)*1]), &(inteval->stack[((hsi*2940+23520)*1+lsi)*1]), &(inteval->stack[((hsi*2548+26460)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+266448)*1+lsi)*1]), &(inteval->stack[((hsi*7644+258804)*1+lsi)*1]), &(inteval->stack[((hsi*6552+225764)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+279552)*1+lsi)*1]), &(inteval->stack[((hsi*13104+266448)*1+lsi)*1]), &(inteval->stack[((hsi*11088+232316)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+298032)*1+lsi)*1]), &(inteval->stack[((hsi*18480+279552)*1+lsi)*1]), &(inteval->stack[((hsi*15400+243404)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+225764)*1+lsi)*1]), &(inteval->stack[((hsi*1540+33040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34580)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+229544)*1+lsi)*1]), &(inteval->stack[((hsi*4620+206360)*1+lsi)*1]), &(inteval->stack[((hsi*3780+225764)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+321132)*1+lsi)*1]), &(inteval->stack[((hsi*9240+216524)*1+lsi)*1]), &(inteval->stack[((hsi*7560+229544)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+206360)*1+lsi)*1]), &(inteval->stack[((hsi*15400+243404)*1+lsi)*1]), &(inteval->stack[((hsi*12600+321132)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+225260)*1+lsi)*1]), &(inteval->stack[((hsi*23100+298032)*1+lsi)*1]), &(inteval->stack[((hsi*18900+206360)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+206360)*1+lsi)*1]), &(inteval->stack[((hsi*3360+20160)*1+lsi)*1]), &(inteval->stack[((hsi*2940+23520)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+20160)*1+lsi)*1]), &(inteval->stack[((hsi*8820+206360)*1+lsi)*1]), &(inteval->stack[((hsi*7644+258804)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+321132)*1+lsi)*1]), &(inteval->stack[((hsi*15288+20160)*1+lsi)*1]), &(inteval->stack[((hsi*13104+266448)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+251720)*1+lsi)*1]), &(inteval->stack[((hsi*21840+321132)*1+lsi)*1]), &(inteval->stack[((hsi*18480+279552)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+321132)*1+lsi)*1]), &(inteval->stack[((hsi*27720+251720)*1+lsi)*1]), &(inteval->stack[((hsi*23100+298032)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+251720)*1+lsi)*1]), &(inteval->stack[((hsi*32340+321132)*1+lsi)*1]), &(inteval->stack[((hsi*26460+225260)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+206360)*1+lsi)*1]), &(inteval->stack[((hsi*1386+44114)*1+lsi)*1]), &(inteval->stack[((hsi*1155+45500)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+209825)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42476)*1+lsi)*1]), &(inteval->stack[((hsi*1386+44114)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+213983)*1+lsi)*1]), &(inteval->stack[((hsi*4158+209825)*1+lsi)*1]), &(inteval->stack[((hsi*3465+206360)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+220913)*1+lsi)*1]), &(inteval->stack[((hsi*1911+40565)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42476)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+225827)*1+lsi)*1]), &(inteval->stack[((hsi*4914+220913)*1+lsi)*1]), &(inteval->stack[((hsi*4158+209825)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+234143)*1+lsi)*1]), &(inteval->stack[((hsi*8316+225827)*1+lsi)*1]), &(inteval->stack[((hsi*6930+213983)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+20160)*1+lsi)*1]), &(inteval->stack[((hsi*2205+38360)*1+lsi)*1]), &(inteval->stack[((hsi*1911+40565)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+25893)*1+lsi)*1]), &(inteval->stack[((hsi*5733+20160)*1+lsi)*1]), &(inteval->stack[((hsi*4914+220913)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+287000)*1+lsi)*1]), &(inteval->stack[((hsi*9828+25893)*1+lsi)*1]), &(inteval->stack[((hsi*8316+225827)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+300860)*1+lsi)*1]), &(inteval->stack[((hsi*13860+287000)*1+lsi)*1]), &(inteval->stack[((hsi*11550+234143)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+220913)*1+lsi)*1]), &(inteval->stack[((hsi*1155+45500)*1+lsi)*1]), &(inteval->stack[((hsi*945+46655)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+223748)*1+lsi)*1]), &(inteval->stack[((hsi*3465+206360)*1+lsi)*1]), &(inteval->stack[((hsi*2835+220913)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+318185)*1+lsi)*1]), &(inteval->stack[((hsi*6930+213983)*1+lsi)*1]), &(inteval->stack[((hsi*5670+223748)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+206360)*1+lsi)*1]), &(inteval->stack[((hsi*11550+234143)*1+lsi)*1]), &(inteval->stack[((hsi*9450+318185)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+220535)*1+lsi)*1]), &(inteval->stack[((hsi*17325+300860)*1+lsi)*1]), &(inteval->stack[((hsi*14175+206360)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+206360)*1+lsi)*1]), &(inteval->stack[((hsi*2520+35840)*1+lsi)*1]), &(inteval->stack[((hsi*2205+38360)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+35721)*1+lsi)*1]), &(inteval->stack[((hsi*6615+206360)*1+lsi)*1]), &(inteval->stack[((hsi*5733+20160)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+318185)*1+lsi)*1]), &(inteval->stack[((hsi*11466+35721)*1+lsi)*1]), &(inteval->stack[((hsi*9828+25893)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+20160)*1+lsi)*1]), &(inteval->stack[((hsi*16380+318185)*1+lsi)*1]), &(inteval->stack[((hsi*13860+287000)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+318185)*1+lsi)*1]), &(inteval->stack[((hsi*20790+20160)*1+lsi)*1]), &(inteval->stack[((hsi*17325+300860)*1+lsi)*1]),21);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*26460+287000)*1+lsi)*1]), &(inteval->stack[((hsi*24255+318185)*1+lsi)*1]), &(inteval->stack[((hsi*19845+220535)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*79380+313460)*1+lsi)*1]), &(inteval->stack[((hsi*35280+251720)*1+lsi)*1]), &(inteval->stack[((hsi*26460+287000)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+206360)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+212300)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+219428)*1+lsi)*1]), &(inteval->stack[((hsi*7128+212300)*1+lsi)*1]), &(inteval->stack[((hsi*5940+206360)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+20160)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+287000)*1+lsi)*1]), &(inteval->stack[((hsi*8424+20160)*1+lsi)*1]), &(inteval->stack[((hsi*7128+212300)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+231308)*1+lsi)*1]), &(inteval->stack[((hsi*14256+287000)*1+lsi)*1]), &(inteval->stack[((hsi*11880+219428)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+28584)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+392840)*1+lsi)*1]), &(inteval->stack[((hsi*9828+28584)*1+lsi)*1]), &(inteval->stack[((hsi*8424+20160)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+409688)*1+lsi)*1]), &(inteval->stack[((hsi*16848+392840)*1+lsi)*1]), &(inteval->stack[((hsi*14256+287000)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+433448)*1+lsi)*1]), &(inteval->stack[((hsi*23760+409688)*1+lsi)*1]), &(inteval->stack[((hsi*19800+231308)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+287000)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18540)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+291860)*1+lsi)*1]), &(inteval->stack[((hsi*5940+206360)*1+lsi)*1]), &(inteval->stack[((hsi*4860+287000)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+8100)*1+lsi)*1]), &(inteval->stack[((hsi*11880+219428)*1+lsi)*1]), &(inteval->stack[((hsi*9720+291860)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+287000)*1+lsi)*1]), &(inteval->stack[((hsi*19800+231308)*1+lsi)*1]), &(inteval->stack[((hsi*16200+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+206360)*1+lsi)*1]), &(inteval->stack[((hsi*29700+433448)*1+lsi)*1]), &(inteval->stack[((hsi*24300+287000)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+240380)*1+lsi)*1]), &(inteval->stack[((hsi*4320+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*11340+240380)*1+lsi)*1]), &(inteval->stack[((hsi*9828+28584)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+463148)*1+lsi)*1]), &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*16848+392840)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+0)*1+lsi)*1]), &(inteval->stack[((hsi*28080+463148)*1+lsi)*1]), &(inteval->stack[((hsi*23760+409688)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+463148)*1+lsi)*1]), &(inteval->stack[((hsi*35640+0)*1+lsi)*1]), &(inteval->stack[((hsi*29700+433448)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+392840)*1+lsi)*1]), &(inteval->stack[((hsi*41580+463148)*1+lsi)*1]), &(inteval->stack[((hsi*34020+206360)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*105840+438200)*1+lsi)*1]), &(inteval->stack[((hsi*45360+392840)*1+lsi)*1]), &(inteval->stack[((hsi*35280+251720)*1+lsi)*1]),1260);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*158760+47600)*1+lsi)*1]), &(inteval->stack[((hsi*105840+438200)*1+lsi)*1]), &(inteval->stack[((hsi*79380+313460)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*158760+47600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
