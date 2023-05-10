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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0ki.h>
#include <HRRPart0bra0ket0kk.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_K__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__M__1___TwoPRep_K__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,694340)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*3510+643445)*1+lsi)*1]), &(inteval->stack[((hsi*2970+646955)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+4623650)*1+lsi)*1]), &(inteval->stack[((hsi*4095+639350)*1+lsi)*1]), &(inteval->stack[((hsi*3510+643445)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+4634180)*1+lsi)*1]), &(inteval->stack[((hsi*10530+4623650)*1+lsi)*1]), &(inteval->stack[((hsi*8910+4614740)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+4652000)*1+lsi)*1]), &(inteval->stack[((hsi*4725+634625)*1+lsi)*1]), &(inteval->stack[((hsi*4095+639350)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+4664285)*1+lsi)*1]), &(inteval->stack[((hsi*12285+4652000)*1+lsi)*1]), &(inteval->stack[((hsi*10530+4623650)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+4685345)*1+lsi)*1]), &(inteval->stack[((hsi*21060+4664285)*1+lsi)*1]), &(inteval->stack[((hsi*17820+4634180)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+4715045)*1+lsi)*1]), &(inteval->stack[((hsi*5400+629225)*1+lsi)*1]), &(inteval->stack[((hsi*4725+634625)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+4729220)*1+lsi)*1]), &(inteval->stack[((hsi*14175+4715045)*1+lsi)*1]), &(inteval->stack[((hsi*12285+4652000)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+4753790)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4729220)*1+lsi)*1]), &(inteval->stack[((hsi*21060+4664285)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+4788890)*1+lsi)*1]), &(inteval->stack[((hsi*35100+4753790)*1+lsi)*1]), &(inteval->stack[((hsi*29700+4685345)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+4652000)*1+lsi)*1]), &(inteval->stack[((hsi*6120+623105)*1+lsi)*1]), &(inteval->stack[((hsi*5400+629225)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+4833440)*1+lsi)*1]), &(inteval->stack[((hsi*16200+4652000)*1+lsi)*1]), &(inteval->stack[((hsi*14175+4715045)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+4861790)*1+lsi)*1]), &(inteval->stack[((hsi*28350+4833440)*1+lsi)*1]), &(inteval->stack[((hsi*24570+4729220)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+4902740)*1+lsi)*1]), &(inteval->stack[((hsi*40950+4861790)*1+lsi)*1]), &(inteval->stack[((hsi*35100+4753790)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+4715045)*1+lsi)*1]), &(inteval->stack[((hsi*52650+4902740)*1+lsi)*1]), &(inteval->stack[((hsi*44550+4788890)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+4955390)*1+lsi)*1]), &(inteval->stack[((hsi*6885+616220)*1+lsi)*1]), &(inteval->stack[((hsi*6120+623105)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+4973750)*1+lsi)*1]), &(inteval->stack[((hsi*18360+4955390)*1+lsi)*1]), &(inteval->stack[((hsi*16200+4652000)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+5006150)*1+lsi)*1]), &(inteval->stack[((hsi*32400+4973750)*1+lsi)*1]), &(inteval->stack[((hsi*28350+4833440)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+5053400)*1+lsi)*1]), &(inteval->stack[((hsi*47250+5006150)*1+lsi)*1]), &(inteval->stack[((hsi*40950+4861790)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+5114825)*1+lsi)*1]), &(inteval->stack[((hsi*61425+5053400)*1+lsi)*1]), &(inteval->stack[((hsi*52650+4902740)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+4833440)*1+lsi)*1]), &(inteval->stack[((hsi*73710+5114825)*1+lsi)*1]), &(inteval->stack[((hsi*62370+4715045)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+4916600)*1+lsi)*1]), &(inteval->stack[((hsi*7695+608525)*1+lsi)*1]), &(inteval->stack[((hsi*6885+616220)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+5188535)*1+lsi)*1]), &(inteval->stack[((hsi*20655+4916600)*1+lsi)*1]), &(inteval->stack[((hsi*18360+4955390)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+5225255)*1+lsi)*1]), &(inteval->stack[((hsi*36720+5188535)*1+lsi)*1]), &(inteval->stack[((hsi*32400+4973750)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+5279255)*1+lsi)*1]), &(inteval->stack[((hsi*54000+5225255)*1+lsi)*1]), &(inteval->stack[((hsi*47250+5006150)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+4937255)*1+lsi)*1]), &(inteval->stack[((hsi*70875+5279255)*1+lsi)*1]), &(inteval->stack[((hsi*61425+5053400)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+5350130)*1+lsi)*1]), &(inteval->stack[((hsi*85995+4937255)*1+lsi)*1]), &(inteval->stack[((hsi*73710+5114825)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+5023250)*1+lsi)*1]), &(inteval->stack[((hsi*98280+5350130)*1+lsi)*1]), &(inteval->stack[((hsi*83160+4833440)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*2970+646955)*1+lsi)*1]), &(inteval->stack[((hsi*2475+649925)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+5137595)*1+lsi)*1]), &(inteval->stack[((hsi*8910+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*7425+5130170)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+616220)*1+lsi)*1]), &(inteval->stack[((hsi*17820+4634180)*1+lsi)*1]), &(inteval->stack[((hsi*14850+5137595)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*29700+4685345)*1+lsi)*1]), &(inteval->stack[((hsi*24750+616220)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+4651865)*1+lsi)*1]), &(inteval->stack[((hsi*44550+4788890)*1+lsi)*1]), &(inteval->stack[((hsi*37125+4614740)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+5448410)*1+lsi)*1]), &(inteval->stack[((hsi*62370+4715045)*1+lsi)*1]), &(inteval->stack[((hsi*51975+4651865)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*83160+4833440)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5448410)*1+lsi)*1]),45);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*111375+4703840)*1+lsi)*1]), &(inteval->stack[((hsi*106920+5023250)*1+lsi)*1]), &(inteval->stack[((hsi*89100+4614740)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*8550+599975)*1+lsi)*1]), &(inteval->stack[((hsi*7695+608525)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*23085+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*20655+4916600)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*41310+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*36720+5188535)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*61200+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*54000+5225255)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*81000+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*70875+5279255)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*99225+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*85995+4937255)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*114660+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*98280+5350130)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*126360+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*106920+5023250)*1+lsi)*1]),45);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*136125+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*133650+5130170)*1+lsi)*1]), &(inteval->stack[((hsi*111375+4703840)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*4290+589030)*1+lsi)*1]), &(inteval->stack[((hsi*3630+593320)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+4625630)*1+lsi)*1]), &(inteval->stack[((hsi*5005+584025)*1+lsi)*1]), &(inteval->stack[((hsi*4290+589030)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+4638500)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4625630)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4614740)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+4660280)*1+lsi)*1]), &(inteval->stack[((hsi*5775+578250)*1+lsi)*1]), &(inteval->stack[((hsi*5005+584025)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+4675295)*1+lsi)*1]), &(inteval->stack[((hsi*15015+4660280)*1+lsi)*1]), &(inteval->stack[((hsi*12870+4625630)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+4701035)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4675295)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4638500)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+4737335)*1+lsi)*1]), &(inteval->stack[((hsi*6600+571650)*1+lsi)*1]), &(inteval->stack[((hsi*5775+578250)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+4754660)*1+lsi)*1]), &(inteval->stack[((hsi*17325+4737335)*1+lsi)*1]), &(inteval->stack[((hsi*15015+4660280)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+599975)*1+lsi)*1]), &(inteval->stack[((hsi*30030+4754660)*1+lsi)*1]), &(inteval->stack[((hsi*25740+4675295)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*42900+599975)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4701035)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+4660280)*1+lsi)*1]), &(inteval->stack[((hsi*7480+564170)*1+lsi)*1]), &(inteval->stack[((hsi*6600+571650)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+5005790)*1+lsi)*1]), &(inteval->stack[((hsi*19800+4660280)*1+lsi)*1]), &(inteval->stack[((hsi*17325+4737335)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+5040440)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5005790)*1+lsi)*1]), &(inteval->stack[((hsi*30030+4754660)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+4737335)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5040440)*1+lsi)*1]), &(inteval->stack[((hsi*42900+599975)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+5090490)*1+lsi)*1]), &(inteval->stack[((hsi*64350+4737335)*1+lsi)*1]), &(inteval->stack[((hsi*54450+4951340)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+599975)*1+lsi)*1]), &(inteval->stack[((hsi*8415+555755)*1+lsi)*1]), &(inteval->stack[((hsi*7480+564170)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+5166720)*1+lsi)*1]), &(inteval->stack[((hsi*22440+599975)*1+lsi)*1]), &(inteval->stack[((hsi*19800+4660280)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+5206320)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5166720)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5005790)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+5264070)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5206320)*1+lsi)*1]), &(inteval->stack[((hsi*50050+5040440)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+5339145)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5264070)*1+lsi)*1]), &(inteval->stack[((hsi*64350+4737335)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+5429235)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5339145)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5090490)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+5005790)*1+lsi)*1]), &(inteval->stack[((hsi*9405+546350)*1+lsi)*1]), &(inteval->stack[((hsi*8415+555755)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+4737335)*1+lsi)*1]), &(inteval->stack[((hsi*25245+5005790)*1+lsi)*1]), &(inteval->stack[((hsi*22440+599975)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+5530875)*1+lsi)*1]), &(inteval->stack[((hsi*44880+4737335)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5166720)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+5596875)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5530875)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5206320)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+5683500)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5596875)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5264070)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+5166720)*1+lsi)*1]), &(inteval->stack[((hsi*105105+5683500)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5339145)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+5286840)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5166720)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5429235)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+5031035)*1+lsi)*1]), &(inteval->stack[((hsi*3630+593320)*1+lsi)*1]), &(inteval->stack[((hsi*3025+596950)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+555755)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*9075+5031035)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+573905)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4638500)*1+lsi)*1]), &(inteval->stack[((hsi*18150+555755)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4701035)*1+lsi)*1]), &(inteval->stack[((hsi*30250+573905)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+555755)*1+lsi)*1]), &(inteval->stack[((hsi*54450+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*45375+4614740)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5090490)*1+lsi)*1]), &(inteval->stack[((hsi*63525+555755)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+5031035)*1+lsi)*1]), &(inteval->stack[((hsi*101640+5429235)*1+lsi)*1]), &(inteval->stack[((hsi*84700+4614740)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+5788605)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5286840)*1+lsi)*1]), &(inteval->stack[((hsi*108900+5031035)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+5031035)*1+lsi)*1]), &(inteval->stack[((hsi*10450+535900)*1+lsi)*1]), &(inteval->stack[((hsi*9405+546350)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*28215+5031035)*1+lsi)*1]), &(inteval->stack[((hsi*25245+5005790)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*50490+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*44880+4737335)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*74800+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5530875)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*99000+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*86625+5596875)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+5417520)*1+lsi)*1]), &(inteval->stack[((hsi*121275+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*105105+5683500)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+5557660)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5417520)*1+lsi)*1]), &(inteval->stack[((hsi*120120+5166720)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5557660)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5286840)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+5114690)*1+lsi)*1]), &(inteval->stack[((hsi*163350+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*136125+5788605)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*408375+5281065)*1+lsi)*1]), &(inteval->stack[((hsi*166375+5114690)*1+lsi)*1]), &(inteval->stack[((hsi*136125+4815215)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*5148+522766)*1+lsi)*1]), &(inteval->stack[((hsi*4356+527914)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+4627808)*1+lsi)*1]), &(inteval->stack[((hsi*6006+516760)*1+lsi)*1]), &(inteval->stack[((hsi*5148+522766)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+4643252)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4627808)*1+lsi)*1]), &(inteval->stack[((hsi*13068+4614740)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*6930+509830)*1+lsi)*1]), &(inteval->stack[((hsi*6006+516760)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+4669388)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*15444+4627808)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+4969358)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4669388)*1+lsi)*1]), &(inteval->stack[((hsi*26136+4643252)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+535900)*1+lsi)*1]), &(inteval->stack[((hsi*7920+501910)*1+lsi)*1]), &(inteval->stack[((hsi*6930+509830)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+4700276)*1+lsi)*1]), &(inteval->stack[((hsi*20790+535900)*1+lsi)*1]), &(inteval->stack[((hsi*18018+4951340)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+5012918)*1+lsi)*1]), &(inteval->stack[((hsi*36036+4700276)*1+lsi)*1]), &(inteval->stack[((hsi*30888+4669388)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+556690)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5012918)*1+lsi)*1]), &(inteval->stack[((hsi*43560+4969358)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+4736312)*1+lsi)*1]), &(inteval->stack[((hsi*8976+492934)*1+lsi)*1]), &(inteval->stack[((hsi*7920+501910)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+4760072)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4736312)*1+lsi)*1]), &(inteval->stack[((hsi*20790+535900)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4760072)*1+lsi)*1]), &(inteval->stack[((hsi*36036+4700276)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+5749500)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5012918)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+5012918)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5749500)*1+lsi)*1]), &(inteval->stack[((hsi*65340+556690)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+4669388)*1+lsi)*1]), &(inteval->stack[((hsi*10098+482836)*1+lsi)*1]), &(inteval->stack[((hsi*8976+492934)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5826720)*1+lsi)*1]), &(inteval->stack[((hsi*26928+4669388)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4736312)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5874240)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5826720)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4760072)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+4696316)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5874240)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5689440)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+5943540)*1+lsi)*1]), &(inteval->stack[((hsi*90090+4696316)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5749500)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5943540)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5012918)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+492934)*1+lsi)*1]), &(inteval->stack[((hsi*11286+471550)*1+lsi)*1]), &(inteval->stack[((hsi*10098+482836)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+6051648)*1+lsi)*1]), &(inteval->stack[((hsi*30294+492934)*1+lsi)*1]), &(inteval->stack[((hsi*26928+4669388)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+6105504)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6051648)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5826720)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6184704)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6105504)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5874240)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+5811408)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6184704)*1+lsi)*1]), &(inteval->stack[((hsi*90090+4696316)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+4669388)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5811408)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5943540)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+6288654)*1+lsi)*1]), &(inteval->stack[((hsi*144144+4669388)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5689440)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+5937534)*1+lsi)*1]), &(inteval->stack[((hsi*4356+527914)*1+lsi)*1]), &(inteval->stack[((hsi*3630+532270)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+5948424)*1+lsi)*1]), &(inteval->stack[((hsi*13068+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*10890+5937534)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+5970204)*1+lsi)*1]), &(inteval->stack[((hsi*26136+4643252)*1+lsi)*1]), &(inteval->stack[((hsi*21780+5948424)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*43560+4969358)*1+lsi)*1]), &(inteval->stack[((hsi*36300+5970204)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+5937534)*1+lsi)*1]), &(inteval->stack[((hsi*65340+556690)*1+lsi)*1]), &(inteval->stack[((hsi*54450+4614740)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+523228)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5012918)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5937534)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*101640+523228)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+6445470)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6288654)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4951340)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*12540+459010)*1+lsi)*1]), &(inteval->stack[((hsi*11286+471550)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+4985198)*1+lsi)*1]), &(inteval->stack[((hsi*33858+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*30294+492934)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+459010)*1+lsi)*1]), &(inteval->stack[((hsi*60588+4985198)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6051648)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+5937534)*1+lsi)*1]), &(inteval->stack[((hsi*89760+459010)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6105504)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+459010)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5937534)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6184704)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+5937534)*1+lsi)*1]), &(inteval->stack[((hsi*145530+459010)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5811408)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*168168+5937534)*1+lsi)*1]), &(inteval->stack[((hsi*144144+4669388)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+5874768)*1+lsi)*1]), &(inteval->stack[((hsi*185328+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6288654)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+6070788)*1+lsi)*1]), &(inteval->stack[((hsi*196020+5874768)*1+lsi)*1]), &(inteval->stack[((hsi*163350+6445470)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+6270438)*1+lsi)*1]), &(inteval->stack[((hsi*199650+6070788)*1+lsi)*1]), &(inteval->stack[((hsi*166375+5114690)*1+lsi)*1]),3025);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*816750+6769563)*1+lsi)*1]), &(inteval->stack[((hsi*499125+6270438)*1+lsi)*1]), &(inteval->stack[((hsi*408375+5281065)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*6084+443488)*1+lsi)*1]), &(inteval->stack[((hsi*5148+449572)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+5704884)*1+lsi)*1]), &(inteval->stack[((hsi*7098+436390)*1+lsi)*1]), &(inteval->stack[((hsi*6084+443488)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+5723136)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5704884)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5689440)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*8190+428200)*1+lsi)*1]), &(inteval->stack[((hsi*7098+436390)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+5754024)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5704884)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+4972634)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5754024)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5723136)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5790528)*1+lsi)*1]), &(inteval->stack[((hsi*9360+418840)*1+lsi)*1]), &(inteval->stack[((hsi*8190+428200)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+5024114)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5790528)*1+lsi)*1]), &(inteval->stack[((hsi*21294+4951340)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+5815098)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5024114)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5754024)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+5066702)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5815098)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4972634)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*10608+408232)*1+lsi)*1]), &(inteval->stack[((hsi*9360+418840)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5875938)*1+lsi)*1]), &(inteval->stack[((hsi*28080+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5790528)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+459010)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5875938)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5024114)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+4642820)*1+lsi)*1]), &(inteval->stack[((hsi*70980+459010)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5815098)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+5925078)*1+lsi)*1]), &(inteval->stack[((hsi*91260+4642820)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5066702)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+5143922)*1+lsi)*1]), &(inteval->stack[((hsi*11934+396298)*1+lsi)*1]), &(inteval->stack[((hsi*10608+408232)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+529990)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5143922)*1+lsi)*1]), &(inteval->stack[((hsi*28080+4614740)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+5754024)*1+lsi)*1]), &(inteval->stack[((hsi*56160+529990)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5875938)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5754024)*1+lsi)*1]), &(inteval->stack[((hsi*70980+459010)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+7692783)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*91260+4642820)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7692783)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5925078)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+5175746)*1+lsi)*1]), &(inteval->stack[((hsi*13338+382960)*1+lsi)*1]), &(inteval->stack[((hsi*11934+396298)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+5835924)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5175746)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5143922)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+7820547)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5835924)*1+lsi)*1]), &(inteval->stack[((hsi*56160+529990)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+459010)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7820547)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5754024)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7914147)*1+lsi)*1]), &(inteval->stack[((hsi*122850+459010)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7586313)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+8063205)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7914147)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7692783)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8063205)*1+lsi)*1]), &(inteval->stack[((hsi*144144+4614740)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+5754024)*1+lsi)*1]), &(inteval->stack[((hsi*5148+449572)*1+lsi)*1]), &(inteval->stack[((hsi*4290+454720)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+581860)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5754024)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+5754024)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5723136)*1+lsi)*1]), &(inteval->stack[((hsi*25740+581860)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+581860)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4972634)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5754024)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5066702)*1+lsi)*1]), &(inteval->stack[((hsi*64350+581860)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5925078)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5689440)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+5899572)*1+lsi)*1]), &(inteval->stack[((hsi*144144+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*120120+4951340)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5899572)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*14820+368140)*1+lsi)*1]), &(inteval->stack[((hsi*13338+382960)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+5899572)*1+lsi)*1]), &(inteval->stack[((hsi*40014+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5175746)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*71604+5899572)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5835924)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*106080+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7820547)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+5829840)*1+lsi)*1]), &(inteval->stack[((hsi*140400+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*122850+459010)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+368140)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5829840)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7914147)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*198744+368140)*1+lsi)*1]), &(inteval->stack[((hsi*170352+8063205)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+368140)*1+lsi)*1]), &(inteval->stack[((hsi*219024+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7586313)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*231660+368140)*1+lsi)*1]), &(inteval->stack[((hsi*193050+4951340)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*199650+6070788)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+8185263)*1+lsi)*1]), &(inteval->stack[((hsi*598950+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*499125+6270438)*1+lsi)*1]),3025);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1361250+9183513)*1+lsi)*1]), &(inteval->stack[((hsi*998250+8185263)*1+lsi)*1]), &(inteval->stack[((hsi*816750+6769563)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+5925390)*1+lsi)*1]), &(inteval->stack[((hsi*7098+350031)*1+lsi)*1]), &(inteval->stack[((hsi*6006+357129)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+5943408)*1+lsi)*1]), &(inteval->stack[((hsi*8281+341750)*1+lsi)*1]), &(inteval->stack[((hsi*7098+350031)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+5964702)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5943408)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5925390)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+6000738)*1+lsi)*1]), &(inteval->stack[((hsi*9555+332195)*1+lsi)*1]), &(inteval->stack[((hsi*8281+341750)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+6025581)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6000738)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5943408)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+6068169)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6025581)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5964702)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+6128229)*1+lsi)*1]), &(inteval->stack[((hsi*10920+321275)*1+lsi)*1]), &(inteval->stack[((hsi*9555+332195)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+6156894)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6128229)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6000738)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6206580)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6156894)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6025581)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+6277560)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6206580)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6068169)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6367650)*1+lsi)*1]), &(inteval->stack[((hsi*12376+308899)*1+lsi)*1]), &(inteval->stack[((hsi*10920+321275)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6400410)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6367650)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6128229)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6400410)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6156894)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+6457740)*1+lsi)*1]), &(inteval->stack[((hsi*82810+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6206580)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+368140)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6457740)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6277560)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+5034150)*1+lsi)*1]), &(inteval->stack[((hsi*13923+294976)*1+lsi)*1]), &(inteval->stack[((hsi*12376+308899)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+5071278)*1+lsi)*1]), &(inteval->stack[((hsi*37128+5034150)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6367650)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+6564210)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5071278)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6400410)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6564210)*1+lsi)*1]), &(inteval->stack[((hsi*82810+4951340)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+494266)*1+lsi)*1]), &(inteval->stack[((hsi*124215+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6457740)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+6367650)*1+lsi)*1]), &(inteval->stack[((hsi*149058+494266)*1+lsi)*1]), &(inteval->stack[((hsi*126126+368140)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6128229)*1+lsi)*1]), &(inteval->stack[((hsi*15561+279415)*1+lsi)*1]), &(inteval->stack[((hsi*13923+294976)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+5136798)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6128229)*1+lsi)*1]), &(inteval->stack[((hsi*37128+5034150)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*74256+5136798)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5071278)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+10544763)*1+lsi)*1]), &(inteval->stack[((hsi*109200+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6564210)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+6535818)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10544763)*1+lsi)*1]), &(inteval->stack[((hsi*124215+4614740)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*173901+6535818)*1+lsi)*1]), &(inteval->stack[((hsi*149058+494266)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+10688088)*1+lsi)*1]), &(inteval->stack[((hsi*198744+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6367650)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+494266)*1+lsi)*1]), &(inteval->stack[((hsi*6006+357129)*1+lsi)*1]), &(inteval->stack[((hsi*5005+363135)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+509281)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5925390)*1+lsi)*1]), &(inteval->stack[((hsi*15015+494266)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+539311)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5964702)*1+lsi)*1]), &(inteval->stack[((hsi*30030+509281)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+5925390)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6068169)*1+lsi)*1]), &(inteval->stack[((hsi*50050+539311)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+494266)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6277560)*1+lsi)*1]), &(inteval->stack[((hsi*75075+5925390)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+5925390)*1+lsi)*1]), &(inteval->stack[((hsi*126126+368140)*1+lsi)*1]), &(inteval->stack[((hsi*105105+494266)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+294976)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6367650)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5925390)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+6169998)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10688088)*1+lsi)*1]), &(inteval->stack[((hsi*180180+294976)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+294976)*1+lsi)*1]), &(inteval->stack[((hsi*17290+262125)*1+lsi)*1]), &(inteval->stack[((hsi*15561+279415)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+341659)*1+lsi)*1]), &(inteval->stack[((hsi*46683+294976)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6128229)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+5925390)*1+lsi)*1]), &(inteval->stack[((hsi*83538+341659)*1+lsi)*1]), &(inteval->stack[((hsi*74256+5136798)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+262125)*1+lsi)*1]), &(inteval->stack[((hsi*123760+5925390)*1+lsi)*1]), &(inteval->stack[((hsi*109200+4951340)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*163800+262125)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10544763)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+262125)*1+lsi)*1]), &(inteval->stack[((hsi*200655+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*173901+6535818)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+6395223)*1+lsi)*1]), &(inteval->stack[((hsi*231868+262125)*1+lsi)*1]), &(inteval->stack[((hsi*198744+4614740)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+262125)*1+lsi)*1]), &(inteval->stack[((hsi*255528+6395223)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10688088)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+6395223)*1+lsi)*1]), &(inteval->stack[((hsi*270270+262125)*1+lsi)*1]), &(inteval->stack[((hsi*225225+6169998)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+10544763)*1+lsi)*1]), &(inteval->stack[((hsi*275275+6395223)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5689440)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+11252613)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10544763)*1+lsi)*1]), &(inteval->stack[((hsi*598950+7586313)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+12450513)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11252613)*1+lsi)*1]), &(inteval->stack[((hsi*998250+8185263)*1+lsi)*1]),3025);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2041875+14114263)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+12450513)*1+lsi)*1]), &(inteval->stack[((hsi*1361250+9183513)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*8190+241230)*1+lsi)*1]), &(inteval->stack[((hsi*6930+249420)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+7607103)*1+lsi)*1]), &(inteval->stack[((hsi*9555+231675)*1+lsi)*1]), &(inteval->stack[((hsi*8190+241230)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+7631673)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7607103)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7586313)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+7673253)*1+lsi)*1]), &(inteval->stack[((hsi*11025+220650)*1+lsi)*1]), &(inteval->stack[((hsi*9555+231675)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+7701918)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7673253)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7607103)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+7751058)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7701918)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7631673)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+7820358)*1+lsi)*1]), &(inteval->stack[((hsi*12600+208050)*1+lsi)*1]), &(inteval->stack[((hsi*11025+220650)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7853433)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7820358)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7673253)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+7910763)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7853433)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7701918)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+7992663)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7910763)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7751058)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+8096613)*1+lsi)*1]), &(inteval->stack[((hsi*14280+193770)*1+lsi)*1]), &(inteval->stack[((hsi*12600+208050)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+8134413)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8096613)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7820358)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8200563)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8134413)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7853433)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+8296113)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8200563)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7910763)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+8418963)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8296113)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7992663)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*16065+177705)*1+lsi)*1]), &(inteval->stack[((hsi*14280+193770)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+5732280)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8096613)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+8564493)*1+lsi)*1]), &(inteval->stack[((hsi*75600+5732280)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8134413)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+5807880)*1+lsi)*1]), &(inteval->stack[((hsi*110250+8564493)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8200563)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+8674743)*1+lsi)*1]), &(inteval->stack[((hsi*143325+5807880)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8296113)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+5951205)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8674743)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8418963)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+262125)*1+lsi)*1]), &(inteval->stack[((hsi*17955+159750)*1+lsi)*1]), &(inteval->stack[((hsi*16065+177705)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+310320)*1+lsi)*1]), &(inteval->stack[((hsi*48195+262125)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5689440)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+8846733)*1+lsi)*1]), &(inteval->stack[((hsi*85680+310320)*1+lsi)*1]), &(inteval->stack[((hsi*75600+5732280)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8846733)*1+lsi)*1]), &(inteval->stack[((hsi*110250+8564493)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+8096613)*1+lsi)*1]), &(inteval->stack[((hsi*165375+4951340)*1+lsi)*1]), &(inteval->stack[((hsi*143325+5807880)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8096613)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8674743)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+8564493)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*194040+5951205)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+396000)*1+lsi)*1]), &(inteval->stack[((hsi*6930+249420)*1+lsi)*1]), &(inteval->stack[((hsi*5775+256350)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+6145245)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*17325+396000)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+396000)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7631673)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6145245)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+6145245)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7751058)*1+lsi)*1]), &(inteval->stack[((hsi*57750+396000)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7992663)*1+lsi)*1]), &(inteval->stack[((hsi*86625+6145245)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+7707588)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8418963)*1+lsi)*1]), &(inteval->stack[((hsi*121275+7586313)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+8297268)*1+lsi)*1]), &(inteval->stack[((hsi*194040+5951205)*1+lsi)*1]), &(inteval->stack[((hsi*161700+7707588)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+7586313)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8564493)*1+lsi)*1]), &(inteval->stack[((hsi*207900+8297268)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+5918760)*1+lsi)*1]), &(inteval->stack[((hsi*19950+139800)*1+lsi)*1]), &(inteval->stack[((hsi*17955+159750)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+5972625)*1+lsi)*1]), &(inteval->stack[((hsi*53865+5918760)*1+lsi)*1]), &(inteval->stack[((hsi*48195+262125)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+6069015)*1+lsi)*1]), &(inteval->stack[((hsi*96390+5972625)*1+lsi)*1]), &(inteval->stack[((hsi*85680+310320)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+139800)*1+lsi)*1]), &(inteval->stack[((hsi*142800+6069015)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8846733)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+5918760)*1+lsi)*1]), &(inteval->stack[((hsi*189000+139800)*1+lsi)*1]), &(inteval->stack[((hsi*165375+4951340)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+139800)*1+lsi)*1]), &(inteval->stack[((hsi*231525+5918760)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8096613)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+7846188)*1+lsi)*1]), &(inteval->stack[((hsi*267540+139800)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5689440)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*294840+7846188)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8564493)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+7846188)*1+lsi)*1]), &(inteval->stack[((hsi*311850+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*259875+7586313)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+8163813)*1+lsi)*1]), &(inteval->stack[((hsi*317625+7846188)*1+lsi)*1]), &(inteval->stack[((hsi*275275+6395223)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+16156138)*1+lsi)*1]), &(inteval->stack[((hsi*825825+8163813)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10544763)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+17571838)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+16156138)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11252613)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+19568338)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+17571838)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+12450513)*1+lsi)*1]),3025);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*2858625+10544763)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+19568338)*1+lsi)*1]), &(inteval->stack[((hsi*2041875+14114263)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*2808+687176)*1+lsi)*1]), &(inteval->stack[((hsi*2376+689984)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+5696568)*1+lsi)*1]), &(inteval->stack[((hsi*3276+683900)*1+lsi)*1]), &(inteval->stack[((hsi*2808+687176)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+5704992)*1+lsi)*1]), &(inteval->stack[((hsi*8424+5696568)*1+lsi)*1]), &(inteval->stack[((hsi*7128+5689440)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+5719248)*1+lsi)*1]), &(inteval->stack[((hsi*3780+680120)*1+lsi)*1]), &(inteval->stack[((hsi*3276+683900)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+5729076)*1+lsi)*1]), &(inteval->stack[((hsi*9828+5719248)*1+lsi)*1]), &(inteval->stack[((hsi*8424+5696568)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+5745924)*1+lsi)*1]), &(inteval->stack[((hsi*16848+5729076)*1+lsi)*1]), &(inteval->stack[((hsi*14256+5704992)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+5769684)*1+lsi)*1]), &(inteval->stack[((hsi*4320+675800)*1+lsi)*1]), &(inteval->stack[((hsi*3780+680120)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+5781024)*1+lsi)*1]), &(inteval->stack[((hsi*11340+5769684)*1+lsi)*1]), &(inteval->stack[((hsi*9828+5719248)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+5800680)*1+lsi)*1]), &(inteval->stack[((hsi*19656+5781024)*1+lsi)*1]), &(inteval->stack[((hsi*16848+5729076)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+5828760)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5800680)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5745924)*1+lsi)*1]),36);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*12960+5864400)*1+lsi)*1]), &(inteval->stack[((hsi*4896+670904)*1+lsi)*1]), &(inteval->stack[((hsi*4320+675800)*1+lsi)*1]),36);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*22680+5877360)*1+lsi)*1]), &(inteval->stack[((hsi*12960+5864400)*1+lsi)*1]), &(inteval->stack[((hsi*11340+5769684)*1+lsi)*1]),36);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*32760+5900040)*1+lsi)*1]), &(inteval->stack[((hsi*22680+5877360)*1+lsi)*1]), &(inteval->stack[((hsi*19656+5781024)*1+lsi)*1]),36);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*42120+5932800)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5900040)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5800680)*1+lsi)*1]),36);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*49896+5974920)*1+lsi)*1]), &(inteval->stack[((hsi*42120+5932800)*1+lsi)*1]), &(inteval->stack[((hsi*35640+5828760)*1+lsi)*1]),36);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*14688+6024816)*1+lsi)*1]), &(inteval->stack[((hsi*5508+665396)*1+lsi)*1]), &(inteval->stack[((hsi*4896+670904)*1+lsi)*1]),36);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*25920+6039504)*1+lsi)*1]), &(inteval->stack[((hsi*14688+6024816)*1+lsi)*1]), &(inteval->stack[((hsi*12960+5864400)*1+lsi)*1]),36);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*37800+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*25920+6039504)*1+lsi)*1]), &(inteval->stack[((hsi*22680+5877360)*1+lsi)*1]),36);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*49140+6065424)*1+lsi)*1]), &(inteval->stack[((hsi*37800+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5900040)*1+lsi)*1]),36);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*58968+13441188)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6065424)*1+lsi)*1]), &(inteval->stack[((hsi*42120+5932800)*1+lsi)*1]),36);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*66528+6114564)*1+lsi)*1]), &(inteval->stack[((hsi*58968+13441188)*1+lsi)*1]), &(inteval->stack[((hsi*49896+5974920)*1+lsi)*1]),36);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*16524+13500156)*1+lsi)*1]), &(inteval->stack[((hsi*6156+659240)*1+lsi)*1]), &(inteval->stack[((hsi*5508+665396)*1+lsi)*1]),36);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*29376+13516680)*1+lsi)*1]), &(inteval->stack[((hsi*16524+13500156)*1+lsi)*1]), &(inteval->stack[((hsi*14688+6024816)*1+lsi)*1]),36);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*43200+6181092)*1+lsi)*1]), &(inteval->stack[((hsi*29376+13516680)*1+lsi)*1]), &(inteval->stack[((hsi*25920+6039504)*1+lsi)*1]),36);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*56700+13546056)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6181092)*1+lsi)*1]), &(inteval->stack[((hsi*37800+13403388)*1+lsi)*1]),36);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*68796+6224292)*1+lsi)*1]), &(inteval->stack[((hsi*56700+13546056)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6065424)*1+lsi)*1]),36);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*78624+139800)*1+lsi)*1]), &(inteval->stack[((hsi*68796+6224292)*1+lsi)*1]), &(inteval->stack[((hsi*58968+13441188)*1+lsi)*1]),36);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*85536+13602756)*1+lsi)*1]), &(inteval->stack[((hsi*78624+139800)*1+lsi)*1]), &(inteval->stack[((hsi*66528+6114564)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*2376+689984)*1+lsi)*1]), &(inteval->stack[((hsi*1980+692360)*1+lsi)*1]),36);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*11880+6299028)*1+lsi)*1]), &(inteval->stack[((hsi*7128+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*5940+6293088)*1+lsi)*1]),36);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*19800+6310908)*1+lsi)*1]), &(inteval->stack[((hsi*14256+5704992)*1+lsi)*1]), &(inteval->stack[((hsi*11880+6299028)*1+lsi)*1]),36);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*29700+6330708)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5745924)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6310908)*1+lsi)*1]),36);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*41580+218424)*1+lsi)*1]), &(inteval->stack[((hsi*35640+5828760)*1+lsi)*1]), &(inteval->stack[((hsi*29700+6330708)*1+lsi)*1]),36);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*55440+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*49896+5974920)*1+lsi)*1]), &(inteval->stack[((hsi*41580+218424)*1+lsi)*1]),36);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*71280+218424)*1+lsi)*1]), &(inteval->stack[((hsi*66528+6114564)*1+lsi)*1]), &(inteval->stack[((hsi*55440+6293088)*1+lsi)*1]),36);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*89100+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*85536+13602756)*1+lsi)*1]), &(inteval->stack[((hsi*71280+218424)*1+lsi)*1]),36);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*18468+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*6840+652400)*1+lsi)*1]), &(inteval->stack[((hsi*6156+659240)*1+lsi)*1]),36);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*33048+218424)*1+lsi)*1]), &(inteval->stack[((hsi*18468+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*16524+13500156)*1+lsi)*1]),36);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*48960+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*33048+218424)*1+lsi)*1]), &(inteval->stack[((hsi*29376+13516680)*1+lsi)*1]),36);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*64800+218424)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6181092)*1+lsi)*1]),36);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*79380+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*64800+218424)*1+lsi)*1]), &(inteval->stack[((hsi*56700+13546056)*1+lsi)*1]),36);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*91728+218424)*1+lsi)*1]), &(inteval->stack[((hsi*79380+6293088)*1+lsi)*1]), &(inteval->stack[((hsi*68796+6224292)*1+lsi)*1]),36);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*101088+5778540)*1+lsi)*1]), &(inteval->stack[((hsi*91728+218424)*1+lsi)*1]), &(inteval->stack[((hsi*78624+139800)*1+lsi)*1]),36);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*106920+5879628)*1+lsi)*1]), &(inteval->stack[((hsi*101088+5778540)*1+lsi)*1]), &(inteval->stack[((hsi*85536+13602756)*1+lsi)*1]),36);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*108900+5986548)*1+lsi)*1]), &(inteval->stack[((hsi*106920+5879628)*1+lsi)*1]), &(inteval->stack[((hsi*89100+5689440)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*326700+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*136125+4815215)*1+lsi)*1]), &(inteval->stack[((hsi*108900+5986548)*1+lsi)*1]),3025);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*653400+5689440)*1+lsi)*1]), &(inteval->stack[((hsi*408375+5281065)*1+lsi)*1]), &(inteval->stack[((hsi*326700+13403388)*1+lsi)*1]),3025);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*1089000+22063963)*1+lsi)*1]), &(inteval->stack[((hsi*816750+6769563)*1+lsi)*1]), &(inteval->stack[((hsi*653400+5689440)*1+lsi)*1]),3025);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*1633500+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*1361250+9183513)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+22063963)*1+lsi)*1]),3025);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*2286900+22063963)*1+lsi)*1]), &(inteval->stack[((hsi*2041875+14114263)*1+lsi)*1]), &(inteval->stack[((hsi*1633500+4614740)*1+lsi)*1]),3025);
HRRPart0bra0ket0ki(inteval, &(inteval->stack[((hsi*3049200+4614740)*1+lsi)*1]), &(inteval->stack[((hsi*2858625+10544763)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+22063963)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*9360+115920)*1+lsi)*1]), &(inteval->stack[((hsi*7920+125280)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+13427148)*1+lsi)*1]), &(inteval->stack[((hsi*10920+105000)*1+lsi)*1]), &(inteval->stack[((hsi*9360+115920)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+13455228)*1+lsi)*1]), &(inteval->stack[((hsi*28080+13427148)*1+lsi)*1]), &(inteval->stack[((hsi*23760+13403388)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+13502748)*1+lsi)*1]), &(inteval->stack[((hsi*12600+92400)*1+lsi)*1]), &(inteval->stack[((hsi*10920+105000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+13535508)*1+lsi)*1]), &(inteval->stack[((hsi*32760+13502748)*1+lsi)*1]), &(inteval->stack[((hsi*28080+13427148)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+13591668)*1+lsi)*1]), &(inteval->stack[((hsi*56160+13535508)*1+lsi)*1]), &(inteval->stack[((hsi*47520+13455228)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+13670868)*1+lsi)*1]), &(inteval->stack[((hsi*14400+78000)*1+lsi)*1]), &(inteval->stack[((hsi*12600+92400)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+13708668)*1+lsi)*1]), &(inteval->stack[((hsi*37800+13670868)*1+lsi)*1]), &(inteval->stack[((hsi*32760+13502748)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+13774188)*1+lsi)*1]), &(inteval->stack[((hsi*65520+13708668)*1+lsi)*1]), &(inteval->stack[((hsi*56160+13535508)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+13867788)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13774188)*1+lsi)*1]), &(inteval->stack[((hsi*79200+13591668)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+13986588)*1+lsi)*1]), &(inteval->stack[((hsi*16320+61680)*1+lsi)*1]), &(inteval->stack[((hsi*14400+78000)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+14029788)*1+lsi)*1]), &(inteval->stack[((hsi*43200+13986588)*1+lsi)*1]), &(inteval->stack[((hsi*37800+13670868)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+14105388)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14029788)*1+lsi)*1]), &(inteval->stack[((hsi*65520+13708668)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+14214588)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14105388)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13774188)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+14354988)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14214588)*1+lsi)*1]), &(inteval->stack[((hsi*118800+13867788)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+14521308)*1+lsi)*1]), &(inteval->stack[((hsi*18360+43320)*1+lsi)*1]), &(inteval->stack[((hsi*16320+61680)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+14570268)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14521308)*1+lsi)*1]), &(inteval->stack[((hsi*43200+13986588)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+8989638)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14570268)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14029788)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+14656668)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8989638)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14105388)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+9115638)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14656668)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14214588)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+14820468)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9115638)*1+lsi)*1]), &(inteval->stack[((hsi*166320+14354988)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+9312198)*1+lsi)*1]), &(inteval->stack[((hsi*20520+22800)*1+lsi)*1]), &(inteval->stack[((hsi*18360+43320)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+9367278)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9312198)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14521308)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+15042228)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9367278)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14570268)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+9465198)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15042228)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8989638)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+15186228)*1+lsi)*1]), &(inteval->stack[((hsi*189000+9465198)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14656668)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+9654198)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15186228)*1+lsi)*1]), &(inteval->stack[((hsi*196560+9115638)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+15415548)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9654198)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14820468)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+9916278)*1+lsi)*1]), &(inteval->stack[((hsi*7920+125280)*1+lsi)*1]), &(inteval->stack[((hsi*6600+133200)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+43320)*1+lsi)*1]), &(inteval->stack[((hsi*23760+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*19800+9916278)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+9916278)*1+lsi)*1]), &(inteval->stack[((hsi*47520+13455228)*1+lsi)*1]), &(inteval->stack[((hsi*39600+43320)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+43320)*1+lsi)*1]), &(inteval->stack[((hsi*79200+13591668)*1+lsi)*1]), &(inteval->stack[((hsi*66000+9916278)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+9916278)*1+lsi)*1]), &(inteval->stack[((hsi*118800+13867788)*1+lsi)*1]), &(inteval->stack[((hsi*99000+43320)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*166320+14354988)*1+lsi)*1]), &(inteval->stack[((hsi*138600+9916278)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+13588188)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14820468)*1+lsi)*1]), &(inteval->stack[((hsi*184800+13403388)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+13825788)*1+lsi)*1]), &(inteval->stack[((hsi*285120+15415548)*1+lsi)*1]), &(inteval->stack[((hsi*237600+13588188)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+14122788)*1+lsi)*1]), &(inteval->stack[((hsi*22800+0)*1+lsi)*1]), &(inteval->stack[((hsi*20520+22800)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+14184348)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14122788)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9312198)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+14294508)*1+lsi)*1]), &(inteval->stack[((hsi*110160+14184348)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9367278)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+0)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14294508)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15042228)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+14122788)*1+lsi)*1]), &(inteval->stack[((hsi*216000+0)*1+lsi)*1]), &(inteval->stack[((hsi*189000+9465198)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+14387388)*1+lsi)*1]), &(inteval->stack[((hsi*264600+14122788)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15186228)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+14693148)*1+lsi)*1]), &(inteval->stack[((hsi*305760+14387388)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9654198)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+8989638)*1+lsi)*1]), &(inteval->stack[((hsi*336960+14693148)*1+lsi)*1]), &(inteval->stack[((hsi*285120+15415548)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+14122788)*1+lsi)*1]), &(inteval->stack[((hsi*356400+8989638)*1+lsi)*1]), &(inteval->stack[((hsi*297000+13825788)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+14485788)*1+lsi)*1]), &(inteval->stack[((hsi*363000+14122788)*1+lsi)*1]), &(inteval->stack[((hsi*317625+7846188)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+22063963)*1+lsi)*1]), &(inteval->stack[((hsi*952875+14485788)*1+lsi)*1]), &(inteval->stack[((hsi*825825+8163813)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+7663940)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+22063963)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+16156138)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+7663940)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+17571838)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+22063963)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+19568338)*1+lsi)*1]),3025);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*3811500+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+22063963)*1+lsi)*1]), &(inteval->stack[((hsi*2858625+10544763)*1+lsi)*1]),3025);
HRRPart0bra0ket0kk(inteval, &(inteval->stack[((hsi*3920400+694340)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+13403388)*1+lsi)*1]), &(inteval->stack[((hsi*3049200+4614740)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3920400+694340)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
