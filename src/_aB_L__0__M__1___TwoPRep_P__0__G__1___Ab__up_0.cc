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
#include <_aB_L__0__M__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,39500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+150875)*1+lsi)*1]), &(inteval->stack[((hsi*3510+30545)*1+lsi)*1]), &(inteval->stack[((hsi*2970+34055)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+159785)*1+lsi)*1]), &(inteval->stack[((hsi*4095+26450)*1+lsi)*1]), &(inteval->stack[((hsi*3510+30545)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+170315)*1+lsi)*1]), &(inteval->stack[((hsi*10530+159785)*1+lsi)*1]), &(inteval->stack[((hsi*8910+150875)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+188135)*1+lsi)*1]), &(inteval->stack[((hsi*2970+34055)*1+lsi)*1]), &(inteval->stack[((hsi*2475+37025)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+195560)*1+lsi)*1]), &(inteval->stack[((hsi*8910+150875)*1+lsi)*1]), &(inteval->stack[((hsi*7425+188135)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+210410)*1+lsi)*1]), &(inteval->stack[((hsi*17820+170315)*1+lsi)*1]), &(inteval->stack[((hsi*14850+195560)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+188135)*1+lsi)*1]), &(inteval->stack[((hsi*4725+21725)*1+lsi)*1]), &(inteval->stack[((hsi*4095+26450)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+235160)*1+lsi)*1]), &(inteval->stack[((hsi*12285+188135)*1+lsi)*1]), &(inteval->stack[((hsi*10530+159785)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+256220)*1+lsi)*1]), &(inteval->stack[((hsi*21060+235160)*1+lsi)*1]), &(inteval->stack[((hsi*17820+170315)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+150875)*1+lsi)*1]), &(inteval->stack[((hsi*29700+256220)*1+lsi)*1]), &(inteval->stack[((hsi*24750+210410)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+21725)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+188000)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]), &(inteval->stack[((hsi*4290+10780)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+200870)*1+lsi)*1]), &(inteval->stack[((hsi*12870+188000)*1+lsi)*1]), &(inteval->stack[((hsi*10890+21725)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+222650)*1+lsi)*1]), &(inteval->stack[((hsi*3630+15070)*1+lsi)*1]), &(inteval->stack[((hsi*3025+18700)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+231725)*1+lsi)*1]), &(inteval->stack[((hsi*10890+21725)*1+lsi)*1]), &(inteval->stack[((hsi*9075+222650)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+249875)*1+lsi)*1]), &(inteval->stack[((hsi*21780+200870)*1+lsi)*1]), &(inteval->stack[((hsi*18150+231725)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+10780)*1+lsi)*1]), &(inteval->stack[((hsi*5775+0)*1+lsi)*1]), &(inteval->stack[((hsi*5005+5775)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+222650)*1+lsi)*1]), &(inteval->stack[((hsi*15015+10780)*1+lsi)*1]), &(inteval->stack[((hsi*12870+188000)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+0)*1+lsi)*1]), &(inteval->stack[((hsi*25740+222650)*1+lsi)*1]), &(inteval->stack[((hsi*21780+200870)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+188000)*1+lsi)*1]), &(inteval->stack[((hsi*36300+0)*1+lsi)*1]), &(inteval->stack[((hsi*30250+249875)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*111375+39500)*1+lsi)*1]), &(inteval->stack[((hsi*45375+188000)*1+lsi)*1]), &(inteval->stack[((hsi*37125+150875)*1+lsi)*1]),825);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*111375+39500)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
