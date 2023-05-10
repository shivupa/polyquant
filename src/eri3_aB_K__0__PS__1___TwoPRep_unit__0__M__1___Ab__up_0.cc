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
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psm.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_K__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_K__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,47520)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_K__0__PS__1___TwoPRep_unit__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+178200)*1+lsi)*1]), &(inteval->stack[((hsi*3276+39060)*1+lsi)*1]), &(inteval->stack[((hsi*2808+42336)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+186624)*1+lsi)*1]), &(inteval->stack[((hsi*3780+35280)*1+lsi)*1]), &(inteval->stack[((hsi*3276+39060)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+196452)*1+lsi)*1]), &(inteval->stack[((hsi*9828+186624)*1+lsi)*1]), &(inteval->stack[((hsi*8424+178200)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+213300)*1+lsi)*1]), &(inteval->stack[((hsi*4320+30960)*1+lsi)*1]), &(inteval->stack[((hsi*3780+35280)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+224640)*1+lsi)*1]), &(inteval->stack[((hsi*11340+213300)*1+lsi)*1]), &(inteval->stack[((hsi*9828+186624)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+244296)*1+lsi)*1]), &(inteval->stack[((hsi*19656+224640)*1+lsi)*1]), &(inteval->stack[((hsi*16848+196452)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+272376)*1+lsi)*1]), &(inteval->stack[((hsi*4896+26064)*1+lsi)*1]), &(inteval->stack[((hsi*4320+30960)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+285336)*1+lsi)*1]), &(inteval->stack[((hsi*12960+272376)*1+lsi)*1]), &(inteval->stack[((hsi*11340+213300)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+308016)*1+lsi)*1]), &(inteval->stack[((hsi*22680+285336)*1+lsi)*1]), &(inteval->stack[((hsi*19656+224640)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+340776)*1+lsi)*1]), &(inteval->stack[((hsi*32760+308016)*1+lsi)*1]), &(inteval->stack[((hsi*28080+244296)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+213300)*1+lsi)*1]), &(inteval->stack[((hsi*5508+20556)*1+lsi)*1]), &(inteval->stack[((hsi*4896+26064)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+382896)*1+lsi)*1]), &(inteval->stack[((hsi*14688+213300)*1+lsi)*1]), &(inteval->stack[((hsi*12960+272376)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+408816)*1+lsi)*1]), &(inteval->stack[((hsi*25920+382896)*1+lsi)*1]), &(inteval->stack[((hsi*22680+285336)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+446616)*1+lsi)*1]), &(inteval->stack[((hsi*37800+408816)*1+lsi)*1]), &(inteval->stack[((hsi*32760+308016)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+272376)*1+lsi)*1]), &(inteval->stack[((hsi*49140+446616)*1+lsi)*1]), &(inteval->stack[((hsi*42120+340776)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+495756)*1+lsi)*1]), &(inteval->stack[((hsi*6156+14400)*1+lsi)*1]), &(inteval->stack[((hsi*5508+20556)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+512280)*1+lsi)*1]), &(inteval->stack[((hsi*16524+495756)*1+lsi)*1]), &(inteval->stack[((hsi*14688+213300)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+541656)*1+lsi)*1]), &(inteval->stack[((hsi*29376+512280)*1+lsi)*1]), &(inteval->stack[((hsi*25920+382896)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+584856)*1+lsi)*1]), &(inteval->stack[((hsi*43200+541656)*1+lsi)*1]), &(inteval->stack[((hsi*37800+408816)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+641556)*1+lsi)*1]), &(inteval->stack[((hsi*56700+584856)*1+lsi)*1]), &(inteval->stack[((hsi*49140+446616)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+382896)*1+lsi)*1]), &(inteval->stack[((hsi*68796+641556)*1+lsi)*1]), &(inteval->stack[((hsi*58968+272376)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+461520)*1+lsi)*1]), &(inteval->stack[((hsi*6840+7560)*1+lsi)*1]), &(inteval->stack[((hsi*6156+14400)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+710352)*1+lsi)*1]), &(inteval->stack[((hsi*18468+461520)*1+lsi)*1]), &(inteval->stack[((hsi*16524+495756)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+743400)*1+lsi)*1]), &(inteval->stack[((hsi*33048+710352)*1+lsi)*1]), &(inteval->stack[((hsi*29376+512280)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+792360)*1+lsi)*1]), &(inteval->stack[((hsi*48960+743400)*1+lsi)*1]), &(inteval->stack[((hsi*43200+541656)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+479988)*1+lsi)*1]), &(inteval->stack[((hsi*64800+792360)*1+lsi)*1]), &(inteval->stack[((hsi*56700+584856)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+857160)*1+lsi)*1]), &(inteval->stack[((hsi*79380+479988)*1+lsi)*1]), &(inteval->stack[((hsi*68796+641556)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+559368)*1+lsi)*1]), &(inteval->stack[((hsi*91728+857160)*1+lsi)*1]), &(inteval->stack[((hsi*78624+382896)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+660456)*1+lsi)*1]), &(inteval->stack[((hsi*2808+42336)*1+lsi)*1]), &(inteval->stack[((hsi*2376+45144)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+667584)*1+lsi)*1]), &(inteval->stack[((hsi*8424+178200)*1+lsi)*1]), &(inteval->stack[((hsi*7128+660456)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+14400)*1+lsi)*1]), &(inteval->stack[((hsi*16848+196452)*1+lsi)*1]), &(inteval->stack[((hsi*14256+667584)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+178200)*1+lsi)*1]), &(inteval->stack[((hsi*28080+244296)*1+lsi)*1]), &(inteval->stack[((hsi*23760+14400)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+660456)*1+lsi)*1]), &(inteval->stack[((hsi*42120+340776)*1+lsi)*1]), &(inteval->stack[((hsi*35640+178200)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+178200)*1+lsi)*1]), &(inteval->stack[((hsi*58968+272376)*1+lsi)*1]), &(inteval->stack[((hsi*49896+660456)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+244728)*1+lsi)*1]), &(inteval->stack[((hsi*78624+382896)*1+lsi)*1]), &(inteval->stack[((hsi*66528+178200)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+330264)*1+lsi)*1]), &(inteval->stack[((hsi*101088+559368)*1+lsi)*1]), &(inteval->stack[((hsi*85536+244728)*1+lsi)*1]),36);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*20520+178200)*1+lsi)*1]), &(inteval->stack[((hsi*7560+0)*1+lsi)*1]), &(inteval->stack[((hsi*6840+7560)*1+lsi)*1]),36);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*36936+198720)*1+lsi)*1]), &(inteval->stack[((hsi*20520+178200)*1+lsi)*1]), &(inteval->stack[((hsi*18468+461520)*1+lsi)*1]),36);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*55080+235656)*1+lsi)*1]), &(inteval->stack[((hsi*36936+198720)*1+lsi)*1]), &(inteval->stack[((hsi*33048+710352)*1+lsi)*1]),36);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*73440+660456)*1+lsi)*1]), &(inteval->stack[((hsi*55080+235656)*1+lsi)*1]), &(inteval->stack[((hsi*48960+743400)*1+lsi)*1]),36);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*90720+178200)*1+lsi)*1]), &(inteval->stack[((hsi*73440+660456)*1+lsi)*1]), &(inteval->stack[((hsi*64800+792360)*1+lsi)*1]),36);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*105840+660456)*1+lsi)*1]), &(inteval->stack[((hsi*90720+178200)*1+lsi)*1]), &(inteval->stack[((hsi*79380+479988)*1+lsi)*1]),36);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*117936+178200)*1+lsi)*1]), &(inteval->stack[((hsi*105840+660456)*1+lsi)*1]), &(inteval->stack[((hsi*91728+857160)*1+lsi)*1]),36);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*126360+660456)*1+lsi)*1]), &(inteval->stack[((hsi*117936+178200)*1+lsi)*1]), &(inteval->stack[((hsi*101088+559368)*1+lsi)*1]),36);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*130680+47520)*1+lsi)*1]), &(inteval->stack[((hsi*126360+660456)*1+lsi)*1]), &(inteval->stack[((hsi*106920+330264)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*130680+47520)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
