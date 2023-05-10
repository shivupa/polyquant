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
#include <_aB_PS__0__M__1___TwoPRep_I__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_I__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,872585)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_I__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*6084+780173)*1+lsi)*1]), &(inteval->stack[((hsi*5148+786257)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+6478229)*1+lsi)*1]), &(inteval->stack[((hsi*7098+773075)*1+lsi)*1]), &(inteval->stack[((hsi*6084+780173)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+6496481)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6478229)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6462785)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+6527369)*1+lsi)*1]), &(inteval->stack[((hsi*8190+764885)*1+lsi)*1]), &(inteval->stack[((hsi*7098+773075)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+6548663)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6527369)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6478229)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+6585167)*1+lsi)*1]), &(inteval->stack[((hsi*36504+6548663)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6496481)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+6636647)*1+lsi)*1]), &(inteval->stack[((hsi*9360+755525)*1+lsi)*1]), &(inteval->stack[((hsi*8190+764885)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+6661217)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6636647)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6527369)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+6703805)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6661217)*1+lsi)*1]), &(inteval->stack[((hsi*36504+6548663)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+6764645)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6703805)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6585167)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+6527369)*1+lsi)*1]), &(inteval->stack[((hsi*10608+744917)*1+lsi)*1]), &(inteval->stack[((hsi*9360+755525)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+6841865)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6527369)*1+lsi)*1]), &(inteval->stack[((hsi*24570+6636647)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+6891005)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6841865)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6661217)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+6961985)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6891005)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6703805)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+6636647)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6961985)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6764645)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+7053245)*1+lsi)*1]), &(inteval->stack[((hsi*11934+732983)*1+lsi)*1]), &(inteval->stack[((hsi*10608+744917)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+7085069)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7053245)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6527369)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+7141229)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7085069)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6841865)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+7223129)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7141229)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6891005)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+7329599)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7223129)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6961985)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+6841865)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7329599)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6636647)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+6986009)*1+lsi)*1]), &(inteval->stack[((hsi*13338+719645)*1+lsi)*1]), &(inteval->stack[((hsi*11934+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+7457363)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6986009)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7053245)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+7521011)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7457363)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7085069)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+7614611)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7521011)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7141229)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7021811)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7614611)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7223129)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+7737461)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7021811)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7329599)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+7170869)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7737461)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6841865)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*5148+786257)*1+lsi)*1]), &(inteval->stack[((hsi*4290+791405)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+7369067)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*12870+7356197)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+732983)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6496481)*1+lsi)*1]), &(inteval->stack[((hsi*25740+7369067)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6585167)*1+lsi)*1]), &(inteval->stack[((hsi*42900+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+6527135)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6764645)*1+lsi)*1]), &(inteval->stack[((hsi*64350+6462785)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+7907813)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6636647)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6527135)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6841865)*1+lsi)*1]), &(inteval->stack[((hsi*120120+7907813)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+6617225)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7170869)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6462785)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*14820+704825)*1+lsi)*1]), &(inteval->stack[((hsi*13338+719645)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6986009)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*71604+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7457363)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*106080+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7521011)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7614611)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7021811)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7737461)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*219024+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7170869)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7356197)*1+lsi)*1]), &(inteval->stack[((hsi*193050+6617225)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*7098+686716)*1+lsi)*1]), &(inteval->stack[((hsi*6006+693814)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+6480803)*1+lsi)*1]), &(inteval->stack[((hsi*8281+678435)*1+lsi)*1]), &(inteval->stack[((hsi*7098+686716)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+6502097)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6480803)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6462785)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+6538133)*1+lsi)*1]), &(inteval->stack[((hsi*9555+668880)*1+lsi)*1]), &(inteval->stack[((hsi*8281+678435)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+6562976)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6538133)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6480803)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+6605564)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6562976)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6502097)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+6665624)*1+lsi)*1]), &(inteval->stack[((hsi*10920+657960)*1+lsi)*1]), &(inteval->stack[((hsi*9555+668880)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+6694289)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6665624)*1+lsi)*1]), &(inteval->stack[((hsi*24843+6538133)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+704825)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6694289)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6562976)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+7046225)*1+lsi)*1]), &(inteval->stack[((hsi*70980+704825)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6605564)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+6538133)*1+lsi)*1]), &(inteval->stack[((hsi*12376+645584)*1+lsi)*1]), &(inteval->stack[((hsi*10920+657960)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+6743975)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6538133)*1+lsi)*1]), &(inteval->stack[((hsi*28665+6665624)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7136315)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6743975)*1+lsi)*1]), &(inteval->stack[((hsi*49686+6694289)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+7219125)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7136315)*1+lsi)*1]), &(inteval->stack[((hsi*70980+704825)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+7325595)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7219125)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7046225)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+704825)*1+lsi)*1]), &(inteval->stack[((hsi*13923+631661)*1+lsi)*1]), &(inteval->stack[((hsi*12376+645584)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+6665624)*1+lsi)*1]), &(inteval->stack[((hsi*37128+704825)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6538133)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+7451721)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6665624)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6743975)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+7547271)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7451721)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7136315)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+7671486)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7547271)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7219125)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+7136315)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7671486)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7325595)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6731144)*1+lsi)*1]), &(inteval->stack[((hsi*15561+616100)*1+lsi)*1]), &(inteval->stack[((hsi*13923+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+7820544)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6731144)*1+lsi)*1]), &(inteval->stack[((hsi*37128+704825)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+7894800)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7820544)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6665624)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8004000)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7894800)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7451721)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+8147325)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8004000)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7547271)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+7451721)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8147325)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7671486)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+8321226)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7451721)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7136315)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*6006+693814)*1+lsi)*1]), &(inteval->stack[((hsi*5005+699820)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+631661)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*15015+7650465)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*36036+6502097)*1+lsi)*1]), &(inteval->stack[((hsi*30030+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+631661)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6605564)*1+lsi)*1]), &(inteval->stack[((hsi*50050+7650465)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7046225)*1+lsi)*1]), &(inteval->stack[((hsi*75075+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7325595)*1+lsi)*1]), &(inteval->stack[((hsi*105105+6462785)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7136315)*1+lsi)*1]), &(inteval->stack[((hsi*140140+7650465)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+7046225)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8321226)*1+lsi)*1]), &(inteval->stack[((hsi*180180+6462785)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*17290+598810)*1+lsi)*1]), &(inteval->stack[((hsi*15561+616100)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+6509468)*1+lsi)*1]), &(inteval->stack[((hsi*46683+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6731144)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+6593006)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6509468)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7820544)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6593006)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7894800)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*163800+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8004000)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*200655+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8147325)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+7882333)*1+lsi)*1]), &(inteval->stack[((hsi*231868+7650465)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7451721)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+7271450)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7882333)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8321226)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7271450)*1+lsi)*1]), &(inteval->stack[((hsi*225225+7046225)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+7046225)*1+lsi)*1]), &(inteval->stack[((hsi*275275+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*235950+6810275)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+598810)*1+lsi)*1]), &(inteval->stack[((hsi*8190+577915)*1+lsi)*1]), &(inteval->stack[((hsi*6930+586105)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+619600)*1+lsi)*1]), &(inteval->stack[((hsi*9555+568360)*1+lsi)*1]), &(inteval->stack[((hsi*8190+577915)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+644170)*1+lsi)*1]), &(inteval->stack[((hsi*24570+619600)*1+lsi)*1]), &(inteval->stack[((hsi*20790+598810)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+685750)*1+lsi)*1]), &(inteval->stack[((hsi*11025+557335)*1+lsi)*1]), &(inteval->stack[((hsi*9555+568360)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+714415)*1+lsi)*1]), &(inteval->stack[((hsi*28665+685750)*1+lsi)*1]), &(inteval->stack[((hsi*24570+619600)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+6738060)*1+lsi)*1]), &(inteval->stack[((hsi*49140+714415)*1+lsi)*1]), &(inteval->stack[((hsi*41580+644170)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*12600+544735)*1+lsi)*1]), &(inteval->stack[((hsi*11025+557335)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7787150)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*28665+685750)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+7844480)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7787150)*1+lsi)*1]), &(inteval->stack[((hsi*49140+714415)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+685750)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7844480)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6738060)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+7926380)*1+lsi)*1]), &(inteval->stack[((hsi*14280+530455)*1+lsi)*1]), &(inteval->stack[((hsi*12600+544735)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7964180)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7926380)*1+lsi)*1]), &(inteval->stack[((hsi*33075+7754075)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8030330)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7964180)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7787150)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+8125880)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8030330)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7844480)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8125880)*1+lsi)*1]), &(inteval->stack[((hsi*103950+685750)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+8248730)*1+lsi)*1]), &(inteval->stack[((hsi*16065+514390)*1+lsi)*1]), &(inteval->stack[((hsi*14280+530455)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+8291570)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8248730)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7926380)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+8367170)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8291570)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7964180)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+8477420)*1+lsi)*1]), &(inteval->stack[((hsi*110250+8367170)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8030330)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+7899605)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8477420)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8125880)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+8620745)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7899605)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7754075)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+8071595)*1+lsi)*1]), &(inteval->stack[((hsi*17955+496435)*1+lsi)*1]), &(inteval->stack[((hsi*16065+514390)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+8119790)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8071595)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8248730)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+8814785)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8119790)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8291570)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+8940785)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8814785)*1+lsi)*1]), &(inteval->stack[((hsi*110250+8367170)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+8205470)*1+lsi)*1]), &(inteval->stack[((hsi*165375+8940785)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8477420)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+9106160)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8205470)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7899605)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+9335480)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9106160)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8620745)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+8406125)*1+lsi)*1]), &(inteval->stack[((hsi*6930+586105)*1+lsi)*1]), &(inteval->stack[((hsi*5775+593035)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+8423450)*1+lsi)*1]), &(inteval->stack[((hsi*20790+598810)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8406125)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+7899605)*1+lsi)*1]), &(inteval->stack[((hsi*41580+644170)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8423450)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+8406125)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6738060)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7899605)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+7899605)*1+lsi)*1]), &(inteval->stack[((hsi*103950+685750)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8406125)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+514390)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*121275+7899605)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*194040+8620745)*1+lsi)*1]), &(inteval->stack[((hsi*161700+514390)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+8406125)*1+lsi)*1]), &(inteval->stack[((hsi*249480+9335480)*1+lsi)*1]), &(inteval->stack[((hsi*207900+7754075)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*19950+476485)*1+lsi)*1]), &(inteval->stack[((hsi*17955+496435)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+476485)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8071595)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*96390+476485)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8119790)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+476485)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8814785)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*189000+476485)*1+lsi)*1]), &(inteval->stack[((hsi*165375+8940785)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+8666000)*1+lsi)*1]), &(inteval->stack[((hsi*231525+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8205470)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*267540+8666000)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9106160)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+8666000)*1+lsi)*1]), &(inteval->stack[((hsi*294840+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*249480+9335480)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*311850+8666000)*1+lsi)*1]), &(inteval->stack[((hsi*259875+8406125)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+8071700)*1+lsi)*1]), &(inteval->stack[((hsi*317625+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*275275+6462785)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+8897525)*1+lsi)*1]), &(inteval->stack[((hsi*825825+8071700)*1+lsi)*1]), &(inteval->stack[((hsi*707850+7046225)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*9360+452605)*1+lsi)*1]), &(inteval->stack[((hsi*7920+461965)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+6486545)*1+lsi)*1]), &(inteval->stack[((hsi*10920+441685)*1+lsi)*1]), &(inteval->stack[((hsi*9360+452605)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+476485)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6486545)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6462785)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+6514625)*1+lsi)*1]), &(inteval->stack[((hsi*12600+429085)*1+lsi)*1]), &(inteval->stack[((hsi*10920+441685)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+524005)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6514625)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6486545)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+6547385)*1+lsi)*1]), &(inteval->stack[((hsi*56160+524005)*1+lsi)*1]), &(inteval->stack[((hsi*47520+476485)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+580165)*1+lsi)*1]), &(inteval->stack[((hsi*14400+414685)*1+lsi)*1]), &(inteval->stack[((hsi*12600+429085)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+6626585)*1+lsi)*1]), &(inteval->stack[((hsi*37800+580165)*1+lsi)*1]), &(inteval->stack[((hsi*32760+6514625)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+617965)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6626585)*1+lsi)*1]), &(inteval->stack[((hsi*56160+524005)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*93600+617965)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6547385)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+6692105)*1+lsi)*1]), &(inteval->stack[((hsi*16320+398365)*1+lsi)*1]), &(inteval->stack[((hsi*14400+414685)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+711565)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6692105)*1+lsi)*1]), &(inteval->stack[((hsi*37800+580165)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+10432025)*1+lsi)*1]), &(inteval->stack[((hsi*75600+711565)*1+lsi)*1]), &(inteval->stack[((hsi*65520+6626585)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+10541225)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10432025)*1+lsi)*1]), &(inteval->stack[((hsi*93600+617965)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+524005)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10541225)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10313225)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+6735305)*1+lsi)*1]), &(inteval->stack[((hsi*18360+380005)*1+lsi)*1]), &(inteval->stack[((hsi*16320+398365)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+10681625)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6735305)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6692105)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+10768025)*1+lsi)*1]), &(inteval->stack[((hsi*86400+10681625)*1+lsi)*1]), &(inteval->stack[((hsi*75600+711565)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+10894025)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10768025)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10432025)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+11057825)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10894025)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10541225)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+10432025)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11057825)*1+lsi)*1]), &(inteval->stack[((hsi*166320+524005)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+6626585)*1+lsi)*1]), &(inteval->stack[((hsi*20520+359485)*1+lsi)*1]), &(inteval->stack[((hsi*18360+380005)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+690325)*1+lsi)*1]), &(inteval->stack[((hsi*55080+6626585)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6735305)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+11254385)*1+lsi)*1]), &(inteval->stack[((hsi*97920+690325)*1+lsi)*1]), &(inteval->stack[((hsi*86400+10681625)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+11398385)*1+lsi)*1]), &(inteval->stack[((hsi*144000+11254385)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10768025)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+10653785)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11398385)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10894025)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+11587385)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10653785)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11057825)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+10883105)*1+lsi)*1]), &(inteval->stack[((hsi*262080+11587385)*1+lsi)*1]), &(inteval->stack[((hsi*221760+10432025)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+6681665)*1+lsi)*1]), &(inteval->stack[((hsi*7920+461965)*1+lsi)*1]), &(inteval->stack[((hsi*6600+469885)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+6701465)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*19800+6681665)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+380005)*1+lsi)*1]), &(inteval->stack[((hsi*47520+476485)*1+lsi)*1]), &(inteval->stack[((hsi*39600+6701465)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+6681665)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6547385)*1+lsi)*1]), &(inteval->stack[((hsi*66000+380005)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*99000+6681665)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+11849465)*1+lsi)*1]), &(inteval->stack[((hsi*166320+524005)*1+lsi)*1]), &(inteval->stack[((hsi*138600+6462785)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+380005)*1+lsi)*1]), &(inteval->stack[((hsi*221760+10432025)*1+lsi)*1]), &(inteval->stack[((hsi*184800+11849465)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*285120+10883105)*1+lsi)*1]), &(inteval->stack[((hsi*237600+380005)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+380005)*1+lsi)*1]), &(inteval->stack[((hsi*22800+336685)*1+lsi)*1]), &(inteval->stack[((hsi*20520+359485)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+441565)*1+lsi)*1]), &(inteval->stack[((hsi*61560+380005)*1+lsi)*1]), &(inteval->stack[((hsi*55080+6626585)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*110160+441565)*1+lsi)*1]), &(inteval->stack[((hsi*97920+690325)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+336685)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*144000+11254385)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*216000+336685)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11398385)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+336685)*1+lsi)*1]), &(inteval->stack[((hsi*264600+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10653785)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+11168225)*1+lsi)*1]), &(inteval->stack[((hsi*305760+336685)*1+lsi)*1]), &(inteval->stack[((hsi*262080+11587385)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+336685)*1+lsi)*1]), &(inteval->stack[((hsi*336960+11168225)*1+lsi)*1]), &(inteval->stack[((hsi*285120+10883105)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+10610225)*1+lsi)*1]), &(inteval->stack[((hsi*356400+336685)*1+lsi)*1]), &(inteval->stack[((hsi*297000+10313225)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+10973225)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10610225)*1+lsi)*1]), &(inteval->stack[((hsi*317625+7754075)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+11926100)*1+lsi)*1]), &(inteval->stack[((hsi*952875+10973225)*1+lsi)*1]), &(inteval->stack[((hsi*825825+8071700)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+13577750)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+11926100)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+8897525)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*10608+309621)*1+lsi)*1]), &(inteval->stack[((hsi*8976+320229)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+7781003)*1+lsi)*1]), &(inteval->stack[((hsi*12376+297245)*1+lsi)*1]), &(inteval->stack[((hsi*10608+309621)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+7812827)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7781003)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7754075)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+7866683)*1+lsi)*1]), &(inteval->stack[((hsi*14280+282965)*1+lsi)*1]), &(inteval->stack[((hsi*12376+297245)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+7903811)*1+lsi)*1]), &(inteval->stack[((hsi*37128+7866683)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7781003)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+7967459)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7903811)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7812827)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+8057219)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266645)*1+lsi)*1]), &(inteval->stack[((hsi*14280+282965)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+8100059)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8057219)*1+lsi)*1]), &(inteval->stack[((hsi*37128+7866683)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+8174315)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8100059)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7903811)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+8280395)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8174315)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7967459)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+8415035)*1+lsi)*1]), &(inteval->stack[((hsi*18496+248149)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266645)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+336685)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8415035)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8057219)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+8463995)*1+lsi)*1]), &(inteval->stack[((hsi*85680+336685)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8100059)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+422365)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8463995)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8174315)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*159120+422365)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8280395)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+8587755)*1+lsi)*1]), &(inteval->stack[((hsi*20808+227341)*1+lsi)*1]), &(inteval->stack[((hsi*18496+248149)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*55488+8587755)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8415035)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+8643243)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*85680+336685)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+8057219)*1+lsi)*1]), &(inteval->stack[((hsi*142800+8643243)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8463995)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8057219)*1+lsi)*1]), &(inteval->stack[((hsi*159120+422365)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+336685)*1+lsi)*1]), &(inteval->stack[((hsi*222768+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*188496+6462785)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+588013)*1+lsi)*1]), &(inteval->stack[((hsi*23256+204085)*1+lsi)*1]), &(inteval->stack[((hsi*20808+227341)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+10411145)*1+lsi)*1]), &(inteval->stack[((hsi*62424+588013)*1+lsi)*1]), &(inteval->stack[((hsi*55488+8587755)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+8415035)*1+lsi)*1]), &(inteval->stack[((hsi*110976+10411145)*1+lsi)*1]), &(inteval->stack[((hsi*97920+10313225)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+16160018)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8415035)*1+lsi)*1]), &(inteval->stack[((hsi*142800+8643243)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+8578235)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16160018)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8057219)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+16374218)*1+lsi)*1]), &(inteval->stack[((hsi*259896+8578235)*1+lsi)*1]), &(inteval->stack[((hsi*222768+15937250)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+16671242)*1+lsi)*1]), &(inteval->stack[((hsi*297024+16374218)*1+lsi)*1]), &(inteval->stack[((hsi*251328+336685)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+8057219)*1+lsi)*1]), &(inteval->stack[((hsi*8976+320229)*1+lsi)*1]), &(inteval->stack[((hsi*7480+329205)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8057219)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+8057219)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7812827)*1+lsi)*1]), &(inteval->stack[((hsi*44880+15937250)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7967459)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8057219)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8280395)*1+lsi)*1]), &(inteval->stack[((hsi*112200+15937250)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+7911155)*1+lsi)*1]), &(inteval->stack[((hsi*188496+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*157080+7754075)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*251328+336685)*1+lsi)*1]), &(inteval->stack[((hsi*209440+7911155)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+7754075)*1+lsi)*1]), &(inteval->stack[((hsi*323136+16671242)*1+lsi)*1]), &(inteval->stack[((hsi*269280+6462785)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+227341)*1+lsi)*1]), &(inteval->stack[((hsi*25840+178245)*1+lsi)*1]), &(inteval->stack[((hsi*23256+204085)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*69768+227341)*1+lsi)*1]), &(inteval->stack[((hsi*62424+588013)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+178245)*1+lsi)*1]), &(inteval->stack[((hsi*124848+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*110976+10411145)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+363205)*1+lsi)*1]), &(inteval->stack[((hsi*184960+178245)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8415035)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+8090675)*1+lsi)*1]), &(inteval->stack[((hsi*244800+363205)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16160018)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+178245)*1+lsi)*1]), &(inteval->stack[((hsi*299880+8090675)*1+lsi)*1]), &(inteval->stack[((hsi*259896+8578235)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+8090675)*1+lsi)*1]), &(inteval->stack[((hsi*346528+178245)*1+lsi)*1]), &(inteval->stack[((hsi*297024+16374218)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*381888+8090675)*1+lsi)*1]), &(inteval->stack[((hsi*323136+16671242)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+8090675)*1+lsi)*1]), &(inteval->stack[((hsi*403920+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*336600+7754075)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*411400+8090675)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10610225)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+17026250)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+15937250)*1+lsi)*1]), &(inteval->stack[((hsi*952875+10973225)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+18932000)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+17026250)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+11926100)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+21684750)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+18932000)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+13577750)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*5148+859451)*1+lsi)*1]), &(inteval->stack[((hsi*4356+864599)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+10326293)*1+lsi)*1]), &(inteval->stack[((hsi*6006+853445)*1+lsi)*1]), &(inteval->stack[((hsi*5148+859451)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+10341737)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10326293)*1+lsi)*1]), &(inteval->stack[((hsi*13068+10313225)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+10367873)*1+lsi)*1]), &(inteval->stack[((hsi*6930+846515)*1+lsi)*1]), &(inteval->stack[((hsi*6006+853445)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+10385891)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10367873)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10326293)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+10416779)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10385891)*1+lsi)*1]), &(inteval->stack[((hsi*26136+10341737)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+10460339)*1+lsi)*1]), &(inteval->stack[((hsi*7920+838595)*1+lsi)*1]), &(inteval->stack[((hsi*6930+846515)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+10481129)*1+lsi)*1]), &(inteval->stack[((hsi*20790+10460339)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10367873)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+10517165)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10481129)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10385891)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+10568645)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10517165)*1+lsi)*1]), &(inteval->stack[((hsi*43560+10416779)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+10633985)*1+lsi)*1]), &(inteval->stack[((hsi*8976+829619)*1+lsi)*1]), &(inteval->stack[((hsi*7920+838595)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+10657745)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10633985)*1+lsi)*1]), &(inteval->stack[((hsi*20790+10460339)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+10699325)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10657745)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10481129)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+10759385)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10699325)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10517165)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+10836605)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10759385)*1+lsi)*1]), &(inteval->stack[((hsi*65340+10568645)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+10928081)*1+lsi)*1]), &(inteval->stack[((hsi*10098+819521)*1+lsi)*1]), &(inteval->stack[((hsi*8976+829619)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+10955009)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10928081)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10633985)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+11002529)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10955009)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10657745)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+11071829)*1+lsi)*1]), &(inteval->stack[((hsi*69300+11002529)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10699325)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+11161919)*1+lsi)*1]), &(inteval->stack[((hsi*90090+11071829)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10759385)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+11270027)*1+lsi)*1]), &(inteval->stack[((hsi*108108+11161919)*1+lsi)*1]), &(inteval->stack[((hsi*91476+10836605)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+11391995)*1+lsi)*1]), &(inteval->stack[((hsi*11286+808235)*1+lsi)*1]), &(inteval->stack[((hsi*10098+819521)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+11422289)*1+lsi)*1]), &(inteval->stack[((hsi*30294+11391995)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10928081)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+11476145)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11422289)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10955009)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+11555345)*1+lsi)*1]), &(inteval->stack[((hsi*79200+11476145)*1+lsi)*1]), &(inteval->stack[((hsi*69300+11002529)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+11659295)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11555345)*1+lsi)*1]), &(inteval->stack[((hsi*90090+11071829)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+11785421)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11659295)*1+lsi)*1]), &(inteval->stack[((hsi*108108+11161919)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+11929565)*1+lsi)*1]), &(inteval->stack[((hsi*144144+11785421)*1+lsi)*1]), &(inteval->stack[((hsi*121968+11270027)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+12086381)*1+lsi)*1]), &(inteval->stack[((hsi*4356+864599)*1+lsi)*1]), &(inteval->stack[((hsi*3630+868955)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+12097271)*1+lsi)*1]), &(inteval->stack[((hsi*13068+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*10890+12086381)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+12119051)*1+lsi)*1]), &(inteval->stack[((hsi*26136+10341737)*1+lsi)*1]), &(inteval->stack[((hsi*21780+12097271)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+12155351)*1+lsi)*1]), &(inteval->stack[((hsi*43560+10416779)*1+lsi)*1]), &(inteval->stack[((hsi*36300+12119051)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+12209801)*1+lsi)*1]), &(inteval->stack[((hsi*65340+10568645)*1+lsi)*1]), &(inteval->stack[((hsi*54450+12155351)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+12286031)*1+lsi)*1]), &(inteval->stack[((hsi*91476+10836605)*1+lsi)*1]), &(inteval->stack[((hsi*76230+12209801)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+12387671)*1+lsi)*1]), &(inteval->stack[((hsi*121968+11270027)*1+lsi)*1]), &(inteval->stack[((hsi*101640+12286031)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+10313225)*1+lsi)*1]), &(inteval->stack[((hsi*156816+11929565)*1+lsi)*1]), &(inteval->stack[((hsi*130680+12387671)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+12086381)*1+lsi)*1]), &(inteval->stack[((hsi*12540+795695)*1+lsi)*1]), &(inteval->stack[((hsi*11286+808235)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+12120239)*1+lsi)*1]), &(inteval->stack[((hsi*33858+12086381)*1+lsi)*1]), &(inteval->stack[((hsi*30294+11391995)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+12180827)*1+lsi)*1]), &(inteval->stack[((hsi*60588+12120239)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11422289)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+12270587)*1+lsi)*1]), &(inteval->stack[((hsi*89760+12180827)*1+lsi)*1]), &(inteval->stack[((hsi*79200+11476145)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+12389387)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12270587)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11555345)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+10476575)*1+lsi)*1]), &(inteval->stack[((hsi*145530+12389387)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11659295)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+12086381)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10476575)*1+lsi)*1]), &(inteval->stack[((hsi*144144+11785421)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+10476575)*1+lsi)*1]), &(inteval->stack[((hsi*185328+12086381)*1+lsi)*1]), &(inteval->stack[((hsi*156816+11929565)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+10672595)*1+lsi)*1]), &(inteval->stack[((hsi*196020+10476575)*1+lsi)*1]), &(inteval->stack[((hsi*163350+10313225)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+10872245)*1+lsi)*1]), &(inteval->stack[((hsi*235950+6810275)*1+lsi)*1]), &(inteval->stack[((hsi*199650+10672595)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+11471195)*1+lsi)*1]), &(inteval->stack[((hsi*707850+7046225)*1+lsi)*1]), &(inteval->stack[((hsi*598950+10872245)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+25224000)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+8897525)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11471195)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+8502075)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+13577750)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+25224000)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+11496825)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+21684750)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+8502075)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+8502075)*1+lsi)*1]), &(inteval->stack[((hsi*11934+147798)*1+lsi)*1]), &(inteval->stack[((hsi*10098+159732)*1+lsi)*1]),153);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+8532369)*1+lsi)*1]), &(inteval->stack[((hsi*13923+133875)*1+lsi)*1]), &(inteval->stack[((hsi*11934+147798)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+8568171)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8532369)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8502075)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+8628759)*1+lsi)*1]), &(inteval->stack[((hsi*16065+117810)*1+lsi)*1]), &(inteval->stack[((hsi*13923+133875)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+8670528)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8628759)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8532369)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+8742132)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8670528)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8568171)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+8843112)*1+lsi)*1]), &(inteval->stack[((hsi*18360+99450)*1+lsi)*1]), &(inteval->stack[((hsi*16065+117810)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+8891307)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8843112)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8628759)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+8974845)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8891307)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8670528)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+9094185)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8974845)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8742132)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+9245655)*1+lsi)*1]), &(inteval->stack[((hsi*20808+78642)*1+lsi)*1]), &(inteval->stack[((hsi*18360+99450)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+9300735)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9245655)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8843112)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+9397125)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9300735)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8891307)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+9536355)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9397125)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8974845)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+9715365)*1+lsi)*1]), &(inteval->stack[((hsi*179010+9536355)*1+lsi)*1]), &(inteval->stack[((hsi*151470+9094185)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*23409+55233)*1+lsi)*1]), &(inteval->stack[((hsi*20808+78642)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+9927423)*1+lsi)*1]), &(inteval->stack[((hsi*62424+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9245655)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+6525209)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9927423)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9300735)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+10037583)*1+lsi)*1]), &(inteval->stack[((hsi*160650+6525209)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9397125)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+6685859)*1+lsi)*1]), &(inteval->stack[((hsi*208845+10037583)*1+lsi)*1]), &(inteval->stack[((hsi*179010+9536355)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+10246428)*1+lsi)*1]), &(inteval->stack[((hsi*250614+6685859)*1+lsi)*1]), &(inteval->stack[((hsi*212058+9715365)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+6936473)*1+lsi)*1]), &(inteval->stack[((hsi*26163+29070)*1+lsi)*1]), &(inteval->stack[((hsi*23409+55233)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+7006700)*1+lsi)*1]), &(inteval->stack[((hsi*70227+6936473)*1+lsi)*1]), &(inteval->stack[((hsi*62424+6462785)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+10529172)*1+lsi)*1]), &(inteval->stack[((hsi*124848+7006700)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9927423)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+7131548)*1+lsi)*1]), &(inteval->stack[((hsi*183600+10529172)*1+lsi)*1]), &(inteval->stack[((hsi*160650+6525209)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+10712772)*1+lsi)*1]), &(inteval->stack[((hsi*240975+7131548)*1+lsi)*1]), &(inteval->stack[((hsi*208845+10037583)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+7372523)*1+lsi)*1]), &(inteval->stack[((hsi*292383+10712772)*1+lsi)*1]), &(inteval->stack[((hsi*250614+6685859)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+178245)*1+lsi)*1]), &(inteval->stack[((hsi*334152+7372523)*1+lsi)*1]), &(inteval->stack[((hsi*282744+10246428)*1+lsi)*1]),153);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+11005155)*1+lsi)*1]), &(inteval->stack[((hsi*10098+159732)*1+lsi)*1]), &(inteval->stack[((hsi*8415+169830)*1+lsi)*1]),153);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*50490+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*30294+8502075)*1+lsi)*1]), &(inteval->stack[((hsi*25245+11005155)*1+lsi)*1]),153);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+11005155)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8568171)*1+lsi)*1]), &(inteval->stack[((hsi*50490+6462785)*1+lsi)*1]),153);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8742132)*1+lsi)*1]), &(inteval->stack[((hsi*84150+11005155)*1+lsi)*1]),153);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+8502075)*1+lsi)*1]), &(inteval->stack[((hsi*151470+9094185)*1+lsi)*1]), &(inteval->stack[((hsi*126225+6462785)*1+lsi)*1]),153);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+8678790)*1+lsi)*1]), &(inteval->stack[((hsi*212058+9715365)*1+lsi)*1]), &(inteval->stack[((hsi*176715+8502075)*1+lsi)*1]),153);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+8914410)*1+lsi)*1]), &(inteval->stack[((hsi*282744+10246428)*1+lsi)*1]), &(inteval->stack[((hsi*235620+8678790)*1+lsi)*1]),153);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*378675+9217350)*1+lsi)*1]), &(inteval->stack[((hsi*363528+178245)*1+lsi)*1]), &(inteval->stack[((hsi*302940+8914410)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*29070+0)*1+lsi)*1]), &(inteval->stack[((hsi*26163+29070)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+9674514)*1+lsi)*1]), &(inteval->stack[((hsi*78489+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*70227+6936473)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+8502075)*1+lsi)*1]), &(inteval->stack[((hsi*140454+9674514)*1+lsi)*1]), &(inteval->stack[((hsi*124848+7006700)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*208080+8502075)*1+lsi)*1]), &(inteval->stack[((hsi*183600+10529172)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+9871425)*1+lsi)*1]), &(inteval->stack[((hsi*275400+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*240975+7131548)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*337365+9871425)*1+lsi)*1]), &(inteval->stack[((hsi*292383+10712772)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*389844+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*334152+7372523)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*429624+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*363528+178245)*1+lsi)*1]),153);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*462825+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*454410+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*378675+9217350)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1234200+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*462825+9596025)*1+lsi)*1]), &(inteval->stack[((hsi*411400+8090675)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2178000+7696985)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+15937250)*1+lsi)*1]),3025);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3176250+25224000)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+7696985)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+17026250)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4129125+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+25224000)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+18932000)*1+lsi)*1]),3025);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*4954950+15689475)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+6462785)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+21684750)*1+lsi)*1]),3025);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*5590200+872585)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+15689475)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+11496825)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5590200+872585)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
