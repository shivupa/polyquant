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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_PS__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,221340)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*6084+162852)*1+lsi)*1]), &(inteval->stack[((hsi*5148+168936)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1253184)*1+lsi)*1]), &(inteval->stack[((hsi*7098+155754)*1+lsi)*1]), &(inteval->stack[((hsi*6084+162852)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1271436)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1253184)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1237740)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1302324)*1+lsi)*1]), &(inteval->stack[((hsi*8190+147564)*1+lsi)*1]), &(inteval->stack[((hsi*7098+155754)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1323618)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1302324)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1253184)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1360122)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1323618)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1271436)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1411602)*1+lsi)*1]), &(inteval->stack[((hsi*9360+138204)*1+lsi)*1]), &(inteval->stack[((hsi*8190+147564)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1436172)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1411602)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1302324)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1478760)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1436172)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1323618)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1539600)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1478760)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1360122)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1302324)*1+lsi)*1]), &(inteval->stack[((hsi*5148+168936)*1+lsi)*1]), &(inteval->stack[((hsi*4290+174084)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1315194)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1302324)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1616820)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1271436)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1315194)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1360122)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1616820)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+1302090)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1539600)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1237740)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*10608+127596)*1+lsi)*1]), &(inteval->stack[((hsi*9360+138204)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+127596)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1411602)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1616820)*1+lsi)*1]), &(inteval->stack[((hsi*49140+127596)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1436172)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+1687800)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1616820)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1478760)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1392180)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1687800)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1539600)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+1500288)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1392180)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1302090)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*7098+109487)*1+lsi)*1]), &(inteval->stack[((hsi*6006+116585)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1255758)*1+lsi)*1]), &(inteval->stack[((hsi*8281+101206)*1+lsi)*1]), &(inteval->stack[((hsi*7098+109487)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1277052)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1255758)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1237740)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1313088)*1+lsi)*1]), &(inteval->stack[((hsi*9555+91651)*1+lsi)*1]), &(inteval->stack[((hsi*8281+101206)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1337931)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1313088)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1255758)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1380519)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1337931)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1277052)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1440579)*1+lsi)*1]), &(inteval->stack[((hsi*10920+80731)*1+lsi)*1]), &(inteval->stack[((hsi*9555+91651)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+127596)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1440579)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1313088)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1620408)*1+lsi)*1]), &(inteval->stack[((hsi*49686+127596)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1337931)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1691388)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1620408)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1380519)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1313088)*1+lsi)*1]), &(inteval->stack[((hsi*6006+116585)*1+lsi)*1]), &(inteval->stack[((hsi*5005+122591)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1328103)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1313088)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1781478)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1277052)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1328103)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1380519)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1781478)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+1312815)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1691388)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1237740)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*12376+68355)*1+lsi)*1]), &(inteval->stack[((hsi*10920+80731)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+68355)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1440579)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1781478)*1+lsi)*1]), &(inteval->stack[((hsi*57330+68355)*1+lsi)*1]), &(inteval->stack[((hsi*49686+127596)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+68355)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1781478)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1620408)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1781478)*1+lsi)*1]), &(inteval->stack[((hsi*106470+68355)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1691388)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+1620408)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1781478)*1+lsi)*1]), &(inteval->stack[((hsi*105105+1312815)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*360360+1760548)*1+lsi)*1]), &(inteval->stack[((hsi*140140+1620408)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1500288)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*5148+208206)*1+lsi)*1]), &(inteval->stack[((hsi*4356+213354)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+1250808)*1+lsi)*1]), &(inteval->stack[((hsi*6006+202200)*1+lsi)*1]), &(inteval->stack[((hsi*5148+208206)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1266252)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1250808)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1237740)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1292388)*1+lsi)*1]), &(inteval->stack[((hsi*6930+195270)*1+lsi)*1]), &(inteval->stack[((hsi*6006+202200)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1310406)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1292388)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1250808)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1341294)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1310406)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1266252)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1384854)*1+lsi)*1]), &(inteval->stack[((hsi*7920+187350)*1+lsi)*1]), &(inteval->stack[((hsi*6930+195270)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+68355)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1384854)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1292388)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1405644)*1+lsi)*1]), &(inteval->stack[((hsi*36036+68355)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1310406)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+104391)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1405644)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1341294)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+1292388)*1+lsi)*1]), &(inteval->stack[((hsi*4356+213354)*1+lsi)*1]), &(inteval->stack[((hsi*3630+217710)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+1457124)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1292388)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1292388)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1266252)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1457124)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1341294)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1292388)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+1292190)*1+lsi)*1]), &(inteval->stack[((hsi*65340+104391)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1237740)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*8976+178374)*1+lsi)*1]), &(inteval->stack[((hsi*7920+187350)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+169731)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1384854)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*41580+169731)*1+lsi)*1]), &(inteval->stack[((hsi*36036+68355)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+2180968)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1405644)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1368420)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2180968)*1+lsi)*1]), &(inteval->stack[((hsi*65340+104391)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+68355)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1368420)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1292190)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*304920+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1500288)*1+lsi)*1]), &(inteval->stack[((hsi*101640+68355)*1+lsi)*1]),1540);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*609840+2425828)*1+lsi)*1]), &(inteval->stack[((hsi*360360+1760548)*1+lsi)*1]), &(inteval->stack[((hsi*304920+2120908)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*8190+47460)*1+lsi)*1]), &(inteval->stack[((hsi*6930+55650)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1258530)*1+lsi)*1]), &(inteval->stack[((hsi*9555+37905)*1+lsi)*1]), &(inteval->stack[((hsi*8190+47460)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1283100)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1258530)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1237740)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*11025+26880)*1+lsi)*1]), &(inteval->stack[((hsi*9555+37905)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1324680)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1258530)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+2149573)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1324680)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1283100)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1373820)*1+lsi)*1]), &(inteval->stack[((hsi*12600+14280)*1+lsi)*1]), &(inteval->stack[((hsi*11025+26880)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1406895)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1373820)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2120908)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+2218873)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1406895)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1324680)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1464225)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2218873)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2149573)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+68355)*1+lsi)*1]), &(inteval->stack[((hsi*6930+55650)*1+lsi)*1]), &(inteval->stack[((hsi*5775+62580)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+85680)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*17325+68355)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+2300773)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1283100)*1+lsi)*1]), &(inteval->stack[((hsi*34650+85680)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+26880)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2149573)*1+lsi)*1]), &(inteval->stack[((hsi*57750+2300773)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+1237740)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1464225)*1+lsi)*1]), &(inteval->stack[((hsi*86625+26880)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+26880)*1+lsi)*1]), &(inteval->stack[((hsi*14280+0)*1+lsi)*1]), &(inteval->stack[((hsi*12600+14280)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+64680)*1+lsi)*1]), &(inteval->stack[((hsi*37800+26880)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1373820)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+2300773)*1+lsi)*1]), &(inteval->stack[((hsi*66150+64680)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1406895)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+0)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2300773)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2218873)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*122850+0)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1464225)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+1359015)*1+lsi)*1]), &(inteval->stack[((hsi*145530+2120908)*1+lsi)*1]), &(inteval->stack[((hsi*121275+1237740)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*420420+3035668)*1+lsi)*1]), &(inteval->stack[((hsi*161700+1359015)*1+lsi)*1]), &(inteval->stack[((hsi*140140+1620408)*1+lsi)*1]),1540);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*720720+3456088)*1+lsi)*1]), &(inteval->stack[((hsi*420420+3035668)*1+lsi)*1]), &(inteval->stack[((hsi*360360+1760548)*1+lsi)*1]),1540);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1016400+221340)*1+lsi)*1]), &(inteval->stack[((hsi*720720+3456088)*1+lsi)*1]), &(inteval->stack[((hsi*609840+2425828)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1016400+221340)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
