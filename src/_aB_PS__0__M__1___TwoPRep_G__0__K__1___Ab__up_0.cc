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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_PS__0__M__1___TwoPRep_G__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_G__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,369840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_G__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*6084+301254)*1+lsi)*1]), &(inteval->stack[((hsi*5148+307338)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+2345484)*1+lsi)*1]), &(inteval->stack[((hsi*7098+294156)*1+lsi)*1]), &(inteval->stack[((hsi*6084+301254)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+2363736)*1+lsi)*1]), &(inteval->stack[((hsi*18252+2345484)*1+lsi)*1]), &(inteval->stack[((hsi*15444+2330040)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+2394624)*1+lsi)*1]), &(inteval->stack[((hsi*8190+285966)*1+lsi)*1]), &(inteval->stack[((hsi*7098+294156)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+2415918)*1+lsi)*1]), &(inteval->stack[((hsi*21294+2394624)*1+lsi)*1]), &(inteval->stack[((hsi*18252+2345484)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+2452422)*1+lsi)*1]), &(inteval->stack[((hsi*36504+2415918)*1+lsi)*1]), &(inteval->stack[((hsi*30888+2363736)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+2503902)*1+lsi)*1]), &(inteval->stack[((hsi*9360+276606)*1+lsi)*1]), &(inteval->stack[((hsi*8190+285966)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+2528472)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2503902)*1+lsi)*1]), &(inteval->stack[((hsi*21294+2394624)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+2571060)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2528472)*1+lsi)*1]), &(inteval->stack[((hsi*36504+2415918)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+2631900)*1+lsi)*1]), &(inteval->stack[((hsi*60840+2571060)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2452422)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+2394624)*1+lsi)*1]), &(inteval->stack[((hsi*10608+265998)*1+lsi)*1]), &(inteval->stack[((hsi*9360+276606)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+2709120)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2394624)*1+lsi)*1]), &(inteval->stack[((hsi*24570+2503902)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+2758260)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2709120)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2528472)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+2829240)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2758260)*1+lsi)*1]), &(inteval->stack[((hsi*60840+2571060)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+2503902)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2829240)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2631900)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+276606)*1+lsi)*1]), &(inteval->stack[((hsi*5148+307338)*1+lsi)*1]), &(inteval->stack[((hsi*4290+312486)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+2422704)*1+lsi)*1]), &(inteval->stack[((hsi*15444+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*12870+276606)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+2920500)*1+lsi)*1]), &(inteval->stack[((hsi*30888+2363736)*1+lsi)*1]), &(inteval->stack[((hsi*25740+2422704)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*51480+2452422)*1+lsi)*1]), &(inteval->stack[((hsi*42900+2920500)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+2920500)*1+lsi)*1]), &(inteval->stack[((hsi*77220+2631900)*1+lsi)*1]), &(inteval->stack[((hsi*64350+2330040)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+3010590)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2503902)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2920500)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+2612010)*1+lsi)*1]), &(inteval->stack[((hsi*11934+254064)*1+lsi)*1]), &(inteval->stack[((hsi*10608+265998)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+2920500)*1+lsi)*1]), &(inteval->stack[((hsi*31824+2612010)*1+lsi)*1]), &(inteval->stack[((hsi*28080+2394624)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*56160+2920500)*1+lsi)*1]), &(inteval->stack[((hsi*49140+2709120)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+2612010)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2758260)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2612010)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2829240)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+2612010)*1+lsi)*1]), &(inteval->stack[((hsi*127764+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2503902)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*144144+2612010)*1+lsi)*1]), &(inteval->stack[((hsi*120120+3010590)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+254064)*1+lsi)*1]), &(inteval->stack[((hsi*7098+235955)*1+lsi)*1]), &(inteval->stack[((hsi*6006+243053)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+272082)*1+lsi)*1]), &(inteval->stack[((hsi*8281+227674)*1+lsi)*1]), &(inteval->stack[((hsi*7098+235955)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+2484480)*1+lsi)*1]), &(inteval->stack[((hsi*21294+272082)*1+lsi)*1]), &(inteval->stack[((hsi*18018+254064)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+2520516)*1+lsi)*1]), &(inteval->stack[((hsi*9555+218119)*1+lsi)*1]), &(inteval->stack[((hsi*8281+227674)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+2545359)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2520516)*1+lsi)*1]), &(inteval->stack[((hsi*21294+272082)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+2587947)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2545359)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2484480)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+272082)*1+lsi)*1]), &(inteval->stack[((hsi*10920+207199)*1+lsi)*1]), &(inteval->stack[((hsi*9555+218119)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+2648007)*1+lsi)*1]), &(inteval->stack[((hsi*28665+272082)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2520516)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+2697693)*1+lsi)*1]), &(inteval->stack[((hsi*49686+2648007)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2545359)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+2768673)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2697693)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2587947)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+2520516)*1+lsi)*1]), &(inteval->stack[((hsi*12376+194823)*1+lsi)*1]), &(inteval->stack[((hsi*10920+207199)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+2858763)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2520516)*1+lsi)*1]), &(inteval->stack[((hsi*28665+272082)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+2916093)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2858763)*1+lsi)*1]), &(inteval->stack[((hsi*49686+2648007)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+2998903)*1+lsi)*1]), &(inteval->stack[((hsi*82810+2916093)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2697693)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+3105373)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2998903)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2768673)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+2648007)*1+lsi)*1]), &(inteval->stack[((hsi*6006+243053)*1+lsi)*1]), &(inteval->stack[((hsi*5005+249059)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+2663022)*1+lsi)*1]), &(inteval->stack[((hsi*18018+254064)*1+lsi)*1]), &(inteval->stack[((hsi*15015+2648007)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+207199)*1+lsi)*1]), &(inteval->stack[((hsi*36036+2484480)*1+lsi)*1]), &(inteval->stack[((hsi*30030+2663022)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+2648007)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2587947)*1+lsi)*1]), &(inteval->stack[((hsi*50050+207199)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+207199)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2768673)*1+lsi)*1]), &(inteval->stack[((hsi*75075+2648007)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+2553276)*1+lsi)*1]), &(inteval->stack[((hsi*126126+3105373)*1+lsi)*1]), &(inteval->stack[((hsi*105105+207199)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+2693416)*1+lsi)*1]), &(inteval->stack[((hsi*13923+180900)*1+lsi)*1]), &(inteval->stack[((hsi*12376+194823)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+180900)*1+lsi)*1]), &(inteval->stack[((hsi*37128+2693416)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2520516)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+2693416)*1+lsi)*1]), &(inteval->stack[((hsi*65520+180900)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2858763)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+180900)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2693416)*1+lsi)*1]), &(inteval->stack[((hsi*82810+2916093)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+2693416)*1+lsi)*1]), &(inteval->stack[((hsi*124215+180900)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2998903)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+2842474)*1+lsi)*1]), &(inteval->stack[((hsi*149058+2693416)*1+lsi)*1]), &(inteval->stack[((hsi*126126+3105373)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+3010642)*1+lsi)*1]), &(inteval->stack[((hsi*168168+2842474)*1+lsi)*1]), &(inteval->stack[((hsi*140140+2553276)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*463320+2484480)*1+lsi)*1]), &(inteval->stack[((hsi*180180+3010642)*1+lsi)*1]), &(inteval->stack[((hsi*154440+2330040)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+180900)*1+lsi)*1]), &(inteval->stack[((hsi*8190+160005)*1+lsi)*1]), &(inteval->stack[((hsi*6930+168195)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+201690)*1+lsi)*1]), &(inteval->stack[((hsi*9555+150450)*1+lsi)*1]), &(inteval->stack[((hsi*8190+160005)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+226260)*1+lsi)*1]), &(inteval->stack[((hsi*24570+201690)*1+lsi)*1]), &(inteval->stack[((hsi*20790+180900)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*11025+139425)*1+lsi)*1]), &(inteval->stack[((hsi*9555+150450)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+3190822)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*24570+201690)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+3239962)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3190822)*1+lsi)*1]), &(inteval->stack[((hsi*41580+226260)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+267840)*1+lsi)*1]), &(inteval->stack[((hsi*12600+126825)*1+lsi)*1]), &(inteval->stack[((hsi*11025+139425)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+3309262)*1+lsi)*1]), &(inteval->stack[((hsi*33075+267840)*1+lsi)*1]), &(inteval->stack[((hsi*28665+2947800)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+3366592)*1+lsi)*1]), &(inteval->stack[((hsi*57330+3309262)*1+lsi)*1]), &(inteval->stack[((hsi*49140+3190822)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+3448492)*1+lsi)*1]), &(inteval->stack[((hsi*81900+3366592)*1+lsi)*1]), &(inteval->stack[((hsi*69300+3239962)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*14280+112545)*1+lsi)*1]), &(inteval->stack[((hsi*12600+126825)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+3552442)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*33075+267840)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+3618592)*1+lsi)*1]), &(inteval->stack[((hsi*66150+3552442)*1+lsi)*1]), &(inteval->stack[((hsi*57330+3309262)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+3714142)*1+lsi)*1]), &(inteval->stack[((hsi*95550+3618592)*1+lsi)*1]), &(inteval->stack[((hsi*81900+3366592)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+3836992)*1+lsi)*1]), &(inteval->stack[((hsi*122850+3714142)*1+lsi)*1]), &(inteval->stack[((hsi*103950+3448492)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+3309262)*1+lsi)*1]), &(inteval->stack[((hsi*6930+168195)*1+lsi)*1]), &(inteval->stack[((hsi*5775+175125)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+3326587)*1+lsi)*1]), &(inteval->stack[((hsi*20790+180900)*1+lsi)*1]), &(inteval->stack[((hsi*17325+3309262)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+126825)*1+lsi)*1]), &(inteval->stack[((hsi*41580+226260)*1+lsi)*1]), &(inteval->stack[((hsi*34650+3326587)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+3309262)*1+lsi)*1]), &(inteval->stack[((hsi*69300+3239962)*1+lsi)*1]), &(inteval->stack[((hsi*57750+126825)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+126825)*1+lsi)*1]), &(inteval->stack[((hsi*103950+3448492)*1+lsi)*1]), &(inteval->stack[((hsi*86625+3309262)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+3190822)*1+lsi)*1]), &(inteval->stack[((hsi*145530+3836992)*1+lsi)*1]), &(inteval->stack[((hsi*121275+126825)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+3352522)*1+lsi)*1]), &(inteval->stack[((hsi*16065+96480)*1+lsi)*1]), &(inteval->stack[((hsi*14280+112545)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+96480)*1+lsi)*1]), &(inteval->stack[((hsi*42840+3352522)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2947800)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+3352522)*1+lsi)*1]), &(inteval->stack[((hsi*75600+96480)*1+lsi)*1]), &(inteval->stack[((hsi*66150+3552442)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+96480)*1+lsi)*1]), &(inteval->stack[((hsi*110250+3352522)*1+lsi)*1]), &(inteval->stack[((hsi*95550+3618592)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+3352522)*1+lsi)*1]), &(inteval->stack[((hsi*143325+96480)*1+lsi)*1]), &(inteval->stack[((hsi*122850+3714142)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+3524512)*1+lsi)*1]), &(inteval->stack[((hsi*171990+3352522)*1+lsi)*1]), &(inteval->stack[((hsi*145530+3836992)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+96480)*1+lsi)*1]), &(inteval->stack[((hsi*194040+3524512)*1+lsi)*1]), &(inteval->stack[((hsi*161700+3190822)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*540540+3190822)*1+lsi)*1]), &(inteval->stack[((hsi*207900+96480)*1+lsi)*1]), &(inteval->stack[((hsi*180180+3010642)*1+lsi)*1]),1980);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*926640+3731362)*1+lsi)*1]), &(inteval->stack[((hsi*540540+3190822)*1+lsi)*1]), &(inteval->stack[((hsi*463320+2484480)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*5148+356706)*1+lsi)*1]), &(inteval->stack[((hsi*4356+361854)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+2960868)*1+lsi)*1]), &(inteval->stack[((hsi*6006+350700)*1+lsi)*1]), &(inteval->stack[((hsi*5148+356706)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+2976312)*1+lsi)*1]), &(inteval->stack[((hsi*15444+2960868)*1+lsi)*1]), &(inteval->stack[((hsi*13068+2947800)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+3002448)*1+lsi)*1]), &(inteval->stack[((hsi*6930+343770)*1+lsi)*1]), &(inteval->stack[((hsi*6006+350700)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+3020466)*1+lsi)*1]), &(inteval->stack[((hsi*18018+3002448)*1+lsi)*1]), &(inteval->stack[((hsi*15444+2960868)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+3051354)*1+lsi)*1]), &(inteval->stack[((hsi*30888+3020466)*1+lsi)*1]), &(inteval->stack[((hsi*26136+2976312)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+3094914)*1+lsi)*1]), &(inteval->stack[((hsi*7920+335850)*1+lsi)*1]), &(inteval->stack[((hsi*6930+343770)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+3115704)*1+lsi)*1]), &(inteval->stack[((hsi*20790+3094914)*1+lsi)*1]), &(inteval->stack[((hsi*18018+3002448)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*36036+3115704)*1+lsi)*1]), &(inteval->stack[((hsi*30888+3020466)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+4709482)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*43560+3051354)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+3002448)*1+lsi)*1]), &(inteval->stack[((hsi*8976+326874)*1+lsi)*1]), &(inteval->stack[((hsi*7920+335850)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+4774822)*1+lsi)*1]), &(inteval->stack[((hsi*23760+3002448)*1+lsi)*1]), &(inteval->stack[((hsi*20790+3094914)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+4816402)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4774822)*1+lsi)*1]), &(inteval->stack[((hsi*36036+3115704)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+3094914)*1+lsi)*1]), &(inteval->stack[((hsi*60060+4816402)*1+lsi)*1]), &(inteval->stack[((hsi*51480+4658002)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+4876462)*1+lsi)*1]), &(inteval->stack[((hsi*77220+3094914)*1+lsi)*1]), &(inteval->stack[((hsi*65340+4709482)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*4356+361854)*1+lsi)*1]), &(inteval->stack[((hsi*3630+366210)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+4668892)*1+lsi)*1]), &(inteval->stack[((hsi*13068+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*10890+4658002)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+4967938)*1+lsi)*1]), &(inteval->stack[((hsi*26136+2976312)*1+lsi)*1]), &(inteval->stack[((hsi*21780+4668892)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*43560+3051354)*1+lsi)*1]), &(inteval->stack[((hsi*36300+4967938)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+4967938)*1+lsi)*1]), &(inteval->stack[((hsi*65340+4709482)*1+lsi)*1]), &(inteval->stack[((hsi*54450+2947800)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*91476+4876462)*1+lsi)*1]), &(inteval->stack[((hsi*76230+4967938)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+3026208)*1+lsi)*1]), &(inteval->stack[((hsi*10098+316776)*1+lsi)*1]), &(inteval->stack[((hsi*8976+326874)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+304380)*1+lsi)*1]), &(inteval->stack[((hsi*26928+3026208)*1+lsi)*1]), &(inteval->stack[((hsi*23760+3002448)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*47520+304380)*1+lsi)*1]), &(inteval->stack[((hsi*41580+4774822)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+4967938)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*60060+4816402)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*90090+4967938)*1+lsi)*1]), &(inteval->stack[((hsi*77220+3094914)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+3055908)*1+lsi)*1]), &(inteval->stack[((hsi*108108+2947800)*1+lsi)*1]), &(inteval->stack[((hsi*91476+4876462)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+4759642)*1+lsi)*1]), &(inteval->stack[((hsi*121968+3055908)*1+lsi)*1]), &(inteval->stack[((hsi*101640+4658002)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*392040+4890322)*1+lsi)*1]), &(inteval->stack[((hsi*154440+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*130680+4759642)*1+lsi)*1]),1980);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*784080+5282362)*1+lsi)*1]), &(inteval->stack[((hsi*463320+2484480)*1+lsi)*1]), &(inteval->stack[((hsi*392040+4890322)*1+lsi)*1]),1980);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1306800+6066442)*1+lsi)*1]), &(inteval->stack[((hsi*926640+3731362)*1+lsi)*1]), &(inteval->stack[((hsi*784080+5282362)*1+lsi)*1]),1980);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*9360+72600)*1+lsi)*1]), &(inteval->stack[((hsi*7920+81960)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+4681762)*1+lsi)*1]), &(inteval->stack[((hsi*10920+61680)*1+lsi)*1]), &(inteval->stack[((hsi*9360+72600)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+4709842)*1+lsi)*1]), &(inteval->stack[((hsi*28080+4681762)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4658002)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+4757362)*1+lsi)*1]), &(inteval->stack[((hsi*12600+49080)*1+lsi)*1]), &(inteval->stack[((hsi*10920+61680)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+4790122)*1+lsi)*1]), &(inteval->stack[((hsi*32760+4757362)*1+lsi)*1]), &(inteval->stack[((hsi*28080+4681762)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+4846282)*1+lsi)*1]), &(inteval->stack[((hsi*56160+4790122)*1+lsi)*1]), &(inteval->stack[((hsi*47520+4709842)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+4925482)*1+lsi)*1]), &(inteval->stack[((hsi*14400+34680)*1+lsi)*1]), &(inteval->stack[((hsi*12600+49080)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+4963282)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4925482)*1+lsi)*1]), &(inteval->stack[((hsi*32760+4757362)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+5028802)*1+lsi)*1]), &(inteval->stack[((hsi*65520+4963282)*1+lsi)*1]), &(inteval->stack[((hsi*56160+4790122)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+5122402)*1+lsi)*1]), &(inteval->stack[((hsi*93600+5028802)*1+lsi)*1]), &(inteval->stack[((hsi*79200+4846282)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*16320+18360)*1+lsi)*1]), &(inteval->stack[((hsi*14400+34680)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+5241202)*1+lsi)*1]), &(inteval->stack[((hsi*43200+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*37800+4925482)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+2373240)*1+lsi)*1]), &(inteval->stack[((hsi*75600+5241202)*1+lsi)*1]), &(inteval->stack[((hsi*65520+4963282)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+5316802)*1+lsi)*1]), &(inteval->stack[((hsi*109200+2373240)*1+lsi)*1]), &(inteval->stack[((hsi*93600+5028802)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+2482440)*1+lsi)*1]), &(inteval->stack[((hsi*140400+5316802)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5122402)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+5457202)*1+lsi)*1]), &(inteval->stack[((hsi*7920+81960)*1+lsi)*1]), &(inteval->stack[((hsi*6600+89880)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+5477002)*1+lsi)*1]), &(inteval->stack[((hsi*23760+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*19800+5457202)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+5516602)*1+lsi)*1]), &(inteval->stack[((hsi*47520+4709842)*1+lsi)*1]), &(inteval->stack[((hsi*39600+5477002)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+2648760)*1+lsi)*1]), &(inteval->stack[((hsi*79200+4846282)*1+lsi)*1]), &(inteval->stack[((hsi*66000+5516602)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+5457202)*1+lsi)*1]), &(inteval->stack[((hsi*118800+5122402)*1+lsi)*1]), &(inteval->stack[((hsi*99000+2648760)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*166320+2482440)*1+lsi)*1]), &(inteval->stack[((hsi*138600+5457202)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+5457202)*1+lsi)*1]), &(inteval->stack[((hsi*18360+0)*1+lsi)*1]), &(inteval->stack[((hsi*16320+18360)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+5506162)*1+lsi)*1]), &(inteval->stack[((hsi*48960+5457202)*1+lsi)*1]), &(inteval->stack[((hsi*43200+2330040)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+2648760)*1+lsi)*1]), &(inteval->stack[((hsi*86400+5506162)*1+lsi)*1]), &(inteval->stack[((hsi*75600+5241202)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+5457202)*1+lsi)*1]), &(inteval->stack[((hsi*126000+2648760)*1+lsi)*1]), &(inteval->stack[((hsi*109200+2373240)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+2648760)*1+lsi)*1]), &(inteval->stack[((hsi*163800+5457202)*1+lsi)*1]), &(inteval->stack[((hsi*140400+5316802)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+4842802)*1+lsi)*1]), &(inteval->stack[((hsi*196560+2648760)*1+lsi)*1]), &(inteval->stack[((hsi*166320+2482440)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+5064562)*1+lsi)*1]), &(inteval->stack[((hsi*221760+4842802)*1+lsi)*1]), &(inteval->stack[((hsi*184800+4658002)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*623700+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*237600+5064562)*1+lsi)*1]), &(inteval->stack[((hsi*207900+96480)*1+lsi)*1]),1980);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1081080+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*623700+2330040)*1+lsi)*1]), &(inteval->stack[((hsi*540540+3190822)*1+lsi)*1]),1980);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*1544400+7373242)*1+lsi)*1]), &(inteval->stack[((hsi*1081080+4658002)*1+lsi)*1]), &(inteval->stack[((hsi*926640+3731362)*1+lsi)*1]),1980);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*1960200+369840)*1+lsi)*1]), &(inteval->stack[((hsi*1544400+7373242)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+6066442)*1+lsi)*1]),1980);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1960200+369840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
