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
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_I__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__M__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,106764)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+537964)*1+lsi)*1]), &(inteval->stack[((hsi*2808+81372)*1+lsi)*1]), &(inteval->stack[((hsi*2376+84180)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+545092)*1+lsi)*1]), &(inteval->stack[((hsi*3276+78096)*1+lsi)*1]), &(inteval->stack[((hsi*2808+81372)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+553516)*1+lsi)*1]), &(inteval->stack[((hsi*8424+545092)*1+lsi)*1]), &(inteval->stack[((hsi*7128+537964)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+567772)*1+lsi)*1]), &(inteval->stack[((hsi*3780+74316)*1+lsi)*1]), &(inteval->stack[((hsi*3276+78096)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+577600)*1+lsi)*1]), &(inteval->stack[((hsi*9828+567772)*1+lsi)*1]), &(inteval->stack[((hsi*8424+545092)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+594448)*1+lsi)*1]), &(inteval->stack[((hsi*16848+577600)*1+lsi)*1]), &(inteval->stack[((hsi*14256+553516)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+618208)*1+lsi)*1]), &(inteval->stack[((hsi*4320+69996)*1+lsi)*1]), &(inteval->stack[((hsi*3780+74316)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+629548)*1+lsi)*1]), &(inteval->stack[((hsi*11340+618208)*1+lsi)*1]), &(inteval->stack[((hsi*9828+567772)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+649204)*1+lsi)*1]), &(inteval->stack[((hsi*19656+629548)*1+lsi)*1]), &(inteval->stack[((hsi*16848+577600)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+677284)*1+lsi)*1]), &(inteval->stack[((hsi*28080+649204)*1+lsi)*1]), &(inteval->stack[((hsi*23760+594448)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+567772)*1+lsi)*1]), &(inteval->stack[((hsi*2376+84180)*1+lsi)*1]), &(inteval->stack[((hsi*1980+86556)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+573712)*1+lsi)*1]), &(inteval->stack[((hsi*7128+537964)*1+lsi)*1]), &(inteval->stack[((hsi*5940+567772)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+712924)*1+lsi)*1]), &(inteval->stack[((hsi*14256+553516)*1+lsi)*1]), &(inteval->stack[((hsi*11880+573712)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+537964)*1+lsi)*1]), &(inteval->stack[((hsi*23760+594448)*1+lsi)*1]), &(inteval->stack[((hsi*19800+712924)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+567664)*1+lsi)*1]), &(inteval->stack[((hsi*35640+677284)*1+lsi)*1]), &(inteval->stack[((hsi*29700+537964)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+537964)*1+lsi)*1]), &(inteval->stack[((hsi*4896+65100)*1+lsi)*1]), &(inteval->stack[((hsi*4320+69996)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+65100)*1+lsi)*1]), &(inteval->stack[((hsi*12960+537964)*1+lsi)*1]), &(inteval->stack[((hsi*11340+618208)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+712924)*1+lsi)*1]), &(inteval->stack[((hsi*22680+65100)*1+lsi)*1]), &(inteval->stack[((hsi*19656+629548)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+745684)*1+lsi)*1]), &(inteval->stack[((hsi*32760+712924)*1+lsi)*1]), &(inteval->stack[((hsi*28080+649204)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+609244)*1+lsi)*1]), &(inteval->stack[((hsi*42120+745684)*1+lsi)*1]), &(inteval->stack[((hsi*35640+677284)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+659140)*1+lsi)*1]), &(inteval->stack[((hsi*49896+609244)*1+lsi)*1]), &(inteval->stack[((hsi*41580+567664)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+537964)*1+lsi)*1]), &(inteval->stack[((hsi*3510+56145)*1+lsi)*1]), &(inteval->stack[((hsi*2970+59655)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+546874)*1+lsi)*1]), &(inteval->stack[((hsi*4095+52050)*1+lsi)*1]), &(inteval->stack[((hsi*3510+56145)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+557404)*1+lsi)*1]), &(inteval->stack[((hsi*10530+546874)*1+lsi)*1]), &(inteval->stack[((hsi*8910+537964)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+575224)*1+lsi)*1]), &(inteval->stack[((hsi*4725+47325)*1+lsi)*1]), &(inteval->stack[((hsi*4095+52050)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+587509)*1+lsi)*1]), &(inteval->stack[((hsi*12285+575224)*1+lsi)*1]), &(inteval->stack[((hsi*10530+546874)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+608569)*1+lsi)*1]), &(inteval->stack[((hsi*21060+587509)*1+lsi)*1]), &(inteval->stack[((hsi*17820+557404)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+65100)*1+lsi)*1]), &(inteval->stack[((hsi*5400+41925)*1+lsi)*1]), &(inteval->stack[((hsi*4725+47325)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+714580)*1+lsi)*1]), &(inteval->stack[((hsi*14175+65100)*1+lsi)*1]), &(inteval->stack[((hsi*12285+575224)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+739150)*1+lsi)*1]), &(inteval->stack[((hsi*24570+714580)*1+lsi)*1]), &(inteval->stack[((hsi*21060+587509)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+774250)*1+lsi)*1]), &(inteval->stack[((hsi*35100+739150)*1+lsi)*1]), &(inteval->stack[((hsi*29700+608569)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+575224)*1+lsi)*1]), &(inteval->stack[((hsi*2970+59655)*1+lsi)*1]), &(inteval->stack[((hsi*2475+62625)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+582649)*1+lsi)*1]), &(inteval->stack[((hsi*8910+537964)*1+lsi)*1]), &(inteval->stack[((hsi*7425+575224)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+818800)*1+lsi)*1]), &(inteval->stack[((hsi*17820+557404)*1+lsi)*1]), &(inteval->stack[((hsi*14850+582649)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+537964)*1+lsi)*1]), &(inteval->stack[((hsi*29700+608569)*1+lsi)*1]), &(inteval->stack[((hsi*24750+818800)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+575089)*1+lsi)*1]), &(inteval->stack[((hsi*44550+774250)*1+lsi)*1]), &(inteval->stack[((hsi*37125+537964)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+537964)*1+lsi)*1]), &(inteval->stack[((hsi*6120+35805)*1+lsi)*1]), &(inteval->stack[((hsi*5400+41925)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+627064)*1+lsi)*1]), &(inteval->stack[((hsi*16200+537964)*1+lsi)*1]), &(inteval->stack[((hsi*14175+65100)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+35805)*1+lsi)*1]), &(inteval->stack[((hsi*28350+627064)*1+lsi)*1]), &(inteval->stack[((hsi*24570+714580)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+818800)*1+lsi)*1]), &(inteval->stack[((hsi*40950+35805)*1+lsi)*1]), &(inteval->stack[((hsi*35100+739150)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+871450)*1+lsi)*1]), &(inteval->stack[((hsi*52650+818800)*1+lsi)*1]), &(inteval->stack[((hsi*44550+774250)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+714580)*1+lsi)*1]), &(inteval->stack[((hsi*62370+871450)*1+lsi)*1]), &(inteval->stack[((hsi*51975+575089)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*166320+783880)*1+lsi)*1]), &(inteval->stack[((hsi*69300+714580)*1+lsi)*1]), &(inteval->stack[((hsi*55440+659140)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+537964)*1+lsi)*1]), &(inteval->stack[((hsi*2184+101192)*1+lsi)*1]), &(inteval->stack[((hsi*1848+103376)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+543508)*1+lsi)*1]), &(inteval->stack[((hsi*2548+98644)*1+lsi)*1]), &(inteval->stack[((hsi*2184+101192)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+550060)*1+lsi)*1]), &(inteval->stack[((hsi*6552+543508)*1+lsi)*1]), &(inteval->stack[((hsi*5544+537964)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+561148)*1+lsi)*1]), &(inteval->stack[((hsi*2940+95704)*1+lsi)*1]), &(inteval->stack[((hsi*2548+98644)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+568792)*1+lsi)*1]), &(inteval->stack[((hsi*7644+561148)*1+lsi)*1]), &(inteval->stack[((hsi*6552+543508)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+581896)*1+lsi)*1]), &(inteval->stack[((hsi*13104+568792)*1+lsi)*1]), &(inteval->stack[((hsi*11088+550060)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+600376)*1+lsi)*1]), &(inteval->stack[((hsi*3360+92344)*1+lsi)*1]), &(inteval->stack[((hsi*2940+95704)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+35805)*1+lsi)*1]), &(inteval->stack[((hsi*8820+600376)*1+lsi)*1]), &(inteval->stack[((hsi*7644+561148)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+609196)*1+lsi)*1]), &(inteval->stack[((hsi*15288+35805)*1+lsi)*1]), &(inteval->stack[((hsi*13104+568792)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+51093)*1+lsi)*1]), &(inteval->stack[((hsi*21840+609196)*1+lsi)*1]), &(inteval->stack[((hsi*18480+581896)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+631036)*1+lsi)*1]), &(inteval->stack[((hsi*1848+103376)*1+lsi)*1]), &(inteval->stack[((hsi*1540+105224)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+635656)*1+lsi)*1]), &(inteval->stack[((hsi*5544+537964)*1+lsi)*1]), &(inteval->stack[((hsi*4620+631036)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+561148)*1+lsi)*1]), &(inteval->stack[((hsi*11088+550060)*1+lsi)*1]), &(inteval->stack[((hsi*9240+635656)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+631036)*1+lsi)*1]), &(inteval->stack[((hsi*18480+581896)*1+lsi)*1]), &(inteval->stack[((hsi*15400+561148)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+537964)*1+lsi)*1]), &(inteval->stack[((hsi*27720+51093)*1+lsi)*1]), &(inteval->stack[((hsi*23100+631036)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+570304)*1+lsi)*1]), &(inteval->stack[((hsi*3808+88536)*1+lsi)*1]), &(inteval->stack[((hsi*3360+92344)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+631036)*1+lsi)*1]), &(inteval->stack[((hsi*10080+570304)*1+lsi)*1]), &(inteval->stack[((hsi*8820+600376)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+570304)*1+lsi)*1]), &(inteval->stack[((hsi*17640+631036)*1+lsi)*1]), &(inteval->stack[((hsi*15288+35805)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+950200)*1+lsi)*1]), &(inteval->stack[((hsi*25480+570304)*1+lsi)*1]), &(inteval->stack[((hsi*21840+609196)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+570304)*1+lsi)*1]), &(inteval->stack[((hsi*32760+950200)*1+lsi)*1]), &(inteval->stack[((hsi*27720+51093)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+35805)*1+lsi)*1]), &(inteval->stack[((hsi*38808+570304)*1+lsi)*1]), &(inteval->stack[((hsi*32340+537964)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*129360+950200)*1+lsi)*1]), &(inteval->stack[((hsi*55440+659140)*1+lsi)*1]), &(inteval->stack[((hsi*43120+35805)*1+lsi)*1]),1540);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*258720+1079560)*1+lsi)*1]), &(inteval->stack[((hsi*166320+783880)*1+lsi)*1]), &(inteval->stack[((hsi*129360+950200)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+537964)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+548854)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+561724)*1+lsi)*1]), &(inteval->stack[((hsi*12870+548854)*1+lsi)*1]), &(inteval->stack[((hsi*10890+537964)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+583504)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+950200)*1+lsi)*1]), &(inteval->stack[((hsi*15015+583504)*1+lsi)*1]), &(inteval->stack[((hsi*12870+548854)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+598519)*1+lsi)*1]), &(inteval->stack[((hsi*25740+950200)*1+lsi)*1]), &(inteval->stack[((hsi*21780+561724)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+975940)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+993265)*1+lsi)*1]), &(inteval->stack[((hsi*17325+975940)*1+lsi)*1]), &(inteval->stack[((hsi*15015+583504)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+634819)*1+lsi)*1]), &(inteval->stack[((hsi*30030+993265)*1+lsi)*1]), &(inteval->stack[((hsi*25740+950200)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+35805)*1+lsi)*1]), &(inteval->stack[((hsi*42900+634819)*1+lsi)*1]), &(inteval->stack[((hsi*36300+598519)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+1023295)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]), &(inteval->stack[((hsi*3025+32780)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+1032370)*1+lsi)*1]), &(inteval->stack[((hsi*10890+537964)*1+lsi)*1]), &(inteval->stack[((hsi*9075+1023295)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+677719)*1+lsi)*1]), &(inteval->stack[((hsi*21780+561724)*1+lsi)*1]), &(inteval->stack[((hsi*18150+1032370)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+537964)*1+lsi)*1]), &(inteval->stack[((hsi*36300+598519)*1+lsi)*1]), &(inteval->stack[((hsi*30250+677719)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+1338280)*1+lsi)*1]), &(inteval->stack[((hsi*54450+35805)*1+lsi)*1]), &(inteval->stack[((hsi*45375+537964)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+537964)*1+lsi)*1]), &(inteval->stack[((hsi*7480+0)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+557764)*1+lsi)*1]), &(inteval->stack[((hsi*19800+537964)*1+lsi)*1]), &(inteval->stack[((hsi*17325+975940)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+1023295)*1+lsi)*1]), &(inteval->stack[((hsi*34650+557764)*1+lsi)*1]), &(inteval->stack[((hsi*30030+993265)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+537964)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1023295)*1+lsi)*1]), &(inteval->stack[((hsi*42900+634819)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+950200)*1+lsi)*1]), &(inteval->stack[((hsi*64350+537964)*1+lsi)*1]), &(inteval->stack[((hsi*54450+35805)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+537964)*1+lsi)*1]), &(inteval->stack[((hsi*76230+950200)*1+lsi)*1]), &(inteval->stack[((hsi*63525+1338280)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*207900+1338280)*1+lsi)*1]), &(inteval->stack[((hsi*84700+537964)*1+lsi)*1]), &(inteval->stack[((hsi*69300+714580)*1+lsi)*1]),1540);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*332640+1546180)*1+lsi)*1]), &(inteval->stack[((hsi*207900+1338280)*1+lsi)*1]), &(inteval->stack[((hsi*166320+783880)*1+lsi)*1]),1540);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*431200+106764)*1+lsi)*1]), &(inteval->stack[((hsi*332640+1546180)*1+lsi)*1]), &(inteval->stack[((hsi*258720+1079560)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*431200+106764)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
