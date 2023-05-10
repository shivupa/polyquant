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
#include <_aB_PS__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,312800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_F__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*7098+233750)*1+lsi)*1]), &(inteval->stack[((hsi*6084+240848)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1899212)*1+lsi)*1]), &(inteval->stack[((hsi*8190+225560)*1+lsi)*1]), &(inteval->stack[((hsi*7098+233750)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1920506)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1899212)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1880960)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1957010)*1+lsi)*1]), &(inteval->stack[((hsi*9360+216200)*1+lsi)*1]), &(inteval->stack[((hsi*8190+225560)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1981580)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1957010)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1899212)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+2024168)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1981580)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1920506)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+2085008)*1+lsi)*1]), &(inteval->stack[((hsi*10608+205592)*1+lsi)*1]), &(inteval->stack[((hsi*9360+216200)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+2113088)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2085008)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1957010)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+2162228)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2113088)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1981580)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+2233208)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2162228)*1+lsi)*1]), &(inteval->stack[((hsi*60840+2024168)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1957010)*1+lsi)*1]), &(inteval->stack[((hsi*11934+193658)*1+lsi)*1]), &(inteval->stack[((hsi*10608+205592)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+2324468)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1957010)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2085008)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+2380628)*1+lsi)*1]), &(inteval->stack[((hsi*56160+2324468)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2113088)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+2462528)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2380628)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2162228)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+2085008)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2462528)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2233208)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1988834)*1+lsi)*1]), &(inteval->stack[((hsi*6084+240848)*1+lsi)*1]), &(inteval->stack[((hsi*5148+246932)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+205592)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1988834)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+2568998)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1920506)*1+lsi)*1]), &(inteval->stack[((hsi*30888+205592)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+2620478)*1+lsi)*1]), &(inteval->stack[((hsi*60840+2024168)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2568998)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+2697698)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2233208)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2620478)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+2805806)*1+lsi)*1]), &(inteval->stack[((hsi*127764+2085008)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2697698)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+2568998)*1+lsi)*1]), &(inteval->stack[((hsi*13338+180320)*1+lsi)*1]), &(inteval->stack[((hsi*11934+193658)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+2604800)*1+lsi)*1]), &(inteval->stack[((hsi*35802+2568998)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1957010)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*63648+2604800)*1+lsi)*1]), &(inteval->stack[((hsi*56160+2324468)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+2568998)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2380628)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+2212772)*1+lsi)*1]), &(inteval->stack[((hsi*122850+2568998)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2462528)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+2361830)*1+lsi)*1]), &(inteval->stack[((hsi*149058+2212772)*1+lsi)*1]), &(inteval->stack[((hsi*127764+2085008)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*170352+2361830)*1+lsi)*1]), &(inteval->stack[((hsi*144144+2805806)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+180320)*1+lsi)*1]), &(inteval->stack[((hsi*8281+158935)*1+lsi)*1]), &(inteval->stack[((hsi*7098+167216)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+201614)*1+lsi)*1]), &(inteval->stack[((hsi*9555+149380)*1+lsi)*1]), &(inteval->stack[((hsi*8281+158935)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+2066288)*1+lsi)*1]), &(inteval->stack[((hsi*24843+201614)*1+lsi)*1]), &(inteval->stack[((hsi*21294+180320)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+2108876)*1+lsi)*1]), &(inteval->stack[((hsi*10920+138460)*1+lsi)*1]), &(inteval->stack[((hsi*9555+149380)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+2137541)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2108876)*1+lsi)*1]), &(inteval->stack[((hsi*24843+201614)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+2187227)*1+lsi)*1]), &(inteval->stack[((hsi*49686+2137541)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2066288)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+201614)*1+lsi)*1]), &(inteval->stack[((hsi*12376+126084)*1+lsi)*1]), &(inteval->stack[((hsi*10920+138460)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+2258207)*1+lsi)*1]), &(inteval->stack[((hsi*32760+201614)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2108876)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+2315537)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2258207)*1+lsi)*1]), &(inteval->stack[((hsi*49686+2137541)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+2398347)*1+lsi)*1]), &(inteval->stack[((hsi*82810+2315537)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2187227)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+2108876)*1+lsi)*1]), &(inteval->stack[((hsi*13923+112161)*1+lsi)*1]), &(inteval->stack[((hsi*12376+126084)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+2504817)*1+lsi)*1]), &(inteval->stack[((hsi*37128+2108876)*1+lsi)*1]), &(inteval->stack[((hsi*32760+201614)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+2570337)*1+lsi)*1]), &(inteval->stack[((hsi*65520+2504817)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2258207)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+2665887)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2570337)*1+lsi)*1]), &(inteval->stack[((hsi*82810+2315537)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+2790102)*1+lsi)*1]), &(inteval->stack[((hsi*124215+2665887)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2398347)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+2258207)*1+lsi)*1]), &(inteval->stack[((hsi*7098+167216)*1+lsi)*1]), &(inteval->stack[((hsi*6006+174314)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+2276225)*1+lsi)*1]), &(inteval->stack[((hsi*21294+180320)*1+lsi)*1]), &(inteval->stack[((hsi*18018+2258207)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+126084)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2066288)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2276225)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+2258207)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2187227)*1+lsi)*1]), &(inteval->stack[((hsi*60060+126084)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+2939160)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2398347)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2258207)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+2146004)*1+lsi)*1]), &(inteval->stack[((hsi*149058+2790102)*1+lsi)*1]), &(inteval->stack[((hsi*126126+2939160)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+2314172)*1+lsi)*1]), &(inteval->stack[((hsi*15561+96600)*1+lsi)*1]), &(inteval->stack[((hsi*13923+112161)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+96600)*1+lsi)*1]), &(inteval->stack[((hsi*41769+2314172)*1+lsi)*1]), &(inteval->stack[((hsi*37128+2108876)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+2314172)*1+lsi)*1]), &(inteval->stack[((hsi*74256+96600)*1+lsi)*1]), &(inteval->stack[((hsi*65520+2504817)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+96600)*1+lsi)*1]), &(inteval->stack[((hsi*109200+2314172)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2570337)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+2314172)*1+lsi)*1]), &(inteval->stack[((hsi*143325+96600)*1+lsi)*1]), &(inteval->stack[((hsi*124215+2665887)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+2488073)*1+lsi)*1]), &(inteval->stack[((hsi*173901+2314172)*1+lsi)*1]), &(inteval->stack[((hsi*149058+2790102)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+2686817)*1+lsi)*1]), &(inteval->stack[((hsi*198744+2488073)*1+lsi)*1]), &(inteval->stack[((hsi*168168+2146004)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*555984+2066288)*1+lsi)*1]), &(inteval->stack[((hsi*216216+2686817)*1+lsi)*1]), &(inteval->stack[((hsi*185328+1880960)*1+lsi)*1]),2376);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+96600)*1+lsi)*1]), &(inteval->stack[((hsi*6006+297290)*1+lsi)*1]), &(inteval->stack[((hsi*5148+303296)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+112044)*1+lsi)*1]), &(inteval->stack[((hsi*6930+290360)*1+lsi)*1]), &(inteval->stack[((hsi*6006+297290)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+130062)*1+lsi)*1]), &(inteval->stack[((hsi*18018+112044)*1+lsi)*1]), &(inteval->stack[((hsi*15444+96600)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+160950)*1+lsi)*1]), &(inteval->stack[((hsi*7920+282440)*1+lsi)*1]), &(inteval->stack[((hsi*6930+290360)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+181740)*1+lsi)*1]), &(inteval->stack[((hsi*20790+160950)*1+lsi)*1]), &(inteval->stack[((hsi*18018+112044)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+2622272)*1+lsi)*1]), &(inteval->stack[((hsi*36036+181740)*1+lsi)*1]), &(inteval->stack[((hsi*30888+130062)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+217776)*1+lsi)*1]), &(inteval->stack[((hsi*8976+273464)*1+lsi)*1]), &(inteval->stack[((hsi*7920+282440)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*23760+217776)*1+lsi)*1]), &(inteval->stack[((hsi*20790+160950)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+2944613)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*36036+181740)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+3004673)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2944613)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2622272)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+160950)*1+lsi)*1]), &(inteval->stack[((hsi*10098+263366)*1+lsi)*1]), &(inteval->stack[((hsi*8976+273464)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+3081893)*1+lsi)*1]), &(inteval->stack[((hsi*26928+160950)*1+lsi)*1]), &(inteval->stack[((hsi*23760+217776)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+3129413)*1+lsi)*1]), &(inteval->stack[((hsi*47520+3081893)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2903033)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+3198713)*1+lsi)*1]), &(inteval->stack[((hsi*69300+3129413)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2944613)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+3288803)*1+lsi)*1]), &(inteval->stack[((hsi*90090+3198713)*1+lsi)*1]), &(inteval->stack[((hsi*77220+3004673)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*5148+303296)*1+lsi)*1]), &(inteval->stack[((hsi*4356+308444)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+2916101)*1+lsi)*1]), &(inteval->stack[((hsi*15444+96600)*1+lsi)*1]), &(inteval->stack[((hsi*13068+2903033)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+187878)*1+lsi)*1]), &(inteval->stack[((hsi*30888+130062)*1+lsi)*1]), &(inteval->stack[((hsi*26136+2916101)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2622272)*1+lsi)*1]), &(inteval->stack[((hsi*43560+187878)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+3396911)*1+lsi)*1]), &(inteval->stack[((hsi*77220+3004673)*1+lsi)*1]), &(inteval->stack[((hsi*65340+2903033)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*108108+3288803)*1+lsi)*1]), &(inteval->stack[((hsi*91476+3396911)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+2622272)*1+lsi)*1]), &(inteval->stack[((hsi*11286+252080)*1+lsi)*1]), &(inteval->stack[((hsi*10098+263366)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+187878)*1+lsi)*1]), &(inteval->stack[((hsi*30294+2622272)*1+lsi)*1]), &(inteval->stack[((hsi*26928+160950)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+96600)*1+lsi)*1]), &(inteval->stack[((hsi*53856+187878)*1+lsi)*1]), &(inteval->stack[((hsi*47520+3081893)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+175800)*1+lsi)*1]), &(inteval->stack[((hsi*79200+96600)*1+lsi)*1]), &(inteval->stack[((hsi*69300+3129413)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+3025001)*1+lsi)*1]), &(inteval->stack[((hsi*103950+175800)*1+lsi)*1]), &(inteval->stack[((hsi*90090+3198713)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+96600)*1+lsi)*1]), &(inteval->stack[((hsi*126126+3025001)*1+lsi)*1]), &(inteval->stack[((hsi*108108+3288803)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+3025001)*1+lsi)*1]), &(inteval->stack[((hsi*144144+96600)*1+lsi)*1]), &(inteval->stack[((hsi*121968+2903033)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*470448+3181817)*1+lsi)*1]), &(inteval->stack[((hsi*185328+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*156816+3025001)*1+lsi)*1]),2376);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*940896+3652265)*1+lsi)*1]), &(inteval->stack[((hsi*555984+2066288)*1+lsi)*1]), &(inteval->stack[((hsi*470448+3181817)*1+lsi)*1]),2376);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*9555+71925)*1+lsi)*1]), &(inteval->stack[((hsi*8190+81480)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+2927603)*1+lsi)*1]), &(inteval->stack[((hsi*11025+60900)*1+lsi)*1]), &(inteval->stack[((hsi*9555+71925)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+2956268)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2927603)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2903033)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+3005408)*1+lsi)*1]), &(inteval->stack[((hsi*12600+48300)*1+lsi)*1]), &(inteval->stack[((hsi*11025+60900)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+3038483)*1+lsi)*1]), &(inteval->stack[((hsi*33075+3005408)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2927603)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+3095813)*1+lsi)*1]), &(inteval->stack[((hsi*57330+3038483)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2956268)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+3177713)*1+lsi)*1]), &(inteval->stack[((hsi*14280+34020)*1+lsi)*1]), &(inteval->stack[((hsi*12600+48300)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+3215513)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3177713)*1+lsi)*1]), &(inteval->stack[((hsi*33075+3005408)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+3281663)*1+lsi)*1]), &(inteval->stack[((hsi*66150+3215513)*1+lsi)*1]), &(inteval->stack[((hsi*57330+3038483)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+3377213)*1+lsi)*1]), &(inteval->stack[((hsi*95550+3281663)*1+lsi)*1]), &(inteval->stack[((hsi*81900+3095813)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+96600)*1+lsi)*1]), &(inteval->stack[((hsi*16065+17955)*1+lsi)*1]), &(inteval->stack[((hsi*14280+34020)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*42840+96600)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3177713)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+139440)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1880960)*1+lsi)*1]), &(inteval->stack[((hsi*66150+3215513)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+3500063)*1+lsi)*1]), &(inteval->stack[((hsi*110250+139440)*1+lsi)*1]), &(inteval->stack[((hsi*95550+3281663)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+3177713)*1+lsi)*1]), &(inteval->stack[((hsi*143325+3500063)*1+lsi)*1]), &(inteval->stack[((hsi*122850+3377213)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1956560)*1+lsi)*1]), &(inteval->stack[((hsi*8190+81480)*1+lsi)*1]), &(inteval->stack[((hsi*6930+89670)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+3005408)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1956560)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1956560)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2956268)*1+lsi)*1]), &(inteval->stack[((hsi*41580+3005408)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*81900+3095813)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1956560)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+3006983)*1+lsi)*1]), &(inteval->stack[((hsi*122850+3377213)*1+lsi)*1]), &(inteval->stack[((hsi*103950+2903033)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+4593161)*1+lsi)*1]), &(inteval->stack[((hsi*171990+3177713)*1+lsi)*1]), &(inteval->stack[((hsi*145530+3006983)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*17955+0)*1+lsi)*1]), &(inteval->stack[((hsi*16065+17955)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+2951228)*1+lsi)*1]), &(inteval->stack[((hsi*48195+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*42840+96600)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+3349703)*1+lsi)*1]), &(inteval->stack[((hsi*85680+2951228)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1880960)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*126000+3349703)*1+lsi)*1]), &(inteval->stack[((hsi*110250+139440)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+0)*1+lsi)*1]), &(inteval->stack[((hsi*165375+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*143325+3500063)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+3349703)*1+lsi)*1]), &(inteval->stack[((hsi*200655+0)*1+lsi)*1]), &(inteval->stack[((hsi*171990+3177713)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*229320+3349703)*1+lsi)*1]), &(inteval->stack[((hsi*194040+4593161)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*648648+4593161)*1+lsi)*1]), &(inteval->stack[((hsi*249480+2903033)*1+lsi)*1]), &(inteval->stack[((hsi*216216+2686817)*1+lsi)*1]),2376);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1111968+5241809)*1+lsi)*1]), &(inteval->stack[((hsi*648648+4593161)*1+lsi)*1]), &(inteval->stack[((hsi*555984+2066288)*1+lsi)*1]),2376);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1568160+312800)*1+lsi)*1]), &(inteval->stack[((hsi*1111968+5241809)*1+lsi)*1]), &(inteval->stack[((hsi*940896+3652265)*1+lsi)*1]),2376);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1568160+312800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
