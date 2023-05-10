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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
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
#include <_aB_PS__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_K__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1071800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*6084+979388)*1+lsi)*1]), &(inteval->stack[((hsi*5148+985472)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+8274644)*1+lsi)*1]), &(inteval->stack[((hsi*7098+972290)*1+lsi)*1]), &(inteval->stack[((hsi*6084+979388)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+8292896)*1+lsi)*1]), &(inteval->stack[((hsi*18252+8274644)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8259200)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+8323784)*1+lsi)*1]), &(inteval->stack[((hsi*8190+964100)*1+lsi)*1]), &(inteval->stack[((hsi*7098+972290)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+8345078)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8323784)*1+lsi)*1]), &(inteval->stack[((hsi*18252+8274644)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+8381582)*1+lsi)*1]), &(inteval->stack[((hsi*36504+8345078)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8292896)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+8433062)*1+lsi)*1]), &(inteval->stack[((hsi*9360+954740)*1+lsi)*1]), &(inteval->stack[((hsi*8190+964100)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+8457632)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8433062)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8323784)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+8500220)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8457632)*1+lsi)*1]), &(inteval->stack[((hsi*36504+8345078)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+8561060)*1+lsi)*1]), &(inteval->stack[((hsi*60840+8500220)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8381582)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+8323784)*1+lsi)*1]), &(inteval->stack[((hsi*10608+944132)*1+lsi)*1]), &(inteval->stack[((hsi*9360+954740)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+8638280)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8323784)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8433062)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+8687420)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8638280)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8457632)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+8758400)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8687420)*1+lsi)*1]), &(inteval->stack[((hsi*60840+8500220)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+8433062)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8758400)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8561060)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+8849660)*1+lsi)*1]), &(inteval->stack[((hsi*11934+932198)*1+lsi)*1]), &(inteval->stack[((hsi*10608+944132)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+8881484)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8849660)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8323784)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+8937644)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8881484)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8638280)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+9019544)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8937644)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8687420)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+9126014)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9019544)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8758400)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+8638280)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9126014)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8433062)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+8782424)*1+lsi)*1]), &(inteval->stack[((hsi*13338+918860)*1+lsi)*1]), &(inteval->stack[((hsi*11934+932198)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+9253778)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8782424)*1+lsi)*1]), &(inteval->stack[((hsi*31824+8849660)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+9317426)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9253778)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8881484)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+9411026)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9317426)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8937644)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8818226)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9411026)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9019544)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9533876)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8818226)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9126014)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+8967284)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9533876)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8638280)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*5148+985472)*1+lsi)*1]), &(inteval->stack[((hsi*4290+990620)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+9165482)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*12870+9152612)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+932198)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8292896)*1+lsi)*1]), &(inteval->stack[((hsi*25740+9165482)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8381582)*1+lsi)*1]), &(inteval->stack[((hsi*42900+932198)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+8323550)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8561060)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8259200)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+9704228)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8433062)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8323550)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8638280)*1+lsi)*1]), &(inteval->stack[((hsi*120120+9704228)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+8413640)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8967284)*1+lsi)*1]), &(inteval->stack[((hsi*154440+8259200)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*14820+904040)*1+lsi)*1]), &(inteval->stack[((hsi*13338+918860)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8782424)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9253778)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9317426)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9411026)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8818226)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9533876)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8967284)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9152612)*1+lsi)*1]), &(inteval->stack[((hsi*193050+8413640)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*7098+885931)*1+lsi)*1]), &(inteval->stack[((hsi*6006+893029)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+8277218)*1+lsi)*1]), &(inteval->stack[((hsi*8281+877650)*1+lsi)*1]), &(inteval->stack[((hsi*7098+885931)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+8298512)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8277218)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8259200)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+8334548)*1+lsi)*1]), &(inteval->stack[((hsi*9555+868095)*1+lsi)*1]), &(inteval->stack[((hsi*8281+877650)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+8359391)*1+lsi)*1]), &(inteval->stack[((hsi*24843+8334548)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8277218)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+8401979)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8359391)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8298512)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+8462039)*1+lsi)*1]), &(inteval->stack[((hsi*10920+857175)*1+lsi)*1]), &(inteval->stack[((hsi*9555+868095)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+8490704)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8462039)*1+lsi)*1]), &(inteval->stack[((hsi*24843+8334548)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+904040)*1+lsi)*1]), &(inteval->stack[((hsi*49686+8490704)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8359391)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+8842640)*1+lsi)*1]), &(inteval->stack[((hsi*70980+904040)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8401979)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+8334548)*1+lsi)*1]), &(inteval->stack[((hsi*12376+844799)*1+lsi)*1]), &(inteval->stack[((hsi*10920+857175)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+8540390)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8334548)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8462039)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+8932730)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8540390)*1+lsi)*1]), &(inteval->stack[((hsi*49686+8490704)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+9015540)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8932730)*1+lsi)*1]), &(inteval->stack[((hsi*70980+904040)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+9122010)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9015540)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8842640)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+904040)*1+lsi)*1]), &(inteval->stack[((hsi*13923+830876)*1+lsi)*1]), &(inteval->stack[((hsi*12376+844799)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+8462039)*1+lsi)*1]), &(inteval->stack[((hsi*37128+904040)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8334548)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+9248136)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8462039)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8540390)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+9343686)*1+lsi)*1]), &(inteval->stack[((hsi*95550+9248136)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8932730)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+9467901)*1+lsi)*1]), &(inteval->stack[((hsi*124215+9343686)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9015540)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+8932730)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9467901)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9122010)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+8527559)*1+lsi)*1]), &(inteval->stack[((hsi*15561+815315)*1+lsi)*1]), &(inteval->stack[((hsi*13923+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+9616959)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8527559)*1+lsi)*1]), &(inteval->stack[((hsi*37128+904040)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+9691215)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9616959)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8462039)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+9800415)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9691215)*1+lsi)*1]), &(inteval->stack[((hsi*95550+9248136)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+9943740)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9800415)*1+lsi)*1]), &(inteval->stack[((hsi*124215+9343686)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+9248136)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9943740)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9467901)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+10117641)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9248136)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8932730)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*6006+893029)*1+lsi)*1]), &(inteval->stack[((hsi*5005+899035)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+830876)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*15015+9446880)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8298512)*1+lsi)*1]), &(inteval->stack[((hsi*30030+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+830876)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8401979)*1+lsi)*1]), &(inteval->stack[((hsi*50050+9446880)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8842640)*1+lsi)*1]), &(inteval->stack[((hsi*75075+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9122010)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8259200)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8932730)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9446880)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+8842640)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10117641)*1+lsi)*1]), &(inteval->stack[((hsi*180180+8259200)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*17290+798025)*1+lsi)*1]), &(inteval->stack[((hsi*15561+815315)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+8305883)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8527559)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+8389421)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8305883)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9616959)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8389421)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9691215)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9800415)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9943740)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+9678748)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9446880)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9248136)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+9067865)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9678748)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10117641)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9067865)*1+lsi)*1]), &(inteval->stack[((hsi*225225+8842640)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+8842640)*1+lsi)*1]), &(inteval->stack[((hsi*275275+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*235950+8606690)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+798025)*1+lsi)*1]), &(inteval->stack[((hsi*8190+777130)*1+lsi)*1]), &(inteval->stack[((hsi*6930+785320)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+818815)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767575)*1+lsi)*1]), &(inteval->stack[((hsi*8190+777130)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+843385)*1+lsi)*1]), &(inteval->stack[((hsi*24570+818815)*1+lsi)*1]), &(inteval->stack[((hsi*20790+798025)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+884965)*1+lsi)*1]), &(inteval->stack[((hsi*11025+756550)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767575)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+913630)*1+lsi)*1]), &(inteval->stack[((hsi*28665+884965)*1+lsi)*1]), &(inteval->stack[((hsi*24570+818815)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+8534475)*1+lsi)*1]), &(inteval->stack[((hsi*49140+913630)*1+lsi)*1]), &(inteval->stack[((hsi*41580+843385)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*12600+743950)*1+lsi)*1]), &(inteval->stack[((hsi*11025+756550)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+9583565)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*28665+884965)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+9640895)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9583565)*1+lsi)*1]), &(inteval->stack[((hsi*49140+913630)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+884965)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9640895)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8534475)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+9722795)*1+lsi)*1]), &(inteval->stack[((hsi*14280+729670)*1+lsi)*1]), &(inteval->stack[((hsi*12600+743950)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+9760595)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9722795)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9550490)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+9826745)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9760595)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9583565)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+9922295)*1+lsi)*1]), &(inteval->stack[((hsi*95550+9826745)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9640895)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9922295)*1+lsi)*1]), &(inteval->stack[((hsi*103950+884965)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+10045145)*1+lsi)*1]), &(inteval->stack[((hsi*16065+713605)*1+lsi)*1]), &(inteval->stack[((hsi*14280+729670)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+10087985)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10045145)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9722795)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+10163585)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10087985)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9760595)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+10273835)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10163585)*1+lsi)*1]), &(inteval->stack[((hsi*95550+9826745)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+9696020)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10273835)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9922295)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+10417160)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9696020)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9550490)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+9868010)*1+lsi)*1]), &(inteval->stack[((hsi*17955+695650)*1+lsi)*1]), &(inteval->stack[((hsi*16065+713605)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+9916205)*1+lsi)*1]), &(inteval->stack[((hsi*48195+9868010)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10045145)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+10611200)*1+lsi)*1]), &(inteval->stack[((hsi*85680+9916205)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10087985)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+10737200)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10611200)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10163585)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+10001885)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10737200)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10273835)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+10902575)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10001885)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9696020)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+11131895)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10902575)*1+lsi)*1]), &(inteval->stack[((hsi*194040+10417160)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+10202540)*1+lsi)*1]), &(inteval->stack[((hsi*6930+785320)*1+lsi)*1]), &(inteval->stack[((hsi*5775+792250)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+10219865)*1+lsi)*1]), &(inteval->stack[((hsi*20790+798025)*1+lsi)*1]), &(inteval->stack[((hsi*17325+10202540)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+9696020)*1+lsi)*1]), &(inteval->stack[((hsi*41580+843385)*1+lsi)*1]), &(inteval->stack[((hsi*34650+10219865)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+10202540)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8534475)*1+lsi)*1]), &(inteval->stack[((hsi*57750+9696020)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+9696020)*1+lsi)*1]), &(inteval->stack[((hsi*103950+884965)*1+lsi)*1]), &(inteval->stack[((hsi*86625+10202540)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+713605)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*121275+9696020)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*194040+10417160)*1+lsi)*1]), &(inteval->stack[((hsi*161700+713605)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+10202540)*1+lsi)*1]), &(inteval->stack[((hsi*249480+11131895)*1+lsi)*1]), &(inteval->stack[((hsi*207900+9550490)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*19950+675700)*1+lsi)*1]), &(inteval->stack[((hsi*17955+695650)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+675700)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*48195+9868010)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*96390+675700)*1+lsi)*1]), &(inteval->stack[((hsi*85680+9916205)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+675700)*1+lsi)*1]), &(inteval->stack[((hsi*142800+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*126000+10611200)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*189000+675700)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10737200)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+10462415)*1+lsi)*1]), &(inteval->stack[((hsi*231525+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10001885)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10462415)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10902575)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+10462415)*1+lsi)*1]), &(inteval->stack[((hsi*294840+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*249480+11131895)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*311850+10462415)*1+lsi)*1]), &(inteval->stack[((hsi*259875+10202540)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+9868115)*1+lsi)*1]), &(inteval->stack[((hsi*317625+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*275275+8259200)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+10693940)*1+lsi)*1]), &(inteval->stack[((hsi*825825+9868115)*1+lsi)*1]), &(inteval->stack[((hsi*707850+8842640)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*9360+651820)*1+lsi)*1]), &(inteval->stack[((hsi*7920+661180)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+8282960)*1+lsi)*1]), &(inteval->stack[((hsi*10920+640900)*1+lsi)*1]), &(inteval->stack[((hsi*9360+651820)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+675700)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8282960)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8259200)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+8311040)*1+lsi)*1]), &(inteval->stack[((hsi*12600+628300)*1+lsi)*1]), &(inteval->stack[((hsi*10920+640900)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+723220)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8311040)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8282960)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+8343800)*1+lsi)*1]), &(inteval->stack[((hsi*56160+723220)*1+lsi)*1]), &(inteval->stack[((hsi*47520+675700)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+779380)*1+lsi)*1]), &(inteval->stack[((hsi*14400+613900)*1+lsi)*1]), &(inteval->stack[((hsi*12600+628300)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+8423000)*1+lsi)*1]), &(inteval->stack[((hsi*37800+779380)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8311040)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+817180)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8423000)*1+lsi)*1]), &(inteval->stack[((hsi*56160+723220)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*93600+817180)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8343800)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+8488520)*1+lsi)*1]), &(inteval->stack[((hsi*16320+597580)*1+lsi)*1]), &(inteval->stack[((hsi*14400+613900)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+910780)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8488520)*1+lsi)*1]), &(inteval->stack[((hsi*37800+779380)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+12228440)*1+lsi)*1]), &(inteval->stack[((hsi*75600+910780)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8423000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+12337640)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12228440)*1+lsi)*1]), &(inteval->stack[((hsi*93600+817180)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+723220)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12337640)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12109640)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+8531720)*1+lsi)*1]), &(inteval->stack[((hsi*18360+579220)*1+lsi)*1]), &(inteval->stack[((hsi*16320+597580)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+12478040)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8531720)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8488520)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+12564440)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12478040)*1+lsi)*1]), &(inteval->stack[((hsi*75600+910780)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+12690440)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12564440)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12228440)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+12854240)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12690440)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12337640)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+12228440)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12854240)*1+lsi)*1]), &(inteval->stack[((hsi*166320+723220)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+8423000)*1+lsi)*1]), &(inteval->stack[((hsi*20520+558700)*1+lsi)*1]), &(inteval->stack[((hsi*18360+579220)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+889540)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8423000)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8531720)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+13050800)*1+lsi)*1]), &(inteval->stack[((hsi*97920+889540)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12478040)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+13194800)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13050800)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12564440)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+12450200)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13194800)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12690440)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+13383800)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12450200)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12854240)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+12679520)*1+lsi)*1]), &(inteval->stack[((hsi*262080+13383800)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12228440)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+8478080)*1+lsi)*1]), &(inteval->stack[((hsi*7920+661180)*1+lsi)*1]), &(inteval->stack[((hsi*6600+669100)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+8497880)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8478080)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+579220)*1+lsi)*1]), &(inteval->stack[((hsi*47520+675700)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8497880)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+8478080)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8343800)*1+lsi)*1]), &(inteval->stack[((hsi*66000+579220)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*99000+8478080)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+13645880)*1+lsi)*1]), &(inteval->stack[((hsi*166320+723220)*1+lsi)*1]), &(inteval->stack[((hsi*138600+8259200)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+579220)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12228440)*1+lsi)*1]), &(inteval->stack[((hsi*184800+13645880)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*285120+12679520)*1+lsi)*1]), &(inteval->stack[((hsi*237600+579220)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+579220)*1+lsi)*1]), &(inteval->stack[((hsi*22800+535900)*1+lsi)*1]), &(inteval->stack[((hsi*20520+558700)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+640780)*1+lsi)*1]), &(inteval->stack[((hsi*61560+579220)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8423000)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*110160+640780)*1+lsi)*1]), &(inteval->stack[((hsi*97920+889540)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+535900)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13050800)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*216000+535900)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13194800)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+535900)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12450200)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+12964640)*1+lsi)*1]), &(inteval->stack[((hsi*305760+535900)*1+lsi)*1]), &(inteval->stack[((hsi*262080+13383800)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+535900)*1+lsi)*1]), &(inteval->stack[((hsi*336960+12964640)*1+lsi)*1]), &(inteval->stack[((hsi*285120+12679520)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+12406640)*1+lsi)*1]), &(inteval->stack[((hsi*356400+535900)*1+lsi)*1]), &(inteval->stack[((hsi*297000+12109640)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+12769640)*1+lsi)*1]), &(inteval->stack[((hsi*363000+12406640)*1+lsi)*1]), &(inteval->stack[((hsi*317625+9550490)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+13722515)*1+lsi)*1]), &(inteval->stack[((hsi*952875+12769640)*1+lsi)*1]), &(inteval->stack[((hsi*825825+9868115)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+15374165)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+13722515)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+10693940)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*10608+508836)*1+lsi)*1]), &(inteval->stack[((hsi*8976+519444)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+9577418)*1+lsi)*1]), &(inteval->stack[((hsi*12376+496460)*1+lsi)*1]), &(inteval->stack[((hsi*10608+508836)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+9609242)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9577418)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9550490)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+9663098)*1+lsi)*1]), &(inteval->stack[((hsi*14280+482180)*1+lsi)*1]), &(inteval->stack[((hsi*12376+496460)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+9700226)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9663098)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9577418)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+9763874)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9700226)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9609242)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+9853634)*1+lsi)*1]), &(inteval->stack[((hsi*16320+465860)*1+lsi)*1]), &(inteval->stack[((hsi*14280+482180)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+9896474)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9853634)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9663098)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+9970730)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9896474)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9700226)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+10076810)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9970730)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9763874)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+10211450)*1+lsi)*1]), &(inteval->stack[((hsi*18496+447364)*1+lsi)*1]), &(inteval->stack[((hsi*16320+465860)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+535900)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10211450)*1+lsi)*1]), &(inteval->stack[((hsi*42840+9853634)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+10260410)*1+lsi)*1]), &(inteval->stack[((hsi*85680+535900)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9896474)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+621580)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10260410)*1+lsi)*1]), &(inteval->stack[((hsi*106080+9970730)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*159120+621580)*1+lsi)*1]), &(inteval->stack[((hsi*134640+10076810)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+10384170)*1+lsi)*1]), &(inteval->stack[((hsi*20808+426556)*1+lsi)*1]), &(inteval->stack[((hsi*18496+447364)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10384170)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10211450)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+10439658)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*85680+535900)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+9853634)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10439658)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10260410)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9853634)*1+lsi)*1]), &(inteval->stack[((hsi*159120+621580)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+535900)*1+lsi)*1]), &(inteval->stack[((hsi*222768+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*188496+8259200)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+787228)*1+lsi)*1]), &(inteval->stack[((hsi*23256+403300)*1+lsi)*1]), &(inteval->stack[((hsi*20808+426556)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+12207560)*1+lsi)*1]), &(inteval->stack[((hsi*62424+787228)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10384170)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+10211450)*1+lsi)*1]), &(inteval->stack[((hsi*110976+12207560)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12109640)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+17956433)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10211450)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10439658)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+10374650)*1+lsi)*1]), &(inteval->stack[((hsi*214200+17956433)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9853634)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+18170633)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10374650)*1+lsi)*1]), &(inteval->stack[((hsi*222768+17733665)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+18467657)*1+lsi)*1]), &(inteval->stack[((hsi*297024+18170633)*1+lsi)*1]), &(inteval->stack[((hsi*251328+535900)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+9853634)*1+lsi)*1]), &(inteval->stack[((hsi*8976+519444)*1+lsi)*1]), &(inteval->stack[((hsi*7480+528420)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*22440+9853634)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+9853634)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9609242)*1+lsi)*1]), &(inteval->stack[((hsi*44880+17733665)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9763874)*1+lsi)*1]), &(inteval->stack[((hsi*74800+9853634)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*134640+10076810)*1+lsi)*1]), &(inteval->stack[((hsi*112200+17733665)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+9707570)*1+lsi)*1]), &(inteval->stack[((hsi*188496+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*157080+9550490)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*251328+535900)*1+lsi)*1]), &(inteval->stack[((hsi*209440+9707570)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*323136+18467657)*1+lsi)*1]), &(inteval->stack[((hsi*269280+8259200)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+426556)*1+lsi)*1]), &(inteval->stack[((hsi*25840+377460)*1+lsi)*1]), &(inteval->stack[((hsi*23256+403300)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*69768+426556)*1+lsi)*1]), &(inteval->stack[((hsi*62424+787228)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+377460)*1+lsi)*1]), &(inteval->stack[((hsi*124848+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*110976+12207560)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+562420)*1+lsi)*1]), &(inteval->stack[((hsi*184960+377460)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10211450)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+9887090)*1+lsi)*1]), &(inteval->stack[((hsi*244800+562420)*1+lsi)*1]), &(inteval->stack[((hsi*214200+17956433)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+377460)*1+lsi)*1]), &(inteval->stack[((hsi*299880+9887090)*1+lsi)*1]), &(inteval->stack[((hsi*259896+10374650)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+9887090)*1+lsi)*1]), &(inteval->stack[((hsi*346528+377460)*1+lsi)*1]), &(inteval->stack[((hsi*297024+18170633)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*381888+9887090)*1+lsi)*1]), &(inteval->stack[((hsi*323136+18467657)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+9887090)*1+lsi)*1]), &(inteval->stack[((hsi*403920+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*336600+9550490)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*411400+9887090)*1+lsi)*1]), &(inteval->stack[((hsi*363000+12406640)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+18822665)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*952875+12769640)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+20728415)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+18822665)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+13722515)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+23481165)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+20728415)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+15374165)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*11934+347013)*1+lsi)*1]), &(inteval->stack[((hsi*10098+358947)*1+lsi)*1]),153);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+12139934)*1+lsi)*1]), &(inteval->stack[((hsi*13923+333090)*1+lsi)*1]), &(inteval->stack[((hsi*11934+347013)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+12175736)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12139934)*1+lsi)*1]), &(inteval->stack[((hsi*30294+12109640)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+12236324)*1+lsi)*1]), &(inteval->stack[((hsi*16065+317025)*1+lsi)*1]), &(inteval->stack[((hsi*13923+333090)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+12278093)*1+lsi)*1]), &(inteval->stack[((hsi*41769+12236324)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12139934)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+12349697)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12278093)*1+lsi)*1]), &(inteval->stack[((hsi*60588+12175736)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+12450677)*1+lsi)*1]), &(inteval->stack[((hsi*18360+298665)*1+lsi)*1]), &(inteval->stack[((hsi*16065+317025)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+12498872)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12450677)*1+lsi)*1]), &(inteval->stack[((hsi*41769+12236324)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+12582410)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12498872)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12278093)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+12701750)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12582410)*1+lsi)*1]), &(inteval->stack[((hsi*100980+12349697)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+12853220)*1+lsi)*1]), &(inteval->stack[((hsi*20808+277857)*1+lsi)*1]), &(inteval->stack[((hsi*18360+298665)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+12908300)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12853220)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12450677)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+13004690)*1+lsi)*1]), &(inteval->stack[((hsi*96390+12908300)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12498872)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+13143920)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13004690)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12582410)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+13322930)*1+lsi)*1]), &(inteval->stack[((hsi*179010+13143920)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12701750)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+13534988)*1+lsi)*1]), &(inteval->stack[((hsi*23409+254448)*1+lsi)*1]), &(inteval->stack[((hsi*20808+277857)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+13597412)*1+lsi)*1]), &(inteval->stack[((hsi*62424+13534988)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12853220)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+13707572)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13597412)*1+lsi)*1]), &(inteval->stack[((hsi*96390+12908300)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+13868222)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13707572)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13004690)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+14077067)*1+lsi)*1]), &(inteval->stack[((hsi*208845+13868222)*1+lsi)*1]), &(inteval->stack[((hsi*179010+13143920)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+14327681)*1+lsi)*1]), &(inteval->stack[((hsi*250614+14077067)*1+lsi)*1]), &(inteval->stack[((hsi*212058+13322930)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+14610425)*1+lsi)*1]), &(inteval->stack[((hsi*26163+228285)*1+lsi)*1]), &(inteval->stack[((hsi*23409+254448)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+14680652)*1+lsi)*1]), &(inteval->stack[((hsi*70227+14610425)*1+lsi)*1]), &(inteval->stack[((hsi*62424+13534988)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+377460)*1+lsi)*1]), &(inteval->stack[((hsi*124848+14680652)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13597412)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+14805500)*1+lsi)*1]), &(inteval->stack[((hsi*183600+377460)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13707572)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+12853220)*1+lsi)*1]), &(inteval->stack[((hsi*240975+14805500)*1+lsi)*1]), &(inteval->stack[((hsi*208845+13868222)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+13534988)*1+lsi)*1]), &(inteval->stack[((hsi*292383+12853220)*1+lsi)*1]), &(inteval->stack[((hsi*250614+14077067)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+13869140)*1+lsi)*1]), &(inteval->stack[((hsi*334152+13534988)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14327681)*1+lsi)*1]),153);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+561060)*1+lsi)*1]), &(inteval->stack[((hsi*10098+358947)*1+lsi)*1]), &(inteval->stack[((hsi*8415+369045)*1+lsi)*1]),153);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*50490+586305)*1+lsi)*1]), &(inteval->stack[((hsi*30294+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*25245+561060)*1+lsi)*1]),153);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+10298490)*1+lsi)*1]), &(inteval->stack[((hsi*60588+12175736)*1+lsi)*1]), &(inteval->stack[((hsi*50490+586305)*1+lsi)*1]),153);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+561060)*1+lsi)*1]), &(inteval->stack[((hsi*100980+12349697)*1+lsi)*1]), &(inteval->stack[((hsi*84150+10298490)*1+lsi)*1]),153);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12701750)*1+lsi)*1]), &(inteval->stack[((hsi*126225+561060)*1+lsi)*1]),153);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+12286355)*1+lsi)*1]), &(inteval->stack[((hsi*212058+13322930)*1+lsi)*1]), &(inteval->stack[((hsi*176715+12109640)*1+lsi)*1]),153);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+561060)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14327681)*1+lsi)*1]), &(inteval->stack[((hsi*235620+12286355)*1+lsi)*1]),153);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*378675+12109640)*1+lsi)*1]), &(inteval->stack[((hsi*363528+13869140)*1+lsi)*1]), &(inteval->stack[((hsi*302940+561060)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+561060)*1+lsi)*1]), &(inteval->stack[((hsi*29070+199215)*1+lsi)*1]), &(inteval->stack[((hsi*26163+228285)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+10298490)*1+lsi)*1]), &(inteval->stack[((hsi*78489+561060)*1+lsi)*1]), &(inteval->stack[((hsi*70227+14610425)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+14232668)*1+lsi)*1]), &(inteval->stack[((hsi*140454+10298490)*1+lsi)*1]), &(inteval->stack[((hsi*124848+14680652)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+561060)*1+lsi)*1]), &(inteval->stack[((hsi*208080+14232668)*1+lsi)*1]), &(inteval->stack[((hsi*183600+377460)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+14232668)*1+lsi)*1]), &(inteval->stack[((hsi*275400+561060)*1+lsi)*1]), &(inteval->stack[((hsi*240975+14805500)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+14570033)*1+lsi)*1]), &(inteval->stack[((hsi*337365+14232668)*1+lsi)*1]), &(inteval->stack[((hsi*292383+12853220)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+12488315)*1+lsi)*1]), &(inteval->stack[((hsi*389844+14570033)*1+lsi)*1]), &(inteval->stack[((hsi*334152+13534988)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+14232668)*1+lsi)*1]), &(inteval->stack[((hsi*429624+12488315)*1+lsi)*1]), &(inteval->stack[((hsi*363528+13869140)*1+lsi)*1]),153);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*462825+12488315)*1+lsi)*1]), &(inteval->stack[((hsi*454410+14232668)*1+lsi)*1]), &(inteval->stack[((hsi*378675+12109640)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1234200+12951140)*1+lsi)*1]), &(inteval->stack[((hsi*462825+12488315)*1+lsi)*1]), &(inteval->stack[((hsi*411400+9887090)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2178000+27020415)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+12951140)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+17733665)*1+lsi)*1]),3025);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3176250+29198415)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+27020415)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+18822665)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4129125+32374665)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+29198415)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+20728415)*1+lsi)*1]),3025);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*4954950+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+32374665)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+23481165)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+14185340)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1058666)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1063814)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+14198408)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1052660)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1058666)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+14213852)*1+lsi)*1]), &(inteval->stack[((hsi*15444+14198408)*1+lsi)*1]), &(inteval->stack[((hsi*13068+14185340)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1045730)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1052660)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+14239988)*1+lsi)*1]), &(inteval->stack[((hsi*18018+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*15444+14198408)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+9568508)*1+lsi)*1]), &(inteval->stack[((hsi*30888+14239988)*1+lsi)*1]), &(inteval->stack[((hsi*26136+14213852)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+14270876)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1037810)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1045730)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+14291666)*1+lsi)*1]), &(inteval->stack[((hsi*20790+14270876)*1+lsi)*1]), &(inteval->stack[((hsi*18018+9550490)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+9612068)*1+lsi)*1]), &(inteval->stack[((hsi*36036+14291666)*1+lsi)*1]), &(inteval->stack[((hsi*30888+14239988)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+14327702)*1+lsi)*1]), &(inteval->stack[((hsi*51480+9612068)*1+lsi)*1]), &(inteval->stack[((hsi*43560+9568508)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+9663548)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1028834)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1037810)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+9687308)*1+lsi)*1]), &(inteval->stack[((hsi*23760+9663548)*1+lsi)*1]), &(inteval->stack[((hsi*20790+14270876)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+14393042)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9687308)*1+lsi)*1]), &(inteval->stack[((hsi*36036+14291666)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+9728888)*1+lsi)*1]), &(inteval->stack[((hsi*60060+14393042)*1+lsi)*1]), &(inteval->stack[((hsi*51480+9612068)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+14453102)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9728888)*1+lsi)*1]), &(inteval->stack[((hsi*65340+14327702)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+9806108)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1018736)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1028834)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+9833036)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9806108)*1+lsi)*1]), &(inteval->stack[((hsi*23760+9663548)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+14544578)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9833036)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9687308)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+9880556)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14544578)*1+lsi)*1]), &(inteval->stack[((hsi*60060+14393042)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+199215)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9880556)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9728888)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*108108+199215)*1+lsi)*1]), &(inteval->stack[((hsi*91476+14453102)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+14613878)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1007450)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1018736)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+14644172)*1+lsi)*1]), &(inteval->stack[((hsi*30294+14613878)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9806108)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+9970646)*1+lsi)*1]), &(inteval->stack[((hsi*53856+14644172)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9833036)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+307323)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9970646)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14544578)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+14698028)*1+lsi)*1]), &(inteval->stack[((hsi*103950+307323)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9880556)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+22810583)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14698028)*1+lsi)*1]), &(inteval->stack[((hsi*108108+199215)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+10049846)*1+lsi)*1]), &(inteval->stack[((hsi*144144+22810583)*1+lsi)*1]), &(inteval->stack[((hsi*121968+22688615)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+411273)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1063814)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1068170)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+422163)*1+lsi)*1]), &(inteval->stack[((hsi*13068+14185340)*1+lsi)*1]), &(inteval->stack[((hsi*10890+411273)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+443943)*1+lsi)*1]), &(inteval->stack[((hsi*26136+14213852)*1+lsi)*1]), &(inteval->stack[((hsi*21780+422163)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+14824154)*1+lsi)*1]), &(inteval->stack[((hsi*43560+9568508)*1+lsi)*1]), &(inteval->stack[((hsi*36300+443943)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+411273)*1+lsi)*1]), &(inteval->stack[((hsi*65340+14327702)*1+lsi)*1]), &(inteval->stack[((hsi*54450+14824154)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+14824154)*1+lsi)*1]), &(inteval->stack[((hsi*91476+14453102)*1+lsi)*1]), &(inteval->stack[((hsi*76230+411273)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+411273)*1+lsi)*1]), &(inteval->stack[((hsi*121968+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*101640+14824154)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+14824154)*1+lsi)*1]), &(inteval->stack[((hsi*156816+10049846)*1+lsi)*1]), &(inteval->stack[((hsi*130680+411273)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+411273)*1+lsi)*1]), &(inteval->stack[((hsi*12540+994910)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1007450)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+445131)*1+lsi)*1]), &(inteval->stack[((hsi*33858+411273)*1+lsi)*1]), &(inteval->stack[((hsi*30294+14613878)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+505719)*1+lsi)*1]), &(inteval->stack[((hsi*60588+445131)*1+lsi)*1]), &(inteval->stack[((hsi*53856+14644172)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+22954727)*1+lsi)*1]), &(inteval->stack[((hsi*89760+505719)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9970646)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+411273)*1+lsi)*1]), &(inteval->stack[((hsi*118800+22954727)*1+lsi)*1]), &(inteval->stack[((hsi*103950+307323)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+22954727)*1+lsi)*1]), &(inteval->stack[((hsi*145530+411273)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14698028)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+199215)*1+lsi)*1]), &(inteval->stack[((hsi*168168+22954727)*1+lsi)*1]), &(inteval->stack[((hsi*144144+22810583)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*185328+199215)*1+lsi)*1]), &(inteval->stack[((hsi*156816+10049846)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+9550490)*1+lsi)*1]), &(inteval->stack[((hsi*196020+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*163350+14824154)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+14185340)*1+lsi)*1]), &(inteval->stack[((hsi*235950+8606690)*1+lsi)*1]), &(inteval->stack[((hsi*199650+9550490)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+36503790)*1+lsi)*1]), &(inteval->stack[((hsi*707850+8842640)*1+lsi)*1]), &(inteval->stack[((hsi*598950+14185340)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+10693940)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+36503790)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+36503790)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+15374165)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+8259200)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+23481165)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+36503790)*1+lsi)*1]),3025);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*5590200+36503790)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+17733665)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+8259200)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*13338+165186)*1+lsi)*1]), &(inteval->stack[((hsi*11286+178524)*1+lsi)*1]),171);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+22722473)*1+lsi)*1]), &(inteval->stack[((hsi*15561+149625)*1+lsi)*1]), &(inteval->stack[((hsi*13338+165186)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+22762487)*1+lsi)*1]), &(inteval->stack[((hsi*40014+22722473)*1+lsi)*1]), &(inteval->stack[((hsi*33858+22688615)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*17955+131670)*1+lsi)*1]), &(inteval->stack[((hsi*15561+149625)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+22830203)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*40014+22722473)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+8305883)*1+lsi)*1]), &(inteval->stack[((hsi*80028+22830203)*1+lsi)*1]), &(inteval->stack[((hsi*67716+22762487)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+22910231)*1+lsi)*1]), &(inteval->stack[((hsi*20520+111150)*1+lsi)*1]), &(inteval->stack[((hsi*17955+131670)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+8418743)*1+lsi)*1]), &(inteval->stack[((hsi*53865+22910231)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8259200)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+22964096)*1+lsi)*1]), &(inteval->stack[((hsi*93366+8418743)*1+lsi)*1]), &(inteval->stack[((hsi*80028+22830203)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+8512109)*1+lsi)*1]), &(inteval->stack[((hsi*133380+22964096)*1+lsi)*1]), &(inteval->stack[((hsi*112860+8305883)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+23097476)*1+lsi)*1]), &(inteval->stack[((hsi*23256+87894)*1+lsi)*1]), &(inteval->stack[((hsi*20520+111150)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+23159036)*1+lsi)*1]), &(inteval->stack[((hsi*61560+23097476)*1+lsi)*1]), &(inteval->stack[((hsi*53865+22910231)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+8681399)*1+lsi)*1]), &(inteval->stack[((hsi*107730+23159036)*1+lsi)*1]), &(inteval->stack[((hsi*93366+8418743)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+23266766)*1+lsi)*1]), &(inteval->stack[((hsi*155610+8681399)*1+lsi)*1]), &(inteval->stack[((hsi*133380+22964096)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+8837009)*1+lsi)*1]), &(inteval->stack[((hsi*200070+23266766)*1+lsi)*1]), &(inteval->stack[((hsi*169290+8512109)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+23466836)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61731)*1+lsi)*1]), &(inteval->stack[((hsi*23256+87894)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+14185340)*1+lsi)*1]), &(inteval->stack[((hsi*69768+23466836)*1+lsi)*1]), &(inteval->stack[((hsi*61560+23097476)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+23536604)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14185340)*1+lsi)*1]), &(inteval->stack[((hsi*107730+23159036)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+14308460)*1+lsi)*1]), &(inteval->stack[((hsi*179550+23536604)*1+lsi)*1]), &(inteval->stack[((hsi*155610+8681399)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+9074015)*1+lsi)*1]), &(inteval->stack[((hsi*233415+14308460)*1+lsi)*1]), &(inteval->stack[((hsi*200070+23266766)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+23716154)*1+lsi)*1]), &(inteval->stack[((hsi*280098+9074015)*1+lsi)*1]), &(inteval->stack[((hsi*237006+8837009)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+14541875)*1+lsi)*1]), &(inteval->stack[((hsi*29241+32490)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61731)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+9354113)*1+lsi)*1]), &(inteval->stack[((hsi*78489+14541875)*1+lsi)*1]), &(inteval->stack[((hsi*69768+23466836)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+14620364)*1+lsi)*1]), &(inteval->stack[((hsi*139536+9354113)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14185340)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+9493649)*1+lsi)*1]), &(inteval->stack[((hsi*205200+14620364)*1+lsi)*1]), &(inteval->stack[((hsi*179550+23536604)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+24032162)*1+lsi)*1]), &(inteval->stack[((hsi*269325+9493649)*1+lsi)*1]), &(inteval->stack[((hsi*233415+14308460)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+14825564)*1+lsi)*1]), &(inteval->stack[((hsi*326781+24032162)*1+lsi)*1]), &(inteval->stack[((hsi*280098+9074015)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+9762974)*1+lsi)*1]), &(inteval->stack[((hsi*373464+14825564)*1+lsi)*1]), &(inteval->stack[((hsi*316008+23716154)*1+lsi)*1]),171);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*28215+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*11286+178524)*1+lsi)*1]), &(inteval->stack[((hsi*9405+189810)*1+lsi)*1]),171);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*56430+24387158)*1+lsi)*1]), &(inteval->stack[((hsi*33858+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*28215+24358943)*1+lsi)*1]),171);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*94050+24443588)*1+lsi)*1]), &(inteval->stack[((hsi*67716+22762487)*1+lsi)*1]), &(inteval->stack[((hsi*56430+24387158)*1+lsi)*1]),171);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*141075+15199028)*1+lsi)*1]), &(inteval->stack[((hsi*112860+8305883)*1+lsi)*1]), &(inteval->stack[((hsi*94050+24443588)*1+lsi)*1]),171);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*197505+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*169290+8512109)*1+lsi)*1]), &(inteval->stack[((hsi*141075+15199028)*1+lsi)*1]),171);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*263340+15199028)*1+lsi)*1]), &(inteval->stack[((hsi*237006+8837009)*1+lsi)*1]), &(inteval->stack[((hsi*197505+24358943)*1+lsi)*1]),171);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*338580+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*316008+23716154)*1+lsi)*1]), &(inteval->stack[((hsi*263340+15199028)*1+lsi)*1]),171);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*423225+15199028)*1+lsi)*1]), &(inteval->stack[((hsi*406296+9762974)*1+lsi)*1]), &(inteval->stack[((hsi*338580+24358943)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*32490+0)*1+lsi)*1]), &(inteval->stack[((hsi*29241+32490)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+24446666)*1+lsi)*1]), &(inteval->stack[((hsi*87723+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*78489+14541875)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+24603644)*1+lsi)*1]), &(inteval->stack[((hsi*156978+24446666)*1+lsi)*1]), &(inteval->stack[((hsi*139536+9354113)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+10169270)*1+lsi)*1]), &(inteval->stack[((hsi*232560+24603644)*1+lsi)*1]), &(inteval->stack[((hsi*205200+14620364)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*307800+10169270)*1+lsi)*1]), &(inteval->stack[((hsi*269325+9493649)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+10169270)*1+lsi)*1]), &(inteval->stack[((hsi*377055+24358943)*1+lsi)*1]), &(inteval->stack[((hsi*326781+24032162)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*435708+10169270)*1+lsi)*1]), &(inteval->stack[((hsi*373464+14825564)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+23168783)*1+lsi)*1]), &(inteval->stack[((hsi*480168+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*406296+9762974)*1+lsi)*1]),171);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*517275+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*507870+23168783)*1+lsi)*1]), &(inteval->stack[((hsi*423225+15199028)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1388475+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*517275+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*462825+12488315)*1+lsi)*1]),3025);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*2468400+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*1388475+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+12951140)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*3630000+10727600)*1+lsi)*1]), &(inteval->stack[((hsi*2468400+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+27020415)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*4764375+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*3630000+10727600)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+29198415)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*5780775+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*4764375+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+32374665)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*6606600+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*5780775+8259200)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+17733665)*1+lsi)*1]),3025);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*7187400+1071800)*1+lsi)*1]), &(inteval->stack[((hsi*6606600+22688615)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+36503790)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7187400+1071800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
