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
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdh.h>
#include <HRRPart0bra0ket0pdi.h>
#include <HRRPart0bra0ket0pdk.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfh.h>
#include <HRRPart0bra0ket0pfi.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgg.h>
#include <HRRPart0bra0ket0pgh.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0phf.h>
#include <HRRPart0bra0ket0phg.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pid.h>
#include <HRRPart0bra0ket0pif.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0pkd.h>
#include <HRRPart0bra0ket0pkp.h>
#include <HRRPart0bra0ket0plp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppk.h>
#include <HRRPart0bra0ket0ppl.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
#include <HRRPart0bra0ket0psl.h>
#include <HRRPart0bra0ket0psm.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_M__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_M__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1742400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_M__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1636950)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1644048)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+14937552)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1628760)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1636950)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+14958846)*1+lsi)*1]), &(inteval->stack[((hsi*21294+14937552)*1+lsi)*1]), &(inteval->stack[((hsi*18252+14919300)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+14995350)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1619400)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1628760)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+15019920)*1+lsi)*1]), &(inteval->stack[((hsi*24570+14995350)*1+lsi)*1]), &(inteval->stack[((hsi*21294+14937552)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+15062508)*1+lsi)*1]), &(inteval->stack[((hsi*42588+15019920)*1+lsi)*1]), &(inteval->stack[((hsi*36504+14958846)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+15123348)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1608792)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1619400)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+15151428)*1+lsi)*1]), &(inteval->stack[((hsi*28080+15123348)*1+lsi)*1]), &(inteval->stack[((hsi*24570+14995350)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+15200568)*1+lsi)*1]), &(inteval->stack[((hsi*49140+15151428)*1+lsi)*1]), &(inteval->stack[((hsi*42588+15019920)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+15271548)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15200568)*1+lsi)*1]), &(inteval->stack[((hsi*60840+15062508)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+14995350)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1596858)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1608792)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+15362808)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14995350)*1+lsi)*1]), &(inteval->stack[((hsi*28080+15123348)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+15418968)*1+lsi)*1]), &(inteval->stack[((hsi*56160+15362808)*1+lsi)*1]), &(inteval->stack[((hsi*49140+15151428)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+15500868)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15418968)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15200568)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+15123348)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15500868)*1+lsi)*1]), &(inteval->stack[((hsi*91260+15271548)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+15607338)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1583520)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1596858)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+15643140)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15607338)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14995350)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+15706788)*1+lsi)*1]), &(inteval->stack[((hsi*63648+15643140)*1+lsi)*1]), &(inteval->stack[((hsi*56160+15362808)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+15800388)*1+lsi)*1]), &(inteval->stack[((hsi*93600+15706788)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15418968)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+15923238)*1+lsi)*1]), &(inteval->stack[((hsi*122850+15800388)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15500868)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+15362808)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15923238)*1+lsi)*1]), &(inteval->stack[((hsi*127764+15123348)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+15533160)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1568700)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1583520)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+16072296)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15533160)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15607338)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+16143900)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16072296)*1+lsi)*1]), &(inteval->stack[((hsi*63648+15643140)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+16249980)*1+lsi)*1]), &(inteval->stack[((hsi*106080+16143900)*1+lsi)*1]), &(inteval->stack[((hsi*93600+15706788)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+15573174)*1+lsi)*1]), &(inteval->stack[((hsi*140400+16249980)*1+lsi)*1]), &(inteval->stack[((hsi*122850+15800388)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+16390380)*1+lsi)*1]), &(inteval->stack[((hsi*171990+15573174)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15923238)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+15745164)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16390380)*1+lsi)*1]), &(inteval->stack[((hsi*170352+15362808)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1644048)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1650132)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+15979632)*1+lsi)*1]), &(inteval->stack[((hsi*18252+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*15444+15964188)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1583520)*1+lsi)*1]), &(inteval->stack[((hsi*36504+14958846)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15979632)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*60840+15062508)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1583520)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*91260+15271548)*1+lsi)*1]), &(inteval->stack[((hsi*77220+14919300)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*127764+15123348)*1+lsi)*1]), &(inteval->stack[((hsi*108108+15964188)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+15063444)*1+lsi)*1]), &(inteval->stack[((hsi*170352+15362808)*1+lsi)*1]), &(inteval->stack[((hsi*144144+14919300)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+15248772)*1+lsi)*1]), &(inteval->stack[((hsi*219024+15745164)*1+lsi)*1]), &(inteval->stack[((hsi*185328+15063444)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1552320)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1568700)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+14963760)*1+lsi)*1]), &(inteval->stack[((hsi*44460+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15533160)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+15043788)*1+lsi)*1]), &(inteval->stack[((hsi*80028+14963760)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16072296)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*119340+15043788)*1+lsi)*1]), &(inteval->stack[((hsi*106080+16143900)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*159120+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*140400+16249980)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*171990+15573174)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16390380)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*219024+15745164)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+15480432)*1+lsi)*1]), &(inteval->stack[((hsi*273780+15964188)*1+lsi)*1]), &(inteval->stack[((hsi*231660+15248772)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1530935)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1539216)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+14940594)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1521380)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1530935)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+14965437)*1+lsi)*1]), &(inteval->stack[((hsi*24843+14940594)*1+lsi)*1]), &(inteval->stack[((hsi*21294+14919300)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+15008025)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1510460)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1521380)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+15036690)*1+lsi)*1]), &(inteval->stack[((hsi*28665+15008025)*1+lsi)*1]), &(inteval->stack[((hsi*24843+14940594)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+15086376)*1+lsi)*1]), &(inteval->stack[((hsi*49686+15036690)*1+lsi)*1]), &(inteval->stack[((hsi*42588+14965437)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+15157356)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1498084)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1510460)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+15190116)*1+lsi)*1]), &(inteval->stack[((hsi*32760+15157356)*1+lsi)*1]), &(inteval->stack[((hsi*28665+15008025)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+15247446)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15190116)*1+lsi)*1]), &(inteval->stack[((hsi*49686+15036690)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+15330256)*1+lsi)*1]), &(inteval->stack[((hsi*82810+15247446)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15086376)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1552320)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1484161)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1498084)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+15008025)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1552320)*1+lsi)*1]), &(inteval->stack[((hsi*32760+15157356)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15008025)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15190116)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+15859122)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*82810+15247446)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+15157356)*1+lsi)*1]), &(inteval->stack[((hsi*124215+15859122)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15330256)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+1589448)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1468600)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1484161)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+15983337)*1+lsi)*1]), &(inteval->stack[((hsi*41769+1589448)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1552320)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+16057593)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15983337)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15008025)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+16166793)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16057593)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15763572)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+16310118)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16166793)*1+lsi)*1]), &(inteval->stack[((hsi*124215+15859122)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*173901+16310118)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15157356)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+15008025)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1451310)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1468600)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+16484019)*1+lsi)*1]), &(inteval->stack[((hsi*46683+15008025)*1+lsi)*1]), &(inteval->stack[((hsi*41769+1589448)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+16567557)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16484019)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15983337)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+16691317)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16567557)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16057593)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+15962316)*1+lsi)*1]), &(inteval->stack[((hsi*163800+16691317)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16166793)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+16855117)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15962316)*1+lsi)*1]), &(inteval->stack[((hsi*173901+16310118)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+16162971)*1+lsi)*1]), &(inteval->stack[((hsi*231868+16855117)*1+lsi)*1]), &(inteval->stack[((hsi*198744+15763572)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1552320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1539216)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1546314)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1570338)*1+lsi)*1]), &(inteval->stack[((hsi*21294+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1552320)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1468600)*1+lsi)*1]), &(inteval->stack[((hsi*42588+14965437)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1570338)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1528660)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15086376)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1468600)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+17086985)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15330256)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1528660)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+1468600)*1+lsi)*1]), &(inteval->stack[((hsi*149058+15157356)*1+lsi)*1]), &(inteval->stack[((hsi*126126+17086985)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+15054708)*1+lsi)*1]), &(inteval->stack[((hsi*198744+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1468600)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+17086985)*1+lsi)*1]), &(inteval->stack[((hsi*255528+16162971)*1+lsi)*1]), &(inteval->stack[((hsi*216216+15054708)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+15054708)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1432200)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1451310)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+15106578)*1+lsi)*1]), &(inteval->stack[((hsi*51870+15054708)*1+lsi)*1]), &(inteval->stack[((hsi*46683+15008025)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+15199944)*1+lsi)*1]), &(inteval->stack[((hsi*93366+15106578)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16484019)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15199944)*1+lsi)*1]), &(inteval->stack[((hsi*123760+16567557)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+15104940)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*163800+16691317)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+16418499)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15104940)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15962316)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*267540+16418499)*1+lsi)*1]), &(inteval->stack[((hsi*231868+16855117)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+16418499)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*255528+16162971)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16418499)*1+lsi)*1]), &(inteval->stack[((hsi*270270+17086985)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+16093902)*1+lsi)*1]), &(inteval->stack[((hsi*330330+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*283140+15480432)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1407525)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1417080)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+14943870)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1396500)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1407525)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+14972535)*1+lsi)*1]), &(inteval->stack[((hsi*28665+14943870)*1+lsi)*1]), &(inteval->stack[((hsi*24570+14919300)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+15021675)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1383900)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1396500)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+15054750)*1+lsi)*1]), &(inteval->stack[((hsi*33075+15021675)*1+lsi)*1]), &(inteval->stack[((hsi*28665+14943870)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+15112080)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15054750)*1+lsi)*1]), &(inteval->stack[((hsi*49140+14972535)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+15193980)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1369620)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1383900)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+15231780)*1+lsi)*1]), &(inteval->stack[((hsi*37800+15193980)*1+lsi)*1]), &(inteval->stack[((hsi*33075+15021675)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+1432200)*1+lsi)*1]), &(inteval->stack[((hsi*66150+15231780)*1+lsi)*1]), &(inteval->stack[((hsi*57330+15054750)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+15297930)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1432200)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15112080)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1527750)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1353555)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1369620)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+15021675)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1527750)*1+lsi)*1]), &(inteval->stack[((hsi*37800+15193980)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*75600+15021675)*1+lsi)*1]), &(inteval->stack[((hsi*66150+15231780)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+17053572)*1+lsi)*1]), &(inteval->stack[((hsi*110250+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1432200)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+17196897)*1+lsi)*1]), &(inteval->stack[((hsi*143325+17053572)*1+lsi)*1]), &(inteval->stack[((hsi*122850+15297930)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+15193980)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1335600)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1353555)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+1432200)*1+lsi)*1]), &(inteval->stack[((hsi*48195+15193980)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1527750)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+1517880)*1+lsi)*1]), &(inteval->stack[((hsi*85680+1432200)*1+lsi)*1]), &(inteval->stack[((hsi*75600+15021675)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+17368887)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1517880)*1+lsi)*1]), &(inteval->stack[((hsi*110250+16943322)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+17534262)*1+lsi)*1]), &(inteval->stack[((hsi*165375+17368887)*1+lsi)*1]), &(inteval->stack[((hsi*143325+17053572)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17534262)*1+lsi)*1]), &(inteval->stack[((hsi*171990+17196897)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+15021675)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1315650)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1335600)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+17734917)*1+lsi)*1]), &(inteval->stack[((hsi*53865+15021675)*1+lsi)*1]), &(inteval->stack[((hsi*48195+15193980)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+17831307)*1+lsi)*1]), &(inteval->stack[((hsi*96390+17734917)*1+lsi)*1]), &(inteval->stack[((hsi*85680+1432200)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+17974107)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17831307)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1517880)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+18163107)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17974107)*1+lsi)*1]), &(inteval->stack[((hsi*165375+17368887)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+18394632)*1+lsi)*1]), &(inteval->stack[((hsi*231525+18163107)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17534262)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+17368887)*1+lsi)*1]), &(inteval->stack[((hsi*267540+18394632)*1+lsi)*1]), &(inteval->stack[((hsi*229320+16943322)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1432200)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1417080)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1425270)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1452990)*1+lsi)*1]), &(inteval->stack[((hsi*24570+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1432200)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1494570)*1+lsi)*1]), &(inteval->stack[((hsi*49140+14972535)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1452990)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+15193980)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15112080)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1494570)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+1335600)*1+lsi)*1]), &(inteval->stack[((hsi*122850+15297930)*1+lsi)*1]), &(inteval->stack[((hsi*103950+15193980)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+15075540)*1+lsi)*1]), &(inteval->stack[((hsi*171990+17196897)*1+lsi)*1]), &(inteval->stack[((hsi*145530+1335600)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+1335600)*1+lsi)*1]), &(inteval->stack[((hsi*229320+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*194040+15075540)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*294840+17368887)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1335600)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+15075540)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1315650)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*59850+15075540)*1+lsi)*1]), &(inteval->stack[((hsi*53865+15021675)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*107730+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*96390+17734917)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+15079950)*1+lsi)*1]), &(inteval->stack[((hsi*160650+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17831307)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*214200+15079950)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17974107)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*264600+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*231525+18163107)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+17663727)*1+lsi)*1]), &(inteval->stack[((hsi*308700+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*267540+18394632)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*343980+17663727)*1+lsi)*1]), &(inteval->stack[((hsi*294840+17368887)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+17255172)*1+lsi)*1]), &(inteval->stack[((hsi*368550+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*311850+16943322)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+17636322)*1+lsi)*1]), &(inteval->stack[((hsi*381150+17255172)*1+lsi)*1]), &(inteval->stack[((hsi*330330+15763572)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+18627312)*1+lsi)*1]), &(inteval->stack[((hsi*990990+17636322)*1+lsi)*1]), &(inteval->stack[((hsi*849420+16093902)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1265400)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1276320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+14947380)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1252800)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1265400)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+14980140)*1+lsi)*1]), &(inteval->stack[((hsi*32760+14947380)*1+lsi)*1]), &(inteval->stack[((hsi*28080+14919300)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+15036300)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1238400)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1252800)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+15074100)*1+lsi)*1]), &(inteval->stack[((hsi*37800+15036300)*1+lsi)*1]), &(inteval->stack[((hsi*32760+14947380)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15074100)*1+lsi)*1]), &(inteval->stack[((hsi*56160+14980140)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+15139620)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1222080)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1238400)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*43200+15139620)*1+lsi)*1]), &(inteval->stack[((hsi*37800+15036300)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*75600+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*65520+15074100)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+15182820)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1293600)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+1387200)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1203720)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1222080)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+15839172)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1387200)*1+lsi)*1]), &(inteval->stack[((hsi*43200+15139620)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+1436160)*1+lsi)*1]), &(inteval->stack[((hsi*86400+15839172)*1+lsi)*1]), &(inteval->stack[((hsi*75600+15763572)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+17052522)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1436160)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16943322)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*163800+17052522)*1+lsi)*1]), &(inteval->stack[((hsi*140400+15182820)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+15925572)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1183200)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1203720)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+15323220)*1+lsi)*1]), &(inteval->stack[((hsi*55080+15925572)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1387200)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+15036300)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15323220)*1+lsi)*1]), &(inteval->stack[((hsi*86400+15839172)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+20522712)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15036300)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1436160)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+1387200)*1+lsi)*1]), &(inteval->stack[((hsi*189000+20522712)*1+lsi)*1]), &(inteval->stack[((hsi*163800+17052522)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1387200)*1+lsi)*1]), &(inteval->stack[((hsi*196560+20326152)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1160400)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1183200)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+15980652)*1+lsi)*1]), &(inteval->stack[((hsi*61560+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*55080+15925572)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+20711712)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15980652)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15323220)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+20874912)*1+lsi)*1]), &(inteval->stack[((hsi*163200+20711712)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15036300)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+21090912)*1+lsi)*1]), &(inteval->stack[((hsi*216000+20874912)*1+lsi)*1]), &(inteval->stack[((hsi*189000+20522712)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+21355512)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21090912)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1387200)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+21661272)*1+lsi)*1]), &(inteval->stack[((hsi*305760+21355512)*1+lsi)*1]), &(inteval->stack[((hsi*262080+16943322)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+1387200)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1276320)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1285680)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+1410960)*1+lsi)*1]), &(inteval->stack[((hsi*28080+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1387200)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+1458480)*1+lsi)*1]), &(inteval->stack[((hsi*56160+14980140)*1+lsi)*1]), &(inteval->stack[((hsi*47520+1410960)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1293600)*1+lsi)*1]), &(inteval->stack[((hsi*79200+1458480)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+1183200)*1+lsi)*1]), &(inteval->stack[((hsi*140400+15182820)*1+lsi)*1]), &(inteval->stack[((hsi*118800+14919300)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*196560+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*166320+1183200)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+1183200)*1+lsi)*1]), &(inteval->stack[((hsi*262080+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14919300)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*336960+21661272)*1+lsi)*1]), &(inteval->stack[((hsi*285120+1183200)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+1183200)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1160400)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+1251600)*1+lsi)*1]), &(inteval->stack[((hsi*68400+1183200)*1+lsi)*1]), &(inteval->stack[((hsi*61560+15763572)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*123120+1251600)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15980652)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*163200+20711712)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*244800+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*216000+20874912)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*302400+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21090912)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*352800+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*305760+21355512)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+20719272)*1+lsi)*1]), &(inteval->stack[((hsi*393120+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*336960+21661272)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*421200+20719272)*1+lsi)*1]), &(inteval->stack[((hsi*356400+14919300)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*435600+1135200)*1+lsi)*1]), &(inteval->stack[((hsi*381150+17255172)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+21469602)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*990990+17636322)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+23451582)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+21469602)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+18627312)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1103240)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1115616)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+16975146)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1088960)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1103240)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+17012274)*1+lsi)*1]), &(inteval->stack[((hsi*37128+16975146)*1+lsi)*1]), &(inteval->stack[((hsi*31824+16943322)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+17075922)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1072640)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1088960)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+17118762)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17075922)*1+lsi)*1]), &(inteval->stack[((hsi*37128+16975146)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+17193018)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17118762)*1+lsi)*1]), &(inteval->stack[((hsi*63648+17012274)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+17299098)*1+lsi)*1]), &(inteval->stack[((hsi*18496+1054144)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1072640)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+17348058)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17299098)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17075922)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+17433738)*1+lsi)*1]), &(inteval->stack[((hsi*85680+17348058)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17118762)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+17557498)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17433738)*1+lsi)*1]), &(inteval->stack[((hsi*106080+17193018)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+17716618)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1033336)*1+lsi)*1]), &(inteval->stack[((hsi*18496+1054144)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+17772106)*1+lsi)*1]), &(inteval->stack[((hsi*55488+17716618)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17299098)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+17870026)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17772106)*1+lsi)*1]), &(inteval->stack[((hsi*85680+17348058)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+18012826)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17870026)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17433738)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*185640+18012826)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17557498)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+18198466)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1010080)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1033336)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+18260890)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18198466)*1+lsi)*1]), &(inteval->stack[((hsi*55488+17716618)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+15142068)*1+lsi)*1]), &(inteval->stack[((hsi*110976+18260890)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17772106)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*163200+15142068)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17870026)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+17716618)*1+lsi)*1]), &(inteval->stack[((hsi*214200+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*185640+18012826)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+26282982)*1+lsi)*1]), &(inteval->stack[((hsi*259896+17716618)*1+lsi)*1]), &(inteval->stack[((hsi*222768+14919300)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+17299098)*1+lsi)*1]), &(inteval->stack[((hsi*25840+984240)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1010080)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+18371866)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17299098)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18198466)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+17976514)*1+lsi)*1]), &(inteval->stack[((hsi*124848+18371866)*1+lsi)*1]), &(inteval->stack[((hsi*110976+18260890)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+26580006)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17976514)*1+lsi)*1]), &(inteval->stack[((hsi*163200+15142068)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+15142068)*1+lsi)*1]), &(inteval->stack[((hsi*244800+26580006)*1+lsi)*1]), &(inteval->stack[((hsi*214200+15763572)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+26824806)*1+lsi)*1]), &(inteval->stack[((hsi*299880+15142068)*1+lsi)*1]), &(inteval->stack[((hsi*259896+17716618)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+27171334)*1+lsi)*1]), &(inteval->stack[((hsi*346528+26824806)*1+lsi)*1]), &(inteval->stack[((hsi*297024+26282982)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1115616)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1126224)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+15790500)*1+lsi)*1]), &(inteval->stack[((hsi*31824+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*26928+15763572)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+17716618)*1+lsi)*1]), &(inteval->stack[((hsi*63648+17012274)*1+lsi)*1]), &(inteval->stack[((hsi*53856+15790500)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*106080+17193018)*1+lsi)*1]), &(inteval->stack[((hsi*89760+17716618)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17557498)*1+lsi)*1]), &(inteval->stack[((hsi*134640+15763572)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+17368866)*1+lsi)*1]), &(inteval->stack[((hsi*222768+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*188496+16943322)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+17620194)*1+lsi)*1]), &(inteval->stack[((hsi*297024+26282982)*1+lsi)*1]), &(inteval->stack[((hsi*251328+17368866)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+27553222)*1+lsi)*1]), &(inteval->stack[((hsi*381888+27171334)*1+lsi)*1]), &(inteval->stack[((hsi*323136+17620194)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+17368866)*1+lsi)*1]), &(inteval->stack[((hsi*28560+955680)*1+lsi)*1]), &(inteval->stack[((hsi*25840+984240)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+17446386)*1+lsi)*1]), &(inteval->stack[((hsi*77520+17368866)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17299098)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*139536+17446386)*1+lsi)*1]), &(inteval->stack[((hsi*124848+18371866)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+17151402)*1+lsi)*1]), &(inteval->stack[((hsi*208080+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17976514)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+17428842)*1+lsi)*1]), &(inteval->stack[((hsi*277440+17151402)*1+lsi)*1]), &(inteval->stack[((hsi*244800+26580006)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+17771562)*1+lsi)*1]), &(inteval->stack[((hsi*342720+17428842)*1+lsi)*1]), &(inteval->stack[((hsi*299880+15142068)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*399840+17771562)*1+lsi)*1]), &(inteval->stack[((hsi*346528+26824806)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+17388858)*1+lsi)*1]), &(inteval->stack[((hsi*445536+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*381888+27171334)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+26282982)*1+lsi)*1]), &(inteval->stack[((hsi*477360+17388858)*1+lsi)*1]), &(inteval->stack[((hsi*403920+27553222)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1306800+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*493680+26282982)*1+lsi)*1]), &(inteval->stack[((hsi*435600+1135200)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2286900+26776662)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+20326152)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3303300+29063562)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+26776662)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+21469602)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*4247100+32366862)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+29063562)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+23451582)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*13923+919725)*1+lsi)*1]), &(inteval->stack[((hsi*11934+933648)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+20361954)*1+lsi)*1]), &(inteval->stack[((hsi*16065+903660)*1+lsi)*1]), &(inteval->stack[((hsi*13923+919725)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+20403723)*1+lsi)*1]), &(inteval->stack[((hsi*41769+20361954)*1+lsi)*1]), &(inteval->stack[((hsi*35802+20326152)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+20475327)*1+lsi)*1]), &(inteval->stack[((hsi*18360+885300)*1+lsi)*1]), &(inteval->stack[((hsi*16065+903660)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+20523522)*1+lsi)*1]), &(inteval->stack[((hsi*48195+20475327)*1+lsi)*1]), &(inteval->stack[((hsi*41769+20361954)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+20607060)*1+lsi)*1]), &(inteval->stack[((hsi*83538+20523522)*1+lsi)*1]), &(inteval->stack[((hsi*71604+20403723)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+20726400)*1+lsi)*1]), &(inteval->stack[((hsi*20808+864492)*1+lsi)*1]), &(inteval->stack[((hsi*18360+885300)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+20781480)*1+lsi)*1]), &(inteval->stack[((hsi*55080+20726400)*1+lsi)*1]), &(inteval->stack[((hsi*48195+20475327)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+20877870)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20781480)*1+lsi)*1]), &(inteval->stack[((hsi*83538+20523522)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+21017100)*1+lsi)*1]), &(inteval->stack[((hsi*139230+20877870)*1+lsi)*1]), &(inteval->stack[((hsi*119340+20607060)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+21196110)*1+lsi)*1]), &(inteval->stack[((hsi*23409+841083)*1+lsi)*1]), &(inteval->stack[((hsi*20808+864492)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+21258534)*1+lsi)*1]), &(inteval->stack[((hsi*62424+21196110)*1+lsi)*1]), &(inteval->stack[((hsi*55080+20726400)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+21368694)*1+lsi)*1]), &(inteval->stack[((hsi*110160+21258534)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20781480)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+21529344)*1+lsi)*1]), &(inteval->stack[((hsi*160650+21368694)*1+lsi)*1]), &(inteval->stack[((hsi*139230+20877870)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+21738189)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21529344)*1+lsi)*1]), &(inteval->stack[((hsi*179010+21017100)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+21988803)*1+lsi)*1]), &(inteval->stack[((hsi*26163+814920)*1+lsi)*1]), &(inteval->stack[((hsi*23409+841083)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+22059030)*1+lsi)*1]), &(inteval->stack[((hsi*70227+21988803)*1+lsi)*1]), &(inteval->stack[((hsi*62424+21196110)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+22183878)*1+lsi)*1]), &(inteval->stack[((hsi*124848+22059030)*1+lsi)*1]), &(inteval->stack[((hsi*110160+21258534)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+22367478)*1+lsi)*1]), &(inteval->stack[((hsi*183600+22183878)*1+lsi)*1]), &(inteval->stack[((hsi*160650+21368694)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+22608453)*1+lsi)*1]), &(inteval->stack[((hsi*240975+22367478)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21529344)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+955680)*1+lsi)*1]), &(inteval->stack[((hsi*292383+22608453)*1+lsi)*1]), &(inteval->stack[((hsi*250614+21738189)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*29070+785850)*1+lsi)*1]), &(inteval->stack[((hsi*26163+814920)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+22900836)*1+lsi)*1]), &(inteval->stack[((hsi*78489+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*70227+21988803)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+21196110)*1+lsi)*1]), &(inteval->stack[((hsi*140454+22900836)*1+lsi)*1]), &(inteval->stack[((hsi*124848+22059030)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+14997789)*1+lsi)*1]), &(inteval->stack[((hsi*208080+21196110)*1+lsi)*1]), &(inteval->stack[((hsi*183600+22183878)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+23041290)*1+lsi)*1]), &(inteval->stack[((hsi*275400+14997789)*1+lsi)*1]), &(inteval->stack[((hsi*240975+22367478)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+21988803)*1+lsi)*1]), &(inteval->stack[((hsi*337365+23041290)*1+lsi)*1]), &(inteval->stack[((hsi*292383+22608453)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+22378647)*1+lsi)*1]), &(inteval->stack[((hsi*389844+21988803)*1+lsi)*1]), &(inteval->stack[((hsi*334152+955680)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+18250122)*1+lsi)*1]), &(inteval->stack[((hsi*11934+933648)*1+lsi)*1]), &(inteval->stack[((hsi*10098+945582)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+1289832)*1+lsi)*1]), &(inteval->stack[((hsi*35802+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*30294+18250122)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+18250122)*1+lsi)*1]), &(inteval->stack[((hsi*71604+20403723)*1+lsi)*1]), &(inteval->stack[((hsi*60588+1289832)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+1289832)*1+lsi)*1]), &(inteval->stack[((hsi*119340+20607060)*1+lsi)*1]), &(inteval->stack[((hsi*100980+18250122)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*179010+21017100)*1+lsi)*1]), &(inteval->stack[((hsi*151470+1289832)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+20538210)*1+lsi)*1]), &(inteval->stack[((hsi*250614+21738189)*1+lsi)*1]), &(inteval->stack[((hsi*212058+20326152)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+21404190)*1+lsi)*1]), &(inteval->stack[((hsi*334152+955680)*1+lsi)*1]), &(inteval->stack[((hsi*282744+20538210)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*429624+22378647)*1+lsi)*1]), &(inteval->stack[((hsi*363528+21404190)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+814920)*1+lsi)*1]), &(inteval->stack[((hsi*32130+753720)*1+lsi)*1]), &(inteval->stack[((hsi*29070+785850)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+902130)*1+lsi)*1]), &(inteval->stack[((hsi*87210+814920)*1+lsi)*1]), &(inteval->stack[((hsi*78489+14919300)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+1059108)*1+lsi)*1]), &(inteval->stack[((hsi*156978+902130)*1+lsi)*1]), &(inteval->stack[((hsi*140454+22900836)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+21404190)*1+lsi)*1]), &(inteval->stack[((hsi*234090+1059108)*1+lsi)*1]), &(inteval->stack[((hsi*208080+21196110)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+753720)*1+lsi)*1]), &(inteval->stack[((hsi*312120+21404190)*1+lsi)*1]), &(inteval->stack[((hsi*275400+14997789)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+20780562)*1+lsi)*1]), &(inteval->stack[((hsi*385560+753720)*1+lsi)*1]), &(inteval->stack[((hsi*337365+23041290)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+753720)*1+lsi)*1]), &(inteval->stack[((hsi*449820+20780562)*1+lsi)*1]), &(inteval->stack[((hsi*389844+21988803)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+20780562)*1+lsi)*1]), &(inteval->stack[((hsi*501228+753720)*1+lsi)*1]), &(inteval->stack[((hsi*429624+22378647)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+21317592)*1+lsi)*1]), &(inteval->stack[((hsi*537030+20780562)*1+lsi)*1]), &(inteval->stack[((hsi*454410+20326152)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1481040+21872982)*1+lsi)*1]), &(inteval->stack[((hsi*555390+21317592)*1+lsi)*1]), &(inteval->stack[((hsi*493680+26282982)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2613600+36613962)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+21872982)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+16943322)*1+lsi)*1]),3630);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3811500+39227562)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+36613962)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+26776662)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4954950+43039062)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+39227562)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+29063562)*1+lsi)*1]),3630);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*5945940+26282982)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+43039062)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+32366862)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*15561+713535)*1+lsi)*1]), &(inteval->stack[((hsi*13338+729096)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+16983336)*1+lsi)*1]), &(inteval->stack[((hsi*17955+695580)*1+lsi)*1]), &(inteval->stack[((hsi*15561+713535)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+17030019)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16983336)*1+lsi)*1]), &(inteval->stack[((hsi*40014+16943322)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+17110047)*1+lsi)*1]), &(inteval->stack[((hsi*20520+675060)*1+lsi)*1]), &(inteval->stack[((hsi*17955+695580)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+17163912)*1+lsi)*1]), &(inteval->stack[((hsi*53865+17110047)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16983336)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+17257278)*1+lsi)*1]), &(inteval->stack[((hsi*93366+17163912)*1+lsi)*1]), &(inteval->stack[((hsi*80028+17030019)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+17390658)*1+lsi)*1]), &(inteval->stack[((hsi*23256+651804)*1+lsi)*1]), &(inteval->stack[((hsi*20520+675060)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+17452218)*1+lsi)*1]), &(inteval->stack[((hsi*61560+17390658)*1+lsi)*1]), &(inteval->stack[((hsi*53865+17110047)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+17559948)*1+lsi)*1]), &(inteval->stack[((hsi*107730+17452218)*1+lsi)*1]), &(inteval->stack[((hsi*93366+17163912)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*155610+17559948)*1+lsi)*1]), &(inteval->stack[((hsi*133380+17257278)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+17715558)*1+lsi)*1]), &(inteval->stack[((hsi*26163+625641)*1+lsi)*1]), &(inteval->stack[((hsi*23256+651804)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+753720)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17715558)*1+lsi)*1]), &(inteval->stack[((hsi*61560+17390658)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+17785326)*1+lsi)*1]), &(inteval->stack[((hsi*123120+753720)*1+lsi)*1]), &(inteval->stack[((hsi*107730+17452218)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+20526222)*1+lsi)*1]), &(inteval->stack[((hsi*179550+17785326)*1+lsi)*1]), &(inteval->stack[((hsi*155610+17559948)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+876840)*1+lsi)*1]), &(inteval->stack[((hsi*233415+20526222)*1+lsi)*1]), &(inteval->stack[((hsi*200070+20326152)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+17964876)*1+lsi)*1]), &(inteval->stack[((hsi*29241+596400)*1+lsi)*1]), &(inteval->stack[((hsi*26163+625641)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+18043365)*1+lsi)*1]), &(inteval->stack[((hsi*78489+17964876)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17715558)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*139536+18043365)*1+lsi)*1]), &(inteval->stack[((hsi*123120+753720)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+20759637)*1+lsi)*1]), &(inteval->stack[((hsi*205200+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*179550+17785326)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+17390658)*1+lsi)*1]), &(inteval->stack[((hsi*269325+20759637)*1+lsi)*1]), &(inteval->stack[((hsi*233415+20526222)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+1156938)*1+lsi)*1]), &(inteval->stack[((hsi*326781+17390658)*1+lsi)*1]), &(inteval->stack[((hsi*280098+876840)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+18182901)*1+lsi)*1]), &(inteval->stack[((hsi*32490+563910)*1+lsi)*1]), &(inteval->stack[((hsi*29241+596400)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+18270624)*1+lsi)*1]), &(inteval->stack[((hsi*87723+18182901)*1+lsi)*1]), &(inteval->stack[((hsi*78489+17964876)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+15124500)*1+lsi)*1]), &(inteval->stack[((hsi*156978+18270624)*1+lsi)*1]), &(inteval->stack[((hsi*139536+18043365)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+17717439)*1+lsi)*1]), &(inteval->stack[((hsi*232560+15124500)*1+lsi)*1]), &(inteval->stack[((hsi*205200+14919300)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+47994012)*1+lsi)*1]), &(inteval->stack[((hsi*307800+17717439)*1+lsi)*1]), &(inteval->stack[((hsi*269325+20759637)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+20526222)*1+lsi)*1]), &(inteval->stack[((hsi*377055+47994012)*1+lsi)*1]), &(inteval->stack[((hsi*326781+17390658)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+48371067)*1+lsi)*1]), &(inteval->stack[((hsi*435708+20526222)*1+lsi)*1]), &(inteval->stack[((hsi*373464+1156938)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+20961930)*1+lsi)*1]), &(inteval->stack[((hsi*13338+729096)*1+lsi)*1]), &(inteval->stack[((hsi*11286+742434)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*40014+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*33858+20961930)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+20961930)*1+lsi)*1]), &(inteval->stack[((hsi*80028+17030019)*1+lsi)*1]), &(inteval->stack[((hsi*67716+15763572)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+15763572)*1+lsi)*1]), &(inteval->stack[((hsi*133380+17257278)*1+lsi)*1]), &(inteval->stack[((hsi*112860+20961930)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*200070+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*169290+15763572)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+17180328)*1+lsi)*1]), &(inteval->stack[((hsi*280098+876840)*1+lsi)*1]), &(inteval->stack[((hsi*237006+16943322)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+596400)*1+lsi)*1]), &(inteval->stack[((hsi*373464+1156938)*1+lsi)*1]), &(inteval->stack[((hsi*316008+17180328)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*480168+48371067)*1+lsi)*1]), &(inteval->stack[((hsi*406296+596400)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+596400)*1+lsi)*1]), &(inteval->stack[((hsi*35910+528000)*1+lsi)*1]), &(inteval->stack[((hsi*32490+563910)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+693870)*1+lsi)*1]), &(inteval->stack[((hsi*97470+596400)*1+lsi)*1]), &(inteval->stack[((hsi*87723+18182901)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+869316)*1+lsi)*1]), &(inteval->stack[((hsi*175446+693870)*1+lsi)*1]), &(inteval->stack[((hsi*156978+18270624)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+18025239)*1+lsi)*1]), &(inteval->stack[((hsi*261630+869316)*1+lsi)*1]), &(inteval->stack[((hsi*232560+15124500)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+528000)*1+lsi)*1]), &(inteval->stack[((hsi*348840+18025239)*1+lsi)*1]), &(inteval->stack[((hsi*307800+17717439)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+17451192)*1+lsi)*1]), &(inteval->stack[((hsi*430920+528000)*1+lsi)*1]), &(inteval->stack[((hsi*377055+47994012)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+528000)*1+lsi)*1]), &(inteval->stack[((hsi*502740+17451192)*1+lsi)*1]), &(inteval->stack[((hsi*435708+20526222)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+17451192)*1+lsi)*1]), &(inteval->stack[((hsi*560196+528000)*1+lsi)*1]), &(inteval->stack[((hsi*480168+48371067)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+528000)*1+lsi)*1]), &(inteval->stack[((hsi*600210+17451192)*1+lsi)*1]), &(inteval->stack[((hsi*507870+16943322)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1666170+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*620730+528000)*1+lsi)*1]), &(inteval->stack[((hsi*555390+21317592)*1+lsi)*1]),3630);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*2962080+47994012)*1+lsi)*1]), &(inteval->stack[((hsi*1666170+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+21872982)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*4356000+50956092)*1+lsi)*1]), &(inteval->stack[((hsi*2962080+47994012)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+36613962)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*5717250+55312092)*1+lsi)*1]), &(inteval->stack[((hsi*4356000+50956092)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+39227562)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*6936930+61029342)*1+lsi)*1]), &(inteval->stack[((hsi*5717250+55312092)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+43039062)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*7927920+36613962)*1+lsi)*1]), &(inteval->stack[((hsi*6936930+61029342)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+26282982)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*17290+483350)*1+lsi)*1]), &(inteval->stack[((hsi*14820+500640)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+44586342)*1+lsi)*1]), &(inteval->stack[((hsi*19950+463400)*1+lsi)*1]), &(inteval->stack[((hsi*17290+483350)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+44638212)*1+lsi)*1]), &(inteval->stack[((hsi*51870+44586342)*1+lsi)*1]), &(inteval->stack[((hsi*44460+44541882)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+44727132)*1+lsi)*1]), &(inteval->stack[((hsi*22800+440600)*1+lsi)*1]), &(inteval->stack[((hsi*19950+463400)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+44786982)*1+lsi)*1]), &(inteval->stack[((hsi*59850+44727132)*1+lsi)*1]), &(inteval->stack[((hsi*51870+44586342)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*103740+44786982)*1+lsi)*1]), &(inteval->stack[((hsi*88920+44638212)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+44890722)*1+lsi)*1]), &(inteval->stack[((hsi*25840+414760)*1+lsi)*1]), &(inteval->stack[((hsi*22800+440600)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+44959122)*1+lsi)*1]), &(inteval->stack[((hsi*68400+44890722)*1+lsi)*1]), &(inteval->stack[((hsi*59850+44727132)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+20474352)*1+lsi)*1]), &(inteval->stack[((hsi*119700+44959122)*1+lsi)*1]), &(inteval->stack[((hsi*103740+44786982)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+45078822)*1+lsi)*1]), &(inteval->stack[((hsi*172900+20474352)*1+lsi)*1]), &(inteval->stack[((hsi*148200+20326152)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+20647252)*1+lsi)*1]), &(inteval->stack[((hsi*29070+385690)*1+lsi)*1]), &(inteval->stack[((hsi*25840+414760)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+20724772)*1+lsi)*1]), &(inteval->stack[((hsi*77520+20647252)*1+lsi)*1]), &(inteval->stack[((hsi*68400+44890722)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+45301122)*1+lsi)*1]), &(inteval->stack[((hsi*136800+20724772)*1+lsi)*1]), &(inteval->stack[((hsi*119700+44959122)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+20861572)*1+lsi)*1]), &(inteval->stack[((hsi*199500+45301122)*1+lsi)*1]), &(inteval->stack[((hsi*172900+20474352)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+45500622)*1+lsi)*1]), &(inteval->stack[((hsi*259350+20861572)*1+lsi)*1]), &(inteval->stack[((hsi*222300+45078822)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+21120922)*1+lsi)*1]), &(inteval->stack[((hsi*32490+353200)*1+lsi)*1]), &(inteval->stack[((hsi*29070+385690)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+21208132)*1+lsi)*1]), &(inteval->stack[((hsi*87210+21120922)*1+lsi)*1]), &(inteval->stack[((hsi*77520+20647252)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+45811842)*1+lsi)*1]), &(inteval->stack[((hsi*155040+21208132)*1+lsi)*1]), &(inteval->stack[((hsi*136800+20724772)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+21363172)*1+lsi)*1]), &(inteval->stack[((hsi*228000+45811842)*1+lsi)*1]), &(inteval->stack[((hsi*199500+45301122)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+46039842)*1+lsi)*1]), &(inteval->stack[((hsi*299250+21363172)*1+lsi)*1]), &(inteval->stack[((hsi*259350+20861572)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+21662422)*1+lsi)*1]), &(inteval->stack[((hsi*363090+46039842)*1+lsi)*1]), &(inteval->stack[((hsi*311220+45500622)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+46402932)*1+lsi)*1]), &(inteval->stack[((hsi*36100+317100)*1+lsi)*1]), &(inteval->stack[((hsi*32490+353200)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+46500402)*1+lsi)*1]), &(inteval->stack[((hsi*97470+46402932)*1+lsi)*1]), &(inteval->stack[((hsi*87210+21120922)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+22077382)*1+lsi)*1]), &(inteval->stack[((hsi*174420+46500402)*1+lsi)*1]), &(inteval->stack[((hsi*155040+21208132)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+46674822)*1+lsi)*1]), &(inteval->stack[((hsi*258400+22077382)*1+lsi)*1]), &(inteval->stack[((hsi*228000+45811842)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+22335782)*1+lsi)*1]), &(inteval->stack[((hsi*342000+46674822)*1+lsi)*1]), &(inteval->stack[((hsi*299250+21363172)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+20474352)*1+lsi)*1]), &(inteval->stack[((hsi*418950+22335782)*1+lsi)*1]), &(inteval->stack[((hsi*363090+46039842)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+47016822)*1+lsi)*1]), &(inteval->stack[((hsi*484120+20474352)*1+lsi)*1]), &(inteval->stack[((hsi*414960+21662422)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+20958472)*1+lsi)*1]), &(inteval->stack[((hsi*14820+500640)*1+lsi)*1]), &(inteval->stack[((hsi*12540+515460)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+22754732)*1+lsi)*1]), &(inteval->stack[((hsi*44460+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*37620+20958472)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+20958472)*1+lsi)*1]), &(inteval->stack[((hsi*88920+44638212)*1+lsi)*1]), &(inteval->stack[((hsi*75240+22754732)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+22754732)*1+lsi)*1]), &(inteval->stack[((hsi*148200+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*125400+20958472)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+20958472)*1+lsi)*1]), &(inteval->stack[((hsi*222300+45078822)*1+lsi)*1]), &(inteval->stack[((hsi*188100+22754732)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*311220+45500622)*1+lsi)*1]), &(inteval->stack[((hsi*263340+20958472)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+44893002)*1+lsi)*1]), &(inteval->stack[((hsi*414960+21662422)*1+lsi)*1]), &(inteval->stack[((hsi*351120+44541882)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+20958472)*1+lsi)*1]), &(inteval->stack[((hsi*533520+47016822)*1+lsi)*1]), &(inteval->stack[((hsi*451440+44893002)*1+lsi)*1]),190);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*108300+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*39900+277200)*1+lsi)*1]), &(inteval->stack[((hsi*36100+317100)*1+lsi)*1]),190);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*194940+44650182)*1+lsi)*1]), &(inteval->stack[((hsi*108300+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*97470+46402932)*1+lsi)*1]),190);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*290700+44845122)*1+lsi)*1]), &(inteval->stack[((hsi*194940+44650182)*1+lsi)*1]), &(inteval->stack[((hsi*174420+46500402)*1+lsi)*1]),190);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*387600+45135822)*1+lsi)*1]), &(inteval->stack[((hsi*290700+44845122)*1+lsi)*1]), &(inteval->stack[((hsi*258400+22077382)*1+lsi)*1]),190);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*478800+45523422)*1+lsi)*1]), &(inteval->stack[((hsi*387600+45135822)*1+lsi)*1]), &(inteval->stack[((hsi*342000+46674822)*1+lsi)*1]),190);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*558600+46002222)*1+lsi)*1]), &(inteval->stack[((hsi*478800+45523422)*1+lsi)*1]), &(inteval->stack[((hsi*418950+22335782)*1+lsi)*1]),190);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*622440+21522772)*1+lsi)*1]), &(inteval->stack[((hsi*558600+46002222)*1+lsi)*1]), &(inteval->stack[((hsi*484120+20474352)*1+lsi)*1]),190);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*666900+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*622440+21522772)*1+lsi)*1]), &(inteval->stack[((hsi*533520+47016822)*1+lsi)*1]),190);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*689700+45208782)*1+lsi)*1]), &(inteval->stack[((hsi*666900+44541882)*1+lsi)*1]), &(inteval->stack[((hsi*564300+20958472)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*1862190+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*689700+45208782)*1+lsi)*1]), &(inteval->stack[((hsi*620730+528000)*1+lsi)*1]),3630);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*3332340+67966272)*1+lsi)*1]), &(inteval->stack[((hsi*1862190+20326152)*1+lsi)*1]), &(inteval->stack[((hsi*1666170+16943322)*1+lsi)*1]),3630);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*4936800+71298612)*1+lsi)*1]), &(inteval->stack[((hsi*3332340+67966272)*1+lsi)*1]), &(inteval->stack[((hsi*2962080+47994012)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*6534000+76235412)*1+lsi)*1]), &(inteval->stack[((hsi*4936800+71298612)*1+lsi)*1]), &(inteval->stack[((hsi*4356000+50956092)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*8004150+45898482)*1+lsi)*1]), &(inteval->stack[((hsi*6534000+76235412)*1+lsi)*1]), &(inteval->stack[((hsi*5717250+55312092)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*9249240+82769412)*1+lsi)*1]), &(inteval->stack[((hsi*8004150+45898482)*1+lsi)*1]), &(inteval->stack[((hsi*6936930+61029342)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*10193040+53902632)*1+lsi)*1]), &(inteval->stack[((hsi*9249240+82769412)*1+lsi)*1]), &(inteval->stack[((hsi*7927920+36613962)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1726890)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1732896)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+64111116)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1719960)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1726890)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+64129134)*1+lsi)*1]), &(inteval->stack[((hsi*18018+64111116)*1+lsi)*1]), &(inteval->stack[((hsi*15444+64095672)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+64160022)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1712040)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1719960)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+64180812)*1+lsi)*1]), &(inteval->stack[((hsi*20790+64160022)*1+lsi)*1]), &(inteval->stack[((hsi*18018+64111116)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+64216848)*1+lsi)*1]), &(inteval->stack[((hsi*36036+64180812)*1+lsi)*1]), &(inteval->stack[((hsi*30888+64129134)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+64268328)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1703064)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1712040)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+64292088)*1+lsi)*1]), &(inteval->stack[((hsi*23760+64268328)*1+lsi)*1]), &(inteval->stack[((hsi*20790+64160022)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+64333668)*1+lsi)*1]), &(inteval->stack[((hsi*41580+64292088)*1+lsi)*1]), &(inteval->stack[((hsi*36036+64180812)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+64393728)*1+lsi)*1]), &(inteval->stack[((hsi*60060+64333668)*1+lsi)*1]), &(inteval->stack[((hsi*51480+64216848)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+64470948)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1692966)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1703064)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+64497876)*1+lsi)*1]), &(inteval->stack[((hsi*26928+64470948)*1+lsi)*1]), &(inteval->stack[((hsi*23760+64268328)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+64545396)*1+lsi)*1]), &(inteval->stack[((hsi*47520+64497876)*1+lsi)*1]), &(inteval->stack[((hsi*41580+64292088)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+64614696)*1+lsi)*1]), &(inteval->stack[((hsi*69300+64545396)*1+lsi)*1]), &(inteval->stack[((hsi*60060+64333668)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+64704786)*1+lsi)*1]), &(inteval->stack[((hsi*90090+64614696)*1+lsi)*1]), &(inteval->stack[((hsi*77220+64393728)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+64812894)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1681680)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1692966)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+64843188)*1+lsi)*1]), &(inteval->stack[((hsi*30294+64812894)*1+lsi)*1]), &(inteval->stack[((hsi*26928+64470948)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+64897044)*1+lsi)*1]), &(inteval->stack[((hsi*53856+64843188)*1+lsi)*1]), &(inteval->stack[((hsi*47520+64497876)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+64976244)*1+lsi)*1]), &(inteval->stack[((hsi*79200+64897044)*1+lsi)*1]), &(inteval->stack[((hsi*69300+64545396)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+65080194)*1+lsi)*1]), &(inteval->stack[((hsi*103950+64976244)*1+lsi)*1]), &(inteval->stack[((hsi*90090+64614696)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+65206320)*1+lsi)*1]), &(inteval->stack[((hsi*126126+65080194)*1+lsi)*1]), &(inteval->stack[((hsi*108108+64704786)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+65350464)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1669140)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1681680)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+65384322)*1+lsi)*1]), &(inteval->stack[((hsi*33858+65350464)*1+lsi)*1]), &(inteval->stack[((hsi*30294+64812894)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+65444910)*1+lsi)*1]), &(inteval->stack[((hsi*60588+65384322)*1+lsi)*1]), &(inteval->stack[((hsi*53856+64843188)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+65534670)*1+lsi)*1]), &(inteval->stack[((hsi*89760+65444910)*1+lsi)*1]), &(inteval->stack[((hsi*79200+64897044)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+65653470)*1+lsi)*1]), &(inteval->stack[((hsi*118800+65534670)*1+lsi)*1]), &(inteval->stack[((hsi*103950+64976244)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+65799000)*1+lsi)*1]), &(inteval->stack[((hsi*145530+65653470)*1+lsi)*1]), &(inteval->stack[((hsi*126126+65080194)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+65967168)*1+lsi)*1]), &(inteval->stack[((hsi*168168+65799000)*1+lsi)*1]), &(inteval->stack[((hsi*144144+65206320)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1732896)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1738044)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+66165564)*1+lsi)*1]), &(inteval->stack[((hsi*15444+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*13068+66152496)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+66191700)*1+lsi)*1]), &(inteval->stack[((hsi*30888+64129134)*1+lsi)*1]), &(inteval->stack[((hsi*26136+66165564)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+66235260)*1+lsi)*1]), &(inteval->stack[((hsi*51480+64216848)*1+lsi)*1]), &(inteval->stack[((hsi*43560+66191700)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*77220+64393728)*1+lsi)*1]), &(inteval->stack[((hsi*65340+66235260)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*108108+64704786)*1+lsi)*1]), &(inteval->stack[((hsi*91476+16943322)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+66274464)*1+lsi)*1]), &(inteval->stack[((hsi*144144+65206320)*1+lsi)*1]), &(inteval->stack[((hsi*121968+66152496)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+16943322)*1+lsi)*1]), &(inteval->stack[((hsi*185328+65967168)*1+lsi)*1]), &(inteval->stack[((hsi*156816+66274464)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1655280)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1669140)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+66190116)*1+lsi)*1]), &(inteval->stack[((hsi*37620+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*33858+65350464)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+66257832)*1+lsi)*1]), &(inteval->stack[((hsi*67716+66190116)*1+lsi)*1]), &(inteval->stack[((hsi*60588+65384322)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+66358812)*1+lsi)*1]), &(inteval->stack[((hsi*100980+66257832)*1+lsi)*1]), &(inteval->stack[((hsi*89760+65444910)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+17139342)*1+lsi)*1]), &(inteval->stack[((hsi*134640+66358812)*1+lsi)*1]), &(inteval->stack[((hsi*118800+65534670)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*166320+17139342)*1+lsi)*1]), &(inteval->stack[((hsi*145530+65653470)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*194040+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*168168+65799000)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*216216+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*185328+65967168)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*231660+66152496)*1+lsi)*1]), &(inteval->stack[((hsi*196020+16943322)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+64335252)*1+lsi)*1]), &(inteval->stack[((hsi*283140+15480432)*1+lsi)*1]), &(inteval->stack[((hsi*239580+64095672)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+65053992)*1+lsi)*1]), &(inteval->stack[((hsi*849420+16093902)*1+lsi)*1]), &(inteval->stack[((hsi*718740+64335252)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+18627312)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+65053992)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+23451582)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+14919300)*1+lsi)*1]),3630);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*5031180+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+32366862)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+64095672)*1+lsi)*1]),3630);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*6708240+92018652)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+26282982)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+14919300)*1+lsi)*1]),3630);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*8624880+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*7927920+36613962)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+92018652)*1+lsi)*1]),3630);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*10781100+30813222)*1+lsi)*1]), &(inteval->stack[((hsi*10193040+53902632)*1+lsi)*1]), &(inteval->stack[((hsi*8624880+22188342)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*49140+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*19110+227850)*1+lsi)*1]), &(inteval->stack[((hsi*16380+246960)*1+lsi)*1]),210);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*57330+22237482)*1+lsi)*1]), &(inteval->stack[((hsi*22050+205800)*1+lsi)*1]), &(inteval->stack[((hsi*19110+227850)*1+lsi)*1]),210);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*98280+22294812)*1+lsi)*1]), &(inteval->stack[((hsi*57330+22237482)*1+lsi)*1]), &(inteval->stack[((hsi*49140+22188342)*1+lsi)*1]),210);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*66150+22393092)*1+lsi)*1]), &(inteval->stack[((hsi*25200+180600)*1+lsi)*1]), &(inteval->stack[((hsi*22050+205800)*1+lsi)*1]),210);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*114660+22459242)*1+lsi)*1]), &(inteval->stack[((hsi*66150+22393092)*1+lsi)*1]), &(inteval->stack[((hsi*57330+22237482)*1+lsi)*1]),210);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*163800+22573902)*1+lsi)*1]), &(inteval->stack[((hsi*114660+22459242)*1+lsi)*1]), &(inteval->stack[((hsi*98280+22294812)*1+lsi)*1]),210);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*75600+22737702)*1+lsi)*1]), &(inteval->stack[((hsi*28560+152040)*1+lsi)*1]), &(inteval->stack[((hsi*25200+180600)*1+lsi)*1]),210);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*132300+22813302)*1+lsi)*1]), &(inteval->stack[((hsi*75600+22737702)*1+lsi)*1]), &(inteval->stack[((hsi*66150+22393092)*1+lsi)*1]),210);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*191100+22945602)*1+lsi)*1]), &(inteval->stack[((hsi*132300+22813302)*1+lsi)*1]), &(inteval->stack[((hsi*114660+22459242)*1+lsi)*1]),210);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*245700+23136702)*1+lsi)*1]), &(inteval->stack[((hsi*191100+22945602)*1+lsi)*1]), &(inteval->stack[((hsi*163800+22573902)*1+lsi)*1]),210);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*85680+23382402)*1+lsi)*1]), &(inteval->stack[((hsi*32130+119910)*1+lsi)*1]), &(inteval->stack[((hsi*28560+152040)*1+lsi)*1]),210);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*151200+23468082)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23382402)*1+lsi)*1]), &(inteval->stack[((hsi*75600+22737702)*1+lsi)*1]),210);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*220500+23619282)*1+lsi)*1]), &(inteval->stack[((hsi*151200+23468082)*1+lsi)*1]), &(inteval->stack[((hsi*132300+22813302)*1+lsi)*1]),210);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*286650+23839782)*1+lsi)*1]), &(inteval->stack[((hsi*220500+23619282)*1+lsi)*1]), &(inteval->stack[((hsi*191100+22945602)*1+lsi)*1]),210);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*343980+24126432)*1+lsi)*1]), &(inteval->stack[((hsi*286650+23839782)*1+lsi)*1]), &(inteval->stack[((hsi*245700+23136702)*1+lsi)*1]),210);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*96390+24470412)*1+lsi)*1]), &(inteval->stack[((hsi*35910+84000)*1+lsi)*1]), &(inteval->stack[((hsi*32130+119910)*1+lsi)*1]),210);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*171360+24566802)*1+lsi)*1]), &(inteval->stack[((hsi*96390+24470412)*1+lsi)*1]), &(inteval->stack[((hsi*85680+23382402)*1+lsi)*1]),210);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*252000+24738162)*1+lsi)*1]), &(inteval->stack[((hsi*171360+24566802)*1+lsi)*1]), &(inteval->stack[((hsi*151200+23468082)*1+lsi)*1]),210);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*330750+24990162)*1+lsi)*1]), &(inteval->stack[((hsi*252000+24738162)*1+lsi)*1]), &(inteval->stack[((hsi*220500+23619282)*1+lsi)*1]),210);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*401310+25320912)*1+lsi)*1]), &(inteval->stack[((hsi*330750+24990162)*1+lsi)*1]), &(inteval->stack[((hsi*286650+23839782)*1+lsi)*1]),210);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*458640+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*401310+25320912)*1+lsi)*1]), &(inteval->stack[((hsi*343980+24126432)*1+lsi)*1]),210);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*107730+25722222)*1+lsi)*1]), &(inteval->stack[((hsi*39900+44100)*1+lsi)*1]), &(inteval->stack[((hsi*35910+84000)*1+lsi)*1]),210);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*192780+25829952)*1+lsi)*1]), &(inteval->stack[((hsi*107730+25722222)*1+lsi)*1]), &(inteval->stack[((hsi*96390+24470412)*1+lsi)*1]),210);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*285600+15377940)*1+lsi)*1]), &(inteval->stack[((hsi*192780+25829952)*1+lsi)*1]), &(inteval->stack[((hsi*171360+24566802)*1+lsi)*1]),210);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*378000+26022732)*1+lsi)*1]), &(inteval->stack[((hsi*285600+15377940)*1+lsi)*1]), &(inteval->stack[((hsi*252000+24738162)*1+lsi)*1]),210);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*463050+15663540)*1+lsi)*1]), &(inteval->stack[((hsi*378000+26022732)*1+lsi)*1]), &(inteval->stack[((hsi*330750+24990162)*1+lsi)*1]),210);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*535080+26400732)*1+lsi)*1]), &(inteval->stack[((hsi*463050+15663540)*1+lsi)*1]), &(inteval->stack[((hsi*401310+25320912)*1+lsi)*1]),210);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*589680+16126590)*1+lsi)*1]), &(inteval->stack[((hsi*535080+26400732)*1+lsi)*1]), &(inteval->stack[((hsi*458640+14919300)*1+lsi)*1]),210);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*41580+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*16380+246960)*1+lsi)*1]), &(inteval->stack[((hsi*13860+263340)*1+lsi)*1]),210);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*83160+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*49140+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*41580+26935812)*1+lsi)*1]),210);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*138600+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*98280+22294812)*1+lsi)*1]), &(inteval->stack[((hsi*83160+64095672)*1+lsi)*1]),210);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*207900+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*163800+22573902)*1+lsi)*1]), &(inteval->stack[((hsi*138600+26935812)*1+lsi)*1]),210);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*291060+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*245700+23136702)*1+lsi)*1]), &(inteval->stack[((hsi*207900+64095672)*1+lsi)*1]),210);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*388080+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*343980+24126432)*1+lsi)*1]), &(inteval->stack[((hsi*291060+26935812)*1+lsi)*1]),210);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*498960+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*458640+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*388080+64095672)*1+lsi)*1]),210);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*623700+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*589680+16126590)*1+lsi)*1]), &(inteval->stack[((hsi*498960+26935812)*1+lsi)*1]),210);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*119700+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*44100+0)*1+lsi)*1]), &(inteval->stack[((hsi*39900+44100)*1+lsi)*1]),210);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*215460+27055512)*1+lsi)*1]), &(inteval->stack[((hsi*119700+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*107730+25722222)*1+lsi)*1]),210);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*321300+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*215460+27055512)*1+lsi)*1]), &(inteval->stack[((hsi*192780+25829952)*1+lsi)*1]),210);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*428400+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*321300+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*285600+15377940)*1+lsi)*1]),210);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*529200+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*428400+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*378000+26022732)*1+lsi)*1]),210);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*617400+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*529200+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*463050+15663540)*1+lsi)*1]),210);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*687960+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*617400+26935812)*1+lsi)*1]), &(inteval->stack[((hsi*535080+26400732)*1+lsi)*1]),210);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*737100+22876302)*1+lsi)*1]), &(inteval->stack[((hsi*687960+22188342)*1+lsi)*1]), &(inteval->stack[((hsi*589680+16126590)*1+lsi)*1]),210);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*762300+23613402)*1+lsi)*1]), &(inteval->stack[((hsi*737100+22876302)*1+lsi)*1]), &(inteval->stack[((hsi*623700+64095672)*1+lsi)*1]),210);
HRRPart0bra0ket0plp(inteval, &(inteval->stack[((hsi*2069100+24375702)*1+lsi)*1]), &(inteval->stack[((hsi*762300+23613402)*1+lsi)*1]), &(inteval->stack[((hsi*689700+45208782)*1+lsi)*1]),3630);
HRRPart0bra0ket0pkd(inteval, &(inteval->stack[((hsi*3724380+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*2069100+24375702)*1+lsi)*1]), &(inteval->stack[((hsi*1862190+20326152)*1+lsi)*1]),3630);
HRRPart0bra0ket0pif(inteval, &(inteval->stack[((hsi*5553900+18643680)*1+lsi)*1]), &(inteval->stack[((hsi*3724380+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*3332340+67966272)*1+lsi)*1]),3630);
HRRPart0bra0ket0phg(inteval, &(inteval->stack[((hsi*7405200+92018652)*1+lsi)*1]), &(inteval->stack[((hsi*5553900+18643680)*1+lsi)*1]), &(inteval->stack[((hsi*4936800+71298612)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgh(inteval, &(inteval->stack[((hsi*9147600+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*7405200+92018652)*1+lsi)*1]), &(inteval->stack[((hsi*6534000+76235412)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfi(inteval, &(inteval->stack[((hsi*10672200+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*9147600+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*8004150+45898482)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdk(inteval, &(inteval->stack[((hsi*11891880+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*10672200+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*9249240+82769412)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppl(inteval, &(inteval->stack[((hsi*12741300+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*11891880+14919300)*1+lsi)*1]), &(inteval->stack[((hsi*10193040+53902632)*1+lsi)*1]),3630);
HRRPart0bra0ket0psm(inteval, &(inteval->stack[((hsi*13176900+1742400)*1+lsi)*1]), &(inteval->stack[((hsi*12741300+64095672)*1+lsi)*1]), &(inteval->stack[((hsi*10781100+30813222)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*13176900+1742400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
