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
#include <_aB_PS__0__PS__1___TwoPRep_L__0__L__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_L__0__L__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1232100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_L__0__L__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1140510)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1147608)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+10071252)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1132320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1140510)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+10092546)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10071252)*1+lsi)*1]), &(inteval->stack[((hsi*18252+10053000)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+10129050)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1122960)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1132320)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+10153620)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10129050)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10071252)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+10196208)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10153620)*1+lsi)*1]), &(inteval->stack[((hsi*36504+10092546)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+10257048)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1112352)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1122960)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+10285128)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10257048)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10129050)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+10334268)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10285128)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10153620)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+10405248)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10334268)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10196208)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+10129050)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1100418)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1112352)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+10496508)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10129050)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10257048)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+10552668)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10496508)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10285128)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+10634568)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10552668)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10334268)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+10257048)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10634568)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10405248)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+10741038)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1087080)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1100418)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+10776840)*1+lsi)*1]), &(inteval->stack[((hsi*35802+10741038)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10129050)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+10840488)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10776840)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10496508)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+10934088)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10840488)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10552668)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+11056938)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10934088)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10634568)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+10496508)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11056938)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10257048)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+10666860)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1147608)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1153692)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+10129050)*1+lsi)*1]), &(inteval->stack[((hsi*18252+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10666860)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+10666860)*1+lsi)*1]), &(inteval->stack[((hsi*36504+10092546)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10129050)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10196208)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10666860)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+10130220)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10405248)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10053000)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+11205996)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10257048)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10130220)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*170352+10496508)*1+lsi)*1]), &(inteval->stack[((hsi*144144+11205996)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+10238328)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1072260)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1087080)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+10278342)*1+lsi)*1]), &(inteval->stack[((hsi*40014+10238328)*1+lsi)*1]), &(inteval->stack[((hsi*35802+10741038)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+10349946)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10278342)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10776840)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+10666860)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10349946)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10840488)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+10238328)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10666860)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10934088)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+10666860)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10238328)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11056938)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10238328)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10666860)*1+lsi)*1]), &(inteval->stack[((hsi*170352+10496508)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+10457352)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10238328)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10053000)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1050875)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1059156)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+10074294)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1041320)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1050875)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+10099137)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10074294)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10053000)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+10141725)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1030400)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1041320)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+10170390)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10141725)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10074294)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+10220076)*1+lsi)*1]), &(inteval->stack[((hsi*49686+10170390)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10099137)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+10291056)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1018024)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1030400)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+10323816)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10291056)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10141725)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1072260)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10323816)*1+lsi)*1]), &(inteval->stack[((hsi*49686+10170390)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1072260)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10220076)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+10141725)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1004101)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1018024)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+10381146)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10141725)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10291056)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+10795482)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10381146)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10323816)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+10891032)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10795482)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1072260)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+11015247)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10891032)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10689012)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+10291056)*1+lsi)*1]), &(inteval->stack[((hsi*15561+988540)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1004101)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+1072260)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10291056)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10141725)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+11164305)*1+lsi)*1]), &(inteval->stack[((hsi*74256+1072260)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10381146)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+11273505)*1+lsi)*1]), &(inteval->stack[((hsi*109200+11164305)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10795482)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+11416830)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11273505)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10891032)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+10795482)*1+lsi)*1]), &(inteval->stack[((hsi*173901+11416830)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11015247)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+10332825)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1059156)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1066254)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+10350843)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10332825)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+10141725)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10099137)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10350843)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+10332825)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10220076)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10141725)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10332825)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+11590731)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11015247)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10053000)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10795482)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11590731)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*17290+971250)*1+lsi)*1]), &(inteval->stack[((hsi*15561+988540)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+10332825)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10291056)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*83538+10332825)*1+lsi)*1]), &(inteval->stack[((hsi*74256+1072260)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+10269216)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*109200+11164305)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*163800+10269216)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11273505)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+11590731)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*173901+11416830)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*231868+11590731)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10795482)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10994226)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10053000)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*694980+10959282)*1+lsi)*1]), &(inteval->stack[((hsi*270270+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10457352)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*9555+946575)*1+lsi)*1]), &(inteval->stack[((hsi*8190+956130)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+10077570)*1+lsi)*1]), &(inteval->stack[((hsi*11025+935550)*1+lsi)*1]), &(inteval->stack[((hsi*9555+946575)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+10106235)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10077570)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10053000)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+10155375)*1+lsi)*1]), &(inteval->stack[((hsi*12600+922950)*1+lsi)*1]), &(inteval->stack[((hsi*11025+935550)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+10188450)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10155375)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10077570)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+10245780)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10188450)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10106235)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+971250)*1+lsi)*1]), &(inteval->stack[((hsi*14280+908670)*1+lsi)*1]), &(inteval->stack[((hsi*12600+922950)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+1009050)*1+lsi)*1]), &(inteval->stack[((hsi*37800+971250)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10155375)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+10327680)*1+lsi)*1]), &(inteval->stack[((hsi*66150+1009050)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10188450)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10327680)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10245780)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+10155375)*1+lsi)*1]), &(inteval->stack[((hsi*16065+892605)*1+lsi)*1]), &(inteval->stack[((hsi*14280+908670)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+1075200)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10155375)*1+lsi)*1]), &(inteval->stack[((hsi*37800+971250)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+11777112)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1075200)*1+lsi)*1]), &(inteval->stack[((hsi*66150+1009050)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+11887362)*1+lsi)*1]), &(inteval->stack[((hsi*110250+11777112)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10327680)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+12030687)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11887362)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11654262)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+10327680)*1+lsi)*1]), &(inteval->stack[((hsi*17955+874650)*1+lsi)*1]), &(inteval->stack[((hsi*16065+892605)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+971250)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10327680)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10155375)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+12202677)*1+lsi)*1]), &(inteval->stack[((hsi*85680+971250)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1075200)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+12328677)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12202677)*1+lsi)*1]), &(inteval->stack[((hsi*110250+11777112)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+12494052)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12328677)*1+lsi)*1]), &(inteval->stack[((hsi*143325+11887362)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+11777112)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12494052)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12030687)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1056930)*1+lsi)*1]), &(inteval->stack[((hsi*8190+956130)*1+lsi)*1]), &(inteval->stack[((hsi*6930+964320)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+10155375)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1056930)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1056930)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10106235)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10155375)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10245780)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1056930)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+10156950)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*103950+10053000)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+12694707)*1+lsi)*1]), &(inteval->stack[((hsi*171990+12030687)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10156950)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11777112)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12694707)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+12006432)*1+lsi)*1]), &(inteval->stack[((hsi*19950+854700)*1+lsi)*1]), &(inteval->stack[((hsi*17955+874650)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+12060297)*1+lsi)*1]), &(inteval->stack[((hsi*53865+12006432)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10327680)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+10302480)*1+lsi)*1]), &(inteval->stack[((hsi*96390+12060297)*1+lsi)*1]), &(inteval->stack[((hsi*85680+971250)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+854700)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10302480)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12202677)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+12006432)*1+lsi)*1]), &(inteval->stack[((hsi*189000+854700)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12328677)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+854700)*1+lsi)*1]), &(inteval->stack[((hsi*231525+12006432)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12494052)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+12006432)*1+lsi)*1]), &(inteval->stack[((hsi*267540+854700)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11777112)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12006432)*1+lsi)*1]), &(inteval->stack[((hsi*249480+10053000)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*810810+11966112)*1+lsi)*1]), &(inteval->stack[((hsi*311850+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*270270+10689012)*1+lsi)*1]),2970);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1389960+12776922)*1+lsi)*1]), &(inteval->stack[((hsi*810810+11966112)*1+lsi)*1]), &(inteval->stack[((hsi*694980+10959282)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*10920+826500)*1+lsi)*1]), &(inteval->stack[((hsi*9360+837420)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+10081080)*1+lsi)*1]), &(inteval->stack[((hsi*12600+813900)*1+lsi)*1]), &(inteval->stack[((hsi*10920+826500)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+10113840)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10081080)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10053000)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+854700)*1+lsi)*1]), &(inteval->stack[((hsi*14400+799500)*1+lsi)*1]), &(inteval->stack[((hsi*12600+813900)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+10170000)*1+lsi)*1]), &(inteval->stack[((hsi*37800+854700)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10081080)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10170000)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10113840)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+892500)*1+lsi)*1]), &(inteval->stack[((hsi*16320+783180)*1+lsi)*1]), &(inteval->stack[((hsi*14400+799500)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+935700)*1+lsi)*1]), &(inteval->stack[((hsi*43200+892500)*1+lsi)*1]), &(inteval->stack[((hsi*37800+854700)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+10235520)*1+lsi)*1]), &(inteval->stack[((hsi*75600+935700)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10170000)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+10782612)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10235520)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10689012)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+1011300)*1+lsi)*1]), &(inteval->stack[((hsi*18360+764820)*1+lsi)*1]), &(inteval->stack[((hsi*16320+783180)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+10344720)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1011300)*1+lsi)*1]), &(inteval->stack[((hsi*43200+892500)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*86400+10344720)*1+lsi)*1]), &(inteval->stack[((hsi*75600+935700)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+14292882)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10235520)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+14456682)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14292882)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10782612)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+10170000)*1+lsi)*1]), &(inteval->stack[((hsi*20520+744300)*1+lsi)*1]), &(inteval->stack[((hsi*18360+764820)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+854700)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10170000)*1+lsi)*1]), &(inteval->stack[((hsi*48960+1011300)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+952620)*1+lsi)*1]), &(inteval->stack[((hsi*97920+854700)*1+lsi)*1]), &(inteval->stack[((hsi*86400+10344720)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+10225080)*1+lsi)*1]), &(inteval->stack[((hsi*144000+952620)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14166882)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+14653242)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10225080)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14292882)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14653242)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14456682)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+764820)*1+lsi)*1]), &(inteval->stack[((hsi*9360+837420)*1+lsi)*1]), &(inteval->stack[((hsi*7920+846780)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+788580)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*23760+764820)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+14882562)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10113840)*1+lsi)*1]), &(inteval->stack[((hsi*47520+788580)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+14961762)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*79200+14882562)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+15080562)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10782612)*1+lsi)*1]), &(inteval->stack[((hsi*118800+14961762)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14456682)*1+lsi)*1]), &(inteval->stack[((hsi*166320+15080562)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+14882562)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*221760+10689012)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*22800+721500)*1+lsi)*1]), &(inteval->stack[((hsi*20520+744300)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+14428962)*1+lsi)*1]), &(inteval->stack[((hsi*61560+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10170000)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*110160+14428962)*1+lsi)*1]), &(inteval->stack[((hsi*97920+854700)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+721500)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*144000+952620)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*216000+721500)*1+lsi)*1]), &(inteval->stack[((hsi*189000+10225080)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+721500)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14653242)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+14428962)*1+lsi)*1]), &(inteval->stack[((hsi*305760+721500)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14166882)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+721500)*1+lsi)*1]), &(inteval->stack[((hsi*336960+14428962)*1+lsi)*1]), &(inteval->stack[((hsi*285120+14882562)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*935550+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*356400+721500)*1+lsi)*1]), &(inteval->stack[((hsi*311850+11654262)*1+lsi)*1]),2970);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1621620+15102432)*1+lsi)*1]), &(inteval->stack[((hsi*935550+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*810810+11966112)*1+lsi)*1]),2970);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2316600+16724052)*1+lsi)*1]), &(inteval->stack[((hsi*1621620+15102432)*1+lsi)*1]), &(inteval->stack[((hsi*1389960+12776922)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*12376+689540)*1+lsi)*1]), &(inteval->stack[((hsi*10608+701916)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+11686086)*1+lsi)*1]), &(inteval->stack[((hsi*14280+675260)*1+lsi)*1]), &(inteval->stack[((hsi*12376+689540)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+11723214)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11686086)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11654262)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+11786862)*1+lsi)*1]), &(inteval->stack[((hsi*16320+658940)*1+lsi)*1]), &(inteval->stack[((hsi*14280+675260)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11829702)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11786862)*1+lsi)*1]), &(inteval->stack[((hsi*37128+11686086)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+11903958)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11829702)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11723214)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+12010038)*1+lsi)*1]), &(inteval->stack[((hsi*18496+640444)*1+lsi)*1]), &(inteval->stack[((hsi*16320+658940)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+12058998)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12010038)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11786862)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+12144678)*1+lsi)*1]), &(inteval->stack[((hsi*85680+12058998)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11829702)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+12268438)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12144678)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11903958)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*20808+619636)*1+lsi)*1]), &(inteval->stack[((hsi*18496+640444)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+12427558)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12010038)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+10108488)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12427558)*1+lsi)*1]), &(inteval->stack[((hsi*85680+12058998)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10108488)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12144678)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+12010038)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*159120+12268438)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+12525478)*1+lsi)*1]), &(inteval->stack[((hsi*23256+596380)*1+lsi)*1]), &(inteval->stack[((hsi*20808+619636)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+10251288)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12525478)*1+lsi)*1]), &(inteval->stack[((hsi*55488+10053000)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+12587902)*1+lsi)*1]), &(inteval->stack[((hsi*110976+10251288)*1+lsi)*1]), &(inteval->stack[((hsi*97920+12427558)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12587902)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10108488)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+19254852)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10689012)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+19514748)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19254852)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12010038)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*10608+701916)*1+lsi)*1]), &(inteval->stack[((hsi*8976+712524)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+10715940)*1+lsi)*1]), &(inteval->stack[((hsi*31824+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10689012)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11723214)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10715940)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+10689012)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11903958)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10053000)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*159120+12268438)*1+lsi)*1]), &(inteval->stack[((hsi*134640+10689012)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+12232806)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12010038)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11654262)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19514748)*1+lsi)*1]), &(inteval->stack[((hsi*251328+12232806)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+11977398)*1+lsi)*1]), &(inteval->stack[((hsi*25840+570540)*1+lsi)*1]), &(inteval->stack[((hsi*23256+596380)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+12047166)*1+lsi)*1]), &(inteval->stack[((hsi*69768+11977398)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12525478)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+12172014)*1+lsi)*1]), &(inteval->stack[((hsi*124848+12047166)*1+lsi)*1]), &(inteval->stack[((hsi*110976+10251288)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*184960+12172014)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12587902)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+11977398)*1+lsi)*1]), &(inteval->stack[((hsi*244800+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19040652)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+12277278)*1+lsi)*1]), &(inteval->stack[((hsi*299880+11977398)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19254852)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*346528+12277278)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19514748)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+11977398)*1+lsi)*1]), &(inteval->stack[((hsi*381888+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*323136+11654262)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1069200+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*403920+11977398)*1+lsi)*1]), &(inteval->stack[((hsi*356400+721500)*1+lsi)*1]),2970);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1871100+20109852)*1+lsi)*1]), &(inteval->stack[((hsi*1069200+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*935550+14166882)*1+lsi)*1]),2970);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2702700+21980952)*1+lsi)*1]), &(inteval->stack[((hsi*1871100+20109852)*1+lsi)*1]), &(inteval->stack[((hsi*1621620+15102432)*1+lsi)*1]),2970);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3474900+24683652)*1+lsi)*1]), &(inteval->stack[((hsi*2702700+21980952)*1+lsi)*1]), &(inteval->stack[((hsi*2316600+16724052)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*13923+534585)*1+lsi)*1]), &(inteval->stack[((hsi*11934+548508)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+14202684)*1+lsi)*1]), &(inteval->stack[((hsi*16065+518520)*1+lsi)*1]), &(inteval->stack[((hsi*13923+534585)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+14244453)*1+lsi)*1]), &(inteval->stack[((hsi*41769+14202684)*1+lsi)*1]), &(inteval->stack[((hsi*35802+14166882)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+14316057)*1+lsi)*1]), &(inteval->stack[((hsi*18360+500160)*1+lsi)*1]), &(inteval->stack[((hsi*16065+518520)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+14364252)*1+lsi)*1]), &(inteval->stack[((hsi*48195+14316057)*1+lsi)*1]), &(inteval->stack[((hsi*41769+14202684)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+14447790)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14364252)*1+lsi)*1]), &(inteval->stack[((hsi*71604+14244453)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+14567130)*1+lsi)*1]), &(inteval->stack[((hsi*20808+479352)*1+lsi)*1]), &(inteval->stack[((hsi*18360+500160)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+14622210)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14567130)*1+lsi)*1]), &(inteval->stack[((hsi*48195+14316057)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+14718600)*1+lsi)*1]), &(inteval->stack[((hsi*96390+14622210)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14364252)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+14857830)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14718600)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14447790)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+15036840)*1+lsi)*1]), &(inteval->stack[((hsi*23409+455943)*1+lsi)*1]), &(inteval->stack[((hsi*20808+479352)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+15099264)*1+lsi)*1]), &(inteval->stack[((hsi*62424+15036840)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14567130)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+15209424)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15099264)*1+lsi)*1]), &(inteval->stack[((hsi*96390+14622210)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+15370074)*1+lsi)*1]), &(inteval->stack[((hsi*160650+15209424)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14718600)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+15578919)*1+lsi)*1]), &(inteval->stack[((hsi*208845+15370074)*1+lsi)*1]), &(inteval->stack[((hsi*179010+14857830)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+15829533)*1+lsi)*1]), &(inteval->stack[((hsi*26163+429780)*1+lsi)*1]), &(inteval->stack[((hsi*23409+455943)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+15899760)*1+lsi)*1]), &(inteval->stack[((hsi*70227+15829533)*1+lsi)*1]), &(inteval->stack[((hsi*62424+15036840)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+16024608)*1+lsi)*1]), &(inteval->stack[((hsi*124848+15899760)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15099264)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+570540)*1+lsi)*1]), &(inteval->stack[((hsi*183600+16024608)*1+lsi)*1]), &(inteval->stack[((hsi*160650+15209424)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+16208208)*1+lsi)*1]), &(inteval->stack[((hsi*240975+570540)*1+lsi)*1]), &(inteval->stack[((hsi*208845+15370074)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+15036840)*1+lsi)*1]), &(inteval->stack[((hsi*292383+16208208)*1+lsi)*1]), &(inteval->stack[((hsi*250614+15578919)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*11934+548508)*1+lsi)*1]), &(inteval->stack[((hsi*10098+560442)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+12381318)*1+lsi)*1]), &(inteval->stack[((hsi*35802+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10053000)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*71604+14244453)*1+lsi)*1]), &(inteval->stack[((hsi*60588+12381318)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+12381318)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14447790)*1+lsi)*1]), &(inteval->stack[((hsi*100980+10053000)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*179010+14857830)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12381318)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+14378940)*1+lsi)*1]), &(inteval->stack[((hsi*250614+15578919)*1+lsi)*1]), &(inteval->stack[((hsi*212058+14166882)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+15370992)*1+lsi)*1]), &(inteval->stack[((hsi*334152+15036840)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14378940)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*29070+400710)*1+lsi)*1]), &(inteval->stack[((hsi*26163+429780)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+14245371)*1+lsi)*1]), &(inteval->stack[((hsi*78489+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*70227+15829533)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+14385825)*1+lsi)*1]), &(inteval->stack[((hsi*140454+14245371)*1+lsi)*1]), &(inteval->stack[((hsi*124848+15899760)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+14593905)*1+lsi)*1]), &(inteval->stack[((hsi*208080+14385825)*1+lsi)*1]), &(inteval->stack[((hsi*183600+16024608)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+15734520)*1+lsi)*1]), &(inteval->stack[((hsi*275400+14593905)*1+lsi)*1]), &(inteval->stack[((hsi*240975+570540)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*337365+15734520)*1+lsi)*1]), &(inteval->stack[((hsi*292383+16208208)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+15734520)*1+lsi)*1]), &(inteval->stack[((hsi*389844+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*334152+15036840)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*429624+15734520)*1+lsi)*1]), &(inteval->stack[((hsi*363528+15370992)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1211760+14621292)*1+lsi)*1]), &(inteval->stack[((hsi*454410+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*403920+11977398)*1+lsi)*1]),2970);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2138400+28158552)*1+lsi)*1]), &(inteval->stack[((hsi*1211760+14621292)*1+lsi)*1]), &(inteval->stack[((hsi*1069200+19040652)*1+lsi)*1]),2970);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3118500+30296952)*1+lsi)*1]), &(inteval->stack[((hsi*2138400+28158552)*1+lsi)*1]), &(inteval->stack[((hsi*1871100+20109852)*1+lsi)*1]),2970);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4054050+33415452)*1+lsi)*1]), &(inteval->stack[((hsi*3118500+30296952)*1+lsi)*1]), &(inteval->stack[((hsi*2702700+21980952)*1+lsi)*1]),2970);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*4864860+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*4054050+33415452)*1+lsi)*1]), &(inteval->stack[((hsi*3474900+24683652)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*15561+360525)*1+lsi)*1]), &(inteval->stack[((hsi*13338+376086)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+11694276)*1+lsi)*1]), &(inteval->stack[((hsi*17955+342570)*1+lsi)*1]), &(inteval->stack[((hsi*15561+360525)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+11740959)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11694276)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11654262)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+11820987)*1+lsi)*1]), &(inteval->stack[((hsi*20520+322050)*1+lsi)*1]), &(inteval->stack[((hsi*17955+342570)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+11874852)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11820987)*1+lsi)*1]), &(inteval->stack[((hsi*46683+11694276)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+15833052)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11874852)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11740959)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+11968218)*1+lsi)*1]), &(inteval->stack[((hsi*23256+298794)*1+lsi)*1]), &(inteval->stack[((hsi*20520+322050)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+23905512)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11968218)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11820987)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+400710)*1+lsi)*1]), &(inteval->stack[((hsi*107730+23905512)*1+lsi)*1]), &(inteval->stack[((hsi*93366+11874852)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+15966432)*1+lsi)*1]), &(inteval->stack[((hsi*155610+400710)*1+lsi)*1]), &(inteval->stack[((hsi*133380+15833052)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+12029778)*1+lsi)*1]), &(inteval->stack[((hsi*26163+272631)*1+lsi)*1]), &(inteval->stack[((hsi*23256+298794)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+12099546)*1+lsi)*1]), &(inteval->stack[((hsi*69768+12029778)*1+lsi)*1]), &(inteval->stack[((hsi*61560+11968218)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+24013242)*1+lsi)*1]), &(inteval->stack[((hsi*123120+12099546)*1+lsi)*1]), &(inteval->stack[((hsi*107730+23905512)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+556320)*1+lsi)*1]), &(inteval->stack[((hsi*179550+24013242)*1+lsi)*1]), &(inteval->stack[((hsi*155610+400710)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+16166502)*1+lsi)*1]), &(inteval->stack[((hsi*233415+556320)*1+lsi)*1]), &(inteval->stack[((hsi*200070+15966432)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+12222666)*1+lsi)*1]), &(inteval->stack[((hsi*29241+243390)*1+lsi)*1]), &(inteval->stack[((hsi*26163+272631)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+24192792)*1+lsi)*1]), &(inteval->stack[((hsi*78489+12222666)*1+lsi)*1]), &(inteval->stack[((hsi*69768+12029778)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+12301155)*1+lsi)*1]), &(inteval->stack[((hsi*139536+24192792)*1+lsi)*1]), &(inteval->stack[((hsi*123120+12099546)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12301155)*1+lsi)*1]), &(inteval->stack[((hsi*179550+24013242)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+11820987)*1+lsi)*1]), &(inteval->stack[((hsi*269325+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*233415+556320)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+400710)*1+lsi)*1]), &(inteval->stack[((hsi*326781+11820987)*1+lsi)*1]), &(inteval->stack[((hsi*280098+16166502)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+774174)*1+lsi)*1]), &(inteval->stack[((hsi*13338+376086)*1+lsi)*1]), &(inteval->stack[((hsi*11286+389424)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+24332328)*1+lsi)*1]), &(inteval->stack[((hsi*40014+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*33858+774174)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+774174)*1+lsi)*1]), &(inteval->stack[((hsi*80028+11740959)*1+lsi)*1]), &(inteval->stack[((hsi*67716+24332328)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+24332328)*1+lsi)*1]), &(inteval->stack[((hsi*133380+15833052)*1+lsi)*1]), &(inteval->stack[((hsi*112860+774174)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+774174)*1+lsi)*1]), &(inteval->stack[((hsi*200070+15966432)*1+lsi)*1]), &(inteval->stack[((hsi*169290+24332328)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+24332328)*1+lsi)*1]), &(inteval->stack[((hsi*280098+16166502)*1+lsi)*1]), &(inteval->stack[((hsi*237006+774174)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+15833052)*1+lsi)*1]), &(inteval->stack[((hsi*373464+400710)*1+lsi)*1]), &(inteval->stack[((hsi*316008+24332328)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+16239348)*1+lsi)*1]), &(inteval->stack[((hsi*32490+210900)*1+lsi)*1]), &(inteval->stack[((hsi*29241+243390)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+16327071)*1+lsi)*1]), &(inteval->stack[((hsi*87723+16239348)*1+lsi)*1]), &(inteval->stack[((hsi*78489+12222666)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+774174)*1+lsi)*1]), &(inteval->stack[((hsi*156978+16327071)*1+lsi)*1]), &(inteval->stack[((hsi*139536+24192792)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+23905512)*1+lsi)*1]), &(inteval->stack[((hsi*232560+774174)*1+lsi)*1]), &(inteval->stack[((hsi*205200+12301155)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+12147768)*1+lsi)*1]), &(inteval->stack[((hsi*307800+23905512)*1+lsi)*1]), &(inteval->stack[((hsi*269325+10053000)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+23905512)*1+lsi)*1]), &(inteval->stack[((hsi*377055+12147768)*1+lsi)*1]), &(inteval->stack[((hsi*326781+11820987)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*435708+23905512)*1+lsi)*1]), &(inteval->stack[((hsi*373464+400710)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+210900)*1+lsi)*1]), &(inteval->stack[((hsi*480168+11654262)*1+lsi)*1]), &(inteval->stack[((hsi*406296+15833052)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1363230+37469502)*1+lsi)*1]), &(inteval->stack[((hsi*507870+210900)*1+lsi)*1]), &(inteval->stack[((hsi*454410+14166882)*1+lsi)*1]),2970);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*2423520+38832732)*1+lsi)*1]), &(inteval->stack[((hsi*1363230+37469502)*1+lsi)*1]), &(inteval->stack[((hsi*1211760+14621292)*1+lsi)*1]),2970);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*3564000+41256252)*1+lsi)*1]), &(inteval->stack[((hsi*2423520+38832732)*1+lsi)*1]), &(inteval->stack[((hsi*2138400+28158552)*1+lsi)*1]),2970);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*4677750+44820252)*1+lsi)*1]), &(inteval->stack[((hsi*3564000+41256252)*1+lsi)*1]), &(inteval->stack[((hsi*3118500+30296952)*1+lsi)*1]),2970);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*5675670+49498002)*1+lsi)*1]), &(inteval->stack[((hsi*4677750+44820252)*1+lsi)*1]), &(inteval->stack[((hsi*4054050+33415452)*1+lsi)*1]),2970);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*6486480+28158552)*1+lsi)*1]), &(inteval->stack[((hsi*5675670+49498002)*1+lsi)*1]), &(inteval->stack[((hsi*4864860+19040652)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1216590)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1222596)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+34660476)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1209660)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1216590)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+34678494)*1+lsi)*1]), &(inteval->stack[((hsi*18018+34660476)*1+lsi)*1]), &(inteval->stack[((hsi*15444+34645032)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+34709382)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1201740)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1209660)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+34730172)*1+lsi)*1]), &(inteval->stack[((hsi*20790+34709382)*1+lsi)*1]), &(inteval->stack[((hsi*18018+34660476)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+34766208)*1+lsi)*1]), &(inteval->stack[((hsi*36036+34730172)*1+lsi)*1]), &(inteval->stack[((hsi*30888+34678494)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+34817688)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1192764)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1201740)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+34841448)*1+lsi)*1]), &(inteval->stack[((hsi*23760+34817688)*1+lsi)*1]), &(inteval->stack[((hsi*20790+34709382)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+34883028)*1+lsi)*1]), &(inteval->stack[((hsi*41580+34841448)*1+lsi)*1]), &(inteval->stack[((hsi*36036+34730172)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*60060+34883028)*1+lsi)*1]), &(inteval->stack[((hsi*51480+34766208)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+34943088)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1182666)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1192764)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+34970016)*1+lsi)*1]), &(inteval->stack[((hsi*26928+34943088)*1+lsi)*1]), &(inteval->stack[((hsi*23760+34817688)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+14244102)*1+lsi)*1]), &(inteval->stack[((hsi*47520+34970016)*1+lsi)*1]), &(inteval->stack[((hsi*41580+34841448)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+35017536)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14244102)*1+lsi)*1]), &(inteval->stack[((hsi*60060+34883028)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+14313402)*1+lsi)*1]), &(inteval->stack[((hsi*90090+35017536)*1+lsi)*1]), &(inteval->stack[((hsi*77220+14166882)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+35107626)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1171380)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1182666)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+35137920)*1+lsi)*1]), &(inteval->stack[((hsi*30294+35107626)*1+lsi)*1]), &(inteval->stack[((hsi*26928+34943088)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+14421510)*1+lsi)*1]), &(inteval->stack[((hsi*53856+35137920)*1+lsi)*1]), &(inteval->stack[((hsi*47520+34970016)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+35191776)*1+lsi)*1]), &(inteval->stack[((hsi*79200+14421510)*1+lsi)*1]), &(inteval->stack[((hsi*69300+14244102)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+14500710)*1+lsi)*1]), &(inteval->stack[((hsi*103950+35191776)*1+lsi)*1]), &(inteval->stack[((hsi*90090+35017536)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+35295726)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14500710)*1+lsi)*1]), &(inteval->stack[((hsi*108108+14313402)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+14626836)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1222596)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1227744)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+14639904)*1+lsi)*1]), &(inteval->stack[((hsi*15444+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*13068+14626836)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+14666040)*1+lsi)*1]), &(inteval->stack[((hsi*30888+34678494)*1+lsi)*1]), &(inteval->stack[((hsi*26136+14639904)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*51480+34766208)*1+lsi)*1]), &(inteval->stack[((hsi*43560+14666040)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+14626836)*1+lsi)*1]), &(inteval->stack[((hsi*77220+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*65340+35439870)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*108108+14313402)*1+lsi)*1]), &(inteval->stack[((hsi*91476+14626836)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+14626836)*1+lsi)*1]), &(inteval->stack[((hsi*144144+35295726)*1+lsi)*1]), &(inteval->stack[((hsi*121968+35439870)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1158840)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1171380)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+35473728)*1+lsi)*1]), &(inteval->stack[((hsi*33858+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*30294+35107626)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+14783652)*1+lsi)*1]), &(inteval->stack[((hsi*60588+35473728)*1+lsi)*1]), &(inteval->stack[((hsi*53856+35137920)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*89760+14783652)*1+lsi)*1]), &(inteval->stack[((hsi*79200+14421510)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+14783652)*1+lsi)*1]), &(inteval->stack[((hsi*118800+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*103950+35191776)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*145530+14783652)*1+lsi)*1]), &(inteval->stack[((hsi*126126+14500710)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+14783652)*1+lsi)*1]), &(inteval->stack[((hsi*168168+35439870)*1+lsi)*1]), &(inteval->stack[((hsi*144144+35295726)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*185328+14783652)*1+lsi)*1]), &(inteval->stack[((hsi*156816+14626836)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*588060+34841052)*1+lsi)*1]), &(inteval->stack[((hsi*231660+10457352)*1+lsi)*1]), &(inteval->stack[((hsi*196020+34645032)*1+lsi)*1]),2970);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1176120+14166882)*1+lsi)*1]), &(inteval->stack[((hsi*694980+10959282)*1+lsi)*1]), &(inteval->stack[((hsi*588060+34841052)*1+lsi)*1]),2970);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1960200+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*1389960+12776922)*1+lsi)*1]), &(inteval->stack[((hsi*1176120+14166882)*1+lsi)*1]),2970);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2940300+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*2316600+16724052)*1+lsi)*1]), &(inteval->stack[((hsi*1960200+34645032)*1+lsi)*1]),2970);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4116420+12993300)*1+lsi)*1]), &(inteval->stack[((hsi*3474900+24683652)*1+lsi)*1]), &(inteval->stack[((hsi*2940300+10053000)*1+lsi)*1]),2970);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*5488560+55173672)*1+lsi)*1]), &(inteval->stack[((hsi*4864860+19040652)*1+lsi)*1]), &(inteval->stack[((hsi*4116420+12993300)*1+lsi)*1]),2970);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*7056720+10053000)*1+lsi)*1]), &(inteval->stack[((hsi*6486480+28158552)*1+lsi)*1]), &(inteval->stack[((hsi*5488560+55173672)*1+lsi)*1]),2970);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*17290+166250)*1+lsi)*1]), &(inteval->stack[((hsi*14820+183540)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+17154180)*1+lsi)*1]), &(inteval->stack[((hsi*19950+146300)*1+lsi)*1]), &(inteval->stack[((hsi*17290+166250)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+17206050)*1+lsi)*1]), &(inteval->stack[((hsi*51870+17154180)*1+lsi)*1]), &(inteval->stack[((hsi*44460+17109720)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+17294970)*1+lsi)*1]), &(inteval->stack[((hsi*22800+123500)*1+lsi)*1]), &(inteval->stack[((hsi*19950+146300)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+17354820)*1+lsi)*1]), &(inteval->stack[((hsi*59850+17294970)*1+lsi)*1]), &(inteval->stack[((hsi*51870+17154180)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+17458560)*1+lsi)*1]), &(inteval->stack[((hsi*103740+17354820)*1+lsi)*1]), &(inteval->stack[((hsi*88920+17206050)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+17606760)*1+lsi)*1]), &(inteval->stack[((hsi*25840+97660)*1+lsi)*1]), &(inteval->stack[((hsi*22800+123500)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+17675160)*1+lsi)*1]), &(inteval->stack[((hsi*68400+17606760)*1+lsi)*1]), &(inteval->stack[((hsi*59850+17294970)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+17794860)*1+lsi)*1]), &(inteval->stack[((hsi*119700+17675160)*1+lsi)*1]), &(inteval->stack[((hsi*103740+17354820)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+17967760)*1+lsi)*1]), &(inteval->stack[((hsi*172900+17794860)*1+lsi)*1]), &(inteval->stack[((hsi*148200+17458560)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+18190060)*1+lsi)*1]), &(inteval->stack[((hsi*29070+68590)*1+lsi)*1]), &(inteval->stack[((hsi*25840+97660)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+18267580)*1+lsi)*1]), &(inteval->stack[((hsi*77520+18190060)*1+lsi)*1]), &(inteval->stack[((hsi*68400+17606760)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+18404380)*1+lsi)*1]), &(inteval->stack[((hsi*136800+18267580)*1+lsi)*1]), &(inteval->stack[((hsi*119700+17675160)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+18603880)*1+lsi)*1]), &(inteval->stack[((hsi*199500+18404380)*1+lsi)*1]), &(inteval->stack[((hsi*172900+17794860)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+18863230)*1+lsi)*1]), &(inteval->stack[((hsi*259350+18603880)*1+lsi)*1]), &(inteval->stack[((hsi*222300+17967760)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+19174450)*1+lsi)*1]), &(inteval->stack[((hsi*32490+36100)*1+lsi)*1]), &(inteval->stack[((hsi*29070+68590)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+19261660)*1+lsi)*1]), &(inteval->stack[((hsi*87210+19174450)*1+lsi)*1]), &(inteval->stack[((hsi*77520+18190060)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+19416700)*1+lsi)*1]), &(inteval->stack[((hsi*155040+19261660)*1+lsi)*1]), &(inteval->stack[((hsi*136800+18267580)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+19644700)*1+lsi)*1]), &(inteval->stack[((hsi*228000+19416700)*1+lsi)*1]), &(inteval->stack[((hsi*199500+18404380)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+19943950)*1+lsi)*1]), &(inteval->stack[((hsi*299250+19644700)*1+lsi)*1]), &(inteval->stack[((hsi*259350+18603880)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+20307040)*1+lsi)*1]), &(inteval->stack[((hsi*363090+19943950)*1+lsi)*1]), &(inteval->stack[((hsi*311220+18863230)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+20722000)*1+lsi)*1]), &(inteval->stack[((hsi*14820+183540)*1+lsi)*1]), &(inteval->stack[((hsi*12540+198360)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+20759620)*1+lsi)*1]), &(inteval->stack[((hsi*44460+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*37620+20722000)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+20834860)*1+lsi)*1]), &(inteval->stack[((hsi*88920+17206050)*1+lsi)*1]), &(inteval->stack[((hsi*75240+20759620)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+20960260)*1+lsi)*1]), &(inteval->stack[((hsi*148200+17458560)*1+lsi)*1]), &(inteval->stack[((hsi*125400+20834860)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+21148360)*1+lsi)*1]), &(inteval->stack[((hsi*222300+17967760)*1+lsi)*1]), &(inteval->stack[((hsi*188100+20960260)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+21411700)*1+lsi)*1]), &(inteval->stack[((hsi*311220+18863230)*1+lsi)*1]), &(inteval->stack[((hsi*263340+21148360)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+21762820)*1+lsi)*1]), &(inteval->stack[((hsi*414960+20307040)*1+lsi)*1]), &(inteval->stack[((hsi*351120+21411700)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+22214260)*1+lsi)*1]), &(inteval->stack[((hsi*36100+0)*1+lsi)*1]), &(inteval->stack[((hsi*32490+36100)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+22311730)*1+lsi)*1]), &(inteval->stack[((hsi*97470+22214260)*1+lsi)*1]), &(inteval->stack[((hsi*87210+19174450)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+22486150)*1+lsi)*1]), &(inteval->stack[((hsi*174420+22311730)*1+lsi)*1]), &(inteval->stack[((hsi*155040+19261660)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+22744550)*1+lsi)*1]), &(inteval->stack[((hsi*258400+22486150)*1+lsi)*1]), &(inteval->stack[((hsi*228000+19416700)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+23086550)*1+lsi)*1]), &(inteval->stack[((hsi*342000+22744550)*1+lsi)*1]), &(inteval->stack[((hsi*299250+19644700)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+23505500)*1+lsi)*1]), &(inteval->stack[((hsi*418950+23086550)*1+lsi)*1]), &(inteval->stack[((hsi*363090+19943950)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+23989620)*1+lsi)*1]), &(inteval->stack[((hsi*484120+23505500)*1+lsi)*1]), &(inteval->stack[((hsi*414960+20307040)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*533520+23989620)*1+lsi)*1]), &(inteval->stack[((hsi*451440+21762820)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*1523610+17674020)*1+lsi)*1]), &(inteval->stack[((hsi*564300+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*507870+210900)*1+lsi)*1]),2970);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*2726460+19197630)*1+lsi)*1]), &(inteval->stack[((hsi*1523610+17674020)*1+lsi)*1]), &(inteval->stack[((hsi*1363230+37469502)*1+lsi)*1]),2970);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*4039200+21924090)*1+lsi)*1]), &(inteval->stack[((hsi*2726460+19197630)*1+lsi)*1]), &(inteval->stack[((hsi*2423520+38832732)*1+lsi)*1]),2970);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*5346000+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*4039200+21924090)*1+lsi)*1]), &(inteval->stack[((hsi*3564000+41256252)*1+lsi)*1]),2970);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*6548850+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*5346000+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*4677750+44820252)*1+lsi)*1]),2970);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*7567560+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*6548850+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*5675670+49498002)*1+lsi)*1]),2970);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*8339760+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*7567560+34645032)*1+lsi)*1]), &(inteval->stack[((hsi*6486480+28158552)*1+lsi)*1]),2970);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*8820900+1232100)*1+lsi)*1]), &(inteval->stack[((hsi*8339760+17109720)*1+lsi)*1]), &(inteval->stack[((hsi*7056720+10053000)*1+lsi)*1]),2970);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8820900+1232100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
