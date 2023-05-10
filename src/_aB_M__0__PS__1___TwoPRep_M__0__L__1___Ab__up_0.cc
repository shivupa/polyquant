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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0ml.h>
#include <HRRPart0bra0ket0mm.h>
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_M__0__PS__1___TwoPRep_M__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_M__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1293150)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_M__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1200738)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1206822)*1+lsi)*1]),78);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+10292844)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1193640)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1200738)*1+lsi)*1]),78);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+10311096)*1+lsi)*1]), &(inteval->stack[((hsi*18252+10292844)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10277400)*1+lsi)*1]),78);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+10341984)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1185450)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1193640)*1+lsi)*1]),78);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+10363278)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10341984)*1+lsi)*1]), &(inteval->stack[((hsi*18252+10292844)*1+lsi)*1]),78);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+10399782)*1+lsi)*1]), &(inteval->stack[((hsi*36504+10363278)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10311096)*1+lsi)*1]),78);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+10451262)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1176090)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1185450)*1+lsi)*1]),78);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+10475832)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10451262)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10341984)*1+lsi)*1]),78);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+10518420)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10475832)*1+lsi)*1]), &(inteval->stack[((hsi*36504+10363278)*1+lsi)*1]),78);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+10579260)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10518420)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10399782)*1+lsi)*1]),78);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+10341984)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1165482)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1176090)*1+lsi)*1]),78);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+10656480)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10341984)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10451262)*1+lsi)*1]),78);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+10705620)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10656480)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10475832)*1+lsi)*1]),78);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+10776600)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10705620)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10518420)*1+lsi)*1]),78);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+10451262)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10776600)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10579260)*1+lsi)*1]),78);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*31824+10867860)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1153548)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1165482)*1+lsi)*1]),78);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+10899684)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10867860)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10341984)*1+lsi)*1]),78);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+10955844)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10899684)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10656480)*1+lsi)*1]),78);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+11037744)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10955844)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10705620)*1+lsi)*1]),78);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+11144214)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11037744)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10776600)*1+lsi)*1]),78);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+10656480)*1+lsi)*1]), &(inteval->stack[((hsi*127764+11144214)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10451262)*1+lsi)*1]),78);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+10800624)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1140210)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1153548)*1+lsi)*1]),78);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+11271978)*1+lsi)*1]), &(inteval->stack[((hsi*35802+10800624)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10867860)*1+lsi)*1]),78);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+11335626)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11271978)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10899684)*1+lsi)*1]),78);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+11429226)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11335626)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10955844)*1+lsi)*1]),78);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+10836426)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11429226)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11037744)*1+lsi)*1]),78);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+11552076)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10836426)*1+lsi)*1]), &(inteval->stack[((hsi*127764+11144214)*1+lsi)*1]),78);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+10985484)*1+lsi)*1]), &(inteval->stack[((hsi*170352+11552076)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10656480)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1206822)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1211970)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+11183682)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*12870+11170812)*1+lsi)*1]),78);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1153548)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10311096)*1+lsi)*1]), &(inteval->stack[((hsi*25740+11183682)*1+lsi)*1]),78);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10399782)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1153548)*1+lsi)*1]),78);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+10341750)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10579260)*1+lsi)*1]), &(inteval->stack[((hsi*64350+10277400)*1+lsi)*1]),78);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+11722428)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10451262)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10341750)*1+lsi)*1]),78);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10656480)*1+lsi)*1]), &(inteval->stack[((hsi*120120+11722428)*1+lsi)*1]),78);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+10431840)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10985484)*1+lsi)*1]), &(inteval->stack[((hsi*154440+10277400)*1+lsi)*1]),78);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1125390)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1140210)*1+lsi)*1]),78);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*40014+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*35802+10800624)*1+lsi)*1]),78);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11271978)*1+lsi)*1]),78);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11335626)*1+lsi)*1]),78);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11429226)*1+lsi)*1]),78);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10836426)*1+lsi)*1]),78);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*170352+11552076)*1+lsi)*1]),78);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10985484)*1+lsi)*1]),78);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11170812)*1+lsi)*1]), &(inteval->stack[((hsi*193050+10431840)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1107281)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1114379)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+10295418)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1099000)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1107281)*1+lsi)*1]),91);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+10316712)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10295418)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10277400)*1+lsi)*1]),91);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+10352748)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1089445)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1099000)*1+lsi)*1]),91);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+10377591)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10352748)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10295418)*1+lsi)*1]),91);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+10420179)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10377591)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10316712)*1+lsi)*1]),91);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+10480239)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1078525)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1089445)*1+lsi)*1]),91);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+10508904)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10480239)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10352748)*1+lsi)*1]),91);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1125390)*1+lsi)*1]), &(inteval->stack[((hsi*49686+10508904)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10377591)*1+lsi)*1]),91);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+10860840)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1125390)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10420179)*1+lsi)*1]),91);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+10352748)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1066149)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1078525)*1+lsi)*1]),91);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+10558590)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10352748)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10480239)*1+lsi)*1]),91);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+10950930)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10558590)*1+lsi)*1]), &(inteval->stack[((hsi*49686+10508904)*1+lsi)*1]),91);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+11033740)*1+lsi)*1]), &(inteval->stack[((hsi*82810+10950930)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1125390)*1+lsi)*1]),91);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+11140210)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11033740)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10860840)*1+lsi)*1]),91);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1125390)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1052226)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1066149)*1+lsi)*1]),91);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+10480239)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1125390)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10352748)*1+lsi)*1]),91);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+11266336)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10480239)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10558590)*1+lsi)*1]),91);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+11361886)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11266336)*1+lsi)*1]), &(inteval->stack[((hsi*82810+10950930)*1+lsi)*1]),91);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+11486101)*1+lsi)*1]), &(inteval->stack[((hsi*124215+11361886)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11033740)*1+lsi)*1]),91);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+10950930)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11486101)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11140210)*1+lsi)*1]),91);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+10545759)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1036665)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1052226)*1+lsi)*1]),91);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+11635159)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10545759)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1125390)*1+lsi)*1]),91);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+11709415)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11635159)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10480239)*1+lsi)*1]),91);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+11818615)*1+lsi)*1]), &(inteval->stack[((hsi*109200+11709415)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11266336)*1+lsi)*1]),91);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+11961940)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11818615)*1+lsi)*1]), &(inteval->stack[((hsi*124215+11361886)*1+lsi)*1]),91);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+11266336)*1+lsi)*1]), &(inteval->stack[((hsi*173901+11961940)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11486101)*1+lsi)*1]),91);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+12135841)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11266336)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10950930)*1+lsi)*1]),91);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1114379)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1120385)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1052226)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*15015+11465080)*1+lsi)*1]),91);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10316712)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1052226)*1+lsi)*1]),91);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1052226)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10420179)*1+lsi)*1]), &(inteval->stack[((hsi*50050+11465080)*1+lsi)*1]),91);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10860840)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1052226)*1+lsi)*1]),91);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11140210)*1+lsi)*1]), &(inteval->stack[((hsi*105105+10277400)*1+lsi)*1]),91);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10950930)*1+lsi)*1]), &(inteval->stack[((hsi*140140+11465080)*1+lsi)*1]),91);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+10860840)*1+lsi)*1]), &(inteval->stack[((hsi*216216+12135841)*1+lsi)*1]), &(inteval->stack[((hsi*180180+10277400)*1+lsi)*1]),91);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1019375)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1036665)*1+lsi)*1]),91);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+10324083)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10545759)*1+lsi)*1]),91);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+10407621)*1+lsi)*1]), &(inteval->stack[((hsi*83538+10324083)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11635159)*1+lsi)*1]),91);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10407621)*1+lsi)*1]), &(inteval->stack[((hsi*109200+11709415)*1+lsi)*1]),91);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*163800+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11818615)*1+lsi)*1]),91);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*173901+11961940)*1+lsi)*1]),91);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+11696948)*1+lsi)*1]), &(inteval->stack[((hsi*231868+11465080)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11266336)*1+lsi)*1]),91);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+11086065)*1+lsi)*1]), &(inteval->stack[((hsi*255528+11696948)*1+lsi)*1]), &(inteval->stack[((hsi*216216+12135841)*1+lsi)*1]),91);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*270270+11086065)*1+lsi)*1]), &(inteval->stack[((hsi*225225+10860840)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+10860840)*1+lsi)*1]), &(inteval->stack[((hsi*275275+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*235950+10624890)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1019375)*1+lsi)*1]), &(inteval->stack[((hsi*8190+998480)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1006670)*1+lsi)*1]),105);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1040165)*1+lsi)*1]), &(inteval->stack[((hsi*9555+988925)*1+lsi)*1]), &(inteval->stack[((hsi*8190+998480)*1+lsi)*1]),105);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1064735)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1040165)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1019375)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1106315)*1+lsi)*1]), &(inteval->stack[((hsi*11025+977900)*1+lsi)*1]), &(inteval->stack[((hsi*9555+988925)*1+lsi)*1]),105);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1134980)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1106315)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1040165)*1+lsi)*1]),105);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+10552675)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1134980)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1064735)*1+lsi)*1]),105);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*12600+965300)*1+lsi)*1]), &(inteval->stack[((hsi*11025+977900)*1+lsi)*1]),105);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+11601765)*1+lsi)*1]), &(inteval->stack[((hsi*33075+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1106315)*1+lsi)*1]),105);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+11659095)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11601765)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1134980)*1+lsi)*1]),105);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1106315)*1+lsi)*1]), &(inteval->stack[((hsi*81900+11659095)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10552675)*1+lsi)*1]),105);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+11740995)*1+lsi)*1]), &(inteval->stack[((hsi*14280+951020)*1+lsi)*1]), &(inteval->stack[((hsi*12600+965300)*1+lsi)*1]),105);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+11778795)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11740995)*1+lsi)*1]), &(inteval->stack[((hsi*33075+11568690)*1+lsi)*1]),105);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+11844945)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11778795)*1+lsi)*1]), &(inteval->stack[((hsi*57330+11601765)*1+lsi)*1]),105);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+11940495)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11844945)*1+lsi)*1]), &(inteval->stack[((hsi*81900+11659095)*1+lsi)*1]),105);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11940495)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1106315)*1+lsi)*1]),105);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*42840+12063345)*1+lsi)*1]), &(inteval->stack[((hsi*16065+934955)*1+lsi)*1]), &(inteval->stack[((hsi*14280+951020)*1+lsi)*1]),105);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+12106185)*1+lsi)*1]), &(inteval->stack[((hsi*42840+12063345)*1+lsi)*1]), &(inteval->stack[((hsi*37800+11740995)*1+lsi)*1]),105);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+12181785)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12106185)*1+lsi)*1]), &(inteval->stack[((hsi*66150+11778795)*1+lsi)*1]),105);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+12292035)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12181785)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11844945)*1+lsi)*1]),105);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+11714220)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12292035)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11940495)*1+lsi)*1]),105);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+12435360)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11714220)*1+lsi)*1]), &(inteval->stack[((hsi*145530+11568690)*1+lsi)*1]),105);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+11886210)*1+lsi)*1]), &(inteval->stack[((hsi*17955+917000)*1+lsi)*1]), &(inteval->stack[((hsi*16065+934955)*1+lsi)*1]),105);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+11934405)*1+lsi)*1]), &(inteval->stack[((hsi*48195+11886210)*1+lsi)*1]), &(inteval->stack[((hsi*42840+12063345)*1+lsi)*1]),105);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+12629400)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11934405)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12106185)*1+lsi)*1]),105);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+12755400)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12629400)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12181785)*1+lsi)*1]),105);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+12020085)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12755400)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12292035)*1+lsi)*1]),105);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+12920775)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12020085)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11714220)*1+lsi)*1]),105);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+13150095)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12920775)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12435360)*1+lsi)*1]),105);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+12220740)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1006670)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1013600)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+12238065)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1019375)*1+lsi)*1]), &(inteval->stack[((hsi*17325+12220740)*1+lsi)*1]),105);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+11714220)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1064735)*1+lsi)*1]), &(inteval->stack[((hsi*34650+12238065)*1+lsi)*1]),105);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+12220740)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10552675)*1+lsi)*1]), &(inteval->stack[((hsi*57750+11714220)*1+lsi)*1]),105);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+11714220)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1106315)*1+lsi)*1]), &(inteval->stack[((hsi*86625+12220740)*1+lsi)*1]),105);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+934955)*1+lsi)*1]), &(inteval->stack[((hsi*145530+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*121275+11714220)*1+lsi)*1]),105);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12435360)*1+lsi)*1]), &(inteval->stack[((hsi*161700+934955)*1+lsi)*1]),105);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+12220740)*1+lsi)*1]), &(inteval->stack[((hsi*249480+13150095)*1+lsi)*1]), &(inteval->stack[((hsi*207900+11568690)*1+lsi)*1]),105);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*19950+897050)*1+lsi)*1]), &(inteval->stack[((hsi*17955+917000)*1+lsi)*1]),105);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+897050)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*48195+11886210)*1+lsi)*1]),105);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*96390+897050)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11934405)*1+lsi)*1]),105);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+897050)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12629400)*1+lsi)*1]),105);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*189000+897050)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12755400)*1+lsi)*1]),105);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+12480615)*1+lsi)*1]), &(inteval->stack[((hsi*231525+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12020085)*1+lsi)*1]),105);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12480615)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12920775)*1+lsi)*1]),105);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+12480615)*1+lsi)*1]), &(inteval->stack[((hsi*294840+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*249480+13150095)*1+lsi)*1]),105);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*311850+12480615)*1+lsi)*1]), &(inteval->stack[((hsi*259875+12220740)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+11886315)*1+lsi)*1]), &(inteval->stack[((hsi*317625+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*275275+10277400)*1+lsi)*1]),3025);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+12712140)*1+lsi)*1]), &(inteval->stack[((hsi*825825+11886315)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10860840)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*9360+873170)*1+lsi)*1]), &(inteval->stack[((hsi*7920+882530)*1+lsi)*1]),120);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+10301160)*1+lsi)*1]), &(inteval->stack[((hsi*10920+862250)*1+lsi)*1]), &(inteval->stack[((hsi*9360+873170)*1+lsi)*1]),120);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+897050)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10301160)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10277400)*1+lsi)*1]),120);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+10329240)*1+lsi)*1]), &(inteval->stack[((hsi*12600+849650)*1+lsi)*1]), &(inteval->stack[((hsi*10920+862250)*1+lsi)*1]),120);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+944570)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10329240)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10301160)*1+lsi)*1]),120);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+10362000)*1+lsi)*1]), &(inteval->stack[((hsi*56160+944570)*1+lsi)*1]), &(inteval->stack[((hsi*47520+897050)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+1000730)*1+lsi)*1]), &(inteval->stack[((hsi*14400+835250)*1+lsi)*1]), &(inteval->stack[((hsi*12600+849650)*1+lsi)*1]),120);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+10441200)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1000730)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10329240)*1+lsi)*1]),120);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+1038530)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10441200)*1+lsi)*1]), &(inteval->stack[((hsi*56160+944570)*1+lsi)*1]),120);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1038530)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10362000)*1+lsi)*1]),120);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+10506720)*1+lsi)*1]), &(inteval->stack[((hsi*16320+818930)*1+lsi)*1]), &(inteval->stack[((hsi*14400+835250)*1+lsi)*1]),120);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+1132130)*1+lsi)*1]), &(inteval->stack[((hsi*43200+10506720)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1000730)*1+lsi)*1]),120);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+14246640)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1132130)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10441200)*1+lsi)*1]),120);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+14355840)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14246640)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1038530)*1+lsi)*1]),120);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+944570)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14355840)*1+lsi)*1]), &(inteval->stack[((hsi*118800+14127840)*1+lsi)*1]),120);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*48960+10549920)*1+lsi)*1]), &(inteval->stack[((hsi*18360+800570)*1+lsi)*1]), &(inteval->stack[((hsi*16320+818930)*1+lsi)*1]),120);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+14496240)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10549920)*1+lsi)*1]), &(inteval->stack[((hsi*43200+10506720)*1+lsi)*1]),120);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+14582640)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14496240)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1132130)*1+lsi)*1]),120);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+14708640)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14582640)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14246640)*1+lsi)*1]),120);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+14872440)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14708640)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14355840)*1+lsi)*1]),120);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+14246640)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14872440)*1+lsi)*1]), &(inteval->stack[((hsi*166320+944570)*1+lsi)*1]),120);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+10441200)*1+lsi)*1]), &(inteval->stack[((hsi*20520+780050)*1+lsi)*1]), &(inteval->stack[((hsi*18360+800570)*1+lsi)*1]),120);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+1110890)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10441200)*1+lsi)*1]), &(inteval->stack[((hsi*48960+10549920)*1+lsi)*1]),120);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+15069000)*1+lsi)*1]), &(inteval->stack[((hsi*97920+1110890)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14496240)*1+lsi)*1]),120);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+15213000)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15069000)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14582640)*1+lsi)*1]),120);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+14468400)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15213000)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14708640)*1+lsi)*1]),120);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+15402000)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14468400)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14872440)*1+lsi)*1]),120);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+14697720)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15402000)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14246640)*1+lsi)*1]),120);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+10496280)*1+lsi)*1]), &(inteval->stack[((hsi*7920+882530)*1+lsi)*1]), &(inteval->stack[((hsi*6600+890450)*1+lsi)*1]),120);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*39600+10516080)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*19800+10496280)*1+lsi)*1]),120);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+800570)*1+lsi)*1]), &(inteval->stack[((hsi*47520+897050)*1+lsi)*1]), &(inteval->stack[((hsi*39600+10516080)*1+lsi)*1]),120);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+10496280)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10362000)*1+lsi)*1]), &(inteval->stack[((hsi*66000+800570)*1+lsi)*1]),120);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*118800+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*99000+10496280)*1+lsi)*1]),120);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+15664080)*1+lsi)*1]), &(inteval->stack[((hsi*166320+944570)*1+lsi)*1]), &(inteval->stack[((hsi*138600+10277400)*1+lsi)*1]),120);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+800570)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14246640)*1+lsi)*1]), &(inteval->stack[((hsi*184800+15664080)*1+lsi)*1]),120);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*285120+14697720)*1+lsi)*1]), &(inteval->stack[((hsi*237600+800570)*1+lsi)*1]),120);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+800570)*1+lsi)*1]), &(inteval->stack[((hsi*22800+757250)*1+lsi)*1]), &(inteval->stack[((hsi*20520+780050)*1+lsi)*1]),120);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+862130)*1+lsi)*1]), &(inteval->stack[((hsi*61560+800570)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10441200)*1+lsi)*1]),120);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*110160+862130)*1+lsi)*1]), &(inteval->stack[((hsi*97920+1110890)*1+lsi)*1]),120);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+757250)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15069000)*1+lsi)*1]),120);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*216000+757250)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15213000)*1+lsi)*1]),120);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+757250)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14468400)*1+lsi)*1]),120);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+14982840)*1+lsi)*1]), &(inteval->stack[((hsi*305760+757250)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15402000)*1+lsi)*1]),120);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+757250)*1+lsi)*1]), &(inteval->stack[((hsi*336960+14982840)*1+lsi)*1]), &(inteval->stack[((hsi*285120+14697720)*1+lsi)*1]),120);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+14424840)*1+lsi)*1]), &(inteval->stack[((hsi*356400+757250)*1+lsi)*1]), &(inteval->stack[((hsi*297000+14127840)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+14787840)*1+lsi)*1]), &(inteval->stack[((hsi*363000+14424840)*1+lsi)*1]), &(inteval->stack[((hsi*317625+11568690)*1+lsi)*1]),3025);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+15740715)*1+lsi)*1]), &(inteval->stack[((hsi*952875+14787840)*1+lsi)*1]), &(inteval->stack[((hsi*825825+11886315)*1+lsi)*1]),3025);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+17392365)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+15740715)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+12712140)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*10608+730186)*1+lsi)*1]), &(inteval->stack[((hsi*8976+740794)*1+lsi)*1]),136);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+11595618)*1+lsi)*1]), &(inteval->stack[((hsi*12376+717810)*1+lsi)*1]), &(inteval->stack[((hsi*10608+730186)*1+lsi)*1]),136);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+11627442)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11595618)*1+lsi)*1]), &(inteval->stack[((hsi*26928+11568690)*1+lsi)*1]),136);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+11681298)*1+lsi)*1]), &(inteval->stack[((hsi*14280+703530)*1+lsi)*1]), &(inteval->stack[((hsi*12376+717810)*1+lsi)*1]),136);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+11718426)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11681298)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11595618)*1+lsi)*1]),136);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+11782074)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11718426)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11627442)*1+lsi)*1]),136);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+11871834)*1+lsi)*1]), &(inteval->stack[((hsi*16320+687210)*1+lsi)*1]), &(inteval->stack[((hsi*14280+703530)*1+lsi)*1]),136);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11914674)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11871834)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11681298)*1+lsi)*1]),136);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+11988930)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11914674)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11718426)*1+lsi)*1]),136);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+12095010)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11988930)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11782074)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+12229650)*1+lsi)*1]), &(inteval->stack[((hsi*18496+668714)*1+lsi)*1]), &(inteval->stack[((hsi*16320+687210)*1+lsi)*1]),136);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+757250)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12229650)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11871834)*1+lsi)*1]),136);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+12278610)*1+lsi)*1]), &(inteval->stack[((hsi*85680+757250)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11914674)*1+lsi)*1]),136);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+842930)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12278610)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11988930)*1+lsi)*1]),136);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*159120+842930)*1+lsi)*1]), &(inteval->stack[((hsi*134640+12095010)*1+lsi)*1]),136);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*55488+12402370)*1+lsi)*1]), &(inteval->stack[((hsi*20808+647906)*1+lsi)*1]), &(inteval->stack[((hsi*18496+668714)*1+lsi)*1]),136);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*55488+12402370)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12229650)*1+lsi)*1]),136);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+12457858)*1+lsi)*1]), &(inteval->stack[((hsi*97920+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*85680+757250)*1+lsi)*1]),136);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+11871834)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12457858)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12278610)*1+lsi)*1]),136);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11871834)*1+lsi)*1]), &(inteval->stack[((hsi*159120+842930)*1+lsi)*1]),136);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+757250)*1+lsi)*1]), &(inteval->stack[((hsi*222768+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*188496+10277400)*1+lsi)*1]),136);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+1008578)*1+lsi)*1]), &(inteval->stack[((hsi*23256+624650)*1+lsi)*1]), &(inteval->stack[((hsi*20808+647906)*1+lsi)*1]),136);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+14225760)*1+lsi)*1]), &(inteval->stack[((hsi*62424+1008578)*1+lsi)*1]), &(inteval->stack[((hsi*55488+12402370)*1+lsi)*1]),136);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+12229650)*1+lsi)*1]), &(inteval->stack[((hsi*110976+14225760)*1+lsi)*1]), &(inteval->stack[((hsi*97920+14127840)*1+lsi)*1]),136);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+19974633)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12229650)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12457858)*1+lsi)*1]),136);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+12392850)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19974633)*1+lsi)*1]), &(inteval->stack[((hsi*185640+11871834)*1+lsi)*1]),136);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+20188833)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12392850)*1+lsi)*1]), &(inteval->stack[((hsi*222768+19751865)*1+lsi)*1]),136);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+20485857)*1+lsi)*1]), &(inteval->stack[((hsi*297024+20188833)*1+lsi)*1]), &(inteval->stack[((hsi*251328+757250)*1+lsi)*1]),136);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+11871834)*1+lsi)*1]), &(inteval->stack[((hsi*8976+740794)*1+lsi)*1]), &(inteval->stack[((hsi*7480+749770)*1+lsi)*1]),136);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*44880+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*26928+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*22440+11871834)*1+lsi)*1]),136);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+11871834)*1+lsi)*1]), &(inteval->stack[((hsi*53856+11627442)*1+lsi)*1]), &(inteval->stack[((hsi*44880+19751865)*1+lsi)*1]),136);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11782074)*1+lsi)*1]), &(inteval->stack[((hsi*74800+11871834)*1+lsi)*1]),136);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*134640+12095010)*1+lsi)*1]), &(inteval->stack[((hsi*112200+19751865)*1+lsi)*1]),136);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+11725770)*1+lsi)*1]), &(inteval->stack[((hsi*188496+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*157080+11568690)*1+lsi)*1]),136);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*251328+757250)*1+lsi)*1]), &(inteval->stack[((hsi*209440+11725770)*1+lsi)*1]),136);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*323136+20485857)*1+lsi)*1]), &(inteval->stack[((hsi*269280+10277400)*1+lsi)*1]),136);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+647906)*1+lsi)*1]), &(inteval->stack[((hsi*25840+598810)*1+lsi)*1]), &(inteval->stack[((hsi*23256+624650)*1+lsi)*1]),136);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*69768+647906)*1+lsi)*1]), &(inteval->stack[((hsi*62424+1008578)*1+lsi)*1]),136);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+598810)*1+lsi)*1]), &(inteval->stack[((hsi*124848+10277400)*1+lsi)*1]), &(inteval->stack[((hsi*110976+14225760)*1+lsi)*1]),136);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+783770)*1+lsi)*1]), &(inteval->stack[((hsi*184960+598810)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12229650)*1+lsi)*1]),136);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+11905290)*1+lsi)*1]), &(inteval->stack[((hsi*244800+783770)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19974633)*1+lsi)*1]),136);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+598810)*1+lsi)*1]), &(inteval->stack[((hsi*299880+11905290)*1+lsi)*1]), &(inteval->stack[((hsi*259896+12392850)*1+lsi)*1]),136);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+11905290)*1+lsi)*1]), &(inteval->stack[((hsi*346528+598810)*1+lsi)*1]), &(inteval->stack[((hsi*297024+20188833)*1+lsi)*1]),136);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*381888+11905290)*1+lsi)*1]), &(inteval->stack[((hsi*323136+20485857)*1+lsi)*1]),136);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+11905290)*1+lsi)*1]), &(inteval->stack[((hsi*403920+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*336600+11568690)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*411400+11905290)*1+lsi)*1]), &(inteval->stack[((hsi*363000+14424840)*1+lsi)*1]),3025);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+20840865)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*952875+14787840)*1+lsi)*1]),3025);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+22746615)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+20840865)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+15740715)*1+lsi)*1]),3025);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+25499365)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+22746615)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+17392365)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*11934+568363)*1+lsi)*1]), &(inteval->stack[((hsi*10098+580297)*1+lsi)*1]),153);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+14158134)*1+lsi)*1]), &(inteval->stack[((hsi*13923+554440)*1+lsi)*1]), &(inteval->stack[((hsi*11934+568363)*1+lsi)*1]),153);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+14193936)*1+lsi)*1]), &(inteval->stack[((hsi*35802+14158134)*1+lsi)*1]), &(inteval->stack[((hsi*30294+14127840)*1+lsi)*1]),153);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+14254524)*1+lsi)*1]), &(inteval->stack[((hsi*16065+538375)*1+lsi)*1]), &(inteval->stack[((hsi*13923+554440)*1+lsi)*1]),153);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+14296293)*1+lsi)*1]), &(inteval->stack[((hsi*41769+14254524)*1+lsi)*1]), &(inteval->stack[((hsi*35802+14158134)*1+lsi)*1]),153);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+14367897)*1+lsi)*1]), &(inteval->stack[((hsi*71604+14296293)*1+lsi)*1]), &(inteval->stack[((hsi*60588+14193936)*1+lsi)*1]),153);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+14468877)*1+lsi)*1]), &(inteval->stack[((hsi*18360+520015)*1+lsi)*1]), &(inteval->stack[((hsi*16065+538375)*1+lsi)*1]),153);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+14517072)*1+lsi)*1]), &(inteval->stack[((hsi*48195+14468877)*1+lsi)*1]), &(inteval->stack[((hsi*41769+14254524)*1+lsi)*1]),153);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+14600610)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14517072)*1+lsi)*1]), &(inteval->stack[((hsi*71604+14296293)*1+lsi)*1]),153);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+14719950)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14600610)*1+lsi)*1]), &(inteval->stack[((hsi*100980+14367897)*1+lsi)*1]),153);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+14871420)*1+lsi)*1]), &(inteval->stack[((hsi*20808+499207)*1+lsi)*1]), &(inteval->stack[((hsi*18360+520015)*1+lsi)*1]),153);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+14926500)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14871420)*1+lsi)*1]), &(inteval->stack[((hsi*48195+14468877)*1+lsi)*1]),153);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+15022890)*1+lsi)*1]), &(inteval->stack[((hsi*96390+14926500)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14517072)*1+lsi)*1]),153);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+15162120)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15022890)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14600610)*1+lsi)*1]),153);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+15341130)*1+lsi)*1]), &(inteval->stack[((hsi*179010+15162120)*1+lsi)*1]), &(inteval->stack[((hsi*151470+14719950)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*62424+15553188)*1+lsi)*1]), &(inteval->stack[((hsi*23409+475798)*1+lsi)*1]), &(inteval->stack[((hsi*20808+499207)*1+lsi)*1]),153);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+15615612)*1+lsi)*1]), &(inteval->stack[((hsi*62424+15553188)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14871420)*1+lsi)*1]),153);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+15725772)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15615612)*1+lsi)*1]), &(inteval->stack[((hsi*96390+14926500)*1+lsi)*1]),153);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+15886422)*1+lsi)*1]), &(inteval->stack[((hsi*160650+15725772)*1+lsi)*1]), &(inteval->stack[((hsi*139230+15022890)*1+lsi)*1]),153);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+16095267)*1+lsi)*1]), &(inteval->stack[((hsi*208845+15886422)*1+lsi)*1]), &(inteval->stack[((hsi*179010+15162120)*1+lsi)*1]),153);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+16345881)*1+lsi)*1]), &(inteval->stack[((hsi*250614+16095267)*1+lsi)*1]), &(inteval->stack[((hsi*212058+15341130)*1+lsi)*1]),153);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+16628625)*1+lsi)*1]), &(inteval->stack[((hsi*26163+449635)*1+lsi)*1]), &(inteval->stack[((hsi*23409+475798)*1+lsi)*1]),153);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+16698852)*1+lsi)*1]), &(inteval->stack[((hsi*70227+16628625)*1+lsi)*1]), &(inteval->stack[((hsi*62424+15553188)*1+lsi)*1]),153);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+598810)*1+lsi)*1]), &(inteval->stack[((hsi*124848+16698852)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15615612)*1+lsi)*1]),153);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+16823700)*1+lsi)*1]), &(inteval->stack[((hsi*183600+598810)*1+lsi)*1]), &(inteval->stack[((hsi*160650+15725772)*1+lsi)*1]),153);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+14871420)*1+lsi)*1]), &(inteval->stack[((hsi*240975+16823700)*1+lsi)*1]), &(inteval->stack[((hsi*208845+15886422)*1+lsi)*1]),153);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+15553188)*1+lsi)*1]), &(inteval->stack[((hsi*292383+14871420)*1+lsi)*1]), &(inteval->stack[((hsi*250614+16095267)*1+lsi)*1]),153);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+15887340)*1+lsi)*1]), &(inteval->stack[((hsi*334152+15553188)*1+lsi)*1]), &(inteval->stack[((hsi*282744+16345881)*1+lsi)*1]),153);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+782410)*1+lsi)*1]), &(inteval->stack[((hsi*10098+580297)*1+lsi)*1]), &(inteval->stack[((hsi*8415+590395)*1+lsi)*1]),153);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*50490+807655)*1+lsi)*1]), &(inteval->stack[((hsi*30294+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*25245+782410)*1+lsi)*1]),153);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+12316690)*1+lsi)*1]), &(inteval->stack[((hsi*60588+14193936)*1+lsi)*1]), &(inteval->stack[((hsi*50490+807655)*1+lsi)*1]),153);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+782410)*1+lsi)*1]), &(inteval->stack[((hsi*100980+14367897)*1+lsi)*1]), &(inteval->stack[((hsi*84150+12316690)*1+lsi)*1]),153);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*151470+14719950)*1+lsi)*1]), &(inteval->stack[((hsi*126225+782410)*1+lsi)*1]),153);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+14304555)*1+lsi)*1]), &(inteval->stack[((hsi*212058+15341130)*1+lsi)*1]), &(inteval->stack[((hsi*176715+14127840)*1+lsi)*1]),153);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+782410)*1+lsi)*1]), &(inteval->stack[((hsi*282744+16345881)*1+lsi)*1]), &(inteval->stack[((hsi*235620+14304555)*1+lsi)*1]),153);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*378675+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*363528+15887340)*1+lsi)*1]), &(inteval->stack[((hsi*302940+782410)*1+lsi)*1]),153);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+782410)*1+lsi)*1]), &(inteval->stack[((hsi*29070+420565)*1+lsi)*1]), &(inteval->stack[((hsi*26163+449635)*1+lsi)*1]),153);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+12316690)*1+lsi)*1]), &(inteval->stack[((hsi*78489+782410)*1+lsi)*1]), &(inteval->stack[((hsi*70227+16628625)*1+lsi)*1]),153);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+16250868)*1+lsi)*1]), &(inteval->stack[((hsi*140454+12316690)*1+lsi)*1]), &(inteval->stack[((hsi*124848+16698852)*1+lsi)*1]),153);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+782410)*1+lsi)*1]), &(inteval->stack[((hsi*208080+16250868)*1+lsi)*1]), &(inteval->stack[((hsi*183600+598810)*1+lsi)*1]),153);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+16250868)*1+lsi)*1]), &(inteval->stack[((hsi*275400+782410)*1+lsi)*1]), &(inteval->stack[((hsi*240975+16823700)*1+lsi)*1]),153);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+16588233)*1+lsi)*1]), &(inteval->stack[((hsi*337365+16250868)*1+lsi)*1]), &(inteval->stack[((hsi*292383+14871420)*1+lsi)*1]),153);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+14506515)*1+lsi)*1]), &(inteval->stack[((hsi*389844+16588233)*1+lsi)*1]), &(inteval->stack[((hsi*334152+15553188)*1+lsi)*1]),153);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+16250868)*1+lsi)*1]), &(inteval->stack[((hsi*429624+14506515)*1+lsi)*1]), &(inteval->stack[((hsi*363528+15887340)*1+lsi)*1]),153);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*462825+14506515)*1+lsi)*1]), &(inteval->stack[((hsi*454410+16250868)*1+lsi)*1]), &(inteval->stack[((hsi*378675+14127840)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*1234200+14969340)*1+lsi)*1]), &(inteval->stack[((hsi*462825+14506515)*1+lsi)*1]), &(inteval->stack[((hsi*411400+11905290)*1+lsi)*1]),3025);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*2178000+29038615)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+14969340)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+19751865)*1+lsi)*1]),3025);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*3176250+31216615)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+29038615)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+20840865)*1+lsi)*1]),3025);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*4129125+34392865)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+31216615)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+22746615)*1+lsi)*1]),3025);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*4954950+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+34392865)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+25499365)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*13338+386536)*1+lsi)*1]), &(inteval->stack[((hsi*11286+399874)*1+lsi)*1]),171);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+16237398)*1+lsi)*1]), &(inteval->stack[((hsi*15561+370975)*1+lsi)*1]), &(inteval->stack[((hsi*13338+386536)*1+lsi)*1]),171);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*40014+16237398)*1+lsi)*1]), &(inteval->stack[((hsi*33858+16203540)*1+lsi)*1]),171);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+16277412)*1+lsi)*1]), &(inteval->stack[((hsi*17955+353020)*1+lsi)*1]), &(inteval->stack[((hsi*15561+370975)*1+lsi)*1]),171);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+11636406)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16277412)*1+lsi)*1]), &(inteval->stack[((hsi*40014+16237398)*1+lsi)*1]),171);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+16324095)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11636406)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11568690)*1+lsi)*1]),171);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+11716434)*1+lsi)*1]), &(inteval->stack[((hsi*20520+332500)*1+lsi)*1]), &(inteval->stack[((hsi*17955+353020)*1+lsi)*1]),171);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+16436955)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11716434)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16277412)*1+lsi)*1]),171);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+11770299)*1+lsi)*1]), &(inteval->stack[((hsi*93366+16436955)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11636406)*1+lsi)*1]),171);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+16530321)*1+lsi)*1]), &(inteval->stack[((hsi*133380+11770299)*1+lsi)*1]), &(inteval->stack[((hsi*112860+16324095)*1+lsi)*1]),171);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+11903679)*1+lsi)*1]), &(inteval->stack[((hsi*23256+309244)*1+lsi)*1]), &(inteval->stack[((hsi*20520+332500)*1+lsi)*1]),171);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+420565)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11903679)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11716434)*1+lsi)*1]),171);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+24706815)*1+lsi)*1]), &(inteval->stack[((hsi*107730+420565)*1+lsi)*1]), &(inteval->stack[((hsi*93366+16436955)*1+lsi)*1]),171);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+11965239)*1+lsi)*1]), &(inteval->stack[((hsi*155610+24706815)*1+lsi)*1]), &(inteval->stack[((hsi*133380+11770299)*1+lsi)*1]),171);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+16699611)*1+lsi)*1]), &(inteval->stack[((hsi*200070+11965239)*1+lsi)*1]), &(inteval->stack[((hsi*169290+16530321)*1+lsi)*1]),171);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*69768+528295)*1+lsi)*1]), &(inteval->stack[((hsi*26163+283081)*1+lsi)*1]), &(inteval->stack[((hsi*23256+309244)*1+lsi)*1]),171);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+24862425)*1+lsi)*1]), &(inteval->stack[((hsi*69768+528295)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11903679)*1+lsi)*1]),171);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+598063)*1+lsi)*1]), &(inteval->stack[((hsi*123120+24862425)*1+lsi)*1]), &(inteval->stack[((hsi*107730+420565)*1+lsi)*1]),171);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+12165309)*1+lsi)*1]), &(inteval->stack[((hsi*179550+598063)*1+lsi)*1]), &(inteval->stack[((hsi*155610+24706815)*1+lsi)*1]),171);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+24985545)*1+lsi)*1]), &(inteval->stack[((hsi*233415+12165309)*1+lsi)*1]), &(inteval->stack[((hsi*200070+11965239)*1+lsi)*1]),171);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+11636406)*1+lsi)*1]), &(inteval->stack[((hsi*280098+24985545)*1+lsi)*1]), &(inteval->stack[((hsi*237006+16699611)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+16936617)*1+lsi)*1]), &(inteval->stack[((hsi*29241+253840)*1+lsi)*1]), &(inteval->stack[((hsi*26163+283081)*1+lsi)*1]),171);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+777613)*1+lsi)*1]), &(inteval->stack[((hsi*78489+16936617)*1+lsi)*1]), &(inteval->stack[((hsi*69768+528295)*1+lsi)*1]),171);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*139536+777613)*1+lsi)*1]), &(inteval->stack[((hsi*123120+24862425)*1+lsi)*1]),171);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+17015106)*1+lsi)*1]), &(inteval->stack[((hsi*205200+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*179550+598063)*1+lsi)*1]),171);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+420565)*1+lsi)*1]), &(inteval->stack[((hsi*269325+17015106)*1+lsi)*1]), &(inteval->stack[((hsi*233415+12165309)*1+lsi)*1]),171);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+11952414)*1+lsi)*1]), &(inteval->stack[((hsi*326781+420565)*1+lsi)*1]), &(inteval->stack[((hsi*280098+24985545)*1+lsi)*1]),171);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+24706815)*1+lsi)*1]), &(inteval->stack[((hsi*373464+11952414)*1+lsi)*1]), &(inteval->stack[((hsi*316008+11636406)*1+lsi)*1]),171);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*28215+12325878)*1+lsi)*1]), &(inteval->stack[((hsi*11286+399874)*1+lsi)*1]), &(inteval->stack[((hsi*9405+411160)*1+lsi)*1]),171);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*56430+25113111)*1+lsi)*1]), &(inteval->stack[((hsi*33858+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*28215+12325878)*1+lsi)*1]),171);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*94050+12325878)*1+lsi)*1]), &(inteval->stack[((hsi*67716+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*56430+25113111)*1+lsi)*1]),171);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*141075+25113111)*1+lsi)*1]), &(inteval->stack[((hsi*112860+16324095)*1+lsi)*1]), &(inteval->stack[((hsi*94050+12325878)*1+lsi)*1]),171);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*197505+12325878)*1+lsi)*1]), &(inteval->stack[((hsi*169290+16530321)*1+lsi)*1]), &(inteval->stack[((hsi*141075+25113111)*1+lsi)*1]),171);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*263340+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*237006+16699611)*1+lsi)*1]), &(inteval->stack[((hsi*197505+12325878)*1+lsi)*1]),171);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*338580+16466880)*1+lsi)*1]), &(inteval->stack[((hsi*316008+11636406)*1+lsi)*1]), &(inteval->stack[((hsi*263340+16203540)*1+lsi)*1]),171);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*423225+38521990)*1+lsi)*1]), &(inteval->stack[((hsi*406296+24706815)*1+lsi)*1]), &(inteval->stack[((hsi*338580+16466880)*1+lsi)*1]),171);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*32490+221350)*1+lsi)*1]), &(inteval->stack[((hsi*29241+253840)*1+lsi)*1]),171);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+16291263)*1+lsi)*1]), &(inteval->stack[((hsi*87723+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*78489+16936617)*1+lsi)*1]),171);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+16448241)*1+lsi)*1]), &(inteval->stack[((hsi*156978+16291263)*1+lsi)*1]), &(inteval->stack[((hsi*139536+777613)*1+lsi)*1]),171);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+747346)*1+lsi)*1]), &(inteval->stack[((hsi*232560+16448241)*1+lsi)*1]), &(inteval->stack[((hsi*205200+14127840)*1+lsi)*1]),171);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*307800+747346)*1+lsi)*1]), &(inteval->stack[((hsi*269325+17015106)*1+lsi)*1]),171);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+16580595)*1+lsi)*1]), &(inteval->stack[((hsi*377055+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*326781+420565)*1+lsi)*1]),171);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+221350)*1+lsi)*1]), &(inteval->stack[((hsi*435708+16580595)*1+lsi)*1]), &(inteval->stack[((hsi*373464+11952414)*1+lsi)*1]),171);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*480168+221350)*1+lsi)*1]), &(inteval->stack[((hsi*406296+24706815)*1+lsi)*1]),171);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*517275+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*507870+16203540)*1+lsi)*1]), &(inteval->stack[((hsi*423225+38521990)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*1388475+38521990)*1+lsi)*1]), &(inteval->stack[((hsi*517275+11568690)*1+lsi)*1]), &(inteval->stack[((hsi*462825+14506515)*1+lsi)*1]),3025);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*2468400+39910465)*1+lsi)*1]), &(inteval->stack[((hsi*1388475+38521990)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+14969340)*1+lsi)*1]),3025);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*3630000+42378865)*1+lsi)*1]), &(inteval->stack[((hsi*2468400+39910465)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+29038615)*1+lsi)*1]),3025);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*4764375+46008865)*1+lsi)*1]), &(inteval->stack[((hsi*3630000+42378865)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+31216615)*1+lsi)*1]),3025);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*5780775+50773240)*1+lsi)*1]), &(inteval->stack[((hsi*4764375+46008865)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+34392865)*1+lsi)*1]),3025);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*6606600+29038615)*1+lsi)*1]), &(inteval->stack[((hsi*5780775+50773240)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+19751865)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1280016)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1285164)*1+lsi)*1]),66);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+14140908)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1274010)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1280016)*1+lsi)*1]),66);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+14156352)*1+lsi)*1]), &(inteval->stack[((hsi*15444+14140908)*1+lsi)*1]), &(inteval->stack[((hsi*13068+14127840)*1+lsi)*1]),66);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+14182488)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1267080)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1274010)*1+lsi)*1]),66);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+14200506)*1+lsi)*1]), &(inteval->stack[((hsi*18018+14182488)*1+lsi)*1]), &(inteval->stack[((hsi*15444+14140908)*1+lsi)*1]),66);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+14231394)*1+lsi)*1]), &(inteval->stack[((hsi*30888+14200506)*1+lsi)*1]), &(inteval->stack[((hsi*26136+14156352)*1+lsi)*1]),66);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+14274954)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1259160)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1267080)*1+lsi)*1]),66);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+14295744)*1+lsi)*1]), &(inteval->stack[((hsi*20790+14274954)*1+lsi)*1]), &(inteval->stack[((hsi*18018+14182488)*1+lsi)*1]),66);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+14331780)*1+lsi)*1]), &(inteval->stack[((hsi*36036+14295744)*1+lsi)*1]), &(inteval->stack[((hsi*30888+14200506)*1+lsi)*1]),66);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+14383260)*1+lsi)*1]), &(inteval->stack[((hsi*51480+14331780)*1+lsi)*1]), &(inteval->stack[((hsi*43560+14231394)*1+lsi)*1]),66);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+14448600)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1250184)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1259160)*1+lsi)*1]),66);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+14472360)*1+lsi)*1]), &(inteval->stack[((hsi*23760+14448600)*1+lsi)*1]), &(inteval->stack[((hsi*20790+14274954)*1+lsi)*1]),66);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+14513940)*1+lsi)*1]), &(inteval->stack[((hsi*41580+14472360)*1+lsi)*1]), &(inteval->stack[((hsi*36036+14295744)*1+lsi)*1]),66);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*60060+14513940)*1+lsi)*1]), &(inteval->stack[((hsi*51480+14331780)*1+lsi)*1]),66);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+14574000)*1+lsi)*1]), &(inteval->stack[((hsi*77220+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*65340+14383260)*1+lsi)*1]),66);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*26928+35722435)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1240086)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1250184)*1+lsi)*1]),66);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+35749363)*1+lsi)*1]), &(inteval->stack[((hsi*26928+35722435)*1+lsi)*1]), &(inteval->stack[((hsi*23760+14448600)*1+lsi)*1]),66);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+14665476)*1+lsi)*1]), &(inteval->stack[((hsi*47520+35749363)*1+lsi)*1]), &(inteval->stack[((hsi*41580+14472360)*1+lsi)*1]),66);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+35796883)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14665476)*1+lsi)*1]), &(inteval->stack[((hsi*60060+14513940)*1+lsi)*1]),66);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+14734776)*1+lsi)*1]), &(inteval->stack[((hsi*90090+35796883)*1+lsi)*1]), &(inteval->stack[((hsi*77220+35645215)*1+lsi)*1]),66);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+35886973)*1+lsi)*1]), &(inteval->stack[((hsi*108108+14734776)*1+lsi)*1]), &(inteval->stack[((hsi*91476+14574000)*1+lsi)*1]),66);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+14842884)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1228800)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1240086)*1+lsi)*1]),66);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+14873178)*1+lsi)*1]), &(inteval->stack[((hsi*30294+14842884)*1+lsi)*1]), &(inteval->stack[((hsi*26928+35722435)*1+lsi)*1]),66);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+36008941)*1+lsi)*1]), &(inteval->stack[((hsi*53856+14873178)*1+lsi)*1]), &(inteval->stack[((hsi*47520+35749363)*1+lsi)*1]),66);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+14927034)*1+lsi)*1]), &(inteval->stack[((hsi*79200+36008941)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14665476)*1+lsi)*1]),66);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+36088141)*1+lsi)*1]), &(inteval->stack[((hsi*103950+14927034)*1+lsi)*1]), &(inteval->stack[((hsi*90090+35796883)*1+lsi)*1]),66);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+15030984)*1+lsi)*1]), &(inteval->stack[((hsi*126126+36088141)*1+lsi)*1]), &(inteval->stack[((hsi*108108+14734776)*1+lsi)*1]),66);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+36214267)*1+lsi)*1]), &(inteval->stack[((hsi*144144+15030984)*1+lsi)*1]), &(inteval->stack[((hsi*121968+35886973)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1285164)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1289520)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+15186018)*1+lsi)*1]), &(inteval->stack[((hsi*13068+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*10890+15175128)*1+lsi)*1]),66);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+15207798)*1+lsi)*1]), &(inteval->stack[((hsi*26136+14156352)*1+lsi)*1]), &(inteval->stack[((hsi*21780+15186018)*1+lsi)*1]),66);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+36371083)*1+lsi)*1]), &(inteval->stack[((hsi*43560+14231394)*1+lsi)*1]), &(inteval->stack[((hsi*36300+15207798)*1+lsi)*1]),66);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*65340+14383260)*1+lsi)*1]), &(inteval->stack[((hsi*54450+36371083)*1+lsi)*1]),66);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+36371083)*1+lsi)*1]), &(inteval->stack[((hsi*91476+14574000)*1+lsi)*1]), &(inteval->stack[((hsi*76230+15175128)*1+lsi)*1]),66);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*121968+35886973)*1+lsi)*1]), &(inteval->stack[((hsi*101640+36371083)*1+lsi)*1]),66);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+36371083)*1+lsi)*1]), &(inteval->stack[((hsi*156816+36214267)*1+lsi)*1]), &(inteval->stack[((hsi*130680+15175128)*1+lsi)*1]),66);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1216260)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1228800)*1+lsi)*1]),66);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+15208986)*1+lsi)*1]), &(inteval->stack[((hsi*33858+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*30294+14842884)*1+lsi)*1]),66);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+15269574)*1+lsi)*1]), &(inteval->stack[((hsi*60588+15208986)*1+lsi)*1]), &(inteval->stack[((hsi*53856+14873178)*1+lsi)*1]),66);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+15359334)*1+lsi)*1]), &(inteval->stack[((hsi*89760+15269574)*1+lsi)*1]), &(inteval->stack[((hsi*79200+36008941)*1+lsi)*1]),66);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+36534433)*1+lsi)*1]), &(inteval->stack[((hsi*118800+15359334)*1+lsi)*1]), &(inteval->stack[((hsi*103950+14927034)*1+lsi)*1]),66);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*145530+36534433)*1+lsi)*1]), &(inteval->stack[((hsi*126126+36088141)*1+lsi)*1]),66);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+15343296)*1+lsi)*1]), &(inteval->stack[((hsi*168168+15175128)*1+lsi)*1]), &(inteval->stack[((hsi*144144+15030984)*1+lsi)*1]),66);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+36534433)*1+lsi)*1]), &(inteval->stack[((hsi*185328+15343296)*1+lsi)*1]), &(inteval->stack[((hsi*156816+36214267)*1+lsi)*1]),66);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*196020+36534433)*1+lsi)*1]), &(inteval->stack[((hsi*163350+36371083)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+14327490)*1+lsi)*1]), &(inteval->stack[((hsi*235950+10624890)*1+lsi)*1]), &(inteval->stack[((hsi*199650+14127840)*1+lsi)*1]),3025);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10860840)*1+lsi)*1]), &(inteval->stack[((hsi*598950+14327490)*1+lsi)*1]),3025);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+14127840)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+12712140)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+35645215)*1+lsi)*1]),3025);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+56554015)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+17392365)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+14127840)*1+lsi)*1]),3025);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+12085965)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+25499365)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+56554015)*1+lsi)*1]),3025);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*5590200+56554015)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+19751865)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+12085965)*1+lsi)*1]),3025);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*7187400+12085965)*1+lsi)*1]), &(inteval->stack[((hsi*6606600+29038615)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+56554015)*1+lsi)*1]),3025);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*14820+183540)*1+lsi)*1]), &(inteval->stack[((hsi*12540+198360)*1+lsi)*1]),190);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+19310985)*1+lsi)*1]), &(inteval->stack[((hsi*17290+166250)*1+lsi)*1]), &(inteval->stack[((hsi*14820+183540)*1+lsi)*1]),190);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+19355445)*1+lsi)*1]), &(inteval->stack[((hsi*44460+19310985)*1+lsi)*1]), &(inteval->stack[((hsi*37620+19273365)*1+lsi)*1]),190);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+19430685)*1+lsi)*1]), &(inteval->stack[((hsi*19950+146300)*1+lsi)*1]), &(inteval->stack[((hsi*17290+166250)*1+lsi)*1]),190);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+19482555)*1+lsi)*1]), &(inteval->stack[((hsi*51870+19430685)*1+lsi)*1]), &(inteval->stack[((hsi*44460+19310985)*1+lsi)*1]),190);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+19571475)*1+lsi)*1]), &(inteval->stack[((hsi*88920+19482555)*1+lsi)*1]), &(inteval->stack[((hsi*75240+19355445)*1+lsi)*1]),190);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+19696875)*1+lsi)*1]), &(inteval->stack[((hsi*22800+123500)*1+lsi)*1]), &(inteval->stack[((hsi*19950+146300)*1+lsi)*1]),190);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+19756725)*1+lsi)*1]), &(inteval->stack[((hsi*59850+19696875)*1+lsi)*1]), &(inteval->stack[((hsi*51870+19430685)*1+lsi)*1]),190);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+19860465)*1+lsi)*1]), &(inteval->stack[((hsi*103740+19756725)*1+lsi)*1]), &(inteval->stack[((hsi*88920+19482555)*1+lsi)*1]),190);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+20008665)*1+lsi)*1]), &(inteval->stack[((hsi*148200+19860465)*1+lsi)*1]), &(inteval->stack[((hsi*125400+19571475)*1+lsi)*1]),190);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+20196765)*1+lsi)*1]), &(inteval->stack[((hsi*25840+97660)*1+lsi)*1]), &(inteval->stack[((hsi*22800+123500)*1+lsi)*1]),190);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+20265165)*1+lsi)*1]), &(inteval->stack[((hsi*68400+20196765)*1+lsi)*1]), &(inteval->stack[((hsi*59850+19696875)*1+lsi)*1]),190);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+20384865)*1+lsi)*1]), &(inteval->stack[((hsi*119700+20265165)*1+lsi)*1]), &(inteval->stack[((hsi*103740+19756725)*1+lsi)*1]),190);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+20557765)*1+lsi)*1]), &(inteval->stack[((hsi*172900+20384865)*1+lsi)*1]), &(inteval->stack[((hsi*148200+19860465)*1+lsi)*1]),190);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+20780065)*1+lsi)*1]), &(inteval->stack[((hsi*222300+20557765)*1+lsi)*1]), &(inteval->stack[((hsi*188100+20008665)*1+lsi)*1]),190);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*77520+21043405)*1+lsi)*1]), &(inteval->stack[((hsi*29070+68590)*1+lsi)*1]), &(inteval->stack[((hsi*25840+97660)*1+lsi)*1]),190);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+21120925)*1+lsi)*1]), &(inteval->stack[((hsi*77520+21043405)*1+lsi)*1]), &(inteval->stack[((hsi*68400+20196765)*1+lsi)*1]),190);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+21257725)*1+lsi)*1]), &(inteval->stack[((hsi*136800+21120925)*1+lsi)*1]), &(inteval->stack[((hsi*119700+20265165)*1+lsi)*1]),190);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+21457225)*1+lsi)*1]), &(inteval->stack[((hsi*199500+21257725)*1+lsi)*1]), &(inteval->stack[((hsi*172900+20384865)*1+lsi)*1]),190);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+21716575)*1+lsi)*1]), &(inteval->stack[((hsi*259350+21457225)*1+lsi)*1]), &(inteval->stack[((hsi*222300+20557765)*1+lsi)*1]),190);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+22027795)*1+lsi)*1]), &(inteval->stack[((hsi*311220+21716575)*1+lsi)*1]), &(inteval->stack[((hsi*263340+20780065)*1+lsi)*1]),190);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+22378915)*1+lsi)*1]), &(inteval->stack[((hsi*32490+36100)*1+lsi)*1]), &(inteval->stack[((hsi*29070+68590)*1+lsi)*1]),190);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+22466125)*1+lsi)*1]), &(inteval->stack[((hsi*87210+22378915)*1+lsi)*1]), &(inteval->stack[((hsi*77520+21043405)*1+lsi)*1]),190);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+22621165)*1+lsi)*1]), &(inteval->stack[((hsi*155040+22466125)*1+lsi)*1]), &(inteval->stack[((hsi*136800+21120925)*1+lsi)*1]),190);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+22849165)*1+lsi)*1]), &(inteval->stack[((hsi*228000+22621165)*1+lsi)*1]), &(inteval->stack[((hsi*199500+21257725)*1+lsi)*1]),190);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+23148415)*1+lsi)*1]), &(inteval->stack[((hsi*299250+22849165)*1+lsi)*1]), &(inteval->stack[((hsi*259350+21457225)*1+lsi)*1]),190);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+23511505)*1+lsi)*1]), &(inteval->stack[((hsi*363090+23148415)*1+lsi)*1]), &(inteval->stack[((hsi*311220+21716575)*1+lsi)*1]),190);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+23926465)*1+lsi)*1]), &(inteval->stack[((hsi*414960+23511505)*1+lsi)*1]), &(inteval->stack[((hsi*351120+22027795)*1+lsi)*1]),190);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*31350+24377905)*1+lsi)*1]), &(inteval->stack[((hsi*12540+198360)*1+lsi)*1]), &(inteval->stack[((hsi*10450+210900)*1+lsi)*1]),190);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*62700+24409255)*1+lsi)*1]), &(inteval->stack[((hsi*37620+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*31350+24377905)*1+lsi)*1]),190);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*104500+24471955)*1+lsi)*1]), &(inteval->stack[((hsi*75240+19355445)*1+lsi)*1]), &(inteval->stack[((hsi*62700+24409255)*1+lsi)*1]),190);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*156750+24576455)*1+lsi)*1]), &(inteval->stack[((hsi*125400+19571475)*1+lsi)*1]), &(inteval->stack[((hsi*104500+24471955)*1+lsi)*1]),190);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*219450+24733205)*1+lsi)*1]), &(inteval->stack[((hsi*188100+20008665)*1+lsi)*1]), &(inteval->stack[((hsi*156750+24576455)*1+lsi)*1]),190);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*292600+24952655)*1+lsi)*1]), &(inteval->stack[((hsi*263340+20780065)*1+lsi)*1]), &(inteval->stack[((hsi*219450+24733205)*1+lsi)*1]),190);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*376200+25245255)*1+lsi)*1]), &(inteval->stack[((hsi*351120+22027795)*1+lsi)*1]), &(inteval->stack[((hsi*292600+24952655)*1+lsi)*1]),190);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*470250+25621455)*1+lsi)*1]), &(inteval->stack[((hsi*451440+23926465)*1+lsi)*1]), &(inteval->stack[((hsi*376200+25245255)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*36100+0)*1+lsi)*1]), &(inteval->stack[((hsi*32490+36100)*1+lsi)*1]),190);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+19370835)*1+lsi)*1]), &(inteval->stack[((hsi*97470+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*87210+22378915)*1+lsi)*1]),190);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+26091705)*1+lsi)*1]), &(inteval->stack[((hsi*174420+19370835)*1+lsi)*1]), &(inteval->stack[((hsi*155040+22466125)*1+lsi)*1]),190);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*258400+26091705)*1+lsi)*1]), &(inteval->stack[((hsi*228000+22621165)*1+lsi)*1]),190);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+19615365)*1+lsi)*1]), &(inteval->stack[((hsi*342000+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*299250+22849165)*1+lsi)*1]),190);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+20034315)*1+lsi)*1]), &(inteval->stack[((hsi*418950+19615365)*1+lsi)*1]), &(inteval->stack[((hsi*363090+23148415)*1+lsi)*1]),190);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+20518435)*1+lsi)*1]), &(inteval->stack[((hsi*484120+20034315)*1+lsi)*1]), &(inteval->stack[((hsi*414960+23511505)*1+lsi)*1]),190);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+26091705)*1+lsi)*1]), &(inteval->stack[((hsi*533520+20518435)*1+lsi)*1]), &(inteval->stack[((hsi*451440+23926465)*1+lsi)*1]),190);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*574750+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*564300+26091705)*1+lsi)*1]), &(inteval->stack[((hsi*470250+25621455)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*1551825+19848115)*1+lsi)*1]), &(inteval->stack[((hsi*574750+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*517275+11568690)*1+lsi)*1]),3025);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*2776950+21399940)*1+lsi)*1]), &(inteval->stack[((hsi*1551825+19848115)*1+lsi)*1]), &(inteval->stack[((hsi*1388475+38521990)*1+lsi)*1]),3025);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*4114000+24176890)*1+lsi)*1]), &(inteval->stack[((hsi*2776950+21399940)*1+lsi)*1]), &(inteval->stack[((hsi*2468400+39910465)*1+lsi)*1]),3025);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*5445000+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*4114000+24176890)*1+lsi)*1]), &(inteval->stack[((hsi*3630000+42378865)*1+lsi)*1]),3025);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*6670125+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*5445000+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*4764375+46008865)*1+lsi)*1]),3025);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*7707700+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*6670125+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*5780775+50773240)*1+lsi)*1]),3025);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*8494200+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*7707700+35645215)*1+lsi)*1]), &(inteval->stack[((hsi*6606600+29038615)*1+lsi)*1]),3025);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*8984250+1293150)*1+lsi)*1]), &(inteval->stack[((hsi*8494200+19273365)*1+lsi)*1]), &(inteval->stack[((hsi*7187400+12085965)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8984250+1293150)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
