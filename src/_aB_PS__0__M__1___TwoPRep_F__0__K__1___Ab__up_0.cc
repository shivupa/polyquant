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
#include <_aB_PS__0__M__1___TwoPRep_F__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_F__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,273360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_F__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*6084+204774)*1+lsi)*1]), &(inteval->stack[((hsi*5148+210858)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1595604)*1+lsi)*1]), &(inteval->stack[((hsi*7098+197676)*1+lsi)*1]), &(inteval->stack[((hsi*6084+204774)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1613856)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1595604)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1580160)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1644744)*1+lsi)*1]), &(inteval->stack[((hsi*8190+189486)*1+lsi)*1]), &(inteval->stack[((hsi*7098+197676)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1666038)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1644744)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1595604)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1702542)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1666038)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1613856)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1754022)*1+lsi)*1]), &(inteval->stack[((hsi*9360+180126)*1+lsi)*1]), &(inteval->stack[((hsi*8190+189486)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1778592)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1754022)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1644744)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1821180)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1778592)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1666038)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1882020)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1821180)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1702542)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1644744)*1+lsi)*1]), &(inteval->stack[((hsi*10608+169518)*1+lsi)*1]), &(inteval->stack[((hsi*9360+180126)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1959240)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1644744)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1754022)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+2008380)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1959240)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1778592)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+2079360)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2008380)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1821180)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1754022)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2079360)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1882020)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+180126)*1+lsi)*1]), &(inteval->stack[((hsi*5148+210858)*1+lsi)*1]), &(inteval->stack[((hsi*4290+216006)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1672824)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*12870+180126)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+2170620)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1613856)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1672824)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1702542)*1+lsi)*1]), &(inteval->stack[((hsi*42900+2170620)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+2170620)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1882020)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1580160)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+2260710)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1754022)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2170620)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1862130)*1+lsi)*1]), &(inteval->stack[((hsi*11934+157584)*1+lsi)*1]), &(inteval->stack[((hsi*10608+169518)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+2170620)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1862130)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1644744)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*56160+2170620)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1959240)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+1862130)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2008380)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*106470+1862130)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2079360)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+1862130)*1+lsi)*1]), &(inteval->stack[((hsi*127764+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1754022)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*144144+1862130)*1+lsi)*1]), &(inteval->stack[((hsi*120120+2260710)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+157584)*1+lsi)*1]), &(inteval->stack[((hsi*7098+139475)*1+lsi)*1]), &(inteval->stack[((hsi*6006+146573)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+175602)*1+lsi)*1]), &(inteval->stack[((hsi*8281+131194)*1+lsi)*1]), &(inteval->stack[((hsi*7098+139475)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1734600)*1+lsi)*1]), &(inteval->stack[((hsi*21294+175602)*1+lsi)*1]), &(inteval->stack[((hsi*18018+157584)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1770636)*1+lsi)*1]), &(inteval->stack[((hsi*9555+121639)*1+lsi)*1]), &(inteval->stack[((hsi*8281+131194)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1795479)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1770636)*1+lsi)*1]), &(inteval->stack[((hsi*21294+175602)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1838067)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1795479)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1734600)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+175602)*1+lsi)*1]), &(inteval->stack[((hsi*10920+110719)*1+lsi)*1]), &(inteval->stack[((hsi*9555+121639)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1898127)*1+lsi)*1]), &(inteval->stack[((hsi*28665+175602)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1770636)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1947813)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1898127)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1795479)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+2018793)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1947813)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1838067)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1770636)*1+lsi)*1]), &(inteval->stack[((hsi*12376+98343)*1+lsi)*1]), &(inteval->stack[((hsi*10920+110719)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+2108883)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1770636)*1+lsi)*1]), &(inteval->stack[((hsi*28665+175602)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+2166213)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2108883)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1898127)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+2249023)*1+lsi)*1]), &(inteval->stack[((hsi*82810+2166213)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1947813)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+2355493)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2249023)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2018793)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1898127)*1+lsi)*1]), &(inteval->stack[((hsi*6006+146573)*1+lsi)*1]), &(inteval->stack[((hsi*5005+152579)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1913142)*1+lsi)*1]), &(inteval->stack[((hsi*18018+157584)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1898127)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+110719)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1734600)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1913142)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1898127)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1838067)*1+lsi)*1]), &(inteval->stack[((hsi*50050+110719)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+110719)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2018793)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1898127)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+1803396)*1+lsi)*1]), &(inteval->stack[((hsi*126126+2355493)*1+lsi)*1]), &(inteval->stack[((hsi*105105+110719)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1943536)*1+lsi)*1]), &(inteval->stack[((hsi*13923+84420)*1+lsi)*1]), &(inteval->stack[((hsi*12376+98343)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+84420)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1943536)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1770636)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+1943536)*1+lsi)*1]), &(inteval->stack[((hsi*65520+84420)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2108883)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+84420)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1943536)*1+lsi)*1]), &(inteval->stack[((hsi*82810+2166213)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+1943536)*1+lsi)*1]), &(inteval->stack[((hsi*124215+84420)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2249023)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+2092594)*1+lsi)*1]), &(inteval->stack[((hsi*149058+1943536)*1+lsi)*1]), &(inteval->stack[((hsi*126126+2355493)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+2260762)*1+lsi)*1]), &(inteval->stack[((hsi*168168+2092594)*1+lsi)*1]), &(inteval->stack[((hsi*140140+1803396)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*463320+1734600)*1+lsi)*1]), &(inteval->stack[((hsi*180180+2260762)*1+lsi)*1]), &(inteval->stack[((hsi*154440+1580160)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+84420)*1+lsi)*1]), &(inteval->stack[((hsi*5148+260226)*1+lsi)*1]), &(inteval->stack[((hsi*4356+265374)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+97488)*1+lsi)*1]), &(inteval->stack[((hsi*6006+254220)*1+lsi)*1]), &(inteval->stack[((hsi*5148+260226)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+112932)*1+lsi)*1]), &(inteval->stack[((hsi*15444+97488)*1+lsi)*1]), &(inteval->stack[((hsi*13068+84420)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+139068)*1+lsi)*1]), &(inteval->stack[((hsi*6930+247290)*1+lsi)*1]), &(inteval->stack[((hsi*6006+254220)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+157086)*1+lsi)*1]), &(inteval->stack[((hsi*18018+139068)*1+lsi)*1]), &(inteval->stack[((hsi*15444+97488)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+2197920)*1+lsi)*1]), &(inteval->stack[((hsi*30888+157086)*1+lsi)*1]), &(inteval->stack[((hsi*26136+112932)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+187974)*1+lsi)*1]), &(inteval->stack[((hsi*7920+239370)*1+lsi)*1]), &(inteval->stack[((hsi*6930+247290)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*20790+187974)*1+lsi)*1]), &(inteval->stack[((hsi*18018+139068)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+2476978)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*30888+157086)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+2528458)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2476978)*1+lsi)*1]), &(inteval->stack[((hsi*43560+2197920)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+139068)*1+lsi)*1]), &(inteval->stack[((hsi*8976+230394)*1+lsi)*1]), &(inteval->stack[((hsi*7920+239370)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+2593798)*1+lsi)*1]), &(inteval->stack[((hsi*23760+139068)*1+lsi)*1]), &(inteval->stack[((hsi*20790+187974)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+2635378)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2593798)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2440942)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+2695438)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2635378)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2476978)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+2772658)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2695438)*1+lsi)*1]), &(inteval->stack[((hsi*65340+2528458)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*4356+265374)*1+lsi)*1]), &(inteval->stack[((hsi*3630+269730)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+2451832)*1+lsi)*1]), &(inteval->stack[((hsi*13068+84420)*1+lsi)*1]), &(inteval->stack[((hsi*10890+2440942)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+162828)*1+lsi)*1]), &(inteval->stack[((hsi*26136+112932)*1+lsi)*1]), &(inteval->stack[((hsi*21780+2451832)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*43560+2197920)*1+lsi)*1]), &(inteval->stack[((hsi*36300+162828)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+2864134)*1+lsi)*1]), &(inteval->stack[((hsi*65340+2528458)*1+lsi)*1]), &(inteval->stack[((hsi*54450+2440942)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*91476+2772658)*1+lsi)*1]), &(inteval->stack[((hsi*76230+2864134)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+2197920)*1+lsi)*1]), &(inteval->stack[((hsi*10098+220296)*1+lsi)*1]), &(inteval->stack[((hsi*8976+230394)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+162828)*1+lsi)*1]), &(inteval->stack[((hsi*26928+2197920)*1+lsi)*1]), &(inteval->stack[((hsi*23760+139068)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+84420)*1+lsi)*1]), &(inteval->stack[((hsi*47520+162828)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2593798)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+153720)*1+lsi)*1]), &(inteval->stack[((hsi*69300+84420)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2635378)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+2542582)*1+lsi)*1]), &(inteval->stack[((hsi*90090+153720)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2695438)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+2650690)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2542582)*1+lsi)*1]), &(inteval->stack[((hsi*91476+2772658)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+84420)*1+lsi)*1]), &(inteval->stack[((hsi*121968+2650690)*1+lsi)*1]), &(inteval->stack[((hsi*101640+2440942)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*392040+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*154440+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*130680+84420)*1+lsi)*1]),1980);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*784080+2832982)*1+lsi)*1]), &(inteval->stack[((hsi*463320+1734600)*1+lsi)*1]), &(inteval->stack[((hsi*392040+2440942)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*8190+63525)*1+lsi)*1]), &(inteval->stack[((hsi*6930+71715)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+2461732)*1+lsi)*1]), &(inteval->stack[((hsi*9555+53970)*1+lsi)*1]), &(inteval->stack[((hsi*8190+63525)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+2486302)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2461732)*1+lsi)*1]), &(inteval->stack[((hsi*20790+2440942)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+2527882)*1+lsi)*1]), &(inteval->stack[((hsi*11025+42945)*1+lsi)*1]), &(inteval->stack[((hsi*9555+53970)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+2556547)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2527882)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2461732)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+2605687)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2556547)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2486302)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+84420)*1+lsi)*1]), &(inteval->stack[((hsi*12600+30345)*1+lsi)*1]), &(inteval->stack[((hsi*11025+42945)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+2674987)*1+lsi)*1]), &(inteval->stack[((hsi*33075+84420)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2527882)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+117495)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2674987)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2556547)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*81900+117495)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2605687)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+2732317)*1+lsi)*1]), &(inteval->stack[((hsi*14280+16065)*1+lsi)*1]), &(inteval->stack[((hsi*12600+30345)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+2527882)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2732317)*1+lsi)*1]), &(inteval->stack[((hsi*33075+84420)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+3617062)*1+lsi)*1]), &(inteval->stack[((hsi*66150+2527882)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2674987)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+3712612)*1+lsi)*1]), &(inteval->stack[((hsi*95550+3617062)*1+lsi)*1]), &(inteval->stack[((hsi*81900+117495)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+84420)*1+lsi)*1]), &(inteval->stack[((hsi*122850+3712612)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1580160)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+2770117)*1+lsi)*1]), &(inteval->stack[((hsi*6930+71715)*1+lsi)*1]), &(inteval->stack[((hsi*5775+78645)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+2197920)*1+lsi)*1]), &(inteval->stack[((hsi*20790+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*17325+2770117)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+2770117)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2486302)*1+lsi)*1]), &(inteval->stack[((hsi*34650+2197920)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2605687)*1+lsi)*1]), &(inteval->stack[((hsi*57750+2770117)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+2594032)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*86625+2440942)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+3835462)*1+lsi)*1]), &(inteval->stack[((hsi*145530+84420)*1+lsi)*1]), &(inteval->stack[((hsi*121275+2594032)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*16065+0)*1+lsi)*1]), &(inteval->stack[((hsi*14280+16065)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+2594032)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1580160)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2732317)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+2669632)*1+lsi)*1]), &(inteval->stack[((hsi*75600+2594032)*1+lsi)*1]), &(inteval->stack[((hsi*66150+2527882)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*110250+2669632)*1+lsi)*1]), &(inteval->stack[((hsi*95550+3617062)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+2584267)*1+lsi)*1]), &(inteval->stack[((hsi*143325+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*122850+3712612)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+3617062)*1+lsi)*1]), &(inteval->stack[((hsi*171990+2584267)*1+lsi)*1]), &(inteval->stack[((hsi*145530+84420)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*194040+3617062)*1+lsi)*1]), &(inteval->stack[((hsi*161700+3835462)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*540540+3617062)*1+lsi)*1]), &(inteval->stack[((hsi*207900+2440942)*1+lsi)*1]), &(inteval->stack[((hsi*180180+2260762)*1+lsi)*1]),1980);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*926640+4157602)*1+lsi)*1]), &(inteval->stack[((hsi*540540+3617062)*1+lsi)*1]), &(inteval->stack[((hsi*463320+1734600)*1+lsi)*1]),1980);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1306800+273360)*1+lsi)*1]), &(inteval->stack[((hsi*926640+4157602)*1+lsi)*1]), &(inteval->stack[((hsi*784080+2832982)*1+lsi)*1]),1980);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1306800+273360)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
