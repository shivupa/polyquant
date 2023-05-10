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
#include <eri3_aB_I__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_I__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27300)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_I__0__M__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+96600)*1+lsi)*1]), &(inteval->stack[((hsi*2184+21728)*1+lsi)*1]), &(inteval->stack[((hsi*1848+23912)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+102144)*1+lsi)*1]), &(inteval->stack[((hsi*2548+19180)*1+lsi)*1]), &(inteval->stack[((hsi*2184+21728)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+108696)*1+lsi)*1]), &(inteval->stack[((hsi*6552+102144)*1+lsi)*1]), &(inteval->stack[((hsi*5544+96600)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+119784)*1+lsi)*1]), &(inteval->stack[((hsi*2940+16240)*1+lsi)*1]), &(inteval->stack[((hsi*2548+19180)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+127428)*1+lsi)*1]), &(inteval->stack[((hsi*7644+119784)*1+lsi)*1]), &(inteval->stack[((hsi*6552+102144)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+140532)*1+lsi)*1]), &(inteval->stack[((hsi*13104+127428)*1+lsi)*1]), &(inteval->stack[((hsi*11088+108696)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+159012)*1+lsi)*1]), &(inteval->stack[((hsi*3360+12880)*1+lsi)*1]), &(inteval->stack[((hsi*2940+16240)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+167832)*1+lsi)*1]), &(inteval->stack[((hsi*8820+159012)*1+lsi)*1]), &(inteval->stack[((hsi*7644+119784)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+183120)*1+lsi)*1]), &(inteval->stack[((hsi*15288+167832)*1+lsi)*1]), &(inteval->stack[((hsi*13104+127428)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+204960)*1+lsi)*1]), &(inteval->stack[((hsi*21840+183120)*1+lsi)*1]), &(inteval->stack[((hsi*18480+140532)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+119784)*1+lsi)*1]), &(inteval->stack[((hsi*3808+9072)*1+lsi)*1]), &(inteval->stack[((hsi*3360+12880)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+232680)*1+lsi)*1]), &(inteval->stack[((hsi*10080+119784)*1+lsi)*1]), &(inteval->stack[((hsi*8820+159012)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+250320)*1+lsi)*1]), &(inteval->stack[((hsi*17640+232680)*1+lsi)*1]), &(inteval->stack[((hsi*15288+167832)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+275800)*1+lsi)*1]), &(inteval->stack[((hsi*25480+250320)*1+lsi)*1]), &(inteval->stack[((hsi*21840+183120)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+159012)*1+lsi)*1]), &(inteval->stack[((hsi*32760+275800)*1+lsi)*1]), &(inteval->stack[((hsi*27720+204960)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+308560)*1+lsi)*1]), &(inteval->stack[((hsi*4284+4788)*1+lsi)*1]), &(inteval->stack[((hsi*3808+9072)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+319984)*1+lsi)*1]), &(inteval->stack[((hsi*11424+308560)*1+lsi)*1]), &(inteval->stack[((hsi*10080+119784)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+340144)*1+lsi)*1]), &(inteval->stack[((hsi*20160+319984)*1+lsi)*1]), &(inteval->stack[((hsi*17640+232680)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+369544)*1+lsi)*1]), &(inteval->stack[((hsi*29400+340144)*1+lsi)*1]), &(inteval->stack[((hsi*25480+250320)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+407764)*1+lsi)*1]), &(inteval->stack[((hsi*38220+369544)*1+lsi)*1]), &(inteval->stack[((hsi*32760+275800)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+232680)*1+lsi)*1]), &(inteval->stack[((hsi*45864+407764)*1+lsi)*1]), &(inteval->stack[((hsi*38808+159012)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+284424)*1+lsi)*1]), &(inteval->stack[((hsi*1848+23912)*1+lsi)*1]), &(inteval->stack[((hsi*1540+25760)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+119784)*1+lsi)*1]), &(inteval->stack[((hsi*5544+96600)*1+lsi)*1]), &(inteval->stack[((hsi*4620+284424)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+284424)*1+lsi)*1]), &(inteval->stack[((hsi*11088+108696)*1+lsi)*1]), &(inteval->stack[((hsi*9240+119784)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+96600)*1+lsi)*1]), &(inteval->stack[((hsi*18480+140532)*1+lsi)*1]), &(inteval->stack[((hsi*15400+284424)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+119700)*1+lsi)*1]), &(inteval->stack[((hsi*27720+204960)*1+lsi)*1]), &(inteval->stack[((hsi*23100+96600)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+453628)*1+lsi)*1]), &(inteval->stack[((hsi*38808+159012)*1+lsi)*1]), &(inteval->stack[((hsi*32340+119700)*1+lsi)*1]),28);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*55440+96600)*1+lsi)*1]), &(inteval->stack[((hsi*51744+232680)*1+lsi)*1]), &(inteval->stack[((hsi*43120+453628)*1+lsi)*1]),28);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*12852+152040)*1+lsi)*1]), &(inteval->stack[((hsi*4788+0)*1+lsi)*1]), &(inteval->stack[((hsi*4284+4788)*1+lsi)*1]),28);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*22848+164892)*1+lsi)*1]), &(inteval->stack[((hsi*12852+152040)*1+lsi)*1]), &(inteval->stack[((hsi*11424+308560)*1+lsi)*1]),28);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*33600+187740)*1+lsi)*1]), &(inteval->stack[((hsi*22848+164892)*1+lsi)*1]), &(inteval->stack[((hsi*20160+319984)*1+lsi)*1]),28);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*44100+284424)*1+lsi)*1]), &(inteval->stack[((hsi*33600+187740)*1+lsi)*1]), &(inteval->stack[((hsi*29400+340144)*1+lsi)*1]),28);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*53508+152040)*1+lsi)*1]), &(inteval->stack[((hsi*44100+284424)*1+lsi)*1]), &(inteval->stack[((hsi*38220+369544)*1+lsi)*1]),28);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*61152+284424)*1+lsi)*1]), &(inteval->stack[((hsi*53508+152040)*1+lsi)*1]), &(inteval->stack[((hsi*45864+407764)*1+lsi)*1]),28);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*66528+152040)*1+lsi)*1]), &(inteval->stack[((hsi*61152+284424)*1+lsi)*1]), &(inteval->stack[((hsi*51744+232680)*1+lsi)*1]),28);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*69300+27300)*1+lsi)*1]), &(inteval->stack[((hsi*66528+152040)*1+lsi)*1]), &(inteval->stack[((hsi*55440+96600)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*69300+27300)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
