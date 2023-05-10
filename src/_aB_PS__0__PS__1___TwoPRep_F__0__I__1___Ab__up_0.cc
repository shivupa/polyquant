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
#include <_aB_PS__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,254660)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*7098+186896)*1+lsi)*1]), &(inteval->stack[((hsi*6084+193994)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1492592)*1+lsi)*1]), &(inteval->stack[((hsi*8190+178706)*1+lsi)*1]), &(inteval->stack[((hsi*7098+186896)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1513886)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1492592)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1474340)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1550390)*1+lsi)*1]), &(inteval->stack[((hsi*9360+169346)*1+lsi)*1]), &(inteval->stack[((hsi*8190+178706)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1574960)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1550390)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1492592)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1617548)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1574960)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1513886)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1678388)*1+lsi)*1]), &(inteval->stack[((hsi*10608+158738)*1+lsi)*1]), &(inteval->stack[((hsi*9360+169346)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1706468)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1678388)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1550390)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1755608)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1706468)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1574960)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+1826588)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1755608)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1617548)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1550390)*1+lsi)*1]), &(inteval->stack[((hsi*6084+193994)*1+lsi)*1]), &(inteval->stack[((hsi*5148+200078)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1565834)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1550390)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1917848)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1513886)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1565834)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1617548)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1917848)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1551560)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1826588)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1474340)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*11934+146804)*1+lsi)*1]), &(inteval->stack[((hsi*10608+158738)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+146804)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1678388)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+1917848)*1+lsi)*1]), &(inteval->stack[((hsi*56160+146804)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1706468)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+1999748)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1917848)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1755608)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+1659668)*1+lsi)*1]), &(inteval->stack[((hsi*106470+1999748)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1826588)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+1787432)*1+lsi)*1]), &(inteval->stack[((hsi*127764+1659668)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1551560)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*8281+125419)*1+lsi)*1]), &(inteval->stack[((hsi*7098+133700)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1495634)*1+lsi)*1]), &(inteval->stack[((hsi*9555+115864)*1+lsi)*1]), &(inteval->stack[((hsi*8281+125419)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1520477)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1495634)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1474340)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1563065)*1+lsi)*1]), &(inteval->stack[((hsi*10920+104944)*1+lsi)*1]), &(inteval->stack[((hsi*9555+115864)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1591730)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1563065)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1495634)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1641416)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1591730)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1520477)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1712396)*1+lsi)*1]), &(inteval->stack[((hsi*12376+92568)*1+lsi)*1]), &(inteval->stack[((hsi*10920+104944)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+146804)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1712396)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1563065)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1931576)*1+lsi)*1]), &(inteval->stack[((hsi*57330+146804)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1591730)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+2014386)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1931576)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1641416)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1563065)*1+lsi)*1]), &(inteval->stack[((hsi*7098+133700)*1+lsi)*1]), &(inteval->stack[((hsi*6006+140798)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1581083)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1563065)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+2120856)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1520477)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1581083)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1641416)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2120856)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1564430)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2014386)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1474340)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*13923+78645)*1+lsi)*1]), &(inteval->stack[((hsi*12376+92568)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+78645)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1712396)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+1690556)*1+lsi)*1]), &(inteval->stack[((hsi*65520+78645)*1+lsi)*1]), &(inteval->stack[((hsi*57330+146804)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+78645)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1690556)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1931576)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+2120856)*1+lsi)*1]), &(inteval->stack[((hsi*124215+78645)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2014386)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+1931576)*1+lsi)*1]), &(inteval->stack[((hsi*149058+2120856)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1564430)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*432432+2099744)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1931576)*1+lsi)*1]), &(inteval->stack[((hsi*144144+1787432)*1+lsi)*1]),1848);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*6006+239150)*1+lsi)*1]), &(inteval->stack[((hsi*5148+245156)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1489784)*1+lsi)*1]), &(inteval->stack[((hsi*6930+232220)*1+lsi)*1]), &(inteval->stack[((hsi*6006+239150)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1507802)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1489784)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1474340)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1538690)*1+lsi)*1]), &(inteval->stack[((hsi*7920+224300)*1+lsi)*1]), &(inteval->stack[((hsi*6930+232220)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1559480)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1538690)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1489784)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1595516)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1559480)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1507802)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1646996)*1+lsi)*1]), &(inteval->stack[((hsi*8976+215324)*1+lsi)*1]), &(inteval->stack[((hsi*7920+224300)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+78645)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1646996)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1538690)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+1670756)*1+lsi)*1]), &(inteval->stack[((hsi*41580+78645)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1559480)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+120225)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1670756)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1595516)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+1538690)*1+lsi)*1]), &(inteval->stack[((hsi*5148+245156)*1+lsi)*1]), &(inteval->stack[((hsi*4356+250304)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1730816)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1538690)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1538690)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1507802)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1730816)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1595516)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1538690)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*77220+120225)*1+lsi)*1]), &(inteval->stack[((hsi*65340+2532176)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+1565816)*1+lsi)*1]), &(inteval->stack[((hsi*10098+205226)*1+lsi)*1]), &(inteval->stack[((hsi*8976+215324)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+197445)*1+lsi)*1]), &(inteval->stack[((hsi*26928+1565816)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1646996)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+1565816)*1+lsi)*1]), &(inteval->stack[((hsi*47520+197445)*1+lsi)*1]), &(inteval->stack[((hsi*41580+78645)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1565816)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1670756)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+1565816)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*77220+120225)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+78645)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1565816)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1474340)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*365904+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*144144+1787432)*1+lsi)*1]), &(inteval->stack[((hsi*121968+78645)*1+lsi)*1]),1848);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*731808+2898080)*1+lsi)*1]), &(inteval->stack[((hsi*432432+2099744)*1+lsi)*1]), &(inteval->stack[((hsi*365904+2532176)*1+lsi)*1]),1848);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*9555+53970)*1+lsi)*1]), &(inteval->stack[((hsi*8190+63525)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1498910)*1+lsi)*1]), &(inteval->stack[((hsi*11025+42945)*1+lsi)*1]), &(inteval->stack[((hsi*9555+53970)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1527575)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1498910)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1474340)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*12600+30345)*1+lsi)*1]), &(inteval->stack[((hsi*11025+42945)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1576715)*1+lsi)*1]), &(inteval->stack[((hsi*33075+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1498910)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+2565251)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1576715)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1527575)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+1634045)*1+lsi)*1]), &(inteval->stack[((hsi*14280+16065)*1+lsi)*1]), &(inteval->stack[((hsi*12600+30345)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+1671845)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1634045)*1+lsi)*1]), &(inteval->stack[((hsi*33075+2532176)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+2647151)*1+lsi)*1]), &(inteval->stack[((hsi*66150+1671845)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1576715)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+1737995)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2647151)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2565251)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+78645)*1+lsi)*1]), &(inteval->stack[((hsi*8190+63525)*1+lsi)*1]), &(inteval->stack[((hsi*6930+71715)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+2742701)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*20790+78645)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+30345)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1527575)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2742701)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2565251)*1+lsi)*1]), &(inteval->stack[((hsi*69300+30345)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+30345)*1+lsi)*1]), &(inteval->stack[((hsi*122850+1737995)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1474340)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*16065+0)*1+lsi)*1]), &(inteval->stack[((hsi*14280+16065)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+2742701)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1634045)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*75600+2742701)*1+lsi)*1]), &(inteval->stack[((hsi*66150+1671845)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+2742701)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2647151)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*143325+2742701)*1+lsi)*1]), &(inteval->stack[((hsi*122850+1737995)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*171990+1474340)*1+lsi)*1]), &(inteval->stack[((hsi*145530+30345)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*504504+3629888)*1+lsi)*1]), &(inteval->stack[((hsi*194040+2532176)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1931576)*1+lsi)*1]),1848);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*864864+4134392)*1+lsi)*1]), &(inteval->stack[((hsi*504504+3629888)*1+lsi)*1]), &(inteval->stack[((hsi*432432+2099744)*1+lsi)*1]),1848);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1219680+254660)*1+lsi)*1]), &(inteval->stack[((hsi*864864+4134392)*1+lsi)*1]), &(inteval->stack[((hsi*731808+2898080)*1+lsi)*1]),1848);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1219680+254660)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
