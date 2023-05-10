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
#include <HRRPart1bra0ket0mm.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <eri3_aB_L__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,52425)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__M__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+188550)*1+lsi)*1]), &(inteval->stack[((hsi*3510+43470)*1+lsi)*1]), &(inteval->stack[((hsi*2970+46980)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+197460)*1+lsi)*1]), &(inteval->stack[((hsi*4095+39375)*1+lsi)*1]), &(inteval->stack[((hsi*3510+43470)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+207990)*1+lsi)*1]), &(inteval->stack[((hsi*10530+197460)*1+lsi)*1]), &(inteval->stack[((hsi*8910+188550)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+225810)*1+lsi)*1]), &(inteval->stack[((hsi*4725+34650)*1+lsi)*1]), &(inteval->stack[((hsi*4095+39375)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+238095)*1+lsi)*1]), &(inteval->stack[((hsi*12285+225810)*1+lsi)*1]), &(inteval->stack[((hsi*10530+197460)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+259155)*1+lsi)*1]), &(inteval->stack[((hsi*21060+238095)*1+lsi)*1]), &(inteval->stack[((hsi*17820+207990)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+288855)*1+lsi)*1]), &(inteval->stack[((hsi*5400+29250)*1+lsi)*1]), &(inteval->stack[((hsi*4725+34650)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+303030)*1+lsi)*1]), &(inteval->stack[((hsi*14175+288855)*1+lsi)*1]), &(inteval->stack[((hsi*12285+225810)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+327600)*1+lsi)*1]), &(inteval->stack[((hsi*24570+303030)*1+lsi)*1]), &(inteval->stack[((hsi*21060+238095)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+362700)*1+lsi)*1]), &(inteval->stack[((hsi*35100+327600)*1+lsi)*1]), &(inteval->stack[((hsi*29700+259155)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+225810)*1+lsi)*1]), &(inteval->stack[((hsi*6120+23130)*1+lsi)*1]), &(inteval->stack[((hsi*5400+29250)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+407250)*1+lsi)*1]), &(inteval->stack[((hsi*16200+225810)*1+lsi)*1]), &(inteval->stack[((hsi*14175+288855)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+435600)*1+lsi)*1]), &(inteval->stack[((hsi*28350+407250)*1+lsi)*1]), &(inteval->stack[((hsi*24570+303030)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+476550)*1+lsi)*1]), &(inteval->stack[((hsi*40950+435600)*1+lsi)*1]), &(inteval->stack[((hsi*35100+327600)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+288855)*1+lsi)*1]), &(inteval->stack[((hsi*52650+476550)*1+lsi)*1]), &(inteval->stack[((hsi*44550+362700)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+529200)*1+lsi)*1]), &(inteval->stack[((hsi*6885+16245)*1+lsi)*1]), &(inteval->stack[((hsi*6120+23130)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+547560)*1+lsi)*1]), &(inteval->stack[((hsi*18360+529200)*1+lsi)*1]), &(inteval->stack[((hsi*16200+225810)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+579960)*1+lsi)*1]), &(inteval->stack[((hsi*32400+547560)*1+lsi)*1]), &(inteval->stack[((hsi*28350+407250)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+627210)*1+lsi)*1]), &(inteval->stack[((hsi*47250+579960)*1+lsi)*1]), &(inteval->stack[((hsi*40950+435600)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+688635)*1+lsi)*1]), &(inteval->stack[((hsi*61425+627210)*1+lsi)*1]), &(inteval->stack[((hsi*52650+476550)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+407250)*1+lsi)*1]), &(inteval->stack[((hsi*73710+688635)*1+lsi)*1]), &(inteval->stack[((hsi*62370+288855)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+490410)*1+lsi)*1]), &(inteval->stack[((hsi*7695+8550)*1+lsi)*1]), &(inteval->stack[((hsi*6885+16245)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+762345)*1+lsi)*1]), &(inteval->stack[((hsi*20655+490410)*1+lsi)*1]), &(inteval->stack[((hsi*18360+529200)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+799065)*1+lsi)*1]), &(inteval->stack[((hsi*36720+762345)*1+lsi)*1]), &(inteval->stack[((hsi*32400+547560)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+853065)*1+lsi)*1]), &(inteval->stack[((hsi*54000+799065)*1+lsi)*1]), &(inteval->stack[((hsi*47250+579960)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+511065)*1+lsi)*1]), &(inteval->stack[((hsi*70875+853065)*1+lsi)*1]), &(inteval->stack[((hsi*61425+627210)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+923940)*1+lsi)*1]), &(inteval->stack[((hsi*85995+511065)*1+lsi)*1]), &(inteval->stack[((hsi*73710+688635)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+597060)*1+lsi)*1]), &(inteval->stack[((hsi*98280+923940)*1+lsi)*1]), &(inteval->stack[((hsi*83160+407250)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+703980)*1+lsi)*1]), &(inteval->stack[((hsi*2970+46980)*1+lsi)*1]), &(inteval->stack[((hsi*2475+49950)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+711405)*1+lsi)*1]), &(inteval->stack[((hsi*8910+188550)*1+lsi)*1]), &(inteval->stack[((hsi*7425+703980)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+16245)*1+lsi)*1]), &(inteval->stack[((hsi*17820+207990)*1+lsi)*1]), &(inteval->stack[((hsi*14850+711405)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+188550)*1+lsi)*1]), &(inteval->stack[((hsi*29700+259155)*1+lsi)*1]), &(inteval->stack[((hsi*24750+16245)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+225675)*1+lsi)*1]), &(inteval->stack[((hsi*44550+362700)*1+lsi)*1]), &(inteval->stack[((hsi*37125+188550)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+1022220)*1+lsi)*1]), &(inteval->stack[((hsi*62370+288855)*1+lsi)*1]), &(inteval->stack[((hsi*51975+225675)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+188550)*1+lsi)*1]), &(inteval->stack[((hsi*83160+407250)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1022220)*1+lsi)*1]),45);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*111375+277650)*1+lsi)*1]), &(inteval->stack[((hsi*106920+597060)*1+lsi)*1]), &(inteval->stack[((hsi*89100+188550)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+389025)*1+lsi)*1]), &(inteval->stack[((hsi*8550+0)*1+lsi)*1]), &(inteval->stack[((hsi*7695+8550)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+188550)*1+lsi)*1]), &(inteval->stack[((hsi*23085+389025)*1+lsi)*1]), &(inteval->stack[((hsi*20655+490410)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+389025)*1+lsi)*1]), &(inteval->stack[((hsi*41310+188550)*1+lsi)*1]), &(inteval->stack[((hsi*36720+762345)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+703980)*1+lsi)*1]), &(inteval->stack[((hsi*61200+389025)*1+lsi)*1]), &(inteval->stack[((hsi*54000+799065)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+389025)*1+lsi)*1]), &(inteval->stack[((hsi*81000+703980)*1+lsi)*1]), &(inteval->stack[((hsi*70875+853065)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+703980)*1+lsi)*1]), &(inteval->stack[((hsi*99225+389025)*1+lsi)*1]), &(inteval->stack[((hsi*85995+511065)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+389025)*1+lsi)*1]), &(inteval->stack[((hsi*114660+703980)*1+lsi)*1]), &(inteval->stack[((hsi*98280+923940)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+703980)*1+lsi)*1]), &(inteval->stack[((hsi*126360+389025)*1+lsi)*1]), &(inteval->stack[((hsi*106920+597060)*1+lsi)*1]),45);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*136125+52425)*1+lsi)*1]), &(inteval->stack[((hsi*133650+703980)*1+lsi)*1]), &(inteval->stack[((hsi*111375+277650)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*136125+52425)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
