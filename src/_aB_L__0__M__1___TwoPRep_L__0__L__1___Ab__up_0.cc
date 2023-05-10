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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lk.h>
#include <HRRPart0bra0ket0ll.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_L__0__M__1___TwoPRep_L__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_L__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,827775)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_L__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*4356+770124)*1+lsi)*1]), &(inteval->stack[((hsi*3630+774480)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+5850540)*1+lsi)*1]), &(inteval->stack[((hsi*5148+764976)*1+lsi)*1]), &(inteval->stack[((hsi*4356+770124)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+5863608)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5850540)*1+lsi)*1]), &(inteval->stack[((hsi*10890+5839650)*1+lsi)*1]),66);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+5885388)*1+lsi)*1]), &(inteval->stack[((hsi*6006+758970)*1+lsi)*1]), &(inteval->stack[((hsi*5148+764976)*1+lsi)*1]),66);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+5900832)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5885388)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5850540)*1+lsi)*1]),66);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+5926968)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5900832)*1+lsi)*1]), &(inteval->stack[((hsi*21780+5863608)*1+lsi)*1]),66);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+5963268)*1+lsi)*1]), &(inteval->stack[((hsi*6930+752040)*1+lsi)*1]), &(inteval->stack[((hsi*6006+758970)*1+lsi)*1]),66);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+5981286)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5963268)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5885388)*1+lsi)*1]),66);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+6012174)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5981286)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5900832)*1+lsi)*1]),66);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+6055734)*1+lsi)*1]), &(inteval->stack[((hsi*43560+6012174)*1+lsi)*1]), &(inteval->stack[((hsi*36300+5926968)*1+lsi)*1]),66);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+5885388)*1+lsi)*1]), &(inteval->stack[((hsi*7920+744120)*1+lsi)*1]), &(inteval->stack[((hsi*6930+752040)*1+lsi)*1]),66);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+6110184)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5885388)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5963268)*1+lsi)*1]),66);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+6146220)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6110184)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5981286)*1+lsi)*1]),66);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+6197700)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6146220)*1+lsi)*1]), &(inteval->stack[((hsi*43560+6012174)*1+lsi)*1]),66);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+5963268)*1+lsi)*1]), &(inteval->stack[((hsi*65340+6197700)*1+lsi)*1]), &(inteval->stack[((hsi*54450+6055734)*1+lsi)*1]),66);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+6263040)*1+lsi)*1]), &(inteval->stack[((hsi*8976+735144)*1+lsi)*1]), &(inteval->stack[((hsi*7920+744120)*1+lsi)*1]),66);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+6286800)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6263040)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5885388)*1+lsi)*1]),66);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+6328380)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6286800)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6110184)*1+lsi)*1]),66);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+6388440)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6328380)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6146220)*1+lsi)*1]),66);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+6465660)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6388440)*1+lsi)*1]), &(inteval->stack[((hsi*65340+6197700)*1+lsi)*1]),66);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+6110184)*1+lsi)*1]), &(inteval->stack[((hsi*91476+6465660)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5963268)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+6211824)*1+lsi)*1]), &(inteval->stack[((hsi*3630+774480)*1+lsi)*1]), &(inteval->stack[((hsi*2970+778110)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+6220734)*1+lsi)*1]), &(inteval->stack[((hsi*10890+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*8910+6211824)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+5885388)*1+lsi)*1]), &(inteval->stack[((hsi*21780+5863608)*1+lsi)*1]), &(inteval->stack[((hsi*17820+6220734)*1+lsi)*1]),66);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+6211824)*1+lsi)*1]), &(inteval->stack[((hsi*36300+5926968)*1+lsi)*1]), &(inteval->stack[((hsi*29700+5885388)*1+lsi)*1]),66);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*54450+6055734)*1+lsi)*1]), &(inteval->stack[((hsi*44550+6211824)*1+lsi)*1]),66);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*83160+6557136)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5963268)*1+lsi)*1]), &(inteval->stack[((hsi*62370+5839650)*1+lsi)*1]),66);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*106920+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*101640+6110184)*1+lsi)*1]), &(inteval->stack[((hsi*83160+6557136)*1+lsi)*1]),66);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*26928+5946570)*1+lsi)*1]), &(inteval->stack[((hsi*10098+725046)*1+lsi)*1]), &(inteval->stack[((hsi*8976+735144)*1+lsi)*1]),66);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5973498)*1+lsi)*1]), &(inteval->stack[((hsi*26928+5946570)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6263040)*1+lsi)*1]),66);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6021018)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5973498)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6286800)*1+lsi)*1]),66);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6211824)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6021018)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6328380)*1+lsi)*1]),66);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+5946570)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6211824)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6388440)*1+lsi)*1]),66);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+6211824)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5946570)*1+lsi)*1]), &(inteval->stack[((hsi*91476+6465660)*1+lsi)*1]),66);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+5946570)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6211824)*1+lsi)*1]), &(inteval->stack[((hsi*101640+6110184)*1+lsi)*1]),66);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*133650+6077250)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5946570)*1+lsi)*1]), &(inteval->stack[((hsi*106920+5839650)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*5148+712098)*1+lsi)*1]), &(inteval->stack[((hsi*4290+717246)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+5852520)*1+lsi)*1]), &(inteval->stack[((hsi*6084+706014)*1+lsi)*1]), &(inteval->stack[((hsi*5148+712098)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+5867964)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5852520)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5839650)*1+lsi)*1]),78);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+5893704)*1+lsi)*1]), &(inteval->stack[((hsi*7098+698916)*1+lsi)*1]), &(inteval->stack[((hsi*6084+706014)*1+lsi)*1]),78);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+5911956)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5893704)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5852520)*1+lsi)*1]),78);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+5942844)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5911956)*1+lsi)*1]), &(inteval->stack[((hsi*25740+5867964)*1+lsi)*1]),78);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+5985744)*1+lsi)*1]), &(inteval->stack[((hsi*8190+690726)*1+lsi)*1]), &(inteval->stack[((hsi*7098+698916)*1+lsi)*1]),78);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+6007038)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5985744)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5893704)*1+lsi)*1]),78);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+725046)*1+lsi)*1]), &(inteval->stack[((hsi*36504+6007038)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5911956)*1+lsi)*1]),78);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*51480+725046)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5942844)*1+lsi)*1]),78);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5893704)*1+lsi)*1]), &(inteval->stack[((hsi*9360+681366)*1+lsi)*1]), &(inteval->stack[((hsi*8190+690726)*1+lsi)*1]),78);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+6275250)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5893704)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5985744)*1+lsi)*1]),78);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+6317838)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6275250)*1+lsi)*1]), &(inteval->stack[((hsi*36504+6007038)*1+lsi)*1]),78);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+5985744)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6317838)*1+lsi)*1]), &(inteval->stack[((hsi*51480+725046)*1+lsi)*1]),78);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+6378678)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5985744)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6210900)*1+lsi)*1]),78);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+725046)*1+lsi)*1]), &(inteval->stack[((hsi*10608+670758)*1+lsi)*1]), &(inteval->stack[((hsi*9360+681366)*1+lsi)*1]),78);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+6468768)*1+lsi)*1]), &(inteval->stack[((hsi*28080+725046)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5893704)*1+lsi)*1]),78);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+6517908)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6468768)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6275250)*1+lsi)*1]),78);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+6588888)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6517908)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6317838)*1+lsi)*1]),78);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+6680148)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6588888)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5985744)*1+lsi)*1]),78);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+6788256)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6680148)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6378678)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+6275250)*1+lsi)*1]), &(inteval->stack[((hsi*4290+717246)*1+lsi)*1]), &(inteval->stack[((hsi*3510+721536)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+6285780)*1+lsi)*1]), &(inteval->stack[((hsi*12870+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*10530+6275250)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+5985744)*1+lsi)*1]), &(inteval->stack[((hsi*25740+5867964)*1+lsi)*1]), &(inteval->stack[((hsi*21060+6285780)*1+lsi)*1]),78);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+6275250)*1+lsi)*1]), &(inteval->stack[((hsi*42900+5942844)*1+lsi)*1]), &(inteval->stack[((hsi*35100+5985744)*1+lsi)*1]),78);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*52650+6275250)*1+lsi)*1]),78);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*98280+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6378678)*1+lsi)*1]), &(inteval->stack[((hsi*73710+5839650)*1+lsi)*1]),78);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*126360+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6788256)*1+lsi)*1]), &(inteval->stack[((hsi*98280+6210900)*1+lsi)*1]),78);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*31824+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*11934+658824)*1+lsi)*1]), &(inteval->stack[((hsi*10608+670758)*1+lsi)*1]),78);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+6242724)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*28080+725046)*1+lsi)*1]),78);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+6298884)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6242724)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6468768)*1+lsi)*1]),78);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+6380784)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6298884)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6517908)*1+lsi)*1]),78);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6380784)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6588888)*1+lsi)*1]),78);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+6338664)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6680148)*1+lsi)*1]),78);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+6482808)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6338664)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6788256)*1+lsi)*1]),78);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*157950+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6482808)*1+lsi)*1]), &(inteval->stack[((hsi*126360+5839650)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*400950+6368850)*1+lsi)*1]), &(inteval->stack[((hsi*157950+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*133650+6077250)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*6006+643718)*1+lsi)*1]), &(inteval->stack[((hsi*5005+649724)*1+lsi)*1]),91);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+5854665)*1+lsi)*1]), &(inteval->stack[((hsi*7098+636620)*1+lsi)*1]), &(inteval->stack[((hsi*6006+643718)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+5872683)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5854665)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5839650)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+5902713)*1+lsi)*1]), &(inteval->stack[((hsi*8281+628339)*1+lsi)*1]), &(inteval->stack[((hsi*7098+636620)*1+lsi)*1]),91);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+5924007)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5902713)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5854665)*1+lsi)*1]),91);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+658824)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5924007)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5872683)*1+lsi)*1]),91);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+5960043)*1+lsi)*1]), &(inteval->stack[((hsi*9555+618784)*1+lsi)*1]), &(inteval->stack[((hsi*8281+628339)*1+lsi)*1]),91);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+5984886)*1+lsi)*1]), &(inteval->stack[((hsi*24843+5960043)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5902713)*1+lsi)*1]),91);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+708874)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5984886)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5924007)*1+lsi)*1]),91);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*60060+708874)*1+lsi)*1]), &(inteval->stack[((hsi*50050+658824)*1+lsi)*1]),91);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+5902713)*1+lsi)*1]), &(inteval->stack[((hsi*10920+607864)*1+lsi)*1]), &(inteval->stack[((hsi*9555+618784)*1+lsi)*1]),91);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+6027474)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5902713)*1+lsi)*1]), &(inteval->stack[((hsi*24843+5960043)*1+lsi)*1]),91);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6844875)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6027474)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5984886)*1+lsi)*1]),91);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+5931378)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6844875)*1+lsi)*1]), &(inteval->stack[((hsi*60060+708874)*1+lsi)*1]),91);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+6915855)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5931378)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6769800)*1+lsi)*1]),91);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+708874)*1+lsi)*1]), &(inteval->stack[((hsi*12376+595488)*1+lsi)*1]), &(inteval->stack[((hsi*10920+607864)*1+lsi)*1]),91);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7020960)*1+lsi)*1]), &(inteval->stack[((hsi*32760+708874)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5902713)*1+lsi)*1]),91);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7078290)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7020960)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6027474)*1+lsi)*1]),91);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+7161100)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7078290)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6844875)*1+lsi)*1]),91);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+7267570)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7161100)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5931378)*1+lsi)*1]),91);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+5902713)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7267570)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6915855)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+6844875)*1+lsi)*1]), &(inteval->stack[((hsi*5005+649724)*1+lsi)*1]), &(inteval->stack[((hsi*4095+654729)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+6857160)*1+lsi)*1]), &(inteval->stack[((hsi*15015+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*12285+6844875)*1+lsi)*1]),91);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+607864)*1+lsi)*1]), &(inteval->stack[((hsi*30030+5872683)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6857160)*1+lsi)*1]),91);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+6844875)*1+lsi)*1]), &(inteval->stack[((hsi*50050+658824)*1+lsi)*1]), &(inteval->stack[((hsi*40950+607864)*1+lsi)*1]),91);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+607864)*1+lsi)*1]), &(inteval->stack[((hsi*75075+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*61425+6844875)*1+lsi)*1]),91);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*114660+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6915855)*1+lsi)*1]), &(inteval->stack[((hsi*85995+607864)*1+lsi)*1]),91);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*147420+7393696)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5902713)*1+lsi)*1]), &(inteval->stack[((hsi*114660+6769800)*1+lsi)*1]),91);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*37128+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*13923+581565)*1+lsi)*1]), &(inteval->stack[((hsi*12376+595488)*1+lsi)*1]),91);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6806928)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*32760+708874)*1+lsi)*1]),91);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+581565)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6806928)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7020960)*1+lsi)*1]),91);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*95550+581565)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7078290)*1+lsi)*1]),91);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+6894015)*1+lsi)*1]), &(inteval->stack[((hsi*124215+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7161100)*1+lsi)*1]),91);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+7043073)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6894015)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7267570)*1+lsi)*1]),91);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7043073)*1+lsi)*1]), &(inteval->stack[((hsi*140140+5902713)*1+lsi)*1]),91);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*184275+6949980)*1+lsi)*1]), &(inteval->stack[((hsi*180180+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*147420+7393696)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*473850+7134255)*1+lsi)*1]), &(inteval->stack[((hsi*184275+6949980)*1+lsi)*1]), &(inteval->stack[((hsi*157950+6210900)*1+lsi)*1]),2025);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*801900+7608105)*1+lsi)*1]), &(inteval->stack[((hsi*473850+7134255)*1+lsi)*1]), &(inteval->stack[((hsi*400950+6368850)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*6930+564135)*1+lsi)*1]), &(inteval->stack[((hsi*5775+571065)*1+lsi)*1]),105);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+5856975)*1+lsi)*1]), &(inteval->stack[((hsi*8190+555945)*1+lsi)*1]), &(inteval->stack[((hsi*6930+564135)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+581565)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5856975)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5839650)*1+lsi)*1]),105);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+5877765)*1+lsi)*1]), &(inteval->stack[((hsi*9555+546390)*1+lsi)*1]), &(inteval->stack[((hsi*8190+555945)*1+lsi)*1]),105);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5877765)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5856975)*1+lsi)*1]),105);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+5902335)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*34650+581565)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+616215)*1+lsi)*1]), &(inteval->stack[((hsi*11025+535365)*1+lsi)*1]), &(inteval->stack[((hsi*9555+546390)*1+lsi)*1]),105);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*28665+616215)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5877765)*1+lsi)*1]),105);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+6811380)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6769800)*1+lsi)*1]),105);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+644880)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6811380)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5902335)*1+lsi)*1]),105);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+5960085)*1+lsi)*1]), &(inteval->stack[((hsi*12600+522765)*1+lsi)*1]), &(inteval->stack[((hsi*11025+535365)*1+lsi)*1]),105);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+6260040)*1+lsi)*1]), &(inteval->stack[((hsi*33075+5960085)*1+lsi)*1]), &(inteval->stack[((hsi*28665+616215)*1+lsi)*1]),105);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+5993160)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6260040)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6210900)*1+lsi)*1]),105);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5993160)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6811380)*1+lsi)*1]),105);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*86625+644880)*1+lsi)*1]),105);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+6891075)*1+lsi)*1]), &(inteval->stack[((hsi*14280+508485)*1+lsi)*1]), &(inteval->stack[((hsi*12600+522765)*1+lsi)*1]),105);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+8513955)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6891075)*1+lsi)*1]), &(inteval->stack[((hsi*33075+5960085)*1+lsi)*1]),105);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8580105)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8513955)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6260040)*1+lsi)*1]),105);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8580105)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5993160)*1+lsi)*1]),105);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+8675655)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*103950+8410005)*1+lsi)*1]),105);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+8821185)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8675655)*1+lsi)*1]), &(inteval->stack[((hsi*121275+6769800)*1+lsi)*1]),105);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+5960085)*1+lsi)*1]), &(inteval->stack[((hsi*5775+571065)*1+lsi)*1]), &(inteval->stack[((hsi*4725+576840)*1+lsi)*1]),105);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*28350+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*14175+5960085)*1+lsi)*1]),105);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*47250+5960085)*1+lsi)*1]), &(inteval->stack[((hsi*34650+581565)*1+lsi)*1]), &(inteval->stack[((hsi*28350+8410005)*1+lsi)*1]),105);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*70875+522765)*1+lsi)*1]), &(inteval->stack[((hsi*57750+5902335)*1+lsi)*1]), &(inteval->stack[((hsi*47250+5960085)*1+lsi)*1]),105);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*99225+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*86625+644880)*1+lsi)*1]), &(inteval->stack[((hsi*70875+522765)*1+lsi)*1]),105);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*132300+522765)*1+lsi)*1]), &(inteval->stack[((hsi*121275+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*99225+5839650)*1+lsi)*1]),105);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*170100+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8821185)*1+lsi)*1]), &(inteval->stack[((hsi*132300+522765)*1+lsi)*1]),105);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*42840+522765)*1+lsi)*1]), &(inteval->stack[((hsi*16065+492420)*1+lsi)*1]), &(inteval->stack[((hsi*14280+508485)*1+lsi)*1]),105);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+565605)*1+lsi)*1]), &(inteval->stack[((hsi*42840+522765)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6891075)*1+lsi)*1]),105);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*75600+565605)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8513955)*1+lsi)*1]),105);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+492420)*1+lsi)*1]), &(inteval->stack[((hsi*110250+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8580105)*1+lsi)*1]),105);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*143325+492420)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6210900)*1+lsi)*1]),105);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+492420)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8675655)*1+lsi)*1]),105);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*194040+492420)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8821185)*1+lsi)*1]),105);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*212625+492420)*1+lsi)*1]), &(inteval->stack[((hsi*207900+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*170100+5839650)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*552825+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*212625+492420)*1+lsi)*1]), &(inteval->stack[((hsi*184275+6949980)*1+lsi)*1]),2025);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*947700+8962830)*1+lsi)*1]), &(inteval->stack[((hsi*552825+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*473850+7134255)*1+lsi)*1]),2025);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1336500+9910530)*1+lsi)*1]), &(inteval->stack[((hsi*947700+8962830)*1+lsi)*1]), &(inteval->stack[((hsi*801900+7608105)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*7920+472500)*1+lsi)*1]), &(inteval->stack[((hsi*6600+480420)*1+lsi)*1]),120);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+6789600)*1+lsi)*1]), &(inteval->stack[((hsi*9360+463140)*1+lsi)*1]), &(inteval->stack[((hsi*7920+472500)*1+lsi)*1]),120);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*39600+6813360)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6789600)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6769800)*1+lsi)*1]),120);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+6852960)*1+lsi)*1]), &(inteval->stack[((hsi*10920+452220)*1+lsi)*1]), &(inteval->stack[((hsi*9360+463140)*1+lsi)*1]),120);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+6881040)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6852960)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6789600)*1+lsi)*1]),120);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+6928560)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6881040)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6813360)*1+lsi)*1]),120);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+6994560)*1+lsi)*1]), &(inteval->stack[((hsi*12600+439620)*1+lsi)*1]), &(inteval->stack[((hsi*10920+452220)*1+lsi)*1]),120);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+7027320)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6994560)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6852960)*1+lsi)*1]),120);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+7083480)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7027320)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6881040)*1+lsi)*1]),120);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+7162680)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7083480)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6928560)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+7261680)*1+lsi)*1]), &(inteval->stack[((hsi*14400+425220)*1+lsi)*1]), &(inteval->stack[((hsi*12600+439620)*1+lsi)*1]),120);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+7299480)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7261680)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6994560)*1+lsi)*1]),120);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+7365000)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7299480)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7027320)*1+lsi)*1]),120);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7365000)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7083480)*1+lsi)*1]),120);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+6994560)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7162680)*1+lsi)*1]),120);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*16320+408900)*1+lsi)*1]), &(inteval->stack[((hsi*14400+425220)*1+lsi)*1]),120);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+6852960)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6210900)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7261680)*1+lsi)*1]),120);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+7458600)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6852960)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7299480)*1+lsi)*1]),120);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7458600)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7365000)*1+lsi)*1]),120);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+7261680)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5839650)*1+lsi)*1]),120);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7261680)*1+lsi)*1]), &(inteval->stack[((hsi*138600+6994560)*1+lsi)*1]),120);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*16200+6254100)*1+lsi)*1]), &(inteval->stack[((hsi*6600+480420)*1+lsi)*1]), &(inteval->stack[((hsi*5400+487020)*1+lsi)*1]),120);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*32400+6270300)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*16200+6254100)*1+lsi)*1]),120);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*54000+705045)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6813360)*1+lsi)*1]), &(inteval->stack[((hsi*32400+6270300)*1+lsi)*1]),120);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*81000+6254100)*1+lsi)*1]), &(inteval->stack[((hsi*66000+6928560)*1+lsi)*1]), &(inteval->stack[((hsi*54000+705045)*1+lsi)*1]),120);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*113400+11387430)*1+lsi)*1]), &(inteval->stack[((hsi*99000+7162680)*1+lsi)*1]), &(inteval->stack[((hsi*81000+6254100)*1+lsi)*1]),120);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*151200+11500830)*1+lsi)*1]), &(inteval->stack[((hsi*138600+6994560)*1+lsi)*1]), &(inteval->stack[((hsi*113400+11387430)*1+lsi)*1]),120);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*194400+6928560)*1+lsi)*1]), &(inteval->stack[((hsi*184800+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*151200+11500830)*1+lsi)*1]),120);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*48960+7122960)*1+lsi)*1]), &(inteval->stack[((hsi*18360+390540)*1+lsi)*1]), &(inteval->stack[((hsi*16320+408900)*1+lsi)*1]),120);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+6254100)*1+lsi)*1]), &(inteval->stack[((hsi*48960+7122960)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6210900)*1+lsi)*1]),120);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+7122960)*1+lsi)*1]), &(inteval->stack[((hsi*86400+6254100)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6852960)*1+lsi)*1]),120);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+11387430)*1+lsi)*1]), &(inteval->stack[((hsi*126000+7122960)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7458600)*1+lsi)*1]),120);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+11551230)*1+lsi)*1]), &(inteval->stack[((hsi*163800+11387430)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11247030)*1+lsi)*1]),120);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11551230)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7261680)*1+lsi)*1]),120);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+7122960)*1+lsi)*1]), &(inteval->stack[((hsi*221760+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*184800+5839650)*1+lsi)*1]),120);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*243000+7360560)*1+lsi)*1]), &(inteval->stack[((hsi*237600+7122960)*1+lsi)*1]), &(inteval->stack[((hsi*194400+6928560)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*637875+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*243000+7360560)*1+lsi)*1]), &(inteval->stack[((hsi*212625+492420)*1+lsi)*1]),2025);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1105650+11884905)*1+lsi)*1]), &(inteval->stack[((hsi*637875+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*552825+8410005)*1+lsi)*1]),2025);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*1579500+12990555)*1+lsi)*1]), &(inteval->stack[((hsi*1105650+11884905)*1+lsi)*1]), &(inteval->stack[((hsi*947700+8962830)*1+lsi)*1]),2025);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2004750+14570055)*1+lsi)*1]), &(inteval->stack[((hsi*1579500+12990555)*1+lsi)*1]), &(inteval->stack[((hsi*1336500+9910530)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*8976+367964)*1+lsi)*1]), &(inteval->stack[((hsi*7480+376940)*1+lsi)*1]),136);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+8432445)*1+lsi)*1]), &(inteval->stack[((hsi*10608+357356)*1+lsi)*1]), &(inteval->stack[((hsi*8976+367964)*1+lsi)*1]),136);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*44880+8459373)*1+lsi)*1]), &(inteval->stack[((hsi*26928+8432445)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8410005)*1+lsi)*1]),136);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+8504253)*1+lsi)*1]), &(inteval->stack[((hsi*12376+344980)*1+lsi)*1]), &(inteval->stack[((hsi*10608+357356)*1+lsi)*1]),136);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+8536077)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8504253)*1+lsi)*1]), &(inteval->stack[((hsi*26928+8432445)*1+lsi)*1]),136);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+8589933)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8536077)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8459373)*1+lsi)*1]),136);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+8664733)*1+lsi)*1]), &(inteval->stack[((hsi*14280+330700)*1+lsi)*1]), &(inteval->stack[((hsi*12376+344980)*1+lsi)*1]),136);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+8701861)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8664733)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8504253)*1+lsi)*1]),136);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+8765509)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8701861)*1+lsi)*1]), &(inteval->stack[((hsi*53856+8536077)*1+lsi)*1]),136);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+8855269)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8765509)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8589933)*1+lsi)*1]),136);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+8967469)*1+lsi)*1]), &(inteval->stack[((hsi*16320+314380)*1+lsi)*1]), &(inteval->stack[((hsi*14280+330700)*1+lsi)*1]),136);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+9010309)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8967469)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8664733)*1+lsi)*1]),136);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+9084565)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9010309)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8701861)*1+lsi)*1]),136);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+9190645)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9084565)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8765509)*1+lsi)*1]),136);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9190645)*1+lsi)*1]), &(inteval->stack[((hsi*112200+8855269)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+9325285)*1+lsi)*1]), &(inteval->stack[((hsi*18496+295884)*1+lsi)*1]), &(inteval->stack[((hsi*16320+314380)*1+lsi)*1]),136);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+8504253)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9325285)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8967469)*1+lsi)*1]),136);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+9374245)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8504253)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9010309)*1+lsi)*1]),136);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+6926880)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9374245)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9084565)*1+lsi)*1]),136);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+9498005)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6926880)*1+lsi)*1]), &(inteval->stack[((hsi*134640+9190645)*1+lsi)*1]),136);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+390540)*1+lsi)*1]), &(inteval->stack[((hsi*188496+9498005)*1+lsi)*1]), &(inteval->stack[((hsi*157080+6769800)*1+lsi)*1]),136);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*18360+8967469)*1+lsi)*1]), &(inteval->stack[((hsi*7480+376940)*1+lsi)*1]), &(inteval->stack[((hsi*6120+384420)*1+lsi)*1]),136);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*36720+8985829)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*18360+8967469)*1+lsi)*1]),136);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*61200+9022549)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8459373)*1+lsi)*1]), &(inteval->stack[((hsi*36720+8985829)*1+lsi)*1]),136);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*91800+7086000)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8589933)*1+lsi)*1]), &(inteval->stack[((hsi*61200+9022549)*1+lsi)*1]),136);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*128520+8967469)*1+lsi)*1]), &(inteval->stack[((hsi*112200+8855269)*1+lsi)*1]), &(inteval->stack[((hsi*91800+7086000)*1+lsi)*1]),136);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*171360+8589933)*1+lsi)*1]), &(inteval->stack[((hsi*157080+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*128520+8967469)*1+lsi)*1]),136);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*220320+8761293)*1+lsi)*1]), &(inteval->stack[((hsi*209440+390540)*1+lsi)*1]), &(inteval->stack[((hsi*171360+8589933)*1+lsi)*1]),136);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*55488+8981613)*1+lsi)*1]), &(inteval->stack[((hsi*20808+275076)*1+lsi)*1]), &(inteval->stack[((hsi*18496+295884)*1+lsi)*1]),136);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+9037101)*1+lsi)*1]), &(inteval->stack[((hsi*55488+8981613)*1+lsi)*1]), &(inteval->stack[((hsi*48960+9325285)*1+lsi)*1]),136);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+7086000)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9037101)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8504253)*1+lsi)*1]),136);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+8981613)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7086000)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9374245)*1+lsi)*1]),136);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8981613)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6926880)*1+lsi)*1]),136);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*222768+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*188496+9498005)*1+lsi)*1]),136);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+8981613)*1+lsi)*1]), &(inteval->stack[((hsi*251328+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*209440+390540)*1+lsi)*1]),136);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*275400+9250893)*1+lsi)*1]), &(inteval->stack[((hsi*269280+8981613)*1+lsi)*1]), &(inteval->stack[((hsi*220320+8761293)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*729000+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*275400+9250893)*1+lsi)*1]), &(inteval->stack[((hsi*243000+7360560)*1+lsi)*1]),2025);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*1275750+16574805)*1+lsi)*1]), &(inteval->stack[((hsi*729000+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*637875+11247030)*1+lsi)*1]),2025);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*1842750+17850555)*1+lsi)*1]), &(inteval->stack[((hsi*1275750+16574805)*1+lsi)*1]), &(inteval->stack[((hsi*1105650+11884905)*1+lsi)*1]),2025);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*2369250+19693305)*1+lsi)*1]), &(inteval->stack[((hsi*1842750+17850555)*1+lsi)*1]), &(inteval->stack[((hsi*1579500+12990555)*1+lsi)*1]),2025);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*2806650+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*2369250+19693305)*1+lsi)*1]), &(inteval->stack[((hsi*2004750+14570055)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*10098+249678)*1+lsi)*1]), &(inteval->stack[((hsi*8415+259776)*1+lsi)*1]),153);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+6795045)*1+lsi)*1]), &(inteval->stack[((hsi*11934+237744)*1+lsi)*1]), &(inteval->stack[((hsi*10098+249678)*1+lsi)*1]),153);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*50490+6825339)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6795045)*1+lsi)*1]), &(inteval->stack[((hsi*25245+6769800)*1+lsi)*1]),153);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+6875829)*1+lsi)*1]), &(inteval->stack[((hsi*13923+223821)*1+lsi)*1]), &(inteval->stack[((hsi*11934+237744)*1+lsi)*1]),153);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+6911631)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6875829)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6795045)*1+lsi)*1]),153);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+6972219)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6911631)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6825339)*1+lsi)*1]),153);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+7056369)*1+lsi)*1]), &(inteval->stack[((hsi*16065+207756)*1+lsi)*1]), &(inteval->stack[((hsi*13923+223821)*1+lsi)*1]),153);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+14053680)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7056369)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6875829)*1+lsi)*1]),153);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+7098138)*1+lsi)*1]), &(inteval->stack[((hsi*71604+14053680)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6911631)*1+lsi)*1]),153);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+275076)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7098138)*1+lsi)*1]), &(inteval->stack[((hsi*84150+6972219)*1+lsi)*1]),153);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+14125284)*1+lsi)*1]), &(inteval->stack[((hsi*18360+189396)*1+lsi)*1]), &(inteval->stack[((hsi*16065+207756)*1+lsi)*1]),153);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+7199118)*1+lsi)*1]), &(inteval->stack[((hsi*48195+14125284)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7056369)*1+lsi)*1]),153);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+14173479)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7199118)*1+lsi)*1]), &(inteval->stack[((hsi*71604+14053680)*1+lsi)*1]),153);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+9526293)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14173479)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7098138)*1+lsi)*1]),153);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+401301)*1+lsi)*1]), &(inteval->stack[((hsi*151470+9526293)*1+lsi)*1]), &(inteval->stack[((hsi*126225+275076)*1+lsi)*1]),153);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+7282656)*1+lsi)*1]), &(inteval->stack[((hsi*20808+168588)*1+lsi)*1]), &(inteval->stack[((hsi*18360+189396)*1+lsi)*1]),153);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+6875829)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7282656)*1+lsi)*1]), &(inteval->stack[((hsi*48195+14125284)*1+lsi)*1]),153);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+14292819)*1+lsi)*1]), &(inteval->stack[((hsi*96390+6875829)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7199118)*1+lsi)*1]),153);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+7337736)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14292819)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14173479)*1+lsi)*1]),153);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+14053680)*1+lsi)*1]), &(inteval->stack[((hsi*179010+7337736)*1+lsi)*1]), &(inteval->stack[((hsi*151470+9526293)*1+lsi)*1]),153);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+9526293)*1+lsi)*1]), &(inteval->stack[((hsi*212058+14053680)*1+lsi)*1]), &(inteval->stack[((hsi*176715+401301)*1+lsi)*1]),153);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*20655+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*8415+259776)*1+lsi)*1]), &(inteval->stack[((hsi*6885+268191)*1+lsi)*1]),153);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*41310+7056369)*1+lsi)*1]), &(inteval->stack[((hsi*25245+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*20655+5839650)*1+lsi)*1]),153);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*68850+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6825339)*1+lsi)*1]), &(inteval->stack[((hsi*41310+7056369)*1+lsi)*1]),153);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*103275+7056369)*1+lsi)*1]), &(inteval->stack[((hsi*84150+6972219)*1+lsi)*1]), &(inteval->stack[((hsi*68850+5839650)*1+lsi)*1]),153);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*144585+5839650)*1+lsi)*1]), &(inteval->stack[((hsi*126225+275076)*1+lsi)*1]), &(inteval->stack[((hsi*103275+7056369)*1+lsi)*1]),153);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*192780+6972219)*1+lsi)*1]), &(inteval->stack[((hsi*176715+401301)*1+lsi)*1]), &(inteval->stack[((hsi*144585+5839650)*1+lsi)*1]),153);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*247860+189396)*1+lsi)*1]), &(inteval->stack[((hsi*235620+9526293)*1+lsi)*1]), &(inteval->stack[((hsi*192780+6972219)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*62424+437256)*1+lsi)*1]), &(inteval->stack[((hsi*23409+145179)*1+lsi)*1]), &(inteval->stack[((hsi*20808+168588)*1+lsi)*1]),153);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+6972219)*1+lsi)*1]), &(inteval->stack[((hsi*62424+437256)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7282656)*1+lsi)*1]),153);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+437256)*1+lsi)*1]), &(inteval->stack[((hsi*110160+6972219)*1+lsi)*1]), &(inteval->stack[((hsi*96390+6875829)*1+lsi)*1]),153);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*160650+437256)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14292819)*1+lsi)*1]),153);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+6978645)*1+lsi)*1]), &(inteval->stack[((hsi*208845+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*179010+7337736)*1+lsi)*1]),153);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+7229259)*1+lsi)*1]), &(inteval->stack[((hsi*250614+6978645)*1+lsi)*1]), &(inteval->stack[((hsi*212058+14053680)*1+lsi)*1]),153);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+14053680)*1+lsi)*1]), &(inteval->stack[((hsi*282744+7229259)*1+lsi)*1]), &(inteval->stack[((hsi*235620+9526293)*1+lsi)*1]),153);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*309825+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*302940+14053680)*1+lsi)*1]), &(inteval->stack[((hsi*247860+189396)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*826200+22062555)*1+lsi)*1]), &(inteval->stack[((hsi*309825+6769800)*1+lsi)*1]), &(inteval->stack[((hsi*275400+9250893)*1+lsi)*1]),2025);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*1458000+22888755)*1+lsi)*1]), &(inteval->stack[((hsi*826200+22062555)*1+lsi)*1]), &(inteval->stack[((hsi*729000+8410005)*1+lsi)*1]),2025);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*2126250+24346755)*1+lsi)*1]), &(inteval->stack[((hsi*1458000+22888755)*1+lsi)*1]), &(inteval->stack[((hsi*1275750+16574805)*1+lsi)*1]),2025);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*2764125+26473005)*1+lsi)*1]), &(inteval->stack[((hsi*2126250+24346755)*1+lsi)*1]), &(inteval->stack[((hsi*1842750+17850555)*1+lsi)*1]),2025);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*3316950+29237130)*1+lsi)*1]), &(inteval->stack[((hsi*2764125+26473005)*1+lsi)*1]), &(inteval->stack[((hsi*2369250+19693305)*1+lsi)*1]),2025);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*3742200+16574805)*1+lsi)*1]), &(inteval->stack[((hsi*3316950+29237130)*1+lsi)*1]), &(inteval->stack[((hsi*2806650+11247030)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*3630+818645)*1+lsi)*1]), &(inteval->stack[((hsi*3025+822275)*1+lsi)*1]),55);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+20326080)*1+lsi)*1]), &(inteval->stack[((hsi*4290+814355)*1+lsi)*1]), &(inteval->stack[((hsi*3630+818645)*1+lsi)*1]),55);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*18150+20336970)*1+lsi)*1]), &(inteval->stack[((hsi*10890+20326080)*1+lsi)*1]), &(inteval->stack[((hsi*9075+20317005)*1+lsi)*1]),55);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+20355120)*1+lsi)*1]), &(inteval->stack[((hsi*5005+809350)*1+lsi)*1]), &(inteval->stack[((hsi*4290+814355)*1+lsi)*1]),55);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+20367990)*1+lsi)*1]), &(inteval->stack[((hsi*12870+20355120)*1+lsi)*1]), &(inteval->stack[((hsi*10890+20326080)*1+lsi)*1]),55);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+20389770)*1+lsi)*1]), &(inteval->stack[((hsi*21780+20367990)*1+lsi)*1]), &(inteval->stack[((hsi*18150+20336970)*1+lsi)*1]),55);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+20420020)*1+lsi)*1]), &(inteval->stack[((hsi*5775+803575)*1+lsi)*1]), &(inteval->stack[((hsi*5005+809350)*1+lsi)*1]),55);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+20435035)*1+lsi)*1]), &(inteval->stack[((hsi*15015+20420020)*1+lsi)*1]), &(inteval->stack[((hsi*12870+20355120)*1+lsi)*1]),55);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+20460775)*1+lsi)*1]), &(inteval->stack[((hsi*25740+20435035)*1+lsi)*1]), &(inteval->stack[((hsi*21780+20367990)*1+lsi)*1]),55);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+20497075)*1+lsi)*1]), &(inteval->stack[((hsi*36300+20460775)*1+lsi)*1]), &(inteval->stack[((hsi*30250+20389770)*1+lsi)*1]),55);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+20542450)*1+lsi)*1]), &(inteval->stack[((hsi*6600+796975)*1+lsi)*1]), &(inteval->stack[((hsi*5775+803575)*1+lsi)*1]),55);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+20559775)*1+lsi)*1]), &(inteval->stack[((hsi*17325+20542450)*1+lsi)*1]), &(inteval->stack[((hsi*15015+20420020)*1+lsi)*1]),55);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*30030+20559775)*1+lsi)*1]), &(inteval->stack[((hsi*25740+20435035)*1+lsi)*1]),55);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+20589805)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*36300+20460775)*1+lsi)*1]),55);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+8452905)*1+lsi)*1]), &(inteval->stack[((hsi*54450+20589805)*1+lsi)*1]), &(inteval->stack[((hsi*45375+20497075)*1+lsi)*1]),55);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+20644255)*1+lsi)*1]), &(inteval->stack[((hsi*7480+789495)*1+lsi)*1]), &(inteval->stack[((hsi*6600+796975)*1+lsi)*1]),55);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+20355120)*1+lsi)*1]), &(inteval->stack[((hsi*19800+20644255)*1+lsi)*1]), &(inteval->stack[((hsi*17325+20542450)*1+lsi)*1]),55);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+20664055)*1+lsi)*1]), &(inteval->stack[((hsi*34650+20355120)*1+lsi)*1]), &(inteval->stack[((hsi*30030+20559775)*1+lsi)*1]),55);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+8516430)*1+lsi)*1]), &(inteval->stack[((hsi*50050+20664055)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8410005)*1+lsi)*1]),55);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+20714105)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8516430)*1+lsi)*1]), &(inteval->stack[((hsi*54450+20589805)*1+lsi)*1]),55);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+8580780)*1+lsi)*1]), &(inteval->stack[((hsi*76230+20714105)*1+lsi)*1]), &(inteval->stack[((hsi*63525+8452905)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+20790335)*1+lsi)*1]), &(inteval->stack[((hsi*3025+822275)*1+lsi)*1]), &(inteval->stack[((hsi*2475+825300)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+20797760)*1+lsi)*1]), &(inteval->stack[((hsi*9075+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*7425+20790335)*1+lsi)*1]),55);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+20812610)*1+lsi)*1]), &(inteval->stack[((hsi*18150+20336970)*1+lsi)*1]), &(inteval->stack[((hsi*14850+20797760)*1+lsi)*1]),55);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*30250+20389770)*1+lsi)*1]), &(inteval->stack[((hsi*24750+20812610)*1+lsi)*1]),55);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+20790335)*1+lsi)*1]), &(inteval->stack[((hsi*45375+20497075)*1+lsi)*1]), &(inteval->stack[((hsi*37125+8665480)*1+lsi)*1]),55);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*69300+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*63525+8452905)*1+lsi)*1]), &(inteval->stack[((hsi*51975+20790335)*1+lsi)*1]),55);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*89100+20790335)*1+lsi)*1]), &(inteval->stack[((hsi*84700+8580780)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8665480)*1+lsi)*1]),55);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*22440+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*8415+781080)*1+lsi)*1]), &(inteval->stack[((hsi*7480+789495)*1+lsi)*1]),55);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+8687920)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*19800+20644255)*1+lsi)*1]),55);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+20879435)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8687920)*1+lsi)*1]), &(inteval->stack[((hsi*34650+20355120)*1+lsi)*1]),55);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*57750+20879435)*1+lsi)*1]), &(inteval->stack[((hsi*50050+20664055)*1+lsi)*1]),55);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+20879435)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8516430)*1+lsi)*1]),55);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*90090+20879435)*1+lsi)*1]), &(inteval->stack[((hsi*76230+20714105)*1+lsi)*1]),55);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+20879435)*1+lsi)*1]), &(inteval->stack[((hsi*101640+8665480)*1+lsi)*1]), &(inteval->stack[((hsi*84700+8580780)*1+lsi)*1]),55);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*111375+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*108900+20879435)*1+lsi)*1]), &(inteval->stack[((hsi*89100+20790335)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*334125+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*133650+6077250)*1+lsi)*1]), &(inteval->stack[((hsi*111375+8410005)*1+lsi)*1]),2025);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*668250+8410005)*1+lsi)*1]), &(inteval->stack[((hsi*400950+6368850)*1+lsi)*1]), &(inteval->stack[((hsi*334125+20317005)*1+lsi)*1]),2025);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1113750+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*801900+7608105)*1+lsi)*1]), &(inteval->stack[((hsi*668250+8410005)*1+lsi)*1]),2025);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*1670625+7079625)*1+lsi)*1]), &(inteval->stack[((hsi*1336500+9910530)*1+lsi)*1]), &(inteval->stack[((hsi*1113750+20317005)*1+lsi)*1]),2025);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*2338875+8750250)*1+lsi)*1]), &(inteval->stack[((hsi*2004750+14570055)*1+lsi)*1]), &(inteval->stack[((hsi*1670625+7079625)*1+lsi)*1]),2025);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*3118500+32554080)*1+lsi)*1]), &(inteval->stack[((hsi*2806650+11247030)*1+lsi)*1]), &(inteval->stack[((hsi*2338875+8750250)*1+lsi)*1]),2025);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*4009500+7079625)*1+lsi)*1]), &(inteval->stack[((hsi*3742200+16574805)*1+lsi)*1]), &(inteval->stack[((hsi*3118500+32554080)*1+lsi)*1]),2025);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*28215+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*11286+116793)*1+lsi)*1]), &(inteval->stack[((hsi*9405+128079)*1+lsi)*1]),171);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+11117340)*1+lsi)*1]), &(inteval->stack[((hsi*13338+103455)*1+lsi)*1]), &(inteval->stack[((hsi*11286+116793)*1+lsi)*1]),171);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*56430+11151198)*1+lsi)*1]), &(inteval->stack[((hsi*33858+11117340)*1+lsi)*1]), &(inteval->stack[((hsi*28215+11089125)*1+lsi)*1]),171);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+11207628)*1+lsi)*1]), &(inteval->stack[((hsi*15561+87894)*1+lsi)*1]), &(inteval->stack[((hsi*13338+103455)*1+lsi)*1]),171);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+11247642)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11207628)*1+lsi)*1]), &(inteval->stack[((hsi*33858+11117340)*1+lsi)*1]),171);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*94050+11315358)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11247642)*1+lsi)*1]), &(inteval->stack[((hsi*56430+11151198)*1+lsi)*1]),171);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+11409408)*1+lsi)*1]), &(inteval->stack[((hsi*17955+69939)*1+lsi)*1]), &(inteval->stack[((hsi*15561+87894)*1+lsi)*1]),171);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+11456091)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11409408)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11207628)*1+lsi)*1]),171);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+11536119)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11456091)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11247642)*1+lsi)*1]),171);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*141075+11648979)*1+lsi)*1]), &(inteval->stack[((hsi*112860+11536119)*1+lsi)*1]), &(inteval->stack[((hsi*94050+11315358)*1+lsi)*1]),171);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+11790054)*1+lsi)*1]), &(inteval->stack[((hsi*20520+49419)*1+lsi)*1]), &(inteval->stack[((hsi*17955+69939)*1+lsi)*1]),171);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+11843919)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11790054)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11409408)*1+lsi)*1]),171);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+11937285)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11843919)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11456091)*1+lsi)*1]),171);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+12070665)*1+lsi)*1]), &(inteval->stack[((hsi*133380+11937285)*1+lsi)*1]), &(inteval->stack[((hsi*112860+11536119)*1+lsi)*1]),171);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*197505+12239955)*1+lsi)*1]), &(inteval->stack[((hsi*169290+12070665)*1+lsi)*1]), &(inteval->stack[((hsi*141075+11648979)*1+lsi)*1]),171);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+12437460)*1+lsi)*1]), &(inteval->stack[((hsi*23256+26163)*1+lsi)*1]), &(inteval->stack[((hsi*20520+49419)*1+lsi)*1]),171);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+11207628)*1+lsi)*1]), &(inteval->stack[((hsi*61560+12437460)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11790054)*1+lsi)*1]),171);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+12499020)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11207628)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11843919)*1+lsi)*1]),171);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+12654630)*1+lsi)*1]), &(inteval->stack[((hsi*155610+12499020)*1+lsi)*1]), &(inteval->stack[((hsi*133380+11937285)*1+lsi)*1]),171);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+12854700)*1+lsi)*1]), &(inteval->stack[((hsi*200070+12654630)*1+lsi)*1]), &(inteval->stack[((hsi*169290+12070665)*1+lsi)*1]),171);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*263340+13091706)*1+lsi)*1]), &(inteval->stack[((hsi*237006+12854700)*1+lsi)*1]), &(inteval->stack[((hsi*197505+12239955)*1+lsi)*1]),171);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*23085+13355046)*1+lsi)*1]), &(inteval->stack[((hsi*9405+128079)*1+lsi)*1]), &(inteval->stack[((hsi*7695+137484)*1+lsi)*1]),171);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*46170+13378131)*1+lsi)*1]), &(inteval->stack[((hsi*28215+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*23085+13355046)*1+lsi)*1]),171);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*76950+13424301)*1+lsi)*1]), &(inteval->stack[((hsi*56430+11151198)*1+lsi)*1]), &(inteval->stack[((hsi*46170+13378131)*1+lsi)*1]),171);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*115425+13501251)*1+lsi)*1]), &(inteval->stack[((hsi*94050+11315358)*1+lsi)*1]), &(inteval->stack[((hsi*76950+13424301)*1+lsi)*1]),171);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*161595+13616676)*1+lsi)*1]), &(inteval->stack[((hsi*141075+11648979)*1+lsi)*1]), &(inteval->stack[((hsi*115425+13501251)*1+lsi)*1]),171);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*215460+13778271)*1+lsi)*1]), &(inteval->stack[((hsi*197505+12239955)*1+lsi)*1]), &(inteval->stack[((hsi*161595+13616676)*1+lsi)*1]),171);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*277020+13993731)*1+lsi)*1]), &(inteval->stack[((hsi*263340+13091706)*1+lsi)*1]), &(inteval->stack[((hsi*215460+13778271)*1+lsi)*1]),171);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*69768+14270751)*1+lsi)*1]), &(inteval->stack[((hsi*26163+0)*1+lsi)*1]), &(inteval->stack[((hsi*23256+26163)*1+lsi)*1]),171);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+14340519)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14270751)*1+lsi)*1]), &(inteval->stack[((hsi*61560+12437460)*1+lsi)*1]),171);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+14463639)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14340519)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11207628)*1+lsi)*1]),171);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+14643189)*1+lsi)*1]), &(inteval->stack[((hsi*179550+14463639)*1+lsi)*1]), &(inteval->stack[((hsi*155610+12499020)*1+lsi)*1]),171);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*233415+14643189)*1+lsi)*1]), &(inteval->stack[((hsi*200070+12654630)*1+lsi)*1]),171);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+14270751)*1+lsi)*1]), &(inteval->stack[((hsi*280098+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*237006+12854700)*1+lsi)*1]),171);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*338580+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*316008+14270751)*1+lsi)*1]), &(inteval->stack[((hsi*263340+13091706)*1+lsi)*1]),171);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*346275+11427705)*1+lsi)*1]), &(inteval->stack[((hsi*338580+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*277020+13993731)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*929475+11773980)*1+lsi)*1]), &(inteval->stack[((hsi*346275+11427705)*1+lsi)*1]), &(inteval->stack[((hsi*309825+6769800)*1+lsi)*1]),2025);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*1652400+12703455)*1+lsi)*1]), &(inteval->stack[((hsi*929475+11773980)*1+lsi)*1]), &(inteval->stack[((hsi*826200+22062555)*1+lsi)*1]),2025);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*2430000+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*1652400+12703455)*1+lsi)*1]), &(inteval->stack[((hsi*1458000+22888755)*1+lsi)*1]),2025);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*3189375+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*2430000+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*2126250+24346755)*1+lsi)*1]),2025);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*3869775+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*3189375+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*2764125+26473005)*1+lsi)*1]),2025);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*4422600+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*3869775+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*3316950+29237130)*1+lsi)*1]),2025);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*4811400+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*4422600+11089125)*1+lsi)*1]), &(inteval->stack[((hsi*3742200+16574805)*1+lsi)*1]),2025);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*5011875+827775)*1+lsi)*1]), &(inteval->stack[((hsi*4811400+20317005)*1+lsi)*1]), &(inteval->stack[((hsi*4009500+7079625)*1+lsi)*1]),2025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5011875+827775)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
