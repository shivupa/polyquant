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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_M__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,859320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_I__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*6006+771210)*1+lsi)*1]), &(inteval->stack[((hsi*5148+777216)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+6464964)*1+lsi)*1]), &(inteval->stack[((hsi*6930+764280)*1+lsi)*1]), &(inteval->stack[((hsi*6006+771210)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+6482982)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6464964)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6449520)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+6513870)*1+lsi)*1]), &(inteval->stack[((hsi*7920+756360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+764280)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+6534660)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6513870)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6464964)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+6570696)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6534660)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6482982)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+6622176)*1+lsi)*1]), &(inteval->stack[((hsi*8976+747384)*1+lsi)*1]), &(inteval->stack[((hsi*7920+756360)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+6645936)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6622176)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6513870)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+6687516)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6645936)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6534660)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+6747576)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6687516)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6570696)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+6513870)*1+lsi)*1]), &(inteval->stack[((hsi*10098+737286)*1+lsi)*1]), &(inteval->stack[((hsi*8976+747384)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+6824796)*1+lsi)*1]), &(inteval->stack[((hsi*26928+6513870)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6622176)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6872316)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6824796)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6645936)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6941616)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6872316)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6687516)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+6622176)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6941616)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6747576)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+7031706)*1+lsi)*1]), &(inteval->stack[((hsi*11286+726000)*1+lsi)*1]), &(inteval->stack[((hsi*10098+737286)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+7062000)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7031706)*1+lsi)*1]), &(inteval->stack[((hsi*26928+6513870)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+7115856)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7062000)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6824796)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+7195056)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7115856)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6872316)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+7299006)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7195056)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6941616)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6824796)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7299006)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6622176)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+6968940)*1+lsi)*1]), &(inteval->stack[((hsi*12540+713460)*1+lsi)*1]), &(inteval->stack[((hsi*11286+726000)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+7425132)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6968940)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7031706)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+7485720)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7425132)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7062000)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7575480)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7485720)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7115856)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+7002798)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7575480)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7195056)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+7694280)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7002798)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7299006)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+7148328)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7694280)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6824796)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*5148+777216)*1+lsi)*1]), &(inteval->stack[((hsi*4356+782364)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+7346724)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*13068+7333656)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+726000)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6482982)*1+lsi)*1]), &(inteval->stack[((hsi*26136+7346724)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6570696)*1+lsi)*1]), &(inteval->stack[((hsi*43560+726000)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6747576)*1+lsi)*1]), &(inteval->stack[((hsi*65340+6449520)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6622176)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7333656)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+6571488)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6824796)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6449520)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6728304)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7148328)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6571488)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*13860+699600)*1+lsi)*1]), &(inteval->stack[((hsi*12540+713460)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+6487140)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6968940)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+6554856)*1+lsi)*1]), &(inteval->stack[((hsi*67716+6487140)*1+lsi)*1]), &(inteval->stack[((hsi*60588+7425132)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*100980+6554856)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7485720)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7575480)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7002798)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7694280)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7148328)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+6924324)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7333656)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6728304)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*7098+681270)*1+lsi)*1]), &(inteval->stack[((hsi*6084+688368)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+6467772)*1+lsi)*1]), &(inteval->stack[((hsi*8190+673080)*1+lsi)*1]), &(inteval->stack[((hsi*7098+681270)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+6489066)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6467772)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6449520)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+6525570)*1+lsi)*1]), &(inteval->stack[((hsi*9360+663720)*1+lsi)*1]), &(inteval->stack[((hsi*8190+673080)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+6550140)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6525570)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6467772)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+6592728)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6550140)*1+lsi)*1]), &(inteval->stack[((hsi*36504+6489066)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+6653568)*1+lsi)*1]), &(inteval->stack[((hsi*10608+653112)*1+lsi)*1]), &(inteval->stack[((hsi*9360+663720)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+6681648)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6653568)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6525570)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+6730788)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6681648)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6550140)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+6801768)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6730788)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6592728)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+699600)*1+lsi)*1]), &(inteval->stack[((hsi*11934+641178)*1+lsi)*1]), &(inteval->stack[((hsi*10608+653112)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+6525570)*1+lsi)*1]), &(inteval->stack[((hsi*31824+699600)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6653568)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6525570)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6681648)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+7245804)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6730788)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+6653568)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7245804)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6801768)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+731424)*1+lsi)*1]), &(inteval->stack[((hsi*13338+627840)*1+lsi)*1]), &(inteval->stack[((hsi*11934+641178)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+7352274)*1+lsi)*1]), &(inteval->stack[((hsi*35802+731424)*1+lsi)*1]), &(inteval->stack[((hsi*31824+699600)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+7415922)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7352274)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6525570)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+7509522)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7415922)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7163904)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7632372)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7509522)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7245804)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7632372)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6653568)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+6525570)*1+lsi)*1]), &(inteval->stack[((hsi*14820+613020)*1+lsi)*1]), &(inteval->stack[((hsi*13338+627840)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+7781430)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6525570)*1+lsi)*1]), &(inteval->stack[((hsi*35802+731424)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+7853034)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7781430)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7352274)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+7959114)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7853034)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7415922)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+7334256)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7959114)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7509522)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+8099514)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7334256)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7632372)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+7506246)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8099514)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7163904)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+699600)*1+lsi)*1]), &(inteval->stack[((hsi*6084+688368)*1+lsi)*1]), &(inteval->stack[((hsi*5148+694452)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+627840)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*15444+699600)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+658728)*1+lsi)*1]), &(inteval->stack[((hsi*36504+6489066)*1+lsi)*1]), &(inteval->stack[((hsi*30888+627840)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+8298258)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6592728)*1+lsi)*1]), &(inteval->stack[((hsi*51480+658728)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+627840)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6801768)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8298258)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+8298258)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6653568)*1+lsi)*1]), &(inteval->stack[((hsi*108108+627840)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+6565584)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8298258)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+8298258)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7506246)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6565584)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+6565584)*1+lsi)*1]), &(inteval->stack[((hsi*16380+596640)*1+lsi)*1]), &(inteval->stack[((hsi*14820+613020)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+6610044)*1+lsi)*1]), &(inteval->stack[((hsi*44460+6565584)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6525570)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+6690072)*1+lsi)*1]), &(inteval->stack[((hsi*80028+6610044)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7781430)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*119340+6690072)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7853034)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+6608640)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7959114)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+7725270)*1+lsi)*1]), &(inteval->stack[((hsi*196560+6608640)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7334256)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7725270)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8099514)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+7725270)*1+lsi)*1]), &(inteval->stack[((hsi*255528+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7506246)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*273780+7725270)*1+lsi)*1]), &(inteval->stack[((hsi*231660+8298258)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+7447044)*1+lsi)*1]), &(inteval->stack[((hsi*283140+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6924324)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*8281+575255)*1+lsi)*1]), &(inteval->stack[((hsi*7098+583536)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+6470814)*1+lsi)*1]), &(inteval->stack[((hsi*9555+565700)*1+lsi)*1]), &(inteval->stack[((hsi*8281+575255)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+6495657)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6470814)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6449520)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+6538245)*1+lsi)*1]), &(inteval->stack[((hsi*10920+554780)*1+lsi)*1]), &(inteval->stack[((hsi*9555+565700)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+6566910)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6538245)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6470814)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6616596)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6566910)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6495657)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*12376+542404)*1+lsi)*1]), &(inteval->stack[((hsi*10920+554780)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6720336)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6538245)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+596640)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6720336)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6566910)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+6777666)*1+lsi)*1]), &(inteval->stack[((hsi*82810+596640)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6616596)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+679450)*1+lsi)*1]), &(inteval->stack[((hsi*13923+528481)*1+lsi)*1]), &(inteval->stack[((hsi*12376+542404)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6538245)*1+lsi)*1]), &(inteval->stack[((hsi*37128+679450)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6687576)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6538245)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6720336)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+8261334)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*82810+596640)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+8385549)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8261334)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6777666)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*15561+512920)*1+lsi)*1]), &(inteval->stack[((hsi*13923+528481)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+596640)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*37128+679450)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+670896)*1+lsi)*1]), &(inteval->stack[((hsi*74256+596640)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6538245)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8534607)*1+lsi)*1]), &(inteval->stack[((hsi*109200+670896)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8165784)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+8677932)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8534607)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8261334)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8677932)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8385549)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+6538245)*1+lsi)*1]), &(inteval->stack[((hsi*17290+495630)*1+lsi)*1]), &(inteval->stack[((hsi*15561+512920)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+8851833)*1+lsi)*1]), &(inteval->stack[((hsi*46683+6538245)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6687576)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+8935371)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8851833)*1+lsi)*1]), &(inteval->stack[((hsi*74256+596640)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+9059131)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8935371)*1+lsi)*1]), &(inteval->stack[((hsi*109200+670896)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+9222931)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9059131)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8534607)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+9423586)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9222931)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8677932)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+8534607)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9423586)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8165784)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+596640)*1+lsi)*1]), &(inteval->stack[((hsi*7098+583536)*1+lsi)*1]), &(inteval->stack[((hsi*6006+590634)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+614658)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*18018+596640)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+650694)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6495657)*1+lsi)*1]), &(inteval->stack[((hsi*36036+614658)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+6687576)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6616596)*1+lsi)*1]), &(inteval->stack[((hsi*60060+650694)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+512920)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6777666)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6687576)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+6584928)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8385549)*1+lsi)*1]), &(inteval->stack[((hsi*126126+512920)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+512920)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6584928)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8534607)*1+lsi)*1]), &(inteval->stack[((hsi*216216+512920)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+6584928)*1+lsi)*1]), &(inteval->stack[((hsi*19110+476520)*1+lsi)*1]), &(inteval->stack[((hsi*17290+495630)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+476520)*1+lsi)*1]), &(inteval->stack[((hsi*51870+6584928)*1+lsi)*1]), &(inteval->stack[((hsi*46683+6538245)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*93366+476520)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8851833)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+6588750)*1+lsi)*1]), &(inteval->stack[((hsi*139230+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8935371)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+476520)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6588750)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9059131)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*229320+476520)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9222931)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+8790135)*1+lsi)*1]), &(inteval->stack[((hsi*267540+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9423586)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*298116+8790135)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8534607)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+8436054)*1+lsi)*1]), &(inteval->stack[((hsi*319410+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*270270+8165784)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+8766384)*1+lsi)*1]), &(inteval->stack[((hsi*330330+8436054)*1+lsi)*1]), &(inteval->stack[((hsi*283140+7163904)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+9615804)*1+lsi)*1]), &(inteval->stack[((hsi*849420+8766384)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7447044)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*9555+451845)*1+lsi)*1]), &(inteval->stack[((hsi*8190+461400)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+6474090)*1+lsi)*1]), &(inteval->stack[((hsi*11025+440820)*1+lsi)*1]), &(inteval->stack[((hsi*9555+451845)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+6502755)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6474090)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6449520)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+6551895)*1+lsi)*1]), &(inteval->stack[((hsi*12600+428220)*1+lsi)*1]), &(inteval->stack[((hsi*11025+440820)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+6584970)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6551895)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6474090)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+476520)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6584970)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6502755)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*14280+413940)*1+lsi)*1]), &(inteval->stack[((hsi*12600+428220)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+6642300)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6551895)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*66150+6642300)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6584970)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+7201704)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*81900+476520)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+558420)*1+lsi)*1]), &(inteval->stack[((hsi*16065+397875)*1+lsi)*1]), &(inteval->stack[((hsi*14280+413940)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+6708450)*1+lsi)*1]), &(inteval->stack[((hsi*42840+558420)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7163904)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+601260)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6708450)*1+lsi)*1]), &(inteval->stack[((hsi*66150+6642300)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+8261334)*1+lsi)*1]), &(inteval->stack[((hsi*110250+601260)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8165784)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8261334)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7201704)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+6551895)*1+lsi)*1]), &(inteval->stack[((hsi*17955+379920)*1+lsi)*1]), &(inteval->stack[((hsi*16065+397875)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+6784050)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6551895)*1+lsi)*1]), &(inteval->stack[((hsi*42840+558420)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+11225274)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6784050)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6708450)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+6600090)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11225274)*1+lsi)*1]), &(inteval->stack[((hsi*110250+601260)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+558420)*1+lsi)*1]), &(inteval->stack[((hsi*165375+6600090)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8261334)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*200655+558420)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11053284)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+7324554)*1+lsi)*1]), &(inteval->stack[((hsi*19950+359970)*1+lsi)*1]), &(inteval->stack[((hsi*17955+379920)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+11351274)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7324554)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6551895)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+11447664)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11351274)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6784050)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+11590464)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11447664)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11225274)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+11779464)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11590464)*1+lsi)*1]), &(inteval->stack[((hsi*165375+6600090)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+6551895)*1+lsi)*1]), &(inteval->stack[((hsi*231525+11779464)*1+lsi)*1]), &(inteval->stack[((hsi*200655+558420)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+12010989)*1+lsi)*1]), &(inteval->stack[((hsi*267540+6551895)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8165784)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+558420)*1+lsi)*1]), &(inteval->stack[((hsi*8190+461400)*1+lsi)*1]), &(inteval->stack[((hsi*6930+469590)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+579210)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*20790+558420)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+620790)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6502755)*1+lsi)*1]), &(inteval->stack[((hsi*41580+579210)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+11225274)*1+lsi)*1]), &(inteval->stack[((hsi*81900+476520)*1+lsi)*1]), &(inteval->stack[((hsi*69300+620790)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+379920)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7201704)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11225274)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+525450)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*145530+379920)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*194040+525450)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+379920)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12010989)*1+lsi)*1]), &(inteval->stack[((hsi*249480+11053284)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*22050+337920)*1+lsi)*1]), &(inteval->stack[((hsi*19950+359970)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7324554)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*107730+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11351274)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*160650+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11447664)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*214200+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11590464)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+11317884)*1+lsi)*1]), &(inteval->stack[((hsi*264600+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*231525+11779464)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+11626584)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11317884)*1+lsi)*1]), &(inteval->stack[((hsi*267540+6551895)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*343980+11626584)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12010989)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*368550+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*311850+379920)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*381150+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*330330+8436054)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+12044274)*1+lsi)*1]), &(inteval->stack[((hsi*990990+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*849420+8766384)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+13743114)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+12044274)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+9615804)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*10920+309720)*1+lsi)*1]), &(inteval->stack[((hsi*9360+320640)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+8193864)*1+lsi)*1]), &(inteval->stack[((hsi*12600+297120)*1+lsi)*1]), &(inteval->stack[((hsi*10920+309720)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+8226624)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8193864)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8165784)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+8282784)*1+lsi)*1]), &(inteval->stack[((hsi*14400+282720)*1+lsi)*1]), &(inteval->stack[((hsi*12600+297120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+8320584)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8282784)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8193864)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+8386104)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8320584)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8226624)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+8479704)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266400)*1+lsi)*1]), &(inteval->stack[((hsi*14400+282720)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+8522904)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8479704)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8282784)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+8598504)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8522904)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8320584)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+8707704)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8598504)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8386104)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+8848104)*1+lsi)*1]), &(inteval->stack[((hsi*18360+248040)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266400)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+8897064)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8848104)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8479704)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+8983464)*1+lsi)*1]), &(inteval->stack[((hsi*86400+8897064)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8522904)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+9109464)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8983464)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8598504)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+337920)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9109464)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8707704)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+9273264)*1+lsi)*1]), &(inteval->stack[((hsi*20520+227520)*1+lsi)*1]), &(inteval->stack[((hsi*18360+248040)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+9328344)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9273264)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8848104)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9328344)*1+lsi)*1]), &(inteval->stack[((hsi*86400+8897064)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+534480)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8983464)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+8848104)*1+lsi)*1]), &(inteval->stack[((hsi*189000+534480)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9109464)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+16138914)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8848104)*1+lsi)*1]), &(inteval->stack[((hsi*196560+337920)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+8479704)*1+lsi)*1]), &(inteval->stack[((hsi*22800+204720)*1+lsi)*1]), &(inteval->stack[((hsi*20520+227520)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+9077424)*1+lsi)*1]), &(inteval->stack[((hsi*61560+8479704)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9273264)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+9426264)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9077424)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9328344)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+9187584)*1+lsi)*1]), &(inteval->stack[((hsi*163200+9426264)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7163904)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*216000+9187584)*1+lsi)*1]), &(inteval->stack[((hsi*189000+534480)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+16400994)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7163904)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8848104)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+16706754)*1+lsi)*1]), &(inteval->stack[((hsi*305760+16400994)*1+lsi)*1]), &(inteval->stack[((hsi*262080+16138914)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+534480)*1+lsi)*1]), &(inteval->stack[((hsi*9360+320640)*1+lsi)*1]), &(inteval->stack[((hsi*7920+330000)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+8848104)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*23760+534480)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+534480)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8226624)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8848104)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+8848104)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8386104)*1+lsi)*1]), &(inteval->stack[((hsi*79200+534480)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8707704)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8848104)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+8541264)*1+lsi)*1]), &(inteval->stack[((hsi*196560+337920)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8165784)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+227520)*1+lsi)*1]), &(inteval->stack[((hsi*262080+16138914)*1+lsi)*1]), &(inteval->stack[((hsi*221760+8541264)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+8541264)*1+lsi)*1]), &(inteval->stack[((hsi*336960+16706754)*1+lsi)*1]), &(inteval->stack[((hsi*285120+227520)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+227520)*1+lsi)*1]), &(inteval->stack[((hsi*25200+179520)*1+lsi)*1]), &(inteval->stack[((hsi*22800+204720)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+295920)*1+lsi)*1]), &(inteval->stack[((hsi*68400+227520)*1+lsi)*1]), &(inteval->stack[((hsi*61560+8479704)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*123120+295920)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9077424)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+179520)*1+lsi)*1]), &(inteval->stack[((hsi*183600+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*163200+9426264)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*244800+179520)*1+lsi)*1]), &(inteval->stack[((hsi*216000+9187584)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+8897664)*1+lsi)*1]), &(inteval->stack[((hsi*302400+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7163904)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+179520)*1+lsi)*1]), &(inteval->stack[((hsi*352800+8897664)*1+lsi)*1]), &(inteval->stack[((hsi*305760+16400994)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+8897664)*1+lsi)*1]), &(inteval->stack[((hsi*393120+179520)*1+lsi)*1]), &(inteval->stack[((hsi*336960+16706754)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+179520)*1+lsi)*1]), &(inteval->stack[((hsi*421200+8897664)*1+lsi)*1]), &(inteval->stack[((hsi*356400+8541264)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*435600+179520)*1+lsi)*1]), &(inteval->stack[((hsi*381150+6449520)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+16138914)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+8165784)*1+lsi)*1]), &(inteval->stack[((hsi*990990+11053284)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+18120894)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+16138914)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+12044274)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+20952294)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+18120894)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+13743114)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*5005+846395)*1+lsi)*1]), &(inteval->stack[((hsi*4290+851400)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+11066154)*1+lsi)*1]), &(inteval->stack[((hsi*5775+840620)*1+lsi)*1]), &(inteval->stack[((hsi*5005+846395)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+11081169)*1+lsi)*1]), &(inteval->stack[((hsi*15015+11066154)*1+lsi)*1]), &(inteval->stack[((hsi*12870+11053284)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+11106909)*1+lsi)*1]), &(inteval->stack[((hsi*6600+834020)*1+lsi)*1]), &(inteval->stack[((hsi*5775+840620)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+11124234)*1+lsi)*1]), &(inteval->stack[((hsi*17325+11106909)*1+lsi)*1]), &(inteval->stack[((hsi*15015+11066154)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+11154264)*1+lsi)*1]), &(inteval->stack[((hsi*30030+11124234)*1+lsi)*1]), &(inteval->stack[((hsi*25740+11081169)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+11197164)*1+lsi)*1]), &(inteval->stack[((hsi*7480+826540)*1+lsi)*1]), &(inteval->stack[((hsi*6600+834020)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+11216964)*1+lsi)*1]), &(inteval->stack[((hsi*19800+11197164)*1+lsi)*1]), &(inteval->stack[((hsi*17325+11106909)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+11251614)*1+lsi)*1]), &(inteval->stack[((hsi*34650+11216964)*1+lsi)*1]), &(inteval->stack[((hsi*30030+11124234)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+11301664)*1+lsi)*1]), &(inteval->stack[((hsi*50050+11251614)*1+lsi)*1]), &(inteval->stack[((hsi*42900+11154264)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+11366014)*1+lsi)*1]), &(inteval->stack[((hsi*8415+818125)*1+lsi)*1]), &(inteval->stack[((hsi*7480+826540)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+11388454)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11366014)*1+lsi)*1]), &(inteval->stack[((hsi*19800+11197164)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+11428054)*1+lsi)*1]), &(inteval->stack[((hsi*39600+11388454)*1+lsi)*1]), &(inteval->stack[((hsi*34650+11216964)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+11485804)*1+lsi)*1]), &(inteval->stack[((hsi*57750+11428054)*1+lsi)*1]), &(inteval->stack[((hsi*50050+11251614)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+11560879)*1+lsi)*1]), &(inteval->stack[((hsi*75075+11485804)*1+lsi)*1]), &(inteval->stack[((hsi*64350+11301664)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+11650969)*1+lsi)*1]), &(inteval->stack[((hsi*9405+808720)*1+lsi)*1]), &(inteval->stack[((hsi*8415+818125)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+11676214)*1+lsi)*1]), &(inteval->stack[((hsi*25245+11650969)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11366014)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+11721094)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11676214)*1+lsi)*1]), &(inteval->stack[((hsi*39600+11388454)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+11787094)*1+lsi)*1]), &(inteval->stack[((hsi*66000+11721094)*1+lsi)*1]), &(inteval->stack[((hsi*57750+11428054)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+11873719)*1+lsi)*1]), &(inteval->stack[((hsi*86625+11787094)*1+lsi)*1]), &(inteval->stack[((hsi*75075+11485804)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+11978824)*1+lsi)*1]), &(inteval->stack[((hsi*105105+11873719)*1+lsi)*1]), &(inteval->stack[((hsi*90090+11560879)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+12098944)*1+lsi)*1]), &(inteval->stack[((hsi*10450+798270)*1+lsi)*1]), &(inteval->stack[((hsi*9405+808720)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+12127159)*1+lsi)*1]), &(inteval->stack[((hsi*28215+12098944)*1+lsi)*1]), &(inteval->stack[((hsi*25245+11650969)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+12177649)*1+lsi)*1]), &(inteval->stack[((hsi*50490+12127159)*1+lsi)*1]), &(inteval->stack[((hsi*44880+11676214)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+12252449)*1+lsi)*1]), &(inteval->stack[((hsi*74800+12177649)*1+lsi)*1]), &(inteval->stack[((hsi*66000+11721094)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+12351449)*1+lsi)*1]), &(inteval->stack[((hsi*99000+12252449)*1+lsi)*1]), &(inteval->stack[((hsi*86625+11787094)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+12472724)*1+lsi)*1]), &(inteval->stack[((hsi*121275+12351449)*1+lsi)*1]), &(inteval->stack[((hsi*105105+11873719)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+12612864)*1+lsi)*1]), &(inteval->stack[((hsi*140140+12472724)*1+lsi)*1]), &(inteval->stack[((hsi*120120+11978824)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+12767304)*1+lsi)*1]), &(inteval->stack[((hsi*4290+851400)*1+lsi)*1]), &(inteval->stack[((hsi*3630+855690)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+12778194)*1+lsi)*1]), &(inteval->stack[((hsi*12870+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*10890+12767304)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+12799974)*1+lsi)*1]), &(inteval->stack[((hsi*25740+11081169)*1+lsi)*1]), &(inteval->stack[((hsi*21780+12778194)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+12836274)*1+lsi)*1]), &(inteval->stack[((hsi*42900+11154264)*1+lsi)*1]), &(inteval->stack[((hsi*36300+12799974)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+12890724)*1+lsi)*1]), &(inteval->stack[((hsi*64350+11301664)*1+lsi)*1]), &(inteval->stack[((hsi*54450+12836274)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+12966954)*1+lsi)*1]), &(inteval->stack[((hsi*90090+11560879)*1+lsi)*1]), &(inteval->stack[((hsi*76230+12890724)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*120120+11978824)*1+lsi)*1]), &(inteval->stack[((hsi*101640+12966954)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+12767304)*1+lsi)*1]), &(inteval->stack[((hsi*154440+12612864)*1+lsi)*1]), &(inteval->stack[((hsi*130680+11053284)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*11550+786720)*1+lsi)*1]), &(inteval->stack[((hsi*10450+798270)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+11084634)*1+lsi)*1]), &(inteval->stack[((hsi*31350+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*28215+12098944)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+11141064)*1+lsi)*1]), &(inteval->stack[((hsi*56430+11084634)*1+lsi)*1]), &(inteval->stack[((hsi*50490+12127159)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+11225214)*1+lsi)*1]), &(inteval->stack[((hsi*84150+11141064)*1+lsi)*1]), &(inteval->stack[((hsi*74800+12177649)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+11337414)*1+lsi)*1]), &(inteval->stack[((hsi*112200+11225214)*1+lsi)*1]), &(inteval->stack[((hsi*99000+12252449)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+11476014)*1+lsi)*1]), &(inteval->stack[((hsi*138600+11337414)*1+lsi)*1]), &(inteval->stack[((hsi*121275+12351449)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+11637714)*1+lsi)*1]), &(inteval->stack[((hsi*161700+11476014)*1+lsi)*1]), &(inteval->stack[((hsi*140140+12472724)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+12930654)*1+lsi)*1]), &(inteval->stack[((hsi*180180+11637714)*1+lsi)*1]), &(inteval->stack[((hsi*154440+12612864)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+11053284)*1+lsi)*1]), &(inteval->stack[((hsi*193050+12930654)*1+lsi)*1]), &(inteval->stack[((hsi*163350+12767304)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*598950+11252934)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6924324)*1+lsi)*1]), &(inteval->stack[((hsi*199650+11053284)*1+lsi)*1]),3630);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1197900+11851884)*1+lsi)*1]), &(inteval->stack[((hsi*718740+7447044)*1+lsi)*1]), &(inteval->stack[((hsi*598950+11252934)*1+lsi)*1]),3630);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1996500+24545994)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+9615804)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11851884)*1+lsi)*1]),3630);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2994750+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+13743114)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+24545994)*1+lsi)*1]),3630);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*4192650+24545994)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+20952294)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+9309234)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*12376+147560)*1+lsi)*1]), &(inteval->stack[((hsi*10608+159936)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+9341058)*1+lsi)*1]), &(inteval->stack[((hsi*14280+133280)*1+lsi)*1]), &(inteval->stack[((hsi*12376+147560)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+9378186)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9341058)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9309234)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+9441834)*1+lsi)*1]), &(inteval->stack[((hsi*16320+116960)*1+lsi)*1]), &(inteval->stack[((hsi*14280+133280)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+9484674)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9441834)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9341058)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+9558930)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9484674)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9378186)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+9665010)*1+lsi)*1]), &(inteval->stack[((hsi*18496+98464)*1+lsi)*1]), &(inteval->stack[((hsi*16320+116960)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+9713970)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9665010)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9441834)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+9799650)*1+lsi)*1]), &(inteval->stack[((hsi*85680+9713970)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9484674)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+9923410)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9799650)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9558930)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+10082530)*1+lsi)*1]), &(inteval->stack[((hsi*20808+77656)*1+lsi)*1]), &(inteval->stack[((hsi*18496+98464)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+10138018)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10082530)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9665010)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+10235938)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10138018)*1+lsi)*1]), &(inteval->stack[((hsi*85680+9713970)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+10378738)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10235938)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9799650)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+10564378)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10378738)*1+lsi)*1]), &(inteval->stack[((hsi*159120+9923410)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+10787146)*1+lsi)*1]), &(inteval->stack[((hsi*23256+54400)*1+lsi)*1]), &(inteval->stack[((hsi*20808+77656)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+10849570)*1+lsi)*1]), &(inteval->stack[((hsi*62424+10787146)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10082530)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+10960546)*1+lsi)*1]), &(inteval->stack[((hsi*110976+10849570)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10138018)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+11123746)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10960546)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10235938)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+11337946)*1+lsi)*1]), &(inteval->stack[((hsi*214200+11123746)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10378738)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+11597842)*1+lsi)*1]), &(inteval->stack[((hsi*259896+11337946)*1+lsi)*1]), &(inteval->stack[((hsi*222768+10564378)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+11894866)*1+lsi)*1]), &(inteval->stack[((hsi*25840+28560)*1+lsi)*1]), &(inteval->stack[((hsi*23256+54400)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+11964634)*1+lsi)*1]), &(inteval->stack[((hsi*69768+11894866)*1+lsi)*1]), &(inteval->stack[((hsi*62424+10787146)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+12089482)*1+lsi)*1]), &(inteval->stack[((hsi*124848+11964634)*1+lsi)*1]), &(inteval->stack[((hsi*110976+10849570)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+12274442)*1+lsi)*1]), &(inteval->stack[((hsi*184960+12089482)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10960546)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+12519242)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12274442)*1+lsi)*1]), &(inteval->stack[((hsi*214200+11123746)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+12819122)*1+lsi)*1]), &(inteval->stack[((hsi*299880+12519242)*1+lsi)*1]), &(inteval->stack[((hsi*259896+11337946)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+13165650)*1+lsi)*1]), &(inteval->stack[((hsi*346528+12819122)*1+lsi)*1]), &(inteval->stack[((hsi*297024+11597842)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+13547538)*1+lsi)*1]), &(inteval->stack[((hsi*10608+159936)*1+lsi)*1]), &(inteval->stack[((hsi*8976+170544)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+13574466)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*26928+13547538)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+13628322)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9378186)*1+lsi)*1]), &(inteval->stack[((hsi*53856+13574466)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+13718082)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9558930)*1+lsi)*1]), &(inteval->stack[((hsi*89760+13628322)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+13852722)*1+lsi)*1]), &(inteval->stack[((hsi*159120+9923410)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13718082)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+14041218)*1+lsi)*1]), &(inteval->stack[((hsi*222768+10564378)*1+lsi)*1]), &(inteval->stack[((hsi*188496+13852722)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*297024+11597842)*1+lsi)*1]), &(inteval->stack[((hsi*251328+14041218)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+13547538)*1+lsi)*1]), &(inteval->stack[((hsi*381888+13165650)*1+lsi)*1]), &(inteval->stack[((hsi*323136+9309234)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*28560+0)*1+lsi)*1]), &(inteval->stack[((hsi*25840+28560)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+9386754)*1+lsi)*1]), &(inteval->stack[((hsi*77520+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*69768+11894866)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+9526290)*1+lsi)*1]), &(inteval->stack[((hsi*139536+9386754)*1+lsi)*1]), &(inteval->stack[((hsi*124848+11964634)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+9734370)*1+lsi)*1]), &(inteval->stack[((hsi*208080+9526290)*1+lsi)*1]), &(inteval->stack[((hsi*184960+12089482)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+10011810)*1+lsi)*1]), &(inteval->stack[((hsi*277440+9734370)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12274442)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+13951458)*1+lsi)*1]), &(inteval->stack[((hsi*342720+10011810)*1+lsi)*1]), &(inteval->stack[((hsi*299880+12519242)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*399840+13951458)*1+lsi)*1]), &(inteval->stack[((hsi*346528+12819122)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+9754770)*1+lsi)*1]), &(inteval->stack[((hsi*445536+9309234)*1+lsi)*1]), &(inteval->stack[((hsi*381888+13165650)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+10232130)*1+lsi)*1]), &(inteval->stack[((hsi*477360+9754770)*1+lsi)*1]), &(inteval->stack[((hsi*403920+13547538)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1306800+10725810)*1+lsi)*1]), &(inteval->stack[((hsi*493680+10232130)*1+lsi)*1]), &(inteval->stack[((hsi*435600+179520)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2286900+12032610)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+10725810)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+8165784)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3303300+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+12032610)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+16138914)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*4247100+9752820)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+6449520)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+18120894)*1+lsi)*1]),3630);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*5031180+13999920)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+9752820)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+20952294)*1+lsi)*1]),3630);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*5590200+859320)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+13999920)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+24545994)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5590200+859320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
