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
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_M__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_K__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,936660)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_K__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*5148+859451)*1+lsi)*1]), &(inteval->stack[((hsi*4356+864599)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+6939228)*1+lsi)*1]), &(inteval->stack[((hsi*6006+853445)*1+lsi)*1]), &(inteval->stack[((hsi*5148+859451)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+6954672)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6939228)*1+lsi)*1]), &(inteval->stack[((hsi*13068+6926160)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+6980808)*1+lsi)*1]), &(inteval->stack[((hsi*6930+846515)*1+lsi)*1]), &(inteval->stack[((hsi*6006+853445)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+6998826)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6980808)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6939228)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+7029714)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6998826)*1+lsi)*1]), &(inteval->stack[((hsi*26136+6954672)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+7073274)*1+lsi)*1]), &(inteval->stack[((hsi*7920+838595)*1+lsi)*1]), &(inteval->stack[((hsi*6930+846515)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+7094064)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7073274)*1+lsi)*1]), &(inteval->stack[((hsi*18018+6980808)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+7130100)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7094064)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6998826)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+7181580)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7130100)*1+lsi)*1]), &(inteval->stack[((hsi*43560+7029714)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+6980808)*1+lsi)*1]), &(inteval->stack[((hsi*8976+829619)*1+lsi)*1]), &(inteval->stack[((hsi*7920+838595)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+7246920)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6980808)*1+lsi)*1]), &(inteval->stack[((hsi*20790+7073274)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+7288500)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7246920)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7094064)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+7348560)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7288500)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7130100)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+7073274)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7348560)*1+lsi)*1]), &(inteval->stack[((hsi*65340+7181580)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+7425780)*1+lsi)*1]), &(inteval->stack[((hsi*10098+819521)*1+lsi)*1]), &(inteval->stack[((hsi*8976+829619)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+7452708)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7425780)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6980808)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+7500228)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7452708)*1+lsi)*1]), &(inteval->stack[((hsi*41580+7246920)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+7569528)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7500228)*1+lsi)*1]), &(inteval->stack[((hsi*60060+7288500)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+7659618)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7569528)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7348560)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+7246920)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7659618)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7073274)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+7368888)*1+lsi)*1]), &(inteval->stack[((hsi*11286+808235)*1+lsi)*1]), &(inteval->stack[((hsi*10098+819521)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+7767726)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7368888)*1+lsi)*1]), &(inteval->stack[((hsi*26928+7425780)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+7821582)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7767726)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7452708)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+7900782)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7821582)*1+lsi)*1]), &(inteval->stack[((hsi*69300+7500228)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+7399182)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7900782)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7569528)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+8004732)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7399182)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7659618)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+7525308)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8004732)*1+lsi)*1]), &(inteval->stack[((hsi*121968+7246920)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*4356+864599)*1+lsi)*1]), &(inteval->stack[((hsi*3630+868955)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+7693014)*1+lsi)*1]), &(inteval->stack[((hsi*13068+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*10890+7682124)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+819521)*1+lsi)*1]), &(inteval->stack[((hsi*26136+6954672)*1+lsi)*1]), &(inteval->stack[((hsi*21780+7693014)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*43560+7029714)*1+lsi)*1]), &(inteval->stack[((hsi*36300+819521)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+6980610)*1+lsi)*1]), &(inteval->stack[((hsi*65340+7181580)*1+lsi)*1]), &(inteval->stack[((hsi*54450+6926160)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+8148876)*1+lsi)*1]), &(inteval->stack[((hsi*91476+7073274)*1+lsi)*1]), &(inteval->stack[((hsi*76230+6980610)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*121968+7246920)*1+lsi)*1]), &(inteval->stack[((hsi*101640+8148876)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+7056840)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7525308)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6926160)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*12540+795695)*1+lsi)*1]), &(inteval->stack[((hsi*11286+808235)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*33858+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*30294+7368888)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*53856+7767726)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*89760+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*79200+7821582)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*103950+7900782)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*145530+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*126126+7399182)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8004732)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*185328+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*156816+7525308)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*196020+7682124)*1+lsi)*1]), &(inteval->stack[((hsi*163350+7056840)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*6084+780173)*1+lsi)*1]), &(inteval->stack[((hsi*5148+786257)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+6941604)*1+lsi)*1]), &(inteval->stack[((hsi*7098+773075)*1+lsi)*1]), &(inteval->stack[((hsi*6084+780173)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+6959856)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6941604)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6926160)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+6990744)*1+lsi)*1]), &(inteval->stack[((hsi*8190+764885)*1+lsi)*1]), &(inteval->stack[((hsi*7098+773075)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+7012038)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6990744)*1+lsi)*1]), &(inteval->stack[((hsi*18252+6941604)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+7048542)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7012038)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6959856)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+7100022)*1+lsi)*1]), &(inteval->stack[((hsi*9360+755525)*1+lsi)*1]), &(inteval->stack[((hsi*8190+764885)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+7124592)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7100022)*1+lsi)*1]), &(inteval->stack[((hsi*21294+6990744)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+795695)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7124592)*1+lsi)*1]), &(inteval->stack[((hsi*36504+7012038)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+7419840)*1+lsi)*1]), &(inteval->stack[((hsi*60840+795695)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7048542)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+6990744)*1+lsi)*1]), &(inteval->stack[((hsi*10608+744917)*1+lsi)*1]), &(inteval->stack[((hsi*9360+755525)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+7167180)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6990744)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7100022)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+7497060)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7167180)*1+lsi)*1]), &(inteval->stack[((hsi*42588+7124592)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+7568040)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7497060)*1+lsi)*1]), &(inteval->stack[((hsi*60840+795695)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+7659300)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7568040)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7419840)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+795695)*1+lsi)*1]), &(inteval->stack[((hsi*11934+732983)*1+lsi)*1]), &(inteval->stack[((hsi*10608+744917)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+7100022)*1+lsi)*1]), &(inteval->stack[((hsi*31824+795695)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6990744)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+7767408)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7100022)*1+lsi)*1]), &(inteval->stack[((hsi*49140+7167180)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+7849308)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7767408)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7497060)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+7955778)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7849308)*1+lsi)*1]), &(inteval->stack[((hsi*91260+7568040)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+7497060)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7955778)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7659300)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+7156182)*1+lsi)*1]), &(inteval->stack[((hsi*13338+719645)*1+lsi)*1]), &(inteval->stack[((hsi*11934+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+8083542)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7156182)*1+lsi)*1]), &(inteval->stack[((hsi*31824+795695)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+8147190)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8083542)*1+lsi)*1]), &(inteval->stack[((hsi*56160+7100022)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+8240790)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8147190)*1+lsi)*1]), &(inteval->stack[((hsi*81900+7767408)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+8363640)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8240790)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7849308)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+7767408)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8363640)*1+lsi)*1]), &(inteval->stack[((hsi*127764+7955778)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+8512698)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7767408)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7497060)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*5148+786257)*1+lsi)*1]), &(inteval->stack[((hsi*4290+791405)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+732983)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*12870+7937760)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6959856)*1+lsi)*1]), &(inteval->stack[((hsi*25740+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+732983)*1+lsi)*1]), &(inteval->stack[((hsi*51480+7048542)*1+lsi)*1]), &(inteval->stack[((hsi*42900+7937760)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*77220+7419840)*1+lsi)*1]), &(inteval->stack[((hsi*64350+732983)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*108108+7659300)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6926160)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*144144+7497060)*1+lsi)*1]), &(inteval->stack[((hsi*120120+7937760)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+7419840)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8512698)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6926160)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*14820+704825)*1+lsi)*1]), &(inteval->stack[((hsi*13338+719645)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+6966174)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*35802+7156182)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+7037778)*1+lsi)*1]), &(inteval->stack[((hsi*71604+6966174)*1+lsi)*1]), &(inteval->stack[((hsi*63648+8083542)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7037778)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8147190)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*122850+8240790)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8363640)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+8136504)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7937760)*1+lsi)*1]), &(inteval->stack[((hsi*170352+7767408)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+7612890)*1+lsi)*1]), &(inteval->stack[((hsi*219024+8136504)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8512698)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*231660+7612890)*1+lsi)*1]), &(inteval->stack[((hsi*193050+7419840)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+7419840)*1+lsi)*1]), &(inteval->stack[((hsi*235950+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*199650+7220190)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+704825)*1+lsi)*1]), &(inteval->stack[((hsi*7098+686716)*1+lsi)*1]), &(inteval->stack[((hsi*6006+693814)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+722843)*1+lsi)*1]), &(inteval->stack[((hsi*8281+678435)*1+lsi)*1]), &(inteval->stack[((hsi*7098+686716)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+744137)*1+lsi)*1]), &(inteval->stack[((hsi*21294+722843)*1+lsi)*1]), &(inteval->stack[((hsi*18018+704825)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+780173)*1+lsi)*1]), &(inteval->stack[((hsi*9555+668880)*1+lsi)*1]), &(inteval->stack[((hsi*8281+678435)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+805016)*1+lsi)*1]), &(inteval->stack[((hsi*24843+780173)*1+lsi)*1]), &(inteval->stack[((hsi*21294+722843)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*42588+805016)*1+lsi)*1]), &(inteval->stack[((hsi*36036+744137)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+7162110)*1+lsi)*1]), &(inteval->stack[((hsi*10920+657960)*1+lsi)*1]), &(inteval->stack[((hsi*9555+668880)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+8078850)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7162110)*1+lsi)*1]), &(inteval->stack[((hsi*24843+780173)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+8128536)*1+lsi)*1]), &(inteval->stack[((hsi*49686+8078850)*1+lsi)*1]), &(inteval->stack[((hsi*42588+805016)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+780173)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8128536)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8018790)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+8199516)*1+lsi)*1]), &(inteval->stack[((hsi*12376+645584)*1+lsi)*1]), &(inteval->stack[((hsi*10920+657960)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+8232276)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8199516)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7162110)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+8289606)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8232276)*1+lsi)*1]), &(inteval->stack[((hsi*49686+8078850)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+8372416)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8289606)*1+lsi)*1]), &(inteval->stack[((hsi*70980+8128536)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+8478886)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8372416)*1+lsi)*1]), &(inteval->stack[((hsi*90090+780173)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+8078850)*1+lsi)*1]), &(inteval->stack[((hsi*13923+631661)*1+lsi)*1]), &(inteval->stack[((hsi*12376+645584)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+8115978)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8078850)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8199516)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+8605012)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8115978)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8232276)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+8700562)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8605012)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8289606)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+8181498)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8700562)*1+lsi)*1]), &(inteval->stack[((hsi*106470+8372416)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+8824777)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8181498)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8478886)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+8330556)*1+lsi)*1]), &(inteval->stack[((hsi*15561+616100)*1+lsi)*1]), &(inteval->stack[((hsi*13923+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+8372325)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8330556)*1+lsi)*1]), &(inteval->stack[((hsi*37128+8078850)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+8992945)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8372325)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8115978)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+9102145)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8992945)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8605012)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+9245470)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9102145)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8700562)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+8605012)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9245470)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8181498)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+8078850)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8605012)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8824777)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+631661)*1+lsi)*1]), &(inteval->stack[((hsi*6006+693814)*1+lsi)*1]), &(inteval->stack[((hsi*5005+699820)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+646676)*1+lsi)*1]), &(inteval->stack[((hsi*18018+704825)*1+lsi)*1]), &(inteval->stack[((hsi*15015+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+676706)*1+lsi)*1]), &(inteval->stack[((hsi*36036+744137)*1+lsi)*1]), &(inteval->stack[((hsi*30030+646676)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+9419371)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*50050+676706)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+631661)*1+lsi)*1]), &(inteval->stack[((hsi*90090+780173)*1+lsi)*1]), &(inteval->stack[((hsi*75075+9419371)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+9419371)*1+lsi)*1]), &(inteval->stack[((hsi*126126+8478886)*1+lsi)*1]), &(inteval->stack[((hsi*105105+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+631661)*1+lsi)*1]), &(inteval->stack[((hsi*168168+8824777)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9419371)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+9419371)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8078850)*1+lsi)*1]), &(inteval->stack[((hsi*180180+631661)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+631661)*1+lsi)*1]), &(inteval->stack[((hsi*17290+598810)*1+lsi)*1]), &(inteval->stack[((hsi*15561+616100)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+678344)*1+lsi)*1]), &(inteval->stack[((hsi*46683+631661)*1+lsi)*1]), &(inteval->stack[((hsi*41769+8330556)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+8803756)*1+lsi)*1]), &(inteval->stack[((hsi*83538+678344)*1+lsi)*1]), &(inteval->stack[((hsi*74256+8372325)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+8295066)*1+lsi)*1]), &(inteval->stack[((hsi*123760+8803756)*1+lsi)*1]), &(inteval->stack[((hsi*109200+8992945)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+8803756)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8295066)*1+lsi)*1]), &(inteval->stack[((hsi*143325+9102145)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+8295066)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8803756)*1+lsi)*1]), &(inteval->stack[((hsi*173901+9245470)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+8803756)*1+lsi)*1]), &(inteval->stack[((hsi*231868+8295066)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8605012)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+8295066)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8803756)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8078850)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+8565336)*1+lsi)*1]), &(inteval->stack[((hsi*270270+8295066)*1+lsi)*1]), &(inteval->stack[((hsi*225225+9419371)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+8840611)*1+lsi)*1]), &(inteval->stack[((hsi*275275+8565336)*1+lsi)*1]), &(inteval->stack[((hsi*235950+6926160)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+9548461)*1+lsi)*1]), &(inteval->stack[((hsi*707850+8840611)*1+lsi)*1]), &(inteval->stack[((hsi*598950+7419840)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*8190+577915)*1+lsi)*1]), &(inteval->stack[((hsi*6930+586105)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+8039580)*1+lsi)*1]), &(inteval->stack[((hsi*9555+568360)*1+lsi)*1]), &(inteval->stack[((hsi*8190+577915)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+8064150)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8039580)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8018790)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+8105730)*1+lsi)*1]), &(inteval->stack[((hsi*11025+557335)*1+lsi)*1]), &(inteval->stack[((hsi*9555+568360)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+8134395)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8105730)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8039580)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+8183535)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8134395)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8064150)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+8252835)*1+lsi)*1]), &(inteval->stack[((hsi*12600+544735)*1+lsi)*1]), &(inteval->stack[((hsi*11025+557335)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*33075+8252835)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8105730)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+8285910)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8134395)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+598810)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8285910)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8183535)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+6983490)*1+lsi)*1]), &(inteval->stack[((hsi*14280+530455)*1+lsi)*1]), &(inteval->stack[((hsi*12600+544735)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7021290)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6983490)*1+lsi)*1]), &(inteval->stack[((hsi*33075+8252835)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+8367810)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7021290)*1+lsi)*1]), &(inteval->stack[((hsi*57330+6926160)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+702760)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8367810)*1+lsi)*1]), &(inteval->stack[((hsi*81900+8285910)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*122850+702760)*1+lsi)*1]), &(inteval->stack[((hsi*103950+598810)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+7087440)*1+lsi)*1]), &(inteval->stack[((hsi*16065+514390)*1+lsi)*1]), &(inteval->stack[((hsi*14280+530455)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+8252835)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7087440)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6983490)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+10891891)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8252835)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7021290)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10891891)*1+lsi)*1]), &(inteval->stack[((hsi*95550+8367810)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+8328435)*1+lsi)*1]), &(inteval->stack[((hsi*143325+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*122850+702760)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+11002141)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8328435)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10746361)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+702760)*1+lsi)*1]), &(inteval->stack[((hsi*17955+496435)*1+lsi)*1]), &(inteval->stack[((hsi*16065+514390)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+750955)*1+lsi)*1]), &(inteval->stack[((hsi*48195+702760)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7087440)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+7069485)*1+lsi)*1]), &(inteval->stack[((hsi*85680+750955)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8252835)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+11196181)*1+lsi)*1]), &(inteval->stack[((hsi*126000+7069485)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10891891)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+11361556)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11196181)*1+lsi)*1]), &(inteval->stack[((hsi*143325+6926160)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+11562211)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11361556)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8328435)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+8252835)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11562211)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11002141)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*6930+586105)*1+lsi)*1]), &(inteval->stack[((hsi*5775+593035)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+6943485)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*17325+6926160)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+10891891)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8064150)*1+lsi)*1]), &(inteval->stack[((hsi*34650+6943485)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*69300+8183535)*1+lsi)*1]), &(inteval->stack[((hsi*57750+10891891)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+8105415)*1+lsi)*1]), &(inteval->stack[((hsi*103950+598810)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8018790)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+514390)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8105415)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11002141)*1+lsi)*1]), &(inteval->stack[((hsi*161700+514390)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+11791531)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8252835)*1+lsi)*1]), &(inteval->stack[((hsi*207900+10746361)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*19950+476485)*1+lsi)*1]), &(inteval->stack[((hsi*17955+496435)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+10800226)*1+lsi)*1]), &(inteval->stack[((hsi*53865+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*48195+702760)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+10896616)*1+lsi)*1]), &(inteval->stack[((hsi*96390+10800226)*1+lsi)*1]), &(inteval->stack[((hsi*85680+750955)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+476485)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10896616)*1+lsi)*1]), &(inteval->stack[((hsi*126000+7069485)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*189000+476485)*1+lsi)*1]), &(inteval->stack[((hsi*165375+11196181)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+476485)*1+lsi)*1]), &(inteval->stack[((hsi*231525+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*200655+11361556)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*267540+476485)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11562211)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+11041201)*1+lsi)*1]), &(inteval->stack[((hsi*294840+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*249480+8252835)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*311850+11041201)*1+lsi)*1]), &(inteval->stack[((hsi*259875+11791531)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*317625+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*275275+8565336)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+11572186)*1+lsi)*1]), &(inteval->stack[((hsi*825825+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*707850+8840611)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+12987886)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+11572186)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+9548461)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+8336415)*1+lsi)*1]), &(inteval->stack[((hsi*9360+452605)*1+lsi)*1]), &(inteval->stack[((hsi*7920+461965)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+8360175)*1+lsi)*1]), &(inteval->stack[((hsi*10920+441685)*1+lsi)*1]), &(inteval->stack[((hsi*9360+452605)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+8388255)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8360175)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8336415)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+8435775)*1+lsi)*1]), &(inteval->stack[((hsi*12600+429085)*1+lsi)*1]), &(inteval->stack[((hsi*10920+441685)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+8468535)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8435775)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8360175)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+8524695)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8468535)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8388255)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+8603895)*1+lsi)*1]), &(inteval->stack[((hsi*14400+414685)*1+lsi)*1]), &(inteval->stack[((hsi*12600+429085)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+8641695)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8603895)*1+lsi)*1]), &(inteval->stack[((hsi*32760+8435775)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+8707215)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8641695)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8468535)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+8800815)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8707215)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8524695)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+8919615)*1+lsi)*1]), &(inteval->stack[((hsi*16320+398365)*1+lsi)*1]), &(inteval->stack[((hsi*14400+414685)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+8962815)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8919615)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8603895)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+9038415)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8962815)*1+lsi)*1]), &(inteval->stack[((hsi*65520+8641695)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+9147615)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9038415)*1+lsi)*1]), &(inteval->stack[((hsi*93600+8707215)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+476485)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9147615)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8800815)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*18360+380005)*1+lsi)*1]), &(inteval->stack[((hsi*16320+398365)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+9288015)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*43200+8919615)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+6975120)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9288015)*1+lsi)*1]), &(inteval->stack[((hsi*75600+8962815)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+642805)*1+lsi)*1]), &(inteval->stack[((hsi*126000+6975120)*1+lsi)*1]), &(inteval->stack[((hsi*109200+9038415)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+8919615)*1+lsi)*1]), &(inteval->stack[((hsi*163800+642805)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9147615)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8919615)*1+lsi)*1]), &(inteval->stack[((hsi*166320+476485)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+8603895)*1+lsi)*1]), &(inteval->stack[((hsi*20520+359485)*1+lsi)*1]), &(inteval->stack[((hsi*18360+380005)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+9374415)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8603895)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6926160)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+9116175)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9374415)*1+lsi)*1]), &(inteval->stack[((hsi*86400+9288015)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+15206146)*1+lsi)*1]), &(inteval->stack[((hsi*144000+9116175)*1+lsi)*1]), &(inteval->stack[((hsi*126000+6975120)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15206146)*1+lsi)*1]), &(inteval->stack[((hsi*163800+642805)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+15395146)*1+lsi)*1]), &(inteval->stack[((hsi*229320+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*196560+8919615)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+15657226)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15395146)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14984386)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+642805)*1+lsi)*1]), &(inteval->stack[((hsi*7920+461965)*1+lsi)*1]), &(inteval->stack[((hsi*6600+469885)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+662605)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8336415)*1+lsi)*1]), &(inteval->stack[((hsi*19800+642805)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+8919615)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8388255)*1+lsi)*1]), &(inteval->stack[((hsi*39600+662605)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+642805)*1+lsi)*1]), &(inteval->stack[((hsi*79200+8524695)*1+lsi)*1]), &(inteval->stack[((hsi*66000+8919615)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+8336415)*1+lsi)*1]), &(inteval->stack[((hsi*118800+8800815)*1+lsi)*1]), &(inteval->stack[((hsi*99000+642805)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+8658975)*1+lsi)*1]), &(inteval->stack[((hsi*166320+476485)*1+lsi)*1]), &(inteval->stack[((hsi*138600+8336415)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+380005)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*184800+8658975)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+8658975)*1+lsi)*1]), &(inteval->stack[((hsi*285120+15657226)*1+lsi)*1]), &(inteval->stack[((hsi*237600+380005)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+380005)*1+lsi)*1]), &(inteval->stack[((hsi*22800+336685)*1+lsi)*1]), &(inteval->stack[((hsi*20520+359485)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+441565)*1+lsi)*1]), &(inteval->stack[((hsi*61560+380005)*1+lsi)*1]), &(inteval->stack[((hsi*55080+8603895)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+8336415)*1+lsi)*1]), &(inteval->stack[((hsi*110160+441565)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9374415)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+336685)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8336415)*1+lsi)*1]), &(inteval->stack[((hsi*144000+9116175)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+8955975)*1+lsi)*1]), &(inteval->stack[((hsi*216000+336685)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15206146)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+336685)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8955975)*1+lsi)*1]), &(inteval->stack[((hsi*229320+6926160)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+8955975)*1+lsi)*1]), &(inteval->stack[((hsi*305760+336685)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15395146)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*336960+8955975)*1+lsi)*1]), &(inteval->stack[((hsi*285120+15657226)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+8955975)*1+lsi)*1]), &(inteval->stack[((hsi*356400+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*297000+8658975)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*363000+8955975)*1+lsi)*1]), &(inteval->stack[((hsi*317625+8018790)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+15937261)*1+lsi)*1]), &(inteval->stack[((hsi*952875+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*825825+10746361)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+17588911)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+15937261)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+11572186)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+19948411)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+17588911)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+12987886)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*10608+309621)*1+lsi)*1]), &(inteval->stack[((hsi*8976+320229)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+10773289)*1+lsi)*1]), &(inteval->stack[((hsi*12376+297245)*1+lsi)*1]), &(inteval->stack[((hsi*10608+309621)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+10805113)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10773289)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10746361)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+10858969)*1+lsi)*1]), &(inteval->stack[((hsi*14280+282965)*1+lsi)*1]), &(inteval->stack[((hsi*12376+297245)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+10896097)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10858969)*1+lsi)*1]), &(inteval->stack[((hsi*31824+10773289)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+10959745)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10896097)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10805113)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+11049505)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266645)*1+lsi)*1]), &(inteval->stack[((hsi*14280+282965)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+11092345)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11049505)*1+lsi)*1]), &(inteval->stack[((hsi*37128+10858969)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+11166601)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11092345)*1+lsi)*1]), &(inteval->stack[((hsi*63648+10896097)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+11272681)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11166601)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10959745)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+11407321)*1+lsi)*1]), &(inteval->stack[((hsi*18496+248149)*1+lsi)*1]), &(inteval->stack[((hsi*16320+266645)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+11456281)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11407321)*1+lsi)*1]), &(inteval->stack[((hsi*42840+11049505)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+11541961)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11456281)*1+lsi)*1]), &(inteval->stack[((hsi*74256+11092345)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+11665721)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11541961)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11166601)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+11824841)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11665721)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11272681)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+12013337)*1+lsi)*1]), &(inteval->stack[((hsi*20808+227341)*1+lsi)*1]), &(inteval->stack[((hsi*18496+248149)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*55488+12013337)*1+lsi)*1]), &(inteval->stack[((hsi*48960+11407321)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+12068825)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*85680+11456281)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+8116710)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12068825)*1+lsi)*1]), &(inteval->stack[((hsi*123760+11541961)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+12211625)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8116710)*1+lsi)*1]), &(inteval->stack[((hsi*159120+11665721)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+8302350)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12211625)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11824841)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+12434393)*1+lsi)*1]), &(inteval->stack[((hsi*23256+204085)*1+lsi)*1]), &(inteval->stack[((hsi*20808+227341)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+336685)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12434393)*1+lsi)*1]), &(inteval->stack[((hsi*55488+12013337)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+12496817)*1+lsi)*1]), &(inteval->stack[((hsi*110976+336685)*1+lsi)*1]), &(inteval->stack[((hsi*97920+8018790)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+447661)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12496817)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12068825)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+11407321)*1+lsi)*1]), &(inteval->stack[((hsi*214200+447661)*1+lsi)*1]), &(inteval->stack[((hsi*185640+8116710)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+8553678)*1+lsi)*1]), &(inteval->stack[((hsi*259896+11407321)*1+lsi)*1]), &(inteval->stack[((hsi*222768+12211625)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+12013337)*1+lsi)*1]), &(inteval->stack[((hsi*297024+8553678)*1+lsi)*1]), &(inteval->stack[((hsi*251328+8302350)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+12660017)*1+lsi)*1]), &(inteval->stack[((hsi*8976+320229)*1+lsi)*1]), &(inteval->stack[((hsi*7480+329205)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+12682457)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*22440+12660017)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10805113)*1+lsi)*1]), &(inteval->stack[((hsi*44880+12682457)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+12660017)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10959745)*1+lsi)*1]), &(inteval->stack[((hsi*74800+6926160)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11272681)*1+lsi)*1]), &(inteval->stack[((hsi*112200+12660017)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+10903441)*1+lsi)*1]), &(inteval->stack[((hsi*188496+11824841)*1+lsi)*1]), &(inteval->stack[((hsi*157080+10746361)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+11667217)*1+lsi)*1]), &(inteval->stack[((hsi*251328+8302350)*1+lsi)*1]), &(inteval->stack[((hsi*209440+10903441)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+10746361)*1+lsi)*1]), &(inteval->stack[((hsi*323136+12013337)*1+lsi)*1]), &(inteval->stack[((hsi*269280+11667217)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*25840+178245)*1+lsi)*1]), &(inteval->stack[((hsi*23256+204085)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+8088558)*1+lsi)*1]), &(inteval->stack[((hsi*69768+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*62424+12434393)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+11667217)*1+lsi)*1]), &(inteval->stack[((hsi*124848+8088558)*1+lsi)*1]), &(inteval->stack[((hsi*110976+336685)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*184960+11667217)*1+lsi)*1]), &(inteval->stack[((hsi*163200+12496817)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+12336473)*1+lsi)*1]), &(inteval->stack[((hsi*244800+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*214200+447661)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+178245)*1+lsi)*1]), &(inteval->stack[((hsi*299880+12336473)*1+lsi)*1]), &(inteval->stack[((hsi*259896+11407321)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+11082961)*1+lsi)*1]), &(inteval->stack[((hsi*346528+178245)*1+lsi)*1]), &(inteval->stack[((hsi*297024+8553678)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*381888+11082961)*1+lsi)*1]), &(inteval->stack[((hsi*323136+12013337)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+11082961)*1+lsi)*1]), &(inteval->stack[((hsi*403920+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*336600+10746361)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+11494361)*1+lsi)*1]), &(inteval->stack[((hsi*411400+11082961)*1+lsi)*1]), &(inteval->stack[((hsi*363000+8955975)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+22943161)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+11494361)*1+lsi)*1]), &(inteval->stack[((hsi*952875+14984386)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+24848911)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+22943161)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+15937261)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+27601661)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+24848911)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+17588911)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+27601661)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+19948411)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*4290+925715)*1+lsi)*1]), &(inteval->stack[((hsi*3630+930005)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+8029680)*1+lsi)*1]), &(inteval->stack[((hsi*5005+920710)*1+lsi)*1]), &(inteval->stack[((hsi*4290+925715)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+8042550)*1+lsi)*1]), &(inteval->stack[((hsi*12870+8029680)*1+lsi)*1]), &(inteval->stack[((hsi*10890+8018790)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+8064330)*1+lsi)*1]), &(inteval->stack[((hsi*5775+914935)*1+lsi)*1]), &(inteval->stack[((hsi*5005+920710)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+8079345)*1+lsi)*1]), &(inteval->stack[((hsi*15015+8064330)*1+lsi)*1]), &(inteval->stack[((hsi*12870+8029680)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+8105085)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8079345)*1+lsi)*1]), &(inteval->stack[((hsi*21780+8042550)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+8141385)*1+lsi)*1]), &(inteval->stack[((hsi*6600+908335)*1+lsi)*1]), &(inteval->stack[((hsi*5775+914935)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+8158710)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8141385)*1+lsi)*1]), &(inteval->stack[((hsi*15015+8064330)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+8188740)*1+lsi)*1]), &(inteval->stack[((hsi*30030+8158710)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8079345)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+8231640)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8188740)*1+lsi)*1]), &(inteval->stack[((hsi*36300+8105085)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+8286090)*1+lsi)*1]), &(inteval->stack[((hsi*7480+900855)*1+lsi)*1]), &(inteval->stack[((hsi*6600+908335)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+8305890)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8286090)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8141385)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+8340540)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8305890)*1+lsi)*1]), &(inteval->stack[((hsi*30030+8158710)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+8390590)*1+lsi)*1]), &(inteval->stack[((hsi*50050+8340540)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8188740)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+8454940)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8390590)*1+lsi)*1]), &(inteval->stack[((hsi*54450+8231640)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+8531170)*1+lsi)*1]), &(inteval->stack[((hsi*8415+892440)*1+lsi)*1]), &(inteval->stack[((hsi*7480+900855)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+8553610)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8531170)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8286090)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+8593210)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8553610)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8305890)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+8650960)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8593210)*1+lsi)*1]), &(inteval->stack[((hsi*50050+8340540)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+8726035)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8650960)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8390590)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8726035)*1+lsi)*1]), &(inteval->stack[((hsi*76230+8454940)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+8816125)*1+lsi)*1]), &(inteval->stack[((hsi*9405+883035)*1+lsi)*1]), &(inteval->stack[((hsi*8415+892440)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+8841370)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8816125)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8531170)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+178245)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8841370)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8553610)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+19278676)*1+lsi)*1]), &(inteval->stack[((hsi*66000+178245)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8593210)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+8886250)*1+lsi)*1]), &(inteval->stack[((hsi*86625+19278676)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8650960)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+244245)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8886250)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8726035)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+19365301)*1+lsi)*1]), &(inteval->stack[((hsi*120120+244245)*1+lsi)*1]), &(inteval->stack[((hsi*101640+19177036)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+8991355)*1+lsi)*1]), &(inteval->stack[((hsi*3630+930005)*1+lsi)*1]), &(inteval->stack[((hsi*3025+933635)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+9000430)*1+lsi)*1]), &(inteval->stack[((hsi*10890+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*9075+8991355)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+9018580)*1+lsi)*1]), &(inteval->stack[((hsi*21780+8042550)*1+lsi)*1]), &(inteval->stack[((hsi*18150+9000430)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+364365)*1+lsi)*1]), &(inteval->stack[((hsi*36300+8105085)*1+lsi)*1]), &(inteval->stack[((hsi*30250+9018580)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+8991355)*1+lsi)*1]), &(inteval->stack[((hsi*54450+8231640)*1+lsi)*1]), &(inteval->stack[((hsi*45375+364365)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+364365)*1+lsi)*1]), &(inteval->stack[((hsi*76230+8454940)*1+lsi)*1]), &(inteval->stack[((hsi*63525+8991355)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+8018790)*1+lsi)*1]), &(inteval->stack[((hsi*101640+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*84700+364365)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+8127690)*1+lsi)*1]), &(inteval->stack[((hsi*130680+19365301)*1+lsi)*1]), &(inteval->stack[((hsi*108900+8018790)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+8991355)*1+lsi)*1]), &(inteval->stack[((hsi*10450+872585)*1+lsi)*1]), &(inteval->stack[((hsi*9405+883035)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+364365)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8991355)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8816125)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+8263815)*1+lsi)*1]), &(inteval->stack[((hsi*50490+364365)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8841370)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+364365)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8263815)*1+lsi)*1]), &(inteval->stack[((hsi*66000+178245)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+8263815)*1+lsi)*1]), &(inteval->stack[((hsi*99000+364365)*1+lsi)*1]), &(inteval->stack[((hsi*86625+19278676)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+364365)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8263815)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8886250)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+8263815)*1+lsi)*1]), &(inteval->stack[((hsi*140140+364365)*1+lsi)*1]), &(inteval->stack[((hsi*120120+244245)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+8418255)*1+lsi)*1]), &(inteval->stack[((hsi*154440+8263815)*1+lsi)*1]), &(inteval->stack[((hsi*130680+19365301)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+8581605)*1+lsi)*1]), &(inteval->stack[((hsi*163350+8418255)*1+lsi)*1]), &(inteval->stack[((hsi*136125+8127690)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+8747980)*1+lsi)*1]), &(inteval->stack[((hsi*199650+7220190)*1+lsi)*1]), &(inteval->stack[((hsi*166375+8581605)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+31140911)*1+lsi)*1]), &(inteval->stack[((hsi*598950+7419840)*1+lsi)*1]), &(inteval->stack[((hsi*499125+8747980)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+9548461)*1+lsi)*1]), &(inteval->stack[((hsi*998250+31140911)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+31140911)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+12987886)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+6926160)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+19948411)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+31140911)*1+lsi)*1]),3025);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*4658500+31140911)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+14984386)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+6926160)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*11934+147798)*1+lsi)*1]), &(inteval->stack[((hsi*10098+159732)*1+lsi)*1]),153);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+6956454)*1+lsi)*1]), &(inteval->stack[((hsi*13923+133875)*1+lsi)*1]), &(inteval->stack[((hsi*11934+147798)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+6992256)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6956454)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6926160)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+7052844)*1+lsi)*1]), &(inteval->stack[((hsi*16065+117810)*1+lsi)*1]), &(inteval->stack[((hsi*13923+133875)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+7094613)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7052844)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6956454)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+7166217)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7094613)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6992256)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+7267197)*1+lsi)*1]), &(inteval->stack[((hsi*18360+99450)*1+lsi)*1]), &(inteval->stack[((hsi*16065+117810)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+7315392)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7267197)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7052844)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7315392)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7094613)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+7398930)*1+lsi)*1]), &(inteval->stack[((hsi*119340+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7166217)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+19296376)*1+lsi)*1]), &(inteval->stack[((hsi*20808+78642)*1+lsi)*1]), &(inteval->stack[((hsi*18360+99450)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+19351456)*1+lsi)*1]), &(inteval->stack[((hsi*55080+19296376)*1+lsi)*1]), &(inteval->stack[((hsi*48195+7267197)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+7550400)*1+lsi)*1]), &(inteval->stack[((hsi*96390+19351456)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7315392)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+19447846)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7550400)*1+lsi)*1]), &(inteval->stack[((hsi*119340+19177036)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+7689630)*1+lsi)*1]), &(inteval->stack[((hsi*179010+19447846)*1+lsi)*1]), &(inteval->stack[((hsi*151470+7398930)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+19626856)*1+lsi)*1]), &(inteval->stack[((hsi*23409+55233)*1+lsi)*1]), &(inteval->stack[((hsi*20808+78642)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+19689280)*1+lsi)*1]), &(inteval->stack[((hsi*62424+19626856)*1+lsi)*1]), &(inteval->stack[((hsi*55080+19296376)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+7901688)*1+lsi)*1]), &(inteval->stack[((hsi*110160+19689280)*1+lsi)*1]), &(inteval->stack[((hsi*96390+19351456)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+19799440)*1+lsi)*1]), &(inteval->stack[((hsi*160650+7901688)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7550400)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+8062338)*1+lsi)*1]), &(inteval->stack[((hsi*208845+19799440)*1+lsi)*1]), &(inteval->stack[((hsi*179010+19447846)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+20008285)*1+lsi)*1]), &(inteval->stack[((hsi*250614+8062338)*1+lsi)*1]), &(inteval->stack[((hsi*212058+7689630)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+8312952)*1+lsi)*1]), &(inteval->stack[((hsi*26163+29070)*1+lsi)*1]), &(inteval->stack[((hsi*23409+55233)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+8383179)*1+lsi)*1]), &(inteval->stack[((hsi*70227+8312952)*1+lsi)*1]), &(inteval->stack[((hsi*62424+19626856)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+20291029)*1+lsi)*1]), &(inteval->stack[((hsi*124848+8383179)*1+lsi)*1]), &(inteval->stack[((hsi*110160+19689280)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+8508027)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20291029)*1+lsi)*1]), &(inteval->stack[((hsi*160650+7901688)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+20474629)*1+lsi)*1]), &(inteval->stack[((hsi*240975+8508027)*1+lsi)*1]), &(inteval->stack[((hsi*208845+19799440)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+12583361)*1+lsi)*1]), &(inteval->stack[((hsi*292383+20474629)*1+lsi)*1]), &(inteval->stack[((hsi*250614+8062338)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+8749002)*1+lsi)*1]), &(inteval->stack[((hsi*334152+12583361)*1+lsi)*1]), &(inteval->stack[((hsi*282744+20008285)*1+lsi)*1]),153);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*10098+159732)*1+lsi)*1]), &(inteval->stack[((hsi*8415+169830)*1+lsi)*1]),153);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*50490+20792257)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*25245+20767012)*1+lsi)*1]),153);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+20842747)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6992256)*1+lsi)*1]), &(inteval->stack[((hsi*50490+20792257)*1+lsi)*1]),153);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+12917513)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7166217)*1+lsi)*1]), &(inteval->stack[((hsi*84150+20842747)*1+lsi)*1]),153);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*151470+7398930)*1+lsi)*1]), &(inteval->stack[((hsi*126225+12917513)*1+lsi)*1]),153);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+12917513)*1+lsi)*1]), &(inteval->stack[((hsi*212058+7689630)*1+lsi)*1]), &(inteval->stack[((hsi*176715+20767012)*1+lsi)*1]),153);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*282744+20008285)*1+lsi)*1]), &(inteval->stack[((hsi*235620+12917513)*1+lsi)*1]),153);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*378675+12917513)*1+lsi)*1]), &(inteval->stack[((hsi*363528+8749002)*1+lsi)*1]), &(inteval->stack[((hsi*302940+20767012)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*29070+0)*1+lsi)*1]), &(inteval->stack[((hsi*26163+29070)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+20845501)*1+lsi)*1]), &(inteval->stack[((hsi*78489+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*70227+8312952)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+9112530)*1+lsi)*1]), &(inteval->stack[((hsi*140454+20845501)*1+lsi)*1]), &(inteval->stack[((hsi*124848+8383179)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*208080+9112530)*1+lsi)*1]), &(inteval->stack[((hsi*183600+20291029)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+9112530)*1+lsi)*1]), &(inteval->stack[((hsi*275400+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*240975+8508027)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*337365+9112530)*1+lsi)*1]), &(inteval->stack[((hsi*292383+20474629)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+9112530)*1+lsi)*1]), &(inteval->stack[((hsi*389844+20767012)*1+lsi)*1]), &(inteval->stack[((hsi*334152+12583361)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*429624+9112530)*1+lsi)*1]), &(inteval->stack[((hsi*363528+8749002)*1+lsi)*1]),153);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*462825+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*454410+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*378675+12917513)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1234200+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*462825+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*411400+11082961)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2178000+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+11494361)*1+lsi)*1]),3025);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3176250+9104160)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+22943161)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4129125+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+9104160)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+24848911)*1+lsi)*1]),3025);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*4954950+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+27601661)*1+lsi)*1]),3025);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*5590200+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+6926160)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+14984386)*1+lsi)*1]),3025);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*5989500+936660)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+19177036)*1+lsi)*1]), &(inteval->stack[((hsi*4658500+31140911)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5989500+936660)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
