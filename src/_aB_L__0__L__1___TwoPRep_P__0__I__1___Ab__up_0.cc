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
#include <_aB_L__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__L__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,56000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__L__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+226100)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48530)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51500)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+233525)*1+lsi)*1]), &(inteval->stack[((hsi*3510+45020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48530)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+242435)*1+lsi)*1]), &(inteval->stack[((hsi*8910+233525)*1+lsi)*1]), &(inteval->stack[((hsi*7425+226100)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+257285)*1+lsi)*1]), &(inteval->stack[((hsi*4095+40925)*1+lsi)*1]), &(inteval->stack[((hsi*3510+45020)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+267815)*1+lsi)*1]), &(inteval->stack[((hsi*10530+257285)*1+lsi)*1]), &(inteval->stack[((hsi*8910+233525)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+285635)*1+lsi)*1]), &(inteval->stack[((hsi*17820+267815)*1+lsi)*1]), &(inteval->stack[((hsi*14850+242435)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+310385)*1+lsi)*1]), &(inteval->stack[((hsi*4725+36200)*1+lsi)*1]), &(inteval->stack[((hsi*4095+40925)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+322670)*1+lsi)*1]), &(inteval->stack[((hsi*12285+310385)*1+lsi)*1]), &(inteval->stack[((hsi*10530+257285)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+343730)*1+lsi)*1]), &(inteval->stack[((hsi*21060+322670)*1+lsi)*1]), &(inteval->stack[((hsi*17820+267815)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+373430)*1+lsi)*1]), &(inteval->stack[((hsi*29700+343730)*1+lsi)*1]), &(inteval->stack[((hsi*24750+285635)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+257285)*1+lsi)*1]), &(inteval->stack[((hsi*2475+51500)*1+lsi)*1]), &(inteval->stack[((hsi*2025+53975)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+263360)*1+lsi)*1]), &(inteval->stack[((hsi*7425+226100)*1+lsi)*1]), &(inteval->stack[((hsi*6075+257285)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+410555)*1+lsi)*1]), &(inteval->stack[((hsi*14850+242435)*1+lsi)*1]), &(inteval->stack[((hsi*12150+263360)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+226100)*1+lsi)*1]), &(inteval->stack[((hsi*24750+285635)*1+lsi)*1]), &(inteval->stack[((hsi*20250+410555)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+256475)*1+lsi)*1]), &(inteval->stack[((hsi*37125+373430)*1+lsi)*1]), &(inteval->stack[((hsi*30375+226100)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+226100)*1+lsi)*1]), &(inteval->stack[((hsi*5400+30800)*1+lsi)*1]), &(inteval->stack[((hsi*4725+36200)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+30800)*1+lsi)*1]), &(inteval->stack[((hsi*14175+226100)*1+lsi)*1]), &(inteval->stack[((hsi*12285+310385)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+410555)*1+lsi)*1]), &(inteval->stack[((hsi*24570+30800)*1+lsi)*1]), &(inteval->stack[((hsi*21060+322670)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+299000)*1+lsi)*1]), &(inteval->stack[((hsi*35100+410555)*1+lsi)*1]), &(inteval->stack[((hsi*29700+343730)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+410555)*1+lsi)*1]), &(inteval->stack[((hsi*44550+299000)*1+lsi)*1]), &(inteval->stack[((hsi*37125+373430)*1+lsi)*1]),45);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*56700+299000)*1+lsi)*1]), &(inteval->stack[((hsi*51975+410555)*1+lsi)*1]), &(inteval->stack[((hsi*42525+256475)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+226100)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+235175)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+21670)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+246065)*1+lsi)*1]), &(inteval->stack[((hsi*10890+235175)*1+lsi)*1]), &(inteval->stack[((hsi*9075+226100)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+264215)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+17380)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+30800)*1+lsi)*1]), &(inteval->stack[((hsi*12870+264215)*1+lsi)*1]), &(inteval->stack[((hsi*10890+235175)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+355700)*1+lsi)*1]), &(inteval->stack[((hsi*21780+30800)*1+lsi)*1]), &(inteval->stack[((hsi*18150+246065)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+277085)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+385950)*1+lsi)*1]), &(inteval->stack[((hsi*15015+277085)*1+lsi)*1]), &(inteval->stack[((hsi*12870+264215)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+411690)*1+lsi)*1]), &(inteval->stack[((hsi*25740+385950)*1+lsi)*1]), &(inteval->stack[((hsi*21780+30800)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+447990)*1+lsi)*1]), &(inteval->stack[((hsi*36300+411690)*1+lsi)*1]), &(inteval->stack[((hsi*30250+355700)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+30800)*1+lsi)*1]), &(inteval->stack[((hsi*3025+25300)*1+lsi)*1]), &(inteval->stack[((hsi*2475+28325)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+12375)*1+lsi)*1]), &(inteval->stack[((hsi*9075+226100)*1+lsi)*1]), &(inteval->stack[((hsi*7425+30800)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+27225)*1+lsi)*1]), &(inteval->stack[((hsi*18150+246065)*1+lsi)*1]), &(inteval->stack[((hsi*14850+12375)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+226100)*1+lsi)*1]), &(inteval->stack[((hsi*30250+355700)*1+lsi)*1]), &(inteval->stack[((hsi*24750+27225)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+493365)*1+lsi)*1]), &(inteval->stack[((hsi*45375+447990)*1+lsi)*1]), &(inteval->stack[((hsi*37125+226100)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+226100)*1+lsi)*1]), &(inteval->stack[((hsi*6600+0)*1+lsi)*1]), &(inteval->stack[((hsi*5775+6600)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+0)*1+lsi)*1]), &(inteval->stack[((hsi*17325+226100)*1+lsi)*1]), &(inteval->stack[((hsi*15015+277085)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+226100)*1+lsi)*1]), &(inteval->stack[((hsi*30030+0)*1+lsi)*1]), &(inteval->stack[((hsi*25740+385950)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+0)*1+lsi)*1]), &(inteval->stack[((hsi*42900+226100)*1+lsi)*1]), &(inteval->stack[((hsi*36300+411690)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+355700)*1+lsi)*1]), &(inteval->stack[((hsi*54450+0)*1+lsi)*1]), &(inteval->stack[((hsi*45375+447990)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+419225)*1+lsi)*1]), &(inteval->stack[((hsi*63525+355700)*1+lsi)*1]), &(inteval->stack[((hsi*51975+493365)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*170100+56000)*1+lsi)*1]), &(inteval->stack[((hsi*69300+419225)*1+lsi)*1]), &(inteval->stack[((hsi*56700+299000)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*170100+56000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
