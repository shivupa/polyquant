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
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
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
#include <_aB_M__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1287000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1198890)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1204896)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+10286694)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1191960)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1198890)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+10304712)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10286694)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10271250)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+10335600)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1184040)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1191960)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+10356390)*1+lsi)*1]), &(inteval->stack[((hsi*20790+10335600)*1+lsi)*1]), &(inteval->stack[((hsi*18018+10286694)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+10392426)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10356390)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10304712)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+10443906)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1175064)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1184040)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+10467666)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10443906)*1+lsi)*1]), &(inteval->stack[((hsi*20790+10335600)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+10509246)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10467666)*1+lsi)*1]), &(inteval->stack[((hsi*36036+10356390)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+10569306)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10509246)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10392426)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+10335600)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1164966)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1175064)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+10646526)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10335600)*1+lsi)*1]), &(inteval->stack[((hsi*23760+10443906)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+10694046)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10646526)*1+lsi)*1]), &(inteval->stack[((hsi*41580+10467666)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+10763346)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10694046)*1+lsi)*1]), &(inteval->stack[((hsi*60060+10509246)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+10443906)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10763346)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10569306)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+10853436)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1153680)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1164966)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+10883730)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10853436)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10335600)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+10937586)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10883730)*1+lsi)*1]), &(inteval->stack[((hsi*47520+10646526)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+11016786)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10937586)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10694046)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+11120736)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11016786)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10763346)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+10646526)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11120736)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10443906)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+10790670)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1141140)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1153680)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+11246862)*1+lsi)*1]), &(inteval->stack[((hsi*33858+10790670)*1+lsi)*1]), &(inteval->stack[((hsi*30294+10853436)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+11307450)*1+lsi)*1]), &(inteval->stack[((hsi*60588+11246862)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10883730)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+11397210)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11307450)*1+lsi)*1]), &(inteval->stack[((hsi*79200+10937586)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+10824528)*1+lsi)*1]), &(inteval->stack[((hsi*118800+11397210)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11016786)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+11516010)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10824528)*1+lsi)*1]), &(inteval->stack[((hsi*126126+11120736)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+10970058)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11516010)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10646526)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1204896)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1210044)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+11168454)*1+lsi)*1]), &(inteval->stack[((hsi*15444+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*13068+11155386)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1153680)*1+lsi)*1]), &(inteval->stack[((hsi*30888+10304712)*1+lsi)*1]), &(inteval->stack[((hsi*26136+11168454)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*51480+10392426)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1153680)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*77220+10569306)*1+lsi)*1]), &(inteval->stack[((hsi*65340+10271250)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*108108+10443906)*1+lsi)*1]), &(inteval->stack[((hsi*91476+11155386)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+10393218)*1+lsi)*1]), &(inteval->stack[((hsi*144144+10646526)*1+lsi)*1]), &(inteval->stack[((hsi*121968+10271250)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+10550034)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10970058)*1+lsi)*1]), &(inteval->stack[((hsi*156816+10393218)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1127280)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1141140)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+10308870)*1+lsi)*1]), &(inteval->stack[((hsi*37620+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*33858+10790670)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+10376586)*1+lsi)*1]), &(inteval->stack[((hsi*67716+10308870)*1+lsi)*1]), &(inteval->stack[((hsi*60588+11246862)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*100980+10376586)*1+lsi)*1]), &(inteval->stack[((hsi*89760+11307450)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*134640+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*118800+11397210)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*166320+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*145530+10824528)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*194040+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*168168+11516010)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*216216+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10970058)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+10746054)*1+lsi)*1]), &(inteval->stack[((hsi*231660+11155386)*1+lsi)*1]), &(inteval->stack[((hsi*196020+10550034)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1108950)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1116048)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+10289502)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1100760)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1108950)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+10310796)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10289502)*1+lsi)*1]), &(inteval->stack[((hsi*18252+10271250)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+10347300)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1091400)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1100760)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+10371870)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10347300)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10289502)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+10414458)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10371870)*1+lsi)*1]), &(inteval->stack[((hsi*36504+10310796)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+10475298)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1080792)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1091400)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+10503378)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10475298)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10347300)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+10552518)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10503378)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10371870)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+10623498)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10552518)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10414458)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+1127280)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1068858)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1080792)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+10347300)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1127280)*1+lsi)*1]), &(inteval->stack[((hsi*28080+10475298)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10347300)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10503378)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+11067534)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10552518)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+10475298)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11067534)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10623498)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+1159104)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1055520)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1068858)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+11174004)*1+lsi)*1]), &(inteval->stack[((hsi*35802+1159104)*1+lsi)*1]), &(inteval->stack[((hsi*31824+1127280)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+11237652)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11174004)*1+lsi)*1]), &(inteval->stack[((hsi*56160+10347300)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+11331252)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11237652)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10985634)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+11454102)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11331252)*1+lsi)*1]), &(inteval->stack[((hsi*106470+11067534)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11454102)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10475298)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+10347300)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1040700)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1055520)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+11603160)*1+lsi)*1]), &(inteval->stack[((hsi*40014+10347300)*1+lsi)*1]), &(inteval->stack[((hsi*35802+1159104)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+11674764)*1+lsi)*1]), &(inteval->stack[((hsi*71604+11603160)*1+lsi)*1]), &(inteval->stack[((hsi*63648+11174004)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+11780844)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11674764)*1+lsi)*1]), &(inteval->stack[((hsi*93600+11237652)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+11155986)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11780844)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11331252)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+11921244)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11155986)*1+lsi)*1]), &(inteval->stack[((hsi*149058+11454102)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+11327976)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11921244)*1+lsi)*1]), &(inteval->stack[((hsi*170352+10985634)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1127280)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1116048)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1122132)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1055520)*1+lsi)*1]), &(inteval->stack[((hsi*18252+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1127280)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1086408)*1+lsi)*1]), &(inteval->stack[((hsi*36504+10310796)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1055520)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+12119988)*1+lsi)*1]), &(inteval->stack[((hsi*60840+10414458)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1086408)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1055520)*1+lsi)*1]), &(inteval->stack[((hsi*91260+10623498)*1+lsi)*1]), &(inteval->stack[((hsi*77220+12119988)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+12119988)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10475298)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1055520)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+10387314)*1+lsi)*1]), &(inteval->stack[((hsi*170352+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*144144+12119988)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+12119988)*1+lsi)*1]), &(inteval->stack[((hsi*219024+11327976)*1+lsi)*1]), &(inteval->stack[((hsi*185328+10387314)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+10387314)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1024320)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1040700)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+10431774)*1+lsi)*1]), &(inteval->stack[((hsi*44460+10387314)*1+lsi)*1]), &(inteval->stack[((hsi*40014+10347300)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+10511802)*1+lsi)*1]), &(inteval->stack[((hsi*80028+10431774)*1+lsi)*1]), &(inteval->stack[((hsi*71604+11603160)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*119340+10511802)*1+lsi)*1]), &(inteval->stack[((hsi*106080+11674764)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+10430370)*1+lsi)*1]), &(inteval->stack[((hsi*159120+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*140400+11780844)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+11547000)*1+lsi)*1]), &(inteval->stack[((hsi*196560+10430370)*1+lsi)*1]), &(inteval->stack[((hsi*171990+11155986)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11547000)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11921244)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+11547000)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*219024+11327976)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*273780+11547000)*1+lsi)*1]), &(inteval->stack[((hsi*231660+12119988)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+11268774)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10746054)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1002935)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1011216)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+10292544)*1+lsi)*1]), &(inteval->stack[((hsi*9555+993380)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1002935)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+10317387)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10292544)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10271250)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+10359975)*1+lsi)*1]), &(inteval->stack[((hsi*10920+982460)*1+lsi)*1]), &(inteval->stack[((hsi*9555+993380)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+10388640)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10359975)*1+lsi)*1]), &(inteval->stack[((hsi*24843+10292544)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+10438326)*1+lsi)*1]), &(inteval->stack[((hsi*49686+10388640)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10317387)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+10509306)*1+lsi)*1]), &(inteval->stack[((hsi*12376+970084)*1+lsi)*1]), &(inteval->stack[((hsi*10920+982460)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+10542066)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10509306)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10359975)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1024320)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10542066)*1+lsi)*1]), &(inteval->stack[((hsi*49686+10388640)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+10599396)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1024320)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10438326)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1107130)*1+lsi)*1]), &(inteval->stack[((hsi*13923+956161)*1+lsi)*1]), &(inteval->stack[((hsi*12376+970084)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+10359975)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1107130)*1+lsi)*1]), &(inteval->stack[((hsi*32760+10509306)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10359975)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10542066)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+12083064)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1024320)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+12207279)*1+lsi)*1]), &(inteval->stack[((hsi*124215+12083064)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10599396)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+10509306)*1+lsi)*1]), &(inteval->stack[((hsi*15561+940600)*1+lsi)*1]), &(inteval->stack[((hsi*13923+956161)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+1024320)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10509306)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1107130)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+1098576)*1+lsi)*1]), &(inteval->stack[((hsi*74256+1024320)*1+lsi)*1]), &(inteval->stack[((hsi*65520+10359975)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+12356337)*1+lsi)*1]), &(inteval->stack[((hsi*109200+1098576)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11987514)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+12499662)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12356337)*1+lsi)*1]), &(inteval->stack[((hsi*124215+12083064)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*173901+12499662)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12207279)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+10359975)*1+lsi)*1]), &(inteval->stack[((hsi*17290+923310)*1+lsi)*1]), &(inteval->stack[((hsi*15561+940600)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+12673563)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10359975)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10509306)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+12757101)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12673563)*1+lsi)*1]), &(inteval->stack[((hsi*74256+1024320)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+12880861)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12757101)*1+lsi)*1]), &(inteval->stack[((hsi*109200+1098576)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+13044661)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12880861)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12356337)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+13245316)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13044661)*1+lsi)*1]), &(inteval->stack[((hsi*173901+12499662)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+12356337)*1+lsi)*1]), &(inteval->stack[((hsi*231868+13245316)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11987514)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1024320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1011216)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1018314)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1042338)*1+lsi)*1]), &(inteval->stack[((hsi*21294+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1024320)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1078374)*1+lsi)*1]), &(inteval->stack[((hsi*42588+10317387)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1042338)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+10509306)*1+lsi)*1]), &(inteval->stack[((hsi*70980+10438326)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1078374)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+940600)*1+lsi)*1]), &(inteval->stack[((hsi*106470+10599396)*1+lsi)*1]), &(inteval->stack[((hsi*90090+10509306)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+10406658)*1+lsi)*1]), &(inteval->stack[((hsi*149058+12207279)*1+lsi)*1]), &(inteval->stack[((hsi*126126+940600)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+940600)*1+lsi)*1]), &(inteval->stack[((hsi*198744+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*168168+10406658)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12356337)*1+lsi)*1]), &(inteval->stack[((hsi*216216+940600)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+10406658)*1+lsi)*1]), &(inteval->stack[((hsi*19110+904200)*1+lsi)*1]), &(inteval->stack[((hsi*17290+923310)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+904200)*1+lsi)*1]), &(inteval->stack[((hsi*51870+10406658)*1+lsi)*1]), &(inteval->stack[((hsi*46683+10359975)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*93366+904200)*1+lsi)*1]), &(inteval->stack[((hsi*83538+12673563)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+10410480)*1+lsi)*1]), &(inteval->stack[((hsi*139230+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*123760+12757101)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+904200)*1+lsi)*1]), &(inteval->stack[((hsi*185640+10410480)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12880861)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*229320+904200)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13044661)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+12611865)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*231868+13245316)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*298116+12611865)*1+lsi)*1]), &(inteval->stack[((hsi*255528+12356337)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+12257784)*1+lsi)*1]), &(inteval->stack[((hsi*319410+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*270270+11987514)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+12588114)*1+lsi)*1]), &(inteval->stack[((hsi*330330+12257784)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10985634)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+13437534)*1+lsi)*1]), &(inteval->stack[((hsi*849420+12588114)*1+lsi)*1]), &(inteval->stack[((hsi*718740+11268774)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*9555+879525)*1+lsi)*1]), &(inteval->stack[((hsi*8190+889080)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+10295820)*1+lsi)*1]), &(inteval->stack[((hsi*11025+868500)*1+lsi)*1]), &(inteval->stack[((hsi*9555+879525)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+10324485)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10295820)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10271250)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+10373625)*1+lsi)*1]), &(inteval->stack[((hsi*12600+855900)*1+lsi)*1]), &(inteval->stack[((hsi*11025+868500)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+10406700)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10373625)*1+lsi)*1]), &(inteval->stack[((hsi*28665+10295820)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+904200)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10406700)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10324485)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*14280+841620)*1+lsi)*1]), &(inteval->stack[((hsi*12600+855900)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+10464030)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10373625)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*66150+10464030)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10406700)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+11023434)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*81900+904200)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+986100)*1+lsi)*1]), &(inteval->stack[((hsi*16065+825555)*1+lsi)*1]), &(inteval->stack[((hsi*14280+841620)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+10530180)*1+lsi)*1]), &(inteval->stack[((hsi*42840+986100)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10985634)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+1028940)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10530180)*1+lsi)*1]), &(inteval->stack[((hsi*66150+10464030)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+12083064)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1028940)*1+lsi)*1]), &(inteval->stack[((hsi*95550+11987514)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12083064)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11023434)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+10373625)*1+lsi)*1]), &(inteval->stack[((hsi*17955+807600)*1+lsi)*1]), &(inteval->stack[((hsi*16065+825555)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+10605780)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10373625)*1+lsi)*1]), &(inteval->stack[((hsi*42840+986100)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+15047004)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10605780)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10530180)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+10421820)*1+lsi)*1]), &(inteval->stack[((hsi*126000+15047004)*1+lsi)*1]), &(inteval->stack[((hsi*110250+1028940)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+986100)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10421820)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12083064)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*200655+986100)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14875014)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+11146284)*1+lsi)*1]), &(inteval->stack[((hsi*19950+787650)*1+lsi)*1]), &(inteval->stack[((hsi*17955+807600)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+15173004)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11146284)*1+lsi)*1]), &(inteval->stack[((hsi*48195+10373625)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+15269394)*1+lsi)*1]), &(inteval->stack[((hsi*96390+15173004)*1+lsi)*1]), &(inteval->stack[((hsi*85680+10605780)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+15412194)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15269394)*1+lsi)*1]), &(inteval->stack[((hsi*126000+15047004)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+15601194)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15412194)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10421820)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+10373625)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15601194)*1+lsi)*1]), &(inteval->stack[((hsi*200655+986100)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+15832719)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10373625)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11987514)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+986100)*1+lsi)*1]), &(inteval->stack[((hsi*8190+889080)*1+lsi)*1]), &(inteval->stack[((hsi*6930+897270)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1006890)*1+lsi)*1]), &(inteval->stack[((hsi*24570+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*20790+986100)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1048470)*1+lsi)*1]), &(inteval->stack[((hsi*49140+10324485)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1006890)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+15047004)*1+lsi)*1]), &(inteval->stack[((hsi*81900+904200)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1048470)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+807600)*1+lsi)*1]), &(inteval->stack[((hsi*122850+11023434)*1+lsi)*1]), &(inteval->stack[((hsi*103950+15047004)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+953130)*1+lsi)*1]), &(inteval->stack[((hsi*171990+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*145530+807600)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*194040+953130)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+807600)*1+lsi)*1]), &(inteval->stack[((hsi*294840+15832719)*1+lsi)*1]), &(inteval->stack[((hsi*249480+14875014)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*22050+765600)*1+lsi)*1]), &(inteval->stack[((hsi*19950+787650)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*59850+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*53865+11146284)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*96390+15173004)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*160650+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15269394)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*214200+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15412194)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+15139614)*1+lsi)*1]), &(inteval->stack[((hsi*264600+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*231525+15601194)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+15448314)*1+lsi)*1]), &(inteval->stack[((hsi*308700+15139614)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10373625)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*343980+15448314)*1+lsi)*1]), &(inteval->stack[((hsi*294840+15832719)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*368550+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*311850+807600)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*381150+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*330330+12257784)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+15866004)*1+lsi)*1]), &(inteval->stack[((hsi*990990+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*849420+12588114)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+17564844)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+15866004)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+13437534)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*10920+737400)*1+lsi)*1]), &(inteval->stack[((hsi*9360+748320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+12015594)*1+lsi)*1]), &(inteval->stack[((hsi*12600+724800)*1+lsi)*1]), &(inteval->stack[((hsi*10920+737400)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+12048354)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12015594)*1+lsi)*1]), &(inteval->stack[((hsi*28080+11987514)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+12104514)*1+lsi)*1]), &(inteval->stack[((hsi*14400+710400)*1+lsi)*1]), &(inteval->stack[((hsi*12600+724800)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+12142314)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12104514)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12015594)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+12207834)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12142314)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12048354)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+12301434)*1+lsi)*1]), &(inteval->stack[((hsi*16320+694080)*1+lsi)*1]), &(inteval->stack[((hsi*14400+710400)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+12344634)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12301434)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12104514)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+12420234)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12344634)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12142314)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+12529434)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12420234)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12207834)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+12669834)*1+lsi)*1]), &(inteval->stack[((hsi*18360+675720)*1+lsi)*1]), &(inteval->stack[((hsi*16320+694080)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+12718794)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12669834)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12301434)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+12805194)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12718794)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12344634)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+12931194)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12805194)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12420234)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+765600)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12931194)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12529434)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+13094994)*1+lsi)*1]), &(inteval->stack[((hsi*20520+655200)*1+lsi)*1]), &(inteval->stack[((hsi*18360+675720)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+13150074)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13094994)*1+lsi)*1]), &(inteval->stack[((hsi*48960+12669834)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*97920+13150074)*1+lsi)*1]), &(inteval->stack[((hsi*86400+12718794)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+962160)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12805194)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+12669834)*1+lsi)*1]), &(inteval->stack[((hsi*189000+962160)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12931194)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12669834)*1+lsi)*1]), &(inteval->stack[((hsi*196560+765600)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+12301434)*1+lsi)*1]), &(inteval->stack[((hsi*22800+632400)*1+lsi)*1]), &(inteval->stack[((hsi*20520+655200)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+12899154)*1+lsi)*1]), &(inteval->stack[((hsi*61560+12301434)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13094994)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+13247994)*1+lsi)*1]), &(inteval->stack[((hsi*110160+12899154)*1+lsi)*1]), &(inteval->stack[((hsi*97920+13150074)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+13009314)*1+lsi)*1]), &(inteval->stack[((hsi*163200+13247994)*1+lsi)*1]), &(inteval->stack[((hsi*144000+10985634)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13009314)*1+lsi)*1]), &(inteval->stack[((hsi*189000+962160)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+20222724)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*229320+12669834)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+20528484)*1+lsi)*1]), &(inteval->stack[((hsi*305760+20222724)*1+lsi)*1]), &(inteval->stack[((hsi*262080+19960644)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+962160)*1+lsi)*1]), &(inteval->stack[((hsi*9360+748320)*1+lsi)*1]), &(inteval->stack[((hsi*7920+757680)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+12669834)*1+lsi)*1]), &(inteval->stack[((hsi*28080+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*23760+962160)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+962160)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12048354)*1+lsi)*1]), &(inteval->stack[((hsi*47520+12669834)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+12669834)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12207834)*1+lsi)*1]), &(inteval->stack[((hsi*79200+962160)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12529434)*1+lsi)*1]), &(inteval->stack[((hsi*118800+12669834)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+12362994)*1+lsi)*1]), &(inteval->stack[((hsi*196560+765600)*1+lsi)*1]), &(inteval->stack[((hsi*166320+11987514)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+655200)*1+lsi)*1]), &(inteval->stack[((hsi*262080+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12362994)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+12362994)*1+lsi)*1]), &(inteval->stack[((hsi*336960+20528484)*1+lsi)*1]), &(inteval->stack[((hsi*285120+655200)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+655200)*1+lsi)*1]), &(inteval->stack[((hsi*25200+607200)*1+lsi)*1]), &(inteval->stack[((hsi*22800+632400)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+723600)*1+lsi)*1]), &(inteval->stack[((hsi*68400+655200)*1+lsi)*1]), &(inteval->stack[((hsi*61560+12301434)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*123120+723600)*1+lsi)*1]), &(inteval->stack[((hsi*110160+12899154)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+607200)*1+lsi)*1]), &(inteval->stack[((hsi*183600+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*163200+13247994)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*244800+607200)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13009314)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+12719394)*1+lsi)*1]), &(inteval->stack[((hsi*302400+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*264600+10985634)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+607200)*1+lsi)*1]), &(inteval->stack[((hsi*352800+12719394)*1+lsi)*1]), &(inteval->stack[((hsi*305760+20222724)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+12719394)*1+lsi)*1]), &(inteval->stack[((hsi*393120+607200)*1+lsi)*1]), &(inteval->stack[((hsi*336960+20528484)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+607200)*1+lsi)*1]), &(inteval->stack[((hsi*421200+12719394)*1+lsi)*1]), &(inteval->stack[((hsi*356400+12362994)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*435600+607200)*1+lsi)*1]), &(inteval->stack[((hsi*381150+10271250)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*990990+14875014)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+21942624)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+15866004)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+24774024)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+21942624)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17564844)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*12376+575240)*1+lsi)*1]), &(inteval->stack[((hsi*10608+587616)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+14906838)*1+lsi)*1]), &(inteval->stack[((hsi*14280+560960)*1+lsi)*1]), &(inteval->stack[((hsi*12376+575240)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+14943966)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14906838)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14875014)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+15007614)*1+lsi)*1]), &(inteval->stack[((hsi*16320+544640)*1+lsi)*1]), &(inteval->stack[((hsi*14280+560960)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+15050454)*1+lsi)*1]), &(inteval->stack[((hsi*42840+15007614)*1+lsi)*1]), &(inteval->stack[((hsi*37128+14906838)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+15124710)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15050454)*1+lsi)*1]), &(inteval->stack[((hsi*63648+14943966)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+15230790)*1+lsi)*1]), &(inteval->stack[((hsi*18496+526144)*1+lsi)*1]), &(inteval->stack[((hsi*16320+544640)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+15279750)*1+lsi)*1]), &(inteval->stack[((hsi*48960+15230790)*1+lsi)*1]), &(inteval->stack[((hsi*42840+15007614)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+15365430)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15279750)*1+lsi)*1]), &(inteval->stack[((hsi*74256+15050454)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+15489190)*1+lsi)*1]), &(inteval->stack[((hsi*123760+15365430)*1+lsi)*1]), &(inteval->stack[((hsi*106080+15124710)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+15648310)*1+lsi)*1]), &(inteval->stack[((hsi*20808+505336)*1+lsi)*1]), &(inteval->stack[((hsi*18496+526144)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+15703798)*1+lsi)*1]), &(inteval->stack[((hsi*55488+15648310)*1+lsi)*1]), &(inteval->stack[((hsi*48960+15230790)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+15801718)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15703798)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15279750)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+15944518)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15801718)*1+lsi)*1]), &(inteval->stack[((hsi*123760+15365430)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+16130158)*1+lsi)*1]), &(inteval->stack[((hsi*185640+15944518)*1+lsi)*1]), &(inteval->stack[((hsi*159120+15489190)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+16352926)*1+lsi)*1]), &(inteval->stack[((hsi*23256+482080)*1+lsi)*1]), &(inteval->stack[((hsi*20808+505336)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+16415350)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16352926)*1+lsi)*1]), &(inteval->stack[((hsi*55488+15648310)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+16526326)*1+lsi)*1]), &(inteval->stack[((hsi*110976+16415350)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15703798)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+16689526)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16526326)*1+lsi)*1]), &(inteval->stack[((hsi*142800+15801718)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+16903726)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16689526)*1+lsi)*1]), &(inteval->stack[((hsi*185640+15944518)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+15648310)*1+lsi)*1]), &(inteval->stack[((hsi*259896+16903726)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16130158)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*25840+456240)*1+lsi)*1]), &(inteval->stack[((hsi*23256+482080)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+10341018)*1+lsi)*1]), &(inteval->stack[((hsi*69768+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*62424+16352926)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+17163622)*1+lsi)*1]), &(inteval->stack[((hsi*124848+10341018)*1+lsi)*1]), &(inteval->stack[((hsi*110976+16415350)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+13130964)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17163622)*1+lsi)*1]), &(inteval->stack[((hsi*163200+16526326)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+16352926)*1+lsi)*1]), &(inteval->stack[((hsi*244800+13130964)*1+lsi)*1]), &(inteval->stack[((hsi*214200+16689526)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+28367724)*1+lsi)*1]), &(inteval->stack[((hsi*299880+16352926)*1+lsi)*1]), &(inteval->stack[((hsi*259896+16903726)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+16652806)*1+lsi)*1]), &(inteval->stack[((hsi*346528+28367724)*1+lsi)*1]), &(inteval->stack[((hsi*297024+15648310)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*10608+587616)*1+lsi)*1]), &(inteval->stack[((hsi*8976+598224)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+10465866)*1+lsi)*1]), &(inteval->stack[((hsi*31824+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*26928+10985634)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+10985634)*1+lsi)*1]), &(inteval->stack[((hsi*63648+14943966)*1+lsi)*1]), &(inteval->stack[((hsi*53856+10465866)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+10465866)*1+lsi)*1]), &(inteval->stack[((hsi*106080+15124710)*1+lsi)*1]), &(inteval->stack[((hsi*89760+10985634)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*159120+15489190)*1+lsi)*1]), &(inteval->stack[((hsi*134640+10465866)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+15063510)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16130158)*1+lsi)*1]), &(inteval->stack[((hsi*188496+14875014)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+15945334)*1+lsi)*1]), &(inteval->stack[((hsi*297024+15648310)*1+lsi)*1]), &(inteval->stack[((hsi*251328+15063510)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*381888+16652806)*1+lsi)*1]), &(inteval->stack[((hsi*323136+15945334)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+15278934)*1+lsi)*1]), &(inteval->stack[((hsi*28560+427680)*1+lsi)*1]), &(inteval->stack[((hsi*25840+456240)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+15356454)*1+lsi)*1]), &(inteval->stack[((hsi*77520+15278934)*1+lsi)*1]), &(inteval->stack[((hsi*69768+10271250)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+15495990)*1+lsi)*1]), &(inteval->stack[((hsi*139536+15356454)*1+lsi)*1]), &(inteval->stack[((hsi*124848+10341018)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+15704070)*1+lsi)*1]), &(inteval->stack[((hsi*208080+15495990)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17163622)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+17034694)*1+lsi)*1]), &(inteval->stack[((hsi*277440+15704070)*1+lsi)*1]), &(inteval->stack[((hsi*244800+13130964)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+15278934)*1+lsi)*1]), &(inteval->stack[((hsi*342720+17034694)*1+lsi)*1]), &(inteval->stack[((hsi*299880+16352926)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+15678774)*1+lsi)*1]), &(inteval->stack[((hsi*399840+15278934)*1+lsi)*1]), &(inteval->stack[((hsi*346528+28367724)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+17034694)*1+lsi)*1]), &(inteval->stack[((hsi*445536+15678774)*1+lsi)*1]), &(inteval->stack[((hsi*381888+16652806)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+15278934)*1+lsi)*1]), &(inteval->stack[((hsi*477360+17034694)*1+lsi)*1]), &(inteval->stack[((hsi*403920+14875014)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1306800+15772614)*1+lsi)*1]), &(inteval->stack[((hsi*493680+15278934)*1+lsi)*1]), &(inteval->stack[((hsi*435600+607200)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2286900+28367724)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+15772614)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+11987514)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3303300+30654624)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+28367724)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+19960644)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*4247100+33957924)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+30654624)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+21942624)*1+lsi)*1]),3630);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*5031180+38205024)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+33957924)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+24774024)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*13923+391725)*1+lsi)*1]), &(inteval->stack[((hsi*11934+405648)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+19996446)*1+lsi)*1]), &(inteval->stack[((hsi*16065+375660)*1+lsi)*1]), &(inteval->stack[((hsi*13923+391725)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+20038215)*1+lsi)*1]), &(inteval->stack[((hsi*41769+19996446)*1+lsi)*1]), &(inteval->stack[((hsi*35802+19960644)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+20109819)*1+lsi)*1]), &(inteval->stack[((hsi*18360+357300)*1+lsi)*1]), &(inteval->stack[((hsi*16065+375660)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+20158014)*1+lsi)*1]), &(inteval->stack[((hsi*48195+20109819)*1+lsi)*1]), &(inteval->stack[((hsi*41769+19996446)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+20241552)*1+lsi)*1]), &(inteval->stack[((hsi*83538+20158014)*1+lsi)*1]), &(inteval->stack[((hsi*71604+20038215)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+20360892)*1+lsi)*1]), &(inteval->stack[((hsi*20808+336492)*1+lsi)*1]), &(inteval->stack[((hsi*18360+357300)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+20415972)*1+lsi)*1]), &(inteval->stack[((hsi*55080+20360892)*1+lsi)*1]), &(inteval->stack[((hsi*48195+20109819)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+20512362)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20415972)*1+lsi)*1]), &(inteval->stack[((hsi*83538+20158014)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+20651592)*1+lsi)*1]), &(inteval->stack[((hsi*139230+20512362)*1+lsi)*1]), &(inteval->stack[((hsi*119340+20241552)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+20830602)*1+lsi)*1]), &(inteval->stack[((hsi*23409+313083)*1+lsi)*1]), &(inteval->stack[((hsi*20808+336492)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+20893026)*1+lsi)*1]), &(inteval->stack[((hsi*62424+20830602)*1+lsi)*1]), &(inteval->stack[((hsi*55080+20360892)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+21003186)*1+lsi)*1]), &(inteval->stack[((hsi*110160+20893026)*1+lsi)*1]), &(inteval->stack[((hsi*96390+20415972)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+21163836)*1+lsi)*1]), &(inteval->stack[((hsi*160650+21003186)*1+lsi)*1]), &(inteval->stack[((hsi*139230+20512362)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+21372681)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21163836)*1+lsi)*1]), &(inteval->stack[((hsi*179010+20651592)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+21623295)*1+lsi)*1]), &(inteval->stack[((hsi*26163+286920)*1+lsi)*1]), &(inteval->stack[((hsi*23409+313083)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+21693522)*1+lsi)*1]), &(inteval->stack[((hsi*70227+21623295)*1+lsi)*1]), &(inteval->stack[((hsi*62424+20830602)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+21818370)*1+lsi)*1]), &(inteval->stack[((hsi*124848+21693522)*1+lsi)*1]), &(inteval->stack[((hsi*110160+20893026)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+22001970)*1+lsi)*1]), &(inteval->stack[((hsi*183600+21818370)*1+lsi)*1]), &(inteval->stack[((hsi*160650+21003186)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+22242945)*1+lsi)*1]), &(inteval->stack[((hsi*240975+22001970)*1+lsi)*1]), &(inteval->stack[((hsi*208845+21163836)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+22535328)*1+lsi)*1]), &(inteval->stack[((hsi*292383+22242945)*1+lsi)*1]), &(inteval->stack[((hsi*250614+21372681)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+22869480)*1+lsi)*1]), &(inteval->stack[((hsi*29070+257850)*1+lsi)*1]), &(inteval->stack[((hsi*26163+286920)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+22947969)*1+lsi)*1]), &(inteval->stack[((hsi*78489+22869480)*1+lsi)*1]), &(inteval->stack[((hsi*70227+21623295)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+23088423)*1+lsi)*1]), &(inteval->stack[((hsi*140454+22947969)*1+lsi)*1]), &(inteval->stack[((hsi*124848+21693522)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+23296503)*1+lsi)*1]), &(inteval->stack[((hsi*208080+23088423)*1+lsi)*1]), &(inteval->stack[((hsi*183600+21818370)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*275400+23296503)*1+lsi)*1]), &(inteval->stack[((hsi*240975+22001970)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+23571903)*1+lsi)*1]), &(inteval->stack[((hsi*337365+11987514)*1+lsi)*1]), &(inteval->stack[((hsi*292383+22242945)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+12324879)*1+lsi)*1]), &(inteval->stack[((hsi*389844+23571903)*1+lsi)*1]), &(inteval->stack[((hsi*334152+22535328)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+21623295)*1+lsi)*1]), &(inteval->stack[((hsi*11934+405648)*1+lsi)*1]), &(inteval->stack[((hsi*10098+417582)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+286920)*1+lsi)*1]), &(inteval->stack[((hsi*35802+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*30294+21623295)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+21623295)*1+lsi)*1]), &(inteval->stack[((hsi*71604+20038215)*1+lsi)*1]), &(inteval->stack[((hsi*60588+286920)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+286920)*1+lsi)*1]), &(inteval->stack[((hsi*119340+20241552)*1+lsi)*1]), &(inteval->stack[((hsi*100980+21623295)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+21623295)*1+lsi)*1]), &(inteval->stack[((hsi*179010+20651592)*1+lsi)*1]), &(inteval->stack[((hsi*151470+286920)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*250614+21372681)*1+lsi)*1]), &(inteval->stack[((hsi*212058+21623295)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+20243388)*1+lsi)*1]), &(inteval->stack[((hsi*334152+22535328)*1+lsi)*1]), &(inteval->stack[((hsi*282744+19960644)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+20606916)*1+lsi)*1]), &(inteval->stack[((hsi*429624+12324879)*1+lsi)*1]), &(inteval->stack[((hsi*363528+20243388)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+21061326)*1+lsi)*1]), &(inteval->stack[((hsi*32130+225720)*1+lsi)*1]), &(inteval->stack[((hsi*29070+257850)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+21148536)*1+lsi)*1]), &(inteval->stack[((hsi*87210+21061326)*1+lsi)*1]), &(inteval->stack[((hsi*78489+22869480)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+21305514)*1+lsi)*1]), &(inteval->stack[((hsi*156978+21148536)*1+lsi)*1]), &(inteval->stack[((hsi*140454+22947969)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+21539604)*1+lsi)*1]), &(inteval->stack[((hsi*234090+21305514)*1+lsi)*1]), &(inteval->stack[((hsi*208080+23088423)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+21851724)*1+lsi)*1]), &(inteval->stack[((hsi*312120+21539604)*1+lsi)*1]), &(inteval->stack[((hsi*275400+23296503)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+22237284)*1+lsi)*1]), &(inteval->stack[((hsi*385560+21851724)*1+lsi)*1]), &(inteval->stack[((hsi*337365+11987514)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+21061326)*1+lsi)*1]), &(inteval->stack[((hsi*449820+22237284)*1+lsi)*1]), &(inteval->stack[((hsi*389844+23571903)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+21562554)*1+lsi)*1]), &(inteval->stack[((hsi*501228+21061326)*1+lsi)*1]), &(inteval->stack[((hsi*429624+12324879)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+22099584)*1+lsi)*1]), &(inteval->stack[((hsi*537030+21562554)*1+lsi)*1]), &(inteval->stack[((hsi*454410+20606916)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1481040+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*555390+22099584)*1+lsi)*1]), &(inteval->stack[((hsi*493680+15278934)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2613600+43236204)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+19960644)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+15772614)*1+lsi)*1]),3630);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3811500+45849804)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+43236204)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+28367724)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4954950+49661304)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+45849804)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+30654624)*1+lsi)*1]),3630);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*5945940+54616254)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+49661304)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+33957924)*1+lsi)*1]),3630);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*6708240+28367724)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+54616254)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+38205024)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1274075)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1279080)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+35088834)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1268300)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1274075)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+35103849)*1+lsi)*1]), &(inteval->stack[((hsi*15015+35088834)*1+lsi)*1]), &(inteval->stack[((hsi*12870+35075964)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+35129589)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1261700)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1268300)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+35146914)*1+lsi)*1]), &(inteval->stack[((hsi*17325+35129589)*1+lsi)*1]), &(inteval->stack[((hsi*15015+35088834)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+35176944)*1+lsi)*1]), &(inteval->stack[((hsi*30030+35146914)*1+lsi)*1]), &(inteval->stack[((hsi*25740+35103849)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+35219844)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1254220)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1261700)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+35239644)*1+lsi)*1]), &(inteval->stack[((hsi*19800+35219844)*1+lsi)*1]), &(inteval->stack[((hsi*17325+35129589)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+35274294)*1+lsi)*1]), &(inteval->stack[((hsi*34650+35239644)*1+lsi)*1]), &(inteval->stack[((hsi*30030+35146914)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+35324344)*1+lsi)*1]), &(inteval->stack[((hsi*50050+35274294)*1+lsi)*1]), &(inteval->stack[((hsi*42900+35176944)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+35388694)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1245805)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1254220)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+35411134)*1+lsi)*1]), &(inteval->stack[((hsi*22440+35388694)*1+lsi)*1]), &(inteval->stack[((hsi*19800+35219844)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+35450734)*1+lsi)*1]), &(inteval->stack[((hsi*39600+35411134)*1+lsi)*1]), &(inteval->stack[((hsi*34650+35239644)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+35508484)*1+lsi)*1]), &(inteval->stack[((hsi*57750+35450734)*1+lsi)*1]), &(inteval->stack[((hsi*50050+35274294)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*75075+35508484)*1+lsi)*1]), &(inteval->stack[((hsi*64350+35324344)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+35583559)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1236400)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1245805)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+14965104)*1+lsi)*1]), &(inteval->stack[((hsi*25245+35583559)*1+lsi)*1]), &(inteval->stack[((hsi*22440+35388694)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+35608804)*1+lsi)*1]), &(inteval->stack[((hsi*44880+14965104)*1+lsi)*1]), &(inteval->stack[((hsi*39600+35411134)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+15009984)*1+lsi)*1]), &(inteval->stack[((hsi*66000+35608804)*1+lsi)*1]), &(inteval->stack[((hsi*57750+35450734)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+35674804)*1+lsi)*1]), &(inteval->stack[((hsi*86625+15009984)*1+lsi)*1]), &(inteval->stack[((hsi*75075+35508484)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+15096609)*1+lsi)*1]), &(inteval->stack[((hsi*105105+35674804)*1+lsi)*1]), &(inteval->stack[((hsi*90090+14875014)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+35779909)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1225950)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1236400)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+35808124)*1+lsi)*1]), &(inteval->stack[((hsi*28215+35779909)*1+lsi)*1]), &(inteval->stack[((hsi*25245+35583559)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+15216729)*1+lsi)*1]), &(inteval->stack[((hsi*50490+35808124)*1+lsi)*1]), &(inteval->stack[((hsi*44880+14965104)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+35858614)*1+lsi)*1]), &(inteval->stack[((hsi*74800+15216729)*1+lsi)*1]), &(inteval->stack[((hsi*66000+35608804)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+15291529)*1+lsi)*1]), &(inteval->stack[((hsi*99000+35858614)*1+lsi)*1]), &(inteval->stack[((hsi*86625+15009984)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+35957614)*1+lsi)*1]), &(inteval->stack[((hsi*121275+15291529)*1+lsi)*1]), &(inteval->stack[((hsi*105105+35674804)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+15412804)*1+lsi)*1]), &(inteval->stack[((hsi*140140+35957614)*1+lsi)*1]), &(inteval->stack[((hsi*120120+15096609)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1279080)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1283370)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+22665864)*1+lsi)*1]), &(inteval->stack[((hsi*12870+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*10890+22654974)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*25740+35103849)*1+lsi)*1]), &(inteval->stack[((hsi*21780+22665864)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*42900+35176944)*1+lsi)*1]), &(inteval->stack[((hsi*36300+36097754)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*64350+35324344)*1+lsi)*1]), &(inteval->stack[((hsi*54450+22654974)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*90090+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*76230+36097754)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*120120+15096609)*1+lsi)*1]), &(inteval->stack[((hsi*101640+22654974)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*154440+15412804)*1+lsi)*1]), &(inteval->stack[((hsi*130680+36097754)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1214400)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1225950)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+36129104)*1+lsi)*1]), &(inteval->stack[((hsi*31350+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*28215+35779909)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+36185534)*1+lsi)*1]), &(inteval->stack[((hsi*56430+36129104)*1+lsi)*1]), &(inteval->stack[((hsi*50490+35808124)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+15567244)*1+lsi)*1]), &(inteval->stack[((hsi*84150+36185534)*1+lsi)*1]), &(inteval->stack[((hsi*74800+15216729)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*112200+15567244)*1+lsi)*1]), &(inteval->stack[((hsi*99000+35858614)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+15567244)*1+lsi)*1]), &(inteval->stack[((hsi*138600+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*121275+15291529)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*161700+15567244)*1+lsi)*1]), &(inteval->stack[((hsi*140140+35957614)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+15567244)*1+lsi)*1]), &(inteval->stack[((hsi*180180+36097754)*1+lsi)*1]), &(inteval->stack[((hsi*154440+15412804)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*193050+15567244)*1+lsi)*1]), &(inteval->stack[((hsi*163350+22654974)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*598950+35275614)*1+lsi)*1]), &(inteval->stack[((hsi*239580+10746054)*1+lsi)*1]), &(inteval->stack[((hsi*199650+35075964)*1+lsi)*1]),3630);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1197900+14875014)*1+lsi)*1]), &(inteval->stack[((hsi*718740+11268774)*1+lsi)*1]), &(inteval->stack[((hsi*598950+35275614)*1+lsi)*1]),3630);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1996500+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+13437534)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+14875014)*1+lsi)*1]),3630);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2994750+12267750)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+17564844)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+10271250)*1+lsi)*1]),3630);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*4192650+15262500)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+24774024)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+12267750)*1+lsi)*1]),3630);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*5590200+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+38205024)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+15262500)*1+lsi)*1]),3630);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*7187400+10271250)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+28367724)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+22654974)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*15561+185535)*1+lsi)*1]), &(inteval->stack[((hsi*13338+201096)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+35115978)*1+lsi)*1]), &(inteval->stack[((hsi*17955+167580)*1+lsi)*1]), &(inteval->stack[((hsi*15561+185535)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+35162661)*1+lsi)*1]), &(inteval->stack[((hsi*46683+35115978)*1+lsi)*1]), &(inteval->stack[((hsi*40014+35075964)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+35242689)*1+lsi)*1]), &(inteval->stack[((hsi*20520+147060)*1+lsi)*1]), &(inteval->stack[((hsi*17955+167580)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+35296554)*1+lsi)*1]), &(inteval->stack[((hsi*53865+35242689)*1+lsi)*1]), &(inteval->stack[((hsi*46683+35115978)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+35389920)*1+lsi)*1]), &(inteval->stack[((hsi*93366+35296554)*1+lsi)*1]), &(inteval->stack[((hsi*80028+35162661)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+35523300)*1+lsi)*1]), &(inteval->stack[((hsi*23256+123804)*1+lsi)*1]), &(inteval->stack[((hsi*20520+147060)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+35584860)*1+lsi)*1]), &(inteval->stack[((hsi*61560+35523300)*1+lsi)*1]), &(inteval->stack[((hsi*53865+35242689)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+35692590)*1+lsi)*1]), &(inteval->stack[((hsi*107730+35584860)*1+lsi)*1]), &(inteval->stack[((hsi*93366+35296554)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+35848200)*1+lsi)*1]), &(inteval->stack[((hsi*155610+35692590)*1+lsi)*1]), &(inteval->stack[((hsi*133380+35389920)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+36048270)*1+lsi)*1]), &(inteval->stack[((hsi*26163+97641)*1+lsi)*1]), &(inteval->stack[((hsi*23256+123804)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+36118038)*1+lsi)*1]), &(inteval->stack[((hsi*69768+36048270)*1+lsi)*1]), &(inteval->stack[((hsi*61560+35523300)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+36241158)*1+lsi)*1]), &(inteval->stack[((hsi*123120+36118038)*1+lsi)*1]), &(inteval->stack[((hsi*107730+35584860)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+36420708)*1+lsi)*1]), &(inteval->stack[((hsi*179550+36241158)*1+lsi)*1]), &(inteval->stack[((hsi*155610+35692590)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+36654123)*1+lsi)*1]), &(inteval->stack[((hsi*233415+36420708)*1+lsi)*1]), &(inteval->stack[((hsi*200070+35848200)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+36934221)*1+lsi)*1]), &(inteval->stack[((hsi*29241+68400)*1+lsi)*1]), &(inteval->stack[((hsi*26163+97641)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+37012710)*1+lsi)*1]), &(inteval->stack[((hsi*78489+36934221)*1+lsi)*1]), &(inteval->stack[((hsi*69768+36048270)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+37152246)*1+lsi)*1]), &(inteval->stack[((hsi*139536+37012710)*1+lsi)*1]), &(inteval->stack[((hsi*123120+36118038)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+37357446)*1+lsi)*1]), &(inteval->stack[((hsi*205200+37152246)*1+lsi)*1]), &(inteval->stack[((hsi*179550+36241158)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*269325+37357446)*1+lsi)*1]), &(inteval->stack[((hsi*233415+36420708)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+37626771)*1+lsi)*1]), &(inteval->stack[((hsi*326781+22654974)*1+lsi)*1]), &(inteval->stack[((hsi*280098+36654123)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+22981755)*1+lsi)*1]), &(inteval->stack[((hsi*32490+35910)*1+lsi)*1]), &(inteval->stack[((hsi*29241+68400)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+23069478)*1+lsi)*1]), &(inteval->stack[((hsi*87723+22981755)*1+lsi)*1]), &(inteval->stack[((hsi*78489+36934221)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+38000235)*1+lsi)*1]), &(inteval->stack[((hsi*156978+23069478)*1+lsi)*1]), &(inteval->stack[((hsi*139536+37012710)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+23226456)*1+lsi)*1]), &(inteval->stack[((hsi*232560+38000235)*1+lsi)*1]), &(inteval->stack[((hsi*205200+37152246)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+38232795)*1+lsi)*1]), &(inteval->stack[((hsi*307800+23226456)*1+lsi)*1]), &(inteval->stack[((hsi*269325+37357446)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+23534256)*1+lsi)*1]), &(inteval->stack[((hsi*377055+38232795)*1+lsi)*1]), &(inteval->stack[((hsi*326781+22654974)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+38609850)*1+lsi)*1]), &(inteval->stack[((hsi*435708+23534256)*1+lsi)*1]), &(inteval->stack[((hsi*373464+37626771)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+23969964)*1+lsi)*1]), &(inteval->stack[((hsi*13338+201096)*1+lsi)*1]), &(inteval->stack[((hsi*11286+214434)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+24003822)*1+lsi)*1]), &(inteval->stack[((hsi*40014+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*33858+23969964)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+24071538)*1+lsi)*1]), &(inteval->stack[((hsi*80028+35162661)*1+lsi)*1]), &(inteval->stack[((hsi*67716+24003822)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+24184398)*1+lsi)*1]), &(inteval->stack[((hsi*133380+35389920)*1+lsi)*1]), &(inteval->stack[((hsi*112860+24071538)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*200070+35848200)*1+lsi)*1]), &(inteval->stack[((hsi*169290+24184398)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+23969964)*1+lsi)*1]), &(inteval->stack[((hsi*280098+36654123)*1+lsi)*1]), &(inteval->stack[((hsi*237006+39090018)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*373464+37626771)*1+lsi)*1]), &(inteval->stack[((hsi*316008+23969964)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+23969964)*1+lsi)*1]), &(inteval->stack[((hsi*480168+38609850)*1+lsi)*1]), &(inteval->stack[((hsi*406296+39090018)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*35910+0)*1+lsi)*1]), &(inteval->stack[((hsi*32490+35910)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+39187488)*1+lsi)*1]), &(inteval->stack[((hsi*97470+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*87723+22981755)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+24477834)*1+lsi)*1]), &(inteval->stack[((hsi*175446+39187488)*1+lsi)*1]), &(inteval->stack[((hsi*156978+23069478)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*261630+24477834)*1+lsi)*1]), &(inteval->stack[((hsi*232560+38000235)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+24477834)*1+lsi)*1]), &(inteval->stack[((hsi*348840+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*307800+23226456)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*430920+24477834)*1+lsi)*1]), &(inteval->stack[((hsi*377055+38232795)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+24477834)*1+lsi)*1]), &(inteval->stack[((hsi*502740+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*435708+23534256)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*560196+24477834)*1+lsi)*1]), &(inteval->stack[((hsi*480168+38609850)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*600210+39090018)*1+lsi)*1]), &(inteval->stack[((hsi*507870+23969964)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1666170+35696694)*1+lsi)*1]), &(inteval->stack[((hsi*620730+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*555390+22099584)*1+lsi)*1]),3630);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*2962080+21441684)*1+lsi)*1]), &(inteval->stack[((hsi*1666170+35696694)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+19960644)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*4356000+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*2962080+21441684)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+43236204)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*5717250+17458650)*1+lsi)*1]), &(inteval->stack[((hsi*4356000+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+45849804)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*6936930+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*5717250+17458650)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+49661304)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*7927920+42012894)*1+lsi)*1]), &(inteval->stack[((hsi*6936930+35075964)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+54616254)*1+lsi)*1]),3630);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*8624880+17458650)*1+lsi)*1]), &(inteval->stack[((hsi*7927920+42012894)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+28367724)*1+lsi)*1]),3630);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*8984250+1287000)*1+lsi)*1]), &(inteval->stack[((hsi*8624880+17458650)*1+lsi)*1]), &(inteval->stack[((hsi*7187400+10271250)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8984250+1287000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
