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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,60669)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+260253)*1+lsi)*1]), &(inteval->stack[((hsi*3276+52209)*1+lsi)*1]), &(inteval->stack[((hsi*2808+55485)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+268677)*1+lsi)*1]), &(inteval->stack[((hsi*3780+48429)*1+lsi)*1]), &(inteval->stack[((hsi*3276+52209)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+278505)*1+lsi)*1]), &(inteval->stack[((hsi*9828+268677)*1+lsi)*1]), &(inteval->stack[((hsi*8424+260253)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+295353)*1+lsi)*1]), &(inteval->stack[((hsi*4320+44109)*1+lsi)*1]), &(inteval->stack[((hsi*3780+48429)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+306693)*1+lsi)*1]), &(inteval->stack[((hsi*11340+295353)*1+lsi)*1]), &(inteval->stack[((hsi*9828+268677)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+326349)*1+lsi)*1]), &(inteval->stack[((hsi*19656+306693)*1+lsi)*1]), &(inteval->stack[((hsi*16848+278505)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+354429)*1+lsi)*1]), &(inteval->stack[((hsi*4896+39213)*1+lsi)*1]), &(inteval->stack[((hsi*4320+44109)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+367389)*1+lsi)*1]), &(inteval->stack[((hsi*12960+354429)*1+lsi)*1]), &(inteval->stack[((hsi*11340+295353)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+390069)*1+lsi)*1]), &(inteval->stack[((hsi*22680+367389)*1+lsi)*1]), &(inteval->stack[((hsi*19656+306693)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+422829)*1+lsi)*1]), &(inteval->stack[((hsi*32760+390069)*1+lsi)*1]), &(inteval->stack[((hsi*28080+326349)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+295353)*1+lsi)*1]), &(inteval->stack[((hsi*2808+55485)*1+lsi)*1]), &(inteval->stack[((hsi*2376+58293)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+302481)*1+lsi)*1]), &(inteval->stack[((hsi*8424+260253)*1+lsi)*1]), &(inteval->stack[((hsi*7128+295353)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+464949)*1+lsi)*1]), &(inteval->stack[((hsi*16848+278505)*1+lsi)*1]), &(inteval->stack[((hsi*14256+302481)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+260253)*1+lsi)*1]), &(inteval->stack[((hsi*28080+326349)*1+lsi)*1]), &(inteval->stack[((hsi*23760+464949)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+295893)*1+lsi)*1]), &(inteval->stack[((hsi*42120+422829)*1+lsi)*1]), &(inteval->stack[((hsi*35640+260253)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+260253)*1+lsi)*1]), &(inteval->stack[((hsi*5508+33705)*1+lsi)*1]), &(inteval->stack[((hsi*4896+39213)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+33705)*1+lsi)*1]), &(inteval->stack[((hsi*14688+260253)*1+lsi)*1]), &(inteval->stack[((hsi*12960+354429)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+464949)*1+lsi)*1]), &(inteval->stack[((hsi*25920+33705)*1+lsi)*1]), &(inteval->stack[((hsi*22680+367389)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+502749)*1+lsi)*1]), &(inteval->stack[((hsi*37800+464949)*1+lsi)*1]), &(inteval->stack[((hsi*32760+390069)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+345789)*1+lsi)*1]), &(inteval->stack[((hsi*49140+502749)*1+lsi)*1]), &(inteval->stack[((hsi*42120+422829)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+404757)*1+lsi)*1]), &(inteval->stack[((hsi*58968+345789)*1+lsi)*1]), &(inteval->stack[((hsi*49896+295893)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+260253)*1+lsi)*1]), &(inteval->stack[((hsi*4095+23130)*1+lsi)*1]), &(inteval->stack[((hsi*3510+27225)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+270783)*1+lsi)*1]), &(inteval->stack[((hsi*4725+18405)*1+lsi)*1]), &(inteval->stack[((hsi*4095+23130)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+283068)*1+lsi)*1]), &(inteval->stack[((hsi*12285+270783)*1+lsi)*1]), &(inteval->stack[((hsi*10530+260253)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+304128)*1+lsi)*1]), &(inteval->stack[((hsi*5400+13005)*1+lsi)*1]), &(inteval->stack[((hsi*4725+18405)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+318303)*1+lsi)*1]), &(inteval->stack[((hsi*14175+304128)*1+lsi)*1]), &(inteval->stack[((hsi*12285+270783)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+342873)*1+lsi)*1]), &(inteval->stack[((hsi*24570+318303)*1+lsi)*1]), &(inteval->stack[((hsi*21060+283068)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+33705)*1+lsi)*1]), &(inteval->stack[((hsi*6120+6885)*1+lsi)*1]), &(inteval->stack[((hsi*5400+13005)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+471285)*1+lsi)*1]), &(inteval->stack[((hsi*16200+33705)*1+lsi)*1]), &(inteval->stack[((hsi*14175+304128)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+499635)*1+lsi)*1]), &(inteval->stack[((hsi*28350+471285)*1+lsi)*1]), &(inteval->stack[((hsi*24570+318303)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+540585)*1+lsi)*1]), &(inteval->stack[((hsi*40950+499635)*1+lsi)*1]), &(inteval->stack[((hsi*35100+342873)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+304128)*1+lsi)*1]), &(inteval->stack[((hsi*3510+27225)*1+lsi)*1]), &(inteval->stack[((hsi*2970+30735)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+313038)*1+lsi)*1]), &(inteval->stack[((hsi*10530+260253)*1+lsi)*1]), &(inteval->stack[((hsi*8910+304128)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+593235)*1+lsi)*1]), &(inteval->stack[((hsi*21060+283068)*1+lsi)*1]), &(inteval->stack[((hsi*17820+313038)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+260253)*1+lsi)*1]), &(inteval->stack[((hsi*35100+342873)*1+lsi)*1]), &(inteval->stack[((hsi*29700+593235)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+304803)*1+lsi)*1]), &(inteval->stack[((hsi*52650+540585)*1+lsi)*1]), &(inteval->stack[((hsi*44550+260253)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+260253)*1+lsi)*1]), &(inteval->stack[((hsi*6885+0)*1+lsi)*1]), &(inteval->stack[((hsi*6120+6885)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+367173)*1+lsi)*1]), &(inteval->stack[((hsi*18360+260253)*1+lsi)*1]), &(inteval->stack[((hsi*16200+33705)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+0)*1+lsi)*1]), &(inteval->stack[((hsi*32400+367173)*1+lsi)*1]), &(inteval->stack[((hsi*28350+471285)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+593235)*1+lsi)*1]), &(inteval->stack[((hsi*47250+0)*1+lsi)*1]), &(inteval->stack[((hsi*40950+499635)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+654660)*1+lsi)*1]), &(inteval->stack[((hsi*61425+593235)*1+lsi)*1]), &(inteval->stack[((hsi*52650+540585)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+471285)*1+lsi)*1]), &(inteval->stack[((hsi*73710+654660)*1+lsi)*1]), &(inteval->stack[((hsi*62370+304803)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*199584+60669)*1+lsi)*1]), &(inteval->stack[((hsi*83160+471285)*1+lsi)*1]), &(inteval->stack[((hsi*66528+404757)*1+lsi)*1]),1848);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*199584+60669)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
