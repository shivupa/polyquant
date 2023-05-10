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
#include <_aB_H__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,57200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+255650)*1+lsi)*1]), &(inteval->stack[((hsi*1848+43312)*1+lsi)*1]), &(inteval->stack[((hsi*1540+45160)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+260270)*1+lsi)*1]), &(inteval->stack[((hsi*2184+41128)*1+lsi)*1]), &(inteval->stack[((hsi*1848+43312)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+265814)*1+lsi)*1]), &(inteval->stack[((hsi*5544+260270)*1+lsi)*1]), &(inteval->stack[((hsi*4620+255650)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+275054)*1+lsi)*1]), &(inteval->stack[((hsi*2548+38580)*1+lsi)*1]), &(inteval->stack[((hsi*2184+41128)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+281606)*1+lsi)*1]), &(inteval->stack[((hsi*6552+275054)*1+lsi)*1]), &(inteval->stack[((hsi*5544+260270)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+292694)*1+lsi)*1]), &(inteval->stack[((hsi*11088+281606)*1+lsi)*1]), &(inteval->stack[((hsi*9240+265814)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+260270)*1+lsi)*1]), &(inteval->stack[((hsi*1540+45160)*1+lsi)*1]), &(inteval->stack[((hsi*1260+46700)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+308094)*1+lsi)*1]), &(inteval->stack[((hsi*4620+255650)*1+lsi)*1]), &(inteval->stack[((hsi*3780+260270)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+315654)*1+lsi)*1]), &(inteval->stack[((hsi*9240+265814)*1+lsi)*1]), &(inteval->stack[((hsi*7560+308094)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+255650)*1+lsi)*1]), &(inteval->stack[((hsi*15400+292694)*1+lsi)*1]), &(inteval->stack[((hsi*12600+315654)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+308094)*1+lsi)*1]), &(inteval->stack[((hsi*2940+35640)*1+lsi)*1]), &(inteval->stack[((hsi*2548+38580)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+315738)*1+lsi)*1]), &(inteval->stack[((hsi*7644+308094)*1+lsi)*1]), &(inteval->stack[((hsi*6552+275054)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+328842)*1+lsi)*1]), &(inteval->stack[((hsi*13104+315738)*1+lsi)*1]), &(inteval->stack[((hsi*11088+281606)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+347322)*1+lsi)*1]), &(inteval->stack[((hsi*18480+328842)*1+lsi)*1]), &(inteval->stack[((hsi*15400+292694)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+274550)*1+lsi)*1]), &(inteval->stack[((hsi*23100+347322)*1+lsi)*1]), &(inteval->stack[((hsi*18900+255650)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+255650)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29664)*1+lsi)*1]), &(inteval->stack[((hsi*1980+32040)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+261590)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26856)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29664)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+35640)*1+lsi)*1]), &(inteval->stack[((hsi*7128+261590)*1+lsi)*1]), &(inteval->stack[((hsi*5940+255650)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+301010)*1+lsi)*1]), &(inteval->stack[((hsi*3276+23580)*1+lsi)*1]), &(inteval->stack[((hsi*2808+26856)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+309434)*1+lsi)*1]), &(inteval->stack[((hsi*8424+301010)*1+lsi)*1]), &(inteval->stack[((hsi*7128+261590)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+323690)*1+lsi)*1]), &(inteval->stack[((hsi*14256+309434)*1+lsi)*1]), &(inteval->stack[((hsi*11880+35640)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+261590)*1+lsi)*1]), &(inteval->stack[((hsi*1980+32040)*1+lsi)*1]), &(inteval->stack[((hsi*1620+34020)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+343490)*1+lsi)*1]), &(inteval->stack[((hsi*5940+255650)*1+lsi)*1]), &(inteval->stack[((hsi*4860+261590)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+255650)*1+lsi)*1]), &(inteval->stack[((hsi*11880+35640)*1+lsi)*1]), &(inteval->stack[((hsi*9720+343490)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+343490)*1+lsi)*1]), &(inteval->stack[((hsi*19800+323690)*1+lsi)*1]), &(inteval->stack[((hsi*16200+255650)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+26856)*1+lsi)*1]), &(inteval->stack[((hsi*3780+19800)*1+lsi)*1]), &(inteval->stack[((hsi*3276+23580)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+255650)*1+lsi)*1]), &(inteval->stack[((hsi*9828+26856)*1+lsi)*1]), &(inteval->stack[((hsi*8424+301010)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+19800)*1+lsi)*1]), &(inteval->stack[((hsi*16848+255650)*1+lsi)*1]), &(inteval->stack[((hsi*14256+309434)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+367790)*1+lsi)*1]), &(inteval->stack[((hsi*23760+19800)*1+lsi)*1]), &(inteval->stack[((hsi*19800+323690)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+301010)*1+lsi)*1]), &(inteval->stack[((hsi*29700+367790)*1+lsi)*1]), &(inteval->stack[((hsi*24300+343490)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*79380+335030)*1+lsi)*1]), &(inteval->stack[((hsi*34020+301010)*1+lsi)*1]), &(inteval->stack[((hsi*26460+274550)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+19800)*1+lsi)*1]), &(inteval->stack[((hsi*1386+53714)*1+lsi)*1]), &(inteval->stack[((hsi*1155+55100)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+23265)*1+lsi)*1]), &(inteval->stack[((hsi*1638+52076)*1+lsi)*1]), &(inteval->stack[((hsi*1386+53714)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+27423)*1+lsi)*1]), &(inteval->stack[((hsi*4158+23265)*1+lsi)*1]), &(inteval->stack[((hsi*3465+19800)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+255650)*1+lsi)*1]), &(inteval->stack[((hsi*1911+50165)*1+lsi)*1]), &(inteval->stack[((hsi*1638+52076)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+260564)*1+lsi)*1]), &(inteval->stack[((hsi*4914+255650)*1+lsi)*1]), &(inteval->stack[((hsi*4158+23265)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+34353)*1+lsi)*1]), &(inteval->stack[((hsi*8316+260564)*1+lsi)*1]), &(inteval->stack[((hsi*6930+27423)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+268880)*1+lsi)*1]), &(inteval->stack[((hsi*1155+55100)*1+lsi)*1]), &(inteval->stack[((hsi*945+56255)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+414410)*1+lsi)*1]), &(inteval->stack[((hsi*3465+19800)*1+lsi)*1]), &(inteval->stack[((hsi*2835+268880)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+420080)*1+lsi)*1]), &(inteval->stack[((hsi*6930+27423)*1+lsi)*1]), &(inteval->stack[((hsi*5670+414410)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+19800)*1+lsi)*1]), &(inteval->stack[((hsi*11550+34353)*1+lsi)*1]), &(inteval->stack[((hsi*9450+420080)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+414410)*1+lsi)*1]), &(inteval->stack[((hsi*2205+47960)*1+lsi)*1]), &(inteval->stack[((hsi*1911+50165)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+45903)*1+lsi)*1]), &(inteval->stack[((hsi*5733+414410)*1+lsi)*1]), &(inteval->stack[((hsi*4914+255650)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+414410)*1+lsi)*1]), &(inteval->stack[((hsi*9828+45903)*1+lsi)*1]), &(inteval->stack[((hsi*8316+260564)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+255650)*1+lsi)*1]), &(inteval->stack[((hsi*13860+414410)*1+lsi)*1]), &(inteval->stack[((hsi*11550+34353)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+33975)*1+lsi)*1]), &(inteval->stack[((hsi*17325+255650)*1+lsi)*1]), &(inteval->stack[((hsi*14175+19800)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*59535+414410)*1+lsi)*1]), &(inteval->stack[((hsi*26460+274550)*1+lsi)*1]), &(inteval->stack[((hsi*19845+33975)*1+lsi)*1]),945);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*119070+473945)*1+lsi)*1]), &(inteval->stack[((hsi*79380+335030)*1+lsi)*1]), &(inteval->stack[((hsi*59535+414410)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+414410)*1+lsi)*1]), &(inteval->stack[((hsi*2970+12330)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15300)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+421835)*1+lsi)*1]), &(inteval->stack[((hsi*3510+8820)*1+lsi)*1]), &(inteval->stack[((hsi*2970+12330)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+255650)*1+lsi)*1]), &(inteval->stack[((hsi*8910+421835)*1+lsi)*1]), &(inteval->stack[((hsi*7425+414410)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+430745)*1+lsi)*1]), &(inteval->stack[((hsi*4095+4725)*1+lsi)*1]), &(inteval->stack[((hsi*3510+8820)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+19800)*1+lsi)*1]), &(inteval->stack[((hsi*10530+430745)*1+lsi)*1]), &(inteval->stack[((hsi*8910+421835)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+441275)*1+lsi)*1]), &(inteval->stack[((hsi*17820+19800)*1+lsi)*1]), &(inteval->stack[((hsi*14850+255650)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+270500)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15300)*1+lsi)*1]), &(inteval->stack[((hsi*2025+17775)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+276575)*1+lsi)*1]), &(inteval->stack[((hsi*7425+414410)*1+lsi)*1]), &(inteval->stack[((hsi*6075+270500)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+593015)*1+lsi)*1]), &(inteval->stack[((hsi*14850+255650)*1+lsi)*1]), &(inteval->stack[((hsi*12150+276575)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+255650)*1+lsi)*1]), &(inteval->stack[((hsi*24750+441275)*1+lsi)*1]), &(inteval->stack[((hsi*20250+593015)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+37620)*1+lsi)*1]), &(inteval->stack[((hsi*4725+0)*1+lsi)*1]), &(inteval->stack[((hsi*4095+4725)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+593015)*1+lsi)*1]), &(inteval->stack[((hsi*12285+37620)*1+lsi)*1]), &(inteval->stack[((hsi*10530+430745)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+614075)*1+lsi)*1]), &(inteval->stack[((hsi*21060+593015)*1+lsi)*1]), &(inteval->stack[((hsi*17820+19800)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+0)*1+lsi)*1]), &(inteval->stack[((hsi*29700+614075)*1+lsi)*1]), &(inteval->stack[((hsi*24750+441275)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+414410)*1+lsi)*1]), &(inteval->stack[((hsi*37125+0)*1+lsi)*1]), &(inteval->stack[((hsi*30375+255650)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*102060+593015)*1+lsi)*1]), &(inteval->stack[((hsi*42525+414410)*1+lsi)*1]), &(inteval->stack[((hsi*34020+301010)*1+lsi)*1]),945);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*158760+695075)*1+lsi)*1]), &(inteval->stack[((hsi*102060+593015)*1+lsi)*1]), &(inteval->stack[((hsi*79380+335030)*1+lsi)*1]),945);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*198450+57200)*1+lsi)*1]), &(inteval->stack[((hsi*158760+695075)*1+lsi)*1]), &(inteval->stack[((hsi*119070+473945)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*198450+57200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
