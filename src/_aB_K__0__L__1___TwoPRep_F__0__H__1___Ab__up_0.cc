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
#include <_aB_K__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__L__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,88880)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__L__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+429080)*1+lsi)*1]), &(inteval->stack[((hsi*2970+65570)*1+lsi)*1]), &(inteval->stack[((hsi*2475+68540)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+436505)*1+lsi)*1]), &(inteval->stack[((hsi*3510+62060)*1+lsi)*1]), &(inteval->stack[((hsi*2970+65570)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+445415)*1+lsi)*1]), &(inteval->stack[((hsi*8910+436505)*1+lsi)*1]), &(inteval->stack[((hsi*7425+429080)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+460265)*1+lsi)*1]), &(inteval->stack[((hsi*4095+57965)*1+lsi)*1]), &(inteval->stack[((hsi*3510+62060)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+470795)*1+lsi)*1]), &(inteval->stack[((hsi*10530+460265)*1+lsi)*1]), &(inteval->stack[((hsi*8910+436505)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+488615)*1+lsi)*1]), &(inteval->stack[((hsi*17820+470795)*1+lsi)*1]), &(inteval->stack[((hsi*14850+445415)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+436505)*1+lsi)*1]), &(inteval->stack[((hsi*2475+68540)*1+lsi)*1]), &(inteval->stack[((hsi*2025+71015)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+513365)*1+lsi)*1]), &(inteval->stack[((hsi*7425+429080)*1+lsi)*1]), &(inteval->stack[((hsi*6075+436505)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+525515)*1+lsi)*1]), &(inteval->stack[((hsi*14850+445415)*1+lsi)*1]), &(inteval->stack[((hsi*12150+513365)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+429080)*1+lsi)*1]), &(inteval->stack[((hsi*24750+488615)*1+lsi)*1]), &(inteval->stack[((hsi*20250+525515)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+513365)*1+lsi)*1]), &(inteval->stack[((hsi*4725+53240)*1+lsi)*1]), &(inteval->stack[((hsi*4095+57965)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+525650)*1+lsi)*1]), &(inteval->stack[((hsi*12285+513365)*1+lsi)*1]), &(inteval->stack[((hsi*10530+460265)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+546710)*1+lsi)*1]), &(inteval->stack[((hsi*21060+525650)*1+lsi)*1]), &(inteval->stack[((hsi*17820+470795)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+576410)*1+lsi)*1]), &(inteval->stack[((hsi*29700+546710)*1+lsi)*1]), &(inteval->stack[((hsi*24750+488615)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+459455)*1+lsi)*1]), &(inteval->stack[((hsi*37125+576410)*1+lsi)*1]), &(inteval->stack[((hsi*30375+429080)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+429080)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44110)*1+lsi)*1]), &(inteval->stack[((hsi*3025+47740)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+438155)*1+lsi)*1]), &(inteval->stack[((hsi*4290+39820)*1+lsi)*1]), &(inteval->stack[((hsi*3630+44110)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+53240)*1+lsi)*1]), &(inteval->stack[((hsi*10890+438155)*1+lsi)*1]), &(inteval->stack[((hsi*9075+429080)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+501980)*1+lsi)*1]), &(inteval->stack[((hsi*5005+34815)*1+lsi)*1]), &(inteval->stack[((hsi*4290+39820)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+514850)*1+lsi)*1]), &(inteval->stack[((hsi*12870+501980)*1+lsi)*1]), &(inteval->stack[((hsi*10890+438155)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+536630)*1+lsi)*1]), &(inteval->stack[((hsi*21780+514850)*1+lsi)*1]), &(inteval->stack[((hsi*18150+53240)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+438155)*1+lsi)*1]), &(inteval->stack[((hsi*3025+47740)*1+lsi)*1]), &(inteval->stack[((hsi*2475+50765)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+566880)*1+lsi)*1]), &(inteval->stack[((hsi*9075+429080)*1+lsi)*1]), &(inteval->stack[((hsi*7425+438155)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+429080)*1+lsi)*1]), &(inteval->stack[((hsi*18150+53240)*1+lsi)*1]), &(inteval->stack[((hsi*14850+566880)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+566880)*1+lsi)*1]), &(inteval->stack[((hsi*30250+536630)*1+lsi)*1]), &(inteval->stack[((hsi*24750+429080)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+39820)*1+lsi)*1]), &(inteval->stack[((hsi*5775+29040)*1+lsi)*1]), &(inteval->stack[((hsi*5005+34815)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+429080)*1+lsi)*1]), &(inteval->stack[((hsi*15015+39820)*1+lsi)*1]), &(inteval->stack[((hsi*12870+501980)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+29040)*1+lsi)*1]), &(inteval->stack[((hsi*25740+429080)*1+lsi)*1]), &(inteval->stack[((hsi*21780+514850)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+604005)*1+lsi)*1]), &(inteval->stack[((hsi*36300+29040)*1+lsi)*1]), &(inteval->stack[((hsi*30250+536630)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+501980)*1+lsi)*1]), &(inteval->stack[((hsi*45375+604005)*1+lsi)*1]), &(inteval->stack[((hsi*37125+566880)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*127575+553955)*1+lsi)*1]), &(inteval->stack[((hsi*51975+501980)*1+lsi)*1]), &(inteval->stack[((hsi*42525+459455)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+29040)*1+lsi)*1]), &(inteval->stack[((hsi*2376+82904)*1+lsi)*1]), &(inteval->stack[((hsi*1980+85280)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+34980)*1+lsi)*1]), &(inteval->stack[((hsi*2808+80096)*1+lsi)*1]), &(inteval->stack[((hsi*2376+82904)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+42108)*1+lsi)*1]), &(inteval->stack[((hsi*7128+34980)*1+lsi)*1]), &(inteval->stack[((hsi*5940+29040)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+429080)*1+lsi)*1]), &(inteval->stack[((hsi*3276+76820)*1+lsi)*1]), &(inteval->stack[((hsi*2808+80096)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+437504)*1+lsi)*1]), &(inteval->stack[((hsi*8424+429080)*1+lsi)*1]), &(inteval->stack[((hsi*7128+34980)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+681530)*1+lsi)*1]), &(inteval->stack[((hsi*14256+437504)*1+lsi)*1]), &(inteval->stack[((hsi*11880+42108)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+53988)*1+lsi)*1]), &(inteval->stack[((hsi*1980+85280)*1+lsi)*1]), &(inteval->stack[((hsi*1620+87260)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+58848)*1+lsi)*1]), &(inteval->stack[((hsi*5940+29040)*1+lsi)*1]), &(inteval->stack[((hsi*4860+53988)*1+lsi)*1]),36);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*16200+701330)*1+lsi)*1]), &(inteval->stack[((hsi*11880+42108)*1+lsi)*1]), &(inteval->stack[((hsi*9720+58848)*1+lsi)*1]),36);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*24300+29040)*1+lsi)*1]), &(inteval->stack[((hsi*19800+681530)*1+lsi)*1]), &(inteval->stack[((hsi*16200+701330)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+53340)*1+lsi)*1]), &(inteval->stack[((hsi*3780+73040)*1+lsi)*1]), &(inteval->stack[((hsi*3276+76820)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+63168)*1+lsi)*1]), &(inteval->stack[((hsi*9828+53340)*1+lsi)*1]), &(inteval->stack[((hsi*8424+429080)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+701330)*1+lsi)*1]), &(inteval->stack[((hsi*16848+63168)*1+lsi)*1]), &(inteval->stack[((hsi*14256+437504)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+53340)*1+lsi)*1]), &(inteval->stack[((hsi*23760+701330)*1+lsi)*1]), &(inteval->stack[((hsi*19800+681530)*1+lsi)*1]),36);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*34020+681530)*1+lsi)*1]), &(inteval->stack[((hsi*29700+53340)*1+lsi)*1]), &(inteval->stack[((hsi*24300+29040)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*102060+715550)*1+lsi)*1]), &(inteval->stack[((hsi*42525+459455)*1+lsi)*1]), &(inteval->stack[((hsi*34020+681530)*1+lsi)*1]),945);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*204120+817610)*1+lsi)*1]), &(inteval->stack[((hsi*127575+553955)*1+lsi)*1]), &(inteval->stack[((hsi*102060+715550)*1+lsi)*1]),945);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+681530)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+692420)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+705488)*1+lsi)*1]), &(inteval->stack[((hsi*13068+692420)*1+lsi)*1]), &(inteval->stack[((hsi*10890+681530)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+727268)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+742712)*1+lsi)*1]), &(inteval->stack[((hsi*15444+727268)*1+lsi)*1]), &(inteval->stack[((hsi*13068+692420)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+429080)*1+lsi)*1]), &(inteval->stack[((hsi*26136+742712)*1+lsi)*1]), &(inteval->stack[((hsi*21780+705488)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+29040)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22440)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26070)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+37950)*1+lsi)*1]), &(inteval->stack[((hsi*10890+681530)*1+lsi)*1]), &(inteval->stack[((hsi*8910+29040)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+768848)*1+lsi)*1]), &(inteval->stack[((hsi*21780+705488)*1+lsi)*1]), &(inteval->stack[((hsi*17820+37950)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+12936)*1+lsi)*1]), &(inteval->stack[((hsi*36300+429080)*1+lsi)*1]), &(inteval->stack[((hsi*29700+768848)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+768848)*1+lsi)*1]), &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+681530)*1+lsi)*1]), &(inteval->stack[((hsi*18018+768848)*1+lsi)*1]), &(inteval->stack[((hsi*15444+727268)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+768848)*1+lsi)*1]), &(inteval->stack[((hsi*30888+681530)*1+lsi)*1]), &(inteval->stack[((hsi*26136+742712)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+681530)*1+lsi)*1]), &(inteval->stack[((hsi*43560+768848)*1+lsi)*1]), &(inteval->stack[((hsi*36300+429080)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+735980)*1+lsi)*1]), &(inteval->stack[((hsi*54450+681530)*1+lsi)*1]), &(inteval->stack[((hsi*44550+12936)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*155925+1021730)*1+lsi)*1]), &(inteval->stack[((hsi*62370+735980)*1+lsi)*1]), &(inteval->stack[((hsi*51975+501980)*1+lsi)*1]),945);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*255150+1177655)*1+lsi)*1]), &(inteval->stack[((hsi*155925+1021730)*1+lsi)*1]), &(inteval->stack[((hsi*127575+553955)*1+lsi)*1]),945);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*340200+88880)*1+lsi)*1]), &(inteval->stack[((hsi*255150+1177655)*1+lsi)*1]), &(inteval->stack[((hsi*204120+817610)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*340200+88880)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
