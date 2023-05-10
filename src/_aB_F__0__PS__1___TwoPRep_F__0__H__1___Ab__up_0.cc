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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
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
#include <_aB_F__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,44104)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+182704)*1+lsi)*1]), &(inteval->stack[((hsi*1365+34619)*1+lsi)*1]), &(inteval->stack[((hsi*1170+35984)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+186214)*1+lsi)*1]), &(inteval->stack[((hsi*1575+33044)*1+lsi)*1]), &(inteval->stack[((hsi*1365+34619)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+190309)*1+lsi)*1]), &(inteval->stack[((hsi*4095+186214)*1+lsi)*1]), &(inteval->stack[((hsi*3510+182704)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+197329)*1+lsi)*1]), &(inteval->stack[((hsi*1800+31244)*1+lsi)*1]), &(inteval->stack[((hsi*1575+33044)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+202054)*1+lsi)*1]), &(inteval->stack[((hsi*4725+197329)*1+lsi)*1]), &(inteval->stack[((hsi*4095+186214)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+210244)*1+lsi)*1]), &(inteval->stack[((hsi*8190+202054)*1+lsi)*1]), &(inteval->stack[((hsi*7020+190309)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+186214)*1+lsi)*1]), &(inteval->stack[((hsi*1170+35984)*1+lsi)*1]), &(inteval->stack[((hsi*990+37154)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+221944)*1+lsi)*1]), &(inteval->stack[((hsi*3510+182704)*1+lsi)*1]), &(inteval->stack[((hsi*2970+186214)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+227884)*1+lsi)*1]), &(inteval->stack[((hsi*7020+190309)*1+lsi)*1]), &(inteval->stack[((hsi*5940+221944)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+237784)*1+lsi)*1]), &(inteval->stack[((hsi*11700+210244)*1+lsi)*1]), &(inteval->stack[((hsi*9900+227884)*1+lsi)*1]),15);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*5400+221944)*1+lsi)*1]), &(inteval->stack[((hsi*2040+29204)*1+lsi)*1]), &(inteval->stack[((hsi*1800+31244)*1+lsi)*1]),15);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*9450+182704)*1+lsi)*1]), &(inteval->stack[((hsi*5400+221944)*1+lsi)*1]), &(inteval->stack[((hsi*4725+197329)*1+lsi)*1]),15);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*13650+221944)*1+lsi)*1]), &(inteval->stack[((hsi*9450+182704)*1+lsi)*1]), &(inteval->stack[((hsi*8190+202054)*1+lsi)*1]),15);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*17550+182704)*1+lsi)*1]), &(inteval->stack[((hsi*13650+221944)*1+lsi)*1]), &(inteval->stack[((hsi*11700+210244)*1+lsi)*1]),15);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*20790+200254)*1+lsi)*1]), &(inteval->stack[((hsi*17550+182704)*1+lsi)*1]), &(inteval->stack[((hsi*14850+237784)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+182704)*1+lsi)*1]), &(inteval->stack[((hsi*1911+24269)*1+lsi)*1]), &(inteval->stack[((hsi*1638+26180)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+187618)*1+lsi)*1]), &(inteval->stack[((hsi*2205+22064)*1+lsi)*1]), &(inteval->stack[((hsi*1911+24269)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+221044)*1+lsi)*1]), &(inteval->stack[((hsi*5733+187618)*1+lsi)*1]), &(inteval->stack[((hsi*4914+182704)*1+lsi)*1]),21);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*6615+29204)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19544)*1+lsi)*1]), &(inteval->stack[((hsi*2205+22064)*1+lsi)*1]),21);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*11466+230872)*1+lsi)*1]), &(inteval->stack[((hsi*6615+29204)*1+lsi)*1]), &(inteval->stack[((hsi*5733+187618)*1+lsi)*1]),21);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*16380+242338)*1+lsi)*1]), &(inteval->stack[((hsi*11466+230872)*1+lsi)*1]), &(inteval->stack[((hsi*9828+221044)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+187618)*1+lsi)*1]), &(inteval->stack[((hsi*1638+26180)*1+lsi)*1]), &(inteval->stack[((hsi*1386+27818)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+191776)*1+lsi)*1]), &(inteval->stack[((hsi*4914+182704)*1+lsi)*1]), &(inteval->stack[((hsi*4158+187618)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+258718)*1+lsi)*1]), &(inteval->stack[((hsi*9828+221044)*1+lsi)*1]), &(inteval->stack[((hsi*8316+191776)*1+lsi)*1]),21);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*20790+272578)*1+lsi)*1]), &(inteval->stack[((hsi*16380+242338)*1+lsi)*1]), &(inteval->stack[((hsi*13860+258718)*1+lsi)*1]),21);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*7560+182704)*1+lsi)*1]), &(inteval->stack[((hsi*2856+16688)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19544)*1+lsi)*1]),21);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*13230+258718)*1+lsi)*1]), &(inteval->stack[((hsi*7560+182704)*1+lsi)*1]), &(inteval->stack[((hsi*6615+29204)*1+lsi)*1]),21);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*19110+16688)*1+lsi)*1]), &(inteval->stack[((hsi*13230+258718)*1+lsi)*1]), &(inteval->stack[((hsi*11466+230872)*1+lsi)*1]),21);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*24570+293368)*1+lsi)*1]), &(inteval->stack[((hsi*19110+16688)*1+lsi)*1]), &(inteval->stack[((hsi*16380+242338)*1+lsi)*1]),21);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*29106+221044)*1+lsi)*1]), &(inteval->stack[((hsi*24570+293368)*1+lsi)*1]), &(inteval->stack[((hsi*20790+272578)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*62370+250150)*1+lsi)*1]), &(inteval->stack[((hsi*29106+221044)*1+lsi)*1]), &(inteval->stack[((hsi*20790+200254)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+16688)*1+lsi)*1]), &(inteval->stack[((hsi*910+41754)*1+lsi)*1]), &(inteval->stack[((hsi*780+42664)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+19028)*1+lsi)*1]), &(inteval->stack[((hsi*1050+40704)*1+lsi)*1]), &(inteval->stack[((hsi*910+41754)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+182704)*1+lsi)*1]), &(inteval->stack[((hsi*2730+19028)*1+lsi)*1]), &(inteval->stack[((hsi*2340+16688)*1+lsi)*1]),10);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*3150+21758)*1+lsi)*1]), &(inteval->stack[((hsi*1200+39504)*1+lsi)*1]), &(inteval->stack[((hsi*1050+40704)*1+lsi)*1]),10);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*5460+24908)*1+lsi)*1]), &(inteval->stack[((hsi*3150+21758)*1+lsi)*1]), &(inteval->stack[((hsi*2730+19028)*1+lsi)*1]),10);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*7800+187384)*1+lsi)*1]), &(inteval->stack[((hsi*5460+24908)*1+lsi)*1]), &(inteval->stack[((hsi*4680+182704)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+30368)*1+lsi)*1]), &(inteval->stack[((hsi*780+42664)*1+lsi)*1]), &(inteval->stack[((hsi*660+43444)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+32348)*1+lsi)*1]), &(inteval->stack[((hsi*2340+16688)*1+lsi)*1]), &(inteval->stack[((hsi*1980+30368)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+312520)*1+lsi)*1]), &(inteval->stack[((hsi*4680+182704)*1+lsi)*1]), &(inteval->stack[((hsi*3960+32348)*1+lsi)*1]),10);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*9900+319120)*1+lsi)*1]), &(inteval->stack[((hsi*7800+187384)*1+lsi)*1]), &(inteval->stack[((hsi*6600+312520)*1+lsi)*1]),10);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*3600+30368)*1+lsi)*1]), &(inteval->stack[((hsi*1360+38144)*1+lsi)*1]), &(inteval->stack[((hsi*1200+39504)*1+lsi)*1]),10);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*6300+33968)*1+lsi)*1]), &(inteval->stack[((hsi*3600+30368)*1+lsi)*1]), &(inteval->stack[((hsi*3150+21758)*1+lsi)*1]),10);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*9100+329020)*1+lsi)*1]), &(inteval->stack[((hsi*6300+33968)*1+lsi)*1]), &(inteval->stack[((hsi*5460+24908)*1+lsi)*1]),10);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*11700+16688)*1+lsi)*1]), &(inteval->stack[((hsi*9100+329020)*1+lsi)*1]), &(inteval->stack[((hsi*7800+187384)*1+lsi)*1]),10);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*13860+182704)*1+lsi)*1]), &(inteval->stack[((hsi*11700+16688)*1+lsi)*1]), &(inteval->stack[((hsi*9900+319120)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*41580+312520)*1+lsi)*1]), &(inteval->stack[((hsi*20790+200254)*1+lsi)*1]), &(inteval->stack[((hsi*13860+182704)*1+lsi)*1]),1386);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*83160+354100)*1+lsi)*1]), &(inteval->stack[((hsi*62370+250150)*1+lsi)*1]), &(inteval->stack[((hsi*41580+312520)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+312520)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+182704)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+319072)*1+lsi)*1]), &(inteval->stack[((hsi*7644+182704)*1+lsi)*1]), &(inteval->stack[((hsi*6552+312520)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+190348)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+16688)*1+lsi)*1]), &(inteval->stack[((hsi*8820+190348)*1+lsi)*1]), &(inteval->stack[((hsi*7644+182704)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+332176)*1+lsi)*1]), &(inteval->stack[((hsi*15288+16688)*1+lsi)*1]), &(inteval->stack[((hsi*13104+319072)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+199168)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+204712)*1+lsi)*1]), &(inteval->stack[((hsi*6552+312520)*1+lsi)*1]), &(inteval->stack[((hsi*5544+199168)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+437260)*1+lsi)*1]), &(inteval->stack[((hsi*13104+319072)*1+lsi)*1]), &(inteval->stack[((hsi*11088+204712)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+455740)*1+lsi)*1]), &(inteval->stack[((hsi*21840+332176)*1+lsi)*1]), &(inteval->stack[((hsi*18480+437260)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+199168)*1+lsi)*1]), &(inteval->stack[((hsi*3808+0)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+312520)*1+lsi)*1]), &(inteval->stack[((hsi*10080+199168)*1+lsi)*1]), &(inteval->stack[((hsi*8820+190348)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+182704)*1+lsi)*1]), &(inteval->stack[((hsi*17640+312520)*1+lsi)*1]), &(inteval->stack[((hsi*15288+16688)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+0)*1+lsi)*1]), &(inteval->stack[((hsi*25480+182704)*1+lsi)*1]), &(inteval->stack[((hsi*21840+332176)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+312520)*1+lsi)*1]), &(inteval->stack[((hsi*32760+0)*1+lsi)*1]), &(inteval->stack[((hsi*27720+455740)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*87318+437260)*1+lsi)*1]), &(inteval->stack[((hsi*38808+312520)*1+lsi)*1]), &(inteval->stack[((hsi*29106+221044)*1+lsi)*1]),1386);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*124740+524578)*1+lsi)*1]), &(inteval->stack[((hsi*87318+437260)*1+lsi)*1]), &(inteval->stack[((hsi*62370+250150)*1+lsi)*1]),1386);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*138600+44104)*1+lsi)*1]), &(inteval->stack[((hsi*124740+524578)*1+lsi)*1]), &(inteval->stack[((hsi*83160+354100)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*138600+44104)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
