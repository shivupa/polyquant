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
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_M__0__M__1___TwoPRep_L__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_L__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1135875)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_L__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1058666)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1063814)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+8635818)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1052660)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1058666)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+8651262)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8635818)*1+lsi)*1]), &(inteval->stack[((hsi*13068+8622750)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+8677398)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1045730)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1052660)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+8695416)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8677398)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8635818)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+8726304)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8695416)*1+lsi)*1]), &(inteval->stack[((hsi*26136+8651262)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+8769864)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1037810)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1045730)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+8790654)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8769864)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8677398)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+8826690)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8790654)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8695416)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+8878170)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8826690)*1+lsi)*1]), &(inteval->stack[((hsi*43560+8726304)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+8677398)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1028834)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1037810)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+8943510)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8677398)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8769864)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+8985090)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8943510)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8790654)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+9045150)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8985090)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8826690)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+8769864)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9045150)*1+lsi)*1]), &(inteval->stack[((hsi*65340+8878170)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+9122370)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1018736)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1028834)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+9149298)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9122370)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8677398)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+9196818)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9149298)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8943510)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+9266118)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9196818)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8985090)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+9356208)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9266118)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9045150)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+8943510)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9356208)*1+lsi)*1]), &(inteval->stack[((hsi*91476+8769864)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+9065478)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1007450)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1018736)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+9464316)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9065478)*1+lsi)*1]), &(inteval->stack[((hsi*26928+9122370)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+9518172)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9464316)*1+lsi)*1]), &(inteval->stack[((hsi*47520+9149298)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+9597372)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9518172)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9196818)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+9095772)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9597372)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9266118)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+9701322)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9095772)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9356208)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+9221898)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9701322)*1+lsi)*1]), &(inteval->stack[((hsi*121968+8943510)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1063814)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1068170)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+9389604)*1+lsi)*1]), &(inteval->stack[((hsi*13068+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*10890+9378714)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1018736)*1+lsi)*1]), &(inteval->stack[((hsi*26136+8651262)*1+lsi)*1]), &(inteval->stack[((hsi*21780+9389604)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*43560+8726304)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1018736)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+8677200)*1+lsi)*1]), &(inteval->stack[((hsi*65340+8878170)*1+lsi)*1]), &(inteval->stack[((hsi*54450+8622750)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+9845466)*1+lsi)*1]), &(inteval->stack[((hsi*91476+8769864)*1+lsi)*1]), &(inteval->stack[((hsi*76230+8677200)*1+lsi)*1]),66);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*130680+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*121968+8943510)*1+lsi)*1]), &(inteval->stack[((hsi*101640+9845466)*1+lsi)*1]),66);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*163350+8753430)*1+lsi)*1]), &(inteval->stack[((hsi*156816+9221898)*1+lsi)*1]), &(inteval->stack[((hsi*130680+8622750)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*12540+994910)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1007450)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9065478)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*60588+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9464316)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*89760+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9518172)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9597372)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*145530+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9095772)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9701322)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*185328+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*156816+9221898)*1+lsi)*1]),66);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*199650+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*196020+9378714)*1+lsi)*1]), &(inteval->stack[((hsi*163350+8753430)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*6084+979388)*1+lsi)*1]), &(inteval->stack[((hsi*5148+985472)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+8638194)*1+lsi)*1]), &(inteval->stack[((hsi*7098+972290)*1+lsi)*1]), &(inteval->stack[((hsi*6084+979388)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+8656446)*1+lsi)*1]), &(inteval->stack[((hsi*18252+8638194)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8622750)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+8687334)*1+lsi)*1]), &(inteval->stack[((hsi*8190+964100)*1+lsi)*1]), &(inteval->stack[((hsi*7098+972290)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+8708628)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8687334)*1+lsi)*1]), &(inteval->stack[((hsi*18252+8638194)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+8745132)*1+lsi)*1]), &(inteval->stack[((hsi*36504+8708628)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8656446)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+8796612)*1+lsi)*1]), &(inteval->stack[((hsi*9360+954740)*1+lsi)*1]), &(inteval->stack[((hsi*8190+964100)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+8821182)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8796612)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8687334)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+994910)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8821182)*1+lsi)*1]), &(inteval->stack[((hsi*36504+8708628)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+9116430)*1+lsi)*1]), &(inteval->stack[((hsi*60840+994910)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8745132)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+8687334)*1+lsi)*1]), &(inteval->stack[((hsi*10608+944132)*1+lsi)*1]), &(inteval->stack[((hsi*9360+954740)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+8863770)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8687334)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8796612)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+9193650)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8863770)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8821182)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+9264630)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9193650)*1+lsi)*1]), &(inteval->stack[((hsi*60840+994910)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+9355890)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9264630)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9116430)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+994910)*1+lsi)*1]), &(inteval->stack[((hsi*11934+932198)*1+lsi)*1]), &(inteval->stack[((hsi*10608+944132)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+8796612)*1+lsi)*1]), &(inteval->stack[((hsi*31824+994910)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8687334)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+9463998)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8796612)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8863770)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+9545898)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9463998)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9193650)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+9652368)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9545898)*1+lsi)*1]), &(inteval->stack[((hsi*91260+9264630)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+9193650)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9652368)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9355890)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+8852772)*1+lsi)*1]), &(inteval->stack[((hsi*13338+918860)*1+lsi)*1]), &(inteval->stack[((hsi*11934+932198)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+9780132)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8852772)*1+lsi)*1]), &(inteval->stack[((hsi*31824+994910)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+9843780)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9780132)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8796612)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+9937380)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9843780)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9463998)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+10060230)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9937380)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9545898)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9463998)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10060230)*1+lsi)*1]), &(inteval->stack[((hsi*127764+9652368)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+10209288)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9463998)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9193650)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*5148+985472)*1+lsi)*1]), &(inteval->stack[((hsi*4290+990620)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+932198)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*12870+9634350)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8656446)*1+lsi)*1]), &(inteval->stack[((hsi*25740+932198)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+932198)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8745132)*1+lsi)*1]), &(inteval->stack[((hsi*42900+9634350)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*77220+9116430)*1+lsi)*1]), &(inteval->stack[((hsi*64350+932198)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*108108+9355890)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8622750)*1+lsi)*1]),78);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*154440+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9193650)*1+lsi)*1]), &(inteval->stack[((hsi*120120+9634350)*1+lsi)*1]),78);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*193050+9116430)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10209288)*1+lsi)*1]), &(inteval->stack[((hsi*154440+8622750)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*14820+904040)*1+lsi)*1]), &(inteval->stack[((hsi*13338+918860)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+8662764)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8852772)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+8734368)*1+lsi)*1]), &(inteval->stack[((hsi*71604+8662764)*1+lsi)*1]), &(inteval->stack[((hsi*63648+9780132)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*106080+8734368)*1+lsi)*1]), &(inteval->stack[((hsi*93600+9843780)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*140400+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*122850+9937380)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10060230)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+9833094)*1+lsi)*1]), &(inteval->stack[((hsi*198744+9634350)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9463998)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+9309480)*1+lsi)*1]), &(inteval->stack[((hsi*219024+9833094)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10209288)*1+lsi)*1]),78);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*235950+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9309480)*1+lsi)*1]), &(inteval->stack[((hsi*193050+9116430)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*598950+9116430)*1+lsi)*1]), &(inteval->stack[((hsi*235950+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*199650+8916780)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+904040)*1+lsi)*1]), &(inteval->stack[((hsi*7098+885931)*1+lsi)*1]), &(inteval->stack[((hsi*6006+893029)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+922058)*1+lsi)*1]), &(inteval->stack[((hsi*8281+877650)*1+lsi)*1]), &(inteval->stack[((hsi*7098+885931)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+943352)*1+lsi)*1]), &(inteval->stack[((hsi*21294+922058)*1+lsi)*1]), &(inteval->stack[((hsi*18018+904040)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+979388)*1+lsi)*1]), &(inteval->stack[((hsi*9555+868095)*1+lsi)*1]), &(inteval->stack[((hsi*8281+877650)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1004231)*1+lsi)*1]), &(inteval->stack[((hsi*24843+979388)*1+lsi)*1]), &(inteval->stack[((hsi*21294+922058)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1004231)*1+lsi)*1]), &(inteval->stack[((hsi*36036+943352)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+8858700)*1+lsi)*1]), &(inteval->stack[((hsi*10920+857175)*1+lsi)*1]), &(inteval->stack[((hsi*9555+868095)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+9775440)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8858700)*1+lsi)*1]), &(inteval->stack[((hsi*24843+979388)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+9825126)*1+lsi)*1]), &(inteval->stack[((hsi*49686+9775440)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1004231)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+979388)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9825126)*1+lsi)*1]), &(inteval->stack[((hsi*60060+9715380)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+9896106)*1+lsi)*1]), &(inteval->stack[((hsi*12376+844799)*1+lsi)*1]), &(inteval->stack[((hsi*10920+857175)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+9928866)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9896106)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8858700)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+9986196)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9928866)*1+lsi)*1]), &(inteval->stack[((hsi*49686+9775440)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+10069006)*1+lsi)*1]), &(inteval->stack[((hsi*82810+9986196)*1+lsi)*1]), &(inteval->stack[((hsi*70980+9825126)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+10175476)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10069006)*1+lsi)*1]), &(inteval->stack[((hsi*90090+979388)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+9775440)*1+lsi)*1]), &(inteval->stack[((hsi*13923+830876)*1+lsi)*1]), &(inteval->stack[((hsi*12376+844799)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+9812568)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9775440)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9896106)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+10301602)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9812568)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9928866)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+10397152)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10301602)*1+lsi)*1]), &(inteval->stack[((hsi*82810+9986196)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+9878088)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10397152)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10069006)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+10521367)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9878088)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10175476)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+10027146)*1+lsi)*1]), &(inteval->stack[((hsi*15561+815315)*1+lsi)*1]), &(inteval->stack[((hsi*13923+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+10068915)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10027146)*1+lsi)*1]), &(inteval->stack[((hsi*37128+9775440)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+10689535)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10068915)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9812568)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+10798735)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10689535)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10301602)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+10942060)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10798735)*1+lsi)*1]), &(inteval->stack[((hsi*124215+10397152)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+10301602)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10942060)*1+lsi)*1]), &(inteval->stack[((hsi*149058+9878088)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+9775440)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10301602)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10521367)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+830876)*1+lsi)*1]), &(inteval->stack[((hsi*6006+893029)*1+lsi)*1]), &(inteval->stack[((hsi*5005+899035)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+845891)*1+lsi)*1]), &(inteval->stack[((hsi*18018+904040)*1+lsi)*1]), &(inteval->stack[((hsi*15015+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+875921)*1+lsi)*1]), &(inteval->stack[((hsi*36036+943352)*1+lsi)*1]), &(inteval->stack[((hsi*30030+845891)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+11115961)*1+lsi)*1]), &(inteval->stack[((hsi*60060+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*50050+875921)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+830876)*1+lsi)*1]), &(inteval->stack[((hsi*90090+979388)*1+lsi)*1]), &(inteval->stack[((hsi*75075+11115961)*1+lsi)*1]),91);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*140140+11115961)*1+lsi)*1]), &(inteval->stack[((hsi*126126+10175476)*1+lsi)*1]), &(inteval->stack[((hsi*105105+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*180180+830876)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10521367)*1+lsi)*1]), &(inteval->stack[((hsi*140140+11115961)*1+lsi)*1]),91);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*225225+11115961)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9775440)*1+lsi)*1]), &(inteval->stack[((hsi*180180+830876)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+830876)*1+lsi)*1]), &(inteval->stack[((hsi*17290+798025)*1+lsi)*1]), &(inteval->stack[((hsi*15561+815315)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+877559)*1+lsi)*1]), &(inteval->stack[((hsi*46683+830876)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10027146)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+10500346)*1+lsi)*1]), &(inteval->stack[((hsi*83538+877559)*1+lsi)*1]), &(inteval->stack[((hsi*74256+10068915)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+9991656)*1+lsi)*1]), &(inteval->stack[((hsi*123760+10500346)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10689535)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+10500346)*1+lsi)*1]), &(inteval->stack[((hsi*163800+9991656)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10798735)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+9991656)*1+lsi)*1]), &(inteval->stack[((hsi*200655+10500346)*1+lsi)*1]), &(inteval->stack[((hsi*173901+10942060)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+10500346)*1+lsi)*1]), &(inteval->stack[((hsi*231868+9991656)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10301602)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+9991656)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10500346)*1+lsi)*1]), &(inteval->stack[((hsi*216216+9775440)*1+lsi)*1]),91);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*275275+10261926)*1+lsi)*1]), &(inteval->stack[((hsi*270270+9991656)*1+lsi)*1]), &(inteval->stack[((hsi*225225+11115961)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*707850+10537201)*1+lsi)*1]), &(inteval->stack[((hsi*275275+10261926)*1+lsi)*1]), &(inteval->stack[((hsi*235950+8622750)*1+lsi)*1]),3025);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1197900+11245051)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10537201)*1+lsi)*1]), &(inteval->stack[((hsi*598950+9116430)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*8190+777130)*1+lsi)*1]), &(inteval->stack[((hsi*6930+785320)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+9736170)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767575)*1+lsi)*1]), &(inteval->stack[((hsi*8190+777130)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+9760740)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9736170)*1+lsi)*1]), &(inteval->stack[((hsi*20790+9715380)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+9802320)*1+lsi)*1]), &(inteval->stack[((hsi*11025+756550)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767575)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+9830985)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9802320)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9736170)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+9880125)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9830985)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9760740)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+9949425)*1+lsi)*1]), &(inteval->stack[((hsi*12600+743950)*1+lsi)*1]), &(inteval->stack[((hsi*11025+756550)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9949425)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9802320)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+9982500)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9830985)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+798025)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9982500)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9880125)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+8680080)*1+lsi)*1]), &(inteval->stack[((hsi*14280+729670)*1+lsi)*1]), &(inteval->stack[((hsi*12600+743950)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+8717880)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8680080)*1+lsi)*1]), &(inteval->stack[((hsi*33075+9949425)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+10064400)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8717880)*1+lsi)*1]), &(inteval->stack[((hsi*57330+8622750)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+901975)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10064400)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9982500)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*122850+901975)*1+lsi)*1]), &(inteval->stack[((hsi*103950+798025)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+8784030)*1+lsi)*1]), &(inteval->stack[((hsi*16065+713605)*1+lsi)*1]), &(inteval->stack[((hsi*14280+729670)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+9949425)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8784030)*1+lsi)*1]), &(inteval->stack[((hsi*37800+8680080)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+12588481)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9949425)*1+lsi)*1]), &(inteval->stack[((hsi*66150+8717880)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12588481)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10064400)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+10025025)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*122850+901975)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+12698731)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10025025)*1+lsi)*1]), &(inteval->stack[((hsi*145530+12442951)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+901975)*1+lsi)*1]), &(inteval->stack[((hsi*17955+695650)*1+lsi)*1]), &(inteval->stack[((hsi*16065+713605)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+950170)*1+lsi)*1]), &(inteval->stack[((hsi*48195+901975)*1+lsi)*1]), &(inteval->stack[((hsi*42840+8784030)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+8766075)*1+lsi)*1]), &(inteval->stack[((hsi*85680+950170)*1+lsi)*1]), &(inteval->stack[((hsi*75600+9949425)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+12892771)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8766075)*1+lsi)*1]), &(inteval->stack[((hsi*110250+12588481)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+13058146)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12892771)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8622750)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+13258801)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13058146)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10025025)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+9949425)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13258801)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12698731)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*6930+785320)*1+lsi)*1]), &(inteval->stack[((hsi*5775+792250)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+8640075)*1+lsi)*1]), &(inteval->stack[((hsi*20790+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8622750)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+12588481)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9760740)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8640075)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9880125)*1+lsi)*1]), &(inteval->stack[((hsi*57750+12588481)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+9802005)*1+lsi)*1]), &(inteval->stack[((hsi*103950+798025)*1+lsi)*1]), &(inteval->stack[((hsi*86625+9715380)*1+lsi)*1]),105);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*161700+713605)*1+lsi)*1]), &(inteval->stack[((hsi*145530+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*121275+9802005)*1+lsi)*1]),105);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*207900+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*194040+12698731)*1+lsi)*1]), &(inteval->stack[((hsi*161700+713605)*1+lsi)*1]),105);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*259875+13488121)*1+lsi)*1]), &(inteval->stack[((hsi*249480+9949425)*1+lsi)*1]), &(inteval->stack[((hsi*207900+12442951)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*19950+675700)*1+lsi)*1]), &(inteval->stack[((hsi*17955+695650)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+12496816)*1+lsi)*1]), &(inteval->stack[((hsi*53865+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*48195+901975)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+12593206)*1+lsi)*1]), &(inteval->stack[((hsi*96390+12496816)*1+lsi)*1]), &(inteval->stack[((hsi*85680+950170)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+675700)*1+lsi)*1]), &(inteval->stack[((hsi*142800+12593206)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8766075)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*189000+675700)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12892771)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+675700)*1+lsi)*1]), &(inteval->stack[((hsi*231525+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13058146)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*267540+675700)*1+lsi)*1]), &(inteval->stack[((hsi*229320+13258801)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+12737791)*1+lsi)*1]), &(inteval->stack[((hsi*294840+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*249480+9949425)*1+lsi)*1]),105);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*317625+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*311850+12737791)*1+lsi)*1]), &(inteval->stack[((hsi*259875+13488121)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*825825+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*317625+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*275275+10261926)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1415700+13268776)*1+lsi)*1]), &(inteval->stack[((hsi*825825+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*707850+10537201)*1+lsi)*1]),3025);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*1996500+14684476)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+13268776)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11245051)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+10033005)*1+lsi)*1]), &(inteval->stack[((hsi*9360+651820)*1+lsi)*1]), &(inteval->stack[((hsi*7920+661180)*1+lsi)*1]),120);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+10056765)*1+lsi)*1]), &(inteval->stack[((hsi*10920+640900)*1+lsi)*1]), &(inteval->stack[((hsi*9360+651820)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+10084845)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10056765)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10033005)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+10132365)*1+lsi)*1]), &(inteval->stack[((hsi*12600+628300)*1+lsi)*1]), &(inteval->stack[((hsi*10920+640900)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+10165125)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10132365)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10056765)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+10221285)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10165125)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10084845)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+10300485)*1+lsi)*1]), &(inteval->stack[((hsi*14400+613900)*1+lsi)*1]), &(inteval->stack[((hsi*12600+628300)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+10338285)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10300485)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10132365)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+10403805)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10338285)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10165125)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+10497405)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10403805)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10221285)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+10616205)*1+lsi)*1]), &(inteval->stack[((hsi*16320+597580)*1+lsi)*1]), &(inteval->stack[((hsi*14400+613900)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+10659405)*1+lsi)*1]), &(inteval->stack[((hsi*43200+10616205)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10300485)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+10735005)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10659405)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10338285)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+10844205)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10735005)*1+lsi)*1]), &(inteval->stack[((hsi*93600+10403805)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+675700)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10844205)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10497405)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*18360+579220)*1+lsi)*1]), &(inteval->stack[((hsi*16320+597580)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+10984605)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*43200+10616205)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+8671710)*1+lsi)*1]), &(inteval->stack[((hsi*86400+10984605)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10659405)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+842020)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8671710)*1+lsi)*1]), &(inteval->stack[((hsi*109200+10735005)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+10616205)*1+lsi)*1]), &(inteval->stack[((hsi*163800+842020)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10844205)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10616205)*1+lsi)*1]), &(inteval->stack[((hsi*166320+675700)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+10300485)*1+lsi)*1]), &(inteval->stack[((hsi*20520+558700)*1+lsi)*1]), &(inteval->stack[((hsi*18360+579220)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+11071005)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10300485)*1+lsi)*1]), &(inteval->stack[((hsi*48960+8622750)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+10812765)*1+lsi)*1]), &(inteval->stack[((hsi*97920+11071005)*1+lsi)*1]), &(inteval->stack[((hsi*86400+10984605)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+16902736)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10812765)*1+lsi)*1]), &(inteval->stack[((hsi*126000+8671710)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*189000+16902736)*1+lsi)*1]), &(inteval->stack[((hsi*163800+842020)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+17091736)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10616205)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+17353816)*1+lsi)*1]), &(inteval->stack[((hsi*262080+17091736)*1+lsi)*1]), &(inteval->stack[((hsi*221760+16680976)*1+lsi)*1]),120);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+842020)*1+lsi)*1]), &(inteval->stack[((hsi*7920+661180)*1+lsi)*1]), &(inteval->stack[((hsi*6600+669100)*1+lsi)*1]),120);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*39600+861820)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10033005)*1+lsi)*1]), &(inteval->stack[((hsi*19800+842020)*1+lsi)*1]),120);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+10616205)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10084845)*1+lsi)*1]), &(inteval->stack[((hsi*39600+861820)*1+lsi)*1]),120);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+842020)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10221285)*1+lsi)*1]), &(inteval->stack[((hsi*66000+10616205)*1+lsi)*1]),120);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*138600+10033005)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10497405)*1+lsi)*1]), &(inteval->stack[((hsi*99000+842020)*1+lsi)*1]),120);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*184800+10355565)*1+lsi)*1]), &(inteval->stack[((hsi*166320+675700)*1+lsi)*1]), &(inteval->stack[((hsi*138600+10033005)*1+lsi)*1]),120);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*237600+579220)*1+lsi)*1]), &(inteval->stack[((hsi*221760+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*184800+10355565)*1+lsi)*1]),120);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*297000+10355565)*1+lsi)*1]), &(inteval->stack[((hsi*285120+17353816)*1+lsi)*1]), &(inteval->stack[((hsi*237600+579220)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+579220)*1+lsi)*1]), &(inteval->stack[((hsi*22800+535900)*1+lsi)*1]), &(inteval->stack[((hsi*20520+558700)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+640780)*1+lsi)*1]), &(inteval->stack[((hsi*61560+579220)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10300485)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+10033005)*1+lsi)*1]), &(inteval->stack[((hsi*110160+640780)*1+lsi)*1]), &(inteval->stack[((hsi*97920+11071005)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+535900)*1+lsi)*1]), &(inteval->stack[((hsi*163200+10033005)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10812765)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10652565)*1+lsi)*1]), &(inteval->stack[((hsi*216000+535900)*1+lsi)*1]), &(inteval->stack[((hsi*189000+16902736)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+535900)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10652565)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8622750)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+10652565)*1+lsi)*1]), &(inteval->stack[((hsi*305760+535900)*1+lsi)*1]), &(inteval->stack[((hsi*262080+17091736)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*336960+10652565)*1+lsi)*1]), &(inteval->stack[((hsi*285120+17353816)*1+lsi)*1]),120);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*363000+10652565)*1+lsi)*1]), &(inteval->stack[((hsi*356400+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*297000+10355565)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*952875+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10652565)*1+lsi)*1]), &(inteval->stack[((hsi*317625+9715380)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1651650+17633851)*1+lsi)*1]), &(inteval->stack[((hsi*952875+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*825825+12442951)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2359500+19285501)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+17633851)*1+lsi)*1]), &(inteval->stack[((hsi*1415700+13268776)*1+lsi)*1]),3025);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*2994750+21645001)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+19285501)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+14684476)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*10608+508836)*1+lsi)*1]), &(inteval->stack[((hsi*8976+519444)*1+lsi)*1]),136);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+12469879)*1+lsi)*1]), &(inteval->stack[((hsi*12376+496460)*1+lsi)*1]), &(inteval->stack[((hsi*10608+508836)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+12501703)*1+lsi)*1]), &(inteval->stack[((hsi*31824+12469879)*1+lsi)*1]), &(inteval->stack[((hsi*26928+12442951)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+12555559)*1+lsi)*1]), &(inteval->stack[((hsi*14280+482180)*1+lsi)*1]), &(inteval->stack[((hsi*12376+496460)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+12592687)*1+lsi)*1]), &(inteval->stack[((hsi*37128+12555559)*1+lsi)*1]), &(inteval->stack[((hsi*31824+12469879)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+12656335)*1+lsi)*1]), &(inteval->stack[((hsi*63648+12592687)*1+lsi)*1]), &(inteval->stack[((hsi*53856+12501703)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+12746095)*1+lsi)*1]), &(inteval->stack[((hsi*16320+465860)*1+lsi)*1]), &(inteval->stack[((hsi*14280+482180)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+12788935)*1+lsi)*1]), &(inteval->stack[((hsi*42840+12746095)*1+lsi)*1]), &(inteval->stack[((hsi*37128+12555559)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+12863191)*1+lsi)*1]), &(inteval->stack[((hsi*74256+12788935)*1+lsi)*1]), &(inteval->stack[((hsi*63648+12592687)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+12969271)*1+lsi)*1]), &(inteval->stack[((hsi*106080+12863191)*1+lsi)*1]), &(inteval->stack[((hsi*89760+12656335)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+13103911)*1+lsi)*1]), &(inteval->stack[((hsi*18496+447364)*1+lsi)*1]), &(inteval->stack[((hsi*16320+465860)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+13152871)*1+lsi)*1]), &(inteval->stack[((hsi*48960+13103911)*1+lsi)*1]), &(inteval->stack[((hsi*42840+12746095)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+13238551)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13152871)*1+lsi)*1]), &(inteval->stack[((hsi*74256+12788935)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+13362311)*1+lsi)*1]), &(inteval->stack[((hsi*123760+13238551)*1+lsi)*1]), &(inteval->stack[((hsi*106080+12863191)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+13521431)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13362311)*1+lsi)*1]), &(inteval->stack[((hsi*134640+12969271)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+13709927)*1+lsi)*1]), &(inteval->stack[((hsi*20808+426556)*1+lsi)*1]), &(inteval->stack[((hsi*18496+447364)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*55488+13709927)*1+lsi)*1]), &(inteval->stack[((hsi*48960+13103911)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+13765415)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*85680+13152871)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+9813300)*1+lsi)*1]), &(inteval->stack[((hsi*142800+13765415)*1+lsi)*1]), &(inteval->stack[((hsi*123760+13238551)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+13908215)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9813300)*1+lsi)*1]), &(inteval->stack[((hsi*159120+13362311)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+9998940)*1+lsi)*1]), &(inteval->stack[((hsi*222768+13908215)*1+lsi)*1]), &(inteval->stack[((hsi*188496+13521431)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+14130983)*1+lsi)*1]), &(inteval->stack[((hsi*23256+403300)*1+lsi)*1]), &(inteval->stack[((hsi*20808+426556)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+535900)*1+lsi)*1]), &(inteval->stack[((hsi*62424+14130983)*1+lsi)*1]), &(inteval->stack[((hsi*55488+13709927)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+14193407)*1+lsi)*1]), &(inteval->stack[((hsi*110976+535900)*1+lsi)*1]), &(inteval->stack[((hsi*97920+9715380)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+646876)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14193407)*1+lsi)*1]), &(inteval->stack[((hsi*142800+13765415)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+13103911)*1+lsi)*1]), &(inteval->stack[((hsi*214200+646876)*1+lsi)*1]), &(inteval->stack[((hsi*185640+9813300)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+10250268)*1+lsi)*1]), &(inteval->stack[((hsi*259896+13103911)*1+lsi)*1]), &(inteval->stack[((hsi*222768+13908215)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+13709927)*1+lsi)*1]), &(inteval->stack[((hsi*297024+10250268)*1+lsi)*1]), &(inteval->stack[((hsi*251328+9998940)*1+lsi)*1]),136);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*22440+14356607)*1+lsi)*1]), &(inteval->stack[((hsi*8976+519444)*1+lsi)*1]), &(inteval->stack[((hsi*7480+528420)*1+lsi)*1]),136);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*44880+14379047)*1+lsi)*1]), &(inteval->stack[((hsi*26928+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*22440+14356607)*1+lsi)*1]),136);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*74800+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*53856+12501703)*1+lsi)*1]), &(inteval->stack[((hsi*44880+14379047)*1+lsi)*1]),136);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*112200+14356607)*1+lsi)*1]), &(inteval->stack[((hsi*89760+12656335)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8622750)*1+lsi)*1]),136);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*157080+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*134640+12969271)*1+lsi)*1]), &(inteval->stack[((hsi*112200+14356607)*1+lsi)*1]),136);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*209440+12600031)*1+lsi)*1]), &(inteval->stack[((hsi*188496+13521431)*1+lsi)*1]), &(inteval->stack[((hsi*157080+12442951)*1+lsi)*1]),136);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*269280+13363807)*1+lsi)*1]), &(inteval->stack[((hsi*251328+9998940)*1+lsi)*1]), &(inteval->stack[((hsi*209440+12600031)*1+lsi)*1]),136);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*336600+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*323136+13709927)*1+lsi)*1]), &(inteval->stack[((hsi*269280+13363807)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*25840+377460)*1+lsi)*1]), &(inteval->stack[((hsi*23256+403300)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+9785148)*1+lsi)*1]), &(inteval->stack[((hsi*69768+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*62424+14130983)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+13363807)*1+lsi)*1]), &(inteval->stack[((hsi*124848+9785148)*1+lsi)*1]), &(inteval->stack[((hsi*110976+535900)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*184960+13363807)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14193407)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+14033063)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*214200+646876)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+377460)*1+lsi)*1]), &(inteval->stack[((hsi*299880+14033063)*1+lsi)*1]), &(inteval->stack[((hsi*259896+13103911)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+12779551)*1+lsi)*1]), &(inteval->stack[((hsi*346528+377460)*1+lsi)*1]), &(inteval->stack[((hsi*297024+10250268)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*381888+12779551)*1+lsi)*1]), &(inteval->stack[((hsi*323136+13709927)*1+lsi)*1]),136);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*411400+12779551)*1+lsi)*1]), &(inteval->stack[((hsi*403920+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*336600+12442951)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1089000+13190951)*1+lsi)*1]), &(inteval->stack[((hsi*411400+12779551)*1+lsi)*1]), &(inteval->stack[((hsi*363000+10652565)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*1905750+24639751)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+13190951)*1+lsi)*1]), &(inteval->stack[((hsi*952875+16680976)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*2752750+26545501)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+24639751)*1+lsi)*1]), &(inteval->stack[((hsi*1651650+17633851)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*3539250+29298251)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+26545501)*1+lsi)*1]), &(inteval->stack[((hsi*2359500+19285501)*1+lsi)*1]),3025);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*4192650+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+29298251)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+21645001)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*11934+347013)*1+lsi)*1]), &(inteval->stack[((hsi*10098+358947)*1+lsi)*1]),153);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+9745674)*1+lsi)*1]), &(inteval->stack[((hsi*13923+333090)*1+lsi)*1]), &(inteval->stack[((hsi*11934+347013)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+9781476)*1+lsi)*1]), &(inteval->stack[((hsi*35802+9745674)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9715380)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+9842064)*1+lsi)*1]), &(inteval->stack[((hsi*16065+317025)*1+lsi)*1]), &(inteval->stack[((hsi*13923+333090)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+9883833)*1+lsi)*1]), &(inteval->stack[((hsi*41769+9842064)*1+lsi)*1]), &(inteval->stack[((hsi*35802+9745674)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+9955437)*1+lsi)*1]), &(inteval->stack[((hsi*71604+9883833)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9781476)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+10056417)*1+lsi)*1]), &(inteval->stack[((hsi*18360+298665)*1+lsi)*1]), &(inteval->stack[((hsi*16065+317025)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+10104612)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10056417)*1+lsi)*1]), &(inteval->stack[((hsi*41769+9842064)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+10188150)*1+lsi)*1]), &(inteval->stack[((hsi*83538+10104612)*1+lsi)*1]), &(inteval->stack[((hsi*71604+9883833)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+10307490)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10188150)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9955437)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+10458960)*1+lsi)*1]), &(inteval->stack[((hsi*20808+277857)*1+lsi)*1]), &(inteval->stack[((hsi*18360+298665)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+20873626)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10458960)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10056417)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+10514040)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20873626)*1+lsi)*1]), &(inteval->stack[((hsi*83538+10104612)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+377460)*1+lsi)*1]), &(inteval->stack[((hsi*139230+10514040)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10188150)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+20970016)*1+lsi)*1]), &(inteval->stack[((hsi*179010+377460)*1+lsi)*1]), &(inteval->stack[((hsi*151470+10307490)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+10653270)*1+lsi)*1]), &(inteval->stack[((hsi*23409+254448)*1+lsi)*1]), &(inteval->stack[((hsi*20808+277857)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+10715694)*1+lsi)*1]), &(inteval->stack[((hsi*62424+10653270)*1+lsi)*1]), &(inteval->stack[((hsi*55080+10458960)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+556470)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10715694)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20873626)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+21182074)*1+lsi)*1]), &(inteval->stack[((hsi*160650+556470)*1+lsi)*1]), &(inteval->stack[((hsi*139230+10514040)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+10825854)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21182074)*1+lsi)*1]), &(inteval->stack[((hsi*179010+377460)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*250614+10825854)*1+lsi)*1]), &(inteval->stack[((hsi*212058+20970016)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+717120)*1+lsi)*1]), &(inteval->stack[((hsi*26163+228285)*1+lsi)*1]), &(inteval->stack[((hsi*23409+254448)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*70227+717120)*1+lsi)*1]), &(inteval->stack[((hsi*62424+10653270)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*124848+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*110160+10715694)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+10458960)*1+lsi)*1]), &(inteval->stack[((hsi*183600+8622750)*1+lsi)*1]), &(inteval->stack[((hsi*160650+556470)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+377460)*1+lsi)*1]), &(inteval->stack[((hsi*240975+10458960)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21182074)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+21182074)*1+lsi)*1]), &(inteval->stack[((hsi*292383+377460)*1+lsi)*1]), &(inteval->stack[((hsi*250614+10825854)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+10699935)*1+lsi)*1]), &(inteval->stack[((hsi*334152+21182074)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14279951)*1+lsi)*1]),153);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*25245+787347)*1+lsi)*1]), &(inteval->stack[((hsi*10098+358947)*1+lsi)*1]), &(inteval->stack[((hsi*8415+369045)*1+lsi)*1]),153);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*50490+812592)*1+lsi)*1]), &(inteval->stack[((hsi*30294+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*25245+787347)*1+lsi)*1]),153);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*84150+10056417)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9781476)*1+lsi)*1]), &(inteval->stack[((hsi*50490+812592)*1+lsi)*1]),153);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*126225+787347)*1+lsi)*1]), &(inteval->stack[((hsi*100980+9955437)*1+lsi)*1]), &(inteval->stack[((hsi*84150+10056417)*1+lsi)*1]),153);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*176715+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*151470+10307490)*1+lsi)*1]), &(inteval->stack[((hsi*126225+787347)*1+lsi)*1]),153);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*235620+9892095)*1+lsi)*1]), &(inteval->stack[((hsi*212058+20970016)*1+lsi)*1]), &(inteval->stack[((hsi*176715+9715380)*1+lsi)*1]),153);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*302940+10127715)*1+lsi)*1]), &(inteval->stack[((hsi*282744+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*235620+9892095)*1+lsi)*1]),153);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*378675+9715380)*1+lsi)*1]), &(inteval->stack[((hsi*363528+10699935)*1+lsi)*1]), &(inteval->stack[((hsi*302940+10127715)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*29070+199215)*1+lsi)*1]), &(inteval->stack[((hsi*26163+228285)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+10094055)*1+lsi)*1]), &(inteval->stack[((hsi*78489+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*70227+717120)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*140454+10094055)*1+lsi)*1]), &(inteval->stack[((hsi*124848+12442951)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+669843)*1+lsi)*1]), &(inteval->stack[((hsi*208080+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*183600+8622750)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*275400+669843)*1+lsi)*1]), &(inteval->stack[((hsi*240975+10458960)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+10094055)*1+lsi)*1]), &(inteval->stack[((hsi*337365+14279951)*1+lsi)*1]), &(inteval->stack[((hsi*292383+377460)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+199215)*1+lsi)*1]), &(inteval->stack[((hsi*389844+10094055)*1+lsi)*1]), &(inteval->stack[((hsi*334152+21182074)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+20873626)*1+lsi)*1]), &(inteval->stack[((hsi*429624+199215)*1+lsi)*1]), &(inteval->stack[((hsi*363528+10699935)*1+lsi)*1]),153);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*462825+10094055)*1+lsi)*1]), &(inteval->stack[((hsi*454410+20873626)*1+lsi)*1]), &(inteval->stack[((hsi*378675+9715380)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1234200+32837501)*1+lsi)*1]), &(inteval->stack[((hsi*462825+10094055)*1+lsi)*1]), &(inteval->stack[((hsi*411400+12779551)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2178000+34071701)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+32837501)*1+lsi)*1]), &(inteval->stack[((hsi*1089000+13190951)*1+lsi)*1]),3025);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3176250+36249701)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+34071701)*1+lsi)*1]), &(inteval->stack[((hsi*1905750+24639751)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4129125+39425951)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+36249701)*1+lsi)*1]), &(inteval->stack[((hsi*2752750+26545501)*1+lsi)*1]),3025);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*4954950+43555076)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+39425951)*1+lsi)*1]), &(inteval->stack[((hsi*3539250+29298251)*1+lsi)*1]),3025);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*5590200+24639751)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+43555076)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+16680976)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1124930)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1129220)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+30240841)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1119925)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1124930)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+30253711)*1+lsi)*1]), &(inteval->stack[((hsi*12870+30240841)*1+lsi)*1]), &(inteval->stack[((hsi*10890+30229951)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+30275491)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1114150)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1119925)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+30290506)*1+lsi)*1]), &(inteval->stack[((hsi*15015+30275491)*1+lsi)*1]), &(inteval->stack[((hsi*12870+30240841)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+30316246)*1+lsi)*1]), &(inteval->stack[((hsi*25740+30290506)*1+lsi)*1]), &(inteval->stack[((hsi*21780+30253711)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+30352546)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1107550)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1114150)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+30369871)*1+lsi)*1]), &(inteval->stack[((hsi*17325+30352546)*1+lsi)*1]), &(inteval->stack[((hsi*15015+30275491)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+30399901)*1+lsi)*1]), &(inteval->stack[((hsi*30030+30369871)*1+lsi)*1]), &(inteval->stack[((hsi*25740+30290506)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+30442801)*1+lsi)*1]), &(inteval->stack[((hsi*42900+30399901)*1+lsi)*1]), &(inteval->stack[((hsi*36300+30316246)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+30497251)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1100070)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1107550)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+30517051)*1+lsi)*1]), &(inteval->stack[((hsi*19800+30497251)*1+lsi)*1]), &(inteval->stack[((hsi*17325+30352546)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+30551701)*1+lsi)*1]), &(inteval->stack[((hsi*34650+30517051)*1+lsi)*1]), &(inteval->stack[((hsi*30030+30369871)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*50050+30551701)*1+lsi)*1]), &(inteval->stack[((hsi*42900+30399901)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+30601751)*1+lsi)*1]), &(inteval->stack[((hsi*64350+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*54450+30442801)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+12507301)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1091655)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1100070)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+30677981)*1+lsi)*1]), &(inteval->stack[((hsi*22440+12507301)*1+lsi)*1]), &(inteval->stack[((hsi*19800+30497251)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+12529741)*1+lsi)*1]), &(inteval->stack[((hsi*39600+30677981)*1+lsi)*1]), &(inteval->stack[((hsi*34650+30517051)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+30717581)*1+lsi)*1]), &(inteval->stack[((hsi*57750+12529741)*1+lsi)*1]), &(inteval->stack[((hsi*50050+30551701)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+12587491)*1+lsi)*1]), &(inteval->stack[((hsi*75075+30717581)*1+lsi)*1]), &(inteval->stack[((hsi*64350+12442951)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+30792656)*1+lsi)*1]), &(inteval->stack[((hsi*90090+12587491)*1+lsi)*1]), &(inteval->stack[((hsi*76230+30601751)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+12677581)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1082250)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1091655)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+12702826)*1+lsi)*1]), &(inteval->stack[((hsi*25245+12677581)*1+lsi)*1]), &(inteval->stack[((hsi*22440+12507301)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+30894296)*1+lsi)*1]), &(inteval->stack[((hsi*44880+12702826)*1+lsi)*1]), &(inteval->stack[((hsi*39600+30677981)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+12747706)*1+lsi)*1]), &(inteval->stack[((hsi*66000+30894296)*1+lsi)*1]), &(inteval->stack[((hsi*57750+12529741)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+30960296)*1+lsi)*1]), &(inteval->stack[((hsi*86625+12747706)*1+lsi)*1]), &(inteval->stack[((hsi*75075+30717581)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+12834331)*1+lsi)*1]), &(inteval->stack[((hsi*105105+30960296)*1+lsi)*1]), &(inteval->stack[((hsi*90090+12587491)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+31065401)*1+lsi)*1]), &(inteval->stack[((hsi*120120+12834331)*1+lsi)*1]), &(inteval->stack[((hsi*101640+30792656)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+12954451)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1129220)*1+lsi)*1]), &(inteval->stack[((hsi*3025+1132850)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+12963526)*1+lsi)*1]), &(inteval->stack[((hsi*10890+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*9075+12954451)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+12981676)*1+lsi)*1]), &(inteval->stack[((hsi*21780+30253711)*1+lsi)*1]), &(inteval->stack[((hsi*18150+12963526)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+13011926)*1+lsi)*1]), &(inteval->stack[((hsi*36300+30316246)*1+lsi)*1]), &(inteval->stack[((hsi*30250+12981676)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+31196081)*1+lsi)*1]), &(inteval->stack[((hsi*54450+30442801)*1+lsi)*1]), &(inteval->stack[((hsi*45375+13011926)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+12954451)*1+lsi)*1]), &(inteval->stack[((hsi*76230+30601751)*1+lsi)*1]), &(inteval->stack[((hsi*63525+31196081)*1+lsi)*1]),55);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*108900+13039151)*1+lsi)*1]), &(inteval->stack[((hsi*101640+30792656)*1+lsi)*1]), &(inteval->stack[((hsi*84700+12954451)*1+lsi)*1]),55);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*136125+31196081)*1+lsi)*1]), &(inteval->stack[((hsi*130680+31065401)*1+lsi)*1]), &(inteval->stack[((hsi*108900+13039151)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+12954451)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1071800)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1082250)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+12982666)*1+lsi)*1]), &(inteval->stack[((hsi*28215+12954451)*1+lsi)*1]), &(inteval->stack[((hsi*25245+12677581)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+13033156)*1+lsi)*1]), &(inteval->stack[((hsi*50490+12982666)*1+lsi)*1]), &(inteval->stack[((hsi*44880+12702826)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+13107956)*1+lsi)*1]), &(inteval->stack[((hsi*74800+13033156)*1+lsi)*1]), &(inteval->stack[((hsi*66000+30894296)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+31332206)*1+lsi)*1]), &(inteval->stack[((hsi*99000+13107956)*1+lsi)*1]), &(inteval->stack[((hsi*86625+12747706)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+12954451)*1+lsi)*1]), &(inteval->stack[((hsi*121275+31332206)*1+lsi)*1]), &(inteval->stack[((hsi*105105+30960296)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+13094591)*1+lsi)*1]), &(inteval->stack[((hsi*140140+12954451)*1+lsi)*1]), &(inteval->stack[((hsi*120120+12834331)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+31332206)*1+lsi)*1]), &(inteval->stack[((hsi*154440+13094591)*1+lsi)*1]), &(inteval->stack[((hsi*130680+31065401)*1+lsi)*1]),55);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*166375+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*163350+31332206)*1+lsi)*1]), &(inteval->stack[((hsi*136125+31196081)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*499125+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*199650+8916780)*1+lsi)*1]), &(inteval->stack[((hsi*166375+12442951)*1+lsi)*1]),3025);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*998250+12442951)*1+lsi)*1]), &(inteval->stack[((hsi*598950+9116430)*1+lsi)*1]), &(inteval->stack[((hsi*499125+30229951)*1+lsi)*1]),3025);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1663750+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11245051)*1+lsi)*1]), &(inteval->stack[((hsi*998250+12442951)*1+lsi)*1]),3025);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2495625+10556880)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+14684476)*1+lsi)*1]), &(inteval->stack[((hsi*1663750+30229951)*1+lsi)*1]),3025);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*3493875+13052505)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+21645001)*1+lsi)*1]), &(inteval->stack[((hsi*2495625+10556880)*1+lsi)*1]),3025);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*4658500+48510026)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+16680976)*1+lsi)*1]), &(inteval->stack[((hsi*3493875+13052505)*1+lsi)*1]),3025);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*5989500+10556880)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+24639751)*1+lsi)*1]), &(inteval->stack[((hsi*4658500+48510026)*1+lsi)*1]),3025);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*13338+165186)*1+lsi)*1]), &(inteval->stack[((hsi*11286+178524)*1+lsi)*1]),171);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+16580238)*1+lsi)*1]), &(inteval->stack[((hsi*15561+149625)*1+lsi)*1]), &(inteval->stack[((hsi*13338+165186)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+16620252)*1+lsi)*1]), &(inteval->stack[((hsi*40014+16580238)*1+lsi)*1]), &(inteval->stack[((hsi*33858+16546380)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+16687968)*1+lsi)*1]), &(inteval->stack[((hsi*17955+131670)*1+lsi)*1]), &(inteval->stack[((hsi*15561+149625)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+16734651)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16687968)*1+lsi)*1]), &(inteval->stack[((hsi*40014+16580238)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+16814679)*1+lsi)*1]), &(inteval->stack[((hsi*80028+16734651)*1+lsi)*1]), &(inteval->stack[((hsi*67716+16620252)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+16927539)*1+lsi)*1]), &(inteval->stack[((hsi*20520+111150)*1+lsi)*1]), &(inteval->stack[((hsi*17955+131670)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+16981404)*1+lsi)*1]), &(inteval->stack[((hsi*53865+16927539)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16687968)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+17074770)*1+lsi)*1]), &(inteval->stack[((hsi*93366+16981404)*1+lsi)*1]), &(inteval->stack[((hsi*80028+16734651)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+17208150)*1+lsi)*1]), &(inteval->stack[((hsi*133380+17074770)*1+lsi)*1]), &(inteval->stack[((hsi*112860+16814679)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+17377440)*1+lsi)*1]), &(inteval->stack[((hsi*23256+87894)*1+lsi)*1]), &(inteval->stack[((hsi*20520+111150)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+17439000)*1+lsi)*1]), &(inteval->stack[((hsi*61560+17377440)*1+lsi)*1]), &(inteval->stack[((hsi*53865+16927539)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+17546730)*1+lsi)*1]), &(inteval->stack[((hsi*107730+17439000)*1+lsi)*1]), &(inteval->stack[((hsi*93366+16981404)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+17702340)*1+lsi)*1]), &(inteval->stack[((hsi*155610+17546730)*1+lsi)*1]), &(inteval->stack[((hsi*133380+17074770)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+17902410)*1+lsi)*1]), &(inteval->stack[((hsi*200070+17702340)*1+lsi)*1]), &(inteval->stack[((hsi*169290+17208150)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+18139416)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61731)*1+lsi)*1]), &(inteval->stack[((hsi*23256+87894)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+18209184)*1+lsi)*1]), &(inteval->stack[((hsi*69768+18139416)*1+lsi)*1]), &(inteval->stack[((hsi*61560+17377440)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+18332304)*1+lsi)*1]), &(inteval->stack[((hsi*123120+18209184)*1+lsi)*1]), &(inteval->stack[((hsi*107730+17439000)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+18511854)*1+lsi)*1]), &(inteval->stack[((hsi*179550+18332304)*1+lsi)*1]), &(inteval->stack[((hsi*155610+17546730)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+18745269)*1+lsi)*1]), &(inteval->stack[((hsi*233415+18511854)*1+lsi)*1]), &(inteval->stack[((hsi*200070+17702340)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+19025367)*1+lsi)*1]), &(inteval->stack[((hsi*280098+18745269)*1+lsi)*1]), &(inteval->stack[((hsi*237006+17902410)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+19341375)*1+lsi)*1]), &(inteval->stack[((hsi*29241+32490)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61731)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+19419864)*1+lsi)*1]), &(inteval->stack[((hsi*78489+19341375)*1+lsi)*1]), &(inteval->stack[((hsi*69768+18139416)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+19559400)*1+lsi)*1]), &(inteval->stack[((hsi*139536+19419864)*1+lsi)*1]), &(inteval->stack[((hsi*123120+18209184)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+19764600)*1+lsi)*1]), &(inteval->stack[((hsi*205200+19559400)*1+lsi)*1]), &(inteval->stack[((hsi*179550+18332304)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+20033925)*1+lsi)*1]), &(inteval->stack[((hsi*269325+19764600)*1+lsi)*1]), &(inteval->stack[((hsi*233415+18511854)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+20360706)*1+lsi)*1]), &(inteval->stack[((hsi*326781+20033925)*1+lsi)*1]), &(inteval->stack[((hsi*280098+18745269)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+20734170)*1+lsi)*1]), &(inteval->stack[((hsi*373464+20360706)*1+lsi)*1]), &(inteval->stack[((hsi*316008+19025367)*1+lsi)*1]),171);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*28215+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*11286+178524)*1+lsi)*1]), &(inteval->stack[((hsi*9405+189810)*1+lsi)*1]),171);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*56430+21168681)*1+lsi)*1]), &(inteval->stack[((hsi*33858+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*28215+21140466)*1+lsi)*1]),171);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*94050+21225111)*1+lsi)*1]), &(inteval->stack[((hsi*67716+16620252)*1+lsi)*1]), &(inteval->stack[((hsi*56430+21168681)*1+lsi)*1]),171);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*141075+21319161)*1+lsi)*1]), &(inteval->stack[((hsi*112860+16814679)*1+lsi)*1]), &(inteval->stack[((hsi*94050+21225111)*1+lsi)*1]),171);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*197505+21460236)*1+lsi)*1]), &(inteval->stack[((hsi*169290+17208150)*1+lsi)*1]), &(inteval->stack[((hsi*141075+21319161)*1+lsi)*1]),171);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*263340+21657741)*1+lsi)*1]), &(inteval->stack[((hsi*237006+17902410)*1+lsi)*1]), &(inteval->stack[((hsi*197505+21460236)*1+lsi)*1]),171);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*338580+21921081)*1+lsi)*1]), &(inteval->stack[((hsi*316008+19025367)*1+lsi)*1]), &(inteval->stack[((hsi*263340+21657741)*1+lsi)*1]),171);
HRRPart1bra0ket0ml(inteval, &(inteval->stack[((hsi*423225+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*406296+20734170)*1+lsi)*1]), &(inteval->stack[((hsi*338580+21921081)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*32490+0)*1+lsi)*1]), &(inteval->stack[((hsi*29241+32490)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+21228189)*1+lsi)*1]), &(inteval->stack[((hsi*87723+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*78489+19341375)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+21385167)*1+lsi)*1]), &(inteval->stack[((hsi*156978+21228189)*1+lsi)*1]), &(inteval->stack[((hsi*139536+19419864)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+21617727)*1+lsi)*1]), &(inteval->stack[((hsi*232560+21385167)*1+lsi)*1]), &(inteval->stack[((hsi*205200+19559400)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+16969605)*1+lsi)*1]), &(inteval->stack[((hsi*307800+21617727)*1+lsi)*1]), &(inteval->stack[((hsi*269325+19764600)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*377055+16969605)*1+lsi)*1]), &(inteval->stack[((hsi*326781+20033925)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+16969605)*1+lsi)*1]), &(inteval->stack[((hsi*435708+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*373464+20360706)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*480168+16969605)*1+lsi)*1]), &(inteval->stack[((hsi*406296+20734170)*1+lsi)*1]),171);
HRRPart1bra0ket0mm(inteval, &(inteval->stack[((hsi*517275+16969605)*1+lsi)*1]), &(inteval->stack[((hsi*507870+21140466)*1+lsi)*1]), &(inteval->stack[((hsi*423225+16546380)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1388475+17486880)*1+lsi)*1]), &(inteval->stack[((hsi*517275+16969605)*1+lsi)*1]), &(inteval->stack[((hsi*462825+10094055)*1+lsi)*1]),3025);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*2468400+18875355)*1+lsi)*1]), &(inteval->stack[((hsi*1388475+17486880)*1+lsi)*1]), &(inteval->stack[((hsi*1234200+32837501)*1+lsi)*1]),3025);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*3630000+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*2468400+18875355)*1+lsi)*1]), &(inteval->stack[((hsi*2178000+34071701)*1+lsi)*1]),3025);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*4764375+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*3630000+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*3176250+36249701)*1+lsi)*1]),3025);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*5780775+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*4764375+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*4129125+39425951)*1+lsi)*1]),3025);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*6606600+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*5780775+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+43555076)*1+lsi)*1]),3025);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*7187400+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*6606600+16546380)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+24639751)*1+lsi)*1]),3025);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*7486875+1135875)*1+lsi)*1]), &(inteval->stack[((hsi*7187400+30229951)*1+lsi)*1]), &(inteval->stack[((hsi*5989500+10556880)*1+lsi)*1]),3025);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7486875+1135875)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
