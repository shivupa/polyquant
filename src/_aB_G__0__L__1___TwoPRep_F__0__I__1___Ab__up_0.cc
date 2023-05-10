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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
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
#include <_aB_G__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,56000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+245000)*1+lsi)*1]), &(inteval->stack[((hsi*1386+44114)*1+lsi)*1]), &(inteval->stack[((hsi*1155+45500)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+248465)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42476)*1+lsi)*1]), &(inteval->stack[((hsi*1386+44114)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+252623)*1+lsi)*1]), &(inteval->stack[((hsi*4158+248465)*1+lsi)*1]), &(inteval->stack[((hsi*3465+245000)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+259553)*1+lsi)*1]), &(inteval->stack[((hsi*1911+40565)*1+lsi)*1]), &(inteval->stack[((hsi*1638+42476)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+264467)*1+lsi)*1]), &(inteval->stack[((hsi*4914+259553)*1+lsi)*1]), &(inteval->stack[((hsi*4158+248465)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+272783)*1+lsi)*1]), &(inteval->stack[((hsi*8316+264467)*1+lsi)*1]), &(inteval->stack[((hsi*6930+252623)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+284333)*1+lsi)*1]), &(inteval->stack[((hsi*2205+38360)*1+lsi)*1]), &(inteval->stack[((hsi*1911+40565)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+290066)*1+lsi)*1]), &(inteval->stack[((hsi*5733+284333)*1+lsi)*1]), &(inteval->stack[((hsi*4914+259553)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+299894)*1+lsi)*1]), &(inteval->stack[((hsi*9828+290066)*1+lsi)*1]), &(inteval->stack[((hsi*8316+264467)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+313754)*1+lsi)*1]), &(inteval->stack[((hsi*13860+299894)*1+lsi)*1]), &(inteval->stack[((hsi*11550+272783)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+259553)*1+lsi)*1]), &(inteval->stack[((hsi*1155+45500)*1+lsi)*1]), &(inteval->stack[((hsi*945+46655)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+262388)*1+lsi)*1]), &(inteval->stack[((hsi*3465+245000)*1+lsi)*1]), &(inteval->stack[((hsi*2835+259553)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+331079)*1+lsi)*1]), &(inteval->stack[((hsi*6930+252623)*1+lsi)*1]), &(inteval->stack[((hsi*5670+262388)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+245000)*1+lsi)*1]), &(inteval->stack[((hsi*11550+272783)*1+lsi)*1]), &(inteval->stack[((hsi*9450+331079)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+259175)*1+lsi)*1]), &(inteval->stack[((hsi*17325+313754)*1+lsi)*1]), &(inteval->stack[((hsi*14175+245000)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+245000)*1+lsi)*1]), &(inteval->stack[((hsi*2520+35840)*1+lsi)*1]), &(inteval->stack[((hsi*2205+38360)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+35840)*1+lsi)*1]), &(inteval->stack[((hsi*6615+245000)*1+lsi)*1]), &(inteval->stack[((hsi*5733+284333)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+331079)*1+lsi)*1]), &(inteval->stack[((hsi*11466+35840)*1+lsi)*1]), &(inteval->stack[((hsi*9828+290066)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+279020)*1+lsi)*1]), &(inteval->stack[((hsi*16380+331079)*1+lsi)*1]), &(inteval->stack[((hsi*13860+299894)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+331079)*1+lsi)*1]), &(inteval->stack[((hsi*20790+279020)*1+lsi)*1]), &(inteval->stack[((hsi*17325+313754)*1+lsi)*1]),21);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*26460+279020)*1+lsi)*1]), &(inteval->stack[((hsi*24255+331079)*1+lsi)*1]), &(inteval->stack[((hsi*19845+259175)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+245000)*1+lsi)*1]), &(inteval->stack[((hsi*1848+31192)*1+lsi)*1]), &(inteval->stack[((hsi*1540+33040)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+249620)*1+lsi)*1]), &(inteval->stack[((hsi*2184+29008)*1+lsi)*1]), &(inteval->stack[((hsi*1848+31192)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+255164)*1+lsi)*1]), &(inteval->stack[((hsi*5544+249620)*1+lsi)*1]), &(inteval->stack[((hsi*4620+245000)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+264404)*1+lsi)*1]), &(inteval->stack[((hsi*2548+26460)*1+lsi)*1]), &(inteval->stack[((hsi*2184+29008)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+35840)*1+lsi)*1]), &(inteval->stack[((hsi*6552+264404)*1+lsi)*1]), &(inteval->stack[((hsi*5544+249620)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+305480)*1+lsi)*1]), &(inteval->stack[((hsi*11088+35840)*1+lsi)*1]), &(inteval->stack[((hsi*9240+255164)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+270956)*1+lsi)*1]), &(inteval->stack[((hsi*2940+23520)*1+lsi)*1]), &(inteval->stack[((hsi*2548+26460)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+320880)*1+lsi)*1]), &(inteval->stack[((hsi*7644+270956)*1+lsi)*1]), &(inteval->stack[((hsi*6552+264404)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+333984)*1+lsi)*1]), &(inteval->stack[((hsi*13104+320880)*1+lsi)*1]), &(inteval->stack[((hsi*11088+35840)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+352464)*1+lsi)*1]), &(inteval->stack[((hsi*18480+333984)*1+lsi)*1]), &(inteval->stack[((hsi*15400+305480)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+35840)*1+lsi)*1]), &(inteval->stack[((hsi*1540+33040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34580)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+26460)*1+lsi)*1]), &(inteval->stack[((hsi*4620+245000)*1+lsi)*1]), &(inteval->stack[((hsi*3780+35840)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+34020)*1+lsi)*1]), &(inteval->stack[((hsi*9240+255164)*1+lsi)*1]), &(inteval->stack[((hsi*7560+26460)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+245000)*1+lsi)*1]), &(inteval->stack[((hsi*15400+305480)*1+lsi)*1]), &(inteval->stack[((hsi*12600+34020)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+375564)*1+lsi)*1]), &(inteval->stack[((hsi*23100+352464)*1+lsi)*1]), &(inteval->stack[((hsi*18900+245000)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+245000)*1+lsi)*1]), &(inteval->stack[((hsi*3360+20160)*1+lsi)*1]), &(inteval->stack[((hsi*2940+23520)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+20160)*1+lsi)*1]), &(inteval->stack[((hsi*8820+245000)*1+lsi)*1]), &(inteval->stack[((hsi*7644+270956)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+245000)*1+lsi)*1]), &(inteval->stack[((hsi*15288+20160)*1+lsi)*1]), &(inteval->stack[((hsi*13104+320880)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+305480)*1+lsi)*1]), &(inteval->stack[((hsi*21840+245000)*1+lsi)*1]), &(inteval->stack[((hsi*18480+333984)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+245000)*1+lsi)*1]), &(inteval->stack[((hsi*27720+305480)*1+lsi)*1]), &(inteval->stack[((hsi*23100+352464)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+305480)*1+lsi)*1]), &(inteval->stack[((hsi*32340+245000)*1+lsi)*1]), &(inteval->stack[((hsi*26460+375564)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*79380+340760)*1+lsi)*1]), &(inteval->stack[((hsi*35280+305480)*1+lsi)*1]), &(inteval->stack[((hsi*26460+279020)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+245000)*1+lsi)*1]), &(inteval->stack[((hsi*990+53510)*1+lsi)*1]), &(inteval->stack[((hsi*825+54500)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+247475)*1+lsi)*1]), &(inteval->stack[((hsi*1170+52340)*1+lsi)*1]), &(inteval->stack[((hsi*990+53510)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+250445)*1+lsi)*1]), &(inteval->stack[((hsi*2970+247475)*1+lsi)*1]), &(inteval->stack[((hsi*2475+245000)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+20160)*1+lsi)*1]), &(inteval->stack[((hsi*1365+50975)*1+lsi)*1]), &(inteval->stack[((hsi*1170+52340)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+23670)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20160)*1+lsi)*1]), &(inteval->stack[((hsi*2970+247475)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+255395)*1+lsi)*1]), &(inteval->stack[((hsi*5940+23670)*1+lsi)*1]), &(inteval->stack[((hsi*4950+250445)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+29610)*1+lsi)*1]), &(inteval->stack[((hsi*1575+49400)*1+lsi)*1]), &(inteval->stack[((hsi*1365+50975)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+263645)*1+lsi)*1]), &(inteval->stack[((hsi*4095+29610)*1+lsi)*1]), &(inteval->stack[((hsi*3510+20160)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+33705)*1+lsi)*1]), &(inteval->stack[((hsi*7020+263645)*1+lsi)*1]), &(inteval->stack[((hsi*5940+23670)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+420140)*1+lsi)*1]), &(inteval->stack[((hsi*9900+33705)*1+lsi)*1]), &(inteval->stack[((hsi*8250+255395)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+20160)*1+lsi)*1]), &(inteval->stack[((hsi*825+54500)*1+lsi)*1]), &(inteval->stack[((hsi*675+55325)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+270665)*1+lsi)*1]), &(inteval->stack[((hsi*2475+245000)*1+lsi)*1]), &(inteval->stack[((hsi*2025+20160)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+20160)*1+lsi)*1]), &(inteval->stack[((hsi*4950+250445)*1+lsi)*1]), &(inteval->stack[((hsi*4050+270665)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+245000)*1+lsi)*1]), &(inteval->stack[((hsi*8250+255395)*1+lsi)*1]), &(inteval->stack[((hsi*6750+20160)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+432515)*1+lsi)*1]), &(inteval->stack[((hsi*12375+420140)*1+lsi)*1]), &(inteval->stack[((hsi*10125+245000)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+245000)*1+lsi)*1]), &(inteval->stack[((hsi*1800+47600)*1+lsi)*1]), &(inteval->stack[((hsi*1575+49400)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+249725)*1+lsi)*1]), &(inteval->stack[((hsi*4725+245000)*1+lsi)*1]), &(inteval->stack[((hsi*4095+29610)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+20160)*1+lsi)*1]), &(inteval->stack[((hsi*8190+249725)*1+lsi)*1]), &(inteval->stack[((hsi*7020+263645)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+245000)*1+lsi)*1]), &(inteval->stack[((hsi*11700+20160)*1+lsi)*1]), &(inteval->stack[((hsi*9900+33705)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+20160)*1+lsi)*1]), &(inteval->stack[((hsi*14850+245000)*1+lsi)*1]), &(inteval->stack[((hsi*12375+420140)*1+lsi)*1]),15);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*18900+245000)*1+lsi)*1]), &(inteval->stack[((hsi*17325+20160)*1+lsi)*1]), &(inteval->stack[((hsi*14175+432515)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*56700+420140)*1+lsi)*1]), &(inteval->stack[((hsi*26460+279020)*1+lsi)*1]), &(inteval->stack[((hsi*18900+245000)*1+lsi)*1]),1260);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*113400+476840)*1+lsi)*1]), &(inteval->stack[((hsi*79380+340760)*1+lsi)*1]), &(inteval->stack[((hsi*56700+420140)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+245000)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+420140)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+250940)*1+lsi)*1]), &(inteval->stack[((hsi*7128+420140)*1+lsi)*1]), &(inteval->stack[((hsi*5940+245000)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+427268)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+262820)*1+lsi)*1]), &(inteval->stack[((hsi*8424+427268)*1+lsi)*1]), &(inteval->stack[((hsi*7128+420140)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+435692)*1+lsi)*1]), &(inteval->stack[((hsi*14256+262820)*1+lsi)*1]), &(inteval->stack[((hsi*11880+250940)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+20160)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+277076)*1+lsi)*1]), &(inteval->stack[((hsi*9828+20160)*1+lsi)*1]), &(inteval->stack[((hsi*8424+427268)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+29988)*1+lsi)*1]), &(inteval->stack[((hsi*16848+277076)*1+lsi)*1]), &(inteval->stack[((hsi*14256+262820)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+590240)*1+lsi)*1]), &(inteval->stack[((hsi*23760+29988)*1+lsi)*1]), &(inteval->stack[((hsi*19800+435692)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+455492)*1+lsi)*1]), &(inteval->stack[((hsi*1980+16560)*1+lsi)*1]), &(inteval->stack[((hsi*1620+18540)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+460352)*1+lsi)*1]), &(inteval->stack[((hsi*5940+245000)*1+lsi)*1]), &(inteval->stack[((hsi*4860+455492)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+619940)*1+lsi)*1]), &(inteval->stack[((hsi*11880+250940)*1+lsi)*1]), &(inteval->stack[((hsi*9720+460352)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+245000)*1+lsi)*1]), &(inteval->stack[((hsi*19800+435692)*1+lsi)*1]), &(inteval->stack[((hsi*16200+619940)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+420140)*1+lsi)*1]), &(inteval->stack[((hsi*29700+590240)*1+lsi)*1]), &(inteval->stack[((hsi*24300+245000)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+245000)*1+lsi)*1]), &(inteval->stack[((hsi*4320+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+454160)*1+lsi)*1]), &(inteval->stack[((hsi*11340+245000)*1+lsi)*1]), &(inteval->stack[((hsi*9828+20160)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+245000)*1+lsi)*1]), &(inteval->stack[((hsi*19656+454160)*1+lsi)*1]), &(inteval->stack[((hsi*16848+277076)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+619940)*1+lsi)*1]), &(inteval->stack[((hsi*28080+245000)*1+lsi)*1]), &(inteval->stack[((hsi*23760+29988)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+245000)*1+lsi)*1]), &(inteval->stack[((hsi*35640+619940)*1+lsi)*1]), &(inteval->stack[((hsi*29700+590240)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+0)*1+lsi)*1]), &(inteval->stack[((hsi*41580+245000)*1+lsi)*1]), &(inteval->stack[((hsi*34020+420140)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*105840+590240)*1+lsi)*1]), &(inteval->stack[((hsi*45360+0)*1+lsi)*1]), &(inteval->stack[((hsi*35280+305480)*1+lsi)*1]),1260);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*158760+696080)*1+lsi)*1]), &(inteval->stack[((hsi*105840+590240)*1+lsi)*1]), &(inteval->stack[((hsi*79380+340760)*1+lsi)*1]),1260);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*189000+56000)*1+lsi)*1]), &(inteval->stack[((hsi*158760+696080)*1+lsi)*1]), &(inteval->stack[((hsi*113400+476840)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*189000+56000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
