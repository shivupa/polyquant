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
#include <_aB_I__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,91840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+444640)*1+lsi)*1]), &(inteval->stack[((hsi*2376+70184)*1+lsi)*1]), &(inteval->stack[((hsi*1980+72560)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+450580)*1+lsi)*1]), &(inteval->stack[((hsi*2808+67376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+70184)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+457708)*1+lsi)*1]), &(inteval->stack[((hsi*7128+450580)*1+lsi)*1]), &(inteval->stack[((hsi*5940+444640)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+469588)*1+lsi)*1]), &(inteval->stack[((hsi*3276+64100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+67376)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+478012)*1+lsi)*1]), &(inteval->stack[((hsi*8424+469588)*1+lsi)*1]), &(inteval->stack[((hsi*7128+450580)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+492268)*1+lsi)*1]), &(inteval->stack[((hsi*14256+478012)*1+lsi)*1]), &(inteval->stack[((hsi*11880+457708)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+512068)*1+lsi)*1]), &(inteval->stack[((hsi*3780+60320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+64100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+521896)*1+lsi)*1]), &(inteval->stack[((hsi*9828+512068)*1+lsi)*1]), &(inteval->stack[((hsi*8424+469588)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+538744)*1+lsi)*1]), &(inteval->stack[((hsi*16848+521896)*1+lsi)*1]), &(inteval->stack[((hsi*14256+478012)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+562504)*1+lsi)*1]), &(inteval->stack[((hsi*23760+538744)*1+lsi)*1]), &(inteval->stack[((hsi*19800+492268)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+469588)*1+lsi)*1]), &(inteval->stack[((hsi*1980+72560)*1+lsi)*1]), &(inteval->stack[((hsi*1620+74540)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+474448)*1+lsi)*1]), &(inteval->stack[((hsi*5940+444640)*1+lsi)*1]), &(inteval->stack[((hsi*4860+469588)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+592204)*1+lsi)*1]), &(inteval->stack[((hsi*11880+457708)*1+lsi)*1]), &(inteval->stack[((hsi*9720+474448)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+444640)*1+lsi)*1]), &(inteval->stack[((hsi*19800+492268)*1+lsi)*1]), &(inteval->stack[((hsi*16200+592204)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+468940)*1+lsi)*1]), &(inteval->stack[((hsi*29700+562504)*1+lsi)*1]), &(inteval->stack[((hsi*24300+444640)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+444640)*1+lsi)*1]), &(inteval->stack[((hsi*4320+56000)*1+lsi)*1]), &(inteval->stack[((hsi*3780+60320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+56000)*1+lsi)*1]), &(inteval->stack[((hsi*11340+444640)*1+lsi)*1]), &(inteval->stack[((hsi*9828+512068)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+592204)*1+lsi)*1]), &(inteval->stack[((hsi*19656+56000)*1+lsi)*1]), &(inteval->stack[((hsi*16848+521896)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+502960)*1+lsi)*1]), &(inteval->stack[((hsi*28080+592204)*1+lsi)*1]), &(inteval->stack[((hsi*23760+538744)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+592204)*1+lsi)*1]), &(inteval->stack[((hsi*35640+502960)*1+lsi)*1]), &(inteval->stack[((hsi*29700+562504)*1+lsi)*1]),36);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*45360+502960)*1+lsi)*1]), &(inteval->stack[((hsi*41580+592204)*1+lsi)*1]), &(inteval->stack[((hsi*34020+468940)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+444640)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48530)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51500)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+452065)*1+lsi)*1]), &(inteval->stack[((hsi*3510+45020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48530)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+460975)*1+lsi)*1]), &(inteval->stack[((hsi*8910+452065)*1+lsi)*1]), &(inteval->stack[((hsi*7425+444640)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+475825)*1+lsi)*1]), &(inteval->stack[((hsi*4095+40925)*1+lsi)*1]), &(inteval->stack[((hsi*3510+45020)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+56000)*1+lsi)*1]), &(inteval->stack[((hsi*10530+475825)*1+lsi)*1]), &(inteval->stack[((hsi*8910+452065)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+548320)*1+lsi)*1]), &(inteval->stack[((hsi*17820+56000)*1+lsi)*1]), &(inteval->stack[((hsi*14850+460975)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+486355)*1+lsi)*1]), &(inteval->stack[((hsi*4725+36200)*1+lsi)*1]), &(inteval->stack[((hsi*4095+40925)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+573070)*1+lsi)*1]), &(inteval->stack[((hsi*12285+486355)*1+lsi)*1]), &(inteval->stack[((hsi*10530+475825)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+594130)*1+lsi)*1]), &(inteval->stack[((hsi*21060+573070)*1+lsi)*1]), &(inteval->stack[((hsi*17820+56000)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+623830)*1+lsi)*1]), &(inteval->stack[((hsi*29700+594130)*1+lsi)*1]), &(inteval->stack[((hsi*24750+548320)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+56000)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51500)*1+lsi)*1]), &(inteval->stack[((hsi*2025+53975)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+40925)*1+lsi)*1]), &(inteval->stack[((hsi*7425+444640)*1+lsi)*1]), &(inteval->stack[((hsi*6075+56000)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+53075)*1+lsi)*1]), &(inteval->stack[((hsi*14850+460975)*1+lsi)*1]), &(inteval->stack[((hsi*12150+40925)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+444640)*1+lsi)*1]), &(inteval->stack[((hsi*24750+548320)*1+lsi)*1]), &(inteval->stack[((hsi*20250+53075)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+660955)*1+lsi)*1]), &(inteval->stack[((hsi*37125+623830)*1+lsi)*1]), &(inteval->stack[((hsi*30375+444640)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+444640)*1+lsi)*1]), &(inteval->stack[((hsi*5400+30800)*1+lsi)*1]), &(inteval->stack[((hsi*4725+36200)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+30800)*1+lsi)*1]), &(inteval->stack[((hsi*14175+444640)*1+lsi)*1]), &(inteval->stack[((hsi*12285+486355)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+444640)*1+lsi)*1]), &(inteval->stack[((hsi*24570+30800)*1+lsi)*1]), &(inteval->stack[((hsi*21060+573070)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+548320)*1+lsi)*1]), &(inteval->stack[((hsi*35100+444640)*1+lsi)*1]), &(inteval->stack[((hsi*29700+594130)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+444640)*1+lsi)*1]), &(inteval->stack[((hsi*44550+548320)*1+lsi)*1]), &(inteval->stack[((hsi*37125+623830)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+548320)*1+lsi)*1]), &(inteval->stack[((hsi*51975+444640)*1+lsi)*1]), &(inteval->stack[((hsi*42525+660955)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*136080+605020)*1+lsi)*1]), &(inteval->stack[((hsi*56700+548320)*1+lsi)*1]), &(inteval->stack[((hsi*45360+502960)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+444640)*1+lsi)*1]), &(inteval->stack[((hsi*1848+87192)*1+lsi)*1]), &(inteval->stack[((hsi*1540+89040)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+449260)*1+lsi)*1]), &(inteval->stack[((hsi*2184+85008)*1+lsi)*1]), &(inteval->stack[((hsi*1848+87192)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+454804)*1+lsi)*1]), &(inteval->stack[((hsi*5544+449260)*1+lsi)*1]), &(inteval->stack[((hsi*4620+444640)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+30800)*1+lsi)*1]), &(inteval->stack[((hsi*2548+82460)*1+lsi)*1]), &(inteval->stack[((hsi*2184+85008)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+464044)*1+lsi)*1]), &(inteval->stack[((hsi*6552+30800)*1+lsi)*1]), &(inteval->stack[((hsi*5544+449260)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+37352)*1+lsi)*1]), &(inteval->stack[((hsi*11088+464044)*1+lsi)*1]), &(inteval->stack[((hsi*9240+454804)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+475132)*1+lsi)*1]), &(inteval->stack[((hsi*2940+79520)*1+lsi)*1]), &(inteval->stack[((hsi*2548+82460)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+52752)*1+lsi)*1]), &(inteval->stack[((hsi*7644+475132)*1+lsi)*1]), &(inteval->stack[((hsi*6552+30800)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+482776)*1+lsi)*1]), &(inteval->stack[((hsi*13104+52752)*1+lsi)*1]), &(inteval->stack[((hsi*11088+464044)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+741100)*1+lsi)*1]), &(inteval->stack[((hsi*18480+482776)*1+lsi)*1]), &(inteval->stack[((hsi*15400+37352)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+464044)*1+lsi)*1]), &(inteval->stack[((hsi*1540+89040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+90580)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+65856)*1+lsi)*1]), &(inteval->stack[((hsi*4620+444640)*1+lsi)*1]), &(inteval->stack[((hsi*3780+464044)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+764200)*1+lsi)*1]), &(inteval->stack[((hsi*9240+454804)*1+lsi)*1]), &(inteval->stack[((hsi*7560+65856)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+444640)*1+lsi)*1]), &(inteval->stack[((hsi*15400+37352)*1+lsi)*1]), &(inteval->stack[((hsi*12600+764200)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+764200)*1+lsi)*1]), &(inteval->stack[((hsi*23100+741100)*1+lsi)*1]), &(inteval->stack[((hsi*18900+444640)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+444640)*1+lsi)*1]), &(inteval->stack[((hsi*3360+76160)*1+lsi)*1]), &(inteval->stack[((hsi*2940+79520)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+65856)*1+lsi)*1]), &(inteval->stack[((hsi*8820+444640)*1+lsi)*1]), &(inteval->stack[((hsi*7644+475132)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+444640)*1+lsi)*1]), &(inteval->stack[((hsi*15288+65856)*1+lsi)*1]), &(inteval->stack[((hsi*13104+52752)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+30800)*1+lsi)*1]), &(inteval->stack[((hsi*21840+444640)*1+lsi)*1]), &(inteval->stack[((hsi*18480+482776)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+444640)*1+lsi)*1]), &(inteval->stack[((hsi*27720+30800)*1+lsi)*1]), &(inteval->stack[((hsi*23100+741100)*1+lsi)*1]),28);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*35280+30800)*1+lsi)*1]), &(inteval->stack[((hsi*32340+444640)*1+lsi)*1]), &(inteval->stack[((hsi*26460+764200)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*105840+741100)*1+lsi)*1]), &(inteval->stack[((hsi*45360+502960)*1+lsi)*1]), &(inteval->stack[((hsi*35280+30800)*1+lsi)*1]),1260);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*211680+846940)*1+lsi)*1]), &(inteval->stack[((hsi*136080+605020)*1+lsi)*1]), &(inteval->stack[((hsi*105840+741100)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+741100)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+444640)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+750175)*1+lsi)*1]), &(inteval->stack[((hsi*10890+444640)*1+lsi)*1]), &(inteval->stack[((hsi*9075+741100)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+455530)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+468400)*1+lsi)*1]), &(inteval->stack[((hsi*12870+455530)*1+lsi)*1]), &(inteval->stack[((hsi*10890+444640)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+768325)*1+lsi)*1]), &(inteval->stack[((hsi*21780+468400)*1+lsi)*1]), &(inteval->stack[((hsi*18150+750175)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+30800)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+490180)*1+lsi)*1]), &(inteval->stack[((hsi*15015+30800)*1+lsi)*1]), &(inteval->stack[((hsi*12870+455530)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+798575)*1+lsi)*1]), &(inteval->stack[((hsi*25740+490180)*1+lsi)*1]), &(inteval->stack[((hsi*21780+468400)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+45815)*1+lsi)*1]), &(inteval->stack[((hsi*36300+798575)*1+lsi)*1]), &(inteval->stack[((hsi*30250+768325)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+444640)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]), &(inteval->stack[((hsi*2475+28325)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+452065)*1+lsi)*1]), &(inteval->stack[((hsi*9075+741100)*1+lsi)*1]), &(inteval->stack[((hsi*7425+444640)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+515920)*1+lsi)*1]), &(inteval->stack[((hsi*18150+750175)*1+lsi)*1]), &(inteval->stack[((hsi*14850+452065)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+444640)*1+lsi)*1]), &(inteval->stack[((hsi*30250+768325)*1+lsi)*1]), &(inteval->stack[((hsi*24750+515920)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+741100)*1+lsi)*1]), &(inteval->stack[((hsi*45375+45815)*1+lsi)*1]), &(inteval->stack[((hsi*37125+444640)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+444640)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+515920)*1+lsi)*1]), &(inteval->stack[((hsi*17325+444640)*1+lsi)*1]), &(inteval->stack[((hsi*15015+30800)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+0)*1+lsi)*1]), &(inteval->stack[((hsi*30030+515920)*1+lsi)*1]), &(inteval->stack[((hsi*25740+490180)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+444640)*1+lsi)*1]), &(inteval->stack[((hsi*42900+0)*1+lsi)*1]), &(inteval->stack[((hsi*36300+798575)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+1058620)*1+lsi)*1]), &(inteval->stack[((hsi*54450+444640)*1+lsi)*1]), &(inteval->stack[((hsi*45375+45815)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+444640)*1+lsi)*1]), &(inteval->stack[((hsi*63525+1058620)*1+lsi)*1]), &(inteval->stack[((hsi*51975+741100)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*170100+1058620)*1+lsi)*1]), &(inteval->stack[((hsi*69300+444640)*1+lsi)*1]), &(inteval->stack[((hsi*56700+548320)*1+lsi)*1]),1260);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*272160+1228720)*1+lsi)*1]), &(inteval->stack[((hsi*170100+1058620)*1+lsi)*1]), &(inteval->stack[((hsi*136080+605020)*1+lsi)*1]),1260);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*352800+91840)*1+lsi)*1]), &(inteval->stack[((hsi*272160+1228720)*1+lsi)*1]), &(inteval->stack[((hsi*211680+846940)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*352800+91840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
