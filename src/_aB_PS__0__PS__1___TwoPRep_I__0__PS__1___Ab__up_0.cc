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
#include <_aB_PS__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1161699)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_I__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1041003)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1048101)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+9229839)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1032813)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1041003)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+9251133)*1+lsi)*1]), &(inteval->stack[((hsi*21294+9229839)*1+lsi)*1]), &(inteval->stack[((hsi*18252+9211587)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+9287637)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1023453)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1032813)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+9312207)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9287637)*1+lsi)*1]), &(inteval->stack[((hsi*21294+9229839)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+9354795)*1+lsi)*1]), &(inteval->stack[((hsi*42588+9312207)*1+lsi)*1]), &(inteval->stack[((hsi*36504+9251133)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+9415635)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1012845)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1023453)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+9443715)*1+lsi)*1]), &(inteval->stack[((hsi*28080+9415635)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9287637)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+9492855)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9443715)*1+lsi)*1]), &(inteval->stack[((hsi*42588+9312207)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+9563835)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9492855)*1+lsi)*1]), &(inteval->stack[((hsi*60840+9354795)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+9287637)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1000911)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1012845)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+9655095)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9287637)*1+lsi)*1]), &(inteval->stack[((hsi*28080+9415635)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+9711255)*1+lsi)*1]), &(inteval->stack[((hsi*56160+9655095)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9443715)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+9793155)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9711255)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9492855)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+9415635)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9793155)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9563835)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+9899625)*1+lsi)*1]), &(inteval->stack[((hsi*13338+987573)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1000911)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+9935427)*1+lsi)*1]), &(inteval->stack[((hsi*35802+9899625)*1+lsi)*1]), &(inteval->stack[((hsi*31824+9287637)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+9999075)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9935427)*1+lsi)*1]), &(inteval->stack[((hsi*56160+9655095)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+10092675)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9999075)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9711255)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+10215525)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10092675)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9793155)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9655095)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10215525)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9415635)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+9825447)*1+lsi)*1]), &(inteval->stack[((hsi*14820+972753)*1+lsi)*1]), &(inteval->stack[((hsi*13338+987573)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+10364583)*1+lsi)*1]), &(inteval->stack[((hsi*40014+9825447)*1+lsi)*1]), &(inteval->stack[((hsi*35802+9899625)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+10436187)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10364583)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9935427)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+10542267)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10436187)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9999075)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+9865461)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10542267)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10092675)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+10682667)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9865461)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10215525)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10037451)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10682667)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9655095)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+10256475)*1+lsi)*1]), &(inteval->stack[((hsi*16380+956373)*1+lsi)*1]), &(inteval->stack[((hsi*14820+972753)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+10881411)*1+lsi)*1]), &(inteval->stack[((hsi*44460+10256475)*1+lsi)*1]), &(inteval->stack[((hsi*40014+9825447)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+10961439)*1+lsi)*1]), &(inteval->stack[((hsi*80028+10881411)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10364583)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+11080779)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10961439)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10436187)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+10300935)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11080779)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10542267)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+11239899)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10300935)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9865461)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+11469219)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11239899)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10682667)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+10497495)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11469219)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10037451)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+9825447)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1048101)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1054185)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+9840891)*1+lsi)*1]), &(inteval->stack[((hsi*18252+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*15444+9825447)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+9871779)*1+lsi)*1]), &(inteval->stack[((hsi*36504+9251133)*1+lsi)*1]), &(inteval->stack[((hsi*30888+9840891)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*60840+9354795)*1+lsi)*1]), &(inteval->stack[((hsi*51480+9871779)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+9825447)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9563835)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9211587)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9415635)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9825447)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+9355731)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9655095)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9211587)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+9541059)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10037451)*1+lsi)*1]), &(inteval->stack[((hsi*185328+9355731)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+9772719)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10497495)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9541059)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*18018+938355)*1+lsi)*1]), &(inteval->stack[((hsi*16380+956373)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+9260727)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*44460+10256475)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+9349647)*1+lsi)*1]), &(inteval->stack[((hsi*88920+9260727)*1+lsi)*1]), &(inteval->stack[((hsi*80028+10881411)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+9483027)*1+lsi)*1]), &(inteval->stack[((hsi*133380+9349647)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10961439)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+10771275)*1+lsi)*1]), &(inteval->stack[((hsi*179010+9483027)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11080779)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*222768+10771275)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10300935)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+10771275)*1+lsi)*1]), &(inteval->stack[((hsi*262080+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11239899)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10771275)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11469219)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+10055859)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*273780+10497495)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*334620+10055859)*1+lsi)*1]), &(inteval->stack[((hsi*283140+9772719)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]), &(inteval->stack[((hsi*8281+916970)*1+lsi)*1]), &(inteval->stack[((hsi*7098+925251)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+959649)*1+lsi)*1]), &(inteval->stack[((hsi*9555+907415)*1+lsi)*1]), &(inteval->stack[((hsi*8281+916970)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+984492)*1+lsi)*1]), &(inteval->stack[((hsi*24843+959649)*1+lsi)*1]), &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*10920+896495)*1+lsi)*1]), &(inteval->stack[((hsi*9555+907415)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1027080)*1+lsi)*1]), &(inteval->stack[((hsi*24843+959649)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+9601041)*1+lsi)*1]), &(inteval->stack[((hsi*49686+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*42588+984492)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+9672021)*1+lsi)*1]), &(inteval->stack[((hsi*12376+884119)*1+lsi)*1]), &(inteval->stack[((hsi*10920+896495)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+9704781)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9672021)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1027080)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+9762111)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9704781)*1+lsi)*1]), &(inteval->stack[((hsi*49686+9551355)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+9844921)*1+lsi)*1]), &(inteval->stack[((hsi*82810+9762111)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9601041)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*13923+870196)*1+lsi)*1]), &(inteval->stack[((hsi*12376+884119)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+9951391)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9672021)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+10016911)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9951391)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9704781)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+10112461)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10016911)*1+lsi)*1]), &(inteval->stack[((hsi*82810+9762111)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+9672021)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10112461)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9844921)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+10236676)*1+lsi)*1]), &(inteval->stack[((hsi*15561+854635)*1+lsi)*1]), &(inteval->stack[((hsi*13923+870196)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+10278445)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10236676)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9551355)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+10352701)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10278445)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9951391)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+10461901)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10352701)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10016911)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+10605226)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10461901)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10112461)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+9951391)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10605226)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9672021)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+10150135)*1+lsi)*1]), &(inteval->stack[((hsi*17290+837345)*1+lsi)*1]), &(inteval->stack[((hsi*15561+854635)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+10779127)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10150135)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10236676)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+10862665)*1+lsi)*1]), &(inteval->stack[((hsi*83538+10779127)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10278445)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+10986425)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10862665)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10352701)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+10196818)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10986425)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10461901)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+11150225)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10196818)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10605226)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+10397473)*1+lsi)*1]), &(inteval->stack[((hsi*231868+11150225)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9951391)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+10653001)*1+lsi)*1]), &(inteval->stack[((hsi*19110+818235)*1+lsi)*1]), &(inteval->stack[((hsi*17290+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+11382093)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10653001)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10150135)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+11475459)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11382093)*1+lsi)*1]), &(inteval->stack[((hsi*83538+10779127)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+11614689)*1+lsi)*1]), &(inteval->stack[((hsi*139230+11475459)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10862665)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+10704871)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11614689)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10986425)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+11800329)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10704871)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10196818)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+12067869)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11800329)*1+lsi)*1]), &(inteval->stack[((hsi*231868+11150225)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+10934191)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12067869)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10397473)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+10150135)*1+lsi)*1]), &(inteval->stack[((hsi*7098+925251)*1+lsi)*1]), &(inteval->stack[((hsi*6006+932349)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+10168153)*1+lsi)*1]), &(inteval->stack[((hsi*21294+938355)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10150135)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+10204189)*1+lsi)*1]), &(inteval->stack[((hsi*42588+984492)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10168153)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+837345)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9601041)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10204189)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+10150135)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9844921)*1+lsi)*1]), &(inteval->stack[((hsi*90090+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+837345)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9672021)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10150135)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9951391)*1+lsi)*1]), &(inteval->stack[((hsi*168168+837345)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+9767571)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10397473)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9551355)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+10037841)*1+lsi)*1]), &(inteval->stack[((hsi*319410+10934191)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9767571)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*21021+797214)*1+lsi)*1]), &(inteval->stack[((hsi*19110+818235)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+9608685)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10653001)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+10368171)*1+lsi)*1]), &(inteval->stack[((hsi*103740+9608685)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11382093)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*155610+10368171)*1+lsi)*1]), &(inteval->stack[((hsi*139230+11475459)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+11253601)*1+lsi)*1]), &(inteval->stack[((hsi*208845+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11614689)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*259896+11253601)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10704871)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+10368171)*1+lsi)*1]), &(inteval->stack[((hsi*305760+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11800329)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+11253601)*1+lsi)*1]), &(inteval->stack[((hsi*343980+10368171)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12067869)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+10368171)*1+lsi)*1]), &(inteval->stack[((hsi*372645+11253601)*1+lsi)*1]), &(inteval->stack[((hsi*319410+10934191)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*390390+10368171)*1+lsi)*1]), &(inteval->stack[((hsi*330330+10037841)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+9947751)*1+lsi)*1]), &(inteval->stack[((hsi*396396+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*339768+9211587)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+797214)*1+lsi)*1]), &(inteval->stack[((hsi*9555+772539)*1+lsi)*1]), &(inteval->stack[((hsi*8190+782094)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+821784)*1+lsi)*1]), &(inteval->stack[((hsi*11025+761514)*1+lsi)*1]), &(inteval->stack[((hsi*9555+772539)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+850449)*1+lsi)*1]), &(inteval->stack[((hsi*28665+821784)*1+lsi)*1]), &(inteval->stack[((hsi*24570+797214)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+899589)*1+lsi)*1]), &(inteval->stack[((hsi*12600+748914)*1+lsi)*1]), &(inteval->stack[((hsi*11025+761514)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+932664)*1+lsi)*1]), &(inteval->stack[((hsi*33075+899589)*1+lsi)*1]), &(inteval->stack[((hsi*28665+821784)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*57330+932664)*1+lsi)*1]), &(inteval->stack[((hsi*49140+850449)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+989994)*1+lsi)*1]), &(inteval->stack[((hsi*14280+734634)*1+lsi)*1]), &(inteval->stack[((hsi*12600+748914)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+11048955)*1+lsi)*1]), &(inteval->stack[((hsi*37800+989994)*1+lsi)*1]), &(inteval->stack[((hsi*33075+899589)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+11115105)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11048955)*1+lsi)*1]), &(inteval->stack[((hsi*57330+932664)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+11210655)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11115105)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10967055)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+899589)*1+lsi)*1]), &(inteval->stack[((hsi*16065+718569)*1+lsi)*1]), &(inteval->stack[((hsi*14280+734634)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+11333505)*1+lsi)*1]), &(inteval->stack[((hsi*42840+899589)*1+lsi)*1]), &(inteval->stack[((hsi*37800+989994)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+942429)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11333505)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11048955)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+11409105)*1+lsi)*1]), &(inteval->stack[((hsi*110250+942429)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11115105)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+11552430)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11409105)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11210655)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+11048955)*1+lsi)*1]), &(inteval->stack[((hsi*17955+700614)*1+lsi)*1]), &(inteval->stack[((hsi*16065+718569)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+11097150)*1+lsi)*1]), &(inteval->stack[((hsi*48195+11048955)*1+lsi)*1]), &(inteval->stack[((hsi*42840+899589)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+11724420)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11097150)*1+lsi)*1]), &(inteval->stack[((hsi*75600+11333505)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+11850420)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11724420)*1+lsi)*1]), &(inteval->stack[((hsi*110250+942429)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+12015795)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11850420)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11409105)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+12216450)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12015795)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11552430)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+11333505)*1+lsi)*1]), &(inteval->stack[((hsi*19950+680664)*1+lsi)*1]), &(inteval->stack[((hsi*17955+700614)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+11387370)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11333505)*1+lsi)*1]), &(inteval->stack[((hsi*48195+11048955)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+899589)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11387370)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11097150)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+12445770)*1+lsi)*1]), &(inteval->stack[((hsi*142800+899589)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11724420)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+12634770)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12445770)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11850420)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+11724420)*1+lsi)*1]), &(inteval->stack[((hsi*231525+12634770)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12015795)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+12866295)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11724420)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12216450)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+11991960)*1+lsi)*1]), &(inteval->stack[((hsi*22050+658614)*1+lsi)*1]), &(inteval->stack[((hsi*19950+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+12051810)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11991960)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11333505)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+11048955)*1+lsi)*1]), &(inteval->stack[((hsi*107730+12051810)*1+lsi)*1]), &(inteval->stack[((hsi*96390+11387370)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+11333505)*1+lsi)*1]), &(inteval->stack[((hsi*160650+11048955)*1+lsi)*1]), &(inteval->stack[((hsi*142800+899589)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+13161135)*1+lsi)*1]), &(inteval->stack[((hsi*214200+11333505)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12445770)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+13425735)*1+lsi)*1]), &(inteval->stack[((hsi*264600+13161135)*1+lsi)*1]), &(inteval->stack[((hsi*231525+12634770)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+12445770)*1+lsi)*1]), &(inteval->stack[((hsi*308700+13425735)*1+lsi)*1]), &(inteval->stack[((hsi*267540+11724420)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+13734435)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12445770)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12866295)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+11724420)*1+lsi)*1]), &(inteval->stack[((hsi*8190+782094)*1+lsi)*1]), &(inteval->stack[((hsi*6930+790284)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+11745210)*1+lsi)*1]), &(inteval->stack[((hsi*24570+797214)*1+lsi)*1]), &(inteval->stack[((hsi*20790+11724420)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+11786790)*1+lsi)*1]), &(inteval->stack[((hsi*49140+850449)*1+lsi)*1]), &(inteval->stack[((hsi*41580+11745210)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+680664)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*69300+11786790)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+784614)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11210655)*1+lsi)*1]), &(inteval->stack[((hsi*103950+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+11724420)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11552430)*1+lsi)*1]), &(inteval->stack[((hsi*145530+784614)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+680664)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12216450)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11724420)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+11547705)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12866295)*1+lsi)*1]), &(inteval->stack[((hsi*249480+680664)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+14102985)*1+lsi)*1]), &(inteval->stack[((hsi*368550+13734435)*1+lsi)*1]), &(inteval->stack[((hsi*311850+11547705)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+11547705)*1+lsi)*1]), &(inteval->stack[((hsi*24255+634359)*1+lsi)*1]), &(inteval->stack[((hsi*22050+658614)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+634359)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11547705)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11991960)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+11547705)*1+lsi)*1]), &(inteval->stack[((hsi*119700+634359)*1+lsi)*1]), &(inteval->stack[((hsi*107730+12051810)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+11727255)*1+lsi)*1]), &(inteval->stack[((hsi*179550+11547705)*1+lsi)*1]), &(inteval->stack[((hsi*160650+11048955)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+11968230)*1+lsi)*1]), &(inteval->stack[((hsi*240975+11727255)*1+lsi)*1]), &(inteval->stack[((hsi*214200+11333505)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*299880+11968230)*1+lsi)*1]), &(inteval->stack[((hsi*264600+13161135)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+11319855)*1+lsi)*1]), &(inteval->stack[((hsi*352800+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*308700+13425735)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+12789750)*1+lsi)*1]), &(inteval->stack[((hsi*396900+11319855)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12445770)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*429975+12789750)*1+lsi)*1]), &(inteval->stack[((hsi*368550+13734435)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+11417505)*1+lsi)*1]), &(inteval->stack[((hsi*450450+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*381150+14102985)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+11874885)*1+lsi)*1]), &(inteval->stack[((hsi*457380+11417505)*1+lsi)*1]), &(inteval->stack[((hsi*396396+9551355)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+13064073)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+11874885)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+9947751)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*10920+606159)*1+lsi)*1]), &(inteval->stack[((hsi*9360+617079)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+634359)*1+lsi)*1]), &(inteval->stack[((hsi*12600+593559)*1+lsi)*1]), &(inteval->stack[((hsi*10920+606159)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+10995135)*1+lsi)*1]), &(inteval->stack[((hsi*32760+634359)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10967055)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*14400+579159)*1+lsi)*1]), &(inteval->stack[((hsi*12600+593559)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+667119)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*32760+634359)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+11051295)*1+lsi)*1]), &(inteval->stack[((hsi*65520+667119)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10995135)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+9589155)*1+lsi)*1]), &(inteval->stack[((hsi*16320+562839)*1+lsi)*1]), &(inteval->stack[((hsi*14400+579159)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+732639)*1+lsi)*1]), &(inteval->stack[((hsi*43200+9589155)*1+lsi)*1]), &(inteval->stack[((hsi*37800+9551355)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+9632355)*1+lsi)*1]), &(inteval->stack[((hsi*75600+732639)*1+lsi)*1]), &(inteval->stack[((hsi*65520+667119)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+11144895)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9632355)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11051295)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+808239)*1+lsi)*1]), &(inteval->stack[((hsi*18360+544479)*1+lsi)*1]), &(inteval->stack[((hsi*16320+562839)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+9741555)*1+lsi)*1]), &(inteval->stack[((hsi*48960+808239)*1+lsi)*1]), &(inteval->stack[((hsi*43200+9589155)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+857199)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9741555)*1+lsi)*1]), &(inteval->stack[((hsi*75600+732639)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+634359)*1+lsi)*1]), &(inteval->stack[((hsi*126000+857199)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9632355)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*163800+634359)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11144895)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*20520+523959)*1+lsi)*1]), &(inteval->stack[((hsi*18360+544479)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+9606435)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*48960+808239)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+15299241)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9606435)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9741555)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+9704355)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15299241)*1+lsi)*1]), &(inteval->stack[((hsi*126000+857199)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+798159)*1+lsi)*1]), &(inteval->stack[((hsi*189000+9704355)*1+lsi)*1]), &(inteval->stack[((hsi*163800+634359)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+15443241)*1+lsi)*1]), &(inteval->stack[((hsi*229320+798159)*1+lsi)*1]), &(inteval->stack[((hsi*196560+15102681)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+634359)*1+lsi)*1]), &(inteval->stack[((hsi*22800+501159)*1+lsi)*1]), &(inteval->stack[((hsi*20520+523959)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+11285295)*1+lsi)*1]), &(inteval->stack[((hsi*61560+634359)*1+lsi)*1]), &(inteval->stack[((hsi*55080+9551355)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+15705321)*1+lsi)*1]), &(inteval->stack[((hsi*110160+11285295)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9606435)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+15868521)*1+lsi)*1]), &(inteval->stack[((hsi*163200+15705321)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15299241)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+16084521)*1+lsi)*1]), &(inteval->stack[((hsi*216000+15868521)*1+lsi)*1]), &(inteval->stack[((hsi*189000+9704355)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*264600+16084521)*1+lsi)*1]), &(inteval->stack[((hsi*229320+798159)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+695919)*1+lsi)*1]), &(inteval->stack[((hsi*305760+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15443241)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+15299241)*1+lsi)*1]), &(inteval->stack[((hsi*25200+475959)*1+lsi)*1]), &(inteval->stack[((hsi*22800+501159)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+16349121)*1+lsi)*1]), &(inteval->stack[((hsi*68400+15299241)*1+lsi)*1]), &(inteval->stack[((hsi*61560+634359)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+16472241)*1+lsi)*1]), &(inteval->stack[((hsi*123120+16349121)*1+lsi)*1]), &(inteval->stack[((hsi*110160+11285295)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+16655841)*1+lsi)*1]), &(inteval->stack[((hsi*183600+16472241)*1+lsi)*1]), &(inteval->stack[((hsi*163200+15705321)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+16900641)*1+lsi)*1]), &(inteval->stack[((hsi*244800+16655841)*1+lsi)*1]), &(inteval->stack[((hsi*216000+15868521)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+15705321)*1+lsi)*1]), &(inteval->stack[((hsi*302400+16900641)*1+lsi)*1]), &(inteval->stack[((hsi*264600+16084521)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+17203041)*1+lsi)*1]), &(inteval->stack[((hsi*352800+15705321)*1+lsi)*1]), &(inteval->stack[((hsi*305760+9551355)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+17596161)*1+lsi)*1]), &(inteval->stack[((hsi*393120+17203041)*1+lsi)*1]), &(inteval->stack[((hsi*336960+695919)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*9360+617079)*1+lsi)*1]), &(inteval->stack[((hsi*7920+626439)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+9575115)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*23760+9551355)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+9622635)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10995135)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9575115)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+16058121)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11051295)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9622635)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11144895)*1+lsi)*1]), &(inteval->stack[((hsi*118800+16058121)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*196560+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9551355)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15443241)*1+lsi)*1]), &(inteval->stack[((hsi*221760+10967055)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*336960+695919)*1+lsi)*1]), &(inteval->stack[((hsi*285120+9551355)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+501159)*1+lsi)*1]), &(inteval->stack[((hsi*421200+17596161)*1+lsi)*1]), &(inteval->stack[((hsi*356400+10967055)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*27720+448239)*1+lsi)*1]), &(inteval->stack[((hsi*25200+475959)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*68400+15299241)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*136800+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*123120+16349121)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*205200+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*183600+16472241)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*275400+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*244800+16655841)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+16058121)*1+lsi)*1]), &(inteval->stack[((hsi*342720+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*302400+16900641)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+16461321)*1+lsi)*1]), &(inteval->stack[((hsi*403200+16058121)*1+lsi)*1]), &(inteval->stack[((hsi*352800+15705321)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*453600+16461321)*1+lsi)*1]), &(inteval->stack[((hsi*393120+17203041)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+15594081)*1+lsi)*1]), &(inteval->stack[((hsi*491400+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*421200+17596161)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+16108881)*1+lsi)*1]), &(inteval->stack[((hsi*514800+15594081)*1+lsi)*1]), &(inteval->stack[((hsi*435600+501159)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+16631601)*1+lsi)*1]), &(inteval->stack[((hsi*522720+16108881)*1+lsi)*1]), &(inteval->stack[((hsi*457380+11417505)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+18003741)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+16631601)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+11874885)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+20382117)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+18003741)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+13064073)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*12376+416279)*1+lsi)*1]), &(inteval->stack[((hsi*10608+428655)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+10998879)*1+lsi)*1]), &(inteval->stack[((hsi*14280+401999)*1+lsi)*1]), &(inteval->stack[((hsi*12376+416279)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+11036007)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10998879)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10967055)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+11099655)*1+lsi)*1]), &(inteval->stack[((hsi*16320+385679)*1+lsi)*1]), &(inteval->stack[((hsi*14280+401999)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11142495)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11099655)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10998879)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+11216751)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11142495)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11036007)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+11322831)*1+lsi)*1]), &(inteval->stack[((hsi*18496+367183)*1+lsi)*1]), &(inteval->stack[((hsi*16320+385679)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+11371791)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11322831)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11099655)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+11457471)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11371791)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11142495)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+11581231)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11457471)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11216751)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+11740351)*1+lsi)*1]), &(inteval->stack[((hsi*20808+346375)*1+lsi)*1]), &(inteval->stack[((hsi*18496+367183)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+11795839)*1+lsi)*1]), &(inteval->stack[((hsi*55488+11740351)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11322831)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+11893759)*1+lsi)*1]), &(inteval->stack[((hsi*97920+11795839)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11371791)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+12036559)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11893759)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11457471)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*185640+12036559)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11581231)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+12222199)*1+lsi)*1]), &(inteval->stack[((hsi*23256+323119)*1+lsi)*1]), &(inteval->stack[((hsi*20808+346375)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+15325449)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12222199)*1+lsi)*1]), &(inteval->stack[((hsi*55488+11740351)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+12284623)*1+lsi)*1]), &(inteval->stack[((hsi*110976+15325449)*1+lsi)*1]), &(inteval->stack[((hsi*97920+11795839)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+15436425)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12284623)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11893759)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+12447823)*1+lsi)*1]), &(inteval->stack[((hsi*214200+15436425)*1+lsi)*1]), &(inteval->stack[((hsi*185640+12036559)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+448239)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12447823)*1+lsi)*1]), &(inteval->stack[((hsi*222768+15102681)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+11740351)*1+lsi)*1]), &(inteval->stack[((hsi*25840+297279)*1+lsi)*1]), &(inteval->stack[((hsi*23256+323119)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+15650625)*1+lsi)*1]), &(inteval->stack[((hsi*69768+11740351)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12222199)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+11810119)*1+lsi)*1]), &(inteval->stack[((hsi*124848+15650625)*1+lsi)*1]), &(inteval->stack[((hsi*110976+15325449)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*184960+11810119)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12284623)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+11995079)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*214200+15436425)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+12707719)*1+lsi)*1]), &(inteval->stack[((hsi*299880+11995079)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12447823)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+12294959)*1+lsi)*1]), &(inteval->stack[((hsi*346528+12707719)*1+lsi)*1]), &(inteval->stack[((hsi*297024+448239)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+15775473)*1+lsi)*1]), &(inteval->stack[((hsi*28560+268719)*1+lsi)*1]), &(inteval->stack[((hsi*25840+297279)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+15325449)*1+lsi)*1]), &(inteval->stack[((hsi*77520+15775473)*1+lsi)*1]), &(inteval->stack[((hsi*69768+11740351)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+745263)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15325449)*1+lsi)*1]), &(inteval->stack[((hsi*124848+15650625)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+15464985)*1+lsi)*1]), &(inteval->stack[((hsi*208080+745263)*1+lsi)*1]), &(inteval->stack[((hsi*184960+11810119)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+23779797)*1+lsi)*1]), &(inteval->stack[((hsi*277440+15464985)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9551355)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+24122517)*1+lsi)*1]), &(inteval->stack[((hsi*342720+23779797)*1+lsi)*1]), &(inteval->stack[((hsi*299880+11995079)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+11740351)*1+lsi)*1]), &(inteval->stack[((hsi*399840+24122517)*1+lsi)*1]), &(inteval->stack[((hsi*346528+12707719)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+24522357)*1+lsi)*1]), &(inteval->stack[((hsi*445536+11740351)*1+lsi)*1]), &(inteval->stack[((hsi*381888+12294959)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*10608+428655)*1+lsi)*1]), &(inteval->stack[((hsi*8976+439263)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+12676847)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9551355)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11036007)*1+lsi)*1]), &(inteval->stack[((hsi*53856+12676847)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+12676847)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11216751)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9551355)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11581231)*1+lsi)*1]), &(inteval->stack[((hsi*134640+12676847)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+11155551)*1+lsi)*1]), &(inteval->stack[((hsi*222768+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*188496+10967055)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+9551355)*1+lsi)*1]), &(inteval->stack[((hsi*297024+448239)*1+lsi)*1]), &(inteval->stack[((hsi*251328+11155551)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*381888+12294959)*1+lsi)*1]), &(inteval->stack[((hsi*323136+9551355)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+12185887)*1+lsi)*1]), &(inteval->stack[((hsi*477360+24522357)*1+lsi)*1]), &(inteval->stack[((hsi*403920+10967055)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*31416+237303)*1+lsi)*1]), &(inteval->stack[((hsi*28560+268719)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+11052735)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*77520+15775473)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+11207775)*1+lsi)*1]), &(inteval->stack[((hsi*155040+11052735)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15325449)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+237303)*1+lsi)*1]), &(inteval->stack[((hsi*232560+11207775)*1+lsi)*1]), &(inteval->stack[((hsi*208080+745263)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*312120+237303)*1+lsi)*1]), &(inteval->stack[((hsi*277440+15464985)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*388416+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*342720+23779797)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+237303)*1+lsi)*1]), &(inteval->stack[((hsi*456960+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*399840+24122517)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*514080+237303)*1+lsi)*1]), &(inteval->stack[((hsi*445536+11740351)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*556920+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*477360+24522357)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*583440+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*493680+12185887)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*592416+15102681)*1+lsi)*1]), &(inteval->stack[((hsi*522720+16108881)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+23779797)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+10967055)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+16631601)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+26524077)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+23779797)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+18003741)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+30488037)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+26524077)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+20382117)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1146189)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1152195)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+15710541)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1139259)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1146189)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+15728559)*1+lsi)*1]), &(inteval->stack[((hsi*18018+15710541)*1+lsi)*1]), &(inteval->stack[((hsi*15444+15695097)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+15759447)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1131339)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1139259)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+15780237)*1+lsi)*1]), &(inteval->stack[((hsi*20790+15759447)*1+lsi)*1]), &(inteval->stack[((hsi*18018+15710541)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+15816273)*1+lsi)*1]), &(inteval->stack[((hsi*36036+15780237)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15728559)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+15867753)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1122363)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1131339)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+15891513)*1+lsi)*1]), &(inteval->stack[((hsi*23760+15867753)*1+lsi)*1]), &(inteval->stack[((hsi*20790+15759447)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+15933093)*1+lsi)*1]), &(inteval->stack[((hsi*41580+15891513)*1+lsi)*1]), &(inteval->stack[((hsi*36036+15780237)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+15993153)*1+lsi)*1]), &(inteval->stack[((hsi*60060+15933093)*1+lsi)*1]), &(inteval->stack[((hsi*51480+15816273)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+16070373)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112265)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1122363)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+16097301)*1+lsi)*1]), &(inteval->stack[((hsi*26928+16070373)*1+lsi)*1]), &(inteval->stack[((hsi*23760+15867753)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+16144821)*1+lsi)*1]), &(inteval->stack[((hsi*47520+16097301)*1+lsi)*1]), &(inteval->stack[((hsi*41580+15891513)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+16214121)*1+lsi)*1]), &(inteval->stack[((hsi*69300+16144821)*1+lsi)*1]), &(inteval->stack[((hsi*60060+15933093)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+16304211)*1+lsi)*1]), &(inteval->stack[((hsi*90090+16214121)*1+lsi)*1]), &(inteval->stack[((hsi*77220+15993153)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+16412319)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1100979)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112265)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+16442613)*1+lsi)*1]), &(inteval->stack[((hsi*30294+16412319)*1+lsi)*1]), &(inteval->stack[((hsi*26928+16070373)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+16496469)*1+lsi)*1]), &(inteval->stack[((hsi*53856+16442613)*1+lsi)*1]), &(inteval->stack[((hsi*47520+16097301)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+16575669)*1+lsi)*1]), &(inteval->stack[((hsi*79200+16496469)*1+lsi)*1]), &(inteval->stack[((hsi*69300+16144821)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+16679619)*1+lsi)*1]), &(inteval->stack[((hsi*103950+16575669)*1+lsi)*1]), &(inteval->stack[((hsi*90090+16214121)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+16805745)*1+lsi)*1]), &(inteval->stack[((hsi*126126+16679619)*1+lsi)*1]), &(inteval->stack[((hsi*108108+16304211)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+16949889)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1088439)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1100979)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+16983747)*1+lsi)*1]), &(inteval->stack[((hsi*33858+16949889)*1+lsi)*1]), &(inteval->stack[((hsi*30294+16412319)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+17044335)*1+lsi)*1]), &(inteval->stack[((hsi*60588+16983747)*1+lsi)*1]), &(inteval->stack[((hsi*53856+16442613)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+17134095)*1+lsi)*1]), &(inteval->stack[((hsi*89760+17044335)*1+lsi)*1]), &(inteval->stack[((hsi*79200+16496469)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+17252895)*1+lsi)*1]), &(inteval->stack[((hsi*118800+17134095)*1+lsi)*1]), &(inteval->stack[((hsi*103950+16575669)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+17398425)*1+lsi)*1]), &(inteval->stack[((hsi*145530+17252895)*1+lsi)*1]), &(inteval->stack[((hsi*126126+16679619)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+17566593)*1+lsi)*1]), &(inteval->stack[((hsi*168168+17398425)*1+lsi)*1]), &(inteval->stack[((hsi*144144+16805745)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+17751921)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1074579)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1088439)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+17789541)*1+lsi)*1]), &(inteval->stack[((hsi*37620+17751921)*1+lsi)*1]), &(inteval->stack[((hsi*33858+16949889)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+17857257)*1+lsi)*1]), &(inteval->stack[((hsi*67716+17789541)*1+lsi)*1]), &(inteval->stack[((hsi*60588+16983747)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+17958237)*1+lsi)*1]), &(inteval->stack[((hsi*100980+17857257)*1+lsi)*1]), &(inteval->stack[((hsi*89760+17044335)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+18092877)*1+lsi)*1]), &(inteval->stack[((hsi*134640+17958237)*1+lsi)*1]), &(inteval->stack[((hsi*118800+17134095)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+18259197)*1+lsi)*1]), &(inteval->stack[((hsi*166320+18092877)*1+lsi)*1]), &(inteval->stack[((hsi*145530+17252895)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+18453237)*1+lsi)*1]), &(inteval->stack[((hsi*194040+18259197)*1+lsi)*1]), &(inteval->stack[((hsi*168168+17398425)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+18669453)*1+lsi)*1]), &(inteval->stack[((hsi*216216+18453237)*1+lsi)*1]), &(inteval->stack[((hsi*185328+17566593)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+18901113)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1152195)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1157343)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+18914181)*1+lsi)*1]), &(inteval->stack[((hsi*15444+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*13068+18901113)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+18940317)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15728559)*1+lsi)*1]), &(inteval->stack[((hsi*26136+18914181)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+18983877)*1+lsi)*1]), &(inteval->stack[((hsi*51480+15816273)*1+lsi)*1]), &(inteval->stack[((hsi*43560+18940317)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+19049217)*1+lsi)*1]), &(inteval->stack[((hsi*77220+15993153)*1+lsi)*1]), &(inteval->stack[((hsi*65340+18983877)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+19140693)*1+lsi)*1]), &(inteval->stack[((hsi*108108+16304211)*1+lsi)*1]), &(inteval->stack[((hsi*91476+19049217)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+19262661)*1+lsi)*1]), &(inteval->stack[((hsi*144144+16805745)*1+lsi)*1]), &(inteval->stack[((hsi*121968+19140693)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*185328+17566593)*1+lsi)*1]), &(inteval->stack[((hsi*156816+19262661)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+15891117)*1+lsi)*1]), &(inteval->stack[((hsi*231660+18669453)*1+lsi)*1]), &(inteval->stack[((hsi*196020+15695097)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+16130697)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1059333)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1074579)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+16172277)*1+lsi)*1]), &(inteval->stack[((hsi*41580+16130697)*1+lsi)*1]), &(inteval->stack[((hsi*37620+17751921)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+16247517)*1+lsi)*1]), &(inteval->stack[((hsi*75240+16172277)*1+lsi)*1]), &(inteval->stack[((hsi*67716+17789541)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+16360377)*1+lsi)*1]), &(inteval->stack[((hsi*112860+16247517)*1+lsi)*1]), &(inteval->stack[((hsi*100980+17857257)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+18901113)*1+lsi)*1]), &(inteval->stack[((hsi*151470+16360377)*1+lsi)*1]), &(inteval->stack[((hsi*134640+17958237)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+16130697)*1+lsi)*1]), &(inteval->stack[((hsi*188496+18901113)*1+lsi)*1]), &(inteval->stack[((hsi*166320+18092877)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+16352457)*1+lsi)*1]), &(inteval->stack[((hsi*221760+16130697)*1+lsi)*1]), &(inteval->stack[((hsi*194040+18259197)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+16601937)*1+lsi)*1]), &(inteval->stack[((hsi*249480+16352457)*1+lsi)*1]), &(inteval->stack[((hsi*216216+18453237)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+16872207)*1+lsi)*1]), &(inteval->stack[((hsi*270270+16601937)*1+lsi)*1]), &(inteval->stack[((hsi*231660+18669453)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+17155347)*1+lsi)*1]), &(inteval->stack[((hsi*283140+16872207)*1+lsi)*1]), &(inteval->stack[((hsi*239580+15891117)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+17442843)*1+lsi)*1]), &(inteval->stack[((hsi*339768+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*287496+17155347)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+18305331)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+9947751)*1+lsi)*1]), &(inteval->stack[((hsi*862488+17442843)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+35584557)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+13064073)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+18305331)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+20382117)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+35584557)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+35584557)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+30488037)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+15695097)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*13923+201348)*1+lsi)*1]), &(inteval->stack[((hsi*11934+215271)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+15730899)*1+lsi)*1]), &(inteval->stack[((hsi*16065+185283)*1+lsi)*1]), &(inteval->stack[((hsi*13923+201348)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+15772668)*1+lsi)*1]), &(inteval->stack[((hsi*41769+15730899)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15695097)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+15844272)*1+lsi)*1]), &(inteval->stack[((hsi*18360+166923)*1+lsi)*1]), &(inteval->stack[((hsi*16065+185283)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+15892467)*1+lsi)*1]), &(inteval->stack[((hsi*48195+15844272)*1+lsi)*1]), &(inteval->stack[((hsi*41769+15730899)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+15976005)*1+lsi)*1]), &(inteval->stack[((hsi*83538+15892467)*1+lsi)*1]), &(inteval->stack[((hsi*71604+15772668)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+16095345)*1+lsi)*1]), &(inteval->stack[((hsi*20808+146115)*1+lsi)*1]), &(inteval->stack[((hsi*18360+166923)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+16150425)*1+lsi)*1]), &(inteval->stack[((hsi*55080+16095345)*1+lsi)*1]), &(inteval->stack[((hsi*48195+15844272)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+16246815)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16150425)*1+lsi)*1]), &(inteval->stack[((hsi*83538+15892467)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+16386045)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16246815)*1+lsi)*1]), &(inteval->stack[((hsi*119340+15976005)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+16565055)*1+lsi)*1]), &(inteval->stack[((hsi*23409+122706)*1+lsi)*1]), &(inteval->stack[((hsi*20808+146115)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+16627479)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16565055)*1+lsi)*1]), &(inteval->stack[((hsi*55080+16095345)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+16737639)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16627479)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16150425)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+16898289)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16737639)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16246815)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+17107134)*1+lsi)*1]), &(inteval->stack[((hsi*208845+16898289)*1+lsi)*1]), &(inteval->stack[((hsi*179010+16386045)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+17357748)*1+lsi)*1]), &(inteval->stack[((hsi*26163+96543)*1+lsi)*1]), &(inteval->stack[((hsi*23409+122706)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+17427975)*1+lsi)*1]), &(inteval->stack[((hsi*70227+17357748)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16565055)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+17552823)*1+lsi)*1]), &(inteval->stack[((hsi*124848+17427975)*1+lsi)*1]), &(inteval->stack[((hsi*110160+16627479)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+17736423)*1+lsi)*1]), &(inteval->stack[((hsi*183600+17552823)*1+lsi)*1]), &(inteval->stack[((hsi*160650+16737639)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+17977398)*1+lsi)*1]), &(inteval->stack[((hsi*240975+17736423)*1+lsi)*1]), &(inteval->stack[((hsi*208845+16898289)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+18269781)*1+lsi)*1]), &(inteval->stack[((hsi*292383+17977398)*1+lsi)*1]), &(inteval->stack[((hsi*250614+17107134)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+18603933)*1+lsi)*1]), &(inteval->stack[((hsi*29070+67473)*1+lsi)*1]), &(inteval->stack[((hsi*26163+96543)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+18682422)*1+lsi)*1]), &(inteval->stack[((hsi*78489+18603933)*1+lsi)*1]), &(inteval->stack[((hsi*70227+17357748)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+18822876)*1+lsi)*1]), &(inteval->stack[((hsi*140454+18682422)*1+lsi)*1]), &(inteval->stack[((hsi*124848+17427975)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+19030956)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18822876)*1+lsi)*1]), &(inteval->stack[((hsi*183600+17552823)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+19306356)*1+lsi)*1]), &(inteval->stack[((hsi*275400+19030956)*1+lsi)*1]), &(inteval->stack[((hsi*240975+17736423)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+19643721)*1+lsi)*1]), &(inteval->stack[((hsi*337365+19306356)*1+lsi)*1]), &(inteval->stack[((hsi*292383+17977398)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+20033565)*1+lsi)*1]), &(inteval->stack[((hsi*389844+19643721)*1+lsi)*1]), &(inteval->stack[((hsi*334152+18269781)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+20463189)*1+lsi)*1]), &(inteval->stack[((hsi*32130+35343)*1+lsi)*1]), &(inteval->stack[((hsi*29070+67473)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+20550399)*1+lsi)*1]), &(inteval->stack[((hsi*87210+20463189)*1+lsi)*1]), &(inteval->stack[((hsi*78489+18603933)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+20707377)*1+lsi)*1]), &(inteval->stack[((hsi*156978+20550399)*1+lsi)*1]), &(inteval->stack[((hsi*140454+18682422)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+20941467)*1+lsi)*1]), &(inteval->stack[((hsi*234090+20707377)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18822876)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+12535215)*1+lsi)*1]), &(inteval->stack[((hsi*312120+20941467)*1+lsi)*1]), &(inteval->stack[((hsi*275400+19030956)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+21253587)*1+lsi)*1]), &(inteval->stack[((hsi*385560+12535215)*1+lsi)*1]), &(inteval->stack[((hsi*337365+19306356)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+12920775)*1+lsi)*1]), &(inteval->stack[((hsi*449820+21253587)*1+lsi)*1]), &(inteval->stack[((hsi*389844+19643721)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+21703407)*1+lsi)*1]), &(inteval->stack[((hsi*501228+12920775)*1+lsi)*1]), &(inteval->stack[((hsi*429624+20033565)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*11934+215271)*1+lsi)*1]), &(inteval->stack[((hsi*10098+227205)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+9241881)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9211587)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+13422003)*1+lsi)*1]), &(inteval->stack[((hsi*71604+15772668)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9241881)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*119340+15976005)*1+lsi)*1]), &(inteval->stack[((hsi*100980+13422003)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+13422003)*1+lsi)*1]), &(inteval->stack[((hsi*179010+16386045)*1+lsi)*1]), &(inteval->stack[((hsi*151470+9211587)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*250614+17107134)*1+lsi)*1]), &(inteval->stack[((hsi*212058+13422003)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+15695097)*1+lsi)*1]), &(inteval->stack[((hsi*334152+18269781)*1+lsi)*1]), &(inteval->stack[((hsi*282744+9211587)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+16058625)*1+lsi)*1]), &(inteval->stack[((hsi*429624+20033565)*1+lsi)*1]), &(inteval->stack[((hsi*363528+15695097)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+16513035)*1+lsi)*1]), &(inteval->stack[((hsi*537030+21703407)*1+lsi)*1]), &(inteval->stack[((hsi*454410+16058625)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+17068425)*1+lsi)*1]), &(inteval->stack[((hsi*35343+0)*1+lsi)*1]), &(inteval->stack[((hsi*32130+35343)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+17164815)*1+lsi)*1]), &(inteval->stack[((hsi*96390+17068425)*1+lsi)*1]), &(inteval->stack[((hsi*87210+20463189)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+17339235)*1+lsi)*1]), &(inteval->stack[((hsi*174420+17164815)*1+lsi)*1]), &(inteval->stack[((hsi*156978+20550399)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+17600865)*1+lsi)*1]), &(inteval->stack[((hsi*261630+17339235)*1+lsi)*1]), &(inteval->stack[((hsi*234090+20707377)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+17952000)*1+lsi)*1]), &(inteval->stack[((hsi*351135+17600865)*1+lsi)*1]), &(inteval->stack[((hsi*312120+20941467)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+18388968)*1+lsi)*1]), &(inteval->stack[((hsi*436968+17952000)*1+lsi)*1]), &(inteval->stack[((hsi*385560+12535215)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+18903048)*1+lsi)*1]), &(inteval->stack[((hsi*514080+18388968)*1+lsi)*1]), &(inteval->stack[((hsi*449820+21253587)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+19481388)*1+lsi)*1]), &(inteval->stack[((hsi*578340+18903048)*1+lsi)*1]), &(inteval->stack[((hsi*501228+12920775)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+12535215)*1+lsi)*1]), &(inteval->stack[((hsi*626535+19481388)*1+lsi)*1]), &(inteval->stack[((hsi*537030+21703407)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+17068425)*1+lsi)*1]), &(inteval->stack[((hsi*656370+12535215)*1+lsi)*1]), &(inteval->stack[((hsi*555390+16513035)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+17734893)*1+lsi)*1]), &(inteval->stack[((hsi*666468+17068425)*1+lsi)*1]), &(inteval->stack[((hsi*592416+15102681)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+12535215)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+17734893)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+10967055)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+15671535)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+12535215)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+23779797)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+15671535)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+26524077)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+15157527)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+9211587)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+30488037)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+1161699)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+15157527)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+35584557)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8049888+1161699)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
