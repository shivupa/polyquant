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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_L__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,73040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+328190)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44110)*1+lsi)*1]), &(inteval->stack[((hsi*3025+47740)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+337265)*1+lsi)*1]), &(inteval->stack[((hsi*4290+39820)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44110)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+348155)*1+lsi)*1]), &(inteval->stack[((hsi*10890+337265)*1+lsi)*1]), &(inteval->stack[((hsi*9075+328190)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+366305)*1+lsi)*1]), &(inteval->stack[((hsi*5005+34815)*1+lsi)*1]), &(inteval->stack[((hsi*4290+39820)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+379175)*1+lsi)*1]), &(inteval->stack[((hsi*12870+366305)*1+lsi)*1]), &(inteval->stack[((hsi*10890+337265)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+400955)*1+lsi)*1]), &(inteval->stack[((hsi*21780+379175)*1+lsi)*1]), &(inteval->stack[((hsi*18150+348155)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+337265)*1+lsi)*1]), &(inteval->stack[((hsi*3025+47740)*1+lsi)*1]), &(inteval->stack[((hsi*2475+50765)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+431205)*1+lsi)*1]), &(inteval->stack[((hsi*9075+328190)*1+lsi)*1]), &(inteval->stack[((hsi*7425+337265)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+446055)*1+lsi)*1]), &(inteval->stack[((hsi*18150+348155)*1+lsi)*1]), &(inteval->stack[((hsi*14850+431205)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+328190)*1+lsi)*1]), &(inteval->stack[((hsi*30250+400955)*1+lsi)*1]), &(inteval->stack[((hsi*24750+446055)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+431205)*1+lsi)*1]), &(inteval->stack[((hsi*5775+29040)*1+lsi)*1]), &(inteval->stack[((hsi*5005+34815)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+446220)*1+lsi)*1]), &(inteval->stack[((hsi*15015+431205)*1+lsi)*1]), &(inteval->stack[((hsi*12870+366305)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+471960)*1+lsi)*1]), &(inteval->stack[((hsi*25740+446220)*1+lsi)*1]), &(inteval->stack[((hsi*21780+379175)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+508260)*1+lsi)*1]), &(inteval->stack[((hsi*36300+471960)*1+lsi)*1]), &(inteval->stack[((hsi*30250+400955)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+365315)*1+lsi)*1]), &(inteval->stack[((hsi*45375+508260)*1+lsi)*1]), &(inteval->stack[((hsi*37125+328190)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+328190)*1+lsi)*1]), &(inteval->stack[((hsi*2970+65570)*1+lsi)*1]), &(inteval->stack[((hsi*2475+68540)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+335615)*1+lsi)*1]), &(inteval->stack[((hsi*3510+62060)*1+lsi)*1]), &(inteval->stack[((hsi*2970+65570)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+29040)*1+lsi)*1]), &(inteval->stack[((hsi*8910+335615)*1+lsi)*1]), &(inteval->stack[((hsi*7425+328190)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+344525)*1+lsi)*1]), &(inteval->stack[((hsi*4095+57965)*1+lsi)*1]), &(inteval->stack[((hsi*3510+62060)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+417290)*1+lsi)*1]), &(inteval->stack[((hsi*10530+344525)*1+lsi)*1]), &(inteval->stack[((hsi*8910+335615)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+435110)*1+lsi)*1]), &(inteval->stack[((hsi*17820+417290)*1+lsi)*1]), &(inteval->stack[((hsi*14850+29040)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+355055)*1+lsi)*1]), &(inteval->stack[((hsi*2475+68540)*1+lsi)*1]), &(inteval->stack[((hsi*2025+71015)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+459860)*1+lsi)*1]), &(inteval->stack[((hsi*7425+328190)*1+lsi)*1]), &(inteval->stack[((hsi*6075+355055)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+472010)*1+lsi)*1]), &(inteval->stack[((hsi*14850+29040)*1+lsi)*1]), &(inteval->stack[((hsi*12150+459860)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+492260)*1+lsi)*1]), &(inteval->stack[((hsi*24750+435110)*1+lsi)*1]), &(inteval->stack[((hsi*20250+472010)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+459860)*1+lsi)*1]), &(inteval->stack[((hsi*4725+53240)*1+lsi)*1]), &(inteval->stack[((hsi*4095+57965)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+29040)*1+lsi)*1]), &(inteval->stack[((hsi*12285+459860)*1+lsi)*1]), &(inteval->stack[((hsi*10530+344525)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+328190)*1+lsi)*1]), &(inteval->stack[((hsi*21060+29040)*1+lsi)*1]), &(inteval->stack[((hsi*17820+417290)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+29040)*1+lsi)*1]), &(inteval->stack[((hsi*29700+328190)*1+lsi)*1]), &(inteval->stack[((hsi*24750+435110)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+417290)*1+lsi)*1]), &(inteval->stack[((hsi*37125+29040)*1+lsi)*1]), &(inteval->stack[((hsi*30375+492260)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*127575+459815)*1+lsi)*1]), &(inteval->stack[((hsi*51975+365315)*1+lsi)*1]), &(inteval->stack[((hsi*42525+417290)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+29040)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+417290)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+328190)*1+lsi)*1]), &(inteval->stack[((hsi*13068+417290)*1+lsi)*1]), &(inteval->stack[((hsi*10890+29040)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+39930)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+430358)*1+lsi)*1]), &(inteval->stack[((hsi*15444+39930)*1+lsi)*1]), &(inteval->stack[((hsi*13068+417290)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+587390)*1+lsi)*1]), &(inteval->stack[((hsi*26136+430358)*1+lsi)*1]), &(inteval->stack[((hsi*21780+328190)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+55374)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26070)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+623690)*1+lsi)*1]), &(inteval->stack[((hsi*10890+29040)*1+lsi)*1]), &(inteval->stack[((hsi*8910+55374)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+641510)*1+lsi)*1]), &(inteval->stack[((hsi*21780+328190)*1+lsi)*1]), &(inteval->stack[((hsi*17820+623690)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+671210)*1+lsi)*1]), &(inteval->stack[((hsi*36300+587390)*1+lsi)*1]), &(inteval->stack[((hsi*29700+641510)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+623690)*1+lsi)*1]), &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+0)*1+lsi)*1]), &(inteval->stack[((hsi*18018+623690)*1+lsi)*1]), &(inteval->stack[((hsi*15444+39930)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+623690)*1+lsi)*1]), &(inteval->stack[((hsi*30888+0)*1+lsi)*1]), &(inteval->stack[((hsi*26136+430358)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+0)*1+lsi)*1]), &(inteval->stack[((hsi*43560+623690)*1+lsi)*1]), &(inteval->stack[((hsi*36300+587390)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+587390)*1+lsi)*1]), &(inteval->stack[((hsi*54450+0)*1+lsi)*1]), &(inteval->stack[((hsi*44550+671210)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*155925+649760)*1+lsi)*1]), &(inteval->stack[((hsi*62370+587390)*1+lsi)*1]), &(inteval->stack[((hsi*51975+365315)*1+lsi)*1]),945);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*255150+73040)*1+lsi)*1]), &(inteval->stack[((hsi*155925+649760)*1+lsi)*1]), &(inteval->stack[((hsi*127575+459815)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*255150+73040)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
