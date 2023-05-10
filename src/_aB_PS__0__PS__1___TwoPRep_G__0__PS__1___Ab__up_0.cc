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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdl.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfk.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgi.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0phh.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pig.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkf.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0pld.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0pmp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppm.h>
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
#include <HRRPart1bra0ket0psps.h>
#include <_aB_PS__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,713460)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_G__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+5044152)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+5065446)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5044152)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5025900)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+5101950)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+5126520)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5101950)*1+lsi)*1]), &(inteval->stack[((hsi*21294+5044152)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+5169108)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5126520)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5065446)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+5229948)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+5258028)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5229948)*1+lsi)*1]), &(inteval->stack[((hsi*24570+5101950)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+5307168)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5258028)*1+lsi)*1]), &(inteval->stack[((hsi*42588+5126520)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+5378148)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5307168)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5169108)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+5101950)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+5469408)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5101950)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5229948)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+5525568)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5469408)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5258028)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+5607468)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5525568)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5307168)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+5229948)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5607468)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5378148)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+5713938)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+5749740)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5713938)*1+lsi)*1]), &(inteval->stack[((hsi*31824+5101950)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+5813388)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5749740)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5469408)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+5906988)*1+lsi)*1]), &(inteval->stack[((hsi*93600+5813388)*1+lsi)*1]), &(inteval->stack[((hsi*81900+5525568)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+6029838)*1+lsi)*1]), &(inteval->stack[((hsi*122850+5906988)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5607468)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+5469408)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6029838)*1+lsi)*1]), &(inteval->stack[((hsi*127764+5229948)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+5639760)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+6178896)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5639760)*1+lsi)*1]), &(inteval->stack[((hsi*35802+5713938)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+6250500)*1+lsi)*1]), &(inteval->stack[((hsi*71604+6178896)*1+lsi)*1]), &(inteval->stack[((hsi*63648+5749740)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+6356580)*1+lsi)*1]), &(inteval->stack[((hsi*106080+6250500)*1+lsi)*1]), &(inteval->stack[((hsi*93600+5813388)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+5679774)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6356580)*1+lsi)*1]), &(inteval->stack[((hsi*122850+5906988)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+6496980)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5679774)*1+lsi)*1]), &(inteval->stack[((hsi*149058+6029838)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+5851764)*1+lsi)*1]), &(inteval->stack[((hsi*198744+6496980)*1+lsi)*1]), &(inteval->stack[((hsi*170352+5469408)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+6070788)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+6695724)*1+lsi)*1]), &(inteval->stack[((hsi*44460+6070788)*1+lsi)*1]), &(inteval->stack[((hsi*40014+5639760)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+6775752)*1+lsi)*1]), &(inteval->stack[((hsi*80028+6695724)*1+lsi)*1]), &(inteval->stack[((hsi*71604+6178896)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+6895092)*1+lsi)*1]), &(inteval->stack[((hsi*119340+6775752)*1+lsi)*1]), &(inteval->stack[((hsi*106080+6250500)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+6115248)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6895092)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6356580)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+7054212)*1+lsi)*1]), &(inteval->stack[((hsi*196560+6115248)*1+lsi)*1]), &(inteval->stack[((hsi*171990+5679774)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+7283532)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7054212)*1+lsi)*1]), &(inteval->stack[((hsi*198744+6496980)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+6311808)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7283532)*1+lsi)*1]), &(inteval->stack[((hsi*219024+5851764)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+5639760)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]), &(inteval->stack[((hsi*5148+605946)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+5655204)*1+lsi)*1]), &(inteval->stack[((hsi*18252+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5639760)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+5686092)*1+lsi)*1]), &(inteval->stack[((hsi*36504+5065446)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5655204)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*60840+5169108)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5686092)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+5639760)*1+lsi)*1]), &(inteval->stack[((hsi*91260+5378148)*1+lsi)*1]), &(inteval->stack[((hsi*77220+5025900)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*127764+5229948)*1+lsi)*1]), &(inteval->stack[((hsi*108108+5639760)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+5170044)*1+lsi)*1]), &(inteval->stack[((hsi*170352+5469408)*1+lsi)*1]), &(inteval->stack[((hsi*144144+5025900)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+5355372)*1+lsi)*1]), &(inteval->stack[((hsi*219024+5851764)*1+lsi)*1]), &(inteval->stack[((hsi*185328+5170044)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+5587032)*1+lsi)*1]), &(inteval->stack[((hsi*273780+6311808)*1+lsi)*1]), &(inteval->stack[((hsi*231660+5355372)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*18018+490116)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+5075040)*1+lsi)*1]), &(inteval->stack[((hsi*49140+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*44460+6070788)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+5163960)*1+lsi)*1]), &(inteval->stack[((hsi*88920+5075040)*1+lsi)*1]), &(inteval->stack[((hsi*80028+6695724)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+5297340)*1+lsi)*1]), &(inteval->stack[((hsi*133380+5163960)*1+lsi)*1]), &(inteval->stack[((hsi*119340+6775752)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+6585588)*1+lsi)*1]), &(inteval->stack[((hsi*179010+5297340)*1+lsi)*1]), &(inteval->stack[((hsi*159120+6895092)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*222768+6585588)*1+lsi)*1]), &(inteval->stack[((hsi*196560+6115248)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+6585588)*1+lsi)*1]), &(inteval->stack[((hsi*262080+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7054212)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*294840+6585588)*1+lsi)*1]), &(inteval->stack[((hsi*255528+7283532)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+5870172)*1+lsi)*1]), &(inteval->stack[((hsi*319410+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*273780+6311808)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*334620+5870172)*1+lsi)*1]), &(inteval->stack[((hsi*283140+5587032)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+511410)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+536253)*1+lsi)*1]), &(inteval->stack[((hsi*24843+511410)*1+lsi)*1]), &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+578841)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*28665+578841)*1+lsi)*1]), &(inteval->stack[((hsi*24843+511410)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+5415354)*1+lsi)*1]), &(inteval->stack[((hsi*49686+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*42588+536253)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+5486334)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+5519094)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5486334)*1+lsi)*1]), &(inteval->stack[((hsi*28665+578841)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+5576424)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5519094)*1+lsi)*1]), &(inteval->stack[((hsi*49686+5365668)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+5659234)*1+lsi)*1]), &(inteval->stack[((hsi*82810+5576424)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5415354)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+5765704)*1+lsi)*1]), &(inteval->stack[((hsi*37128+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5486334)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+5831224)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5765704)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5519094)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+5926774)*1+lsi)*1]), &(inteval->stack[((hsi*95550+5831224)*1+lsi)*1]), &(inteval->stack[((hsi*82810+5576424)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+5486334)*1+lsi)*1]), &(inteval->stack[((hsi*124215+5926774)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5659234)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+6050989)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+6092758)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6050989)*1+lsi)*1]), &(inteval->stack[((hsi*37128+5365668)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+6167014)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6092758)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5765704)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+6276214)*1+lsi)*1]), &(inteval->stack[((hsi*109200+6167014)*1+lsi)*1]), &(inteval->stack[((hsi*95550+5831224)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+6419539)*1+lsi)*1]), &(inteval->stack[((hsi*143325+6276214)*1+lsi)*1]), &(inteval->stack[((hsi*124215+5926774)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+5765704)*1+lsi)*1]), &(inteval->stack[((hsi*173901+6419539)*1+lsi)*1]), &(inteval->stack[((hsi*149058+5486334)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+5964448)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+6593440)*1+lsi)*1]), &(inteval->stack[((hsi*46683+5964448)*1+lsi)*1]), &(inteval->stack[((hsi*41769+6050989)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+6676978)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6593440)*1+lsi)*1]), &(inteval->stack[((hsi*74256+6092758)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+6800738)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6676978)*1+lsi)*1]), &(inteval->stack[((hsi*109200+6167014)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+6011131)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6800738)*1+lsi)*1]), &(inteval->stack[((hsi*143325+6276214)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+6964538)*1+lsi)*1]), &(inteval->stack[((hsi*200655+6011131)*1+lsi)*1]), &(inteval->stack[((hsi*173901+6419539)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+6211786)*1+lsi)*1]), &(inteval->stack[((hsi*231868+6964538)*1+lsi)*1]), &(inteval->stack[((hsi*198744+5765704)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+6467314)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+7196406)*1+lsi)*1]), &(inteval->stack[((hsi*51870+6467314)*1+lsi)*1]), &(inteval->stack[((hsi*46683+5964448)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+7289772)*1+lsi)*1]), &(inteval->stack[((hsi*93366+7196406)*1+lsi)*1]), &(inteval->stack[((hsi*83538+6593440)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+7429002)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7289772)*1+lsi)*1]), &(inteval->stack[((hsi*123760+6676978)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+6519184)*1+lsi)*1]), &(inteval->stack[((hsi*185640+7429002)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6800738)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+7614642)*1+lsi)*1]), &(inteval->stack[((hsi*229320+6519184)*1+lsi)*1]), &(inteval->stack[((hsi*200655+6011131)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+7882182)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7614642)*1+lsi)*1]), &(inteval->stack[((hsi*231868+6964538)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+6748504)*1+lsi)*1]), &(inteval->stack[((hsi*298116+7882182)*1+lsi)*1]), &(inteval->stack[((hsi*255528+6211786)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+5964448)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]), &(inteval->stack[((hsi*6006+484110)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+5982466)*1+lsi)*1]), &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5964448)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+6018502)*1+lsi)*1]), &(inteval->stack[((hsi*42588+536253)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5982466)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+389106)*1+lsi)*1]), &(inteval->stack[((hsi*70980+5415354)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6018502)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+5964448)*1+lsi)*1]), &(inteval->stack[((hsi*106470+5659234)*1+lsi)*1]), &(inteval->stack[((hsi*90090+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+389106)*1+lsi)*1]), &(inteval->stack[((hsi*149058+5486334)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5964448)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*198744+5765704)*1+lsi)*1]), &(inteval->stack[((hsi*168168+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+5581884)*1+lsi)*1]), &(inteval->stack[((hsi*255528+6211786)*1+lsi)*1]), &(inteval->stack[((hsi*216216+5365668)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+5852154)*1+lsi)*1]), &(inteval->stack[((hsi*319410+6748504)*1+lsi)*1]), &(inteval->stack[((hsi*270270+5581884)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*21021+348975)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+5422998)*1+lsi)*1]), &(inteval->stack[((hsi*57330+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*51870+6467314)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+6182484)*1+lsi)*1]), &(inteval->stack[((hsi*103740+5422998)*1+lsi)*1]), &(inteval->stack[((hsi*93366+7196406)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*155610+6182484)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7289772)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+7067914)*1+lsi)*1]), &(inteval->stack[((hsi*208845+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*185640+7429002)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*259896+7067914)*1+lsi)*1]), &(inteval->stack[((hsi*229320+6519184)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+6182484)*1+lsi)*1]), &(inteval->stack[((hsi*305760+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7614642)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+7067914)*1+lsi)*1]), &(inteval->stack[((hsi*343980+6182484)*1+lsi)*1]), &(inteval->stack[((hsi*298116+7882182)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+6182484)*1+lsi)*1]), &(inteval->stack[((hsi*372645+7067914)*1+lsi)*1]), &(inteval->stack[((hsi*319410+6748504)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*390390+6182484)*1+lsi)*1]), &(inteval->stack[((hsi*330330+5852154)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+5762064)*1+lsi)*1]), &(inteval->stack[((hsi*396396+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*339768+5025900)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+348975)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+373545)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+402210)*1+lsi)*1]), &(inteval->stack[((hsi*28665+373545)*1+lsi)*1]), &(inteval->stack[((hsi*24570+348975)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+451350)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+484425)*1+lsi)*1]), &(inteval->stack[((hsi*33075+451350)*1+lsi)*1]), &(inteval->stack[((hsi*28665+373545)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*57330+484425)*1+lsi)*1]), &(inteval->stack[((hsi*49140+402210)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+541755)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+6863268)*1+lsi)*1]), &(inteval->stack[((hsi*37800+541755)*1+lsi)*1]), &(inteval->stack[((hsi*33075+451350)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+6929418)*1+lsi)*1]), &(inteval->stack[((hsi*66150+6863268)*1+lsi)*1]), &(inteval->stack[((hsi*57330+484425)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+7024968)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6929418)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6781368)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+451350)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+7147818)*1+lsi)*1]), &(inteval->stack[((hsi*42840+451350)*1+lsi)*1]), &(inteval->stack[((hsi*37800+541755)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+494190)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7147818)*1+lsi)*1]), &(inteval->stack[((hsi*66150+6863268)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+7223418)*1+lsi)*1]), &(inteval->stack[((hsi*110250+494190)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6929418)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+7366743)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7223418)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7024968)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+6863268)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+6911463)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6863268)*1+lsi)*1]), &(inteval->stack[((hsi*42840+451350)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+7538733)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6911463)*1+lsi)*1]), &(inteval->stack[((hsi*75600+7147818)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+7664733)*1+lsi)*1]), &(inteval->stack[((hsi*126000+7538733)*1+lsi)*1]), &(inteval->stack[((hsi*110250+494190)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+7830108)*1+lsi)*1]), &(inteval->stack[((hsi*165375+7664733)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7223418)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+8030763)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7830108)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7366743)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+7147818)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+7201683)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7147818)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6863268)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+451350)*1+lsi)*1]), &(inteval->stack[((hsi*96390+7201683)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6911463)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+8260083)*1+lsi)*1]), &(inteval->stack[((hsi*142800+451350)*1+lsi)*1]), &(inteval->stack[((hsi*126000+7538733)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+8449083)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8260083)*1+lsi)*1]), &(inteval->stack[((hsi*165375+7664733)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+7538733)*1+lsi)*1]), &(inteval->stack[((hsi*231525+8449083)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7830108)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+8680608)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7538733)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8030763)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+7806273)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+7866123)*1+lsi)*1]), &(inteval->stack[((hsi*59850+7806273)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7147818)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+6863268)*1+lsi)*1]), &(inteval->stack[((hsi*107730+7866123)*1+lsi)*1]), &(inteval->stack[((hsi*96390+7201683)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+7147818)*1+lsi)*1]), &(inteval->stack[((hsi*160650+6863268)*1+lsi)*1]), &(inteval->stack[((hsi*142800+451350)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+8975448)*1+lsi)*1]), &(inteval->stack[((hsi*214200+7147818)*1+lsi)*1]), &(inteval->stack[((hsi*189000+8260083)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+9240048)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8975448)*1+lsi)*1]), &(inteval->stack[((hsi*231525+8449083)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+8260083)*1+lsi)*1]), &(inteval->stack[((hsi*308700+9240048)*1+lsi)*1]), &(inteval->stack[((hsi*267540+7538733)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+9548748)*1+lsi)*1]), &(inteval->stack[((hsi*343980+8260083)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8680608)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+7538733)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]), &(inteval->stack[((hsi*6930+342045)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+7559523)*1+lsi)*1]), &(inteval->stack[((hsi*24570+348975)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7538733)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+7601103)*1+lsi)*1]), &(inteval->stack[((hsi*49140+402210)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7559523)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+232425)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7601103)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+336375)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7024968)*1+lsi)*1]), &(inteval->stack[((hsi*103950+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+7538733)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7366743)*1+lsi)*1]), &(inteval->stack[((hsi*145530+336375)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+232425)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8030763)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7538733)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+7362018)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8680608)*1+lsi)*1]), &(inteval->stack[((hsi*249480+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+9917298)*1+lsi)*1]), &(inteval->stack[((hsi*368550+9548748)*1+lsi)*1]), &(inteval->stack[((hsi*311850+7362018)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+7362018)*1+lsi)*1]), &(inteval->stack[((hsi*24255+186120)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+186120)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7362018)*1+lsi)*1]), &(inteval->stack[((hsi*59850+7806273)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+7362018)*1+lsi)*1]), &(inteval->stack[((hsi*119700+186120)*1+lsi)*1]), &(inteval->stack[((hsi*107730+7866123)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+7541568)*1+lsi)*1]), &(inteval->stack[((hsi*179550+7362018)*1+lsi)*1]), &(inteval->stack[((hsi*160650+6863268)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+7782543)*1+lsi)*1]), &(inteval->stack[((hsi*240975+7541568)*1+lsi)*1]), &(inteval->stack[((hsi*214200+7147818)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*299880+7782543)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8975448)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+7134168)*1+lsi)*1]), &(inteval->stack[((hsi*352800+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*308700+9240048)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+8604063)*1+lsi)*1]), &(inteval->stack[((hsi*396900+7134168)*1+lsi)*1]), &(inteval->stack[((hsi*343980+8260083)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*429975+8604063)*1+lsi)*1]), &(inteval->stack[((hsi*368550+9548748)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+7231818)*1+lsi)*1]), &(inteval->stack[((hsi*450450+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*381150+9917298)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+7689198)*1+lsi)*1]), &(inteval->stack[((hsi*457380+7231818)*1+lsi)*1]), &(inteval->stack[((hsi*396396+5365668)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+8878386)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+7689198)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+5762064)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+6796812)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+186120)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6796812)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6781368)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+6814830)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6814830)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6796812)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+6835620)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*30888+186120)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+217008)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+240768)*1+lsi)*1]), &(inteval->stack[((hsi*23760+217008)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6814830)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+5401704)*1+lsi)*1]), &(inteval->stack[((hsi*41580+240768)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5365668)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+6887100)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5401704)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6835620)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+282348)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+309276)*1+lsi)*1]), &(inteval->stack[((hsi*26928+282348)*1+lsi)*1]), &(inteval->stack[((hsi*23760+217008)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+5461764)*1+lsi)*1]), &(inteval->stack[((hsi*47520+309276)*1+lsi)*1]), &(inteval->stack[((hsi*41580+240768)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6964320)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5461764)*1+lsi)*1]), &(inteval->stack[((hsi*60060+5401704)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+356796)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6964320)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6887100)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+5531064)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+5561358)*1+lsi)*1]), &(inteval->stack[((hsi*30294+5531064)*1+lsi)*1]), &(inteval->stack[((hsi*26928+282348)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+7054410)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5561358)*1+lsi)*1]), &(inteval->stack[((hsi*47520+309276)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+5615214)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7054410)*1+lsi)*1]), &(inteval->stack[((hsi*69300+5461764)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5615214)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6964320)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+464904)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*108108+356796)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+217008)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+250866)*1+lsi)*1]), &(inteval->stack[((hsi*33858+217008)*1+lsi)*1]), &(inteval->stack[((hsi*30294+5531064)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+7133610)*1+lsi)*1]), &(inteval->stack[((hsi*60588+250866)*1+lsi)*1]), &(inteval->stack[((hsi*53856+5561358)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+5491794)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7133610)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7054410)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+6964320)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5491794)*1+lsi)*1]), &(inteval->stack[((hsi*103950+5615214)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6964320)*1+lsi)*1]), &(inteval->stack[((hsi*126126+5365668)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+11085162)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*144144+464904)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+5610594)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*37620+5610594)*1+lsi)*1]), &(inteval->stack[((hsi*33858+217008)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+5648214)*1+lsi)*1]), &(inteval->stack[((hsi*67716+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*60588+250866)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+217008)*1+lsi)*1]), &(inteval->stack[((hsi*100980+5648214)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7133610)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+11270490)*1+lsi)*1]), &(inteval->stack[((hsi*134640+217008)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5491794)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+11436810)*1+lsi)*1]), &(inteval->stack[((hsi*166320+11270490)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6964320)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+6964320)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11436810)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10916994)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+11630850)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6964320)*1+lsi)*1]), &(inteval->stack[((hsi*185328+11085162)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+5433384)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]), &(inteval->stack[((hsi*4356+709104)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*13068+5433384)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+5433384)*1+lsi)*1]), &(inteval->stack[((hsi*30888+186120)*1+lsi)*1]), &(inteval->stack[((hsi*26136+10916994)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6835620)*1+lsi)*1]), &(inteval->stack[((hsi*43560+5433384)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+5433384)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6887100)*1+lsi)*1]), &(inteval->stack[((hsi*65340+10916994)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*108108+356796)*1+lsi)*1]), &(inteval->stack[((hsi*91476+5433384)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+5433384)*1+lsi)*1]), &(inteval->stack[((hsi*144144+464904)*1+lsi)*1]), &(inteval->stack[((hsi*121968+6781368)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+351648)*1+lsi)*1]), &(inteval->stack[((hsi*185328+11085162)*1+lsi)*1]), &(inteval->stack[((hsi*156816+5433384)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11630850)*1+lsi)*1]), &(inteval->stack[((hsi*196020+351648)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+351648)*1+lsi)*1]), &(inteval->stack[((hsi*15246+611094)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+393228)*1+lsi)*1]), &(inteval->stack[((hsi*41580+351648)*1+lsi)*1]), &(inteval->stack[((hsi*37620+5610594)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+468468)*1+lsi)*1]), &(inteval->stack[((hsi*75240+393228)*1+lsi)*1]), &(inteval->stack[((hsi*67716+5365668)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*112860+468468)*1+lsi)*1]), &(inteval->stack[((hsi*100980+5648214)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+351648)*1+lsi)*1]), &(inteval->stack[((hsi*151470+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*134640+217008)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*188496+351648)*1+lsi)*1]), &(inteval->stack[((hsi*166320+11270490)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+186120)*1+lsi)*1]), &(inteval->stack[((hsi*221760+5365668)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11436810)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+11156574)*1+lsi)*1]), &(inteval->stack[((hsi*249480+186120)*1+lsi)*1]), &(inteval->stack[((hsi*216216+6964320)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+186120)*1+lsi)*1]), &(inteval->stack[((hsi*270270+11156574)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11630850)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+6781368)*1+lsi)*1]), &(inteval->stack[((hsi*283140+186120)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10916994)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*339768+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*287496+6781368)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+11779482)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+5762064)*1+lsi)*1]), &(inteval->stack[((hsi*862488+10916994)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+13504458)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+8878386)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+11779482)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+10945074)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+10977834)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10945074)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10916994)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+11033994)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+11071794)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11033994)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10945074)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+11137314)*1+lsi)*1]), &(inteval->stack[((hsi*65520+11071794)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10977834)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+11230914)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+11274114)*1+lsi)*1]), &(inteval->stack[((hsi*43200+11230914)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11033994)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11274114)*1+lsi)*1]), &(inteval->stack[((hsi*65520+11071794)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+11349714)*1+lsi)*1]), &(inteval->stack[((hsi*109200+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11137314)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+5135100)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+5184060)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5135100)*1+lsi)*1]), &(inteval->stack[((hsi*43200+11230914)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+11490114)*1+lsi)*1]), &(inteval->stack[((hsi*86400+5184060)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11274114)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+5270460)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11490114)*1+lsi)*1]), &(inteval->stack[((hsi*109200+5025900)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+11616114)*1+lsi)*1]), &(inteval->stack[((hsi*163800+5270460)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11349714)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+5434260)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+5489340)*1+lsi)*1]), &(inteval->stack[((hsi*55080+5434260)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5135100)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+11812674)*1+lsi)*1]), &(inteval->stack[((hsi*97920+5489340)*1+lsi)*1]), &(inteval->stack[((hsi*86400+5184060)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+5587260)*1+lsi)*1]), &(inteval->stack[((hsi*144000+11812674)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11490114)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+11956674)*1+lsi)*1]), &(inteval->stack[((hsi*189000+5587260)*1+lsi)*1]), &(inteval->stack[((hsi*163800+5270460)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+5776260)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11956674)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11616114)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+12185994)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+12247554)*1+lsi)*1]), &(inteval->stack[((hsi*61560+12185994)*1+lsi)*1]), &(inteval->stack[((hsi*55080+5434260)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+6038340)*1+lsi)*1]), &(inteval->stack[((hsi*110160+12247554)*1+lsi)*1]), &(inteval->stack[((hsi*97920+5489340)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+12357714)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6038340)*1+lsi)*1]), &(inteval->stack[((hsi*144000+11812674)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+6201540)*1+lsi)*1]), &(inteval->stack[((hsi*216000+12357714)*1+lsi)*1]), &(inteval->stack[((hsi*189000+5587260)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+12573714)*1+lsi)*1]), &(inteval->stack[((hsi*264600+6201540)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11956674)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+6466140)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12573714)*1+lsi)*1]), &(inteval->stack[((hsi*262080+5776260)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+5094300)*1+lsi)*1]), &(inteval->stack[((hsi*68400+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*61560+12185994)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+12879474)*1+lsi)*1]), &(inteval->stack[((hsi*123120+5094300)*1+lsi)*1]), &(inteval->stack[((hsi*110160+12247554)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+5217420)*1+lsi)*1]), &(inteval->stack[((hsi*183600+12879474)*1+lsi)*1]), &(inteval->stack[((hsi*163200+6038340)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+11812674)*1+lsi)*1]), &(inteval->stack[((hsi*244800+5217420)*1+lsi)*1]), &(inteval->stack[((hsi*216000+12357714)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+186120)*1+lsi)*1]), &(inteval->stack[((hsi*302400+11812674)*1+lsi)*1]), &(inteval->stack[((hsi*264600+6201540)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+12115074)*1+lsi)*1]), &(inteval->stack[((hsi*352800+186120)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12573714)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+13063074)*1+lsi)*1]), &(inteval->stack[((hsi*393120+12115074)*1+lsi)*1]), &(inteval->stack[((hsi*336960+6466140)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+6803100)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]), &(inteval->stack[((hsi*7920+178200)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+6038340)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6803100)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+6803100)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10977834)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6038340)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+11230914)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11137314)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6803100)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+6803100)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11349714)*1+lsi)*1]), &(inteval->stack[((hsi*118800+11230914)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*196560+11616114)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6803100)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+11138754)*1+lsi)*1]), &(inteval->stack[((hsi*262080+5776260)*1+lsi)*1]), &(inteval->stack[((hsi*221760+10916994)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+5462220)*1+lsi)*1]), &(inteval->stack[((hsi*336960+6466140)*1+lsi)*1]), &(inteval->stack[((hsi*285120+11138754)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+5818620)*1+lsi)*1]), &(inteval->stack[((hsi*421200+13063074)*1+lsi)*1]), &(inteval->stack[((hsi*356400+5462220)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+6329820)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*68400+5025900)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*136800+6329820)*1+lsi)*1]), &(inteval->stack[((hsi*123120+5094300)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*205200+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*183600+12879474)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*275400+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*244800+5217420)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*342720+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*302400+11812674)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*403200+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*352800+186120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*453600+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*393120+12115074)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*491400+6254220)*1+lsi)*1]), &(inteval->stack[((hsi*421200+13063074)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+11431794)*1+lsi)*1]), &(inteval->stack[((hsi*514800+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*435600+5818620)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*522720+11431794)*1+lsi)*1]), &(inteval->stack[((hsi*457380+7231818)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+7689198)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+10916994)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+8878386)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+713460)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+5025900)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+13504458)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4312440+713460)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
