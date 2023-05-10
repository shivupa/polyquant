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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
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
#include <_aB_M__0__M__1___TwoPRep_F__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_F__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,233160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_F__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*5148+175806)*1+lsi)*1]), &(inteval->stack[((hsi*4356+180954)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+1335228)*1+lsi)*1]), &(inteval->stack[((hsi*6006+169800)*1+lsi)*1]), &(inteval->stack[((hsi*5148+175806)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1350672)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1335228)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1322160)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1376808)*1+lsi)*1]), &(inteval->stack[((hsi*6930+162870)*1+lsi)*1]), &(inteval->stack[((hsi*6006+169800)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1394826)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1376808)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1335228)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1425714)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1394826)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1350672)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1469274)*1+lsi)*1]), &(inteval->stack[((hsi*7920+154950)*1+lsi)*1]), &(inteval->stack[((hsi*6930+162870)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1490064)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1469274)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1376808)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1526100)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1490064)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1394826)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1577580)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1526100)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1425714)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1376808)*1+lsi)*1]), &(inteval->stack[((hsi*8976+145974)*1+lsi)*1]), &(inteval->stack[((hsi*7920+154950)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+1642920)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1376808)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1469274)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+1684500)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1642920)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1490064)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+1744560)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1684500)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1526100)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1469274)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1744560)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1577580)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+154950)*1+lsi)*1]), &(inteval->stack[((hsi*4356+180954)*1+lsi)*1]), &(inteval->stack[((hsi*3630+185310)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+1400568)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*10890+154950)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1821780)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1350672)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1400568)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1425714)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1821780)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+1821780)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1577580)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1322160)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+1898010)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1469274)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1821780)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+1560750)*1+lsi)*1]), &(inteval->stack[((hsi*10098+135876)*1+lsi)*1]), &(inteval->stack[((hsi*8976+145974)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+1821780)*1+lsi)*1]), &(inteval->stack[((hsi*26928+1560750)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1376808)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*47520+1821780)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1642920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+1560750)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1684500)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1560750)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1744560)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+1560750)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1469274)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*121968+1560750)*1+lsi)*1]), &(inteval->stack[((hsi*101640+1898010)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+135876)*1+lsi)*1]), &(inteval->stack[((hsi*6084+120354)*1+lsi)*1]), &(inteval->stack[((hsi*5148+126438)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+151320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+113256)*1+lsi)*1]), &(inteval->stack[((hsi*6084+120354)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1452840)*1+lsi)*1]), &(inteval->stack[((hsi*18252+151320)*1+lsi)*1]), &(inteval->stack[((hsi*15444+135876)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1483728)*1+lsi)*1]), &(inteval->stack[((hsi*8190+105066)*1+lsi)*1]), &(inteval->stack[((hsi*7098+113256)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1505022)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1483728)*1+lsi)*1]), &(inteval->stack[((hsi*18252+151320)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1541526)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1505022)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1452840)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+151320)*1+lsi)*1]), &(inteval->stack[((hsi*9360+95706)*1+lsi)*1]), &(inteval->stack[((hsi*8190+105066)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1593006)*1+lsi)*1]), &(inteval->stack[((hsi*24570+151320)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1483728)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1635594)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1593006)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1505022)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1696434)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1635594)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1541526)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1483728)*1+lsi)*1]), &(inteval->stack[((hsi*10608+85098)*1+lsi)*1]), &(inteval->stack[((hsi*9360+95706)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1773654)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1483728)*1+lsi)*1]), &(inteval->stack[((hsi*24570+151320)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1822794)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1773654)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1593006)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+1893774)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1822794)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1635594)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1985034)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1893774)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1696434)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1593006)*1+lsi)*1]), &(inteval->stack[((hsi*5148+126438)*1+lsi)*1]), &(inteval->stack[((hsi*4290+131586)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1605876)*1+lsi)*1]), &(inteval->stack[((hsi*15444+135876)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1593006)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+95706)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1452840)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1605876)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1593006)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1541526)*1+lsi)*1]), &(inteval->stack[((hsi*42900+95706)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+95706)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1696434)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1593006)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+1511808)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1985034)*1+lsi)*1]), &(inteval->stack[((hsi*90090+95706)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1631928)*1+lsi)*1]), &(inteval->stack[((hsi*11934+73164)*1+lsi)*1]), &(inteval->stack[((hsi*10608+85098)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+73164)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1631928)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1483728)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+1631928)*1+lsi)*1]), &(inteval->stack[((hsi*56160+73164)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1773654)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+73164)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1631928)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1822794)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+1631928)*1+lsi)*1]), &(inteval->stack[((hsi*106470+73164)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1893774)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+1759692)*1+lsi)*1]), &(inteval->stack[((hsi*127764+1631928)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1985034)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+1903836)*1+lsi)*1]), &(inteval->stack[((hsi*144144+1759692)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1511808)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*392040+1452840)*1+lsi)*1]), &(inteval->stack[((hsi*154440+1903836)*1+lsi)*1]), &(inteval->stack[((hsi*130680+1322160)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+73164)*1+lsi)*1]), &(inteval->stack[((hsi*4290+222215)*1+lsi)*1]), &(inteval->stack[((hsi*3630+226505)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+84054)*1+lsi)*1]), &(inteval->stack[((hsi*5005+217210)*1+lsi)*1]), &(inteval->stack[((hsi*4290+222215)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+96924)*1+lsi)*1]), &(inteval->stack[((hsi*12870+84054)*1+lsi)*1]), &(inteval->stack[((hsi*10890+73164)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+118704)*1+lsi)*1]), &(inteval->stack[((hsi*5775+211435)*1+lsi)*1]), &(inteval->stack[((hsi*5005+217210)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+1844880)*1+lsi)*1]), &(inteval->stack[((hsi*15015+118704)*1+lsi)*1]), &(inteval->stack[((hsi*12870+84054)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+133719)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1844880)*1+lsi)*1]), &(inteval->stack[((hsi*21780+96924)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+1870620)*1+lsi)*1]), &(inteval->stack[((hsi*6600+204835)*1+lsi)*1]), &(inteval->stack[((hsi*5775+211435)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1870620)*1+lsi)*1]), &(inteval->stack[((hsi*15015+118704)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+2088306)*1+lsi)*1]), &(inteval->stack[((hsi*30030+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1844880)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+2131206)*1+lsi)*1]), &(inteval->stack[((hsi*42900+2088306)*1+lsi)*1]), &(inteval->stack[((hsi*36300+133719)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+1844880)*1+lsi)*1]), &(inteval->stack[((hsi*7480+197355)*1+lsi)*1]), &(inteval->stack[((hsi*6600+204835)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+2185656)*1+lsi)*1]), &(inteval->stack[((hsi*19800+1844880)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1870620)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+2220306)*1+lsi)*1]), &(inteval->stack[((hsi*34650+2185656)*1+lsi)*1]), &(inteval->stack[((hsi*30030+2058276)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+2270356)*1+lsi)*1]), &(inteval->stack[((hsi*50050+2220306)*1+lsi)*1]), &(inteval->stack[((hsi*42900+2088306)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+2334706)*1+lsi)*1]), &(inteval->stack[((hsi*64350+2270356)*1+lsi)*1]), &(inteval->stack[((hsi*54450+2131206)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*3630+226505)*1+lsi)*1]), &(inteval->stack[((hsi*3025+230135)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+2067351)*1+lsi)*1]), &(inteval->stack[((hsi*10890+73164)*1+lsi)*1]), &(inteval->stack[((hsi*9075+2058276)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+2085501)*1+lsi)*1]), &(inteval->stack[((hsi*21780+96924)*1+lsi)*1]), &(inteval->stack[((hsi*18150+2067351)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+73164)*1+lsi)*1]), &(inteval->stack[((hsi*36300+133719)*1+lsi)*1]), &(inteval->stack[((hsi*30250+2085501)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*54450+2131206)*1+lsi)*1]), &(inteval->stack[((hsi*45375+73164)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+73164)*1+lsi)*1]), &(inteval->stack[((hsi*76230+2334706)*1+lsi)*1]), &(inteval->stack[((hsi*63525+2058276)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*8415+188940)*1+lsi)*1]), &(inteval->stack[((hsi*7480+197355)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+2080716)*1+lsi)*1]), &(inteval->stack[((hsi*22440+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*19800+1844880)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+157864)*1+lsi)*1]), &(inteval->stack[((hsi*39600+2080716)*1+lsi)*1]), &(inteval->stack[((hsi*34650+2185656)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*57750+157864)*1+lsi)*1]), &(inteval->stack[((hsi*50050+2220306)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+2133351)*1+lsi)*1]), &(inteval->stack[((hsi*75075+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*64350+2270356)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+2223441)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2133351)*1+lsi)*1]), &(inteval->stack[((hsi*76230+2334706)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*101640+2223441)*1+lsi)*1]), &(inteval->stack[((hsi*84700+73164)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*326700+2167176)*1+lsi)*1]), &(inteval->stack[((hsi*130680+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*108900+2058276)*1+lsi)*1]),1980);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*653400+2493876)*1+lsi)*1]), &(inteval->stack[((hsi*392040+1452840)*1+lsi)*1]), &(inteval->stack[((hsi*326700+2167176)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*7098+55055)*1+lsi)*1]), &(inteval->stack[((hsi*6006+62153)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+2076294)*1+lsi)*1]), &(inteval->stack[((hsi*8281+46774)*1+lsi)*1]), &(inteval->stack[((hsi*7098+55055)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+2097588)*1+lsi)*1]), &(inteval->stack[((hsi*21294+2076294)*1+lsi)*1]), &(inteval->stack[((hsi*18018+2058276)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+2133624)*1+lsi)*1]), &(inteval->stack[((hsi*9555+37219)*1+lsi)*1]), &(inteval->stack[((hsi*8281+46774)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+2158467)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2133624)*1+lsi)*1]), &(inteval->stack[((hsi*21294+2076294)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+2201055)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2158467)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2097588)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+2261115)*1+lsi)*1]), &(inteval->stack[((hsi*10920+26299)*1+lsi)*1]), &(inteval->stack[((hsi*9555+37219)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+2289780)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2261115)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2133624)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+73164)*1+lsi)*1]), &(inteval->stack[((hsi*49686+2289780)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2158467)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+2339466)*1+lsi)*1]), &(inteval->stack[((hsi*70980+73164)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2201055)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*12376+13923)*1+lsi)*1]), &(inteval->stack[((hsi*10920+26299)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+1354920)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1322160)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2261115)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+144144)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1354920)*1+lsi)*1]), &(inteval->stack[((hsi*49686+2289780)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+3147276)*1+lsi)*1]), &(inteval->stack[((hsi*82810+144144)*1+lsi)*1]), &(inteval->stack[((hsi*70980+73164)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+3253746)*1+lsi)*1]), &(inteval->stack[((hsi*106470+3147276)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2339466)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+2261115)*1+lsi)*1]), &(inteval->stack[((hsi*6006+62153)*1+lsi)*1]), &(inteval->stack[((hsi*5005+68159)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+26299)*1+lsi)*1]), &(inteval->stack[((hsi*18018+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*15015+2261115)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+56329)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2097588)*1+lsi)*1]), &(inteval->stack[((hsi*30030+26299)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2201055)*1+lsi)*1]), &(inteval->stack[((hsi*50050+56329)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+2133351)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2339466)*1+lsi)*1]), &(inteval->stack[((hsi*75075+2058276)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+2238456)*1+lsi)*1]), &(inteval->stack[((hsi*126126+3253746)*1+lsi)*1]), &(inteval->stack[((hsi*105105+2133351)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*13923+0)*1+lsi)*1]), &(inteval->stack[((hsi*12376+13923)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+0)*1+lsi)*1]), &(inteval->stack[((hsi*37128+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1322160)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*65520+0)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1354920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+0)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*82810+144144)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*124215+0)*1+lsi)*1]), &(inteval->stack[((hsi*106470+3147276)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+0)*1+lsi)*1]), &(inteval->stack[((hsi*149058+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*126126+3253746)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*168168+0)*1+lsi)*1]), &(inteval->stack[((hsi*140140+2238456)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*463320+3147276)*1+lsi)*1]), &(inteval->stack[((hsi*180180+2058276)*1+lsi)*1]), &(inteval->stack[((hsi*154440+1903836)*1+lsi)*1]),1980);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*784080+3610596)*1+lsi)*1]), &(inteval->stack[((hsi*463320+3147276)*1+lsi)*1]), &(inteval->stack[((hsi*392040+1452840)*1+lsi)*1]),1980);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1089000+233160)*1+lsi)*1]), &(inteval->stack[((hsi*784080+3610596)*1+lsi)*1]), &(inteval->stack[((hsi*653400+2493876)*1+lsi)*1]),1980);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1089000+233160)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
