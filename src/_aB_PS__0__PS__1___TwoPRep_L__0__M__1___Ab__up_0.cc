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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfh.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgg.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0phf.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pid.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0pkp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppk.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
#include <HRRPart0bra0ket0psl.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1465200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1359750)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1366848)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+12264552)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1351560)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1359750)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+12285846)*1+lsi)*1]), &(inteval->stack[((hsi*21294+12264552)*1+lsi)*1]), &(inteval->stack[((hsi*18252+12246300)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+12322350)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1342200)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1351560)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+12346920)*1+lsi)*1]), &(inteval->stack[((hsi*24570+12322350)*1+lsi)*1]), &(inteval->stack[((hsi*21294+12264552)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+12389508)*1+lsi)*1]), &(inteval->stack[((hsi*42588+12346920)*1+lsi)*1]), &(inteval->stack[((hsi*36504+12285846)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+12450348)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1331592)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1342200)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+12478428)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12450348)*1+lsi)*1]), &(inteval->stack[((hsi*24570+12322350)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+12527568)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12478428)*1+lsi)*1]), &(inteval->stack[((hsi*42588+12346920)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+12598548)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12527568)*1+lsi)*1]), &(inteval->stack[((hsi*60840+12389508)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+12322350)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1319658)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1331592)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+12689808)*1+lsi)*1]), &(inteval->stack[((hsi*31824+12322350)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12450348)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+12745968)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12689808)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12478428)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+12827868)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12745968)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12527568)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+12450348)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12827868)*1+lsi)*1]), &(inteval->stack[((hsi*91260+12598548)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+12934338)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1306320)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1319658)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+12970140)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12934338)*1+lsi)*1]), &(inteval->stack[((hsi*31824+12322350)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+13033788)*1+lsi)*1]), &(inteval->stack[((hsi*63648+12970140)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12689808)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+13127388)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13033788)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12745968)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+13250238)*1+lsi)*1]), &(inteval->stack[((hsi*122850+13127388)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12827868)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+12689808)*1+lsi)*1]), &(inteval->stack[((hsi*149058+13250238)*1+lsi)*1]), &(inteval->stack[((hsi*127764+12450348)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+12860160)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1291500)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1306320)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+13399296)*1+lsi)*1]), &(inteval->stack[((hsi*40014+12860160)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12934338)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+13470900)*1+lsi)*1]), &(inteval->stack[((hsi*71604+13399296)*1+lsi)*1]), &(inteval->stack[((hsi*63648+12970140)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+13576980)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13470900)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13033788)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+12900174)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13576980)*1+lsi)*1]), &(inteval->stack[((hsi*122850+13127388)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+13717380)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12900174)*1+lsi)*1]), &(inteval->stack[((hsi*149058+13250238)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+13072164)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13717380)*1+lsi)*1]), &(inteval->stack[((hsi*170352+12689808)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1366848)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1372932)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+13306632)*1+lsi)*1]), &(inteval->stack[((hsi*18252+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*15444+13291188)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1306320)*1+lsi)*1]), &(inteval->stack[((hsi*36504+12285846)*1+lsi)*1]), &(inteval->stack[((hsi*30888+13306632)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*60840+12389508)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1306320)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*91260+12598548)*1+lsi)*1]), &(inteval->stack[((hsi*77220+12246300)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*127764+12450348)*1+lsi)*1]), &(inteval->stack[((hsi*108108+13291188)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+12390444)*1+lsi)*1]), &(inteval->stack[((hsi*170352+12689808)*1+lsi)*1]), &(inteval->stack[((hsi*144144+12246300)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+12575772)*1+lsi)*1]), &(inteval->stack[((hsi*219024+13072164)*1+lsi)*1]), &(inteval->stack[((hsi*185328+12390444)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1275120)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1291500)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+12290760)*1+lsi)*1]), &(inteval->stack[((hsi*44460+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*40014+12860160)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+12370788)*1+lsi)*1]), &(inteval->stack[((hsi*80028+12290760)*1+lsi)*1]), &(inteval->stack[((hsi*71604+13399296)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*119340+12370788)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13470900)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13576980)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12900174)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13717380)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*219024+13072164)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+12807432)*1+lsi)*1]), &(inteval->stack[((hsi*273780+13291188)*1+lsi)*1]), &(inteval->stack[((hsi*231660+12575772)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1253735)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1262016)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+12267594)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1244180)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1253735)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+12292437)*1+lsi)*1]), &(inteval->stack[((hsi*24843+12267594)*1+lsi)*1]), &(inteval->stack[((hsi*21294+12246300)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+12335025)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1233260)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1244180)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+12363690)*1+lsi)*1]), &(inteval->stack[((hsi*28665+12335025)*1+lsi)*1]), &(inteval->stack[((hsi*24843+12267594)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+12413376)*1+lsi)*1]), &(inteval->stack[((hsi*49686+12363690)*1+lsi)*1]), &(inteval->stack[((hsi*42588+12292437)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+12484356)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1220884)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1233260)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+12517116)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12484356)*1+lsi)*1]), &(inteval->stack[((hsi*28665+12335025)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+12574446)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12517116)*1+lsi)*1]), &(inteval->stack[((hsi*49686+12363690)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+12657256)*1+lsi)*1]), &(inteval->stack[((hsi*82810+12574446)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12413376)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1275120)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1206961)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1220884)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+12335025)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1275120)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12484356)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12335025)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12517116)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+13186122)*1+lsi)*1]), &(inteval->stack[((hsi*95550+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*82810+12574446)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+12484356)*1+lsi)*1]), &(inteval->stack[((hsi*124215+13186122)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12657256)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+1312248)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1191400)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1206961)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+13310337)*1+lsi)*1]), &(inteval->stack[((hsi*41769+1312248)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1275120)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+13384593)*1+lsi)*1]), &(inteval->stack[((hsi*74256+13310337)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12335025)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+13493793)*1+lsi)*1]), &(inteval->stack[((hsi*109200+13384593)*1+lsi)*1]), &(inteval->stack[((hsi*95550+13090572)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+13637118)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13493793)*1+lsi)*1]), &(inteval->stack[((hsi*124215+13186122)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*173901+13637118)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12484356)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+12335025)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1174110)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1191400)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+13811019)*1+lsi)*1]), &(inteval->stack[((hsi*46683+12335025)*1+lsi)*1]), &(inteval->stack[((hsi*41769+1312248)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+13894557)*1+lsi)*1]), &(inteval->stack[((hsi*83538+13811019)*1+lsi)*1]), &(inteval->stack[((hsi*74256+13310337)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+14018317)*1+lsi)*1]), &(inteval->stack[((hsi*123760+13894557)*1+lsi)*1]), &(inteval->stack[((hsi*109200+13384593)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+13289316)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14018317)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13493793)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+14182117)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13289316)*1+lsi)*1]), &(inteval->stack[((hsi*173901+13637118)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+13489971)*1+lsi)*1]), &(inteval->stack[((hsi*231868+14182117)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13090572)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1275120)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1262016)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1269114)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1293138)*1+lsi)*1]), &(inteval->stack[((hsi*21294+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1275120)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1191400)*1+lsi)*1]), &(inteval->stack[((hsi*42588+12292437)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1293138)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1251460)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12413376)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1191400)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+14413985)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12657256)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1251460)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+1191400)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12484356)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14413985)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+12381708)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1191400)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+14413985)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13489971)*1+lsi)*1]), &(inteval->stack[((hsi*216216+12381708)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+12381708)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1155000)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1174110)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+12433578)*1+lsi)*1]), &(inteval->stack[((hsi*51870+12381708)*1+lsi)*1]), &(inteval->stack[((hsi*46683+12335025)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+12526944)*1+lsi)*1]), &(inteval->stack[((hsi*93366+12433578)*1+lsi)*1]), &(inteval->stack[((hsi*83538+13811019)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*139230+12526944)*1+lsi)*1]), &(inteval->stack[((hsi*123760+13894557)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+12431940)*1+lsi)*1]), &(inteval->stack[((hsi*185640+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14018317)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+13745499)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12431940)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13289316)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*267540+13745499)*1+lsi)*1]), &(inteval->stack[((hsi*231868+14182117)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+13745499)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13489971)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*319410+13745499)*1+lsi)*1]), &(inteval->stack[((hsi*270270+14413985)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+13420902)*1+lsi)*1]), &(inteval->stack[((hsi*330330+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*283140+12807432)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1130325)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1139880)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+12270870)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1119300)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1130325)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+12299535)*1+lsi)*1]), &(inteval->stack[((hsi*28665+12270870)*1+lsi)*1]), &(inteval->stack[((hsi*24570+12246300)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+12348675)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1106700)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1119300)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+12381750)*1+lsi)*1]), &(inteval->stack[((hsi*33075+12348675)*1+lsi)*1]), &(inteval->stack[((hsi*28665+12270870)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+12439080)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12381750)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12299535)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+12520980)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1092420)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1106700)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+12558780)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12520980)*1+lsi)*1]), &(inteval->stack[((hsi*33075+12348675)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+1155000)*1+lsi)*1]), &(inteval->stack[((hsi*66150+12558780)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12381750)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+12624930)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1155000)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12439080)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1250550)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1076355)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1092420)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+12348675)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1250550)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12520980)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12348675)*1+lsi)*1]), &(inteval->stack[((hsi*66150+12558780)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+14380572)*1+lsi)*1]), &(inteval->stack[((hsi*110250+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1155000)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+14523897)*1+lsi)*1]), &(inteval->stack[((hsi*143325+14380572)*1+lsi)*1]), &(inteval->stack[((hsi*122850+12624930)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+12520980)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1058400)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1076355)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+1155000)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12520980)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1250550)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+1240680)*1+lsi)*1]), &(inteval->stack[((hsi*85680+1155000)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12348675)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+14695887)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1240680)*1+lsi)*1]), &(inteval->stack[((hsi*110250+14270322)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+14861262)*1+lsi)*1]), &(inteval->stack[((hsi*165375+14695887)*1+lsi)*1]), &(inteval->stack[((hsi*143325+14380572)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*200655+14861262)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14523897)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+12348675)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1038450)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1058400)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+15061917)*1+lsi)*1]), &(inteval->stack[((hsi*53865+12348675)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12520980)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+15158307)*1+lsi)*1]), &(inteval->stack[((hsi*96390+15061917)*1+lsi)*1]), &(inteval->stack[((hsi*85680+1155000)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+15301107)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15158307)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1240680)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+15490107)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15301107)*1+lsi)*1]), &(inteval->stack[((hsi*165375+14695887)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+15721632)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15490107)*1+lsi)*1]), &(inteval->stack[((hsi*200655+14861262)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+14695887)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15721632)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14270322)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1155000)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1139880)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1148070)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1175790)*1+lsi)*1]), &(inteval->stack[((hsi*24570+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1155000)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1217370)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12299535)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1175790)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+12520980)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12439080)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1217370)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+1058400)*1+lsi)*1]), &(inteval->stack[((hsi*122850+12624930)*1+lsi)*1]), &(inteval->stack[((hsi*103950+12520980)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+12402540)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14523897)*1+lsi)*1]), &(inteval->stack[((hsi*145530+1058400)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+1058400)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12402540)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*294840+14695887)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1058400)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+12402540)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1038450)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*59850+12402540)*1+lsi)*1]), &(inteval->stack[((hsi*53865+12348675)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*107730+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*96390+15061917)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+12406950)*1+lsi)*1]), &(inteval->stack[((hsi*160650+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15158307)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12406950)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15301107)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*264600+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15490107)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+14990727)*1+lsi)*1]), &(inteval->stack[((hsi*308700+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15721632)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*343980+14990727)*1+lsi)*1]), &(inteval->stack[((hsi*294840+14695887)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+14582172)*1+lsi)*1]), &(inteval->stack[((hsi*368550+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*311850+14270322)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+14963322)*1+lsi)*1]), &(inteval->stack[((hsi*381150+14582172)*1+lsi)*1]), &(inteval->stack[((hsi*330330+13090572)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+15954312)*1+lsi)*1]), &(inteval->stack[((hsi*990990+14963322)*1+lsi)*1]), &(inteval->stack[((hsi*849420+13420902)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*10920+988200)*1+lsi)*1]), &(inteval->stack[((hsi*9360+999120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+12274380)*1+lsi)*1]), &(inteval->stack[((hsi*12600+975600)*1+lsi)*1]), &(inteval->stack[((hsi*10920+988200)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+12307140)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12274380)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12246300)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+12363300)*1+lsi)*1]), &(inteval->stack[((hsi*14400+961200)*1+lsi)*1]), &(inteval->stack[((hsi*12600+975600)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+12401100)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12363300)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12274380)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12401100)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12307140)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+12466620)*1+lsi)*1]), &(inteval->stack[((hsi*16320+944880)*1+lsi)*1]), &(inteval->stack[((hsi*14400+961200)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12466620)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12363300)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*75600+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12401100)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+12509820)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1016400)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+1110000)*1+lsi)*1]), &(inteval->stack[((hsi*18360+926520)*1+lsi)*1]), &(inteval->stack[((hsi*16320+944880)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+13166172)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1110000)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12466620)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+1158960)*1+lsi)*1]), &(inteval->stack[((hsi*86400+13166172)*1+lsi)*1]), &(inteval->stack[((hsi*75600+13090572)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+14379522)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1158960)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14270322)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14379522)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12509820)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+13252572)*1+lsi)*1]), &(inteval->stack[((hsi*20520+906000)*1+lsi)*1]), &(inteval->stack[((hsi*18360+926520)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+12650220)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13252572)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1110000)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+12363300)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12650220)*1+lsi)*1]), &(inteval->stack[((hsi*86400+13166172)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+17849712)*1+lsi)*1]), &(inteval->stack[((hsi*144000+12363300)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1158960)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+1110000)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17849712)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14379522)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1110000)*1+lsi)*1]), &(inteval->stack[((hsi*196560+17653152)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*22800+883200)*1+lsi)*1]), &(inteval->stack[((hsi*20520+906000)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+13307652)*1+lsi)*1]), &(inteval->stack[((hsi*61560+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13252572)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+18038712)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13307652)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12650220)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+18201912)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18038712)*1+lsi)*1]), &(inteval->stack[((hsi*144000+12363300)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+18417912)*1+lsi)*1]), &(inteval->stack[((hsi*216000+18201912)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17849712)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+18682512)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18417912)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1110000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+18988272)*1+lsi)*1]), &(inteval->stack[((hsi*305760+18682512)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14270322)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+1110000)*1+lsi)*1]), &(inteval->stack[((hsi*9360+999120)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1008480)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+1133760)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1110000)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+1181280)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12307140)*1+lsi)*1]), &(inteval->stack[((hsi*47520+1133760)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1016400)*1+lsi)*1]), &(inteval->stack[((hsi*79200+1181280)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+906000)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12509820)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12246300)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*196560+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*166320+906000)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+906000)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12246300)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*336960+18988272)*1+lsi)*1]), &(inteval->stack[((hsi*285120+906000)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+906000)*1+lsi)*1]), &(inteval->stack[((hsi*25200+858000)*1+lsi)*1]), &(inteval->stack[((hsi*22800+883200)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+974400)*1+lsi)*1]), &(inteval->stack[((hsi*68400+906000)*1+lsi)*1]), &(inteval->stack[((hsi*61560+13090572)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*123120+974400)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13307652)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+858000)*1+lsi)*1]), &(inteval->stack[((hsi*183600+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18038712)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*244800+858000)*1+lsi)*1]), &(inteval->stack[((hsi*216000+18201912)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+858000)*1+lsi)*1]), &(inteval->stack[((hsi*302400+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18417912)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*352800+858000)*1+lsi)*1]), &(inteval->stack[((hsi*305760+18682512)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+18046272)*1+lsi)*1]), &(inteval->stack[((hsi*393120+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*336960+18988272)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+858000)*1+lsi)*1]), &(inteval->stack[((hsi*421200+18046272)*1+lsi)*1]), &(inteval->stack[((hsi*356400+12246300)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*435600+858000)*1+lsi)*1]), &(inteval->stack[((hsi*381150+14582172)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+18796602)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*990990+14963322)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+20778582)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+18796602)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+15954312)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*12376+826040)*1+lsi)*1]), &(inteval->stack[((hsi*10608+838416)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+14302146)*1+lsi)*1]), &(inteval->stack[((hsi*14280+811760)*1+lsi)*1]), &(inteval->stack[((hsi*12376+826040)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+14339274)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14302146)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14270322)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+14402922)*1+lsi)*1]), &(inteval->stack[((hsi*16320+795440)*1+lsi)*1]), &(inteval->stack[((hsi*14280+811760)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+14445762)*1+lsi)*1]), &(inteval->stack[((hsi*42840+14402922)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14302146)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+14520018)*1+lsi)*1]), &(inteval->stack[((hsi*74256+14445762)*1+lsi)*1]), &(inteval->stack[((hsi*63648+14339274)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+14626098)*1+lsi)*1]), &(inteval->stack[((hsi*18496+776944)*1+lsi)*1]), &(inteval->stack[((hsi*16320+795440)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+14675058)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14626098)*1+lsi)*1]), &(inteval->stack[((hsi*42840+14402922)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+14760738)*1+lsi)*1]), &(inteval->stack[((hsi*85680+14675058)*1+lsi)*1]), &(inteval->stack[((hsi*74256+14445762)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+14884498)*1+lsi)*1]), &(inteval->stack[((hsi*123760+14760738)*1+lsi)*1]), &(inteval->stack[((hsi*106080+14520018)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+15043618)*1+lsi)*1]), &(inteval->stack[((hsi*20808+756136)*1+lsi)*1]), &(inteval->stack[((hsi*18496+776944)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+15099106)*1+lsi)*1]), &(inteval->stack[((hsi*55488+15043618)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14626098)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+15197026)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15099106)*1+lsi)*1]), &(inteval->stack[((hsi*85680+14675058)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+15339826)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15197026)*1+lsi)*1]), &(inteval->stack[((hsi*123760+14760738)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*185640+15339826)*1+lsi)*1]), &(inteval->stack[((hsi*159120+14884498)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+15525466)*1+lsi)*1]), &(inteval->stack[((hsi*23256+732880)*1+lsi)*1]), &(inteval->stack[((hsi*20808+756136)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+15587890)*1+lsi)*1]), &(inteval->stack[((hsi*62424+15525466)*1+lsi)*1]), &(inteval->stack[((hsi*55488+15043618)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+12469068)*1+lsi)*1]), &(inteval->stack[((hsi*110976+15587890)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15099106)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12469068)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15197026)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+15043618)*1+lsi)*1]), &(inteval->stack[((hsi*214200+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*185640+15339826)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+23609982)*1+lsi)*1]), &(inteval->stack[((hsi*259896+15043618)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12246300)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+14626098)*1+lsi)*1]), &(inteval->stack[((hsi*25840+707040)*1+lsi)*1]), &(inteval->stack[((hsi*23256+732880)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+15698866)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14626098)*1+lsi)*1]), &(inteval->stack[((hsi*62424+15525466)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+15303514)*1+lsi)*1]), &(inteval->stack[((hsi*124848+15698866)*1+lsi)*1]), &(inteval->stack[((hsi*110976+15587890)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+23907006)*1+lsi)*1]), &(inteval->stack[((hsi*184960+15303514)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12469068)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+12469068)*1+lsi)*1]), &(inteval->stack[((hsi*244800+23907006)*1+lsi)*1]), &(inteval->stack[((hsi*214200+13090572)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+24151806)*1+lsi)*1]), &(inteval->stack[((hsi*299880+12469068)*1+lsi)*1]), &(inteval->stack[((hsi*259896+15043618)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+24498334)*1+lsi)*1]), &(inteval->stack[((hsi*346528+24151806)*1+lsi)*1]), &(inteval->stack[((hsi*297024+23609982)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*10608+838416)*1+lsi)*1]), &(inteval->stack[((hsi*8976+849024)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+13117500)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*26928+13090572)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+15043618)*1+lsi)*1]), &(inteval->stack[((hsi*63648+14339274)*1+lsi)*1]), &(inteval->stack[((hsi*53856+13117500)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*106080+14520018)*1+lsi)*1]), &(inteval->stack[((hsi*89760+15043618)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*159120+14884498)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13090572)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+14695866)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*188496+14270322)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+14947194)*1+lsi)*1]), &(inteval->stack[((hsi*297024+23609982)*1+lsi)*1]), &(inteval->stack[((hsi*251328+14695866)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+24880222)*1+lsi)*1]), &(inteval->stack[((hsi*381888+24498334)*1+lsi)*1]), &(inteval->stack[((hsi*323136+14947194)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+14695866)*1+lsi)*1]), &(inteval->stack[((hsi*28560+678480)*1+lsi)*1]), &(inteval->stack[((hsi*25840+707040)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+14773386)*1+lsi)*1]), &(inteval->stack[((hsi*77520+14695866)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14626098)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*139536+14773386)*1+lsi)*1]), &(inteval->stack[((hsi*124848+15698866)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+14478402)*1+lsi)*1]), &(inteval->stack[((hsi*208080+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*184960+15303514)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+14755842)*1+lsi)*1]), &(inteval->stack[((hsi*277440+14478402)*1+lsi)*1]), &(inteval->stack[((hsi*244800+23907006)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+15098562)*1+lsi)*1]), &(inteval->stack[((hsi*342720+14755842)*1+lsi)*1]), &(inteval->stack[((hsi*299880+12469068)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*399840+15098562)*1+lsi)*1]), &(inteval->stack[((hsi*346528+24151806)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+14715858)*1+lsi)*1]), &(inteval->stack[((hsi*445536+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*381888+24498334)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+23609982)*1+lsi)*1]), &(inteval->stack[((hsi*477360+14715858)*1+lsi)*1]), &(inteval->stack[((hsi*403920+24880222)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1306800+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*493680+23609982)*1+lsi)*1]), &(inteval->stack[((hsi*435600+858000)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2286900+24103662)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+17653152)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3303300+26390562)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+24103662)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+18796602)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*4247100+29693862)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+26390562)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+20778582)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*13923+642525)*1+lsi)*1]), &(inteval->stack[((hsi*11934+656448)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+17688954)*1+lsi)*1]), &(inteval->stack[((hsi*16065+626460)*1+lsi)*1]), &(inteval->stack[((hsi*13923+642525)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+17730723)*1+lsi)*1]), &(inteval->stack[((hsi*41769+17688954)*1+lsi)*1]), &(inteval->stack[((hsi*35802+17653152)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+17802327)*1+lsi)*1]), &(inteval->stack[((hsi*18360+608100)*1+lsi)*1]), &(inteval->stack[((hsi*16065+626460)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+17850522)*1+lsi)*1]), &(inteval->stack[((hsi*48195+17802327)*1+lsi)*1]), &(inteval->stack[((hsi*41769+17688954)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+17934060)*1+lsi)*1]), &(inteval->stack[((hsi*83538+17850522)*1+lsi)*1]), &(inteval->stack[((hsi*71604+17730723)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+18053400)*1+lsi)*1]), &(inteval->stack[((hsi*20808+587292)*1+lsi)*1]), &(inteval->stack[((hsi*18360+608100)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+18108480)*1+lsi)*1]), &(inteval->stack[((hsi*55080+18053400)*1+lsi)*1]), &(inteval->stack[((hsi*48195+17802327)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+18204870)*1+lsi)*1]), &(inteval->stack[((hsi*96390+18108480)*1+lsi)*1]), &(inteval->stack[((hsi*83538+17850522)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+18344100)*1+lsi)*1]), &(inteval->stack[((hsi*139230+18204870)*1+lsi)*1]), &(inteval->stack[((hsi*119340+17934060)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+18523110)*1+lsi)*1]), &(inteval->stack[((hsi*23409+563883)*1+lsi)*1]), &(inteval->stack[((hsi*20808+587292)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+18585534)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18523110)*1+lsi)*1]), &(inteval->stack[((hsi*55080+18053400)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+18695694)*1+lsi)*1]), &(inteval->stack[((hsi*110160+18585534)*1+lsi)*1]), &(inteval->stack[((hsi*96390+18108480)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+18856344)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18695694)*1+lsi)*1]), &(inteval->stack[((hsi*139230+18204870)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+19065189)*1+lsi)*1]), &(inteval->stack[((hsi*208845+18856344)*1+lsi)*1]), &(inteval->stack[((hsi*179010+18344100)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+19315803)*1+lsi)*1]), &(inteval->stack[((hsi*26163+537720)*1+lsi)*1]), &(inteval->stack[((hsi*23409+563883)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+19386030)*1+lsi)*1]), &(inteval->stack[((hsi*70227+19315803)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18523110)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+19510878)*1+lsi)*1]), &(inteval->stack[((hsi*124848+19386030)*1+lsi)*1]), &(inteval->stack[((hsi*110160+18585534)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+19694478)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19510878)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18695694)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+19935453)*1+lsi)*1]), &(inteval->stack[((hsi*240975+19694478)*1+lsi)*1]), &(inteval->stack[((hsi*208845+18856344)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+678480)*1+lsi)*1]), &(inteval->stack[((hsi*292383+19935453)*1+lsi)*1]), &(inteval->stack[((hsi*250614+19065189)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*29070+508650)*1+lsi)*1]), &(inteval->stack[((hsi*26163+537720)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+20227836)*1+lsi)*1]), &(inteval->stack[((hsi*78489+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*70227+19315803)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+18523110)*1+lsi)*1]), &(inteval->stack[((hsi*140454+20227836)*1+lsi)*1]), &(inteval->stack[((hsi*124848+19386030)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+12324789)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18523110)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19510878)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+20368290)*1+lsi)*1]), &(inteval->stack[((hsi*275400+12324789)*1+lsi)*1]), &(inteval->stack[((hsi*240975+19694478)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+19315803)*1+lsi)*1]), &(inteval->stack[((hsi*337365+20368290)*1+lsi)*1]), &(inteval->stack[((hsi*292383+19935453)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+19705647)*1+lsi)*1]), &(inteval->stack[((hsi*389844+19315803)*1+lsi)*1]), &(inteval->stack[((hsi*334152+678480)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+15577122)*1+lsi)*1]), &(inteval->stack[((hsi*11934+656448)*1+lsi)*1]), &(inteval->stack[((hsi*10098+668382)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+1012632)*1+lsi)*1]), &(inteval->stack[((hsi*35802+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*30294+15577122)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+15577122)*1+lsi)*1]), &(inteval->stack[((hsi*71604+17730723)*1+lsi)*1]), &(inteval->stack[((hsi*60588+1012632)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+1012632)*1+lsi)*1]), &(inteval->stack[((hsi*119340+17934060)*1+lsi)*1]), &(inteval->stack[((hsi*100980+15577122)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*179010+18344100)*1+lsi)*1]), &(inteval->stack[((hsi*151470+1012632)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+17865210)*1+lsi)*1]), &(inteval->stack[((hsi*250614+19065189)*1+lsi)*1]), &(inteval->stack[((hsi*212058+17653152)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+18731190)*1+lsi)*1]), &(inteval->stack[((hsi*334152+678480)*1+lsi)*1]), &(inteval->stack[((hsi*282744+17865210)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*429624+19705647)*1+lsi)*1]), &(inteval->stack[((hsi*363528+18731190)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+537720)*1+lsi)*1]), &(inteval->stack[((hsi*32130+476520)*1+lsi)*1]), &(inteval->stack[((hsi*29070+508650)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+624930)*1+lsi)*1]), &(inteval->stack[((hsi*87210+537720)*1+lsi)*1]), &(inteval->stack[((hsi*78489+12246300)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+781908)*1+lsi)*1]), &(inteval->stack[((hsi*156978+624930)*1+lsi)*1]), &(inteval->stack[((hsi*140454+20227836)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+18731190)*1+lsi)*1]), &(inteval->stack[((hsi*234090+781908)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18523110)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+476520)*1+lsi)*1]), &(inteval->stack[((hsi*312120+18731190)*1+lsi)*1]), &(inteval->stack[((hsi*275400+12324789)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+18107562)*1+lsi)*1]), &(inteval->stack[((hsi*385560+476520)*1+lsi)*1]), &(inteval->stack[((hsi*337365+20368290)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+476520)*1+lsi)*1]), &(inteval->stack[((hsi*449820+18107562)*1+lsi)*1]), &(inteval->stack[((hsi*389844+19315803)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+18107562)*1+lsi)*1]), &(inteval->stack[((hsi*501228+476520)*1+lsi)*1]), &(inteval->stack[((hsi*429624+19705647)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+18644592)*1+lsi)*1]), &(inteval->stack[((hsi*537030+18107562)*1+lsi)*1]), &(inteval->stack[((hsi*454410+17653152)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1481040+19199982)*1+lsi)*1]), &(inteval->stack[((hsi*555390+18644592)*1+lsi)*1]), &(inteval->stack[((hsi*493680+23609982)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2613600+33940962)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+19199982)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+14270322)*1+lsi)*1]),3630);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3811500+36554562)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+33940962)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+24103662)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4954950+40366062)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+36554562)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+26390562)*1+lsi)*1]),3630);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*5945940+23609982)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+40366062)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+29693862)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*15561+436335)*1+lsi)*1]), &(inteval->stack[((hsi*13338+451896)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+14310336)*1+lsi)*1]), &(inteval->stack[((hsi*17955+418380)*1+lsi)*1]), &(inteval->stack[((hsi*15561+436335)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+14357019)*1+lsi)*1]), &(inteval->stack[((hsi*46683+14310336)*1+lsi)*1]), &(inteval->stack[((hsi*40014+14270322)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+14437047)*1+lsi)*1]), &(inteval->stack[((hsi*20520+397860)*1+lsi)*1]), &(inteval->stack[((hsi*17955+418380)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+14490912)*1+lsi)*1]), &(inteval->stack[((hsi*53865+14437047)*1+lsi)*1]), &(inteval->stack[((hsi*46683+14310336)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+14584278)*1+lsi)*1]), &(inteval->stack[((hsi*93366+14490912)*1+lsi)*1]), &(inteval->stack[((hsi*80028+14357019)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+14717658)*1+lsi)*1]), &(inteval->stack[((hsi*23256+374604)*1+lsi)*1]), &(inteval->stack[((hsi*20520+397860)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+14779218)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14717658)*1+lsi)*1]), &(inteval->stack[((hsi*53865+14437047)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+14886948)*1+lsi)*1]), &(inteval->stack[((hsi*107730+14779218)*1+lsi)*1]), &(inteval->stack[((hsi*93366+14490912)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*155610+14886948)*1+lsi)*1]), &(inteval->stack[((hsi*133380+14584278)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+15042558)*1+lsi)*1]), &(inteval->stack[((hsi*26163+348441)*1+lsi)*1]), &(inteval->stack[((hsi*23256+374604)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+476520)*1+lsi)*1]), &(inteval->stack[((hsi*69768+15042558)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14717658)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+15112326)*1+lsi)*1]), &(inteval->stack[((hsi*123120+476520)*1+lsi)*1]), &(inteval->stack[((hsi*107730+14779218)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+17853222)*1+lsi)*1]), &(inteval->stack[((hsi*179550+15112326)*1+lsi)*1]), &(inteval->stack[((hsi*155610+14886948)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+599640)*1+lsi)*1]), &(inteval->stack[((hsi*233415+17853222)*1+lsi)*1]), &(inteval->stack[((hsi*200070+17653152)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+15291876)*1+lsi)*1]), &(inteval->stack[((hsi*29241+319200)*1+lsi)*1]), &(inteval->stack[((hsi*26163+348441)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+15370365)*1+lsi)*1]), &(inteval->stack[((hsi*78489+15291876)*1+lsi)*1]), &(inteval->stack[((hsi*69768+15042558)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15370365)*1+lsi)*1]), &(inteval->stack[((hsi*123120+476520)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+18086637)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12246300)*1+lsi)*1]), &(inteval->stack[((hsi*179550+15112326)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+14717658)*1+lsi)*1]), &(inteval->stack[((hsi*269325+18086637)*1+lsi)*1]), &(inteval->stack[((hsi*233415+17853222)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+879738)*1+lsi)*1]), &(inteval->stack[((hsi*326781+14717658)*1+lsi)*1]), &(inteval->stack[((hsi*280098+599640)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+15509901)*1+lsi)*1]), &(inteval->stack[((hsi*32490+286710)*1+lsi)*1]), &(inteval->stack[((hsi*29241+319200)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+15597624)*1+lsi)*1]), &(inteval->stack[((hsi*87723+15509901)*1+lsi)*1]), &(inteval->stack[((hsi*78489+15291876)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+12451500)*1+lsi)*1]), &(inteval->stack[((hsi*156978+15597624)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15370365)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+15044439)*1+lsi)*1]), &(inteval->stack[((hsi*232560+12451500)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12246300)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+45321012)*1+lsi)*1]), &(inteval->stack[((hsi*307800+15044439)*1+lsi)*1]), &(inteval->stack[((hsi*269325+18086637)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+17853222)*1+lsi)*1]), &(inteval->stack[((hsi*377055+45321012)*1+lsi)*1]), &(inteval->stack[((hsi*326781+14717658)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+45698067)*1+lsi)*1]), &(inteval->stack[((hsi*435708+17853222)*1+lsi)*1]), &(inteval->stack[((hsi*373464+879738)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+18288930)*1+lsi)*1]), &(inteval->stack[((hsi*13338+451896)*1+lsi)*1]), &(inteval->stack[((hsi*11286+465234)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*40014+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*33858+18288930)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+18288930)*1+lsi)*1]), &(inteval->stack[((hsi*80028+14357019)*1+lsi)*1]), &(inteval->stack[((hsi*67716+13090572)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+13090572)*1+lsi)*1]), &(inteval->stack[((hsi*133380+14584278)*1+lsi)*1]), &(inteval->stack[((hsi*112860+18288930)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*200070+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*169290+13090572)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+14507328)*1+lsi)*1]), &(inteval->stack[((hsi*280098+599640)*1+lsi)*1]), &(inteval->stack[((hsi*237006+14270322)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+319200)*1+lsi)*1]), &(inteval->stack[((hsi*373464+879738)*1+lsi)*1]), &(inteval->stack[((hsi*316008+14507328)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*480168+45698067)*1+lsi)*1]), &(inteval->stack[((hsi*406296+319200)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+319200)*1+lsi)*1]), &(inteval->stack[((hsi*35910+250800)*1+lsi)*1]), &(inteval->stack[((hsi*32490+286710)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+416670)*1+lsi)*1]), &(inteval->stack[((hsi*97470+319200)*1+lsi)*1]), &(inteval->stack[((hsi*87723+15509901)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+592116)*1+lsi)*1]), &(inteval->stack[((hsi*175446+416670)*1+lsi)*1]), &(inteval->stack[((hsi*156978+15597624)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+15352239)*1+lsi)*1]), &(inteval->stack[((hsi*261630+592116)*1+lsi)*1]), &(inteval->stack[((hsi*232560+12451500)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+250800)*1+lsi)*1]), &(inteval->stack[((hsi*348840+15352239)*1+lsi)*1]), &(inteval->stack[((hsi*307800+15044439)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+14778192)*1+lsi)*1]), &(inteval->stack[((hsi*430920+250800)*1+lsi)*1]), &(inteval->stack[((hsi*377055+45321012)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+250800)*1+lsi)*1]), &(inteval->stack[((hsi*502740+14778192)*1+lsi)*1]), &(inteval->stack[((hsi*435708+17853222)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+14778192)*1+lsi)*1]), &(inteval->stack[((hsi*560196+250800)*1+lsi)*1]), &(inteval->stack[((hsi*480168+45698067)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+250800)*1+lsi)*1]), &(inteval->stack[((hsi*600210+14778192)*1+lsi)*1]), &(inteval->stack[((hsi*507870+14270322)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1666170+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*620730+250800)*1+lsi)*1]), &(inteval->stack[((hsi*555390+18644592)*1+lsi)*1]),3630);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*2962080+45321012)*1+lsi)*1]), &(inteval->stack[((hsi*1666170+14270322)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+19199982)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*4356000+48283092)*1+lsi)*1]), &(inteval->stack[((hsi*2962080+45321012)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+33940962)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*5717250+52639092)*1+lsi)*1]), &(inteval->stack[((hsi*4356000+48283092)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+36554562)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*6936930+58356342)*1+lsi)*1]), &(inteval->stack[((hsi*5717250+52639092)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+40366062)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*7927920+33940962)*1+lsi)*1]), &(inteval->stack[((hsi*6936930+58356342)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+23609982)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1449690)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1455696)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+41884326)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1442760)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1449690)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+41902344)*1+lsi)*1]), &(inteval->stack[((hsi*18018+41884326)*1+lsi)*1]), &(inteval->stack[((hsi*15444+41868882)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+41933232)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1434840)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1442760)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+41954022)*1+lsi)*1]), &(inteval->stack[((hsi*20790+41933232)*1+lsi)*1]), &(inteval->stack[((hsi*18018+41884326)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+41990058)*1+lsi)*1]), &(inteval->stack[((hsi*36036+41954022)*1+lsi)*1]), &(inteval->stack[((hsi*30888+41902344)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+42041538)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1425864)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1434840)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+42065298)*1+lsi)*1]), &(inteval->stack[((hsi*23760+42041538)*1+lsi)*1]), &(inteval->stack[((hsi*20790+41933232)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+42106878)*1+lsi)*1]), &(inteval->stack[((hsi*41580+42065298)*1+lsi)*1]), &(inteval->stack[((hsi*36036+41954022)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+42166938)*1+lsi)*1]), &(inteval->stack[((hsi*60060+42106878)*1+lsi)*1]), &(inteval->stack[((hsi*51480+41990058)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1415766)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1425864)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+17680080)*1+lsi)*1]), &(inteval->stack[((hsi*26928+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*23760+42041538)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+42244158)*1+lsi)*1]), &(inteval->stack[((hsi*47520+17680080)*1+lsi)*1]), &(inteval->stack[((hsi*41580+42065298)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+17727600)*1+lsi)*1]), &(inteval->stack[((hsi*69300+42244158)*1+lsi)*1]), &(inteval->stack[((hsi*60060+42106878)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+42313458)*1+lsi)*1]), &(inteval->stack[((hsi*90090+17727600)*1+lsi)*1]), &(inteval->stack[((hsi*77220+42166938)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+17817690)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1404480)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1415766)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+17847984)*1+lsi)*1]), &(inteval->stack[((hsi*30294+17817690)*1+lsi)*1]), &(inteval->stack[((hsi*26928+17653152)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+42421566)*1+lsi)*1]), &(inteval->stack[((hsi*53856+17847984)*1+lsi)*1]), &(inteval->stack[((hsi*47520+17680080)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+17901840)*1+lsi)*1]), &(inteval->stack[((hsi*79200+42421566)*1+lsi)*1]), &(inteval->stack[((hsi*69300+42244158)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+42500766)*1+lsi)*1]), &(inteval->stack[((hsi*103950+17901840)*1+lsi)*1]), &(inteval->stack[((hsi*90090+17727600)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+18005790)*1+lsi)*1]), &(inteval->stack[((hsi*126126+42500766)*1+lsi)*1]), &(inteval->stack[((hsi*108108+42313458)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+42626892)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1391940)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1404480)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+42660750)*1+lsi)*1]), &(inteval->stack[((hsi*33858+42626892)*1+lsi)*1]), &(inteval->stack[((hsi*30294+17817690)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+18149934)*1+lsi)*1]), &(inteval->stack[((hsi*60588+42660750)*1+lsi)*1]), &(inteval->stack[((hsi*53856+17847984)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+42721338)*1+lsi)*1]), &(inteval->stack[((hsi*89760+18149934)*1+lsi)*1]), &(inteval->stack[((hsi*79200+42421566)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+18239694)*1+lsi)*1]), &(inteval->stack[((hsi*118800+42721338)*1+lsi)*1]), &(inteval->stack[((hsi*103950+17901840)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+42840138)*1+lsi)*1]), &(inteval->stack[((hsi*145530+18239694)*1+lsi)*1]), &(inteval->stack[((hsi*126126+42500766)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+18385224)*1+lsi)*1]), &(inteval->stack[((hsi*168168+42840138)*1+lsi)*1]), &(inteval->stack[((hsi*144144+18005790)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+43008306)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1455696)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1460844)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+43021374)*1+lsi)*1]), &(inteval->stack[((hsi*15444+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*13068+43008306)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+43047510)*1+lsi)*1]), &(inteval->stack[((hsi*30888+41902344)*1+lsi)*1]), &(inteval->stack[((hsi*26136+43021374)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+43091070)*1+lsi)*1]), &(inteval->stack[((hsi*51480+41990058)*1+lsi)*1]), &(inteval->stack[((hsi*43560+43047510)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*77220+42166938)*1+lsi)*1]), &(inteval->stack[((hsi*65340+43091070)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+43008306)*1+lsi)*1]), &(inteval->stack[((hsi*108108+42313458)*1+lsi)*1]), &(inteval->stack[((hsi*91476+18570552)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*144144+18005790)*1+lsi)*1]), &(inteval->stack[((hsi*121968+43008306)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+43008306)*1+lsi)*1]), &(inteval->stack[((hsi*185328+18385224)*1+lsi)*1]), &(inteval->stack[((hsi*156816+18570552)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1378080)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1391940)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+18608172)*1+lsi)*1]), &(inteval->stack[((hsi*37620+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*33858+42626892)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*67716+18608172)*1+lsi)*1]), &(inteval->stack[((hsi*60588+42660750)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*100980+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*89760+18149934)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*134640+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*118800+42721338)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*166320+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*145530+18239694)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*194040+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*168168+42840138)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*216216+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*185328+18385224)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+43204326)*1+lsi)*1]), &(inteval->stack[((hsi*231660+18570552)*1+lsi)*1]), &(inteval->stack[((hsi*196020+43008306)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*283140+12807432)*1+lsi)*1]), &(inteval->stack[((hsi*239580+43204326)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*849420+13420902)*1+lsi)*1]), &(inteval->stack[((hsi*718740+17653152)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+17653152)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+15954312)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+41868882)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+65293272)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+20778582)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17653152)*1+lsi)*1]),3630);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*5031180+15936492)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+29693862)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+65293272)*1+lsi)*1]),3630);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*6708240+65293272)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+23609982)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+15936492)*1+lsi)*1]),3630);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*8624880+15936492)*1+lsi)*1]), &(inteval->stack[((hsi*7927920+33940962)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+65293272)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*17290+206150)*1+lsi)*1]), &(inteval->stack[((hsi*14820+223440)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+24605832)*1+lsi)*1]), &(inteval->stack[((hsi*19950+186200)*1+lsi)*1]), &(inteval->stack[((hsi*17290+206150)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+24657702)*1+lsi)*1]), &(inteval->stack[((hsi*51870+24605832)*1+lsi)*1]), &(inteval->stack[((hsi*44460+24561372)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+24746622)*1+lsi)*1]), &(inteval->stack[((hsi*22800+163400)*1+lsi)*1]), &(inteval->stack[((hsi*19950+186200)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+24806472)*1+lsi)*1]), &(inteval->stack[((hsi*59850+24746622)*1+lsi)*1]), &(inteval->stack[((hsi*51870+24605832)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+24910212)*1+lsi)*1]), &(inteval->stack[((hsi*103740+24806472)*1+lsi)*1]), &(inteval->stack[((hsi*88920+24657702)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+25058412)*1+lsi)*1]), &(inteval->stack[((hsi*25840+137560)*1+lsi)*1]), &(inteval->stack[((hsi*22800+163400)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+25126812)*1+lsi)*1]), &(inteval->stack[((hsi*68400+25058412)*1+lsi)*1]), &(inteval->stack[((hsi*59850+24746622)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+25246512)*1+lsi)*1]), &(inteval->stack[((hsi*119700+25126812)*1+lsi)*1]), &(inteval->stack[((hsi*103740+24806472)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+25419412)*1+lsi)*1]), &(inteval->stack[((hsi*172900+25246512)*1+lsi)*1]), &(inteval->stack[((hsi*148200+24910212)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+25641712)*1+lsi)*1]), &(inteval->stack[((hsi*29070+108490)*1+lsi)*1]), &(inteval->stack[((hsi*25840+137560)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+25719232)*1+lsi)*1]), &(inteval->stack[((hsi*77520+25641712)*1+lsi)*1]), &(inteval->stack[((hsi*68400+25058412)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+25856032)*1+lsi)*1]), &(inteval->stack[((hsi*136800+25719232)*1+lsi)*1]), &(inteval->stack[((hsi*119700+25126812)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+26055532)*1+lsi)*1]), &(inteval->stack[((hsi*199500+25856032)*1+lsi)*1]), &(inteval->stack[((hsi*172900+25246512)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+26314882)*1+lsi)*1]), &(inteval->stack[((hsi*259350+26055532)*1+lsi)*1]), &(inteval->stack[((hsi*222300+25419412)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+26626102)*1+lsi)*1]), &(inteval->stack[((hsi*32490+76000)*1+lsi)*1]), &(inteval->stack[((hsi*29070+108490)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+26713312)*1+lsi)*1]), &(inteval->stack[((hsi*87210+26626102)*1+lsi)*1]), &(inteval->stack[((hsi*77520+25641712)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+26868352)*1+lsi)*1]), &(inteval->stack[((hsi*155040+26713312)*1+lsi)*1]), &(inteval->stack[((hsi*136800+25719232)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+27096352)*1+lsi)*1]), &(inteval->stack[((hsi*228000+26868352)*1+lsi)*1]), &(inteval->stack[((hsi*199500+25856032)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+27395602)*1+lsi)*1]), &(inteval->stack[((hsi*299250+27096352)*1+lsi)*1]), &(inteval->stack[((hsi*259350+26055532)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+27758692)*1+lsi)*1]), &(inteval->stack[((hsi*363090+27395602)*1+lsi)*1]), &(inteval->stack[((hsi*311220+26314882)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+28173652)*1+lsi)*1]), &(inteval->stack[((hsi*36100+39900)*1+lsi)*1]), &(inteval->stack[((hsi*32490+76000)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+28271122)*1+lsi)*1]), &(inteval->stack[((hsi*97470+28173652)*1+lsi)*1]), &(inteval->stack[((hsi*87210+26626102)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+28445542)*1+lsi)*1]), &(inteval->stack[((hsi*174420+28271122)*1+lsi)*1]), &(inteval->stack[((hsi*155040+26713312)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+28703942)*1+lsi)*1]), &(inteval->stack[((hsi*258400+28445542)*1+lsi)*1]), &(inteval->stack[((hsi*228000+26868352)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+29045942)*1+lsi)*1]), &(inteval->stack[((hsi*342000+28703942)*1+lsi)*1]), &(inteval->stack[((hsi*299250+27096352)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+29464892)*1+lsi)*1]), &(inteval->stack[((hsi*418950+29045942)*1+lsi)*1]), &(inteval->stack[((hsi*363090+27395602)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+29949012)*1+lsi)*1]), &(inteval->stack[((hsi*484120+29464892)*1+lsi)*1]), &(inteval->stack[((hsi*414960+27758692)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*14820+223440)*1+lsi)*1]), &(inteval->stack[((hsi*12540+238260)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*44460+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*37620+30482532)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*88920+24657702)*1+lsi)*1]), &(inteval->stack[((hsi*75240+41868882)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*148200+24910212)*1+lsi)*1]), &(inteval->stack[((hsi*125400+30482532)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*222300+25419412)*1+lsi)*1]), &(inteval->stack[((hsi*188100+41868882)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*311220+26314882)*1+lsi)*1]), &(inteval->stack[((hsi*263340+30482532)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*414960+27758692)*1+lsi)*1]), &(inteval->stack[((hsi*351120+41868882)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*533520+29949012)*1+lsi)*1]), &(inteval->stack[((hsi*451440+30482532)*1+lsi)*1]),190);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*108300+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*39900+0)*1+lsi)*1]), &(inteval->stack[((hsi*36100+39900)*1+lsi)*1]),190);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*194940+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*108300+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*97470+28173652)*1+lsi)*1]),190);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*290700+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*194940+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*174420+28271122)*1+lsi)*1]),190);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*387600+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*290700+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*258400+28445542)*1+lsi)*1]),190);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*478800+25125672)*1+lsi)*1]), &(inteval->stack[((hsi*387600+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*342000+28703942)*1+lsi)*1]),190);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*558600+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*478800+25125672)*1+lsi)*1]), &(inteval->stack[((hsi*418950+29045942)*1+lsi)*1]),190);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*622440+25125672)*1+lsi)*1]), &(inteval->stack[((hsi*558600+30482532)*1+lsi)*1]), &(inteval->stack[((hsi*484120+29464892)*1+lsi)*1]),190);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*666900+25748112)*1+lsi)*1]), &(inteval->stack[((hsi*622440+25125672)*1+lsi)*1]), &(inteval->stack[((hsi*533520+29949012)*1+lsi)*1]),190);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*689700+26415012)*1+lsi)*1]), &(inteval->stack[((hsi*666900+25748112)*1+lsi)*1]), &(inteval->stack[((hsi*564300+24561372)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*1862190+27104712)*1+lsi)*1]), &(inteval->stack[((hsi*689700+26415012)*1+lsi)*1]), &(inteval->stack[((hsi*620730+250800)*1+lsi)*1]),3630);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*3332340+28966902)*1+lsi)*1]), &(inteval->stack[((hsi*1862190+27104712)*1+lsi)*1]), &(inteval->stack[((hsi*1666170+14270322)*1+lsi)*1]),3630);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*4936800+65293272)*1+lsi)*1]), &(inteval->stack[((hsi*3332340+28966902)*1+lsi)*1]), &(inteval->stack[((hsi*2962080+45321012)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*6534000+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*4936800+65293272)*1+lsi)*1]), &(inteval->stack[((hsi*4356000+48283092)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*8004150+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*6534000+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*5717250+52639092)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*9249240+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*8004150+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*6936930+58356342)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*10193040+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*9249240+24561372)*1+lsi)*1]), &(inteval->stack[((hsi*7927920+33940962)*1+lsi)*1]),3630);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*10781100+1465200)*1+lsi)*1]), &(inteval->stack[((hsi*10193040+41868882)*1+lsi)*1]), &(inteval->stack[((hsi*8624880+15936492)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10781100+1465200)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
