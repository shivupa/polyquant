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
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_L__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,65100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+273000)*1+lsi)*1]), &(inteval->stack[((hsi*3510+56145)*1+lsi)*1]), &(inteval->stack[((hsi*2970+59655)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+281910)*1+lsi)*1]), &(inteval->stack[((hsi*4095+52050)*1+lsi)*1]), &(inteval->stack[((hsi*3510+56145)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+292440)*1+lsi)*1]), &(inteval->stack[((hsi*10530+281910)*1+lsi)*1]), &(inteval->stack[((hsi*8910+273000)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+310260)*1+lsi)*1]), &(inteval->stack[((hsi*4725+47325)*1+lsi)*1]), &(inteval->stack[((hsi*4095+52050)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+322545)*1+lsi)*1]), &(inteval->stack[((hsi*12285+310260)*1+lsi)*1]), &(inteval->stack[((hsi*10530+281910)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+343605)*1+lsi)*1]), &(inteval->stack[((hsi*21060+322545)*1+lsi)*1]), &(inteval->stack[((hsi*17820+292440)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+373305)*1+lsi)*1]), &(inteval->stack[((hsi*5400+41925)*1+lsi)*1]), &(inteval->stack[((hsi*4725+47325)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+387480)*1+lsi)*1]), &(inteval->stack[((hsi*14175+373305)*1+lsi)*1]), &(inteval->stack[((hsi*12285+310260)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+412050)*1+lsi)*1]), &(inteval->stack[((hsi*24570+387480)*1+lsi)*1]), &(inteval->stack[((hsi*21060+322545)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+447150)*1+lsi)*1]), &(inteval->stack[((hsi*35100+412050)*1+lsi)*1]), &(inteval->stack[((hsi*29700+343605)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+310260)*1+lsi)*1]), &(inteval->stack[((hsi*2970+59655)*1+lsi)*1]), &(inteval->stack[((hsi*2475+62625)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+317685)*1+lsi)*1]), &(inteval->stack[((hsi*8910+273000)*1+lsi)*1]), &(inteval->stack[((hsi*7425+310260)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+491700)*1+lsi)*1]), &(inteval->stack[((hsi*17820+292440)*1+lsi)*1]), &(inteval->stack[((hsi*14850+317685)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+273000)*1+lsi)*1]), &(inteval->stack[((hsi*29700+343605)*1+lsi)*1]), &(inteval->stack[((hsi*24750+491700)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+310125)*1+lsi)*1]), &(inteval->stack[((hsi*44550+447150)*1+lsi)*1]), &(inteval->stack[((hsi*37125+273000)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+273000)*1+lsi)*1]), &(inteval->stack[((hsi*6120+35805)*1+lsi)*1]), &(inteval->stack[((hsi*5400+41925)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+35805)*1+lsi)*1]), &(inteval->stack[((hsi*16200+273000)*1+lsi)*1]), &(inteval->stack[((hsi*14175+373305)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+491700)*1+lsi)*1]), &(inteval->stack[((hsi*28350+35805)*1+lsi)*1]), &(inteval->stack[((hsi*24570+387480)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+532650)*1+lsi)*1]), &(inteval->stack[((hsi*40950+491700)*1+lsi)*1]), &(inteval->stack[((hsi*35100+412050)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+362100)*1+lsi)*1]), &(inteval->stack[((hsi*52650+532650)*1+lsi)*1]), &(inteval->stack[((hsi*44550+447150)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+424470)*1+lsi)*1]), &(inteval->stack[((hsi*62370+362100)*1+lsi)*1]), &(inteval->stack[((hsi*51975+310125)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+273000)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+283890)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]), &(inteval->stack[((hsi*4290+24860)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+296760)*1+lsi)*1]), &(inteval->stack[((hsi*12870+283890)*1+lsi)*1]), &(inteval->stack[((hsi*10890+273000)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+318540)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]), &(inteval->stack[((hsi*5005+19855)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+333555)*1+lsi)*1]), &(inteval->stack[((hsi*15015+318540)*1+lsi)*1]), &(inteval->stack[((hsi*12870+283890)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+359295)*1+lsi)*1]), &(inteval->stack[((hsi*25740+333555)*1+lsi)*1]), &(inteval->stack[((hsi*21780+296760)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+35805)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]), &(inteval->stack[((hsi*5775+14080)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+493770)*1+lsi)*1]), &(inteval->stack[((hsi*17325+35805)*1+lsi)*1]), &(inteval->stack[((hsi*15015+318540)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+523800)*1+lsi)*1]), &(inteval->stack[((hsi*30030+493770)*1+lsi)*1]), &(inteval->stack[((hsi*25740+333555)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+566700)*1+lsi)*1]), &(inteval->stack[((hsi*42900+523800)*1+lsi)*1]), &(inteval->stack[((hsi*36300+359295)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+318540)*1+lsi)*1]), &(inteval->stack[((hsi*3630+29150)*1+lsi)*1]), &(inteval->stack[((hsi*3025+32780)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+327615)*1+lsi)*1]), &(inteval->stack[((hsi*10890+273000)*1+lsi)*1]), &(inteval->stack[((hsi*9075+318540)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+621150)*1+lsi)*1]), &(inteval->stack[((hsi*21780+296760)*1+lsi)*1]), &(inteval->stack[((hsi*18150+327615)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+273000)*1+lsi)*1]), &(inteval->stack[((hsi*36300+359295)*1+lsi)*1]), &(inteval->stack[((hsi*30250+621150)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+318375)*1+lsi)*1]), &(inteval->stack[((hsi*54450+566700)*1+lsi)*1]), &(inteval->stack[((hsi*45375+273000)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+273000)*1+lsi)*1]), &(inteval->stack[((hsi*7480+0)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7480)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+381900)*1+lsi)*1]), &(inteval->stack[((hsi*19800+273000)*1+lsi)*1]), &(inteval->stack[((hsi*17325+35805)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+0)*1+lsi)*1]), &(inteval->stack[((hsi*34650+381900)*1+lsi)*1]), &(inteval->stack[((hsi*30030+493770)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+621150)*1+lsi)*1]), &(inteval->stack[((hsi*50050+0)*1+lsi)*1]), &(inteval->stack[((hsi*42900+523800)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+685500)*1+lsi)*1]), &(inteval->stack[((hsi*64350+621150)*1+lsi)*1]), &(inteval->stack[((hsi*54450+566700)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+493770)*1+lsi)*1]), &(inteval->stack[((hsi*76230+685500)*1+lsi)*1]), &(inteval->stack[((hsi*63525+318375)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*207900+65100)*1+lsi)*1]), &(inteval->stack[((hsi*84700+493770)*1+lsi)*1]), &(inteval->stack[((hsi*69300+424470)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*207900+65100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
