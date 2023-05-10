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
#include <_aB_PS__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2047320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1926624)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1933722)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+17877852)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1918434)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1926624)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+17899146)*1+lsi)*1]), &(inteval->stack[((hsi*21294+17877852)*1+lsi)*1]), &(inteval->stack[((hsi*18252+17859600)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+17935650)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1909074)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1918434)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+17960220)*1+lsi)*1]), &(inteval->stack[((hsi*24570+17935650)*1+lsi)*1]), &(inteval->stack[((hsi*21294+17877852)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+18002808)*1+lsi)*1]), &(inteval->stack[((hsi*42588+17960220)*1+lsi)*1]), &(inteval->stack[((hsi*36504+17899146)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+18063648)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1898466)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1909074)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+18091728)*1+lsi)*1]), &(inteval->stack[((hsi*28080+18063648)*1+lsi)*1]), &(inteval->stack[((hsi*24570+17935650)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+18140868)*1+lsi)*1]), &(inteval->stack[((hsi*49140+18091728)*1+lsi)*1]), &(inteval->stack[((hsi*42588+17960220)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+18211848)*1+lsi)*1]), &(inteval->stack[((hsi*70980+18140868)*1+lsi)*1]), &(inteval->stack[((hsi*60840+18002808)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+17935650)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1886532)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1898466)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+18303108)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17935650)*1+lsi)*1]), &(inteval->stack[((hsi*28080+18063648)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+18359268)*1+lsi)*1]), &(inteval->stack[((hsi*56160+18303108)*1+lsi)*1]), &(inteval->stack[((hsi*49140+18091728)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+18441168)*1+lsi)*1]), &(inteval->stack[((hsi*81900+18359268)*1+lsi)*1]), &(inteval->stack[((hsi*70980+18140868)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+18063648)*1+lsi)*1]), &(inteval->stack[((hsi*106470+18441168)*1+lsi)*1]), &(inteval->stack[((hsi*91260+18211848)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+18547638)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1873194)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1886532)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+18583440)*1+lsi)*1]), &(inteval->stack[((hsi*35802+18547638)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17935650)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+18647088)*1+lsi)*1]), &(inteval->stack[((hsi*63648+18583440)*1+lsi)*1]), &(inteval->stack[((hsi*56160+18303108)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+18740688)*1+lsi)*1]), &(inteval->stack[((hsi*93600+18647088)*1+lsi)*1]), &(inteval->stack[((hsi*81900+18359268)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+18863538)*1+lsi)*1]), &(inteval->stack[((hsi*122850+18740688)*1+lsi)*1]), &(inteval->stack[((hsi*106470+18441168)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+18303108)*1+lsi)*1]), &(inteval->stack[((hsi*149058+18863538)*1+lsi)*1]), &(inteval->stack[((hsi*127764+18063648)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+18473460)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1858374)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1873194)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+19012596)*1+lsi)*1]), &(inteval->stack[((hsi*40014+18473460)*1+lsi)*1]), &(inteval->stack[((hsi*35802+18547638)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+19084200)*1+lsi)*1]), &(inteval->stack[((hsi*71604+19012596)*1+lsi)*1]), &(inteval->stack[((hsi*63648+18583440)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+19190280)*1+lsi)*1]), &(inteval->stack[((hsi*106080+19084200)*1+lsi)*1]), &(inteval->stack[((hsi*93600+18647088)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+18513474)*1+lsi)*1]), &(inteval->stack[((hsi*140400+19190280)*1+lsi)*1]), &(inteval->stack[((hsi*122850+18740688)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+19330680)*1+lsi)*1]), &(inteval->stack[((hsi*171990+18513474)*1+lsi)*1]), &(inteval->stack[((hsi*149058+18863538)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+18685464)*1+lsi)*1]), &(inteval->stack[((hsi*198744+19330680)*1+lsi)*1]), &(inteval->stack[((hsi*170352+18303108)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+18904488)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1841994)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1858374)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+19529424)*1+lsi)*1]), &(inteval->stack[((hsi*44460+18904488)*1+lsi)*1]), &(inteval->stack[((hsi*40014+18473460)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+19609452)*1+lsi)*1]), &(inteval->stack[((hsi*80028+19529424)*1+lsi)*1]), &(inteval->stack[((hsi*71604+19012596)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+19728792)*1+lsi)*1]), &(inteval->stack[((hsi*119340+19609452)*1+lsi)*1]), &(inteval->stack[((hsi*106080+19084200)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+18948948)*1+lsi)*1]), &(inteval->stack[((hsi*159120+19728792)*1+lsi)*1]), &(inteval->stack[((hsi*140400+19190280)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+19887912)*1+lsi)*1]), &(inteval->stack[((hsi*196560+18948948)*1+lsi)*1]), &(inteval->stack[((hsi*171990+18513474)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+20117232)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19887912)*1+lsi)*1]), &(inteval->stack[((hsi*198744+19330680)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+19145508)*1+lsi)*1]), &(inteval->stack[((hsi*255528+20117232)*1+lsi)*1]), &(inteval->stack[((hsi*219024+18685464)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+18473460)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1933722)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1939806)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+18488904)*1+lsi)*1]), &(inteval->stack[((hsi*18252+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*15444+18473460)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+18519792)*1+lsi)*1]), &(inteval->stack[((hsi*36504+17899146)*1+lsi)*1]), &(inteval->stack[((hsi*30888+18488904)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*60840+18002808)*1+lsi)*1]), &(inteval->stack[((hsi*51480+18519792)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+18473460)*1+lsi)*1]), &(inteval->stack[((hsi*91260+18211848)*1+lsi)*1]), &(inteval->stack[((hsi*77220+17859600)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*127764+18063648)*1+lsi)*1]), &(inteval->stack[((hsi*108108+18473460)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+18003744)*1+lsi)*1]), &(inteval->stack[((hsi*170352+18303108)*1+lsi)*1]), &(inteval->stack[((hsi*144144+17859600)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+18189072)*1+lsi)*1]), &(inteval->stack[((hsi*219024+18685464)*1+lsi)*1]), &(inteval->stack[((hsi*185328+18003744)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+18420732)*1+lsi)*1]), &(inteval->stack[((hsi*273780+19145508)*1+lsi)*1]), &(inteval->stack[((hsi*231660+18189072)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1823976)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1841994)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+17908740)*1+lsi)*1]), &(inteval->stack[((hsi*49140+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*44460+18904488)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+17997660)*1+lsi)*1]), &(inteval->stack[((hsi*88920+17908740)*1+lsi)*1]), &(inteval->stack[((hsi*80028+19529424)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+18131040)*1+lsi)*1]), &(inteval->stack[((hsi*133380+17997660)*1+lsi)*1]), &(inteval->stack[((hsi*119340+19609452)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+19419288)*1+lsi)*1]), &(inteval->stack[((hsi*179010+18131040)*1+lsi)*1]), &(inteval->stack[((hsi*159120+19728792)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*222768+19419288)*1+lsi)*1]), &(inteval->stack[((hsi*196560+18948948)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+19419288)*1+lsi)*1]), &(inteval->stack[((hsi*262080+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19887912)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*294840+19419288)*1+lsi)*1]), &(inteval->stack[((hsi*255528+20117232)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+18703872)*1+lsi)*1]), &(inteval->stack[((hsi*319410+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*273780+19145508)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*334620+18703872)*1+lsi)*1]), &(inteval->stack[((hsi*283140+18420732)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1823976)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1802591)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1810872)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1845270)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1793036)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1802591)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1870113)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1845270)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1823976)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1912701)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1782116)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1793036)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1912701)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1845270)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+18249054)*1+lsi)*1]), &(inteval->stack[((hsi*49686+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1870113)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+18320034)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1769740)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1782116)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+18352794)*1+lsi)*1]), &(inteval->stack[((hsi*32760+18320034)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1912701)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+18410124)*1+lsi)*1]), &(inteval->stack[((hsi*57330+18352794)*1+lsi)*1]), &(inteval->stack[((hsi*49686+18199368)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+18492934)*1+lsi)*1]), &(inteval->stack[((hsi*82810+18410124)*1+lsi)*1]), &(inteval->stack[((hsi*70980+18249054)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1755817)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1769740)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+18599404)*1+lsi)*1]), &(inteval->stack[((hsi*37128+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*32760+18320034)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+18664924)*1+lsi)*1]), &(inteval->stack[((hsi*65520+18599404)*1+lsi)*1]), &(inteval->stack[((hsi*57330+18352794)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+18760474)*1+lsi)*1]), &(inteval->stack[((hsi*95550+18664924)*1+lsi)*1]), &(inteval->stack[((hsi*82810+18410124)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+18320034)*1+lsi)*1]), &(inteval->stack[((hsi*124215+18760474)*1+lsi)*1]), &(inteval->stack[((hsi*106470+18492934)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+18884689)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1740256)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1755817)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+18926458)*1+lsi)*1]), &(inteval->stack[((hsi*41769+18884689)*1+lsi)*1]), &(inteval->stack[((hsi*37128+18199368)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+19000714)*1+lsi)*1]), &(inteval->stack[((hsi*74256+18926458)*1+lsi)*1]), &(inteval->stack[((hsi*65520+18599404)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+19109914)*1+lsi)*1]), &(inteval->stack[((hsi*109200+19000714)*1+lsi)*1]), &(inteval->stack[((hsi*95550+18664924)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+19253239)*1+lsi)*1]), &(inteval->stack[((hsi*143325+19109914)*1+lsi)*1]), &(inteval->stack[((hsi*124215+18760474)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+18599404)*1+lsi)*1]), &(inteval->stack[((hsi*173901+19253239)*1+lsi)*1]), &(inteval->stack[((hsi*149058+18320034)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+18798148)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1722966)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1740256)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+19427140)*1+lsi)*1]), &(inteval->stack[((hsi*46683+18798148)*1+lsi)*1]), &(inteval->stack[((hsi*41769+18884689)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+19510678)*1+lsi)*1]), &(inteval->stack[((hsi*83538+19427140)*1+lsi)*1]), &(inteval->stack[((hsi*74256+18926458)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+19634438)*1+lsi)*1]), &(inteval->stack[((hsi*123760+19510678)*1+lsi)*1]), &(inteval->stack[((hsi*109200+19000714)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+18844831)*1+lsi)*1]), &(inteval->stack[((hsi*163800+19634438)*1+lsi)*1]), &(inteval->stack[((hsi*143325+19109914)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+19798238)*1+lsi)*1]), &(inteval->stack[((hsi*200655+18844831)*1+lsi)*1]), &(inteval->stack[((hsi*173901+19253239)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+19045486)*1+lsi)*1]), &(inteval->stack[((hsi*231868+19798238)*1+lsi)*1]), &(inteval->stack[((hsi*198744+18599404)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+19301014)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1703856)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1722966)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+20030106)*1+lsi)*1]), &(inteval->stack[((hsi*51870+19301014)*1+lsi)*1]), &(inteval->stack[((hsi*46683+18798148)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+20123472)*1+lsi)*1]), &(inteval->stack[((hsi*93366+20030106)*1+lsi)*1]), &(inteval->stack[((hsi*83538+19427140)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+20262702)*1+lsi)*1]), &(inteval->stack[((hsi*139230+20123472)*1+lsi)*1]), &(inteval->stack[((hsi*123760+19510678)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+19352884)*1+lsi)*1]), &(inteval->stack[((hsi*185640+20262702)*1+lsi)*1]), &(inteval->stack[((hsi*163800+19634438)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+20448342)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19352884)*1+lsi)*1]), &(inteval->stack[((hsi*200655+18844831)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+20715882)*1+lsi)*1]), &(inteval->stack[((hsi*267540+20448342)*1+lsi)*1]), &(inteval->stack[((hsi*231868+19798238)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+19582204)*1+lsi)*1]), &(inteval->stack[((hsi*298116+20715882)*1+lsi)*1]), &(inteval->stack[((hsi*255528+19045486)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+18798148)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1810872)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1817970)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+18816166)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1823976)*1+lsi)*1]), &(inteval->stack[((hsi*18018+18798148)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+18852202)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1870113)*1+lsi)*1]), &(inteval->stack[((hsi*36036+18816166)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1722966)*1+lsi)*1]), &(inteval->stack[((hsi*70980+18249054)*1+lsi)*1]), &(inteval->stack[((hsi*60060+18852202)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+18798148)*1+lsi)*1]), &(inteval->stack[((hsi*106470+18492934)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1722966)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+1722966)*1+lsi)*1]), &(inteval->stack[((hsi*149058+18320034)*1+lsi)*1]), &(inteval->stack[((hsi*126126+18798148)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*198744+18599404)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1722966)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+18415584)*1+lsi)*1]), &(inteval->stack[((hsi*255528+19045486)*1+lsi)*1]), &(inteval->stack[((hsi*216216+18199368)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+18685854)*1+lsi)*1]), &(inteval->stack[((hsi*319410+19582204)*1+lsi)*1]), &(inteval->stack[((hsi*270270+18415584)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*21021+1682835)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1703856)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+18256698)*1+lsi)*1]), &(inteval->stack[((hsi*57330+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*51870+19301014)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+19016184)*1+lsi)*1]), &(inteval->stack[((hsi*103740+18256698)*1+lsi)*1]), &(inteval->stack[((hsi*93366+20030106)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*155610+19016184)*1+lsi)*1]), &(inteval->stack[((hsi*139230+20123472)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+19901614)*1+lsi)*1]), &(inteval->stack[((hsi*208845+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*185640+20262702)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19901614)*1+lsi)*1]), &(inteval->stack[((hsi*229320+19352884)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+19016184)*1+lsi)*1]), &(inteval->stack[((hsi*305760+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*267540+20448342)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+19901614)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19016184)*1+lsi)*1]), &(inteval->stack[((hsi*298116+20715882)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+19016184)*1+lsi)*1]), &(inteval->stack[((hsi*372645+19901614)*1+lsi)*1]), &(inteval->stack[((hsi*319410+19582204)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*390390+19016184)*1+lsi)*1]), &(inteval->stack[((hsi*330330+18685854)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+18595764)*1+lsi)*1]), &(inteval->stack[((hsi*396396+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*339768+17859600)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1682835)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1658160)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1667715)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1707405)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1647135)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1658160)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1736070)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1707405)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1682835)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1785210)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1634535)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1647135)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1818285)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1785210)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1707405)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1818285)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1736070)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+1875615)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1620255)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1634535)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+19696968)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1875615)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1785210)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+19763118)*1+lsi)*1]), &(inteval->stack[((hsi*66150+19696968)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1818285)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+19858668)*1+lsi)*1]), &(inteval->stack[((hsi*95550+19763118)*1+lsi)*1]), &(inteval->stack[((hsi*81900+19615068)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1785210)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1604190)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1620255)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+19981518)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1785210)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1875615)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+1828050)*1+lsi)*1]), &(inteval->stack[((hsi*75600+19981518)*1+lsi)*1]), &(inteval->stack[((hsi*66150+19696968)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+20057118)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1828050)*1+lsi)*1]), &(inteval->stack[((hsi*95550+19763118)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+20200443)*1+lsi)*1]), &(inteval->stack[((hsi*143325+20057118)*1+lsi)*1]), &(inteval->stack[((hsi*122850+19858668)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+19696968)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1586235)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1604190)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+19745163)*1+lsi)*1]), &(inteval->stack[((hsi*48195+19696968)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1785210)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+20372433)*1+lsi)*1]), &(inteval->stack[((hsi*85680+19745163)*1+lsi)*1]), &(inteval->stack[((hsi*75600+19981518)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+20498433)*1+lsi)*1]), &(inteval->stack[((hsi*126000+20372433)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1828050)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+20663808)*1+lsi)*1]), &(inteval->stack[((hsi*165375+20498433)*1+lsi)*1]), &(inteval->stack[((hsi*143325+20057118)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+20864463)*1+lsi)*1]), &(inteval->stack[((hsi*200655+20663808)*1+lsi)*1]), &(inteval->stack[((hsi*171990+20200443)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+19981518)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1566285)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1586235)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+20035383)*1+lsi)*1]), &(inteval->stack[((hsi*53865+19981518)*1+lsi)*1]), &(inteval->stack[((hsi*48195+19696968)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+1785210)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20035383)*1+lsi)*1]), &(inteval->stack[((hsi*85680+19745163)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+21093783)*1+lsi)*1]), &(inteval->stack[((hsi*142800+1785210)*1+lsi)*1]), &(inteval->stack[((hsi*126000+20372433)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+21282783)*1+lsi)*1]), &(inteval->stack[((hsi*189000+21093783)*1+lsi)*1]), &(inteval->stack[((hsi*165375+20498433)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+20372433)*1+lsi)*1]), &(inteval->stack[((hsi*231525+21282783)*1+lsi)*1]), &(inteval->stack[((hsi*200655+20663808)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+21514308)*1+lsi)*1]), &(inteval->stack[((hsi*267540+20372433)*1+lsi)*1]), &(inteval->stack[((hsi*229320+20864463)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+20639973)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1544235)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1566285)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+20699823)*1+lsi)*1]), &(inteval->stack[((hsi*59850+20639973)*1+lsi)*1]), &(inteval->stack[((hsi*53865+19981518)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+19696968)*1+lsi)*1]), &(inteval->stack[((hsi*107730+20699823)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20035383)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+19981518)*1+lsi)*1]), &(inteval->stack[((hsi*160650+19696968)*1+lsi)*1]), &(inteval->stack[((hsi*142800+1785210)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+21809148)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19981518)*1+lsi)*1]), &(inteval->stack[((hsi*189000+21093783)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+22073748)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21809148)*1+lsi)*1]), &(inteval->stack[((hsi*231525+21282783)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+21093783)*1+lsi)*1]), &(inteval->stack[((hsi*308700+22073748)*1+lsi)*1]), &(inteval->stack[((hsi*267540+20372433)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+22382448)*1+lsi)*1]), &(inteval->stack[((hsi*343980+21093783)*1+lsi)*1]), &(inteval->stack[((hsi*294840+21514308)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+20372433)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1667715)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1675905)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+20393223)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1682835)*1+lsi)*1]), &(inteval->stack[((hsi*20790+20372433)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+20434803)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1736070)*1+lsi)*1]), &(inteval->stack[((hsi*41580+20393223)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1566285)*1+lsi)*1]), &(inteval->stack[((hsi*81900+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*69300+20434803)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+1670235)*1+lsi)*1]), &(inteval->stack[((hsi*122850+19858668)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1566285)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+20372433)*1+lsi)*1]), &(inteval->stack[((hsi*171990+20200443)*1+lsi)*1]), &(inteval->stack[((hsi*145530+1670235)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+1566285)*1+lsi)*1]), &(inteval->stack[((hsi*229320+20864463)*1+lsi)*1]), &(inteval->stack[((hsi*194040+20372433)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+20195718)*1+lsi)*1]), &(inteval->stack[((hsi*294840+21514308)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1566285)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+22750998)*1+lsi)*1]), &(inteval->stack[((hsi*368550+22382448)*1+lsi)*1]), &(inteval->stack[((hsi*311850+20195718)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+20195718)*1+lsi)*1]), &(inteval->stack[((hsi*24255+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1544235)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*66150+20195718)*1+lsi)*1]), &(inteval->stack[((hsi*59850+20639973)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+20195718)*1+lsi)*1]), &(inteval->stack[((hsi*119700+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*107730+20699823)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+20375268)*1+lsi)*1]), &(inteval->stack[((hsi*179550+20195718)*1+lsi)*1]), &(inteval->stack[((hsi*160650+19696968)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+20616243)*1+lsi)*1]), &(inteval->stack[((hsi*240975+20375268)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19981518)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*299880+20616243)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21809148)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+19967868)*1+lsi)*1]), &(inteval->stack[((hsi*352800+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*308700+22073748)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+21437763)*1+lsi)*1]), &(inteval->stack[((hsi*396900+19967868)*1+lsi)*1]), &(inteval->stack[((hsi*343980+21093783)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*429975+21437763)*1+lsi)*1]), &(inteval->stack[((hsi*368550+22382448)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+20065518)*1+lsi)*1]), &(inteval->stack[((hsi*450450+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*381150+22750998)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+20522898)*1+lsi)*1]), &(inteval->stack[((hsi*457380+20065518)*1+lsi)*1]), &(inteval->stack[((hsi*396396+18199368)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+21712086)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+20522898)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+18595764)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1491780)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1502700)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1479180)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1491780)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+19643148)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*28080+19615068)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1464780)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1479180)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+1552740)*1+lsi)*1]), &(inteval->stack[((hsi*37800+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1519980)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+19699308)*1+lsi)*1]), &(inteval->stack[((hsi*65520+1552740)*1+lsi)*1]), &(inteval->stack[((hsi*56160+19643148)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+18237168)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1448460)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1464780)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+1618260)*1+lsi)*1]), &(inteval->stack[((hsi*43200+18237168)*1+lsi)*1]), &(inteval->stack[((hsi*37800+18199368)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+18280368)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1618260)*1+lsi)*1]), &(inteval->stack[((hsi*65520+1552740)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+19792908)*1+lsi)*1]), &(inteval->stack[((hsi*109200+18280368)*1+lsi)*1]), &(inteval->stack[((hsi*93600+19699308)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+1693860)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1430100)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1448460)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+18389568)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1693860)*1+lsi)*1]), &(inteval->stack[((hsi*43200+18237168)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+1742820)*1+lsi)*1]), &(inteval->stack[((hsi*86400+18389568)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1618260)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1742820)*1+lsi)*1]), &(inteval->stack[((hsi*109200+18280368)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*163800+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*140400+19792908)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1409580)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1430100)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+18254448)*1+lsi)*1]), &(inteval->stack[((hsi*55080+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1693860)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+23947254)*1+lsi)*1]), &(inteval->stack[((hsi*97920+18254448)*1+lsi)*1]), &(inteval->stack[((hsi*86400+18389568)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+18352368)*1+lsi)*1]), &(inteval->stack[((hsi*144000+23947254)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1742820)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+1683780)*1+lsi)*1]), &(inteval->stack[((hsi*189000+18352368)*1+lsi)*1]), &(inteval->stack[((hsi*163800+1519980)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+24091254)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1683780)*1+lsi)*1]), &(inteval->stack[((hsi*196560+23750694)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1386780)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1409580)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+19933308)*1+lsi)*1]), &(inteval->stack[((hsi*61560+1519980)*1+lsi)*1]), &(inteval->stack[((hsi*55080+18199368)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+24353334)*1+lsi)*1]), &(inteval->stack[((hsi*110160+19933308)*1+lsi)*1]), &(inteval->stack[((hsi*97920+18254448)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+24516534)*1+lsi)*1]), &(inteval->stack[((hsi*163200+24353334)*1+lsi)*1]), &(inteval->stack[((hsi*144000+23947254)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+24732534)*1+lsi)*1]), &(inteval->stack[((hsi*216000+24516534)*1+lsi)*1]), &(inteval->stack[((hsi*189000+18352368)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*264600+24732534)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1683780)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+1581540)*1+lsi)*1]), &(inteval->stack[((hsi*305760+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*262080+24091254)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+23947254)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1361580)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1386780)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+24997134)*1+lsi)*1]), &(inteval->stack[((hsi*68400+23947254)*1+lsi)*1]), &(inteval->stack[((hsi*61560+1519980)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+25120254)*1+lsi)*1]), &(inteval->stack[((hsi*123120+24997134)*1+lsi)*1]), &(inteval->stack[((hsi*110160+19933308)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+25303854)*1+lsi)*1]), &(inteval->stack[((hsi*183600+25120254)*1+lsi)*1]), &(inteval->stack[((hsi*163200+24353334)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+25548654)*1+lsi)*1]), &(inteval->stack[((hsi*244800+25303854)*1+lsi)*1]), &(inteval->stack[((hsi*216000+24516534)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+24353334)*1+lsi)*1]), &(inteval->stack[((hsi*302400+25548654)*1+lsi)*1]), &(inteval->stack[((hsi*264600+24732534)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+25851054)*1+lsi)*1]), &(inteval->stack[((hsi*352800+24353334)*1+lsi)*1]), &(inteval->stack[((hsi*305760+18199368)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+26244174)*1+lsi)*1]), &(inteval->stack[((hsi*393120+25851054)*1+lsi)*1]), &(inteval->stack[((hsi*336960+1581540)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1502700)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1512060)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+18223128)*1+lsi)*1]), &(inteval->stack[((hsi*28080+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*23760+18199368)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+18270648)*1+lsi)*1]), &(inteval->stack[((hsi*56160+19643148)*1+lsi)*1]), &(inteval->stack[((hsi*47520+18223128)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+24706134)*1+lsi)*1]), &(inteval->stack[((hsi*93600+19699308)*1+lsi)*1]), &(inteval->stack[((hsi*79200+18270648)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*140400+19792908)*1+lsi)*1]), &(inteval->stack[((hsi*118800+24706134)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*196560+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*166320+18199368)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*262080+24091254)*1+lsi)*1]), &(inteval->stack[((hsi*221760+19615068)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*336960+1581540)*1+lsi)*1]), &(inteval->stack[((hsi*285120+18199368)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+1386780)*1+lsi)*1]), &(inteval->stack[((hsi*421200+26244174)*1+lsi)*1]), &(inteval->stack[((hsi*356400+19615068)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*27720+1333860)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1361580)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*75600+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*68400+23947254)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*136800+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*123120+24997134)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*205200+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*183600+25120254)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*275400+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*244800+25303854)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+24706134)*1+lsi)*1]), &(inteval->stack[((hsi*342720+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*302400+25548654)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+25109334)*1+lsi)*1]), &(inteval->stack[((hsi*403200+24706134)*1+lsi)*1]), &(inteval->stack[((hsi*352800+24353334)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*453600+25109334)*1+lsi)*1]), &(inteval->stack[((hsi*393120+25851054)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+24242094)*1+lsi)*1]), &(inteval->stack[((hsi*491400+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*421200+26244174)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+24756894)*1+lsi)*1]), &(inteval->stack[((hsi*514800+24242094)*1+lsi)*1]), &(inteval->stack[((hsi*435600+1386780)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+25279614)*1+lsi)*1]), &(inteval->stack[((hsi*522720+24756894)*1+lsi)*1]), &(inteval->stack[((hsi*457380+20065518)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+26651754)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+25279614)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+20522898)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+29030130)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+26651754)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+21712086)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1301900)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1314276)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+19646892)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1287620)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1301900)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+19684020)*1+lsi)*1]), &(inteval->stack[((hsi*37128+19646892)*1+lsi)*1]), &(inteval->stack[((hsi*31824+19615068)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+19747668)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1271300)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1287620)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+19790508)*1+lsi)*1]), &(inteval->stack[((hsi*42840+19747668)*1+lsi)*1]), &(inteval->stack[((hsi*37128+19646892)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+19864764)*1+lsi)*1]), &(inteval->stack[((hsi*74256+19790508)*1+lsi)*1]), &(inteval->stack[((hsi*63648+19684020)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+19970844)*1+lsi)*1]), &(inteval->stack[((hsi*18496+1252804)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1271300)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+20019804)*1+lsi)*1]), &(inteval->stack[((hsi*48960+19970844)*1+lsi)*1]), &(inteval->stack[((hsi*42840+19747668)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+20105484)*1+lsi)*1]), &(inteval->stack[((hsi*85680+20019804)*1+lsi)*1]), &(inteval->stack[((hsi*74256+19790508)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+20229244)*1+lsi)*1]), &(inteval->stack[((hsi*123760+20105484)*1+lsi)*1]), &(inteval->stack[((hsi*106080+19864764)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+20388364)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1231996)*1+lsi)*1]), &(inteval->stack[((hsi*18496+1252804)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+20443852)*1+lsi)*1]), &(inteval->stack[((hsi*55488+20388364)*1+lsi)*1]), &(inteval->stack[((hsi*48960+19970844)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+20541772)*1+lsi)*1]), &(inteval->stack[((hsi*97920+20443852)*1+lsi)*1]), &(inteval->stack[((hsi*85680+20019804)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+20684572)*1+lsi)*1]), &(inteval->stack[((hsi*142800+20541772)*1+lsi)*1]), &(inteval->stack[((hsi*123760+20105484)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*185640+20684572)*1+lsi)*1]), &(inteval->stack[((hsi*159120+20229244)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+20870212)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1208740)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1231996)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+23973462)*1+lsi)*1]), &(inteval->stack[((hsi*62424+20870212)*1+lsi)*1]), &(inteval->stack[((hsi*55488+20388364)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+20932636)*1+lsi)*1]), &(inteval->stack[((hsi*110976+23973462)*1+lsi)*1]), &(inteval->stack[((hsi*97920+20443852)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+24084438)*1+lsi)*1]), &(inteval->stack[((hsi*163200+20932636)*1+lsi)*1]), &(inteval->stack[((hsi*142800+20541772)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+21095836)*1+lsi)*1]), &(inteval->stack[((hsi*214200+24084438)*1+lsi)*1]), &(inteval->stack[((hsi*185640+20684572)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+1333860)*1+lsi)*1]), &(inteval->stack[((hsi*259896+21095836)*1+lsi)*1]), &(inteval->stack[((hsi*222768+23750694)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+20388364)*1+lsi)*1]), &(inteval->stack[((hsi*25840+1182900)*1+lsi)*1]), &(inteval->stack[((hsi*23256+1208740)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+24298638)*1+lsi)*1]), &(inteval->stack[((hsi*69768+20388364)*1+lsi)*1]), &(inteval->stack[((hsi*62424+20870212)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+20458132)*1+lsi)*1]), &(inteval->stack[((hsi*124848+24298638)*1+lsi)*1]), &(inteval->stack[((hsi*110976+23973462)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*184960+20458132)*1+lsi)*1]), &(inteval->stack[((hsi*163200+20932636)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+20643092)*1+lsi)*1]), &(inteval->stack[((hsi*244800+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*214200+24084438)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+21355732)*1+lsi)*1]), &(inteval->stack[((hsi*299880+20643092)*1+lsi)*1]), &(inteval->stack[((hsi*259896+21095836)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+20942972)*1+lsi)*1]), &(inteval->stack[((hsi*346528+21355732)*1+lsi)*1]), &(inteval->stack[((hsi*297024+1333860)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+24423486)*1+lsi)*1]), &(inteval->stack[((hsi*28560+1154340)*1+lsi)*1]), &(inteval->stack[((hsi*25840+1182900)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+23973462)*1+lsi)*1]), &(inteval->stack[((hsi*77520+24423486)*1+lsi)*1]), &(inteval->stack[((hsi*69768+20388364)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+1630884)*1+lsi)*1]), &(inteval->stack[((hsi*139536+23973462)*1+lsi)*1]), &(inteval->stack[((hsi*124848+24298638)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+24112998)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1630884)*1+lsi)*1]), &(inteval->stack[((hsi*184960+20458132)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*277440+24112998)*1+lsi)*1]), &(inteval->stack[((hsi*244800+18199368)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+32770530)*1+lsi)*1]), &(inteval->stack[((hsi*342720+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*299880+20643092)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+20388364)*1+lsi)*1]), &(inteval->stack[((hsi*399840+32770530)*1+lsi)*1]), &(inteval->stack[((hsi*346528+21355732)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+33170370)*1+lsi)*1]), &(inteval->stack[((hsi*445536+20388364)*1+lsi)*1]), &(inteval->stack[((hsi*381888+20942972)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1314276)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1324884)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+21324860)*1+lsi)*1]), &(inteval->stack[((hsi*31824+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*26928+18199368)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*63648+19684020)*1+lsi)*1]), &(inteval->stack[((hsi*53856+21324860)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+21324860)*1+lsi)*1]), &(inteval->stack[((hsi*106080+19864764)*1+lsi)*1]), &(inteval->stack[((hsi*89760+18199368)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*159120+20229244)*1+lsi)*1]), &(inteval->stack[((hsi*134640+21324860)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+19803564)*1+lsi)*1]), &(inteval->stack[((hsi*222768+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*188496+19615068)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*297024+1333860)*1+lsi)*1]), &(inteval->stack[((hsi*251328+19803564)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*381888+20942972)*1+lsi)*1]), &(inteval->stack[((hsi*323136+18199368)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+20833900)*1+lsi)*1]), &(inteval->stack[((hsi*477360+33170370)*1+lsi)*1]), &(inteval->stack[((hsi*403920+19615068)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*31416+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*28560+1154340)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+19700748)*1+lsi)*1]), &(inteval->stack[((hsi*85680+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*77520+24423486)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+19855788)*1+lsi)*1]), &(inteval->stack[((hsi*155040+19700748)*1+lsi)*1]), &(inteval->stack[((hsi*139536+23973462)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*232560+19855788)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1630884)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*312120+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*277440+24112998)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*388416+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*342720+32427810)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*456960+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*399840+32770530)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*514080+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*445536+20388364)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*556920+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*477360+33170370)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*583440+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*493680+20833900)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*592416+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*522720+24756894)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+25279614)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+35172090)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+26651754)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+39136050)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+35172090)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+29030130)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1086969)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1100892)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+24378912)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1070904)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1086969)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+24420681)*1+lsi)*1]), &(inteval->stack[((hsi*41769+24378912)*1+lsi)*1]), &(inteval->stack[((hsi*35802+24343110)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+24492285)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1052544)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1070904)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+24540480)*1+lsi)*1]), &(inteval->stack[((hsi*48195+24492285)*1+lsi)*1]), &(inteval->stack[((hsi*41769+24378912)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+24624018)*1+lsi)*1]), &(inteval->stack[((hsi*83538+24540480)*1+lsi)*1]), &(inteval->stack[((hsi*71604+24420681)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+24743358)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1031736)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1052544)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+24798438)*1+lsi)*1]), &(inteval->stack[((hsi*55080+24743358)*1+lsi)*1]), &(inteval->stack[((hsi*48195+24492285)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+24894828)*1+lsi)*1]), &(inteval->stack[((hsi*96390+24798438)*1+lsi)*1]), &(inteval->stack[((hsi*83538+24540480)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+25034058)*1+lsi)*1]), &(inteval->stack[((hsi*139230+24894828)*1+lsi)*1]), &(inteval->stack[((hsi*119340+24624018)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+25213068)*1+lsi)*1]), &(inteval->stack[((hsi*23409+1008327)*1+lsi)*1]), &(inteval->stack[((hsi*20808+1031736)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+25275492)*1+lsi)*1]), &(inteval->stack[((hsi*62424+25213068)*1+lsi)*1]), &(inteval->stack[((hsi*55080+24743358)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+25385652)*1+lsi)*1]), &(inteval->stack[((hsi*110160+25275492)*1+lsi)*1]), &(inteval->stack[((hsi*96390+24798438)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+25546302)*1+lsi)*1]), &(inteval->stack[((hsi*160650+25385652)*1+lsi)*1]), &(inteval->stack[((hsi*139230+24894828)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+25755147)*1+lsi)*1]), &(inteval->stack[((hsi*208845+25546302)*1+lsi)*1]), &(inteval->stack[((hsi*179010+25034058)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+26005761)*1+lsi)*1]), &(inteval->stack[((hsi*26163+982164)*1+lsi)*1]), &(inteval->stack[((hsi*23409+1008327)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+26075988)*1+lsi)*1]), &(inteval->stack[((hsi*70227+26005761)*1+lsi)*1]), &(inteval->stack[((hsi*62424+25213068)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+26200836)*1+lsi)*1]), &(inteval->stack[((hsi*124848+26075988)*1+lsi)*1]), &(inteval->stack[((hsi*110160+25275492)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+26384436)*1+lsi)*1]), &(inteval->stack[((hsi*183600+26200836)*1+lsi)*1]), &(inteval->stack[((hsi*160650+25385652)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+26625411)*1+lsi)*1]), &(inteval->stack[((hsi*240975+26384436)*1+lsi)*1]), &(inteval->stack[((hsi*208845+25546302)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+26917794)*1+lsi)*1]), &(inteval->stack[((hsi*292383+26625411)*1+lsi)*1]), &(inteval->stack[((hsi*250614+25755147)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+27251946)*1+lsi)*1]), &(inteval->stack[((hsi*29070+953094)*1+lsi)*1]), &(inteval->stack[((hsi*26163+982164)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+27330435)*1+lsi)*1]), &(inteval->stack[((hsi*78489+27251946)*1+lsi)*1]), &(inteval->stack[((hsi*70227+26005761)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+27470889)*1+lsi)*1]), &(inteval->stack[((hsi*140454+27330435)*1+lsi)*1]), &(inteval->stack[((hsi*124848+26075988)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+27678969)*1+lsi)*1]), &(inteval->stack[((hsi*208080+27470889)*1+lsi)*1]), &(inteval->stack[((hsi*183600+26200836)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+27954369)*1+lsi)*1]), &(inteval->stack[((hsi*275400+27678969)*1+lsi)*1]), &(inteval->stack[((hsi*240975+26384436)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*337365+27954369)*1+lsi)*1]), &(inteval->stack[((hsi*292383+26625411)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+26005761)*1+lsi)*1]), &(inteval->stack[((hsi*389844+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*334152+26917794)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+28291734)*1+lsi)*1]), &(inteval->stack[((hsi*32130+920964)*1+lsi)*1]), &(inteval->stack[((hsi*29070+953094)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+28378944)*1+lsi)*1]), &(inteval->stack[((hsi*87210+28291734)*1+lsi)*1]), &(inteval->stack[((hsi*78489+27251946)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+25213068)*1+lsi)*1]), &(inteval->stack[((hsi*156978+28378944)*1+lsi)*1]), &(inteval->stack[((hsi*140454+27330435)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+21183228)*1+lsi)*1]), &(inteval->stack[((hsi*234090+25213068)*1+lsi)*1]), &(inteval->stack[((hsi*208080+27470889)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+28535922)*1+lsi)*1]), &(inteval->stack[((hsi*312120+21183228)*1+lsi)*1]), &(inteval->stack[((hsi*275400+27678969)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+27251946)*1+lsi)*1]), &(inteval->stack[((hsi*385560+28535922)*1+lsi)*1]), &(inteval->stack[((hsi*337365+27954369)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+27701766)*1+lsi)*1]), &(inteval->stack[((hsi*449820+27251946)*1+lsi)*1]), &(inteval->stack[((hsi*389844+1122924)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*501228+27701766)*1+lsi)*1]), &(inteval->stack[((hsi*429624+26005761)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+26435385)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1100892)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1112826)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+26465679)*1+lsi)*1]), &(inteval->stack[((hsi*35802+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*30294+26435385)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+18199368)*1+lsi)*1]), &(inteval->stack[((hsi*71604+24420681)*1+lsi)*1]), &(inteval->stack[((hsi*60588+26465679)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+26435385)*1+lsi)*1]), &(inteval->stack[((hsi*119340+24624018)*1+lsi)*1]), &(inteval->stack[((hsi*100980+18199368)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*179010+25034058)*1+lsi)*1]), &(inteval->stack[((hsi*151470+26435385)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+24555168)*1+lsi)*1]), &(inteval->stack[((hsi*250614+25755147)*1+lsi)*1]), &(inteval->stack[((hsi*212058+24343110)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+25447158)*1+lsi)*1]), &(inteval->stack[((hsi*334152+26917794)*1+lsi)*1]), &(inteval->stack[((hsi*282744+24555168)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*429624+26005761)*1+lsi)*1]), &(inteval->stack[((hsi*363528+25447158)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+25447158)*1+lsi)*1]), &(inteval->stack[((hsi*537030+1122924)*1+lsi)*1]), &(inteval->stack[((hsi*454410+24343110)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*35343+885621)*1+lsi)*1]), &(inteval->stack[((hsi*32130+920964)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+26098938)*1+lsi)*1]), &(inteval->stack[((hsi*96390+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*87210+28291734)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+26273358)*1+lsi)*1]), &(inteval->stack[((hsi*174420+26098938)*1+lsi)*1]), &(inteval->stack[((hsi*156978+28378944)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*261630+26273358)*1+lsi)*1]), &(inteval->stack[((hsi*234090+25213068)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*351135+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*312120+21183228)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*436968+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*385560+28535922)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*514080+24343110)*1+lsi)*1]), &(inteval->stack[((hsi*449820+27251946)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+26580888)*1+lsi)*1]), &(inteval->stack[((hsi*578340+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*501228+27701766)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+27207423)*1+lsi)*1]), &(inteval->stack[((hsi*626535+26580888)*1+lsi)*1]), &(inteval->stack[((hsi*537030+1122924)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*656370+27207423)*1+lsi)*1]), &(inteval->stack[((hsi*555390+25447158)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+26669016)*1+lsi)*1]), &(inteval->stack[((hsi*666468+26002548)*1+lsi)*1]), &(inteval->stack[((hsi*592416+23750694)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+44232570)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+26669016)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+19615068)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+47368890)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+44232570)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+32427810)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+51942690)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+47368890)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+35172090)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+57888630)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+51942690)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+39136050)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*15561+845436)*1+lsi)*1]), &(inteval->stack[((hsi*13338+860997)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+32467824)*1+lsi)*1]), &(inteval->stack[((hsi*17955+827481)*1+lsi)*1]), &(inteval->stack[((hsi*15561+845436)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+32514507)*1+lsi)*1]), &(inteval->stack[((hsi*46683+32467824)*1+lsi)*1]), &(inteval->stack[((hsi*40014+32427810)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+32594535)*1+lsi)*1]), &(inteval->stack[((hsi*20520+806961)*1+lsi)*1]), &(inteval->stack[((hsi*17955+827481)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+32648400)*1+lsi)*1]), &(inteval->stack[((hsi*53865+32594535)*1+lsi)*1]), &(inteval->stack[((hsi*46683+32467824)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+32741766)*1+lsi)*1]), &(inteval->stack[((hsi*93366+32648400)*1+lsi)*1]), &(inteval->stack[((hsi*80028+32514507)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+32875146)*1+lsi)*1]), &(inteval->stack[((hsi*23256+783705)*1+lsi)*1]), &(inteval->stack[((hsi*20520+806961)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+32936706)*1+lsi)*1]), &(inteval->stack[((hsi*61560+32875146)*1+lsi)*1]), &(inteval->stack[((hsi*53865+32594535)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+33044436)*1+lsi)*1]), &(inteval->stack[((hsi*107730+32936706)*1+lsi)*1]), &(inteval->stack[((hsi*93366+32648400)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+33200046)*1+lsi)*1]), &(inteval->stack[((hsi*155610+33044436)*1+lsi)*1]), &(inteval->stack[((hsi*133380+32741766)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+33400116)*1+lsi)*1]), &(inteval->stack[((hsi*26163+757542)*1+lsi)*1]), &(inteval->stack[((hsi*23256+783705)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+33469884)*1+lsi)*1]), &(inteval->stack[((hsi*69768+33400116)*1+lsi)*1]), &(inteval->stack[((hsi*61560+32875146)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+33593004)*1+lsi)*1]), &(inteval->stack[((hsi*123120+33469884)*1+lsi)*1]), &(inteval->stack[((hsi*107730+32936706)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+33772554)*1+lsi)*1]), &(inteval->stack[((hsi*179550+33593004)*1+lsi)*1]), &(inteval->stack[((hsi*155610+33044436)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+34005969)*1+lsi)*1]), &(inteval->stack[((hsi*233415+33772554)*1+lsi)*1]), &(inteval->stack[((hsi*200070+33200046)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+34286067)*1+lsi)*1]), &(inteval->stack[((hsi*29241+728301)*1+lsi)*1]), &(inteval->stack[((hsi*26163+757542)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+34364556)*1+lsi)*1]), &(inteval->stack[((hsi*78489+34286067)*1+lsi)*1]), &(inteval->stack[((hsi*69768+33400116)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+34504092)*1+lsi)*1]), &(inteval->stack[((hsi*139536+34364556)*1+lsi)*1]), &(inteval->stack[((hsi*123120+33469884)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+34709292)*1+lsi)*1]), &(inteval->stack[((hsi*205200+34504092)*1+lsi)*1]), &(inteval->stack[((hsi*179550+33593004)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+34978617)*1+lsi)*1]), &(inteval->stack[((hsi*269325+34709292)*1+lsi)*1]), &(inteval->stack[((hsi*233415+33772554)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+35305398)*1+lsi)*1]), &(inteval->stack[((hsi*326781+34978617)*1+lsi)*1]), &(inteval->stack[((hsi*280098+34005969)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+35678862)*1+lsi)*1]), &(inteval->stack[((hsi*32490+695811)*1+lsi)*1]), &(inteval->stack[((hsi*29241+728301)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+35766585)*1+lsi)*1]), &(inteval->stack[((hsi*87723+35678862)*1+lsi)*1]), &(inteval->stack[((hsi*78489+34286067)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+35923563)*1+lsi)*1]), &(inteval->stack[((hsi*156978+35766585)*1+lsi)*1]), &(inteval->stack[((hsi*139536+34364556)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+36156123)*1+lsi)*1]), &(inteval->stack[((hsi*232560+35923563)*1+lsi)*1]), &(inteval->stack[((hsi*205200+34504092)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+36463923)*1+lsi)*1]), &(inteval->stack[((hsi*307800+36156123)*1+lsi)*1]), &(inteval->stack[((hsi*269325+34709292)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+36840978)*1+lsi)*1]), &(inteval->stack[((hsi*377055+36463923)*1+lsi)*1]), &(inteval->stack[((hsi*326781+34978617)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*435708+36840978)*1+lsi)*1]), &(inteval->stack[((hsi*373464+35305398)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*35910+659901)*1+lsi)*1]), &(inteval->stack[((hsi*32490+695811)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+19712538)*1+lsi)*1]), &(inteval->stack[((hsi*97470+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*87723+35678862)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+37276686)*1+lsi)*1]), &(inteval->stack[((hsi*175446+19712538)*1+lsi)*1]), &(inteval->stack[((hsi*156978+35766585)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+19887984)*1+lsi)*1]), &(inteval->stack[((hsi*261630+37276686)*1+lsi)*1]), &(inteval->stack[((hsi*232560+35923563)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+24230862)*1+lsi)*1]), &(inteval->stack[((hsi*348840+19887984)*1+lsi)*1]), &(inteval->stack[((hsi*307800+36156123)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+37538316)*1+lsi)*1]), &(inteval->stack[((hsi*430920+24230862)*1+lsi)*1]), &(inteval->stack[((hsi*377055+36463923)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+20236824)*1+lsi)*1]), &(inteval->stack[((hsi*502740+37538316)*1+lsi)*1]), &(inteval->stack[((hsi*435708+36840978)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+35678862)*1+lsi)*1]), &(inteval->stack[((hsi*560196+20236824)*1+lsi)*1]), &(inteval->stack[((hsi*480168+23750694)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*13338+860997)*1+lsi)*1]), &(inteval->stack[((hsi*11286+874335)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+24695640)*1+lsi)*1]), &(inteval->stack[((hsi*40014+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*33858+24661782)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+695811)*1+lsi)*1]), &(inteval->stack[((hsi*80028+32514507)*1+lsi)*1]), &(inteval->stack[((hsi*67716+24695640)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*133380+32741766)*1+lsi)*1]), &(inteval->stack[((hsi*112860+695811)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+695811)*1+lsi)*1]), &(inteval->stack[((hsi*200070+33200046)*1+lsi)*1]), &(inteval->stack[((hsi*169290+24661782)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*280098+34005969)*1+lsi)*1]), &(inteval->stack[((hsi*237006+695811)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+32743818)*1+lsi)*1]), &(inteval->stack[((hsi*373464+35305398)*1+lsi)*1]), &(inteval->stack[((hsi*316008+32427810)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+33150114)*1+lsi)*1]), &(inteval->stack[((hsi*480168+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*406296+32743818)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+33657984)*1+lsi)*1]), &(inteval->stack[((hsi*600210+35678862)*1+lsi)*1]), &(inteval->stack[((hsi*507870+33150114)*1+lsi)*1]),171);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*107730+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*39501+620400)*1+lsi)*1]), &(inteval->stack[((hsi*35910+659901)*1+lsi)*1]),171);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*194940+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*107730+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*97470+19615068)*1+lsi)*1]),171);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*292410+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*194940+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*175446+19712538)*1+lsi)*1]),171);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*392445+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*292410+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*261630+37276686)*1+lsi)*1]),171);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*488376+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*392445+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*348840+19887984)*1+lsi)*1]),171);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*574560+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*488376+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*430920+24230862)*1+lsi)*1]),171);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*646380+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*574560+24661782)*1+lsi)*1]), &(inteval->stack[((hsi*502740+37538316)*1+lsi)*1]),171);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*700245+36279072)*1+lsi)*1]), &(inteval->stack[((hsi*646380+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*560196+20236824)*1+lsi)*1]),171);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*733590+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*700245+36279072)*1+lsi)*1]), &(inteval->stack[((hsi*600210+35678862)*1+lsi)*1]),171);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*744876+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*733590+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*620730+33657984)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1999404+35023590)*1+lsi)*1]), &(inteval->stack[((hsi*744876+34278714)*1+lsi)*1]), &(inteval->stack[((hsi*666468+26002548)*1+lsi)*1]),4356);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*3554496+65023758)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+35023590)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+26669016)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*5227200+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+65023758)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+44232570)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*6860700+68578254)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+47368890)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*8324316+75438954)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+68578254)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+51942690)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*9513504+44232570)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+75438954)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+57888630)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*17290+575750)*1+lsi)*1]), &(inteval->stack[((hsi*14820+593040)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+53790534)*1+lsi)*1]), &(inteval->stack[((hsi*19950+555800)*1+lsi)*1]), &(inteval->stack[((hsi*17290+575750)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+53842404)*1+lsi)*1]), &(inteval->stack[((hsi*51870+53790534)*1+lsi)*1]), &(inteval->stack[((hsi*44460+53746074)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+53931324)*1+lsi)*1]), &(inteval->stack[((hsi*22800+533000)*1+lsi)*1]), &(inteval->stack[((hsi*19950+555800)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+53991174)*1+lsi)*1]), &(inteval->stack[((hsi*59850+53931324)*1+lsi)*1]), &(inteval->stack[((hsi*51870+53790534)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+54094914)*1+lsi)*1]), &(inteval->stack[((hsi*103740+53991174)*1+lsi)*1]), &(inteval->stack[((hsi*88920+53842404)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+54243114)*1+lsi)*1]), &(inteval->stack[((hsi*25840+507160)*1+lsi)*1]), &(inteval->stack[((hsi*22800+533000)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+54311514)*1+lsi)*1]), &(inteval->stack[((hsi*68400+54243114)*1+lsi)*1]), &(inteval->stack[((hsi*59850+53931324)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+54431214)*1+lsi)*1]), &(inteval->stack[((hsi*119700+54311514)*1+lsi)*1]), &(inteval->stack[((hsi*103740+53991174)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+54604114)*1+lsi)*1]), &(inteval->stack[((hsi*172900+54431214)*1+lsi)*1]), &(inteval->stack[((hsi*148200+54094914)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+54826414)*1+lsi)*1]), &(inteval->stack[((hsi*29070+478090)*1+lsi)*1]), &(inteval->stack[((hsi*25840+507160)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+54903934)*1+lsi)*1]), &(inteval->stack[((hsi*77520+54826414)*1+lsi)*1]), &(inteval->stack[((hsi*68400+54243114)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+55040734)*1+lsi)*1]), &(inteval->stack[((hsi*136800+54903934)*1+lsi)*1]), &(inteval->stack[((hsi*119700+54311514)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+55240234)*1+lsi)*1]), &(inteval->stack[((hsi*199500+55040734)*1+lsi)*1]), &(inteval->stack[((hsi*172900+54431214)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+55499584)*1+lsi)*1]), &(inteval->stack[((hsi*259350+55240234)*1+lsi)*1]), &(inteval->stack[((hsi*222300+54604114)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+37022994)*1+lsi)*1]), &(inteval->stack[((hsi*32490+445600)*1+lsi)*1]), &(inteval->stack[((hsi*29070+478090)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*87210+37022994)*1+lsi)*1]), &(inteval->stack[((hsi*77520+54826414)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+55810804)*1+lsi)*1]), &(inteval->stack[((hsi*155040+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*136800+54903934)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+37110204)*1+lsi)*1]), &(inteval->stack[((hsi*228000+55810804)*1+lsi)*1]), &(inteval->stack[((hsi*199500+55040734)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+19770108)*1+lsi)*1]), &(inteval->stack[((hsi*299250+37110204)*1+lsi)*1]), &(inteval->stack[((hsi*259350+55240234)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*363090+19770108)*1+lsi)*1]), &(inteval->stack[((hsi*311220+55499584)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+56038804)*1+lsi)*1]), &(inteval->stack[((hsi*36100+409500)*1+lsi)*1]), &(inteval->stack[((hsi*32490+445600)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+56136274)*1+lsi)*1]), &(inteval->stack[((hsi*97470+56038804)*1+lsi)*1]), &(inteval->stack[((hsi*87210+37022994)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+37409454)*1+lsi)*1]), &(inteval->stack[((hsi*174420+56136274)*1+lsi)*1]), &(inteval->stack[((hsi*155040+19615068)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+20133198)*1+lsi)*1]), &(inteval->stack[((hsi*258400+37409454)*1+lsi)*1]), &(inteval->stack[((hsi*228000+55810804)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+56310694)*1+lsi)*1]), &(inteval->stack[((hsi*342000+20133198)*1+lsi)*1]), &(inteval->stack[((hsi*299250+37110204)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+37667854)*1+lsi)*1]), &(inteval->stack[((hsi*418950+56310694)*1+lsi)*1]), &(inteval->stack[((hsi*363090+19770108)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+32842770)*1+lsi)*1]), &(inteval->stack[((hsi*484120+37667854)*1+lsi)*1]), &(inteval->stack[((hsi*414960+32427810)*1+lsi)*1]),190);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*108300+620400)*1+lsi)*1]), &(inteval->stack[((hsi*39900+369600)*1+lsi)*1]), &(inteval->stack[((hsi*36100+409500)*1+lsi)*1]),190);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*194940+20475198)*1+lsi)*1]), &(inteval->stack[((hsi*108300+620400)*1+lsi)*1]), &(inteval->stack[((hsi*97470+56038804)*1+lsi)*1]),190);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*290700+728700)*1+lsi)*1]), &(inteval->stack[((hsi*194940+20475198)*1+lsi)*1]), &(inteval->stack[((hsi*174420+56136274)*1+lsi)*1]),190);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*387600+56729644)*1+lsi)*1]), &(inteval->stack[((hsi*290700+728700)*1+lsi)*1]), &(inteval->stack[((hsi*258400+37409454)*1+lsi)*1]),190);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*478800+20670138)*1+lsi)*1]), &(inteval->stack[((hsi*387600+56729644)*1+lsi)*1]), &(inteval->stack[((hsi*342000+20133198)*1+lsi)*1]),190);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*558600+38151974)*1+lsi)*1]), &(inteval->stack[((hsi*478800+20670138)*1+lsi)*1]), &(inteval->stack[((hsi*418950+56310694)*1+lsi)*1]),190);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*622440+1019400)*1+lsi)*1]), &(inteval->stack[((hsi*558600+38151974)*1+lsi)*1]), &(inteval->stack[((hsi*484120+37667854)*1+lsi)*1]),190);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*666900+37022994)*1+lsi)*1]), &(inteval->stack[((hsi*622440+1019400)*1+lsi)*1]), &(inteval->stack[((hsi*533520+32842770)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+55810804)*1+lsi)*1]), &(inteval->stack[((hsi*14820+593040)*1+lsi)*1]), &(inteval->stack[((hsi*12540+607860)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+33376290)*1+lsi)*1]), &(inteval->stack[((hsi*44460+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*37620+55810804)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+55810804)*1+lsi)*1]), &(inteval->stack[((hsi*88920+53842404)*1+lsi)*1]), &(inteval->stack[((hsi*75240+33376290)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+33376290)*1+lsi)*1]), &(inteval->stack[((hsi*148200+54094914)*1+lsi)*1]), &(inteval->stack[((hsi*125400+55810804)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+55810804)*1+lsi)*1]), &(inteval->stack[((hsi*222300+54604114)*1+lsi)*1]), &(inteval->stack[((hsi*188100+33376290)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*311220+55499584)*1+lsi)*1]), &(inteval->stack[((hsi*263340+55810804)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+54097194)*1+lsi)*1]), &(inteval->stack[((hsi*414960+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*351120+53746074)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+54548634)*1+lsi)*1]), &(inteval->stack[((hsi*533520+32842770)*1+lsi)*1]), &(inteval->stack[((hsi*451440+54097194)*1+lsi)*1]),190);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*689700+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*666900+37022994)*1+lsi)*1]), &(inteval->stack[((hsi*564300+54548634)*1+lsi)*1]),190);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*119700+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*43890+325710)*1+lsi)*1]), &(inteval->stack[((hsi*39900+369600)*1+lsi)*1]),190);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*216600+53865774)*1+lsi)*1]), &(inteval->stack[((hsi*119700+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*108300+620400)*1+lsi)*1]),190);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*324900+54082374)*1+lsi)*1]), &(inteval->stack[((hsi*216600+53865774)*1+lsi)*1]), &(inteval->stack[((hsi*194940+20475198)*1+lsi)*1]),190);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*436050+54407274)*1+lsi)*1]), &(inteval->stack[((hsi*324900+54082374)*1+lsi)*1]), &(inteval->stack[((hsi*290700+728700)*1+lsi)*1]),190);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*542640+54843324)*1+lsi)*1]), &(inteval->stack[((hsi*436050+54407274)*1+lsi)*1]), &(inteval->stack[((hsi*387600+56729644)*1+lsi)*1]),190);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*638400+55385964)*1+lsi)*1]), &(inteval->stack[((hsi*542640+54843324)*1+lsi)*1]), &(inteval->stack[((hsi*478800+20670138)*1+lsi)*1]),190);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*718200+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*638400+55385964)*1+lsi)*1]), &(inteval->stack[((hsi*558600+38151974)*1+lsi)*1]),190);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*778050+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*718200+19615068)*1+lsi)*1]), &(inteval->stack[((hsi*622440+1019400)*1+lsi)*1]),190);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*815100+54524124)*1+lsi)*1]), &(inteval->stack[((hsi*778050+53746074)*1+lsi)*1]), &(inteval->stack[((hsi*666900+37022994)*1+lsi)*1]),190);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*827640+55339224)*1+lsi)*1]), &(inteval->stack[((hsi*815100+54524124)*1+lsi)*1]), &(inteval->stack[((hsi*689700+32427810)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*2234628+83763270)*1+lsi)*1]), &(inteval->stack[((hsi*827640+55339224)*1+lsi)*1]), &(inteval->stack[((hsi*744876+34278714)*1+lsi)*1]),4356);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*3998808+85997898)*1+lsi)*1]), &(inteval->stack[((hsi*2234628+83763270)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+35023590)*1+lsi)*1]),4356);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*5924160+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*3998808+85997898)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+65023758)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*7840800+89996706)*1+lsi)*1]), &(inteval->stack[((hsi*5924160+32427810)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+23750694)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*9604980+97837506)*1+lsi)*1]), &(inteval->stack[((hsi*7840800+89996706)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+68578254)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*11099088+107442486)*1+lsi)*1]), &(inteval->stack[((hsi*9604980+97837506)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+75438954)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*12231648+65023758)*1+lsi)*1]), &(inteval->stack[((hsi*11099088+107442486)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+44232570)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*6006+2031810)*1+lsi)*1]), &(inteval->stack[((hsi*5148+2037816)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+77270850)*1+lsi)*1]), &(inteval->stack[((hsi*6930+2024880)*1+lsi)*1]), &(inteval->stack[((hsi*6006+2031810)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+77288868)*1+lsi)*1]), &(inteval->stack[((hsi*18018+77270850)*1+lsi)*1]), &(inteval->stack[((hsi*15444+77255406)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+77319756)*1+lsi)*1]), &(inteval->stack[((hsi*7920+2016960)*1+lsi)*1]), &(inteval->stack[((hsi*6930+2024880)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+77340546)*1+lsi)*1]), &(inteval->stack[((hsi*20790+77319756)*1+lsi)*1]), &(inteval->stack[((hsi*18018+77270850)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+77376582)*1+lsi)*1]), &(inteval->stack[((hsi*36036+77340546)*1+lsi)*1]), &(inteval->stack[((hsi*30888+77288868)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+77428062)*1+lsi)*1]), &(inteval->stack[((hsi*8976+2007984)*1+lsi)*1]), &(inteval->stack[((hsi*7920+2016960)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+77451822)*1+lsi)*1]), &(inteval->stack[((hsi*23760+77428062)*1+lsi)*1]), &(inteval->stack[((hsi*20790+77319756)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+77493402)*1+lsi)*1]), &(inteval->stack[((hsi*41580+77451822)*1+lsi)*1]), &(inteval->stack[((hsi*36036+77340546)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+77553462)*1+lsi)*1]), &(inteval->stack[((hsi*60060+77493402)*1+lsi)*1]), &(inteval->stack[((hsi*51480+77376582)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+77630682)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1997886)*1+lsi)*1]), &(inteval->stack[((hsi*8976+2007984)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+77657610)*1+lsi)*1]), &(inteval->stack[((hsi*26928+77630682)*1+lsi)*1]), &(inteval->stack[((hsi*23760+77428062)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+77705130)*1+lsi)*1]), &(inteval->stack[((hsi*47520+77657610)*1+lsi)*1]), &(inteval->stack[((hsi*41580+77451822)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+77774430)*1+lsi)*1]), &(inteval->stack[((hsi*69300+77705130)*1+lsi)*1]), &(inteval->stack[((hsi*60060+77493402)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+77864520)*1+lsi)*1]), &(inteval->stack[((hsi*90090+77774430)*1+lsi)*1]), &(inteval->stack[((hsi*77220+77553462)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+77972628)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1986600)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1997886)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+78002922)*1+lsi)*1]), &(inteval->stack[((hsi*30294+77972628)*1+lsi)*1]), &(inteval->stack[((hsi*26928+77630682)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+78056778)*1+lsi)*1]), &(inteval->stack[((hsi*53856+78002922)*1+lsi)*1]), &(inteval->stack[((hsi*47520+77657610)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+78135978)*1+lsi)*1]), &(inteval->stack[((hsi*79200+78056778)*1+lsi)*1]), &(inteval->stack[((hsi*69300+77705130)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+78239928)*1+lsi)*1]), &(inteval->stack[((hsi*103950+78135978)*1+lsi)*1]), &(inteval->stack[((hsi*90090+77774430)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+78366054)*1+lsi)*1]), &(inteval->stack[((hsi*126126+78239928)*1+lsi)*1]), &(inteval->stack[((hsi*108108+77864520)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1974060)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1986600)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+78510198)*1+lsi)*1]), &(inteval->stack[((hsi*33858+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*30294+77972628)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+23784552)*1+lsi)*1]), &(inteval->stack[((hsi*60588+78510198)*1+lsi)*1]), &(inteval->stack[((hsi*53856+78002922)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+78570786)*1+lsi)*1]), &(inteval->stack[((hsi*89760+23784552)*1+lsi)*1]), &(inteval->stack[((hsi*79200+78056778)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+23874312)*1+lsi)*1]), &(inteval->stack[((hsi*118800+78570786)*1+lsi)*1]), &(inteval->stack[((hsi*103950+78135978)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+78689586)*1+lsi)*1]), &(inteval->stack[((hsi*145530+23874312)*1+lsi)*1]), &(inteval->stack[((hsi*126126+78239928)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+24019842)*1+lsi)*1]), &(inteval->stack[((hsi*168168+78689586)*1+lsi)*1]), &(inteval->stack[((hsi*144144+78366054)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+78857754)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1960200)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1974060)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+78895374)*1+lsi)*1]), &(inteval->stack[((hsi*37620+78857754)*1+lsi)*1]), &(inteval->stack[((hsi*33858+23750694)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+24205170)*1+lsi)*1]), &(inteval->stack[((hsi*67716+78895374)*1+lsi)*1]), &(inteval->stack[((hsi*60588+78510198)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+78963090)*1+lsi)*1]), &(inteval->stack[((hsi*100980+24205170)*1+lsi)*1]), &(inteval->stack[((hsi*89760+23784552)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+24306150)*1+lsi)*1]), &(inteval->stack[((hsi*134640+78963090)*1+lsi)*1]), &(inteval->stack[((hsi*118800+78570786)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+79097730)*1+lsi)*1]), &(inteval->stack[((hsi*166320+24306150)*1+lsi)*1]), &(inteval->stack[((hsi*145530+23874312)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+24472470)*1+lsi)*1]), &(inteval->stack[((hsi*194040+79097730)*1+lsi)*1]), &(inteval->stack[((hsi*168168+78689586)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+79291770)*1+lsi)*1]), &(inteval->stack[((hsi*216216+24472470)*1+lsi)*1]), &(inteval->stack[((hsi*185328+24019842)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*5148+2037816)*1+lsi)*1]), &(inteval->stack[((hsi*4356+2042964)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+24701754)*1+lsi)*1]), &(inteval->stack[((hsi*15444+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*13068+24688686)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+24727890)*1+lsi)*1]), &(inteval->stack[((hsi*30888+77288868)*1+lsi)*1]), &(inteval->stack[((hsi*26136+24701754)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+24771450)*1+lsi)*1]), &(inteval->stack[((hsi*51480+77376582)*1+lsi)*1]), &(inteval->stack[((hsi*43560+24727890)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+79523430)*1+lsi)*1]), &(inteval->stack[((hsi*77220+77553462)*1+lsi)*1]), &(inteval->stack[((hsi*65340+24771450)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*108108+77864520)*1+lsi)*1]), &(inteval->stack[((hsi*91476+79523430)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+79523430)*1+lsi)*1]), &(inteval->stack[((hsi*144144+78366054)*1+lsi)*1]), &(inteval->stack[((hsi*121968+24688686)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*185328+24019842)*1+lsi)*1]), &(inteval->stack[((hsi*156816+79523430)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+79523430)*1+lsi)*1]), &(inteval->stack[((hsi*231660+79291770)*1+lsi)*1]), &(inteval->stack[((hsi*196020+24688686)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1944954)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1960200)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+24730266)*1+lsi)*1]), &(inteval->stack[((hsi*41580+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*37620+78857754)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+24805506)*1+lsi)*1]), &(inteval->stack[((hsi*75240+24730266)*1+lsi)*1]), &(inteval->stack[((hsi*67716+78895374)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+24918366)*1+lsi)*1]), &(inteval->stack[((hsi*112860+24805506)*1+lsi)*1]), &(inteval->stack[((hsi*100980+24205170)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+79763010)*1+lsi)*1]), &(inteval->stack[((hsi*151470+24918366)*1+lsi)*1]), &(inteval->stack[((hsi*134640+78963090)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*188496+79763010)*1+lsi)*1]), &(inteval->stack[((hsi*166320+24306150)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+24910446)*1+lsi)*1]), &(inteval->stack[((hsi*221760+24688686)*1+lsi)*1]), &(inteval->stack[((hsi*194040+79097730)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+79763010)*1+lsi)*1]), &(inteval->stack[((hsi*249480+24910446)*1+lsi)*1]), &(inteval->stack[((hsi*216216+24472470)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*270270+79763010)*1+lsi)*1]), &(inteval->stack[((hsi*231660+79291770)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+24033834)*1+lsi)*1]), &(inteval->stack[((hsi*283140+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*239580+79523430)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*339768+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*287496+24033834)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+78117894)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+18595764)*1+lsi)*1]), &(inteval->stack[((hsi*862488+77255406)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+23750694)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+21712086)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+78117894)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+29030130)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+23750694)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+39136050)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+77255406)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+23897016)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+57888630)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+17859600)*1+lsi)*1]),4356);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*10349856+118541574)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+44232570)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+23897016)*1+lsi)*1]),4356);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*12937320+38351970)*1+lsi)*1]), &(inteval->stack[((hsi*12231648+65023758)*1+lsi)*1]), &(inteval->stack[((hsi*10349856+118541574)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*49140+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*19110+276360)*1+lsi)*1]), &(inteval->stack[((hsi*16380+295470)*1+lsi)*1]),210);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*57330+17908740)*1+lsi)*1]), &(inteval->stack[((hsi*22050+254310)*1+lsi)*1]), &(inteval->stack[((hsi*19110+276360)*1+lsi)*1]),210);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*98280+17966070)*1+lsi)*1]), &(inteval->stack[((hsi*57330+17908740)*1+lsi)*1]), &(inteval->stack[((hsi*49140+17859600)*1+lsi)*1]),210);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*66150+18064350)*1+lsi)*1]), &(inteval->stack[((hsi*25200+229110)*1+lsi)*1]), &(inteval->stack[((hsi*22050+254310)*1+lsi)*1]),210);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*114660+18130500)*1+lsi)*1]), &(inteval->stack[((hsi*66150+18064350)*1+lsi)*1]), &(inteval->stack[((hsi*57330+17908740)*1+lsi)*1]),210);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*163800+18245160)*1+lsi)*1]), &(inteval->stack[((hsi*114660+18130500)*1+lsi)*1]), &(inteval->stack[((hsi*98280+17966070)*1+lsi)*1]),210);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*75600+18408960)*1+lsi)*1]), &(inteval->stack[((hsi*28560+200550)*1+lsi)*1]), &(inteval->stack[((hsi*25200+229110)*1+lsi)*1]),210);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*132300+18484560)*1+lsi)*1]), &(inteval->stack[((hsi*75600+18408960)*1+lsi)*1]), &(inteval->stack[((hsi*66150+18064350)*1+lsi)*1]),210);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*191100+18616860)*1+lsi)*1]), &(inteval->stack[((hsi*132300+18484560)*1+lsi)*1]), &(inteval->stack[((hsi*114660+18130500)*1+lsi)*1]),210);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*245700+18807960)*1+lsi)*1]), &(inteval->stack[((hsi*191100+18616860)*1+lsi)*1]), &(inteval->stack[((hsi*163800+18245160)*1+lsi)*1]),210);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*85680+19053660)*1+lsi)*1]), &(inteval->stack[((hsi*32130+168420)*1+lsi)*1]), &(inteval->stack[((hsi*28560+200550)*1+lsi)*1]),210);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*151200+19139340)*1+lsi)*1]), &(inteval->stack[((hsi*85680+19053660)*1+lsi)*1]), &(inteval->stack[((hsi*75600+18408960)*1+lsi)*1]),210);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*220500+19290540)*1+lsi)*1]), &(inteval->stack[((hsi*151200+19139340)*1+lsi)*1]), &(inteval->stack[((hsi*132300+18484560)*1+lsi)*1]),210);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*286650+19511040)*1+lsi)*1]), &(inteval->stack[((hsi*220500+19290540)*1+lsi)*1]), &(inteval->stack[((hsi*191100+18616860)*1+lsi)*1]),210);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*343980+19797690)*1+lsi)*1]), &(inteval->stack[((hsi*286650+19511040)*1+lsi)*1]), &(inteval->stack[((hsi*245700+18807960)*1+lsi)*1]),210);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*96390+20141670)*1+lsi)*1]), &(inteval->stack[((hsi*35910+132510)*1+lsi)*1]), &(inteval->stack[((hsi*32130+168420)*1+lsi)*1]),210);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*171360+20238060)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20141670)*1+lsi)*1]), &(inteval->stack[((hsi*85680+19053660)*1+lsi)*1]),210);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*252000+20409420)*1+lsi)*1]), &(inteval->stack[((hsi*171360+20238060)*1+lsi)*1]), &(inteval->stack[((hsi*151200+19139340)*1+lsi)*1]),210);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*330750+20661420)*1+lsi)*1]), &(inteval->stack[((hsi*252000+20409420)*1+lsi)*1]), &(inteval->stack[((hsi*220500+19290540)*1+lsi)*1]),210);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*401310+20992170)*1+lsi)*1]), &(inteval->stack[((hsi*330750+20661420)*1+lsi)*1]), &(inteval->stack[((hsi*286650+19511040)*1+lsi)*1]),210);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*458640+21393480)*1+lsi)*1]), &(inteval->stack[((hsi*401310+20992170)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19797690)*1+lsi)*1]),210);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*107730+21852120)*1+lsi)*1]), &(inteval->stack[((hsi*39900+92610)*1+lsi)*1]), &(inteval->stack[((hsi*35910+132510)*1+lsi)*1]),210);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*192780+21959850)*1+lsi)*1]), &(inteval->stack[((hsi*107730+21852120)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20141670)*1+lsi)*1]),210);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*285600+22152630)*1+lsi)*1]), &(inteval->stack[((hsi*192780+21959850)*1+lsi)*1]), &(inteval->stack[((hsi*171360+20238060)*1+lsi)*1]),210);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*378000+22438230)*1+lsi)*1]), &(inteval->stack[((hsi*285600+22152630)*1+lsi)*1]), &(inteval->stack[((hsi*252000+20409420)*1+lsi)*1]),210);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*463050+22816230)*1+lsi)*1]), &(inteval->stack[((hsi*378000+22438230)*1+lsi)*1]), &(inteval->stack[((hsi*330750+20661420)*1+lsi)*1]),210);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*535080+23279280)*1+lsi)*1]), &(inteval->stack[((hsi*463050+22816230)*1+lsi)*1]), &(inteval->stack[((hsi*401310+20992170)*1+lsi)*1]),210);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*589680+56166864)*1+lsi)*1]), &(inteval->stack[((hsi*535080+23279280)*1+lsi)*1]), &(inteval->stack[((hsi*458640+21393480)*1+lsi)*1]),210);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*119700+23814360)*1+lsi)*1]), &(inteval->stack[((hsi*44100+48510)*1+lsi)*1]), &(inteval->stack[((hsi*39900+92610)*1+lsi)*1]),210);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*215460+23934060)*1+lsi)*1]), &(inteval->stack[((hsi*119700+23814360)*1+lsi)*1]), &(inteval->stack[((hsi*107730+21852120)*1+lsi)*1]),210);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*321300+24149520)*1+lsi)*1]), &(inteval->stack[((hsi*215460+23934060)*1+lsi)*1]), &(inteval->stack[((hsi*192780+21959850)*1+lsi)*1]),210);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*428400+56756544)*1+lsi)*1]), &(inteval->stack[((hsi*321300+24149520)*1+lsi)*1]), &(inteval->stack[((hsi*285600+22152630)*1+lsi)*1]),210);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*529200+24470820)*1+lsi)*1]), &(inteval->stack[((hsi*428400+56756544)*1+lsi)*1]), &(inteval->stack[((hsi*378000+22438230)*1+lsi)*1]),210);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*617400+57184944)*1+lsi)*1]), &(inteval->stack[((hsi*529200+24470820)*1+lsi)*1]), &(inteval->stack[((hsi*463050+22816230)*1+lsi)*1]),210);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*687960+25000020)*1+lsi)*1]), &(inteval->stack[((hsi*617400+57184944)*1+lsi)*1]), &(inteval->stack[((hsi*535080+23279280)*1+lsi)*1]),210);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*737100+57802344)*1+lsi)*1]), &(inteval->stack[((hsi*687960+25000020)*1+lsi)*1]), &(inteval->stack[((hsi*589680+56166864)*1+lsi)*1]),210);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*41580+25687980)*1+lsi)*1]), &(inteval->stack[((hsi*16380+295470)*1+lsi)*1]), &(inteval->stack[((hsi*13860+311850)*1+lsi)*1]),210);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*83160+25729560)*1+lsi)*1]), &(inteval->stack[((hsi*49140+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*41580+25687980)*1+lsi)*1]),210);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*138600+25812720)*1+lsi)*1]), &(inteval->stack[((hsi*98280+17966070)*1+lsi)*1]), &(inteval->stack[((hsi*83160+25729560)*1+lsi)*1]),210);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*207900+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*163800+18245160)*1+lsi)*1]), &(inteval->stack[((hsi*138600+25812720)*1+lsi)*1]),210);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*291060+25687980)*1+lsi)*1]), &(inteval->stack[((hsi*245700+18807960)*1+lsi)*1]), &(inteval->stack[((hsi*207900+77255406)*1+lsi)*1]),210);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*388080+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19797690)*1+lsi)*1]), &(inteval->stack[((hsi*291060+25687980)*1+lsi)*1]),210);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*498960+25687980)*1+lsi)*1]), &(inteval->stack[((hsi*458640+21393480)*1+lsi)*1]), &(inteval->stack[((hsi*388080+77255406)*1+lsi)*1]),210);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*623700+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*589680+56166864)*1+lsi)*1]), &(inteval->stack[((hsi*498960+25687980)*1+lsi)*1]),210);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*762300+25687980)*1+lsi)*1]), &(inteval->stack[((hsi*737100+57802344)*1+lsi)*1]), &(inteval->stack[((hsi*623700+77255406)*1+lsi)*1]),210);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*132300+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*48510+0)*1+lsi)*1]), &(inteval->stack[((hsi*44100+48510)*1+lsi)*1]),210);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*239400+58539444)*1+lsi)*1]), &(inteval->stack[((hsi*132300+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*119700+23814360)*1+lsi)*1]),210);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*359100+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*239400+58539444)*1+lsi)*1]), &(inteval->stack[((hsi*215460+23934060)*1+lsi)*1]),210);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*481950+58539444)*1+lsi)*1]), &(inteval->stack[((hsi*359100+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*321300+24149520)*1+lsi)*1]),210);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*599760+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*481950+58539444)*1+lsi)*1]), &(inteval->stack[((hsi*428400+56756544)*1+lsi)*1]),210);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*705600+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*599760+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*529200+24470820)*1+lsi)*1]),210);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*793800+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*705600+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*617400+57184944)*1+lsi)*1]),210);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*859950+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*793800+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*687960+25000020)*1+lsi)*1]),210);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*900900+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*859950+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*737100+57802344)*1+lsi)*1]),210);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*914760+56166864)*1+lsi)*1]), &(inteval->stack[((hsi*900900+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*762300+25687980)*1+lsi)*1]),210);
HRRPart0bra0ket0plp(inteval, &(inteval->stack[((hsi*2482920+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*914760+56166864)*1+lsi)*1]), &(inteval->stack[((hsi*827640+55339224)*1+lsi)*1]),4356);
HRRPart0bra0ket0pkd(inteval, &(inteval->stack[((hsi*4469256+51289290)*1+lsi)*1]), &(inteval->stack[((hsi*2482920+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*2234628+83763270)*1+lsi)*1]),4356);
HRRPart0bra0ket0pif(inteval, &(inteval->stack[((hsi*6664680+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*4469256+51289290)*1+lsi)*1]), &(inteval->stack[((hsi*3998808+85997898)*1+lsi)*1]),4356);
HRRPart0bra0ket0phg(inteval, &(inteval->stack[((hsi*8886240+51289290)*1+lsi)*1]), &(inteval->stack[((hsi*6664680+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*5924160+32427810)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgh(inteval, &(inteval->stack[((hsi*10977120+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*8886240+51289290)*1+lsi)*1]), &(inteval->stack[((hsi*7840800+89996706)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfi(inteval, &(inteval->stack[((hsi*12806640+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*10977120+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*9604980+97837506)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdk(inteval, &(inteval->stack[((hsi*14270256+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*12806640+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*11099088+107442486)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppl(inteval, &(inteval->stack[((hsi*15289560+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*14270256+17859600)*1+lsi)*1]), &(inteval->stack[((hsi*12231648+65023758)*1+lsi)*1]),4356);
HRRPart0bra0ket0psm(inteval, &(inteval->stack[((hsi*15812280+2047320)*1+lsi)*1]), &(inteval->stack[((hsi*15289560+77255406)*1+lsi)*1]), &(inteval->stack[((hsi*12937320+38351970)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*15812280+2047320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
