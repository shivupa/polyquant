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
#include <_aB_M__0__M__1___TwoPRep_I__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_I__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,758415)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_I__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*5148+681206)*1+lsi)*1]), &(inteval->stack[((hsi*4356+686354)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+5429983)*1+lsi)*1]), &(inteval->stack[((hsi*6006+675200)*1+lsi)*1]), &(inteval->stack[((hsi*5148+681206)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+5445427)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5429983)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5416915)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+5471563)*1+lsi)*1]), &(inteval->stack[((hsi*6930+668270)*1+lsi)*1]), &(inteval->stack[((hsi*6006+675200)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+5489581)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5471563)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5429983)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+5520469)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5489581)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5445427)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+5564029)*1+lsi)*1]), &(inteval->stack[((hsi*7920+660350)*1+lsi)*1]), &(inteval->stack[((hsi*6930+668270)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+5584819)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5564029)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5471563)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+5620855)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5584819)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5489581)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+5672335)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5620855)*1+lsi)*1]), &(inteval->stack[((hsi*43560+5520469)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+5471563)*1+lsi)*1]), &(inteval->stack[((hsi*8976+651374)*1+lsi)*1]), &(inteval->stack[((hsi*7920+660350)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+5737675)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5471563)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5564029)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+5779255)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5737675)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5584819)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+5839315)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5779255)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5620855)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+5564029)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5839315)*1+lsi)*1]), &(inteval->stack[((hsi*65340+5672335)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+5916535)*1+lsi)*1]), &(inteval->stack[((hsi*10098+641276)*1+lsi)*1]), &(inteval->stack[((hsi*8976+651374)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+5943463)*1+lsi)*1]), &(inteval->stack[((hsi*26928+5916535)*1+lsi)*1]), &(inteval->stack[((hsi*23760+5471563)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5990983)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5943463)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5737675)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6060283)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5990983)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5779255)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+6150373)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6060283)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5839315)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+5737675)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6150373)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5564029)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+5859643)*1+lsi)*1]), &(inteval->stack[((hsi*11286+629990)*1+lsi)*1]), &(inteval->stack[((hsi*10098+641276)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+6258481)*1+lsi)*1]), &(inteval->stack[((hsi*30294+5859643)*1+lsi)*1]), &(inteval->stack[((hsi*26928+5916535)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+6312337)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6258481)*1+lsi)*1]), &(inteval->stack[((hsi*47520+5943463)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6391537)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6312337)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5990983)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+5889937)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6391537)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6060283)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6495487)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5889937)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6150373)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+6016063)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6495487)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5737675)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*4356+686354)*1+lsi)*1]), &(inteval->stack[((hsi*3630+690710)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+6183769)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*10890+6172879)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+641276)*1+lsi)*1]), &(inteval->stack[((hsi*26136+5445427)*1+lsi)*1]), &(inteval->stack[((hsi*21780+6183769)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*43560+5520469)*1+lsi)*1]), &(inteval->stack[((hsi*36300+641276)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+5471365)*1+lsi)*1]), &(inteval->stack[((hsi*65340+5672335)*1+lsi)*1]), &(inteval->stack[((hsi*54450+5416915)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+6639631)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5564029)*1+lsi)*1]), &(inteval->stack[((hsi*76230+5471365)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5737675)*1+lsi)*1]), &(inteval->stack[((hsi*101640+6639631)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+5547595)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6016063)*1+lsi)*1]), &(inteval->stack[((hsi*130680+5416915)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*12540+617450)*1+lsi)*1]), &(inteval->stack[((hsi*11286+629990)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*33858+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*30294+5859643)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*60588+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6258481)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*89760+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6312337)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6391537)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*145530+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5889937)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*168168+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6495487)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*185328+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*156816+6016063)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6172879)*1+lsi)*1]), &(inteval->stack[((hsi*163350+5547595)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*6084+601928)*1+lsi)*1]), &(inteval->stack[((hsi*5148+608012)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+5432359)*1+lsi)*1]), &(inteval->stack[((hsi*7098+594830)*1+lsi)*1]), &(inteval->stack[((hsi*6084+601928)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+5450611)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5432359)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5416915)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+5481499)*1+lsi)*1]), &(inteval->stack[((hsi*8190+586640)*1+lsi)*1]), &(inteval->stack[((hsi*7098+594830)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+5502793)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5481499)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5432359)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+5539297)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5502793)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5450611)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5590777)*1+lsi)*1]), &(inteval->stack[((hsi*9360+577280)*1+lsi)*1]), &(inteval->stack[((hsi*8190+586640)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+5615347)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5590777)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5481499)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+617450)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5615347)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5502793)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+5910595)*1+lsi)*1]), &(inteval->stack[((hsi*60840+617450)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5539297)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+5481499)*1+lsi)*1]), &(inteval->stack[((hsi*10608+566672)*1+lsi)*1]), &(inteval->stack[((hsi*9360+577280)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5657935)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5481499)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5590777)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+5987815)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5657935)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5615347)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+6058795)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5987815)*1+lsi)*1]), &(inteval->stack[((hsi*60840+617450)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+6150055)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6058795)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5910595)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+617450)*1+lsi)*1]), &(inteval->stack[((hsi*11934+554738)*1+lsi)*1]), &(inteval->stack[((hsi*10608+566672)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+5590777)*1+lsi)*1]), &(inteval->stack[((hsi*31824+617450)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5481499)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+6258163)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5590777)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5657935)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+6340063)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6258163)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5987815)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+6446533)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6340063)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6058795)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+5987815)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6446533)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6150055)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+5646937)*1+lsi)*1]), &(inteval->stack[((hsi*13338+541400)*1+lsi)*1]), &(inteval->stack[((hsi*11934+554738)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+6574297)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5646937)*1+lsi)*1]), &(inteval->stack[((hsi*31824+617450)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+6637945)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6574297)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5590777)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+6731545)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6637945)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6258163)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+6854395)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6731545)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6340063)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+6258163)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6854395)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6446533)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+7003453)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6258163)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5987815)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*5148+608012)*1+lsi)*1]), &(inteval->stack[((hsi*4290+613160)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+554738)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*12870+6428515)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5450611)*1+lsi)*1]), &(inteval->stack[((hsi*25740+554738)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+554738)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5539297)*1+lsi)*1]), &(inteval->stack[((hsi*42900+6428515)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5910595)*1+lsi)*1]), &(inteval->stack[((hsi*64350+554738)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6150055)*1+lsi)*1]), &(inteval->stack[((hsi*90090+5416915)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5987815)*1+lsi)*1]), &(inteval->stack[((hsi*120120+6428515)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+5910595)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7003453)*1+lsi)*1]), &(inteval->stack[((hsi*154440+5416915)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*14820+526580)*1+lsi)*1]), &(inteval->stack[((hsi*13338+541400)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+5456929)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5646937)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+5528533)*1+lsi)*1]), &(inteval->stack[((hsi*71604+5456929)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6574297)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5528533)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6637945)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6731545)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6854395)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+6627259)*1+lsi)*1]), &(inteval->stack[((hsi*198744+6428515)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6258163)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+6103645)*1+lsi)*1]), &(inteval->stack[((hsi*219024+6627259)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7003453)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*231660+6103645)*1+lsi)*1]), &(inteval->stack[((hsi*193050+5910595)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+5910595)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5710945)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+526580)*1+lsi)*1]), &(inteval->stack[((hsi*7098+508471)*1+lsi)*1]), &(inteval->stack[((hsi*6006+515569)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+544598)*1+lsi)*1]), &(inteval->stack[((hsi*8281+500190)*1+lsi)*1]), &(inteval->stack[((hsi*7098+508471)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+565892)*1+lsi)*1]), &(inteval->stack[((hsi*21294+544598)*1+lsi)*1]), &(inteval->stack[((hsi*18018+526580)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+601928)*1+lsi)*1]), &(inteval->stack[((hsi*9555+490635)*1+lsi)*1]), &(inteval->stack[((hsi*8281+500190)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+626771)*1+lsi)*1]), &(inteval->stack[((hsi*24843+601928)*1+lsi)*1]), &(inteval->stack[((hsi*21294+544598)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*42588+626771)*1+lsi)*1]), &(inteval->stack[((hsi*36036+565892)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+5652865)*1+lsi)*1]), &(inteval->stack[((hsi*10920+479715)*1+lsi)*1]), &(inteval->stack[((hsi*9555+490635)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+6569605)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5652865)*1+lsi)*1]), &(inteval->stack[((hsi*24843+601928)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+6619291)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6569605)*1+lsi)*1]), &(inteval->stack[((hsi*42588+626771)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+601928)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6619291)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6509545)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6690271)*1+lsi)*1]), &(inteval->stack[((hsi*12376+467339)*1+lsi)*1]), &(inteval->stack[((hsi*10920+479715)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6723031)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6690271)*1+lsi)*1]), &(inteval->stack[((hsi*28665+5652865)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+6780361)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6723031)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6569605)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+6863171)*1+lsi)*1]), &(inteval->stack[((hsi*82810+6780361)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6619291)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+6969641)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6863171)*1+lsi)*1]), &(inteval->stack[((hsi*90090+601928)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+6569605)*1+lsi)*1]), &(inteval->stack[((hsi*13923+453416)*1+lsi)*1]), &(inteval->stack[((hsi*12376+467339)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6606733)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6569605)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6690271)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+7095767)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6606733)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6723031)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+7191317)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7095767)*1+lsi)*1]), &(inteval->stack[((hsi*82810+6780361)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+6672253)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7191317)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6863171)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+7315532)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6672253)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6969641)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6821311)*1+lsi)*1]), &(inteval->stack[((hsi*15561+437855)*1+lsi)*1]), &(inteval->stack[((hsi*13923+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+6863080)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6821311)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6569605)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+7483700)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6863080)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6606733)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+7592900)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7483700)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7095767)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+7736225)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7592900)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7191317)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+7095767)*1+lsi)*1]), &(inteval->stack[((hsi*173901+7736225)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6672253)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+6569605)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7095767)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7315532)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+453416)*1+lsi)*1]), &(inteval->stack[((hsi*6006+515569)*1+lsi)*1]), &(inteval->stack[((hsi*5005+521575)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+468431)*1+lsi)*1]), &(inteval->stack[((hsi*18018+526580)*1+lsi)*1]), &(inteval->stack[((hsi*15015+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+498461)*1+lsi)*1]), &(inteval->stack[((hsi*36036+565892)*1+lsi)*1]), &(inteval->stack[((hsi*30030+468431)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+7910126)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*50050+498461)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+453416)*1+lsi)*1]), &(inteval->stack[((hsi*90090+601928)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7910126)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+7910126)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6969641)*1+lsi)*1]), &(inteval->stack[((hsi*105105+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+453416)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7315532)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7910126)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+7910126)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6569605)*1+lsi)*1]), &(inteval->stack[((hsi*180180+453416)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+453416)*1+lsi)*1]), &(inteval->stack[((hsi*17290+420565)*1+lsi)*1]), &(inteval->stack[((hsi*15561+437855)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+500099)*1+lsi)*1]), &(inteval->stack[((hsi*46683+453416)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6821311)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+7294511)*1+lsi)*1]), &(inteval->stack[((hsi*83538+500099)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6863080)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+6785821)*1+lsi)*1]), &(inteval->stack[((hsi*123760+7294511)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7483700)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+7294511)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6785821)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7592900)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+6785821)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7294511)*1+lsi)*1]), &(inteval->stack[((hsi*173901+7736225)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+7294511)*1+lsi)*1]), &(inteval->stack[((hsi*231868+6785821)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7095767)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+6785821)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7294511)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6569605)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+7056091)*1+lsi)*1]), &(inteval->stack[((hsi*270270+6785821)*1+lsi)*1]), &(inteval->stack[((hsi*225225+7910126)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+7331366)*1+lsi)*1]), &(inteval->stack[((hsi*275275+7056091)*1+lsi)*1]), &(inteval->stack[((hsi*235950+5416915)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+8039216)*1+lsi)*1]), &(inteval->stack[((hsi*707850+7331366)*1+lsi)*1]), &(inteval->stack[((hsi*598950+5910595)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*8190+399670)*1+lsi)*1]), &(inteval->stack[((hsi*6930+407860)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+6530335)*1+lsi)*1]), &(inteval->stack[((hsi*9555+390115)*1+lsi)*1]), &(inteval->stack[((hsi*8190+399670)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+6554905)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6530335)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6509545)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+6596485)*1+lsi)*1]), &(inteval->stack[((hsi*11025+379090)*1+lsi)*1]), &(inteval->stack[((hsi*9555+390115)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+6625150)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6596485)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6530335)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+6674290)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6625150)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6554905)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+6743590)*1+lsi)*1]), &(inteval->stack[((hsi*12600+366490)*1+lsi)*1]), &(inteval->stack[((hsi*11025+379090)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6743590)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6596485)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+6776665)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6625150)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+420565)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6776665)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6674290)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+5474245)*1+lsi)*1]), &(inteval->stack[((hsi*14280+352210)*1+lsi)*1]), &(inteval->stack[((hsi*12600+366490)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+5512045)*1+lsi)*1]), &(inteval->stack[((hsi*37800+5474245)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6743590)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+6858565)*1+lsi)*1]), &(inteval->stack[((hsi*66150+5512045)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5416915)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+524515)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6858565)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6776665)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*122850+524515)*1+lsi)*1]), &(inteval->stack[((hsi*103950+420565)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+5578195)*1+lsi)*1]), &(inteval->stack[((hsi*16065+336145)*1+lsi)*1]), &(inteval->stack[((hsi*14280+352210)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+6743590)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5578195)*1+lsi)*1]), &(inteval->stack[((hsi*37800+5474245)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+9382646)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6743590)*1+lsi)*1]), &(inteval->stack[((hsi*66150+5512045)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*110250+9382646)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6858565)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+6819190)*1+lsi)*1]), &(inteval->stack[((hsi*143325+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*122850+524515)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+9492896)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6819190)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9237116)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+524515)*1+lsi)*1]), &(inteval->stack[((hsi*17955+318190)*1+lsi)*1]), &(inteval->stack[((hsi*16065+336145)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+572710)*1+lsi)*1]), &(inteval->stack[((hsi*48195+524515)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5578195)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+5560240)*1+lsi)*1]), &(inteval->stack[((hsi*85680+572710)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6743590)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+9686936)*1+lsi)*1]), &(inteval->stack[((hsi*126000+5560240)*1+lsi)*1]), &(inteval->stack[((hsi*110250+9382646)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+9852311)*1+lsi)*1]), &(inteval->stack[((hsi*165375+9686936)*1+lsi)*1]), &(inteval->stack[((hsi*143325+5416915)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+10052966)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9852311)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6819190)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+6743590)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10052966)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9492896)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*6930+407860)*1+lsi)*1]), &(inteval->stack[((hsi*5775+414790)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+5434240)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*17325+5416915)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+9382646)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6554905)*1+lsi)*1]), &(inteval->stack[((hsi*34650+5434240)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6674290)*1+lsi)*1]), &(inteval->stack[((hsi*57750+9382646)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+6596170)*1+lsi)*1]), &(inteval->stack[((hsi*103950+420565)*1+lsi)*1]), &(inteval->stack[((hsi*86625+6509545)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+336145)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*121275+6596170)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9492896)*1+lsi)*1]), &(inteval->stack[((hsi*161700+336145)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+10282286)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6743590)*1+lsi)*1]), &(inteval->stack[((hsi*207900+9237116)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*19950+298240)*1+lsi)*1]), &(inteval->stack[((hsi*17955+318190)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+9290981)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*48195+524515)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+9387371)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9290981)*1+lsi)*1]), &(inteval->stack[((hsi*85680+572710)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+298240)*1+lsi)*1]), &(inteval->stack[((hsi*142800+9387371)*1+lsi)*1]), &(inteval->stack[((hsi*126000+5560240)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*189000+298240)*1+lsi)*1]), &(inteval->stack[((hsi*165375+9686936)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+298240)*1+lsi)*1]), &(inteval->stack[((hsi*231525+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9852311)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*267540+298240)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10052966)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+9531956)*1+lsi)*1]), &(inteval->stack[((hsi*294840+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6743590)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*311850+9531956)*1+lsi)*1]), &(inteval->stack[((hsi*259875+10282286)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*317625+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*275275+7056091)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+10062941)*1+lsi)*1]), &(inteval->stack[((hsi*825825+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*707850+7331366)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+11478641)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+10062941)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+8039216)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+6827170)*1+lsi)*1]), &(inteval->stack[((hsi*9360+274360)*1+lsi)*1]), &(inteval->stack[((hsi*7920+283720)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+6850930)*1+lsi)*1]), &(inteval->stack[((hsi*10920+263440)*1+lsi)*1]), &(inteval->stack[((hsi*9360+274360)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+6879010)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6850930)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6827170)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+6926530)*1+lsi)*1]), &(inteval->stack[((hsi*12600+250840)*1+lsi)*1]), &(inteval->stack[((hsi*10920+263440)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+6959290)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6926530)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6850930)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+7015450)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6959290)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6879010)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+7094650)*1+lsi)*1]), &(inteval->stack[((hsi*14400+236440)*1+lsi)*1]), &(inteval->stack[((hsi*12600+250840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+7132450)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7094650)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6926530)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+7197970)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7132450)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6959290)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+7291570)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7197970)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7015450)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+7410370)*1+lsi)*1]), &(inteval->stack[((hsi*16320+220120)*1+lsi)*1]), &(inteval->stack[((hsi*14400+236440)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+7453570)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7410370)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7094650)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+7529170)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7453570)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7132450)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+7638370)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7529170)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7197970)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+298240)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7638370)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7291570)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*18360+201760)*1+lsi)*1]), &(inteval->stack[((hsi*16320+220120)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+7778770)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7410370)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+5465875)*1+lsi)*1]), &(inteval->stack[((hsi*86400+7778770)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7453570)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+464560)*1+lsi)*1]), &(inteval->stack[((hsi*126000+5465875)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7529170)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+7410370)*1+lsi)*1]), &(inteval->stack[((hsi*163800+464560)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7638370)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+13475141)*1+lsi)*1]), &(inteval->stack[((hsi*196560+7410370)*1+lsi)*1]), &(inteval->stack[((hsi*166320+298240)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+7094650)*1+lsi)*1]), &(inteval->stack[((hsi*20520+181240)*1+lsi)*1]), &(inteval->stack[((hsi*18360+201760)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+7865170)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7094650)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5416915)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+7606930)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7865170)*1+lsi)*1]), &(inteval->stack[((hsi*86400+7778770)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+13696901)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7606930)*1+lsi)*1]), &(inteval->stack[((hsi*126000+5465875)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13696901)*1+lsi)*1]), &(inteval->stack[((hsi*163800+464560)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+13885901)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*196560+7410370)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+14147981)*1+lsi)*1]), &(inteval->stack[((hsi*262080+13885901)*1+lsi)*1]), &(inteval->stack[((hsi*221760+13475141)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+464560)*1+lsi)*1]), &(inteval->stack[((hsi*7920+283720)*1+lsi)*1]), &(inteval->stack[((hsi*6600+291640)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+484360)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6827170)*1+lsi)*1]), &(inteval->stack[((hsi*19800+464560)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+7410370)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6879010)*1+lsi)*1]), &(inteval->stack[((hsi*39600+484360)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+464560)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7015450)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7410370)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+6827170)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7291570)*1+lsi)*1]), &(inteval->stack[((hsi*99000+464560)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+7149730)*1+lsi)*1]), &(inteval->stack[((hsi*166320+298240)*1+lsi)*1]), &(inteval->stack[((hsi*138600+6827170)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+201760)*1+lsi)*1]), &(inteval->stack[((hsi*221760+13475141)*1+lsi)*1]), &(inteval->stack[((hsi*184800+7149730)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+7149730)*1+lsi)*1]), &(inteval->stack[((hsi*285120+14147981)*1+lsi)*1]), &(inteval->stack[((hsi*237600+201760)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+201760)*1+lsi)*1]), &(inteval->stack[((hsi*22800+158440)*1+lsi)*1]), &(inteval->stack[((hsi*20520+181240)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+263320)*1+lsi)*1]), &(inteval->stack[((hsi*61560+201760)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7094650)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+6827170)*1+lsi)*1]), &(inteval->stack[((hsi*110160+263320)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7865170)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+158440)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6827170)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7606930)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+7446730)*1+lsi)*1]), &(inteval->stack[((hsi*216000+158440)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13696901)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+158440)*1+lsi)*1]), &(inteval->stack[((hsi*264600+7446730)*1+lsi)*1]), &(inteval->stack[((hsi*229320+5416915)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+7446730)*1+lsi)*1]), &(inteval->stack[((hsi*305760+158440)*1+lsi)*1]), &(inteval->stack[((hsi*262080+13885901)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+13475141)*1+lsi)*1]), &(inteval->stack[((hsi*336960+7446730)*1+lsi)*1]), &(inteval->stack[((hsi*285120+14147981)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+7446730)*1+lsi)*1]), &(inteval->stack[((hsi*356400+13475141)*1+lsi)*1]), &(inteval->stack[((hsi*297000+7149730)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+13475141)*1+lsi)*1]), &(inteval->stack[((hsi*363000+7446730)*1+lsi)*1]), &(inteval->stack[((hsi*317625+6509545)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+14428016)*1+lsi)*1]), &(inteval->stack[((hsi*952875+13475141)*1+lsi)*1]), &(inteval->stack[((hsi*825825+9237116)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+16079666)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+14428016)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+10062941)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+18439166)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+16079666)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+11478641)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*4290+747470)*1+lsi)*1]), &(inteval->stack[((hsi*3630+751760)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+9248006)*1+lsi)*1]), &(inteval->stack[((hsi*5005+742465)*1+lsi)*1]), &(inteval->stack[((hsi*4290+747470)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+9260876)*1+lsi)*1]), &(inteval->stack[((hsi*12870+9248006)*1+lsi)*1]), &(inteval->stack[((hsi*10890+9237116)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+9282656)*1+lsi)*1]), &(inteval->stack[((hsi*5775+736690)*1+lsi)*1]), &(inteval->stack[((hsi*5005+742465)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+9297671)*1+lsi)*1]), &(inteval->stack[((hsi*15015+9282656)*1+lsi)*1]), &(inteval->stack[((hsi*12870+9248006)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+9323411)*1+lsi)*1]), &(inteval->stack[((hsi*25740+9297671)*1+lsi)*1]), &(inteval->stack[((hsi*21780+9260876)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+9359711)*1+lsi)*1]), &(inteval->stack[((hsi*6600+730090)*1+lsi)*1]), &(inteval->stack[((hsi*5775+736690)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+9377036)*1+lsi)*1]), &(inteval->stack[((hsi*17325+9359711)*1+lsi)*1]), &(inteval->stack[((hsi*15015+9282656)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+9407066)*1+lsi)*1]), &(inteval->stack[((hsi*30030+9377036)*1+lsi)*1]), &(inteval->stack[((hsi*25740+9297671)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+9449966)*1+lsi)*1]), &(inteval->stack[((hsi*42900+9407066)*1+lsi)*1]), &(inteval->stack[((hsi*36300+9323411)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+9504416)*1+lsi)*1]), &(inteval->stack[((hsi*7480+722610)*1+lsi)*1]), &(inteval->stack[((hsi*6600+730090)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+9524216)*1+lsi)*1]), &(inteval->stack[((hsi*19800+9504416)*1+lsi)*1]), &(inteval->stack[((hsi*17325+9359711)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+9558866)*1+lsi)*1]), &(inteval->stack[((hsi*34650+9524216)*1+lsi)*1]), &(inteval->stack[((hsi*30030+9377036)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+9608916)*1+lsi)*1]), &(inteval->stack[((hsi*50050+9558866)*1+lsi)*1]), &(inteval->stack[((hsi*42900+9407066)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+9673266)*1+lsi)*1]), &(inteval->stack[((hsi*64350+9608916)*1+lsi)*1]), &(inteval->stack[((hsi*54450+9449966)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+9749496)*1+lsi)*1]), &(inteval->stack[((hsi*8415+714195)*1+lsi)*1]), &(inteval->stack[((hsi*7480+722610)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+9771936)*1+lsi)*1]), &(inteval->stack[((hsi*22440+9749496)*1+lsi)*1]), &(inteval->stack[((hsi*19800+9504416)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+9811536)*1+lsi)*1]), &(inteval->stack[((hsi*39600+9771936)*1+lsi)*1]), &(inteval->stack[((hsi*34650+9524216)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+9869286)*1+lsi)*1]), &(inteval->stack[((hsi*57750+9811536)*1+lsi)*1]), &(inteval->stack[((hsi*50050+9558866)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+9944361)*1+lsi)*1]), &(inteval->stack[((hsi*75075+9869286)*1+lsi)*1]), &(inteval->stack[((hsi*64350+9608916)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+10034451)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9944361)*1+lsi)*1]), &(inteval->stack[((hsi*76230+9673266)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+10136091)*1+lsi)*1]), &(inteval->stack[((hsi*9405+704790)*1+lsi)*1]), &(inteval->stack[((hsi*8415+714195)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+10161336)*1+lsi)*1]), &(inteval->stack[((hsi*25245+10136091)*1+lsi)*1]), &(inteval->stack[((hsi*22440+9749496)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+10206216)*1+lsi)*1]), &(inteval->stack[((hsi*44880+10161336)*1+lsi)*1]), &(inteval->stack[((hsi*39600+9771936)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+10272216)*1+lsi)*1]), &(inteval->stack[((hsi*66000+10206216)*1+lsi)*1]), &(inteval->stack[((hsi*57750+9811536)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+10358841)*1+lsi)*1]), &(inteval->stack[((hsi*86625+10272216)*1+lsi)*1]), &(inteval->stack[((hsi*75075+9869286)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+10463946)*1+lsi)*1]), &(inteval->stack[((hsi*105105+10358841)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9944361)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*120120+10463946)*1+lsi)*1]), &(inteval->stack[((hsi*101640+10034451)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+10584066)*1+lsi)*1]), &(inteval->stack[((hsi*3630+751760)*1+lsi)*1]), &(inteval->stack[((hsi*3025+755390)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+10593141)*1+lsi)*1]), &(inteval->stack[((hsi*10890+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*9075+10584066)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+10611291)*1+lsi)*1]), &(inteval->stack[((hsi*21780+9260876)*1+lsi)*1]), &(inteval->stack[((hsi*18150+10593141)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+10641541)*1+lsi)*1]), &(inteval->stack[((hsi*36300+9323411)*1+lsi)*1]), &(inteval->stack[((hsi*30250+10611291)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+6640225)*1+lsi)*1]), &(inteval->stack[((hsi*54450+9449966)*1+lsi)*1]), &(inteval->stack[((hsi*45375+10641541)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+10584066)*1+lsi)*1]), &(inteval->stack[((hsi*76230+9673266)*1+lsi)*1]), &(inteval->stack[((hsi*63525+6640225)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+10668766)*1+lsi)*1]), &(inteval->stack[((hsi*101640+10034451)*1+lsi)*1]), &(inteval->stack[((hsi*84700+10584066)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6509545)*1+lsi)*1]), &(inteval->stack[((hsi*108900+10668766)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+10584066)*1+lsi)*1]), &(inteval->stack[((hsi*10450+694340)*1+lsi)*1]), &(inteval->stack[((hsi*9405+704790)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+10612281)*1+lsi)*1]), &(inteval->stack[((hsi*28215+10584066)*1+lsi)*1]), &(inteval->stack[((hsi*25245+10136091)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+10662771)*1+lsi)*1]), &(inteval->stack[((hsi*50490+10612281)*1+lsi)*1]), &(inteval->stack[((hsi*44880+10161336)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+9373241)*1+lsi)*1]), &(inteval->stack[((hsi*74800+10662771)*1+lsi)*1]), &(inteval->stack[((hsi*66000+10206216)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+10584066)*1+lsi)*1]), &(inteval->stack[((hsi*99000+9373241)*1+lsi)*1]), &(inteval->stack[((hsi*86625+10272216)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+9373241)*1+lsi)*1]), &(inteval->stack[((hsi*121275+10584066)*1+lsi)*1]), &(inteval->stack[((hsi*105105+10358841)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+9513381)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9373241)*1+lsi)*1]), &(inteval->stack[((hsi*120120+10463946)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+9667821)*1+lsi)*1]), &(inteval->stack[((hsi*154440+9513381)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6509545)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+9831171)*1+lsi)*1]), &(inteval->stack[((hsi*163350+9667821)*1+lsi)*1]), &(inteval->stack[((hsi*136125+9237116)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+9997546)*1+lsi)*1]), &(inteval->stack[((hsi*199650+5710945)*1+lsi)*1]), &(inteval->stack[((hsi*166375+9831171)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+21433916)*1+lsi)*1]), &(inteval->stack[((hsi*598950+5910595)*1+lsi)*1]), &(inteval->stack[((hsi*499125+9997546)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+9237116)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+8039216)*1+lsi)*1]), &(inteval->stack[((hsi*998250+21433916)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+21433916)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+11478641)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+9237116)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+7809730)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+18439166)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+21433916)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*10608+131376)*1+lsi)*1]), &(inteval->stack[((hsi*8976+141984)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+11330533)*1+lsi)*1]), &(inteval->stack[((hsi*12376+119000)*1+lsi)*1]), &(inteval->stack[((hsi*10608+131376)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+11362357)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11330533)*1+lsi)*1]), &(inteval->stack[((hsi*26928+11303605)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+11416213)*1+lsi)*1]), &(inteval->stack[((hsi*14280+104720)*1+lsi)*1]), &(inteval->stack[((hsi*12376+119000)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11416213)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11330533)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+11453341)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11362357)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+5480563)*1+lsi)*1]), &(inteval->stack[((hsi*16320+88400)*1+lsi)*1]), &(inteval->stack[((hsi*14280+104720)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11543101)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5480563)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11416213)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+5523403)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11543101)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5416915)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+11617357)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5523403)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11453341)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+5629483)*1+lsi)*1]), &(inteval->stack[((hsi*18496+69904)*1+lsi)*1]), &(inteval->stack[((hsi*16320+88400)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+5678443)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5629483)*1+lsi)*1]), &(inteval->stack[((hsi*42840+5480563)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+11751997)*1+lsi)*1]), &(inteval->stack[((hsi*85680+5678443)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11543101)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+5764123)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11751997)*1+lsi)*1]), &(inteval->stack[((hsi*106080+5523403)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+11875757)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5764123)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11617357)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+5923243)*1+lsi)*1]), &(inteval->stack[((hsi*20808+49096)*1+lsi)*1]), &(inteval->stack[((hsi*18496+69904)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+5978731)*1+lsi)*1]), &(inteval->stack[((hsi*55488+5923243)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5629483)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+12064253)*1+lsi)*1]), &(inteval->stack[((hsi*97920+5978731)*1+lsi)*1]), &(inteval->stack[((hsi*85680+5678443)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+6076651)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12064253)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11751997)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+12207053)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6076651)*1+lsi)*1]), &(inteval->stack[((hsi*159120+5764123)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+6262291)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12207053)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11875757)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+12429821)*1+lsi)*1]), &(inteval->stack[((hsi*23256+25840)*1+lsi)*1]), &(inteval->stack[((hsi*20808+49096)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+12492245)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12429821)*1+lsi)*1]), &(inteval->stack[((hsi*55488+5923243)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+6513619)*1+lsi)*1]), &(inteval->stack[((hsi*110976+12492245)*1+lsi)*1]), &(inteval->stack[((hsi*97920+5978731)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+12603221)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6513619)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12064253)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+6676819)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12603221)*1+lsi)*1]), &(inteval->stack[((hsi*185640+6076651)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*259896+6676819)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12207053)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+12817421)*1+lsi)*1]), &(inteval->stack[((hsi*297024+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*251328+6262291)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+158440)*1+lsi)*1]), &(inteval->stack[((hsi*8976+141984)*1+lsi)*1]), &(inteval->stack[((hsi*7480+150960)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+180880)*1+lsi)*1]), &(inteval->stack[((hsi*26928+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*22440+158440)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+5713939)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11362357)*1+lsi)*1]), &(inteval->stack[((hsi*44880+180880)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+49096)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11453341)*1+lsi)*1]), &(inteval->stack[((hsi*74800+5713939)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+161296)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11617357)*1+lsi)*1]), &(inteval->stack[((hsi*112200+49096)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11875757)*1+lsi)*1]), &(inteval->stack[((hsi*157080+161296)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+11513045)*1+lsi)*1]), &(inteval->stack[((hsi*251328+6262291)*1+lsi)*1]), &(inteval->stack[((hsi*209440+11303605)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+5713939)*1+lsi)*1]), &(inteval->stack[((hsi*323136+12817421)*1+lsi)*1]), &(inteval->stack[((hsi*269280+11513045)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*25840+0)*1+lsi)*1]), &(inteval->stack[((hsi*23256+25840)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+11373373)*1+lsi)*1]), &(inteval->stack[((hsi*69768+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12429821)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+11498221)*1+lsi)*1]), &(inteval->stack[((hsi*124848+11373373)*1+lsi)*1]), &(inteval->stack[((hsi*110976+12492245)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+11683181)*1+lsi)*1]), &(inteval->stack[((hsi*184960+11498221)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6513619)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+0)*1+lsi)*1]), &(inteval->stack[((hsi*244800+11683181)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12603221)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*299880+0)*1+lsi)*1]), &(inteval->stack[((hsi*259896+6676819)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+6050539)*1+lsi)*1]), &(inteval->stack[((hsi*346528+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*297024+5416915)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*381888+6050539)*1+lsi)*1]), &(inteval->stack[((hsi*323136+12817421)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+11707525)*1+lsi)*1]), &(inteval->stack[((hsi*403920+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*336600+5713939)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*411400+11707525)*1+lsi)*1]), &(inteval->stack[((hsi*363000+7446730)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+5416915)*1+lsi)*1]), &(inteval->stack[((hsi*952875+13475141)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+21433916)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+14428016)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+21433916)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+16079666)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+21433916)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+11303605)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+18439166)*1+lsi)*1]),3025);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*4658500+758415)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+21433916)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+7809730)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4658500+758415)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
