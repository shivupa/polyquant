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
#include <HRRPart0bra0ket0ip.h>
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
#include <_aB_I__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,47936)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_P__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+203168)*1+lsi)*1]), &(inteval->stack[((hsi*2548+41356)*1+lsi)*1]), &(inteval->stack[((hsi*2184+43904)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+209720)*1+lsi)*1]), &(inteval->stack[((hsi*2940+38416)*1+lsi)*1]), &(inteval->stack[((hsi*2548+41356)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+217364)*1+lsi)*1]), &(inteval->stack[((hsi*7644+209720)*1+lsi)*1]), &(inteval->stack[((hsi*6552+203168)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+230468)*1+lsi)*1]), &(inteval->stack[((hsi*3360+35056)*1+lsi)*1]), &(inteval->stack[((hsi*2940+38416)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+239288)*1+lsi)*1]), &(inteval->stack[((hsi*8820+230468)*1+lsi)*1]), &(inteval->stack[((hsi*7644+209720)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+254576)*1+lsi)*1]), &(inteval->stack[((hsi*15288+239288)*1+lsi)*1]), &(inteval->stack[((hsi*13104+217364)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+276416)*1+lsi)*1]), &(inteval->stack[((hsi*3808+31248)*1+lsi)*1]), &(inteval->stack[((hsi*3360+35056)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+286496)*1+lsi)*1]), &(inteval->stack[((hsi*10080+276416)*1+lsi)*1]), &(inteval->stack[((hsi*8820+230468)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+304136)*1+lsi)*1]), &(inteval->stack[((hsi*17640+286496)*1+lsi)*1]), &(inteval->stack[((hsi*15288+239288)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+329616)*1+lsi)*1]), &(inteval->stack[((hsi*25480+304136)*1+lsi)*1]), &(inteval->stack[((hsi*21840+254576)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+230468)*1+lsi)*1]), &(inteval->stack[((hsi*2184+43904)*1+lsi)*1]), &(inteval->stack[((hsi*1848+46088)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+236012)*1+lsi)*1]), &(inteval->stack[((hsi*6552+203168)*1+lsi)*1]), &(inteval->stack[((hsi*5544+230468)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+362376)*1+lsi)*1]), &(inteval->stack[((hsi*13104+217364)*1+lsi)*1]), &(inteval->stack[((hsi*11088+236012)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+203168)*1+lsi)*1]), &(inteval->stack[((hsi*21840+254576)*1+lsi)*1]), &(inteval->stack[((hsi*18480+362376)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+230888)*1+lsi)*1]), &(inteval->stack[((hsi*32760+329616)*1+lsi)*1]), &(inteval->stack[((hsi*27720+203168)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+203168)*1+lsi)*1]), &(inteval->stack[((hsi*4284+26964)*1+lsi)*1]), &(inteval->stack[((hsi*3808+31248)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+26964)*1+lsi)*1]), &(inteval->stack[((hsi*11424+203168)*1+lsi)*1]), &(inteval->stack[((hsi*10080+276416)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+362376)*1+lsi)*1]), &(inteval->stack[((hsi*20160+26964)*1+lsi)*1]), &(inteval->stack[((hsi*17640+286496)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+391776)*1+lsi)*1]), &(inteval->stack[((hsi*29400+362376)*1+lsi)*1]), &(inteval->stack[((hsi*25480+304136)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+269696)*1+lsi)*1]), &(inteval->stack[((hsi*38220+391776)*1+lsi)*1]), &(inteval->stack[((hsi*32760+329616)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+315560)*1+lsi)*1]), &(inteval->stack[((hsi*45864+269696)*1+lsi)*1]), &(inteval->stack[((hsi*38808+230888)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+203168)*1+lsi)*1]), &(inteval->stack[((hsi*3276+18504)*1+lsi)*1]), &(inteval->stack[((hsi*2808+21780)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+211592)*1+lsi)*1]), &(inteval->stack[((hsi*3780+14724)*1+lsi)*1]), &(inteval->stack[((hsi*3276+18504)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+221420)*1+lsi)*1]), &(inteval->stack[((hsi*9828+211592)*1+lsi)*1]), &(inteval->stack[((hsi*8424+203168)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+238268)*1+lsi)*1]), &(inteval->stack[((hsi*4320+10404)*1+lsi)*1]), &(inteval->stack[((hsi*3780+14724)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+249608)*1+lsi)*1]), &(inteval->stack[((hsi*11340+238268)*1+lsi)*1]), &(inteval->stack[((hsi*9828+211592)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+269264)*1+lsi)*1]), &(inteval->stack[((hsi*19656+249608)*1+lsi)*1]), &(inteval->stack[((hsi*16848+221420)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+26964)*1+lsi)*1]), &(inteval->stack[((hsi*4896+5508)*1+lsi)*1]), &(inteval->stack[((hsi*4320+10404)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+367304)*1+lsi)*1]), &(inteval->stack[((hsi*12960+26964)*1+lsi)*1]), &(inteval->stack[((hsi*11340+238268)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+389984)*1+lsi)*1]), &(inteval->stack[((hsi*22680+367304)*1+lsi)*1]), &(inteval->stack[((hsi*19656+249608)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+422744)*1+lsi)*1]), &(inteval->stack[((hsi*32760+389984)*1+lsi)*1]), &(inteval->stack[((hsi*28080+269264)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+238268)*1+lsi)*1]), &(inteval->stack[((hsi*2808+21780)*1+lsi)*1]), &(inteval->stack[((hsi*2376+24588)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+245396)*1+lsi)*1]), &(inteval->stack[((hsi*8424+203168)*1+lsi)*1]), &(inteval->stack[((hsi*7128+238268)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+464864)*1+lsi)*1]), &(inteval->stack[((hsi*16848+221420)*1+lsi)*1]), &(inteval->stack[((hsi*14256+245396)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+203168)*1+lsi)*1]), &(inteval->stack[((hsi*28080+269264)*1+lsi)*1]), &(inteval->stack[((hsi*23760+464864)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+238808)*1+lsi)*1]), &(inteval->stack[((hsi*42120+422744)*1+lsi)*1]), &(inteval->stack[((hsi*35640+203168)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+203168)*1+lsi)*1]), &(inteval->stack[((hsi*5508+0)*1+lsi)*1]), &(inteval->stack[((hsi*4896+5508)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+0)*1+lsi)*1]), &(inteval->stack[((hsi*14688+203168)*1+lsi)*1]), &(inteval->stack[((hsi*12960+26964)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+464864)*1+lsi)*1]), &(inteval->stack[((hsi*25920+0)*1+lsi)*1]), &(inteval->stack[((hsi*22680+367304)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+502664)*1+lsi)*1]), &(inteval->stack[((hsi*37800+464864)*1+lsi)*1]), &(inteval->stack[((hsi*32760+389984)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+551804)*1+lsi)*1]), &(inteval->stack[((hsi*49140+502664)*1+lsi)*1]), &(inteval->stack[((hsi*42120+422744)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+367304)*1+lsi)*1]), &(inteval->stack[((hsi*58968+551804)*1+lsi)*1]), &(inteval->stack[((hsi*49896+238808)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*155232+47936)*1+lsi)*1]), &(inteval->stack[((hsi*66528+367304)*1+lsi)*1]), &(inteval->stack[((hsi*51744+315560)*1+lsi)*1]),1848);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*155232+47936)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
