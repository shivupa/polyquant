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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0ml.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <eri3_aB_K__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,35100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+124200)*1+lsi)*1]), &(inteval->stack[((hsi*2808+27936)*1+lsi)*1]), &(inteval->stack[((hsi*2376+30744)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+131328)*1+lsi)*1]), &(inteval->stack[((hsi*3276+24660)*1+lsi)*1]), &(inteval->stack[((hsi*2808+27936)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+139752)*1+lsi)*1]), &(inteval->stack[((hsi*8424+131328)*1+lsi)*1]), &(inteval->stack[((hsi*7128+124200)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+154008)*1+lsi)*1]), &(inteval->stack[((hsi*3780+20880)*1+lsi)*1]), &(inteval->stack[((hsi*3276+24660)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+163836)*1+lsi)*1]), &(inteval->stack[((hsi*9828+154008)*1+lsi)*1]), &(inteval->stack[((hsi*8424+131328)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+180684)*1+lsi)*1]), &(inteval->stack[((hsi*16848+163836)*1+lsi)*1]), &(inteval->stack[((hsi*14256+139752)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+204444)*1+lsi)*1]), &(inteval->stack[((hsi*4320+16560)*1+lsi)*1]), &(inteval->stack[((hsi*3780+20880)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+215784)*1+lsi)*1]), &(inteval->stack[((hsi*11340+204444)*1+lsi)*1]), &(inteval->stack[((hsi*9828+154008)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+235440)*1+lsi)*1]), &(inteval->stack[((hsi*19656+215784)*1+lsi)*1]), &(inteval->stack[((hsi*16848+163836)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+263520)*1+lsi)*1]), &(inteval->stack[((hsi*28080+235440)*1+lsi)*1]), &(inteval->stack[((hsi*23760+180684)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+154008)*1+lsi)*1]), &(inteval->stack[((hsi*4896+11664)*1+lsi)*1]), &(inteval->stack[((hsi*4320+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+299160)*1+lsi)*1]), &(inteval->stack[((hsi*12960+154008)*1+lsi)*1]), &(inteval->stack[((hsi*11340+204444)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+321840)*1+lsi)*1]), &(inteval->stack[((hsi*22680+299160)*1+lsi)*1]), &(inteval->stack[((hsi*19656+215784)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+354600)*1+lsi)*1]), &(inteval->stack[((hsi*32760+321840)*1+lsi)*1]), &(inteval->stack[((hsi*28080+235440)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+204444)*1+lsi)*1]), &(inteval->stack[((hsi*42120+354600)*1+lsi)*1]), &(inteval->stack[((hsi*35640+263520)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+396720)*1+lsi)*1]), &(inteval->stack[((hsi*5508+6156)*1+lsi)*1]), &(inteval->stack[((hsi*4896+11664)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+411408)*1+lsi)*1]), &(inteval->stack[((hsi*14688+396720)*1+lsi)*1]), &(inteval->stack[((hsi*12960+154008)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+437328)*1+lsi)*1]), &(inteval->stack[((hsi*25920+411408)*1+lsi)*1]), &(inteval->stack[((hsi*22680+299160)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+475128)*1+lsi)*1]), &(inteval->stack[((hsi*37800+437328)*1+lsi)*1]), &(inteval->stack[((hsi*32760+321840)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+524268)*1+lsi)*1]), &(inteval->stack[((hsi*49140+475128)*1+lsi)*1]), &(inteval->stack[((hsi*42120+354600)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+299160)*1+lsi)*1]), &(inteval->stack[((hsi*58968+524268)*1+lsi)*1]), &(inteval->stack[((hsi*49896+204444)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+365688)*1+lsi)*1]), &(inteval->stack[((hsi*2376+30744)*1+lsi)*1]), &(inteval->stack[((hsi*1980+33120)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+154008)*1+lsi)*1]), &(inteval->stack[((hsi*7128+124200)*1+lsi)*1]), &(inteval->stack[((hsi*5940+365688)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+365688)*1+lsi)*1]), &(inteval->stack[((hsi*14256+139752)*1+lsi)*1]), &(inteval->stack[((hsi*11880+154008)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+124200)*1+lsi)*1]), &(inteval->stack[((hsi*23760+180684)*1+lsi)*1]), &(inteval->stack[((hsi*19800+365688)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+153900)*1+lsi)*1]), &(inteval->stack[((hsi*35640+263520)*1+lsi)*1]), &(inteval->stack[((hsi*29700+124200)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+583236)*1+lsi)*1]), &(inteval->stack[((hsi*49896+204444)*1+lsi)*1]), &(inteval->stack[((hsi*41580+153900)*1+lsi)*1]),36);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*71280+124200)*1+lsi)*1]), &(inteval->stack[((hsi*66528+299160)*1+lsi)*1]), &(inteval->stack[((hsi*55440+583236)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+195480)*1+lsi)*1]), &(inteval->stack[((hsi*6156+0)*1+lsi)*1]), &(inteval->stack[((hsi*5508+6156)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+212004)*1+lsi)*1]), &(inteval->stack[((hsi*16524+195480)*1+lsi)*1]), &(inteval->stack[((hsi*14688+396720)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+241380)*1+lsi)*1]), &(inteval->stack[((hsi*29376+212004)*1+lsi)*1]), &(inteval->stack[((hsi*25920+411408)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+365688)*1+lsi)*1]), &(inteval->stack[((hsi*43200+241380)*1+lsi)*1]), &(inteval->stack[((hsi*37800+437328)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+195480)*1+lsi)*1]), &(inteval->stack[((hsi*56700+365688)*1+lsi)*1]), &(inteval->stack[((hsi*49140+475128)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+365688)*1+lsi)*1]), &(inteval->stack[((hsi*68796+195480)*1+lsi)*1]), &(inteval->stack[((hsi*58968+524268)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+195480)*1+lsi)*1]), &(inteval->stack[((hsi*78624+365688)*1+lsi)*1]), &(inteval->stack[((hsi*66528+299160)*1+lsi)*1]),36);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*89100+35100)*1+lsi)*1]), &(inteval->stack[((hsi*85536+195480)*1+lsi)*1]), &(inteval->stack[((hsi*71280+124200)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*89100+35100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
