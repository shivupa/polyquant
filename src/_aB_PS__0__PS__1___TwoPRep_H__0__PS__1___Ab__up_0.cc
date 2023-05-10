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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,924396)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*7098+803700)*1+lsi)*1]), &(inteval->stack[((hsi*6084+810798)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+6980064)*1+lsi)*1]), &(inteval->stack[((hsi*8190+795510)*1+lsi)*1]), &(inteval->stack[((hsi*7098+803700)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+7001358)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6980064)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6961812)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+7037862)*1+lsi)*1]), &(inteval->stack[((hsi*9360+786150)*1+lsi)*1]), &(inteval->stack[((hsi*8190+795510)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+7062432)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7037862)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6980064)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+7105020)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7062432)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7001358)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+7165860)*1+lsi)*1]), &(inteval->stack[((hsi*10608+775542)*1+lsi)*1]), &(inteval->stack[((hsi*9360+786150)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+7193940)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7165860)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7037862)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+7243080)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7193940)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7062432)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+7314060)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7243080)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7105020)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+7037862)*1+lsi)*1]), &(inteval->stack[((hsi*11934+763608)*1+lsi)*1]), &(inteval->stack[((hsi*10608+775542)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+7405320)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7037862)*1+lsi)*1]), &(inteval->stack[((hsi*28080+7165860)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+7461480)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7405320)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7193940)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+7543380)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7461480)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7243080)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+7165860)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7543380)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7314060)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+7649850)*1+lsi)*1]), &(inteval->stack[((hsi*13338+750270)*1+lsi)*1]), &(inteval->stack[((hsi*11934+763608)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+7685652)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7649850)*1+lsi)*1]), &(inteval->stack[((hsi*31824+7037862)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+7749300)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7685652)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7405320)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+7842900)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7749300)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7461480)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7965750)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7842900)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7543380)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+7405320)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7965750)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7165860)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+7575672)*1+lsi)*1]), &(inteval->stack[((hsi*14820+735450)*1+lsi)*1]), &(inteval->stack[((hsi*13338+750270)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+8114808)*1+lsi)*1]), &(inteval->stack[((hsi*40014+7575672)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7649850)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+8186412)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8114808)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7685652)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+8292492)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8186412)*1+lsi)*1]), &(inteval->stack[((hsi*93600+7749300)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+7615686)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8292492)*1+lsi)*1]), &(inteval->stack[((hsi*122850+7842900)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+8432892)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7615686)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7965750)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+7787676)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8432892)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7405320)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+8006700)*1+lsi)*1]), &(inteval->stack[((hsi*16380+719070)*1+lsi)*1]), &(inteval->stack[((hsi*14820+735450)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+8631636)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8006700)*1+lsi)*1]), &(inteval->stack[((hsi*40014+7575672)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+8711664)*1+lsi)*1]), &(inteval->stack[((hsi*80028+8631636)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8114808)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+8831004)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8711664)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8186412)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+8051160)*1+lsi)*1]), &(inteval->stack[((hsi*159120+8831004)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8292492)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+8990124)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8051160)*1+lsi)*1]), &(inteval->stack[((hsi*171990+7615686)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+9219444)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8990124)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8432892)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+8247720)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9219444)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7787676)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+7575672)*1+lsi)*1]), &(inteval->stack[((hsi*6084+810798)*1+lsi)*1]), &(inteval->stack[((hsi*5148+816882)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+7591116)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*15444+7575672)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+7622004)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7001358)*1+lsi)*1]), &(inteval->stack[((hsi*30888+7591116)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*60840+7105020)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7622004)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+7575672)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7314060)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6961812)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7165860)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7575672)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+7105956)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7405320)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6961812)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+7291284)*1+lsi)*1]), &(inteval->stack[((hsi*219024+7787676)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7105956)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+7522944)*1+lsi)*1]), &(inteval->stack[((hsi*273780+8247720)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7291284)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*18018+701052)*1+lsi)*1]), &(inteval->stack[((hsi*16380+719070)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+7010952)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8006700)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+7099872)*1+lsi)*1]), &(inteval->stack[((hsi*88920+7010952)*1+lsi)*1]), &(inteval->stack[((hsi*80028+8631636)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+7233252)*1+lsi)*1]), &(inteval->stack[((hsi*133380+7099872)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8711664)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+8521500)*1+lsi)*1]), &(inteval->stack[((hsi*179010+7233252)*1+lsi)*1]), &(inteval->stack[((hsi*159120+8831004)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*222768+8521500)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8051160)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+8521500)*1+lsi)*1]), &(inteval->stack[((hsi*262080+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8990124)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*294840+8521500)*1+lsi)*1]), &(inteval->stack[((hsi*255528+9219444)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+7806084)*1+lsi)*1]), &(inteval->stack[((hsi*319410+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*273780+8247720)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*334620+7806084)*1+lsi)*1]), &(inteval->stack[((hsi*283140+7522944)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]), &(inteval->stack[((hsi*8281+679667)*1+lsi)*1]), &(inteval->stack[((hsi*7098+687948)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+722346)*1+lsi)*1]), &(inteval->stack[((hsi*9555+670112)*1+lsi)*1]), &(inteval->stack[((hsi*8281+679667)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+747189)*1+lsi)*1]), &(inteval->stack[((hsi*24843+722346)*1+lsi)*1]), &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+789777)*1+lsi)*1]), &(inteval->stack[((hsi*10920+659192)*1+lsi)*1]), &(inteval->stack[((hsi*9555+670112)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*28665+789777)*1+lsi)*1]), &(inteval->stack[((hsi*24843+722346)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+7351266)*1+lsi)*1]), &(inteval->stack[((hsi*49686+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*42588+747189)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+7422246)*1+lsi)*1]), &(inteval->stack[((hsi*12376+646816)*1+lsi)*1]), &(inteval->stack[((hsi*10920+659192)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7455006)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7422246)*1+lsi)*1]), &(inteval->stack[((hsi*28665+789777)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7512336)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7455006)*1+lsi)*1]), &(inteval->stack[((hsi*49686+7301580)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+7595146)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7512336)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7351266)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*13923+632893)*1+lsi)*1]), &(inteval->stack[((hsi*12376+646816)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+7701616)*1+lsi)*1]), &(inteval->stack[((hsi*37128+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*32760+7422246)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+7767136)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7701616)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7455006)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+7862686)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7767136)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7512336)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+7422246)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7862686)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7595146)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+7986901)*1+lsi)*1]), &(inteval->stack[((hsi*15561+617332)*1+lsi)*1]), &(inteval->stack[((hsi*13923+632893)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+8028670)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7986901)*1+lsi)*1]), &(inteval->stack[((hsi*37128+7301580)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+8102926)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8028670)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7701616)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8212126)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8102926)*1+lsi)*1]), &(inteval->stack[((hsi*95550+7767136)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+8355451)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8212126)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7862686)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+7701616)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8355451)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7422246)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+7900360)*1+lsi)*1]), &(inteval->stack[((hsi*17290+600042)*1+lsi)*1]), &(inteval->stack[((hsi*15561+617332)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+8529352)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7900360)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7986901)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+8612890)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8529352)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8028670)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+8736650)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8612890)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8102926)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+7947043)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8736650)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8212126)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+8900450)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7947043)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8355451)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+8147698)*1+lsi)*1]), &(inteval->stack[((hsi*231868+8900450)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7701616)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+8403226)*1+lsi)*1]), &(inteval->stack[((hsi*19110+580932)*1+lsi)*1]), &(inteval->stack[((hsi*17290+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+9132318)*1+lsi)*1]), &(inteval->stack[((hsi*51870+8403226)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7900360)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+9225684)*1+lsi)*1]), &(inteval->stack[((hsi*93366+9132318)*1+lsi)*1]), &(inteval->stack[((hsi*83538+8529352)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+9364914)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9225684)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8612890)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+8455096)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9364914)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8736650)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+9550554)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8455096)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7947043)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+9818094)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9550554)*1+lsi)*1]), &(inteval->stack[((hsi*231868+8900450)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+8684416)*1+lsi)*1]), &(inteval->stack[((hsi*298116+9818094)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8147698)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+7900360)*1+lsi)*1]), &(inteval->stack[((hsi*7098+687948)*1+lsi)*1]), &(inteval->stack[((hsi*6006+695046)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+7918378)*1+lsi)*1]), &(inteval->stack[((hsi*21294+701052)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7900360)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+7954414)*1+lsi)*1]), &(inteval->stack[((hsi*42588+747189)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7918378)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+600042)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7351266)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7954414)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+7900360)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7595146)*1+lsi)*1]), &(inteval->stack[((hsi*90090+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+600042)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7422246)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7900360)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7701616)*1+lsi)*1]), &(inteval->stack[((hsi*168168+600042)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+7517796)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8147698)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7301580)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+7788066)*1+lsi)*1]), &(inteval->stack[((hsi*319410+8684416)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7517796)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*21021+559911)*1+lsi)*1]), &(inteval->stack[((hsi*19110+580932)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+7358910)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*51870+8403226)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+8118396)*1+lsi)*1]), &(inteval->stack[((hsi*103740+7358910)*1+lsi)*1]), &(inteval->stack[((hsi*93366+9132318)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*155610+8118396)*1+lsi)*1]), &(inteval->stack[((hsi*139230+9225684)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+9003826)*1+lsi)*1]), &(inteval->stack[((hsi*208845+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9364914)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*259896+9003826)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8455096)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+8118396)*1+lsi)*1]), &(inteval->stack[((hsi*305760+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9550554)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+9003826)*1+lsi)*1]), &(inteval->stack[((hsi*343980+8118396)*1+lsi)*1]), &(inteval->stack[((hsi*298116+9818094)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+8118396)*1+lsi)*1]), &(inteval->stack[((hsi*372645+9003826)*1+lsi)*1]), &(inteval->stack[((hsi*319410+8684416)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*390390+8118396)*1+lsi)*1]), &(inteval->stack[((hsi*330330+7788066)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+7697976)*1+lsi)*1]), &(inteval->stack[((hsi*396396+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*339768+6961812)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+559911)*1+lsi)*1]), &(inteval->stack[((hsi*9555+535236)*1+lsi)*1]), &(inteval->stack[((hsi*8190+544791)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+584481)*1+lsi)*1]), &(inteval->stack[((hsi*11025+524211)*1+lsi)*1]), &(inteval->stack[((hsi*9555+535236)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+613146)*1+lsi)*1]), &(inteval->stack[((hsi*28665+584481)*1+lsi)*1]), &(inteval->stack[((hsi*24570+559911)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+662286)*1+lsi)*1]), &(inteval->stack[((hsi*12600+511611)*1+lsi)*1]), &(inteval->stack[((hsi*11025+524211)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+695361)*1+lsi)*1]), &(inteval->stack[((hsi*33075+662286)*1+lsi)*1]), &(inteval->stack[((hsi*28665+584481)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*57330+695361)*1+lsi)*1]), &(inteval->stack[((hsi*49140+613146)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+752691)*1+lsi)*1]), &(inteval->stack[((hsi*14280+497331)*1+lsi)*1]), &(inteval->stack[((hsi*12600+511611)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+8799180)*1+lsi)*1]), &(inteval->stack[((hsi*37800+752691)*1+lsi)*1]), &(inteval->stack[((hsi*33075+662286)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8865330)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8799180)*1+lsi)*1]), &(inteval->stack[((hsi*57330+695361)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+8960880)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8865330)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8717280)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+662286)*1+lsi)*1]), &(inteval->stack[((hsi*16065+481266)*1+lsi)*1]), &(inteval->stack[((hsi*14280+497331)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+9083730)*1+lsi)*1]), &(inteval->stack[((hsi*42840+662286)*1+lsi)*1]), &(inteval->stack[((hsi*37800+752691)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+705126)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9083730)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8799180)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+9159330)*1+lsi)*1]), &(inteval->stack[((hsi*110250+705126)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8865330)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+9302655)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9159330)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8960880)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+8799180)*1+lsi)*1]), &(inteval->stack[((hsi*17955+463311)*1+lsi)*1]), &(inteval->stack[((hsi*16065+481266)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+8847375)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8799180)*1+lsi)*1]), &(inteval->stack[((hsi*42840+662286)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+9474645)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8847375)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9083730)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+9600645)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9474645)*1+lsi)*1]), &(inteval->stack[((hsi*110250+705126)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+9766020)*1+lsi)*1]), &(inteval->stack[((hsi*165375+9600645)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9159330)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+9966675)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9766020)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9302655)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+9083730)*1+lsi)*1]), &(inteval->stack[((hsi*19950+443361)*1+lsi)*1]), &(inteval->stack[((hsi*17955+463311)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+9137595)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9083730)*1+lsi)*1]), &(inteval->stack[((hsi*48195+8799180)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+662286)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9137595)*1+lsi)*1]), &(inteval->stack[((hsi*85680+8847375)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+10195995)*1+lsi)*1]), &(inteval->stack[((hsi*142800+662286)*1+lsi)*1]), &(inteval->stack[((hsi*126000+9474645)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+10384995)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10195995)*1+lsi)*1]), &(inteval->stack[((hsi*165375+9600645)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+9474645)*1+lsi)*1]), &(inteval->stack[((hsi*231525+10384995)*1+lsi)*1]), &(inteval->stack[((hsi*200655+9766020)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+10616520)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9474645)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9966675)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+9742185)*1+lsi)*1]), &(inteval->stack[((hsi*22050+421311)*1+lsi)*1]), &(inteval->stack[((hsi*19950+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+9802035)*1+lsi)*1]), &(inteval->stack[((hsi*59850+9742185)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9083730)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+8799180)*1+lsi)*1]), &(inteval->stack[((hsi*107730+9802035)*1+lsi)*1]), &(inteval->stack[((hsi*96390+9137595)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+9083730)*1+lsi)*1]), &(inteval->stack[((hsi*160650+8799180)*1+lsi)*1]), &(inteval->stack[((hsi*142800+662286)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+10911360)*1+lsi)*1]), &(inteval->stack[((hsi*214200+9083730)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10195995)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+11175960)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10911360)*1+lsi)*1]), &(inteval->stack[((hsi*231525+10384995)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+10195995)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11175960)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9474645)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+11484660)*1+lsi)*1]), &(inteval->stack[((hsi*343980+10195995)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10616520)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+9474645)*1+lsi)*1]), &(inteval->stack[((hsi*8190+544791)*1+lsi)*1]), &(inteval->stack[((hsi*6930+552981)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+9495435)*1+lsi)*1]), &(inteval->stack[((hsi*24570+559911)*1+lsi)*1]), &(inteval->stack[((hsi*20790+9474645)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+9537015)*1+lsi)*1]), &(inteval->stack[((hsi*49140+613146)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9495435)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+443361)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9537015)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+547311)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8960880)*1+lsi)*1]), &(inteval->stack[((hsi*103950+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+9474645)*1+lsi)*1]), &(inteval->stack[((hsi*171990+9302655)*1+lsi)*1]), &(inteval->stack[((hsi*145530+547311)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+443361)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9966675)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9474645)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+9297930)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10616520)*1+lsi)*1]), &(inteval->stack[((hsi*249480+443361)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+11853210)*1+lsi)*1]), &(inteval->stack[((hsi*368550+11484660)*1+lsi)*1]), &(inteval->stack[((hsi*311850+9297930)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+9297930)*1+lsi)*1]), &(inteval->stack[((hsi*24255+397056)*1+lsi)*1]), &(inteval->stack[((hsi*22050+421311)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+397056)*1+lsi)*1]), &(inteval->stack[((hsi*66150+9297930)*1+lsi)*1]), &(inteval->stack[((hsi*59850+9742185)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+9297930)*1+lsi)*1]), &(inteval->stack[((hsi*119700+397056)*1+lsi)*1]), &(inteval->stack[((hsi*107730+9802035)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+9477480)*1+lsi)*1]), &(inteval->stack[((hsi*179550+9297930)*1+lsi)*1]), &(inteval->stack[((hsi*160650+8799180)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+9718455)*1+lsi)*1]), &(inteval->stack[((hsi*240975+9477480)*1+lsi)*1]), &(inteval->stack[((hsi*214200+9083730)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*299880+9718455)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10911360)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+9070080)*1+lsi)*1]), &(inteval->stack[((hsi*352800+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11175960)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+10539975)*1+lsi)*1]), &(inteval->stack[((hsi*396900+9070080)*1+lsi)*1]), &(inteval->stack[((hsi*343980+10195995)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*429975+10539975)*1+lsi)*1]), &(inteval->stack[((hsi*368550+11484660)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+9167730)*1+lsi)*1]), &(inteval->stack[((hsi*450450+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*381150+11853210)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+9625110)*1+lsi)*1]), &(inteval->stack[((hsi*457380+9167730)*1+lsi)*1]), &(inteval->stack[((hsi*396396+7301580)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+10814298)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+9625110)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+7697976)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*10920+368856)*1+lsi)*1]), &(inteval->stack[((hsi*9360+379776)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+397056)*1+lsi)*1]), &(inteval->stack[((hsi*12600+356256)*1+lsi)*1]), &(inteval->stack[((hsi*10920+368856)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+8745360)*1+lsi)*1]), &(inteval->stack[((hsi*32760+397056)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8717280)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*14400+341856)*1+lsi)*1]), &(inteval->stack[((hsi*12600+356256)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+429816)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*32760+397056)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+8801520)*1+lsi)*1]), &(inteval->stack[((hsi*65520+429816)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8745360)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+7339380)*1+lsi)*1]), &(inteval->stack[((hsi*16320+325536)*1+lsi)*1]), &(inteval->stack[((hsi*14400+341856)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+495336)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7339380)*1+lsi)*1]), &(inteval->stack[((hsi*37800+7301580)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+7382580)*1+lsi)*1]), &(inteval->stack[((hsi*75600+495336)*1+lsi)*1]), &(inteval->stack[((hsi*65520+429816)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+8895120)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7382580)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8801520)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+570936)*1+lsi)*1]), &(inteval->stack[((hsi*18360+307176)*1+lsi)*1]), &(inteval->stack[((hsi*16320+325536)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+7491780)*1+lsi)*1]), &(inteval->stack[((hsi*48960+570936)*1+lsi)*1]), &(inteval->stack[((hsi*43200+7339380)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+619896)*1+lsi)*1]), &(inteval->stack[((hsi*86400+7491780)*1+lsi)*1]), &(inteval->stack[((hsi*75600+495336)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+397056)*1+lsi)*1]), &(inteval->stack[((hsi*126000+619896)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7382580)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*163800+397056)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8895120)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*20520+286656)*1+lsi)*1]), &(inteval->stack[((hsi*18360+307176)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+7356660)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*48960+570936)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+13049466)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7356660)*1+lsi)*1]), &(inteval->stack[((hsi*86400+7491780)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+7454580)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13049466)*1+lsi)*1]), &(inteval->stack[((hsi*126000+619896)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+560856)*1+lsi)*1]), &(inteval->stack[((hsi*189000+7454580)*1+lsi)*1]), &(inteval->stack[((hsi*163800+397056)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+13193466)*1+lsi)*1]), &(inteval->stack[((hsi*229320+560856)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12852906)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+397056)*1+lsi)*1]), &(inteval->stack[((hsi*22800+263856)*1+lsi)*1]), &(inteval->stack[((hsi*20520+286656)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+9035520)*1+lsi)*1]), &(inteval->stack[((hsi*61560+397056)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7301580)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+13455546)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9035520)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7356660)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+13618746)*1+lsi)*1]), &(inteval->stack[((hsi*163200+13455546)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13049466)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+13834746)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13618746)*1+lsi)*1]), &(inteval->stack[((hsi*189000+7454580)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*264600+13834746)*1+lsi)*1]), &(inteval->stack[((hsi*229320+560856)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+458616)*1+lsi)*1]), &(inteval->stack[((hsi*305760+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*262080+13193466)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+13049466)*1+lsi)*1]), &(inteval->stack[((hsi*25200+238656)*1+lsi)*1]), &(inteval->stack[((hsi*22800+263856)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+14099346)*1+lsi)*1]), &(inteval->stack[((hsi*68400+13049466)*1+lsi)*1]), &(inteval->stack[((hsi*61560+397056)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+14222466)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14099346)*1+lsi)*1]), &(inteval->stack[((hsi*110160+9035520)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+14406066)*1+lsi)*1]), &(inteval->stack[((hsi*183600+14222466)*1+lsi)*1]), &(inteval->stack[((hsi*163200+13455546)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+14650866)*1+lsi)*1]), &(inteval->stack[((hsi*244800+14406066)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13618746)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+13455546)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14650866)*1+lsi)*1]), &(inteval->stack[((hsi*264600+13834746)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+14953266)*1+lsi)*1]), &(inteval->stack[((hsi*352800+13455546)*1+lsi)*1]), &(inteval->stack[((hsi*305760+7301580)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+15346386)*1+lsi)*1]), &(inteval->stack[((hsi*393120+14953266)*1+lsi)*1]), &(inteval->stack[((hsi*336960+458616)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*9360+379776)*1+lsi)*1]), &(inteval->stack[((hsi*7920+389136)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+7325340)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*23760+7301580)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+7372860)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8745360)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7325340)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+13808346)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8801520)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7372860)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*140400+8895120)*1+lsi)*1]), &(inteval->stack[((hsi*118800+13808346)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*196560+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*166320+7301580)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*262080+13193466)*1+lsi)*1]), &(inteval->stack[((hsi*221760+8717280)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*336960+458616)*1+lsi)*1]), &(inteval->stack[((hsi*285120+7301580)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+263856)*1+lsi)*1]), &(inteval->stack[((hsi*421200+15346386)*1+lsi)*1]), &(inteval->stack[((hsi*356400+8717280)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*27720+210936)*1+lsi)*1]), &(inteval->stack[((hsi*25200+238656)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*68400+13049466)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*136800+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14099346)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*183600+14222466)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*275400+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*244800+14406066)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+13808346)*1+lsi)*1]), &(inteval->stack[((hsi*342720+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14650866)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+14211546)*1+lsi)*1]), &(inteval->stack[((hsi*403200+13808346)*1+lsi)*1]), &(inteval->stack[((hsi*352800+13455546)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*453600+14211546)*1+lsi)*1]), &(inteval->stack[((hsi*393120+14953266)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+13344306)*1+lsi)*1]), &(inteval->stack[((hsi*491400+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*421200+15346386)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+13859106)*1+lsi)*1]), &(inteval->stack[((hsi*514800+13344306)*1+lsi)*1]), &(inteval->stack[((hsi*435600+263856)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+14381826)*1+lsi)*1]), &(inteval->stack[((hsi*522720+13859106)*1+lsi)*1]), &(inteval->stack[((hsi*457380+9167730)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+15753966)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+14381826)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+9625110)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+18132342)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+15753966)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+10814298)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*6006+908886)*1+lsi)*1]), &(inteval->stack[((hsi*5148+914892)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+8732724)*1+lsi)*1]), &(inteval->stack[((hsi*6930+901956)*1+lsi)*1]), &(inteval->stack[((hsi*6006+908886)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+8750742)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8732724)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8717280)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+8781630)*1+lsi)*1]), &(inteval->stack[((hsi*7920+894036)*1+lsi)*1]), &(inteval->stack[((hsi*6930+901956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+8802420)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8781630)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8732724)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+8838456)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8802420)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8750742)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+8889936)*1+lsi)*1]), &(inteval->stack[((hsi*8976+885060)*1+lsi)*1]), &(inteval->stack[((hsi*7920+894036)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+8913696)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8889936)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8781630)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+8955276)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8913696)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8802420)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+9015336)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8955276)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8838456)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+9092556)*1+lsi)*1]), &(inteval->stack[((hsi*10098+874962)*1+lsi)*1]), &(inteval->stack[((hsi*8976+885060)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+9119484)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9092556)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8889936)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+9167004)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9119484)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8913696)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+9236304)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9167004)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8955276)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+9326394)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9236304)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9015336)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+9434502)*1+lsi)*1]), &(inteval->stack[((hsi*11286+863676)*1+lsi)*1]), &(inteval->stack[((hsi*10098+874962)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+9464796)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9434502)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9092556)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+9518652)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9464796)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9119484)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+9597852)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9518652)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9167004)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+9701802)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9597852)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9236304)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9701802)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9326394)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+9827928)*1+lsi)*1]), &(inteval->stack[((hsi*12540+851136)*1+lsi)*1]), &(inteval->stack[((hsi*11286+863676)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+9861786)*1+lsi)*1]), &(inteval->stack[((hsi*33858+9827928)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9434502)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+9922374)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9861786)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9464796)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+12997050)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9922374)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9518652)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+10012134)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12997050)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9597852)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+13115850)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10012134)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9701802)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+10157664)*1+lsi)*1]), &(inteval->stack[((hsi*168168+13115850)*1+lsi)*1]), &(inteval->stack[((hsi*144144+12852906)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+210936)*1+lsi)*1]), &(inteval->stack[((hsi*13860+837276)*1+lsi)*1]), &(inteval->stack[((hsi*12540+851136)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+13284018)*1+lsi)*1]), &(inteval->stack[((hsi*37620+210936)*1+lsi)*1]), &(inteval->stack[((hsi*33858+9827928)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+248556)*1+lsi)*1]), &(inteval->stack[((hsi*67716+13284018)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9861786)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+13351734)*1+lsi)*1]), &(inteval->stack[((hsi*100980+248556)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9922374)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+9434502)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13351734)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12997050)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+349536)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9434502)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10012134)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+9600822)*1+lsi)*1]), &(inteval->stack[((hsi*194040+349536)*1+lsi)*1]), &(inteval->stack[((hsi*168168+13115850)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+10342992)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9600822)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10157664)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*5148+914892)*1+lsi)*1]), &(inteval->stack[((hsi*4356+920040)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+7314648)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*13068+7301580)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+13486374)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8750742)*1+lsi)*1]), &(inteval->stack[((hsi*26136+7314648)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+7301580)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8838456)*1+lsi)*1]), &(inteval->stack[((hsi*43560+13486374)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+13486374)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9015336)*1+lsi)*1]), &(inteval->stack[((hsi*65340+7301580)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9326394)*1+lsi)*1]), &(inteval->stack[((hsi*91476+13486374)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+8839248)*1+lsi)*1]), &(inteval->stack[((hsi*144144+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*121968+8717280)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+8996064)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10157664)*1+lsi)*1]), &(inteval->stack[((hsi*156816+8839248)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+9817038)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10342992)*1+lsi)*1]), &(inteval->stack[((hsi*196020+8996064)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*15246+822030)*1+lsi)*1]), &(inteval->stack[((hsi*13860+837276)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+8758860)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*37620+210936)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+8834100)*1+lsi)*1]), &(inteval->stack[((hsi*75240+8758860)*1+lsi)*1]), &(inteval->stack[((hsi*67716+13284018)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*112860+8834100)*1+lsi)*1]), &(inteval->stack[((hsi*100980+248556)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13351734)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*188496+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*166320+9434502)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*194040+349536)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9600822)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*270270+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10342992)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+12852906)*1+lsi)*1]), &(inteval->stack[((hsi*283140+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*239580+9817038)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+8717280)*1+lsi)*1]), &(inteval->stack[((hsi*339768+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*287496+12852906)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+21530022)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+7697976)*1+lsi)*1]), &(inteval->stack[((hsi*862488+8717280)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+10814298)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+21530022)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+21530022)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+18132342)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+6961812)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*12376+178976)*1+lsi)*1]), &(inteval->stack[((hsi*10608+191352)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+6993636)*1+lsi)*1]), &(inteval->stack[((hsi*14280+164696)*1+lsi)*1]), &(inteval->stack[((hsi*12376+178976)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+7030764)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6993636)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6961812)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+7094412)*1+lsi)*1]), &(inteval->stack[((hsi*16320+148376)*1+lsi)*1]), &(inteval->stack[((hsi*14280+164696)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+7137252)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7094412)*1+lsi)*1]), &(inteval->stack[((hsi*37128+6993636)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+7211508)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7137252)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7030764)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+7317588)*1+lsi)*1]), &(inteval->stack[((hsi*18496+129880)*1+lsi)*1]), &(inteval->stack[((hsi*16320+148376)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+7366548)*1+lsi)*1]), &(inteval->stack[((hsi*48960+7317588)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7094412)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+7452228)*1+lsi)*1]), &(inteval->stack[((hsi*85680+7366548)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7137252)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+7575988)*1+lsi)*1]), &(inteval->stack[((hsi*123760+7452228)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7211508)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+7735108)*1+lsi)*1]), &(inteval->stack[((hsi*20808+109072)*1+lsi)*1]), &(inteval->stack[((hsi*18496+129880)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+7790596)*1+lsi)*1]), &(inteval->stack[((hsi*55488+7735108)*1+lsi)*1]), &(inteval->stack[((hsi*48960+7317588)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+7888516)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7790596)*1+lsi)*1]), &(inteval->stack[((hsi*85680+7366548)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+8031316)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7888516)*1+lsi)*1]), &(inteval->stack[((hsi*123760+7452228)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+8216956)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8031316)*1+lsi)*1]), &(inteval->stack[((hsi*159120+7575988)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+8439724)*1+lsi)*1]), &(inteval->stack[((hsi*23256+85816)*1+lsi)*1]), &(inteval->stack[((hsi*20808+109072)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+8502148)*1+lsi)*1]), &(inteval->stack[((hsi*62424+8439724)*1+lsi)*1]), &(inteval->stack[((hsi*55488+7735108)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+8613124)*1+lsi)*1]), &(inteval->stack[((hsi*110976+8502148)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7790596)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+8776324)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8613124)*1+lsi)*1]), &(inteval->stack[((hsi*142800+7888516)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+8990524)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8776324)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8031316)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+9250420)*1+lsi)*1]), &(inteval->stack[((hsi*259896+8990524)*1+lsi)*1]), &(inteval->stack[((hsi*222768+8216956)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+9547444)*1+lsi)*1]), &(inteval->stack[((hsi*25840+59976)*1+lsi)*1]), &(inteval->stack[((hsi*23256+85816)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+9617212)*1+lsi)*1]), &(inteval->stack[((hsi*69768+9547444)*1+lsi)*1]), &(inteval->stack[((hsi*62424+8439724)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+9742060)*1+lsi)*1]), &(inteval->stack[((hsi*124848+9617212)*1+lsi)*1]), &(inteval->stack[((hsi*110976+8502148)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+9927020)*1+lsi)*1]), &(inteval->stack[((hsi*184960+9742060)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8613124)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+10171820)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9927020)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8776324)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+10471700)*1+lsi)*1]), &(inteval->stack[((hsi*299880+10171820)*1+lsi)*1]), &(inteval->stack[((hsi*259896+8990524)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+10818228)*1+lsi)*1]), &(inteval->stack[((hsi*346528+10471700)*1+lsi)*1]), &(inteval->stack[((hsi*297024+9250420)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+11200116)*1+lsi)*1]), &(inteval->stack[((hsi*28560+31416)*1+lsi)*1]), &(inteval->stack[((hsi*25840+59976)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+11277636)*1+lsi)*1]), &(inteval->stack[((hsi*77520+11200116)*1+lsi)*1]), &(inteval->stack[((hsi*69768+9547444)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+11417172)*1+lsi)*1]), &(inteval->stack[((hsi*139536+11277636)*1+lsi)*1]), &(inteval->stack[((hsi*124848+9617212)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+11625252)*1+lsi)*1]), &(inteval->stack[((hsi*208080+11417172)*1+lsi)*1]), &(inteval->stack[((hsi*184960+9742060)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+11902692)*1+lsi)*1]), &(inteval->stack[((hsi*277440+11625252)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9927020)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+12245412)*1+lsi)*1]), &(inteval->stack[((hsi*342720+11902692)*1+lsi)*1]), &(inteval->stack[((hsi*299880+10171820)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+12645252)*1+lsi)*1]), &(inteval->stack[((hsi*399840+12245412)*1+lsi)*1]), &(inteval->stack[((hsi*346528+10471700)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+9547444)*1+lsi)*1]), &(inteval->stack[((hsi*445536+12645252)*1+lsi)*1]), &(inteval->stack[((hsi*381888+10818228)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+8439724)*1+lsi)*1]), &(inteval->stack[((hsi*10608+191352)*1+lsi)*1]), &(inteval->stack[((hsi*8976+201960)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+59976)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*26928+8439724)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+8439724)*1+lsi)*1]), &(inteval->stack[((hsi*63648+7030764)*1+lsi)*1]), &(inteval->stack[((hsi*53856+59976)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+59976)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7211508)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8439724)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+8439724)*1+lsi)*1]), &(inteval->stack[((hsi*159120+7575988)*1+lsi)*1]), &(inteval->stack[((hsi*134640+59976)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*222768+8216956)*1+lsi)*1]), &(inteval->stack[((hsi*188496+8439724)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+7213140)*1+lsi)*1]), &(inteval->stack[((hsi*297024+9250420)*1+lsi)*1]), &(inteval->stack[((hsi*251328+6961812)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+7536276)*1+lsi)*1]), &(inteval->stack[((hsi*381888+10818228)*1+lsi)*1]), &(inteval->stack[((hsi*323136+7213140)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+7940196)*1+lsi)*1]), &(inteval->stack[((hsi*477360+9547444)*1+lsi)*1]), &(inteval->stack[((hsi*403920+7536276)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+10024804)*1+lsi)*1]), &(inteval->stack[((hsi*31416+0)*1+lsi)*1]), &(inteval->stack[((hsi*28560+31416)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+8433876)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10024804)*1+lsi)*1]), &(inteval->stack[((hsi*77520+11200116)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+10024804)*1+lsi)*1]), &(inteval->stack[((hsi*155040+8433876)*1+lsi)*1]), &(inteval->stack[((hsi*139536+11277636)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+10257364)*1+lsi)*1]), &(inteval->stack[((hsi*232560+10024804)*1+lsi)*1]), &(inteval->stack[((hsi*208080+11417172)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+8433876)*1+lsi)*1]), &(inteval->stack[((hsi*312120+10257364)*1+lsi)*1]), &(inteval->stack[((hsi*277440+11625252)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+10024804)*1+lsi)*1]), &(inteval->stack[((hsi*388416+8433876)*1+lsi)*1]), &(inteval->stack[((hsi*342720+11902692)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+10481764)*1+lsi)*1]), &(inteval->stack[((hsi*456960+10024804)*1+lsi)*1]), &(inteval->stack[((hsi*399840+12245412)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+10995844)*1+lsi)*1]), &(inteval->stack[((hsi*514080+10481764)*1+lsi)*1]), &(inteval->stack[((hsi*445536+12645252)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+11552764)*1+lsi)*1]), &(inteval->stack[((hsi*556920+10995844)*1+lsi)*1]), &(inteval->stack[((hsi*477360+9547444)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+8433876)*1+lsi)*1]), &(inteval->stack[((hsi*583440+11552764)*1+lsi)*1]), &(inteval->stack[((hsi*493680+7940196)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+9026292)*1+lsi)*1]), &(inteval->stack[((hsi*592416+8433876)*1+lsi)*1]), &(inteval->stack[((hsi*522720+13859106)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+10594452)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+9026292)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+14381826)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+25842462)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+10594452)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+15753966)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+25842462)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+18132342)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+924396)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+6961812)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+21530022)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6037416+924396)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
