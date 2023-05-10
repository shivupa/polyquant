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
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_L__0__M__1___TwoPRep_F__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_F__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,196176)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_F__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*4290+149051)*1+lsi)*1]), &(inteval->stack[((hsi*3630+153341)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+1098066)*1+lsi)*1]), &(inteval->stack[((hsi*5005+144046)*1+lsi)*1]), &(inteval->stack[((hsi*4290+149051)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+1110936)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1098066)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1087176)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+1132716)*1+lsi)*1]), &(inteval->stack[((hsi*5775+138271)*1+lsi)*1]), &(inteval->stack[((hsi*5005+144046)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+1147731)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1132716)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1098066)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1173471)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1147731)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1110936)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+1209771)*1+lsi)*1]), &(inteval->stack[((hsi*6600+131671)*1+lsi)*1]), &(inteval->stack[((hsi*5775+138271)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+1227096)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1209771)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1132716)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+1257126)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1227096)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1147731)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+1300026)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1257126)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1173471)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+1132716)*1+lsi)*1]), &(inteval->stack[((hsi*7480+124191)*1+lsi)*1]), &(inteval->stack[((hsi*6600+131671)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+1354476)*1+lsi)*1]), &(inteval->stack[((hsi*19800+1132716)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1209771)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+1389126)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1354476)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1227096)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+1439176)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1389126)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1257126)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+1209771)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1439176)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1300026)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+131671)*1+lsi)*1]), &(inteval->stack[((hsi*3630+153341)*1+lsi)*1]), &(inteval->stack[((hsi*3025+156971)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+1152516)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*9075+131671)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+1503526)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1110936)*1+lsi)*1]), &(inteval->stack[((hsi*18150+1152516)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1173471)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1503526)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+1503526)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1300026)*1+lsi)*1]), &(inteval->stack[((hsi*45375+1087176)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+1567051)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1209771)*1+lsi)*1]), &(inteval->stack[((hsi*63525+1503526)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+1286001)*1+lsi)*1]), &(inteval->stack[((hsi*8415+115776)*1+lsi)*1]), &(inteval->stack[((hsi*7480+124191)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+1503526)*1+lsi)*1]), &(inteval->stack[((hsi*22440+1286001)*1+lsi)*1]), &(inteval->stack[((hsi*19800+1132716)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*39600+1503526)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1354476)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+1286001)*1+lsi)*1]), &(inteval->stack[((hsi*57750+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1389126)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1286001)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1439176)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+1286001)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1209771)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*101640+1286001)*1+lsi)*1]), &(inteval->stack[((hsi*84700+1567051)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+115776)*1+lsi)*1]), &(inteval->stack[((hsi*5148+102642)*1+lsi)*1]), &(inteval->stack[((hsi*4356+107790)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+128844)*1+lsi)*1]), &(inteval->stack[((hsi*6006+96636)*1+lsi)*1]), &(inteval->stack[((hsi*5148+102642)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1196076)*1+lsi)*1]), &(inteval->stack[((hsi*15444+128844)*1+lsi)*1]), &(inteval->stack[((hsi*13068+115776)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1222212)*1+lsi)*1]), &(inteval->stack[((hsi*6930+89706)*1+lsi)*1]), &(inteval->stack[((hsi*6006+96636)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1240230)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1222212)*1+lsi)*1]), &(inteval->stack[((hsi*15444+128844)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1271118)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1240230)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1196076)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+128844)*1+lsi)*1]), &(inteval->stack[((hsi*7920+81786)*1+lsi)*1]), &(inteval->stack[((hsi*6930+89706)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1314678)*1+lsi)*1]), &(inteval->stack[((hsi*20790+128844)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1222212)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1350714)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1314678)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1240230)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1402194)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1350714)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1271118)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1222212)*1+lsi)*1]), &(inteval->stack[((hsi*8976+72810)*1+lsi)*1]), &(inteval->stack[((hsi*7920+81786)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+1467534)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1222212)*1+lsi)*1]), &(inteval->stack[((hsi*20790+128844)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+1509114)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1467534)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1314678)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+1569174)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1509114)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1350714)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1646394)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1569174)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1402194)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+1314678)*1+lsi)*1]), &(inteval->stack[((hsi*4356+107790)*1+lsi)*1]), &(inteval->stack[((hsi*3630+112146)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+1325568)*1+lsi)*1]), &(inteval->stack[((hsi*13068+115776)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1314678)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+81786)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1196076)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1325568)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1314678)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1271118)*1+lsi)*1]), &(inteval->stack[((hsi*36300+81786)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+81786)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1402194)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1314678)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+1245972)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1646394)*1+lsi)*1]), &(inteval->stack[((hsi*76230+81786)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+1347612)*1+lsi)*1]), &(inteval->stack[((hsi*10098+62712)*1+lsi)*1]), &(inteval->stack[((hsi*8976+72810)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+62712)*1+lsi)*1]), &(inteval->stack[((hsi*26928+1347612)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1222212)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+1347612)*1+lsi)*1]), &(inteval->stack[((hsi*47520+62712)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1467534)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+62712)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1347612)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1509114)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+1347612)*1+lsi)*1]), &(inteval->stack[((hsi*90090+62712)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1569174)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+1455720)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1347612)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1646394)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+1577688)*1+lsi)*1]), &(inteval->stack[((hsi*121968+1455720)*1+lsi)*1]), &(inteval->stack[((hsi*101640+1245972)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*326700+1196076)*1+lsi)*1]), &(inteval->stack[((hsi*130680+1577688)*1+lsi)*1]), &(inteval->stack[((hsi*108900+1087176)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+62712)*1+lsi)*1]), &(inteval->stack[((hsi*3510+187221)*1+lsi)*1]), &(inteval->stack[((hsi*2970+190731)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+71622)*1+lsi)*1]), &(inteval->stack[((hsi*4095+183126)*1+lsi)*1]), &(inteval->stack[((hsi*3510+187221)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+82152)*1+lsi)*1]), &(inteval->stack[((hsi*10530+71622)*1+lsi)*1]), &(inteval->stack[((hsi*8910+62712)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+99972)*1+lsi)*1]), &(inteval->stack[((hsi*4725+178401)*1+lsi)*1]), &(inteval->stack[((hsi*4095+183126)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+1522776)*1+lsi)*1]), &(inteval->stack[((hsi*12285+99972)*1+lsi)*1]), &(inteval->stack[((hsi*10530+71622)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+112257)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1522776)*1+lsi)*1]), &(inteval->stack[((hsi*17820+82152)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+1543836)*1+lsi)*1]), &(inteval->stack[((hsi*5400+173001)*1+lsi)*1]), &(inteval->stack[((hsi*4725+178401)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*14175+1543836)*1+lsi)*1]), &(inteval->stack[((hsi*12285+99972)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+1732938)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1522776)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+1768038)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1732938)*1+lsi)*1]), &(inteval->stack[((hsi*29700+112257)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+1522776)*1+lsi)*1]), &(inteval->stack[((hsi*6120+166881)*1+lsi)*1]), &(inteval->stack[((hsi*5400+173001)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+1812588)*1+lsi)*1]), &(inteval->stack[((hsi*16200+1522776)*1+lsi)*1]), &(inteval->stack[((hsi*14175+1543836)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+1840938)*1+lsi)*1]), &(inteval->stack[((hsi*28350+1812588)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1708368)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+1881888)*1+lsi)*1]), &(inteval->stack[((hsi*40950+1840938)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1732938)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+1934538)*1+lsi)*1]), &(inteval->stack[((hsi*52650+1881888)*1+lsi)*1]), &(inteval->stack[((hsi*44550+1768038)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*2970+190731)*1+lsi)*1]), &(inteval->stack[((hsi*2475+193701)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+1715793)*1+lsi)*1]), &(inteval->stack[((hsi*8910+62712)*1+lsi)*1]), &(inteval->stack[((hsi*7425+1708368)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+1538976)*1+lsi)*1]), &(inteval->stack[((hsi*17820+82152)*1+lsi)*1]), &(inteval->stack[((hsi*14850+1715793)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*29700+112257)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1538976)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+62712)*1+lsi)*1]), &(inteval->stack[((hsi*44550+1768038)*1+lsi)*1]), &(inteval->stack[((hsi*37125+1708368)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*62370+1934538)*1+lsi)*1]), &(inteval->stack[((hsi*51975+62712)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+62712)*1+lsi)*1]), &(inteval->stack[((hsi*6885+159996)*1+lsi)*1]), &(inteval->stack[((hsi*6120+166881)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+81072)*1+lsi)*1]), &(inteval->stack[((hsi*18360+62712)*1+lsi)*1]), &(inteval->stack[((hsi*16200+1522776)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+113472)*1+lsi)*1]), &(inteval->stack[((hsi*32400+81072)*1+lsi)*1]), &(inteval->stack[((hsi*28350+1812588)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+1777668)*1+lsi)*1]), &(inteval->stack[((hsi*47250+113472)*1+lsi)*1]), &(inteval->stack[((hsi*40950+1840938)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+62712)*1+lsi)*1]), &(inteval->stack[((hsi*61425+1777668)*1+lsi)*1]), &(inteval->stack[((hsi*52650+1881888)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+1777668)*1+lsi)*1]), &(inteval->stack[((hsi*73710+62712)*1+lsi)*1]), &(inteval->stack[((hsi*62370+1934538)*1+lsi)*1]),45);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*89100+62712)*1+lsi)*1]), &(inteval->stack[((hsi*83160+1777668)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1708368)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*267300+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*108900+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*89100+62712)*1+lsi)*1]),1980);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*534600+1975668)*1+lsi)*1]), &(inteval->stack[((hsi*326700+1196076)*1+lsi)*1]), &(inteval->stack[((hsi*267300+1708368)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*6084+47190)*1+lsi)*1]), &(inteval->stack[((hsi*5148+53274)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1723812)*1+lsi)*1]), &(inteval->stack[((hsi*7098+40092)*1+lsi)*1]), &(inteval->stack[((hsi*6084+47190)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1742064)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1723812)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1708368)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1772952)*1+lsi)*1]), &(inteval->stack[((hsi*8190+31902)*1+lsi)*1]), &(inteval->stack[((hsi*7098+40092)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1794246)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1772952)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1723812)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1830750)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1794246)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1742064)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+62712)*1+lsi)*1]), &(inteval->stack[((hsi*9360+22542)*1+lsi)*1]), &(inteval->stack[((hsi*8190+31902)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*24570+62712)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1772952)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+87282)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1794246)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1882230)*1+lsi)*1]), &(inteval->stack[((hsi*60840+87282)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1830750)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1129764)*1+lsi)*1]), &(inteval->stack[((hsi*10608+11934)*1+lsi)*1]), &(inteval->stack[((hsi*9360+22542)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1772952)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1129764)*1+lsi)*1]), &(inteval->stack[((hsi*24570+62712)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+2510268)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1772952)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1087176)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+2581248)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2510268)*1+lsi)*1]), &(inteval->stack[((hsi*60840+87282)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+62712)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2581248)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1882230)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1522776)*1+lsi)*1]), &(inteval->stack[((hsi*5148+53274)*1+lsi)*1]), &(inteval->stack[((hsi*4290+58422)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1522776)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1522776)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1742064)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1087176)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1830750)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1522776)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+2672508)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1882230)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1708368)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+1822092)*1+lsi)*1]), &(inteval->stack[((hsi*108108+62712)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2672508)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*11934+0)*1+lsi)*1]), &(inteval->stack[((hsi*10608+11934)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+0)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1129764)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*56160+0)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1772952)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1087176)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2510268)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+2672508)*1+lsi)*1]), &(inteval->stack[((hsi*106470+1708368)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2581248)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+2510268)*1+lsi)*1]), &(inteval->stack[((hsi*127764+2672508)*1+lsi)*1]), &(inteval->stack[((hsi*108108+62712)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+0)*1+lsi)*1]), &(inteval->stack[((hsi*144144+2510268)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1822092)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*392040+2510268)*1+lsi)*1]), &(inteval->stack[((hsi*154440+0)*1+lsi)*1]), &(inteval->stack[((hsi*130680+1577688)*1+lsi)*1]),1980);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*653400+2902308)*1+lsi)*1]), &(inteval->stack[((hsi*392040+2510268)*1+lsi)*1]), &(inteval->stack[((hsi*326700+1196076)*1+lsi)*1]),1980);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*891000+196176)*1+lsi)*1]), &(inteval->stack[((hsi*653400+2902308)*1+lsi)*1]), &(inteval->stack[((hsi*534600+1975668)*1+lsi)*1]),1980);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*891000+196176)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
