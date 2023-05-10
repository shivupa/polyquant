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
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_I__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_I__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31080)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_I__0__PS__1___TwoPRep_unit__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+114240)*1+lsi)*1]), &(inteval->stack[((hsi*2548+24500)*1+lsi)*1]), &(inteval->stack[((hsi*2184+27048)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+120792)*1+lsi)*1]), &(inteval->stack[((hsi*2940+21560)*1+lsi)*1]), &(inteval->stack[((hsi*2548+24500)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+128436)*1+lsi)*1]), &(inteval->stack[((hsi*7644+120792)*1+lsi)*1]), &(inteval->stack[((hsi*6552+114240)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+141540)*1+lsi)*1]), &(inteval->stack[((hsi*3360+18200)*1+lsi)*1]), &(inteval->stack[((hsi*2940+21560)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+150360)*1+lsi)*1]), &(inteval->stack[((hsi*8820+141540)*1+lsi)*1]), &(inteval->stack[((hsi*7644+120792)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+165648)*1+lsi)*1]), &(inteval->stack[((hsi*15288+150360)*1+lsi)*1]), &(inteval->stack[((hsi*13104+128436)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+187488)*1+lsi)*1]), &(inteval->stack[((hsi*3808+14392)*1+lsi)*1]), &(inteval->stack[((hsi*3360+18200)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+197568)*1+lsi)*1]), &(inteval->stack[((hsi*10080+187488)*1+lsi)*1]), &(inteval->stack[((hsi*8820+141540)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+215208)*1+lsi)*1]), &(inteval->stack[((hsi*17640+197568)*1+lsi)*1]), &(inteval->stack[((hsi*15288+150360)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+240688)*1+lsi)*1]), &(inteval->stack[((hsi*25480+215208)*1+lsi)*1]), &(inteval->stack[((hsi*21840+165648)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+141540)*1+lsi)*1]), &(inteval->stack[((hsi*4284+10108)*1+lsi)*1]), &(inteval->stack[((hsi*3808+14392)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+273448)*1+lsi)*1]), &(inteval->stack[((hsi*11424+141540)*1+lsi)*1]), &(inteval->stack[((hsi*10080+187488)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+293608)*1+lsi)*1]), &(inteval->stack[((hsi*20160+273448)*1+lsi)*1]), &(inteval->stack[((hsi*17640+197568)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+323008)*1+lsi)*1]), &(inteval->stack[((hsi*29400+293608)*1+lsi)*1]), &(inteval->stack[((hsi*25480+215208)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+187488)*1+lsi)*1]), &(inteval->stack[((hsi*38220+323008)*1+lsi)*1]), &(inteval->stack[((hsi*32760+240688)*1+lsi)*1]),28);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*12852+361228)*1+lsi)*1]), &(inteval->stack[((hsi*4788+5320)*1+lsi)*1]), &(inteval->stack[((hsi*4284+10108)*1+lsi)*1]),28);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*22848+374080)*1+lsi)*1]), &(inteval->stack[((hsi*12852+361228)*1+lsi)*1]), &(inteval->stack[((hsi*11424+141540)*1+lsi)*1]),28);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*33600+396928)*1+lsi)*1]), &(inteval->stack[((hsi*22848+374080)*1+lsi)*1]), &(inteval->stack[((hsi*20160+273448)*1+lsi)*1]),28);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*44100+430528)*1+lsi)*1]), &(inteval->stack[((hsi*33600+396928)*1+lsi)*1]), &(inteval->stack[((hsi*29400+293608)*1+lsi)*1]),28);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*53508+474628)*1+lsi)*1]), &(inteval->stack[((hsi*44100+430528)*1+lsi)*1]), &(inteval->stack[((hsi*38220+323008)*1+lsi)*1]),28);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*61152+273448)*1+lsi)*1]), &(inteval->stack[((hsi*53508+474628)*1+lsi)*1]), &(inteval->stack[((hsi*45864+187488)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+334600)*1+lsi)*1]), &(inteval->stack[((hsi*2184+27048)*1+lsi)*1]), &(inteval->stack[((hsi*1848+29232)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+141540)*1+lsi)*1]), &(inteval->stack[((hsi*6552+114240)*1+lsi)*1]), &(inteval->stack[((hsi*5544+334600)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+334600)*1+lsi)*1]), &(inteval->stack[((hsi*13104+128436)*1+lsi)*1]), &(inteval->stack[((hsi*11088+141540)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+114240)*1+lsi)*1]), &(inteval->stack[((hsi*21840+165648)*1+lsi)*1]), &(inteval->stack[((hsi*18480+334600)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+141960)*1+lsi)*1]), &(inteval->stack[((hsi*32760+240688)*1+lsi)*1]), &(inteval->stack[((hsi*27720+114240)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+528136)*1+lsi)*1]), &(inteval->stack[((hsi*45864+187488)*1+lsi)*1]), &(inteval->stack[((hsi*38808+141960)*1+lsi)*1]),28);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*66528+114240)*1+lsi)*1]), &(inteval->stack[((hsi*61152+273448)*1+lsi)*1]), &(inteval->stack[((hsi*51744+528136)*1+lsi)*1]),28);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*14364+180768)*1+lsi)*1]), &(inteval->stack[((hsi*5320+0)*1+lsi)*1]), &(inteval->stack[((hsi*4788+5320)*1+lsi)*1]),28);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*25704+195132)*1+lsi)*1]), &(inteval->stack[((hsi*14364+180768)*1+lsi)*1]), &(inteval->stack[((hsi*12852+361228)*1+lsi)*1]),28);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*38080+220836)*1+lsi)*1]), &(inteval->stack[((hsi*25704+195132)*1+lsi)*1]), &(inteval->stack[((hsi*22848+374080)*1+lsi)*1]),28);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*50400+334600)*1+lsi)*1]), &(inteval->stack[((hsi*38080+220836)*1+lsi)*1]), &(inteval->stack[((hsi*33600+396928)*1+lsi)*1]),28);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*61740+180768)*1+lsi)*1]), &(inteval->stack[((hsi*50400+334600)*1+lsi)*1]), &(inteval->stack[((hsi*44100+430528)*1+lsi)*1]),28);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*71344+334600)*1+lsi)*1]), &(inteval->stack[((hsi*61740+180768)*1+lsi)*1]), &(inteval->stack[((hsi*53508+474628)*1+lsi)*1]),28);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*78624+180768)*1+lsi)*1]), &(inteval->stack[((hsi*71344+334600)*1+lsi)*1]), &(inteval->stack[((hsi*61152+273448)*1+lsi)*1]),28);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*83160+31080)*1+lsi)*1]), &(inteval->stack[((hsi*78624+180768)*1+lsi)*1]), &(inteval->stack[((hsi*66528+114240)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*83160+31080)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
