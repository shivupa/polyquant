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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
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
#include <_aB_K__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,76160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+348320)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48530)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51500)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+355745)*1+lsi)*1]), &(inteval->stack[((hsi*3510+45020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48530)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+364655)*1+lsi)*1]), &(inteval->stack[((hsi*8910+355745)*1+lsi)*1]), &(inteval->stack[((hsi*7425+348320)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+379505)*1+lsi)*1]), &(inteval->stack[((hsi*4095+40925)*1+lsi)*1]), &(inteval->stack[((hsi*3510+45020)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+390035)*1+lsi)*1]), &(inteval->stack[((hsi*10530+379505)*1+lsi)*1]), &(inteval->stack[((hsi*8910+355745)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+407855)*1+lsi)*1]), &(inteval->stack[((hsi*17820+390035)*1+lsi)*1]), &(inteval->stack[((hsi*14850+364655)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+432605)*1+lsi)*1]), &(inteval->stack[((hsi*4725+36200)*1+lsi)*1]), &(inteval->stack[((hsi*4095+40925)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+444890)*1+lsi)*1]), &(inteval->stack[((hsi*12285+432605)*1+lsi)*1]), &(inteval->stack[((hsi*10530+379505)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+465950)*1+lsi)*1]), &(inteval->stack[((hsi*21060+444890)*1+lsi)*1]), &(inteval->stack[((hsi*17820+390035)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+495650)*1+lsi)*1]), &(inteval->stack[((hsi*29700+465950)*1+lsi)*1]), &(inteval->stack[((hsi*24750+407855)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+379505)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51500)*1+lsi)*1]), &(inteval->stack[((hsi*2025+53975)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+385580)*1+lsi)*1]), &(inteval->stack[((hsi*7425+348320)*1+lsi)*1]), &(inteval->stack[((hsi*6075+379505)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+532775)*1+lsi)*1]), &(inteval->stack[((hsi*14850+364655)*1+lsi)*1]), &(inteval->stack[((hsi*12150+385580)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+348320)*1+lsi)*1]), &(inteval->stack[((hsi*24750+407855)*1+lsi)*1]), &(inteval->stack[((hsi*20250+532775)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+378695)*1+lsi)*1]), &(inteval->stack[((hsi*37125+495650)*1+lsi)*1]), &(inteval->stack[((hsi*30375+348320)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+348320)*1+lsi)*1]), &(inteval->stack[((hsi*5400+30800)*1+lsi)*1]), &(inteval->stack[((hsi*4725+36200)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+30800)*1+lsi)*1]), &(inteval->stack[((hsi*14175+348320)*1+lsi)*1]), &(inteval->stack[((hsi*12285+432605)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+532775)*1+lsi)*1]), &(inteval->stack[((hsi*24570+30800)*1+lsi)*1]), &(inteval->stack[((hsi*21060+444890)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+421220)*1+lsi)*1]), &(inteval->stack[((hsi*35100+532775)*1+lsi)*1]), &(inteval->stack[((hsi*29700+465950)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+532775)*1+lsi)*1]), &(inteval->stack[((hsi*44550+421220)*1+lsi)*1]), &(inteval->stack[((hsi*37125+495650)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+421220)*1+lsi)*1]), &(inteval->stack[((hsi*51975+532775)*1+lsi)*1]), &(inteval->stack[((hsi*42525+378695)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+348320)*1+lsi)*1]), &(inteval->stack[((hsi*2376+70184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+72560)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+354260)*1+lsi)*1]), &(inteval->stack[((hsi*2808+67376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+70184)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+361388)*1+lsi)*1]), &(inteval->stack[((hsi*7128+354260)*1+lsi)*1]), &(inteval->stack[((hsi*5940+348320)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+373268)*1+lsi)*1]), &(inteval->stack[((hsi*3276+64100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+67376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+381692)*1+lsi)*1]), &(inteval->stack[((hsi*8424+373268)*1+lsi)*1]), &(inteval->stack[((hsi*7128+354260)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+395948)*1+lsi)*1]), &(inteval->stack[((hsi*14256+381692)*1+lsi)*1]), &(inteval->stack[((hsi*11880+361388)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+30800)*1+lsi)*1]), &(inteval->stack[((hsi*3780+60320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+64100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+477920)*1+lsi)*1]), &(inteval->stack[((hsi*9828+30800)*1+lsi)*1]), &(inteval->stack[((hsi*8424+373268)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+494768)*1+lsi)*1]), &(inteval->stack[((hsi*16848+477920)*1+lsi)*1]), &(inteval->stack[((hsi*14256+381692)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+518528)*1+lsi)*1]), &(inteval->stack[((hsi*23760+494768)*1+lsi)*1]), &(inteval->stack[((hsi*19800+395948)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+373268)*1+lsi)*1]), &(inteval->stack[((hsi*1980+72560)*1+lsi)*1]), &(inteval->stack[((hsi*1620+74540)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+378128)*1+lsi)*1]), &(inteval->stack[((hsi*5940+348320)*1+lsi)*1]), &(inteval->stack[((hsi*4860+373268)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+548228)*1+lsi)*1]), &(inteval->stack[((hsi*11880+361388)*1+lsi)*1]), &(inteval->stack[((hsi*9720+378128)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+348320)*1+lsi)*1]), &(inteval->stack[((hsi*19800+395948)*1+lsi)*1]), &(inteval->stack[((hsi*16200+548228)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+372620)*1+lsi)*1]), &(inteval->stack[((hsi*29700+518528)*1+lsi)*1]), &(inteval->stack[((hsi*24300+348320)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+348320)*1+lsi)*1]), &(inteval->stack[((hsi*4320+56000)*1+lsi)*1]), &(inteval->stack[((hsi*3780+60320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+40628)*1+lsi)*1]), &(inteval->stack[((hsi*11340+348320)*1+lsi)*1]), &(inteval->stack[((hsi*9828+30800)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+548228)*1+lsi)*1]), &(inteval->stack[((hsi*19656+40628)*1+lsi)*1]), &(inteval->stack[((hsi*16848+477920)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+30800)*1+lsi)*1]), &(inteval->stack[((hsi*28080+548228)*1+lsi)*1]), &(inteval->stack[((hsi*23760+494768)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+548228)*1+lsi)*1]), &(inteval->stack[((hsi*35640+30800)*1+lsi)*1]), &(inteval->stack[((hsi*29700+518528)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+30800)*1+lsi)*1]), &(inteval->stack[((hsi*41580+548228)*1+lsi)*1]), &(inteval->stack[((hsi*34020+372620)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*136080+477920)*1+lsi)*1]), &(inteval->stack[((hsi*56700+421220)*1+lsi)*1]), &(inteval->stack[((hsi*45360+30800)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+348320)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+357395)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+368285)*1+lsi)*1]), &(inteval->stack[((hsi*10890+357395)*1+lsi)*1]), &(inteval->stack[((hsi*9075+348320)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+30800)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+386435)*1+lsi)*1]), &(inteval->stack[((hsi*12870+30800)*1+lsi)*1]), &(inteval->stack[((hsi*10890+357395)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+43670)*1+lsi)*1]), &(inteval->stack[((hsi*21780+386435)*1+lsi)*1]), &(inteval->stack[((hsi*18150+368285)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+614000)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+629015)*1+lsi)*1]), &(inteval->stack[((hsi*15015+614000)*1+lsi)*1]), &(inteval->stack[((hsi*12870+30800)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+654755)*1+lsi)*1]), &(inteval->stack[((hsi*25740+629015)*1+lsi)*1]), &(inteval->stack[((hsi*21780+386435)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+691055)*1+lsi)*1]), &(inteval->stack[((hsi*36300+654755)*1+lsi)*1]), &(inteval->stack[((hsi*30250+43670)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+386435)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]), &(inteval->stack[((hsi*2475+28325)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+12375)*1+lsi)*1]), &(inteval->stack[((hsi*9075+348320)*1+lsi)*1]), &(inteval->stack[((hsi*7425+386435)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+386435)*1+lsi)*1]), &(inteval->stack[((hsi*18150+368285)*1+lsi)*1]), &(inteval->stack[((hsi*14850+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+348320)*1+lsi)*1]), &(inteval->stack[((hsi*30250+43670)*1+lsi)*1]), &(inteval->stack[((hsi*24750+386435)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+12375)*1+lsi)*1]), &(inteval->stack[((hsi*45375+691055)*1+lsi)*1]), &(inteval->stack[((hsi*37125+348320)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+348320)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+365645)*1+lsi)*1]), &(inteval->stack[((hsi*17325+348320)*1+lsi)*1]), &(inteval->stack[((hsi*15015+614000)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+736430)*1+lsi)*1]), &(inteval->stack[((hsi*30030+365645)*1+lsi)*1]), &(inteval->stack[((hsi*25740+629015)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+348320)*1+lsi)*1]), &(inteval->stack[((hsi*42900+736430)*1+lsi)*1]), &(inteval->stack[((hsi*36300+654755)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+614000)*1+lsi)*1]), &(inteval->stack[((hsi*54450+348320)*1+lsi)*1]), &(inteval->stack[((hsi*45375+691055)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+348320)*1+lsi)*1]), &(inteval->stack[((hsi*63525+614000)*1+lsi)*1]), &(inteval->stack[((hsi*51975+12375)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*170100+614000)*1+lsi)*1]), &(inteval->stack[((hsi*69300+348320)*1+lsi)*1]), &(inteval->stack[((hsi*56700+421220)*1+lsi)*1]),1260);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*272160+76160)*1+lsi)*1]), &(inteval->stack[((hsi*170100+614000)*1+lsi)*1]), &(inteval->stack[((hsi*136080+477920)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*272160+76160)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
