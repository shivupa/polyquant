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
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
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
#include <_aB_H__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,72800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+337400)*1+lsi)*1]), &(inteval->stack[((hsi*1848+56392)*1+lsi)*1]), &(inteval->stack[((hsi*1540+58240)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+342020)*1+lsi)*1]), &(inteval->stack[((hsi*2184+54208)*1+lsi)*1]), &(inteval->stack[((hsi*1848+56392)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+347564)*1+lsi)*1]), &(inteval->stack[((hsi*5544+342020)*1+lsi)*1]), &(inteval->stack[((hsi*4620+337400)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+356804)*1+lsi)*1]), &(inteval->stack[((hsi*2548+51660)*1+lsi)*1]), &(inteval->stack[((hsi*2184+54208)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+363356)*1+lsi)*1]), &(inteval->stack[((hsi*6552+356804)*1+lsi)*1]), &(inteval->stack[((hsi*5544+342020)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+374444)*1+lsi)*1]), &(inteval->stack[((hsi*11088+363356)*1+lsi)*1]), &(inteval->stack[((hsi*9240+347564)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+389844)*1+lsi)*1]), &(inteval->stack[((hsi*2940+48720)*1+lsi)*1]), &(inteval->stack[((hsi*2548+51660)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+397488)*1+lsi)*1]), &(inteval->stack[((hsi*7644+389844)*1+lsi)*1]), &(inteval->stack[((hsi*6552+356804)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+410592)*1+lsi)*1]), &(inteval->stack[((hsi*13104+397488)*1+lsi)*1]), &(inteval->stack[((hsi*11088+363356)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+429072)*1+lsi)*1]), &(inteval->stack[((hsi*18480+410592)*1+lsi)*1]), &(inteval->stack[((hsi*15400+374444)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+356804)*1+lsi)*1]), &(inteval->stack[((hsi*1540+58240)*1+lsi)*1]), &(inteval->stack[((hsi*1260+59780)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+360584)*1+lsi)*1]), &(inteval->stack[((hsi*4620+337400)*1+lsi)*1]), &(inteval->stack[((hsi*3780+356804)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+452172)*1+lsi)*1]), &(inteval->stack[((hsi*9240+347564)*1+lsi)*1]), &(inteval->stack[((hsi*7560+360584)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+337400)*1+lsi)*1]), &(inteval->stack[((hsi*15400+374444)*1+lsi)*1]), &(inteval->stack[((hsi*12600+452172)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+356300)*1+lsi)*1]), &(inteval->stack[((hsi*23100+429072)*1+lsi)*1]), &(inteval->stack[((hsi*18900+337400)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+337400)*1+lsi)*1]), &(inteval->stack[((hsi*3360+45360)*1+lsi)*1]), &(inteval->stack[((hsi*2940+48720)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+45360)*1+lsi)*1]), &(inteval->stack[((hsi*8820+337400)*1+lsi)*1]), &(inteval->stack[((hsi*7644+389844)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+452172)*1+lsi)*1]), &(inteval->stack[((hsi*15288+45360)*1+lsi)*1]), &(inteval->stack[((hsi*13104+397488)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+382760)*1+lsi)*1]), &(inteval->stack[((hsi*21840+452172)*1+lsi)*1]), &(inteval->stack[((hsi*18480+410592)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+452172)*1+lsi)*1]), &(inteval->stack[((hsi*27720+382760)*1+lsi)*1]), &(inteval->stack[((hsi*23100+429072)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+382760)*1+lsi)*1]), &(inteval->stack[((hsi*32340+452172)*1+lsi)*1]), &(inteval->stack[((hsi*26460+356300)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+337400)*1+lsi)*1]), &(inteval->stack[((hsi*2376+39384)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41760)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+343340)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36576)*1+lsi)*1]), &(inteval->stack[((hsi*2376+39384)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+350468)*1+lsi)*1]), &(inteval->stack[((hsi*7128+343340)*1+lsi)*1]), &(inteval->stack[((hsi*5940+337400)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+362348)*1+lsi)*1]), &(inteval->stack[((hsi*3276+33300)*1+lsi)*1]), &(inteval->stack[((hsi*2808+36576)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+45360)*1+lsi)*1]), &(inteval->stack[((hsi*8424+362348)*1+lsi)*1]), &(inteval->stack[((hsi*7128+343340)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+418040)*1+lsi)*1]), &(inteval->stack[((hsi*14256+45360)*1+lsi)*1]), &(inteval->stack[((hsi*11880+350468)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+370772)*1+lsi)*1]), &(inteval->stack[((hsi*3780+29520)*1+lsi)*1]), &(inteval->stack[((hsi*3276+33300)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+437840)*1+lsi)*1]), &(inteval->stack[((hsi*9828+370772)*1+lsi)*1]), &(inteval->stack[((hsi*8424+362348)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+454688)*1+lsi)*1]), &(inteval->stack[((hsi*16848+437840)*1+lsi)*1]), &(inteval->stack[((hsi*14256+45360)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+478448)*1+lsi)*1]), &(inteval->stack[((hsi*23760+454688)*1+lsi)*1]), &(inteval->stack[((hsi*19800+418040)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+45360)*1+lsi)*1]), &(inteval->stack[((hsi*1980+41760)*1+lsi)*1]), &(inteval->stack[((hsi*1620+43740)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+33300)*1+lsi)*1]), &(inteval->stack[((hsi*5940+337400)*1+lsi)*1]), &(inteval->stack[((hsi*4860+45360)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+43020)*1+lsi)*1]), &(inteval->stack[((hsi*11880+350468)*1+lsi)*1]), &(inteval->stack[((hsi*9720+33300)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+337400)*1+lsi)*1]), &(inteval->stack[((hsi*19800+418040)*1+lsi)*1]), &(inteval->stack[((hsi*16200+43020)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+508148)*1+lsi)*1]), &(inteval->stack[((hsi*29700+478448)*1+lsi)*1]), &(inteval->stack[((hsi*24300+337400)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+337400)*1+lsi)*1]), &(inteval->stack[((hsi*4320+25200)*1+lsi)*1]), &(inteval->stack[((hsi*3780+29520)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+25200)*1+lsi)*1]), &(inteval->stack[((hsi*11340+337400)*1+lsi)*1]), &(inteval->stack[((hsi*9828+370772)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+337400)*1+lsi)*1]), &(inteval->stack[((hsi*19656+25200)*1+lsi)*1]), &(inteval->stack[((hsi*16848+437840)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+418040)*1+lsi)*1]), &(inteval->stack[((hsi*28080+337400)*1+lsi)*1]), &(inteval->stack[((hsi*23760+454688)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+337400)*1+lsi)*1]), &(inteval->stack[((hsi*35640+418040)*1+lsi)*1]), &(inteval->stack[((hsi*29700+478448)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+418040)*1+lsi)*1]), &(inteval->stack[((hsi*41580+337400)*1+lsi)*1]), &(inteval->stack[((hsi*34020+508148)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*105840+463400)*1+lsi)*1]), &(inteval->stack[((hsi*45360+418040)*1+lsi)*1]), &(inteval->stack[((hsi*35280+382760)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+337400)*1+lsi)*1]), &(inteval->stack[((hsi*1386+69314)*1+lsi)*1]), &(inteval->stack[((hsi*1155+70700)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+340865)*1+lsi)*1]), &(inteval->stack[((hsi*1638+67676)*1+lsi)*1]), &(inteval->stack[((hsi*1386+69314)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+345023)*1+lsi)*1]), &(inteval->stack[((hsi*4158+340865)*1+lsi)*1]), &(inteval->stack[((hsi*3465+337400)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+25200)*1+lsi)*1]), &(inteval->stack[((hsi*1911+65765)*1+lsi)*1]), &(inteval->stack[((hsi*1638+67676)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+30114)*1+lsi)*1]), &(inteval->stack[((hsi*4914+25200)*1+lsi)*1]), &(inteval->stack[((hsi*4158+340865)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+351953)*1+lsi)*1]), &(inteval->stack[((hsi*8316+30114)*1+lsi)*1]), &(inteval->stack[((hsi*6930+345023)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+38430)*1+lsi)*1]), &(inteval->stack[((hsi*2205+63560)*1+lsi)*1]), &(inteval->stack[((hsi*1911+65765)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+363503)*1+lsi)*1]), &(inteval->stack[((hsi*5733+38430)*1+lsi)*1]), &(inteval->stack[((hsi*4914+25200)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+44163)*1+lsi)*1]), &(inteval->stack[((hsi*9828+363503)*1+lsi)*1]), &(inteval->stack[((hsi*8316+30114)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+569240)*1+lsi)*1]), &(inteval->stack[((hsi*13860+44163)*1+lsi)*1]), &(inteval->stack[((hsi*11550+351953)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+25200)*1+lsi)*1]), &(inteval->stack[((hsi*1155+70700)*1+lsi)*1]), &(inteval->stack[((hsi*945+71855)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+28035)*1+lsi)*1]), &(inteval->stack[((hsi*3465+337400)*1+lsi)*1]), &(inteval->stack[((hsi*2835+25200)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+586565)*1+lsi)*1]), &(inteval->stack[((hsi*6930+345023)*1+lsi)*1]), &(inteval->stack[((hsi*5670+28035)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+337400)*1+lsi)*1]), &(inteval->stack[((hsi*11550+351953)*1+lsi)*1]), &(inteval->stack[((hsi*9450+586565)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+586565)*1+lsi)*1]), &(inteval->stack[((hsi*17325+569240)*1+lsi)*1]), &(inteval->stack[((hsi*14175+337400)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+337400)*1+lsi)*1]), &(inteval->stack[((hsi*2520+61040)*1+lsi)*1]), &(inteval->stack[((hsi*2205+63560)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+344015)*1+lsi)*1]), &(inteval->stack[((hsi*6615+337400)*1+lsi)*1]), &(inteval->stack[((hsi*5733+38430)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+25200)*1+lsi)*1]), &(inteval->stack[((hsi*11466+344015)*1+lsi)*1]), &(inteval->stack[((hsi*9828+363503)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+337400)*1+lsi)*1]), &(inteval->stack[((hsi*16380+25200)*1+lsi)*1]), &(inteval->stack[((hsi*13860+44163)*1+lsi)*1]),21);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*24255+25200)*1+lsi)*1]), &(inteval->stack[((hsi*20790+337400)*1+lsi)*1]), &(inteval->stack[((hsi*17325+569240)*1+lsi)*1]),21);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*26460+337400)*1+lsi)*1]), &(inteval->stack[((hsi*24255+25200)*1+lsi)*1]), &(inteval->stack[((hsi*19845+586565)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*79380+569240)*1+lsi)*1]), &(inteval->stack[((hsi*35280+382760)*1+lsi)*1]), &(inteval->stack[((hsi*26460+337400)*1+lsi)*1]),1260);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*158760+648620)*1+lsi)*1]), &(inteval->stack[((hsi*105840+463400)*1+lsi)*1]), &(inteval->stack[((hsi*79380+569240)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+337400)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+569240)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]), &(inteval->stack[((hsi*2970+17730)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+344825)*1+lsi)*1]), &(inteval->stack[((hsi*8910+569240)*1+lsi)*1]), &(inteval->stack[((hsi*7425+337400)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+578150)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]), &(inteval->stack[((hsi*3510+14220)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+588680)*1+lsi)*1]), &(inteval->stack[((hsi*10530+578150)*1+lsi)*1]), &(inteval->stack[((hsi*8910+569240)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+359675)*1+lsi)*1]), &(inteval->stack[((hsi*17820+588680)*1+lsi)*1]), &(inteval->stack[((hsi*14850+344825)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+25200)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]), &(inteval->stack[((hsi*4095+10125)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+606500)*1+lsi)*1]), &(inteval->stack[((hsi*12285+25200)*1+lsi)*1]), &(inteval->stack[((hsi*10530+578150)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+37485)*1+lsi)*1]), &(inteval->stack[((hsi*21060+606500)*1+lsi)*1]), &(inteval->stack[((hsi*17820+588680)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+569240)*1+lsi)*1]), &(inteval->stack[((hsi*29700+37485)*1+lsi)*1]), &(inteval->stack[((hsi*24750+359675)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+384425)*1+lsi)*1]), &(inteval->stack[((hsi*2475+20700)*1+lsi)*1]), &(inteval->stack[((hsi*2025+23175)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+390500)*1+lsi)*1]), &(inteval->stack[((hsi*7425+337400)*1+lsi)*1]), &(inteval->stack[((hsi*6075+384425)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+627560)*1+lsi)*1]), &(inteval->stack[((hsi*14850+344825)*1+lsi)*1]), &(inteval->stack[((hsi*12150+390500)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+384425)*1+lsi)*1]), &(inteval->stack[((hsi*24750+359675)*1+lsi)*1]), &(inteval->stack[((hsi*20250+627560)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+337400)*1+lsi)*1]), &(inteval->stack[((hsi*37125+569240)*1+lsi)*1]), &(inteval->stack[((hsi*30375+384425)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+379925)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4725+5400)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*14175+379925)*1+lsi)*1]), &(inteval->stack[((hsi*12285+25200)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+379925)*1+lsi)*1]), &(inteval->stack[((hsi*24570+0)*1+lsi)*1]), &(inteval->stack[((hsi*21060+606500)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+807380)*1+lsi)*1]), &(inteval->stack[((hsi*35100+379925)*1+lsi)*1]), &(inteval->stack[((hsi*29700+37485)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+0)*1+lsi)*1]), &(inteval->stack[((hsi*44550+807380)*1+lsi)*1]), &(inteval->stack[((hsi*37125+569240)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+569240)*1+lsi)*1]), &(inteval->stack[((hsi*51975+0)*1+lsi)*1]), &(inteval->stack[((hsi*42525+337400)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*136080+807380)*1+lsi)*1]), &(inteval->stack[((hsi*56700+569240)*1+lsi)*1]), &(inteval->stack[((hsi*45360+418040)*1+lsi)*1]),1260);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*211680+943460)*1+lsi)*1]), &(inteval->stack[((hsi*136080+807380)*1+lsi)*1]), &(inteval->stack[((hsi*105840+463400)*1+lsi)*1]),1260);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*264600+72800)*1+lsi)*1]), &(inteval->stack[((hsi*211680+943460)*1+lsi)*1]), &(inteval->stack[((hsi*158760+648620)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*264600+72800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
