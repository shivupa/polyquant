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
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_K__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,33120)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+118656)*1+lsi)*1]), &(inteval->stack[((hsi*3276+24660)*1+lsi)*1]), &(inteval->stack[((hsi*2808+27936)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+127080)*1+lsi)*1]), &(inteval->stack[((hsi*3780+20880)*1+lsi)*1]), &(inteval->stack[((hsi*3276+24660)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+136908)*1+lsi)*1]), &(inteval->stack[((hsi*9828+127080)*1+lsi)*1]), &(inteval->stack[((hsi*8424+118656)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+153756)*1+lsi)*1]), &(inteval->stack[((hsi*4320+16560)*1+lsi)*1]), &(inteval->stack[((hsi*3780+20880)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+165096)*1+lsi)*1]), &(inteval->stack[((hsi*11340+153756)*1+lsi)*1]), &(inteval->stack[((hsi*9828+127080)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+184752)*1+lsi)*1]), &(inteval->stack[((hsi*19656+165096)*1+lsi)*1]), &(inteval->stack[((hsi*16848+136908)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+212832)*1+lsi)*1]), &(inteval->stack[((hsi*4896+11664)*1+lsi)*1]), &(inteval->stack[((hsi*4320+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+225792)*1+lsi)*1]), &(inteval->stack[((hsi*12960+212832)*1+lsi)*1]), &(inteval->stack[((hsi*11340+153756)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+248472)*1+lsi)*1]), &(inteval->stack[((hsi*22680+225792)*1+lsi)*1]), &(inteval->stack[((hsi*19656+165096)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+281232)*1+lsi)*1]), &(inteval->stack[((hsi*32760+248472)*1+lsi)*1]), &(inteval->stack[((hsi*28080+184752)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+153756)*1+lsi)*1]), &(inteval->stack[((hsi*5508+6156)*1+lsi)*1]), &(inteval->stack[((hsi*4896+11664)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+323352)*1+lsi)*1]), &(inteval->stack[((hsi*14688+153756)*1+lsi)*1]), &(inteval->stack[((hsi*12960+212832)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+349272)*1+lsi)*1]), &(inteval->stack[((hsi*25920+323352)*1+lsi)*1]), &(inteval->stack[((hsi*22680+225792)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+387072)*1+lsi)*1]), &(inteval->stack[((hsi*37800+349272)*1+lsi)*1]), &(inteval->stack[((hsi*32760+248472)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+212832)*1+lsi)*1]), &(inteval->stack[((hsi*49140+387072)*1+lsi)*1]), &(inteval->stack[((hsi*42120+281232)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+168444)*1+lsi)*1]), &(inteval->stack[((hsi*2808+27936)*1+lsi)*1]), &(inteval->stack[((hsi*2376+30744)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+11664)*1+lsi)*1]), &(inteval->stack[((hsi*8424+118656)*1+lsi)*1]), &(inteval->stack[((hsi*7128+168444)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+436212)*1+lsi)*1]), &(inteval->stack[((hsi*16848+136908)*1+lsi)*1]), &(inteval->stack[((hsi*14256+11664)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+459972)*1+lsi)*1]), &(inteval->stack[((hsi*28080+184752)*1+lsi)*1]), &(inteval->stack[((hsi*23760+436212)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+495612)*1+lsi)*1]), &(inteval->stack[((hsi*42120+281232)*1+lsi)*1]), &(inteval->stack[((hsi*35640+459972)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+545508)*1+lsi)*1]), &(inteval->stack[((hsi*58968+212832)*1+lsi)*1]), &(inteval->stack[((hsi*49896+495612)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+436212)*1+lsi)*1]), &(inteval->stack[((hsi*6156+0)*1+lsi)*1]), &(inteval->stack[((hsi*5508+6156)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+452736)*1+lsi)*1]), &(inteval->stack[((hsi*16524+436212)*1+lsi)*1]), &(inteval->stack[((hsi*14688+153756)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+118656)*1+lsi)*1]), &(inteval->stack[((hsi*29376+452736)*1+lsi)*1]), &(inteval->stack[((hsi*25920+323352)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+436212)*1+lsi)*1]), &(inteval->stack[((hsi*43200+118656)*1+lsi)*1]), &(inteval->stack[((hsi*37800+349272)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+271800)*1+lsi)*1]), &(inteval->stack[((hsi*56700+436212)*1+lsi)*1]), &(inteval->stack[((hsi*49140+387072)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+340596)*1+lsi)*1]), &(inteval->stack[((hsi*68796+271800)*1+lsi)*1]), &(inteval->stack[((hsi*58968+212832)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+33120)*1+lsi)*1]), &(inteval->stack[((hsi*78624+340596)*1+lsi)*1]), &(inteval->stack[((hsi*66528+545508)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*85536+33120)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
