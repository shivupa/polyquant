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
#include <_aB_PS__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1426920)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_K__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1306224)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1313322)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+11795028)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1298034)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1306224)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+11816322)*1+lsi)*1]), &(inteval->stack[((hsi*21294+11795028)*1+lsi)*1]), &(inteval->stack[((hsi*18252+11776776)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+11852826)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1288674)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1298034)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+11877396)*1+lsi)*1]), &(inteval->stack[((hsi*24570+11852826)*1+lsi)*1]), &(inteval->stack[((hsi*21294+11795028)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+11919984)*1+lsi)*1]), &(inteval->stack[((hsi*42588+11877396)*1+lsi)*1]), &(inteval->stack[((hsi*36504+11816322)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+11980824)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1278066)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1288674)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+12008904)*1+lsi)*1]), &(inteval->stack[((hsi*28080+11980824)*1+lsi)*1]), &(inteval->stack[((hsi*24570+11852826)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+12058044)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12008904)*1+lsi)*1]), &(inteval->stack[((hsi*42588+11877396)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+12129024)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12058044)*1+lsi)*1]), &(inteval->stack[((hsi*60840+11919984)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+11852826)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1266132)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1278066)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+12220284)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11852826)*1+lsi)*1]), &(inteval->stack[((hsi*28080+11980824)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+12276444)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12220284)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12008904)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+12358344)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12276444)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12058044)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+11980824)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12358344)*1+lsi)*1]), &(inteval->stack[((hsi*91260+12129024)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+12464814)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1252794)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1266132)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+12500616)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12464814)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11852826)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+12564264)*1+lsi)*1]), &(inteval->stack[((hsi*63648+12500616)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12220284)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+12657864)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12564264)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12276444)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+12780714)*1+lsi)*1]), &(inteval->stack[((hsi*122850+12657864)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12358344)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+12220284)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12780714)*1+lsi)*1]), &(inteval->stack[((hsi*127764+11980824)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+12390636)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1237974)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1252794)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+12929772)*1+lsi)*1]), &(inteval->stack[((hsi*40014+12390636)*1+lsi)*1]), &(inteval->stack[((hsi*35802+12464814)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+13001376)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12929772)*1+lsi)*1]), &(inteval->stack[((hsi*63648+12500616)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+13107456)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13001376)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12564264)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+12430650)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13107456)*1+lsi)*1]), &(inteval->stack[((hsi*122850+12657864)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+13247856)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12430650)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12780714)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+12602640)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13247856)*1+lsi)*1]), &(inteval->stack[((hsi*170352+12220284)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+12821664)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1221594)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1237974)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+13446600)*1+lsi)*1]), &(inteval->stack[((hsi*44460+12821664)*1+lsi)*1]), &(inteval->stack[((hsi*40014+12390636)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+13526628)*1+lsi)*1]), &(inteval->stack[((hsi*80028+13446600)*1+lsi)*1]), &(inteval->stack[((hsi*71604+12929772)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+13645968)*1+lsi)*1]), &(inteval->stack[((hsi*119340+13526628)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13001376)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+12866124)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13645968)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13107456)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+13805088)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12866124)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12430650)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+14034408)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13805088)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13247856)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+13062684)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14034408)*1+lsi)*1]), &(inteval->stack[((hsi*219024+12602640)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+12390636)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1313322)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1319406)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+12406080)*1+lsi)*1]), &(inteval->stack[((hsi*18252+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*15444+12390636)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+12436968)*1+lsi)*1]), &(inteval->stack[((hsi*36504+11816322)*1+lsi)*1]), &(inteval->stack[((hsi*30888+12406080)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*60840+11919984)*1+lsi)*1]), &(inteval->stack[((hsi*51480+12436968)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+12390636)*1+lsi)*1]), &(inteval->stack[((hsi*91260+12129024)*1+lsi)*1]), &(inteval->stack[((hsi*77220+11776776)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*127764+11980824)*1+lsi)*1]), &(inteval->stack[((hsi*108108+12390636)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+11920920)*1+lsi)*1]), &(inteval->stack[((hsi*170352+12220284)*1+lsi)*1]), &(inteval->stack[((hsi*144144+11776776)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+12106248)*1+lsi)*1]), &(inteval->stack[((hsi*219024+12602640)*1+lsi)*1]), &(inteval->stack[((hsi*185328+11920920)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+12337908)*1+lsi)*1]), &(inteval->stack[((hsi*273780+13062684)*1+lsi)*1]), &(inteval->stack[((hsi*231660+12106248)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1203576)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1221594)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+11825916)*1+lsi)*1]), &(inteval->stack[((hsi*49140+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*44460+12821664)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+11914836)*1+lsi)*1]), &(inteval->stack[((hsi*88920+11825916)*1+lsi)*1]), &(inteval->stack[((hsi*80028+13446600)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+12048216)*1+lsi)*1]), &(inteval->stack[((hsi*133380+11914836)*1+lsi)*1]), &(inteval->stack[((hsi*119340+13526628)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+13336464)*1+lsi)*1]), &(inteval->stack[((hsi*179010+12048216)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13645968)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*222768+13336464)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12866124)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+13336464)*1+lsi)*1]), &(inteval->stack[((hsi*262080+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13805088)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*294840+13336464)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14034408)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+12621048)*1+lsi)*1]), &(inteval->stack[((hsi*319410+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*273780+13062684)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*334620+12621048)*1+lsi)*1]), &(inteval->stack[((hsi*283140+12337908)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1203576)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1182191)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1190472)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1224870)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1172636)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1182191)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1249713)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1224870)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1203576)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1161716)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1172636)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1224870)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+12166230)*1+lsi)*1]), &(inteval->stack[((hsi*49686+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1249713)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+12237210)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1149340)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1161716)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+12269970)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12237210)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1292301)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+12327300)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12269970)*1+lsi)*1]), &(inteval->stack[((hsi*49686+12116544)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+12410110)*1+lsi)*1]), &(inteval->stack[((hsi*82810+12327300)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12166230)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1135417)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1149340)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+12516580)*1+lsi)*1]), &(inteval->stack[((hsi*37128+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12237210)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+12582100)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12516580)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12269970)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+12677650)*1+lsi)*1]), &(inteval->stack[((hsi*95550+12582100)*1+lsi)*1]), &(inteval->stack[((hsi*82810+12327300)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+12237210)*1+lsi)*1]), &(inteval->stack[((hsi*124215+12677650)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12410110)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+12801865)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1119856)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1135417)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+12843634)*1+lsi)*1]), &(inteval->stack[((hsi*41769+12801865)*1+lsi)*1]), &(inteval->stack[((hsi*37128+12116544)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+12917890)*1+lsi)*1]), &(inteval->stack[((hsi*74256+12843634)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12516580)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+13027090)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12917890)*1+lsi)*1]), &(inteval->stack[((hsi*95550+12582100)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+13170415)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13027090)*1+lsi)*1]), &(inteval->stack[((hsi*124215+12677650)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+12516580)*1+lsi)*1]), &(inteval->stack[((hsi*173901+13170415)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12237210)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+12715324)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1102566)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1119856)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+13344316)*1+lsi)*1]), &(inteval->stack[((hsi*46683+12715324)*1+lsi)*1]), &(inteval->stack[((hsi*41769+12801865)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+13427854)*1+lsi)*1]), &(inteval->stack[((hsi*83538+13344316)*1+lsi)*1]), &(inteval->stack[((hsi*74256+12843634)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+13551614)*1+lsi)*1]), &(inteval->stack[((hsi*123760+13427854)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12917890)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+12762007)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13551614)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13027090)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+13715414)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12762007)*1+lsi)*1]), &(inteval->stack[((hsi*173901+13170415)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+12962662)*1+lsi)*1]), &(inteval->stack[((hsi*231868+13715414)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12516580)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+13218190)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1083456)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1102566)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+13947282)*1+lsi)*1]), &(inteval->stack[((hsi*51870+13218190)*1+lsi)*1]), &(inteval->stack[((hsi*46683+12715324)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+14040648)*1+lsi)*1]), &(inteval->stack[((hsi*93366+13947282)*1+lsi)*1]), &(inteval->stack[((hsi*83538+13344316)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+14179878)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14040648)*1+lsi)*1]), &(inteval->stack[((hsi*123760+13427854)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+13270060)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14179878)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13551614)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+14365518)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13270060)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12762007)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+14633058)*1+lsi)*1]), &(inteval->stack[((hsi*267540+14365518)*1+lsi)*1]), &(inteval->stack[((hsi*231868+13715414)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+13499380)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14633058)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12962662)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+12715324)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1190472)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1197570)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+12733342)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1203576)*1+lsi)*1]), &(inteval->stack[((hsi*18018+12715324)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+12769378)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1249713)*1+lsi)*1]), &(inteval->stack[((hsi*36036+12733342)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1102566)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12166230)*1+lsi)*1]), &(inteval->stack[((hsi*60060+12769378)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+12715324)*1+lsi)*1]), &(inteval->stack[((hsi*106470+12410110)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1102566)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+1102566)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12237210)*1+lsi)*1]), &(inteval->stack[((hsi*126126+12715324)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12516580)*1+lsi)*1]), &(inteval->stack[((hsi*168168+1102566)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+12332760)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12962662)*1+lsi)*1]), &(inteval->stack[((hsi*216216+12116544)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+12603030)*1+lsi)*1]), &(inteval->stack[((hsi*319410+13499380)*1+lsi)*1]), &(inteval->stack[((hsi*270270+12332760)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*21021+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1083456)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+12173874)*1+lsi)*1]), &(inteval->stack[((hsi*57330+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*51870+13218190)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+12933360)*1+lsi)*1]), &(inteval->stack[((hsi*103740+12173874)*1+lsi)*1]), &(inteval->stack[((hsi*93366+13947282)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*155610+12933360)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14040648)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+13818790)*1+lsi)*1]), &(inteval->stack[((hsi*208845+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14179878)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*259896+13818790)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13270060)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+12933360)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*267540+14365518)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+13818790)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12933360)*1+lsi)*1]), &(inteval->stack[((hsi*298116+14633058)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+12933360)*1+lsi)*1]), &(inteval->stack[((hsi*372645+13818790)*1+lsi)*1]), &(inteval->stack[((hsi*319410+13499380)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*390390+12933360)*1+lsi)*1]), &(inteval->stack[((hsi*330330+12603030)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+12512940)*1+lsi)*1]), &(inteval->stack[((hsi*396396+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*339768+11776776)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1037760)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1047315)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1087005)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1026735)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1037760)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1115670)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1087005)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1062435)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1164810)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1014135)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1026735)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1197885)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1164810)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1087005)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1197885)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1115670)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+1255215)*1+lsi)*1]), &(inteval->stack[((hsi*14280+999855)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1014135)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+13614144)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1255215)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1164810)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+13680294)*1+lsi)*1]), &(inteval->stack[((hsi*66150+13614144)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1197885)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+13775844)*1+lsi)*1]), &(inteval->stack[((hsi*95550+13680294)*1+lsi)*1]), &(inteval->stack[((hsi*81900+13532244)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+1164810)*1+lsi)*1]), &(inteval->stack[((hsi*16065+983790)*1+lsi)*1]), &(inteval->stack[((hsi*14280+999855)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+13898694)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1164810)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1255215)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+1207650)*1+lsi)*1]), &(inteval->stack[((hsi*75600+13898694)*1+lsi)*1]), &(inteval->stack[((hsi*66150+13614144)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+13974294)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1207650)*1+lsi)*1]), &(inteval->stack[((hsi*95550+13680294)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+14117619)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13974294)*1+lsi)*1]), &(inteval->stack[((hsi*122850+13775844)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+13614144)*1+lsi)*1]), &(inteval->stack[((hsi*17955+965835)*1+lsi)*1]), &(inteval->stack[((hsi*16065+983790)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+13662339)*1+lsi)*1]), &(inteval->stack[((hsi*48195+13614144)*1+lsi)*1]), &(inteval->stack[((hsi*42840+1164810)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+14289609)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13662339)*1+lsi)*1]), &(inteval->stack[((hsi*75600+13898694)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+14415609)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14289609)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1207650)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+14580984)*1+lsi)*1]), &(inteval->stack[((hsi*165375+14415609)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13974294)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+14781639)*1+lsi)*1]), &(inteval->stack[((hsi*200655+14580984)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14117619)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+13898694)*1+lsi)*1]), &(inteval->stack[((hsi*19950+945885)*1+lsi)*1]), &(inteval->stack[((hsi*17955+965835)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+13952559)*1+lsi)*1]), &(inteval->stack[((hsi*53865+13898694)*1+lsi)*1]), &(inteval->stack[((hsi*48195+13614144)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+1164810)*1+lsi)*1]), &(inteval->stack[((hsi*96390+13952559)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13662339)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+15010959)*1+lsi)*1]), &(inteval->stack[((hsi*142800+1164810)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14289609)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+15199959)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15010959)*1+lsi)*1]), &(inteval->stack[((hsi*165375+14415609)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+14289609)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15199959)*1+lsi)*1]), &(inteval->stack[((hsi*200655+14580984)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+15431484)*1+lsi)*1]), &(inteval->stack[((hsi*267540+14289609)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14781639)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+14557149)*1+lsi)*1]), &(inteval->stack[((hsi*22050+923835)*1+lsi)*1]), &(inteval->stack[((hsi*19950+945885)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+14616999)*1+lsi)*1]), &(inteval->stack[((hsi*59850+14557149)*1+lsi)*1]), &(inteval->stack[((hsi*53865+13898694)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+13614144)*1+lsi)*1]), &(inteval->stack[((hsi*107730+14616999)*1+lsi)*1]), &(inteval->stack[((hsi*96390+13952559)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+13898694)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13614144)*1+lsi)*1]), &(inteval->stack[((hsi*142800+1164810)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+15726324)*1+lsi)*1]), &(inteval->stack[((hsi*214200+13898694)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15010959)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+15990924)*1+lsi)*1]), &(inteval->stack[((hsi*264600+15726324)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15199959)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+15010959)*1+lsi)*1]), &(inteval->stack[((hsi*308700+15990924)*1+lsi)*1]), &(inteval->stack[((hsi*267540+14289609)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+16299624)*1+lsi)*1]), &(inteval->stack[((hsi*343980+15010959)*1+lsi)*1]), &(inteval->stack[((hsi*294840+15431484)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+14289609)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1047315)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1055505)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+14310399)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*20790+14289609)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+14351979)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1115670)*1+lsi)*1]), &(inteval->stack[((hsi*41580+14310399)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+945885)*1+lsi)*1]), &(inteval->stack[((hsi*81900+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14351979)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+1049835)*1+lsi)*1]), &(inteval->stack[((hsi*122850+13775844)*1+lsi)*1]), &(inteval->stack[((hsi*103950+945885)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+14289609)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14117619)*1+lsi)*1]), &(inteval->stack[((hsi*145530+1049835)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+945885)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14781639)*1+lsi)*1]), &(inteval->stack[((hsi*194040+14289609)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+14112894)*1+lsi)*1]), &(inteval->stack[((hsi*294840+15431484)*1+lsi)*1]), &(inteval->stack[((hsi*249480+945885)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+16668174)*1+lsi)*1]), &(inteval->stack[((hsi*368550+16299624)*1+lsi)*1]), &(inteval->stack[((hsi*311850+14112894)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+14112894)*1+lsi)*1]), &(inteval->stack[((hsi*24255+899580)*1+lsi)*1]), &(inteval->stack[((hsi*22050+923835)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+899580)*1+lsi)*1]), &(inteval->stack[((hsi*66150+14112894)*1+lsi)*1]), &(inteval->stack[((hsi*59850+14557149)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+14112894)*1+lsi)*1]), &(inteval->stack[((hsi*119700+899580)*1+lsi)*1]), &(inteval->stack[((hsi*107730+14616999)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+14292444)*1+lsi)*1]), &(inteval->stack[((hsi*179550+14112894)*1+lsi)*1]), &(inteval->stack[((hsi*160650+13614144)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+14533419)*1+lsi)*1]), &(inteval->stack[((hsi*240975+14292444)*1+lsi)*1]), &(inteval->stack[((hsi*214200+13898694)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*299880+14533419)*1+lsi)*1]), &(inteval->stack[((hsi*264600+15726324)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+13885044)*1+lsi)*1]), &(inteval->stack[((hsi*352800+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*308700+15990924)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+15354939)*1+lsi)*1]), &(inteval->stack[((hsi*396900+13885044)*1+lsi)*1]), &(inteval->stack[((hsi*343980+15010959)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*429975+15354939)*1+lsi)*1]), &(inteval->stack[((hsi*368550+16299624)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+13982694)*1+lsi)*1]), &(inteval->stack[((hsi*450450+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*381150+16668174)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+14440074)*1+lsi)*1]), &(inteval->stack[((hsi*457380+13982694)*1+lsi)*1]), &(inteval->stack[((hsi*396396+12116544)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+15629262)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+14440074)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+12512940)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*10920+871380)*1+lsi)*1]), &(inteval->stack[((hsi*9360+882300)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+899580)*1+lsi)*1]), &(inteval->stack[((hsi*12600+858780)*1+lsi)*1]), &(inteval->stack[((hsi*10920+871380)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+13560324)*1+lsi)*1]), &(inteval->stack[((hsi*32760+899580)*1+lsi)*1]), &(inteval->stack[((hsi*28080+13532244)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*14400+844380)*1+lsi)*1]), &(inteval->stack[((hsi*12600+858780)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+932340)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*32760+899580)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+13616484)*1+lsi)*1]), &(inteval->stack[((hsi*65520+932340)*1+lsi)*1]), &(inteval->stack[((hsi*56160+13560324)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+12154344)*1+lsi)*1]), &(inteval->stack[((hsi*16320+828060)*1+lsi)*1]), &(inteval->stack[((hsi*14400+844380)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+997860)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12154344)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12116544)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+12197544)*1+lsi)*1]), &(inteval->stack[((hsi*75600+997860)*1+lsi)*1]), &(inteval->stack[((hsi*65520+932340)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+13710084)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12197544)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13616484)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+1073460)*1+lsi)*1]), &(inteval->stack[((hsi*18360+809700)*1+lsi)*1]), &(inteval->stack[((hsi*16320+828060)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+12306744)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1073460)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12154344)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+1122420)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12306744)*1+lsi)*1]), &(inteval->stack[((hsi*75600+997860)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+899580)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1122420)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12197544)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*163800+899580)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13710084)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*20520+789180)*1+lsi)*1]), &(inteval->stack[((hsi*18360+809700)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+12171624)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1073460)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+17864430)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12171624)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12306744)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+12269544)*1+lsi)*1]), &(inteval->stack[((hsi*144000+17864430)*1+lsi)*1]), &(inteval->stack[((hsi*126000+1122420)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+1063380)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12269544)*1+lsi)*1]), &(inteval->stack[((hsi*163800+899580)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+18008430)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1063380)*1+lsi)*1]), &(inteval->stack[((hsi*196560+17667870)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+899580)*1+lsi)*1]), &(inteval->stack[((hsi*22800+766380)*1+lsi)*1]), &(inteval->stack[((hsi*20520+789180)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+13850484)*1+lsi)*1]), &(inteval->stack[((hsi*61560+899580)*1+lsi)*1]), &(inteval->stack[((hsi*55080+12116544)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+18270510)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13850484)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12171624)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+18433710)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18270510)*1+lsi)*1]), &(inteval->stack[((hsi*144000+17864430)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+18649710)*1+lsi)*1]), &(inteval->stack[((hsi*216000+18433710)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12269544)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18649710)*1+lsi)*1]), &(inteval->stack[((hsi*229320+1063380)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+961140)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*262080+18008430)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+17864430)*1+lsi)*1]), &(inteval->stack[((hsi*25200+741180)*1+lsi)*1]), &(inteval->stack[((hsi*22800+766380)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+18914310)*1+lsi)*1]), &(inteval->stack[((hsi*68400+17864430)*1+lsi)*1]), &(inteval->stack[((hsi*61560+899580)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+19037430)*1+lsi)*1]), &(inteval->stack[((hsi*123120+18914310)*1+lsi)*1]), &(inteval->stack[((hsi*110160+13850484)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+19221030)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19037430)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18270510)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+19465830)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19221030)*1+lsi)*1]), &(inteval->stack[((hsi*216000+18433710)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+18270510)*1+lsi)*1]), &(inteval->stack[((hsi*302400+19465830)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18649710)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+19768230)*1+lsi)*1]), &(inteval->stack[((hsi*352800+18270510)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12116544)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+20161350)*1+lsi)*1]), &(inteval->stack[((hsi*393120+19768230)*1+lsi)*1]), &(inteval->stack[((hsi*336960+961140)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*9360+882300)*1+lsi)*1]), &(inteval->stack[((hsi*7920+891660)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+12140304)*1+lsi)*1]), &(inteval->stack[((hsi*28080+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*23760+12116544)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+12187824)*1+lsi)*1]), &(inteval->stack[((hsi*56160+13560324)*1+lsi)*1]), &(inteval->stack[((hsi*47520+12140304)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+18623310)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13616484)*1+lsi)*1]), &(inteval->stack[((hsi*79200+12187824)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13710084)*1+lsi)*1]), &(inteval->stack[((hsi*118800+18623310)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*196560+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*166320+12116544)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*262080+18008430)*1+lsi)*1]), &(inteval->stack[((hsi*221760+13532244)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*336960+961140)*1+lsi)*1]), &(inteval->stack[((hsi*285120+12116544)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+766380)*1+lsi)*1]), &(inteval->stack[((hsi*421200+20161350)*1+lsi)*1]), &(inteval->stack[((hsi*356400+13532244)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*27720+713460)*1+lsi)*1]), &(inteval->stack[((hsi*25200+741180)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*75600+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*68400+17864430)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*136800+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*123120+18914310)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*205200+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*183600+19037430)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*275400+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19221030)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+18623310)*1+lsi)*1]), &(inteval->stack[((hsi*342720+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*302400+19465830)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+19026510)*1+lsi)*1]), &(inteval->stack[((hsi*403200+18623310)*1+lsi)*1]), &(inteval->stack[((hsi*352800+18270510)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*453600+19026510)*1+lsi)*1]), &(inteval->stack[((hsi*393120+19768230)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+18159270)*1+lsi)*1]), &(inteval->stack[((hsi*491400+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*421200+20161350)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+18674070)*1+lsi)*1]), &(inteval->stack[((hsi*514800+18159270)*1+lsi)*1]), &(inteval->stack[((hsi*435600+766380)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+19196790)*1+lsi)*1]), &(inteval->stack[((hsi*522720+18674070)*1+lsi)*1]), &(inteval->stack[((hsi*457380+13982694)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+20568930)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+19196790)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+14440074)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+22947306)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+20568930)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+15629262)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*12376+681500)*1+lsi)*1]), &(inteval->stack[((hsi*10608+693876)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+13564068)*1+lsi)*1]), &(inteval->stack[((hsi*14280+667220)*1+lsi)*1]), &(inteval->stack[((hsi*12376+681500)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+13601196)*1+lsi)*1]), &(inteval->stack[((hsi*37128+13564068)*1+lsi)*1]), &(inteval->stack[((hsi*31824+13532244)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+13664844)*1+lsi)*1]), &(inteval->stack[((hsi*16320+650900)*1+lsi)*1]), &(inteval->stack[((hsi*14280+667220)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+13707684)*1+lsi)*1]), &(inteval->stack[((hsi*42840+13664844)*1+lsi)*1]), &(inteval->stack[((hsi*37128+13564068)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+13781940)*1+lsi)*1]), &(inteval->stack[((hsi*74256+13707684)*1+lsi)*1]), &(inteval->stack[((hsi*63648+13601196)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+13888020)*1+lsi)*1]), &(inteval->stack[((hsi*18496+632404)*1+lsi)*1]), &(inteval->stack[((hsi*16320+650900)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+13936980)*1+lsi)*1]), &(inteval->stack[((hsi*48960+13888020)*1+lsi)*1]), &(inteval->stack[((hsi*42840+13664844)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+14022660)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13936980)*1+lsi)*1]), &(inteval->stack[((hsi*74256+13707684)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+14146420)*1+lsi)*1]), &(inteval->stack[((hsi*123760+14022660)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13781940)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+14305540)*1+lsi)*1]), &(inteval->stack[((hsi*20808+611596)*1+lsi)*1]), &(inteval->stack[((hsi*18496+632404)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+14361028)*1+lsi)*1]), &(inteval->stack[((hsi*55488+14305540)*1+lsi)*1]), &(inteval->stack[((hsi*48960+13888020)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+14458948)*1+lsi)*1]), &(inteval->stack[((hsi*97920+14361028)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13936980)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+14601748)*1+lsi)*1]), &(inteval->stack[((hsi*142800+14458948)*1+lsi)*1]), &(inteval->stack[((hsi*123760+14022660)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14601748)*1+lsi)*1]), &(inteval->stack[((hsi*159120+14146420)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+14787388)*1+lsi)*1]), &(inteval->stack[((hsi*23256+588340)*1+lsi)*1]), &(inteval->stack[((hsi*20808+611596)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+17890638)*1+lsi)*1]), &(inteval->stack[((hsi*62424+14787388)*1+lsi)*1]), &(inteval->stack[((hsi*55488+14305540)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+14849812)*1+lsi)*1]), &(inteval->stack[((hsi*110976+17890638)*1+lsi)*1]), &(inteval->stack[((hsi*97920+14361028)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+18001614)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14849812)*1+lsi)*1]), &(inteval->stack[((hsi*142800+14458948)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+15013012)*1+lsi)*1]), &(inteval->stack[((hsi*214200+18001614)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14601748)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+713460)*1+lsi)*1]), &(inteval->stack[((hsi*259896+15013012)*1+lsi)*1]), &(inteval->stack[((hsi*222768+17667870)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+14305540)*1+lsi)*1]), &(inteval->stack[((hsi*25840+562500)*1+lsi)*1]), &(inteval->stack[((hsi*23256+588340)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+18215814)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14305540)*1+lsi)*1]), &(inteval->stack[((hsi*62424+14787388)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+14375308)*1+lsi)*1]), &(inteval->stack[((hsi*124848+18215814)*1+lsi)*1]), &(inteval->stack[((hsi*110976+17890638)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*184960+14375308)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14849812)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+14560268)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*214200+18001614)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+15272908)*1+lsi)*1]), &(inteval->stack[((hsi*299880+14560268)*1+lsi)*1]), &(inteval->stack[((hsi*259896+15013012)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+14860148)*1+lsi)*1]), &(inteval->stack[((hsi*346528+15272908)*1+lsi)*1]), &(inteval->stack[((hsi*297024+713460)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+18340662)*1+lsi)*1]), &(inteval->stack[((hsi*28560+533940)*1+lsi)*1]), &(inteval->stack[((hsi*25840+562500)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+17890638)*1+lsi)*1]), &(inteval->stack[((hsi*77520+18340662)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14305540)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+1010484)*1+lsi)*1]), &(inteval->stack[((hsi*139536+17890638)*1+lsi)*1]), &(inteval->stack[((hsi*124848+18215814)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+18030174)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1010484)*1+lsi)*1]), &(inteval->stack[((hsi*184960+14375308)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*277440+18030174)*1+lsi)*1]), &(inteval->stack[((hsi*244800+12116544)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+26687706)*1+lsi)*1]), &(inteval->stack[((hsi*342720+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*299880+14560268)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+14305540)*1+lsi)*1]), &(inteval->stack[((hsi*399840+26687706)*1+lsi)*1]), &(inteval->stack[((hsi*346528+15272908)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+27087546)*1+lsi)*1]), &(inteval->stack[((hsi*445536+14305540)*1+lsi)*1]), &(inteval->stack[((hsi*381888+14860148)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*10608+693876)*1+lsi)*1]), &(inteval->stack[((hsi*8976+704484)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+15242036)*1+lsi)*1]), &(inteval->stack[((hsi*31824+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*26928+12116544)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*63648+13601196)*1+lsi)*1]), &(inteval->stack[((hsi*53856+15242036)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+15242036)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13781940)*1+lsi)*1]), &(inteval->stack[((hsi*89760+12116544)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*159120+14146420)*1+lsi)*1]), &(inteval->stack[((hsi*134640+15242036)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+13720740)*1+lsi)*1]), &(inteval->stack[((hsi*222768+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*188496+13532244)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*297024+713460)*1+lsi)*1]), &(inteval->stack[((hsi*251328+13720740)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*381888+14860148)*1+lsi)*1]), &(inteval->stack[((hsi*323136+12116544)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+14751076)*1+lsi)*1]), &(inteval->stack[((hsi*477360+27087546)*1+lsi)*1]), &(inteval->stack[((hsi*403920+13532244)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*31416+502524)*1+lsi)*1]), &(inteval->stack[((hsi*28560+533940)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+13617924)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*77520+18340662)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+13772964)*1+lsi)*1]), &(inteval->stack[((hsi*155040+13617924)*1+lsi)*1]), &(inteval->stack[((hsi*139536+17890638)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+502524)*1+lsi)*1]), &(inteval->stack[((hsi*232560+13772964)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1010484)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*312120+502524)*1+lsi)*1]), &(inteval->stack[((hsi*277440+18030174)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*388416+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*342720+26344986)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+502524)*1+lsi)*1]), &(inteval->stack[((hsi*456960+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*399840+26687706)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*514080+502524)*1+lsi)*1]), &(inteval->stack[((hsi*445536+14305540)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*556920+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*477360+27087546)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*583440+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*493680+14751076)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*592416+17667870)*1+lsi)*1]), &(inteval->stack[((hsi*522720+18674070)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+13532244)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+19196790)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+29089266)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+20568930)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+33053226)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+29089266)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+22947306)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*13923+466569)*1+lsi)*1]), &(inteval->stack[((hsi*11934+480492)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+18296088)*1+lsi)*1]), &(inteval->stack[((hsi*16065+450504)*1+lsi)*1]), &(inteval->stack[((hsi*13923+466569)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+18337857)*1+lsi)*1]), &(inteval->stack[((hsi*41769+18296088)*1+lsi)*1]), &(inteval->stack[((hsi*35802+18260286)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+18409461)*1+lsi)*1]), &(inteval->stack[((hsi*18360+432144)*1+lsi)*1]), &(inteval->stack[((hsi*16065+450504)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+18457656)*1+lsi)*1]), &(inteval->stack[((hsi*48195+18409461)*1+lsi)*1]), &(inteval->stack[((hsi*41769+18296088)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+18541194)*1+lsi)*1]), &(inteval->stack[((hsi*83538+18457656)*1+lsi)*1]), &(inteval->stack[((hsi*71604+18337857)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+18660534)*1+lsi)*1]), &(inteval->stack[((hsi*20808+411336)*1+lsi)*1]), &(inteval->stack[((hsi*18360+432144)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+18715614)*1+lsi)*1]), &(inteval->stack[((hsi*55080+18660534)*1+lsi)*1]), &(inteval->stack[((hsi*48195+18409461)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+18812004)*1+lsi)*1]), &(inteval->stack[((hsi*96390+18715614)*1+lsi)*1]), &(inteval->stack[((hsi*83538+18457656)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+18951234)*1+lsi)*1]), &(inteval->stack[((hsi*139230+18812004)*1+lsi)*1]), &(inteval->stack[((hsi*119340+18541194)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+19130244)*1+lsi)*1]), &(inteval->stack[((hsi*23409+387927)*1+lsi)*1]), &(inteval->stack[((hsi*20808+411336)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+19192668)*1+lsi)*1]), &(inteval->stack[((hsi*62424+19130244)*1+lsi)*1]), &(inteval->stack[((hsi*55080+18660534)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+19302828)*1+lsi)*1]), &(inteval->stack[((hsi*110160+19192668)*1+lsi)*1]), &(inteval->stack[((hsi*96390+18715614)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+19463478)*1+lsi)*1]), &(inteval->stack[((hsi*160650+19302828)*1+lsi)*1]), &(inteval->stack[((hsi*139230+18812004)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+19672323)*1+lsi)*1]), &(inteval->stack[((hsi*208845+19463478)*1+lsi)*1]), &(inteval->stack[((hsi*179010+18951234)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+19922937)*1+lsi)*1]), &(inteval->stack[((hsi*26163+361764)*1+lsi)*1]), &(inteval->stack[((hsi*23409+387927)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+19993164)*1+lsi)*1]), &(inteval->stack[((hsi*70227+19922937)*1+lsi)*1]), &(inteval->stack[((hsi*62424+19130244)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+20118012)*1+lsi)*1]), &(inteval->stack[((hsi*124848+19993164)*1+lsi)*1]), &(inteval->stack[((hsi*110160+19192668)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+20301612)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20118012)*1+lsi)*1]), &(inteval->stack[((hsi*160650+19302828)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+20542587)*1+lsi)*1]), &(inteval->stack[((hsi*240975+20301612)*1+lsi)*1]), &(inteval->stack[((hsi*208845+19463478)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+20834970)*1+lsi)*1]), &(inteval->stack[((hsi*292383+20542587)*1+lsi)*1]), &(inteval->stack[((hsi*250614+19672323)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+21169122)*1+lsi)*1]), &(inteval->stack[((hsi*29070+332694)*1+lsi)*1]), &(inteval->stack[((hsi*26163+361764)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+21247611)*1+lsi)*1]), &(inteval->stack[((hsi*78489+21169122)*1+lsi)*1]), &(inteval->stack[((hsi*70227+19922937)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+21388065)*1+lsi)*1]), &(inteval->stack[((hsi*140454+21247611)*1+lsi)*1]), &(inteval->stack[((hsi*124848+19993164)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+21596145)*1+lsi)*1]), &(inteval->stack[((hsi*208080+21388065)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20118012)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+21871545)*1+lsi)*1]), &(inteval->stack[((hsi*275400+21596145)*1+lsi)*1]), &(inteval->stack[((hsi*240975+20301612)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+502524)*1+lsi)*1]), &(inteval->stack[((hsi*337365+21871545)*1+lsi)*1]), &(inteval->stack[((hsi*292383+20542587)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+19922937)*1+lsi)*1]), &(inteval->stack[((hsi*389844+502524)*1+lsi)*1]), &(inteval->stack[((hsi*334152+20834970)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+22208910)*1+lsi)*1]), &(inteval->stack[((hsi*32130+300564)*1+lsi)*1]), &(inteval->stack[((hsi*29070+332694)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+22296120)*1+lsi)*1]), &(inteval->stack[((hsi*87210+22208910)*1+lsi)*1]), &(inteval->stack[((hsi*78489+21169122)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+19130244)*1+lsi)*1]), &(inteval->stack[((hsi*156978+22296120)*1+lsi)*1]), &(inteval->stack[((hsi*140454+21247611)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+15100404)*1+lsi)*1]), &(inteval->stack[((hsi*234090+19130244)*1+lsi)*1]), &(inteval->stack[((hsi*208080+21388065)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+22453098)*1+lsi)*1]), &(inteval->stack[((hsi*312120+15100404)*1+lsi)*1]), &(inteval->stack[((hsi*275400+21596145)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+21169122)*1+lsi)*1]), &(inteval->stack[((hsi*385560+22453098)*1+lsi)*1]), &(inteval->stack[((hsi*337365+21871545)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+21618942)*1+lsi)*1]), &(inteval->stack[((hsi*449820+21169122)*1+lsi)*1]), &(inteval->stack[((hsi*389844+502524)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+502524)*1+lsi)*1]), &(inteval->stack[((hsi*501228+21618942)*1+lsi)*1]), &(inteval->stack[((hsi*429624+19922937)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+20352561)*1+lsi)*1]), &(inteval->stack[((hsi*11934+480492)*1+lsi)*1]), &(inteval->stack[((hsi*10098+492426)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+20382855)*1+lsi)*1]), &(inteval->stack[((hsi*35802+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*30294+20352561)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+12116544)*1+lsi)*1]), &(inteval->stack[((hsi*71604+18337857)*1+lsi)*1]), &(inteval->stack[((hsi*60588+20382855)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+20352561)*1+lsi)*1]), &(inteval->stack[((hsi*119340+18541194)*1+lsi)*1]), &(inteval->stack[((hsi*100980+12116544)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*179010+18951234)*1+lsi)*1]), &(inteval->stack[((hsi*151470+20352561)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+18472344)*1+lsi)*1]), &(inteval->stack[((hsi*250614+19672323)*1+lsi)*1]), &(inteval->stack[((hsi*212058+18260286)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+19364334)*1+lsi)*1]), &(inteval->stack[((hsi*334152+20834970)*1+lsi)*1]), &(inteval->stack[((hsi*282744+18472344)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*429624+19922937)*1+lsi)*1]), &(inteval->stack[((hsi*363528+19364334)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+19364334)*1+lsi)*1]), &(inteval->stack[((hsi*537030+502524)*1+lsi)*1]), &(inteval->stack[((hsi*454410+18260286)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*35343+265221)*1+lsi)*1]), &(inteval->stack[((hsi*32130+300564)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+20016114)*1+lsi)*1]), &(inteval->stack[((hsi*96390+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*87210+22208910)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+20190534)*1+lsi)*1]), &(inteval->stack[((hsi*174420+20016114)*1+lsi)*1]), &(inteval->stack[((hsi*156978+22296120)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*261630+20190534)*1+lsi)*1]), &(inteval->stack[((hsi*234090+19130244)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*351135+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*312120+15100404)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*436968+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*385560+22453098)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*514080+18260286)*1+lsi)*1]), &(inteval->stack[((hsi*449820+21169122)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+20498064)*1+lsi)*1]), &(inteval->stack[((hsi*578340+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*501228+21618942)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+21124599)*1+lsi)*1]), &(inteval->stack[((hsi*626535+20498064)*1+lsi)*1]), &(inteval->stack[((hsi*537030+502524)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*656370+21124599)*1+lsi)*1]), &(inteval->stack[((hsi*555390+19364334)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+20586192)*1+lsi)*1]), &(inteval->stack[((hsi*666468+19919724)*1+lsi)*1]), &(inteval->stack[((hsi*592416+17667870)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+38149746)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+20586192)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+13532244)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+41286066)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+38149746)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+26344986)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+45859866)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+41286066)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+29089266)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+51805806)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+45859866)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+33053226)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1411410)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1417416)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+26360430)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1404480)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1411410)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+26378448)*1+lsi)*1]), &(inteval->stack[((hsi*18018+26360430)*1+lsi)*1]), &(inteval->stack[((hsi*15444+26344986)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+26409336)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1396560)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1404480)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+26430126)*1+lsi)*1]), &(inteval->stack[((hsi*20790+26409336)*1+lsi)*1]), &(inteval->stack[((hsi*18018+26360430)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+26466162)*1+lsi)*1]), &(inteval->stack[((hsi*36036+26430126)*1+lsi)*1]), &(inteval->stack[((hsi*30888+26378448)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+26517642)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1387584)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1396560)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+26541402)*1+lsi)*1]), &(inteval->stack[((hsi*23760+26517642)*1+lsi)*1]), &(inteval->stack[((hsi*20790+26409336)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+26582982)*1+lsi)*1]), &(inteval->stack[((hsi*41580+26541402)*1+lsi)*1]), &(inteval->stack[((hsi*36036+26430126)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+26643042)*1+lsi)*1]), &(inteval->stack[((hsi*60060+26582982)*1+lsi)*1]), &(inteval->stack[((hsi*51480+26466162)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+26720262)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1377486)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1387584)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+26747190)*1+lsi)*1]), &(inteval->stack[((hsi*26928+26720262)*1+lsi)*1]), &(inteval->stack[((hsi*23760+26517642)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+26794710)*1+lsi)*1]), &(inteval->stack[((hsi*47520+26747190)*1+lsi)*1]), &(inteval->stack[((hsi*41580+26541402)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+26864010)*1+lsi)*1]), &(inteval->stack[((hsi*69300+26794710)*1+lsi)*1]), &(inteval->stack[((hsi*60060+26582982)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+26954100)*1+lsi)*1]), &(inteval->stack[((hsi*90090+26864010)*1+lsi)*1]), &(inteval->stack[((hsi*77220+26643042)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+27062208)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1366200)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1377486)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+27092502)*1+lsi)*1]), &(inteval->stack[((hsi*30294+27062208)*1+lsi)*1]), &(inteval->stack[((hsi*26928+26720262)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+27146358)*1+lsi)*1]), &(inteval->stack[((hsi*53856+27092502)*1+lsi)*1]), &(inteval->stack[((hsi*47520+26747190)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+27225558)*1+lsi)*1]), &(inteval->stack[((hsi*79200+27146358)*1+lsi)*1]), &(inteval->stack[((hsi*69300+26794710)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+27329508)*1+lsi)*1]), &(inteval->stack[((hsi*103950+27225558)*1+lsi)*1]), &(inteval->stack[((hsi*90090+26864010)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+27455634)*1+lsi)*1]), &(inteval->stack[((hsi*126126+27329508)*1+lsi)*1]), &(inteval->stack[((hsi*108108+26954100)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+27599778)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1353660)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1366200)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+27633636)*1+lsi)*1]), &(inteval->stack[((hsi*33858+27599778)*1+lsi)*1]), &(inteval->stack[((hsi*30294+27062208)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+27694224)*1+lsi)*1]), &(inteval->stack[((hsi*60588+27633636)*1+lsi)*1]), &(inteval->stack[((hsi*53856+27092502)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+27783984)*1+lsi)*1]), &(inteval->stack[((hsi*89760+27694224)*1+lsi)*1]), &(inteval->stack[((hsi*79200+27146358)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+27902784)*1+lsi)*1]), &(inteval->stack[((hsi*118800+27783984)*1+lsi)*1]), &(inteval->stack[((hsi*103950+27225558)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+28048314)*1+lsi)*1]), &(inteval->stack[((hsi*145530+27902784)*1+lsi)*1]), &(inteval->stack[((hsi*126126+27329508)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+28216482)*1+lsi)*1]), &(inteval->stack[((hsi*168168+28048314)*1+lsi)*1]), &(inteval->stack[((hsi*144144+27455634)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+28401810)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1339800)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1353660)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+28439430)*1+lsi)*1]), &(inteval->stack[((hsi*37620+28401810)*1+lsi)*1]), &(inteval->stack[((hsi*33858+27599778)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+28507146)*1+lsi)*1]), &(inteval->stack[((hsi*67716+28439430)*1+lsi)*1]), &(inteval->stack[((hsi*60588+27633636)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+28608126)*1+lsi)*1]), &(inteval->stack[((hsi*100980+28507146)*1+lsi)*1]), &(inteval->stack[((hsi*89760+27694224)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+28742766)*1+lsi)*1]), &(inteval->stack[((hsi*134640+28608126)*1+lsi)*1]), &(inteval->stack[((hsi*118800+27783984)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+28909086)*1+lsi)*1]), &(inteval->stack[((hsi*166320+28742766)*1+lsi)*1]), &(inteval->stack[((hsi*145530+27902784)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+29103126)*1+lsi)*1]), &(inteval->stack[((hsi*194040+28909086)*1+lsi)*1]), &(inteval->stack[((hsi*168168+28048314)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+29319342)*1+lsi)*1]), &(inteval->stack[((hsi*216216+29103126)*1+lsi)*1]), &(inteval->stack[((hsi*185328+28216482)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+29551002)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1417416)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1422564)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+29564070)*1+lsi)*1]), &(inteval->stack[((hsi*15444+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*13068+29551002)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+29590206)*1+lsi)*1]), &(inteval->stack[((hsi*30888+26378448)*1+lsi)*1]), &(inteval->stack[((hsi*26136+29564070)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+29633766)*1+lsi)*1]), &(inteval->stack[((hsi*51480+26466162)*1+lsi)*1]), &(inteval->stack[((hsi*43560+29590206)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+29699106)*1+lsi)*1]), &(inteval->stack[((hsi*77220+26643042)*1+lsi)*1]), &(inteval->stack[((hsi*65340+29633766)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+29790582)*1+lsi)*1]), &(inteval->stack[((hsi*108108+26954100)*1+lsi)*1]), &(inteval->stack[((hsi*91476+29699106)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+29912550)*1+lsi)*1]), &(inteval->stack[((hsi*144144+27455634)*1+lsi)*1]), &(inteval->stack[((hsi*121968+29790582)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+30069366)*1+lsi)*1]), &(inteval->stack[((hsi*185328+28216482)*1+lsi)*1]), &(inteval->stack[((hsi*156816+29912550)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+30265386)*1+lsi)*1]), &(inteval->stack[((hsi*231660+29319342)*1+lsi)*1]), &(inteval->stack[((hsi*196020+30069366)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+30504966)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1324554)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1339800)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+30546546)*1+lsi)*1]), &(inteval->stack[((hsi*41580+30504966)*1+lsi)*1]), &(inteval->stack[((hsi*37620+28401810)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+30621786)*1+lsi)*1]), &(inteval->stack[((hsi*75240+30546546)*1+lsi)*1]), &(inteval->stack[((hsi*67716+28439430)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+30734646)*1+lsi)*1]), &(inteval->stack[((hsi*112860+30621786)*1+lsi)*1]), &(inteval->stack[((hsi*100980+28507146)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*151470+30734646)*1+lsi)*1]), &(inteval->stack[((hsi*134640+28608126)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+30504966)*1+lsi)*1]), &(inteval->stack[((hsi*188496+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*166320+28742766)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*221760+30504966)*1+lsi)*1]), &(inteval->stack[((hsi*194040+28909086)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+30504966)*1+lsi)*1]), &(inteval->stack[((hsi*249480+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*216216+29103126)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*270270+30504966)*1+lsi)*1]), &(inteval->stack[((hsi*231660+29319342)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+26628126)*1+lsi)*1]), &(inteval->stack[((hsi*283140+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*239580+30265386)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+26915622)*1+lsi)*1]), &(inteval->stack[((hsi*339768+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*287496+26628126)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+27778110)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+12512940)*1+lsi)*1]), &(inteval->stack[((hsi*862488+26915622)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+15629262)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+27778110)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+26344986)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+22947306)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+11776776)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+33053226)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+26344986)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+22363440)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+51805806)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+11776776)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*15561+225036)*1+lsi)*1]), &(inteval->stack[((hsi*13338+240597)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+11816790)*1+lsi)*1]), &(inteval->stack[((hsi*17955+207081)*1+lsi)*1]), &(inteval->stack[((hsi*15561+225036)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+11863473)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11816790)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11776776)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+11943501)*1+lsi)*1]), &(inteval->stack[((hsi*20520+186561)*1+lsi)*1]), &(inteval->stack[((hsi*17955+207081)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+11997366)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11943501)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11816790)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+12090732)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11997366)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11863473)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*23256+163305)*1+lsi)*1]), &(inteval->stack[((hsi*20520+186561)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+12224112)*1+lsi)*1]), &(inteval->stack[((hsi*61560+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11943501)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+30474888)*1+lsi)*1]), &(inteval->stack[((hsi*107730+12224112)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11997366)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+12331842)*1+lsi)*1]), &(inteval->stack[((hsi*155610+30474888)*1+lsi)*1]), &(inteval->stack[((hsi*133380+12090732)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+30630498)*1+lsi)*1]), &(inteval->stack[((hsi*26163+137142)*1+lsi)*1]), &(inteval->stack[((hsi*23256+163305)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+30700266)*1+lsi)*1]), &(inteval->stack[((hsi*69768+30630498)*1+lsi)*1]), &(inteval->stack[((hsi*61560+30413328)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+12531912)*1+lsi)*1]), &(inteval->stack[((hsi*123120+30700266)*1+lsi)*1]), &(inteval->stack[((hsi*107730+12224112)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+30823386)*1+lsi)*1]), &(inteval->stack[((hsi*179550+12531912)*1+lsi)*1]), &(inteval->stack[((hsi*155610+30474888)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+12711462)*1+lsi)*1]), &(inteval->stack[((hsi*233415+30823386)*1+lsi)*1]), &(inteval->stack[((hsi*200070+12331842)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+31056801)*1+lsi)*1]), &(inteval->stack[((hsi*29241+107901)*1+lsi)*1]), &(inteval->stack[((hsi*26163+137142)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+31135290)*1+lsi)*1]), &(inteval->stack[((hsi*78489+31056801)*1+lsi)*1]), &(inteval->stack[((hsi*69768+30630498)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+12991560)*1+lsi)*1]), &(inteval->stack[((hsi*139536+31135290)*1+lsi)*1]), &(inteval->stack[((hsi*123120+30700266)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+31274826)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12991560)*1+lsi)*1]), &(inteval->stack[((hsi*179550+12531912)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+13196760)*1+lsi)*1]), &(inteval->stack[((hsi*269325+31274826)*1+lsi)*1]), &(inteval->stack[((hsi*233415+30823386)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+31544151)*1+lsi)*1]), &(inteval->stack[((hsi*326781+13196760)*1+lsi)*1]), &(inteval->stack[((hsi*280098+12711462)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+13523541)*1+lsi)*1]), &(inteval->stack[((hsi*32490+75411)*1+lsi)*1]), &(inteval->stack[((hsi*29241+107901)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+13611264)*1+lsi)*1]), &(inteval->stack[((hsi*87723+13523541)*1+lsi)*1]), &(inteval->stack[((hsi*78489+31056801)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+31917615)*1+lsi)*1]), &(inteval->stack[((hsi*156978+13611264)*1+lsi)*1]), &(inteval->stack[((hsi*139536+31135290)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+13768242)*1+lsi)*1]), &(inteval->stack[((hsi*232560+31917615)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12991560)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+32150175)*1+lsi)*1]), &(inteval->stack[((hsi*307800+13768242)*1+lsi)*1]), &(inteval->stack[((hsi*269325+31274826)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+14076042)*1+lsi)*1]), &(inteval->stack[((hsi*377055+32150175)*1+lsi)*1]), &(inteval->stack[((hsi*326781+13196760)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+32527230)*1+lsi)*1]), &(inteval->stack[((hsi*435708+14076042)*1+lsi)*1]), &(inteval->stack[((hsi*373464+31544151)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+14511750)*1+lsi)*1]), &(inteval->stack[((hsi*35910+39501)*1+lsi)*1]), &(inteval->stack[((hsi*32490+75411)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+14609220)*1+lsi)*1]), &(inteval->stack[((hsi*97470+14511750)*1+lsi)*1]), &(inteval->stack[((hsi*87723+13523541)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+33007398)*1+lsi)*1]), &(inteval->stack[((hsi*175446+14609220)*1+lsi)*1]), &(inteval->stack[((hsi*156978+13611264)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+14784666)*1+lsi)*1]), &(inteval->stack[((hsi*261630+33007398)*1+lsi)*1]), &(inteval->stack[((hsi*232560+31917615)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+33269028)*1+lsi)*1]), &(inteval->stack[((hsi*348840+14784666)*1+lsi)*1]), &(inteval->stack[((hsi*307800+13768242)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+15133506)*1+lsi)*1]), &(inteval->stack[((hsi*430920+33269028)*1+lsi)*1]), &(inteval->stack[((hsi*377055+32150175)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+33699948)*1+lsi)*1]), &(inteval->stack[((hsi*502740+15133506)*1+lsi)*1]), &(inteval->stack[((hsi*435708+14076042)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+15636246)*1+lsi)*1]), &(inteval->stack[((hsi*560196+33699948)*1+lsi)*1]), &(inteval->stack[((hsi*480168+32527230)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+34260144)*1+lsi)*1]), &(inteval->stack[((hsi*13338+240597)*1+lsi)*1]), &(inteval->stack[((hsi*11286+253935)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+34294002)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*33858+34260144)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+34361718)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11863473)*1+lsi)*1]), &(inteval->stack[((hsi*67716+34294002)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*133380+12090732)*1+lsi)*1]), &(inteval->stack[((hsi*112860+34361718)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+34260144)*1+lsi)*1]), &(inteval->stack[((hsi*200070+12331842)*1+lsi)*1]), &(inteval->stack[((hsi*169290+16236456)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*280098+12711462)*1+lsi)*1]), &(inteval->stack[((hsi*237006+34260144)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+34260144)*1+lsi)*1]), &(inteval->stack[((hsi*373464+31544151)*1+lsi)*1]), &(inteval->stack[((hsi*316008+16236456)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*480168+32527230)*1+lsi)*1]), &(inteval->stack[((hsi*406296+34260144)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+34260144)*1+lsi)*1]), &(inteval->stack[((hsi*600210+15636246)*1+lsi)*1]), &(inteval->stack[((hsi*507870+16236456)*1+lsi)*1]),171);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*107730+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*39501+0)*1+lsi)*1]), &(inteval->stack[((hsi*35910+39501)*1+lsi)*1]),171);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*194940+16344186)*1+lsi)*1]), &(inteval->stack[((hsi*107730+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*97470+14511750)*1+lsi)*1]),171);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*292410+16539126)*1+lsi)*1]), &(inteval->stack[((hsi*194940+16344186)*1+lsi)*1]), &(inteval->stack[((hsi*175446+14609220)*1+lsi)*1]),171);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*392445+34880874)*1+lsi)*1]), &(inteval->stack[((hsi*292410+16539126)*1+lsi)*1]), &(inteval->stack[((hsi*261630+33007398)*1+lsi)*1]),171);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*488376+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*392445+34880874)*1+lsi)*1]), &(inteval->stack[((hsi*348840+14784666)*1+lsi)*1]),171);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*574560+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*488376+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*430920+33269028)*1+lsi)*1]),171);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*646380+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*574560+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*502740+15133506)*1+lsi)*1]),171);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*700245+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*646380+16236456)*1+lsi)*1]), &(inteval->stack[((hsi*560196+33699948)*1+lsi)*1]),171);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*733590+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*700245+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*600210+15636246)*1+lsi)*1]),171);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*744876+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*733590+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*620730+34260144)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1999404+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*744876+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*666468+19919724)*1+lsi)*1]),4356);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*3554496+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+20586192)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*5227200+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+38149746)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*6860700+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+41286066)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*8324316+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+11776776)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+45859866)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*9513504+38737644)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+30413328)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+51805806)*1+lsi)*1]),4356);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*10349856+1426920)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+38737644)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+22363440)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10349856+1426920)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
