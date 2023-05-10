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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,190400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*5148+140492)*1+lsi)*1]), &(inteval->stack[((hsi*4290+145640)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1034870)*1+lsi)*1]), &(inteval->stack[((hsi*6084+134408)*1+lsi)*1]), &(inteval->stack[((hsi*5148+140492)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1050314)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1034870)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1022000)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1076054)*1+lsi)*1]), &(inteval->stack[((hsi*7098+127310)*1+lsi)*1]), &(inteval->stack[((hsi*6084+134408)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1094306)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1076054)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1034870)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1125194)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1094306)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1050314)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1168094)*1+lsi)*1]), &(inteval->stack[((hsi*8190+119120)*1+lsi)*1]), &(inteval->stack[((hsi*7098+127310)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1189388)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1168094)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1076054)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1225892)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1189388)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1094306)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1277372)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1225892)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1125194)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+1076054)*1+lsi)*1]), &(inteval->stack[((hsi*4290+145640)*1+lsi)*1]), &(inteval->stack[((hsi*3510+149930)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+1086584)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*10530+1076054)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+1341722)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1050314)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1086584)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1125194)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1341722)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+1074650)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1277372)*1+lsi)*1]), &(inteval->stack[((hsi*52650+1022000)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*9360+109760)*1+lsi)*1]), &(inteval->stack[((hsi*8190+119120)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+109760)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1168094)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1341722)*1+lsi)*1]), &(inteval->stack[((hsi*42588+109760)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1189388)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1148360)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1341722)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1225892)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+1341722)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1148360)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1277372)*1+lsi)*1]),78);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*98280+1148360)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1341722)*1+lsi)*1]), &(inteval->stack[((hsi*73710+1074650)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*6006+94654)*1+lsi)*1]), &(inteval->stack[((hsi*5005+100660)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1037015)*1+lsi)*1]), &(inteval->stack[((hsi*7098+87556)*1+lsi)*1]), &(inteval->stack[((hsi*6006+94654)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1055033)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1037015)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1022000)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1085063)*1+lsi)*1]), &(inteval->stack[((hsi*8281+79275)*1+lsi)*1]), &(inteval->stack[((hsi*7098+87556)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+109760)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1085063)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1037015)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1246640)*1+lsi)*1]), &(inteval->stack[((hsi*36036+109760)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1055033)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1106357)*1+lsi)*1]), &(inteval->stack[((hsi*9555+69720)*1+lsi)*1]), &(inteval->stack[((hsi*8281+79275)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1296690)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1106357)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1085063)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1339278)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1296690)*1+lsi)*1]), &(inteval->stack[((hsi*36036+109760)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1399338)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1339278)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1246640)*1+lsi)*1]),91);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+109760)*1+lsi)*1]), &(inteval->stack[((hsi*5005+100660)*1+lsi)*1]), &(inteval->stack[((hsi*4095+105665)*1+lsi)*1]),91);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+122045)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*12285+109760)*1+lsi)*1]),91);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+79275)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1055033)*1+lsi)*1]), &(inteval->stack[((hsi*24570+122045)*1+lsi)*1]),91);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1246640)*1+lsi)*1]), &(inteval->stack[((hsi*40950+79275)*1+lsi)*1]),91);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+1474413)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1399338)*1+lsi)*1]), &(inteval->stack[((hsi*61425+1022000)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*10920+58800)*1+lsi)*1]), &(inteval->stack[((hsi*9555+69720)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+58800)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1106357)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*49686+58800)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1296690)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+58800)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1339278)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+1246640)*1+lsi)*1]), &(inteval->stack[((hsi*90090+58800)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1399338)*1+lsi)*1]),91);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*114660+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*105105+1246640)*1+lsi)*1]), &(inteval->stack[((hsi*85995+1474413)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*294840+1246640)*1+lsi)*1]), &(inteval->stack[((hsi*114660+1022000)*1+lsi)*1]), &(inteval->stack[((hsi*98280+1148360)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+58800)*1+lsi)*1]), &(inteval->stack[((hsi*4356+179444)*1+lsi)*1]), &(inteval->stack[((hsi*3630+183800)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+69690)*1+lsi)*1]), &(inteval->stack[((hsi*5148+174296)*1+lsi)*1]), &(inteval->stack[((hsi*4356+179444)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+82758)*1+lsi)*1]), &(inteval->stack[((hsi*13068+69690)*1+lsi)*1]), &(inteval->stack[((hsi*10890+58800)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+104538)*1+lsi)*1]), &(inteval->stack[((hsi*6006+168290)*1+lsi)*1]), &(inteval->stack[((hsi*5148+174296)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+119982)*1+lsi)*1]), &(inteval->stack[((hsi*15444+104538)*1+lsi)*1]), &(inteval->stack[((hsi*13068+69690)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*26136+119982)*1+lsi)*1]), &(inteval->stack[((hsi*21780+82758)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1577780)*1+lsi)*1]), &(inteval->stack[((hsi*6930+161360)*1+lsi)*1]), &(inteval->stack[((hsi*6006+168290)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1595798)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1577780)*1+lsi)*1]), &(inteval->stack[((hsi*15444+104538)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1626686)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1595798)*1+lsi)*1]), &(inteval->stack[((hsi*26136+119982)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1670246)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1626686)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1541480)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+104538)*1+lsi)*1]), &(inteval->stack[((hsi*3630+183800)*1+lsi)*1]), &(inteval->stack[((hsi*2970+187430)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+113448)*1+lsi)*1]), &(inteval->stack[((hsi*10890+58800)*1+lsi)*1]), &(inteval->stack[((hsi*8910+104538)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+1724696)*1+lsi)*1]), &(inteval->stack[((hsi*21780+82758)*1+lsi)*1]), &(inteval->stack[((hsi*17820+113448)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+58800)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1724696)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+1724696)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1670246)*1+lsi)*1]), &(inteval->stack[((hsi*44550+58800)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+58800)*1+lsi)*1]), &(inteval->stack[((hsi*7920+153440)*1+lsi)*1]), &(inteval->stack[((hsi*6930+161360)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+79590)*1+lsi)*1]), &(inteval->stack[((hsi*20790+58800)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1577780)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+115626)*1+lsi)*1]), &(inteval->stack[((hsi*36036+79590)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1595798)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*51480+115626)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1626686)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+58800)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1670246)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*76230+58800)*1+lsi)*1]), &(inteval->stack[((hsi*62370+1724696)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*249480+1624640)*1+lsi)*1]), &(inteval->stack[((hsi*98280+1148360)*1+lsi)*1]), &(inteval->stack[((hsi*83160+1541480)*1+lsi)*1]),1260);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*498960+1874120)*1+lsi)*1]), &(inteval->stack[((hsi*294840+1246640)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1624640)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*6930+41370)*1+lsi)*1]), &(inteval->stack[((hsi*5775+48300)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1558805)*1+lsi)*1]), &(inteval->stack[((hsi*8190+33180)*1+lsi)*1]), &(inteval->stack[((hsi*6930+41370)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+1579595)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1558805)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1541480)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1614245)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23625)*1+lsi)*1]), &(inteval->stack[((hsi*8190+33180)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1638815)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1614245)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1558805)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+1680395)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1638815)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1579595)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1738145)*1+lsi)*1]), &(inteval->stack[((hsi*11025+12600)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23625)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+58800)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1738145)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1614245)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1136660)*1+lsi)*1]), &(inteval->stack[((hsi*49140+58800)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1638815)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+1766810)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1136660)*1+lsi)*1]), &(inteval->stack[((hsi*57750+1680395)*1+lsi)*1]),105);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+107940)*1+lsi)*1]), &(inteval->stack[((hsi*5775+48300)*1+lsi)*1]), &(inteval->stack[((hsi*4725+54075)*1+lsi)*1]),105);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*28350+122115)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*14175+107940)*1+lsi)*1]),105);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*47250+1614245)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1579595)*1+lsi)*1]), &(inteval->stack[((hsi*28350+122115)*1+lsi)*1]),105);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*70875+107940)*1+lsi)*1]), &(inteval->stack[((hsi*57750+1680395)*1+lsi)*1]), &(inteval->stack[((hsi*47250+1614245)*1+lsi)*1]),105);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*99225+1541480)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1766810)*1+lsi)*1]), &(inteval->stack[((hsi*70875+107940)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1640705)*1+lsi)*1]), &(inteval->stack[((hsi*12600+0)*1+lsi)*1]), &(inteval->stack[((hsi*11025+12600)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+107940)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1640705)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1738145)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+1640705)*1+lsi)*1]), &(inteval->stack[((hsi*57330+107940)*1+lsi)*1]), &(inteval->stack[((hsi*49140+58800)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+0)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1640705)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1136660)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+1640705)*1+lsi)*1]), &(inteval->stack[((hsi*103950+0)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1766810)*1+lsi)*1]),105);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*132300+0)*1+lsi)*1]), &(inteval->stack[((hsi*121275+1640705)*1+lsi)*1]), &(inteval->stack[((hsi*99225+1541480)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*343980+2373080)*1+lsi)*1]), &(inteval->stack[((hsi*132300+0)*1+lsi)*1]), &(inteval->stack[((hsi*114660+1022000)*1+lsi)*1]),1260);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*589680+2717060)*1+lsi)*1]), &(inteval->stack[((hsi*343980+2373080)*1+lsi)*1]), &(inteval->stack[((hsi*294840+1246640)*1+lsi)*1]),1260);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*831600+190400)*1+lsi)*1]), &(inteval->stack[((hsi*589680+2717060)*1+lsi)*1]), &(inteval->stack[((hsi*498960+1874120)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*831600+190400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
