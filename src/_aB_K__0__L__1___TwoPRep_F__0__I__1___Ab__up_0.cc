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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_K__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,113120)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+566720)*1+lsi)*1]), &(inteval->stack[((hsi*2970+85490)*1+lsi)*1]), &(inteval->stack[((hsi*2475+88460)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+574145)*1+lsi)*1]), &(inteval->stack[((hsi*3510+81980)*1+lsi)*1]), &(inteval->stack[((hsi*2970+85490)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+583055)*1+lsi)*1]), &(inteval->stack[((hsi*8910+574145)*1+lsi)*1]), &(inteval->stack[((hsi*7425+566720)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+597905)*1+lsi)*1]), &(inteval->stack[((hsi*4095+77885)*1+lsi)*1]), &(inteval->stack[((hsi*3510+81980)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+608435)*1+lsi)*1]), &(inteval->stack[((hsi*10530+597905)*1+lsi)*1]), &(inteval->stack[((hsi*8910+574145)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+626255)*1+lsi)*1]), &(inteval->stack[((hsi*17820+608435)*1+lsi)*1]), &(inteval->stack[((hsi*14850+583055)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+651005)*1+lsi)*1]), &(inteval->stack[((hsi*4725+73160)*1+lsi)*1]), &(inteval->stack[((hsi*4095+77885)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+663290)*1+lsi)*1]), &(inteval->stack[((hsi*12285+651005)*1+lsi)*1]), &(inteval->stack[((hsi*10530+597905)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+684350)*1+lsi)*1]), &(inteval->stack[((hsi*21060+663290)*1+lsi)*1]), &(inteval->stack[((hsi*17820+608435)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+714050)*1+lsi)*1]), &(inteval->stack[((hsi*29700+684350)*1+lsi)*1]), &(inteval->stack[((hsi*24750+626255)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+597905)*1+lsi)*1]), &(inteval->stack[((hsi*2475+88460)*1+lsi)*1]), &(inteval->stack[((hsi*2025+90935)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+603980)*1+lsi)*1]), &(inteval->stack[((hsi*7425+566720)*1+lsi)*1]), &(inteval->stack[((hsi*6075+597905)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+751175)*1+lsi)*1]), &(inteval->stack[((hsi*14850+583055)*1+lsi)*1]), &(inteval->stack[((hsi*12150+603980)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+566720)*1+lsi)*1]), &(inteval->stack[((hsi*24750+626255)*1+lsi)*1]), &(inteval->stack[((hsi*20250+751175)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+597095)*1+lsi)*1]), &(inteval->stack[((hsi*37125+714050)*1+lsi)*1]), &(inteval->stack[((hsi*30375+566720)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+566720)*1+lsi)*1]), &(inteval->stack[((hsi*5400+67760)*1+lsi)*1]), &(inteval->stack[((hsi*4725+73160)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+67760)*1+lsi)*1]), &(inteval->stack[((hsi*14175+566720)*1+lsi)*1]), &(inteval->stack[((hsi*12285+651005)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+751175)*1+lsi)*1]), &(inteval->stack[((hsi*24570+67760)*1+lsi)*1]), &(inteval->stack[((hsi*21060+663290)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+639620)*1+lsi)*1]), &(inteval->stack[((hsi*35100+751175)*1+lsi)*1]), &(inteval->stack[((hsi*29700+684350)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+751175)*1+lsi)*1]), &(inteval->stack[((hsi*44550+639620)*1+lsi)*1]), &(inteval->stack[((hsi*37125+714050)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+639620)*1+lsi)*1]), &(inteval->stack[((hsi*51975+751175)*1+lsi)*1]), &(inteval->stack[((hsi*42525+597095)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+566720)*1+lsi)*1]), &(inteval->stack[((hsi*3630+58630)*1+lsi)*1]), &(inteval->stack[((hsi*3025+62260)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+575795)*1+lsi)*1]), &(inteval->stack[((hsi*4290+54340)*1+lsi)*1]), &(inteval->stack[((hsi*3630+58630)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+586685)*1+lsi)*1]), &(inteval->stack[((hsi*10890+575795)*1+lsi)*1]), &(inteval->stack[((hsi*9075+566720)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+604835)*1+lsi)*1]), &(inteval->stack[((hsi*5005+49335)*1+lsi)*1]), &(inteval->stack[((hsi*4290+54340)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+67760)*1+lsi)*1]), &(inteval->stack[((hsi*12870+604835)*1+lsi)*1]), &(inteval->stack[((hsi*10890+575795)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+696320)*1+lsi)*1]), &(inteval->stack[((hsi*21780+67760)*1+lsi)*1]), &(inteval->stack[((hsi*18150+586685)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+617705)*1+lsi)*1]), &(inteval->stack[((hsi*5775+43560)*1+lsi)*1]), &(inteval->stack[((hsi*5005+49335)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+726570)*1+lsi)*1]), &(inteval->stack[((hsi*15015+617705)*1+lsi)*1]), &(inteval->stack[((hsi*12870+604835)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+752310)*1+lsi)*1]), &(inteval->stack[((hsi*25740+726570)*1+lsi)*1]), &(inteval->stack[((hsi*21780+67760)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+788610)*1+lsi)*1]), &(inteval->stack[((hsi*36300+752310)*1+lsi)*1]), &(inteval->stack[((hsi*30250+696320)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+67760)*1+lsi)*1]), &(inteval->stack[((hsi*3025+62260)*1+lsi)*1]), &(inteval->stack[((hsi*2475+65285)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+49335)*1+lsi)*1]), &(inteval->stack[((hsi*9075+566720)*1+lsi)*1]), &(inteval->stack[((hsi*7425+67760)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+64185)*1+lsi)*1]), &(inteval->stack[((hsi*18150+586685)*1+lsi)*1]), &(inteval->stack[((hsi*14850+49335)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+566720)*1+lsi)*1]), &(inteval->stack[((hsi*30250+696320)*1+lsi)*1]), &(inteval->stack[((hsi*24750+64185)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+833985)*1+lsi)*1]), &(inteval->stack[((hsi*45375+788610)*1+lsi)*1]), &(inteval->stack[((hsi*37125+566720)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+566720)*1+lsi)*1]), &(inteval->stack[((hsi*6600+36960)*1+lsi)*1]), &(inteval->stack[((hsi*5775+43560)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+36960)*1+lsi)*1]), &(inteval->stack[((hsi*17325+566720)*1+lsi)*1]), &(inteval->stack[((hsi*15015+617705)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+566720)*1+lsi)*1]), &(inteval->stack[((hsi*30030+36960)*1+lsi)*1]), &(inteval->stack[((hsi*25740+726570)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]), &(inteval->stack[((hsi*42900+566720)*1+lsi)*1]), &(inteval->stack[((hsi*36300+752310)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+696320)*1+lsi)*1]), &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]), &(inteval->stack[((hsi*45375+788610)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+759845)*1+lsi)*1]), &(inteval->stack[((hsi*63525+696320)*1+lsi)*1]), &(inteval->stack[((hsi*51975+833985)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*170100+829145)*1+lsi)*1]), &(inteval->stack[((hsi*69300+759845)*1+lsi)*1]), &(inteval->stack[((hsi*56700+639620)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+566720)*1+lsi)*1]), &(inteval->stack[((hsi*2376+107144)*1+lsi)*1]), &(inteval->stack[((hsi*1980+109520)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+572660)*1+lsi)*1]), &(inteval->stack[((hsi*2808+104336)*1+lsi)*1]), &(inteval->stack[((hsi*2376+107144)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+696320)*1+lsi)*1]), &(inteval->stack[((hsi*7128+572660)*1+lsi)*1]), &(inteval->stack[((hsi*5940+566720)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+579788)*1+lsi)*1]), &(inteval->stack[((hsi*3276+101060)*1+lsi)*1]), &(inteval->stack[((hsi*2808+104336)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+36960)*1+lsi)*1]), &(inteval->stack[((hsi*8424+579788)*1+lsi)*1]), &(inteval->stack[((hsi*7128+572660)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+708200)*1+lsi)*1]), &(inteval->stack[((hsi*14256+36960)*1+lsi)*1]), &(inteval->stack[((hsi*11880+696320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+588212)*1+lsi)*1]), &(inteval->stack[((hsi*3780+97280)*1+lsi)*1]), &(inteval->stack[((hsi*3276+101060)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+51216)*1+lsi)*1]), &(inteval->stack[((hsi*9828+588212)*1+lsi)*1]), &(inteval->stack[((hsi*8424+579788)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+598040)*1+lsi)*1]), &(inteval->stack[((hsi*16848+51216)*1+lsi)*1]), &(inteval->stack[((hsi*14256+36960)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+728000)*1+lsi)*1]), &(inteval->stack[((hsi*23760+598040)*1+lsi)*1]), &(inteval->stack[((hsi*19800+708200)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+68064)*1+lsi)*1]), &(inteval->stack[((hsi*1980+109520)*1+lsi)*1]), &(inteval->stack[((hsi*1620+111500)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+72924)*1+lsi)*1]), &(inteval->stack[((hsi*5940+566720)*1+lsi)*1]), &(inteval->stack[((hsi*4860+68064)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+566720)*1+lsi)*1]), &(inteval->stack[((hsi*11880+696320)*1+lsi)*1]), &(inteval->stack[((hsi*9720+72924)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+68064)*1+lsi)*1]), &(inteval->stack[((hsi*19800+708200)*1+lsi)*1]), &(inteval->stack[((hsi*16200+566720)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+999245)*1+lsi)*1]), &(inteval->stack[((hsi*29700+728000)*1+lsi)*1]), &(inteval->stack[((hsi*24300+68064)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+696320)*1+lsi)*1]), &(inteval->stack[((hsi*4320+92960)*1+lsi)*1]), &(inteval->stack[((hsi*3780+97280)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+68064)*1+lsi)*1]), &(inteval->stack[((hsi*11340+696320)*1+lsi)*1]), &(inteval->stack[((hsi*9828+588212)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+696320)*1+lsi)*1]), &(inteval->stack[((hsi*19656+68064)*1+lsi)*1]), &(inteval->stack[((hsi*16848+51216)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+36960)*1+lsi)*1]), &(inteval->stack[((hsi*28080+696320)*1+lsi)*1]), &(inteval->stack[((hsi*23760+598040)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+566720)*1+lsi)*1]), &(inteval->stack[((hsi*35640+36960)*1+lsi)*1]), &(inteval->stack[((hsi*29700+728000)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+36960)*1+lsi)*1]), &(inteval->stack[((hsi*41580+566720)*1+lsi)*1]), &(inteval->stack[((hsi*34020+999245)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*136080+999245)*1+lsi)*1]), &(inteval->stack[((hsi*56700+639620)*1+lsi)*1]), &(inteval->stack[((hsi*45360+36960)*1+lsi)*1]),1260);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*272160+1135325)*1+lsi)*1]), &(inteval->stack[((hsi*170100+829145)*1+lsi)*1]), &(inteval->stack[((hsi*136080+999245)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+566720)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]), &(inteval->stack[((hsi*3630+30360)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+577610)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]), &(inteval->stack[((hsi*4356+26004)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+590678)*1+lsi)*1]), &(inteval->stack[((hsi*13068+577610)*1+lsi)*1]), &(inteval->stack[((hsi*10890+566720)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+612458)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]), &(inteval->stack[((hsi*5148+20856)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+999245)*1+lsi)*1]), &(inteval->stack[((hsi*15444+612458)*1+lsi)*1]), &(inteval->stack[((hsi*13068+577610)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+627902)*1+lsi)*1]), &(inteval->stack[((hsi*26136+999245)*1+lsi)*1]), &(inteval->stack[((hsi*21780+590678)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1025381)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]), &(inteval->stack[((hsi*6006+14850)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+664202)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1025381)*1+lsi)*1]), &(inteval->stack[((hsi*15444+612458)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1043399)*1+lsi)*1]), &(inteval->stack[((hsi*30888+664202)*1+lsi)*1]), &(inteval->stack[((hsi*26136+999245)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1043399)*1+lsi)*1]), &(inteval->stack[((hsi*36300+627902)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+695090)*1+lsi)*1]), &(inteval->stack[((hsi*3630+30360)*1+lsi)*1]), &(inteval->stack[((hsi*2970+33990)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+704000)*1+lsi)*1]), &(inteval->stack[((hsi*10890+566720)*1+lsi)*1]), &(inteval->stack[((hsi*8910+695090)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+1086959)*1+lsi)*1]), &(inteval->stack[((hsi*21780+590678)*1+lsi)*1]), &(inteval->stack[((hsi*17820+704000)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+695090)*1+lsi)*1]), &(inteval->stack[((hsi*36300+627902)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1086959)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+566720)*1+lsi)*1]), &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]), &(inteval->stack[((hsi*44550+695090)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+695090)*1+lsi)*1]), &(inteval->stack[((hsi*7920+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+7920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1086959)*1+lsi)*1]), &(inteval->stack[((hsi*20790+695090)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1025381)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+695090)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1086959)*1+lsi)*1]), &(inteval->stack[((hsi*30888+664202)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+629090)*1+lsi)*1]), &(inteval->stack[((hsi*51480+695090)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1043399)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+999245)*1+lsi)*1]), &(inteval->stack[((hsi*65340+629090)*1+lsi)*1]), &(inteval->stack[((hsi*54450+36960)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+629090)*1+lsi)*1]), &(inteval->stack[((hsi*76230+999245)*1+lsi)*1]), &(inteval->stack[((hsi*62370+566720)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*207900+1407485)*1+lsi)*1]), &(inteval->stack[((hsi*83160+629090)*1+lsi)*1]), &(inteval->stack[((hsi*69300+759845)*1+lsi)*1]),1260);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*340200+1615385)*1+lsi)*1]), &(inteval->stack[((hsi*207900+1407485)*1+lsi)*1]), &(inteval->stack[((hsi*170100+829145)*1+lsi)*1]),1260);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*453600+113120)*1+lsi)*1]), &(inteval->stack[((hsi*340200+1615385)*1+lsi)*1]), &(inteval->stack[((hsi*272160+1135325)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*453600+113120)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
