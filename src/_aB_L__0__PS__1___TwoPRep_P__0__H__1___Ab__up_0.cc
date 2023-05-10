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
#include <_aB_L__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,59600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+246710)*1+lsi)*1]), &(inteval->stack[((hsi*4095+49025)*1+lsi)*1]), &(inteval->stack[((hsi*3510+53120)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+257240)*1+lsi)*1]), &(inteval->stack[((hsi*4725+44300)*1+lsi)*1]), &(inteval->stack[((hsi*4095+49025)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+269525)*1+lsi)*1]), &(inteval->stack[((hsi*12285+257240)*1+lsi)*1]), &(inteval->stack[((hsi*10530+246710)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+290585)*1+lsi)*1]), &(inteval->stack[((hsi*5400+38900)*1+lsi)*1]), &(inteval->stack[((hsi*4725+44300)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+304760)*1+lsi)*1]), &(inteval->stack[((hsi*14175+290585)*1+lsi)*1]), &(inteval->stack[((hsi*12285+257240)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+329330)*1+lsi)*1]), &(inteval->stack[((hsi*24570+304760)*1+lsi)*1]), &(inteval->stack[((hsi*21060+269525)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+257240)*1+lsi)*1]), &(inteval->stack[((hsi*3510+53120)*1+lsi)*1]), &(inteval->stack[((hsi*2970+56630)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+364430)*1+lsi)*1]), &(inteval->stack[((hsi*10530+246710)*1+lsi)*1]), &(inteval->stack[((hsi*8910+257240)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+382250)*1+lsi)*1]), &(inteval->stack[((hsi*21060+269525)*1+lsi)*1]), &(inteval->stack[((hsi*17820+364430)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+411950)*1+lsi)*1]), &(inteval->stack[((hsi*35100+329330)*1+lsi)*1]), &(inteval->stack[((hsi*29700+382250)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+364430)*1+lsi)*1]), &(inteval->stack[((hsi*6120+32780)*1+lsi)*1]), &(inteval->stack[((hsi*5400+38900)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+246710)*1+lsi)*1]), &(inteval->stack[((hsi*16200+364430)*1+lsi)*1]), &(inteval->stack[((hsi*14175+290585)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+364430)*1+lsi)*1]), &(inteval->stack[((hsi*28350+246710)*1+lsi)*1]), &(inteval->stack[((hsi*24570+304760)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+246710)*1+lsi)*1]), &(inteval->stack[((hsi*40950+364430)*1+lsi)*1]), &(inteval->stack[((hsi*35100+329330)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+299360)*1+lsi)*1]), &(inteval->stack[((hsi*52650+246710)*1+lsi)*1]), &(inteval->stack[((hsi*44550+411950)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+246710)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+259580)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+32780)*1+lsi)*1]), &(inteval->stack[((hsi*15015+259580)*1+lsi)*1]), &(inteval->stack[((hsi*12870+246710)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+274595)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+361730)*1+lsi)*1]), &(inteval->stack[((hsi*17325+274595)*1+lsi)*1]), &(inteval->stack[((hsi*15015+259580)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+391760)*1+lsi)*1]), &(inteval->stack[((hsi*30030+361730)*1+lsi)*1]), &(inteval->stack[((hsi*25740+32780)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+259580)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+434660)*1+lsi)*1]), &(inteval->stack[((hsi*12870+246710)*1+lsi)*1]), &(inteval->stack[((hsi*10890+259580)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+456440)*1+lsi)*1]), &(inteval->stack[((hsi*25740+32780)*1+lsi)*1]), &(inteval->stack[((hsi*21780+434660)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+492740)*1+lsi)*1]), &(inteval->stack[((hsi*42900+391760)*1+lsi)*1]), &(inteval->stack[((hsi*36300+456440)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+434660)*1+lsi)*1]), &(inteval->stack[((hsi*7480+0)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+0)*1+lsi)*1]), &(inteval->stack[((hsi*19800+434660)*1+lsi)*1]), &(inteval->stack[((hsi*17325+274595)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+434660)*1+lsi)*1]), &(inteval->stack[((hsi*34650+0)*1+lsi)*1]), &(inteval->stack[((hsi*30030+361730)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+547190)*1+lsi)*1]), &(inteval->stack[((hsi*50050+434660)*1+lsi)*1]), &(inteval->stack[((hsi*42900+391760)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+361730)*1+lsi)*1]), &(inteval->stack[((hsi*64350+547190)*1+lsi)*1]), &(inteval->stack[((hsi*54450+492740)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*187110+59600)*1+lsi)*1]), &(inteval->stack[((hsi*76230+361730)*1+lsi)*1]), &(inteval->stack[((hsi*62370+299360)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*187110+59600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
