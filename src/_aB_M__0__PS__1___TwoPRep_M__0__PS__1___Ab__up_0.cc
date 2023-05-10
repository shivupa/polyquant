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
#include <_aB_M__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1806915)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_M__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1706100)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1712106)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+14999259)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1699170)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1706100)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+15017277)*1+lsi)*1]), &(inteval->stack[((hsi*18018+14999259)*1+lsi)*1]), &(inteval->stack[((hsi*15444+14983815)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+15048165)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1691250)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1699170)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+15068955)*1+lsi)*1]), &(inteval->stack[((hsi*20790+15048165)*1+lsi)*1]), &(inteval->stack[((hsi*18018+14999259)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+15104991)*1+lsi)*1]), &(inteval->stack[((hsi*36036+15068955)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15017277)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+15156471)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1682274)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1691250)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+15180231)*1+lsi)*1]), &(inteval->stack[((hsi*23760+15156471)*1+lsi)*1]), &(inteval->stack[((hsi*20790+15048165)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+15221811)*1+lsi)*1]), &(inteval->stack[((hsi*41580+15180231)*1+lsi)*1]), &(inteval->stack[((hsi*36036+15068955)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+15281871)*1+lsi)*1]), &(inteval->stack[((hsi*60060+15221811)*1+lsi)*1]), &(inteval->stack[((hsi*51480+15104991)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+15048165)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1672176)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1682274)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+15359091)*1+lsi)*1]), &(inteval->stack[((hsi*26928+15048165)*1+lsi)*1]), &(inteval->stack[((hsi*23760+15156471)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+15406611)*1+lsi)*1]), &(inteval->stack[((hsi*47520+15359091)*1+lsi)*1]), &(inteval->stack[((hsi*41580+15180231)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+15475911)*1+lsi)*1]), &(inteval->stack[((hsi*69300+15406611)*1+lsi)*1]), &(inteval->stack[((hsi*60060+15221811)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+15156471)*1+lsi)*1]), &(inteval->stack[((hsi*90090+15475911)*1+lsi)*1]), &(inteval->stack[((hsi*77220+15281871)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+15566001)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1660890)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1672176)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+15596295)*1+lsi)*1]), &(inteval->stack[((hsi*30294+15566001)*1+lsi)*1]), &(inteval->stack[((hsi*26928+15048165)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+15650151)*1+lsi)*1]), &(inteval->stack[((hsi*53856+15596295)*1+lsi)*1]), &(inteval->stack[((hsi*47520+15359091)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+15729351)*1+lsi)*1]), &(inteval->stack[((hsi*79200+15650151)*1+lsi)*1]), &(inteval->stack[((hsi*69300+15406611)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+15833301)*1+lsi)*1]), &(inteval->stack[((hsi*103950+15729351)*1+lsi)*1]), &(inteval->stack[((hsi*90090+15475911)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+15359091)*1+lsi)*1]), &(inteval->stack[((hsi*126126+15833301)*1+lsi)*1]), &(inteval->stack[((hsi*108108+15156471)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+15503235)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1648350)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1660890)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+15959427)*1+lsi)*1]), &(inteval->stack[((hsi*33858+15503235)*1+lsi)*1]), &(inteval->stack[((hsi*30294+15566001)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+16020015)*1+lsi)*1]), &(inteval->stack[((hsi*60588+15959427)*1+lsi)*1]), &(inteval->stack[((hsi*53856+15596295)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+16109775)*1+lsi)*1]), &(inteval->stack[((hsi*89760+16020015)*1+lsi)*1]), &(inteval->stack[((hsi*79200+15650151)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+15537093)*1+lsi)*1]), &(inteval->stack[((hsi*118800+16109775)*1+lsi)*1]), &(inteval->stack[((hsi*103950+15729351)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+16228575)*1+lsi)*1]), &(inteval->stack[((hsi*145530+15537093)*1+lsi)*1]), &(inteval->stack[((hsi*126126+15833301)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+15682623)*1+lsi)*1]), &(inteval->stack[((hsi*168168+16228575)*1+lsi)*1]), &(inteval->stack[((hsi*144144+15359091)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+15867951)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1634490)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1648350)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+16396743)*1+lsi)*1]), &(inteval->stack[((hsi*37620+15867951)*1+lsi)*1]), &(inteval->stack[((hsi*33858+15503235)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+16464459)*1+lsi)*1]), &(inteval->stack[((hsi*67716+16396743)*1+lsi)*1]), &(inteval->stack[((hsi*60588+15959427)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+16565439)*1+lsi)*1]), &(inteval->stack[((hsi*100980+16464459)*1+lsi)*1]), &(inteval->stack[((hsi*89760+16020015)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+15905571)*1+lsi)*1]), &(inteval->stack[((hsi*134640+16565439)*1+lsi)*1]), &(inteval->stack[((hsi*118800+16109775)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+16700079)*1+lsi)*1]), &(inteval->stack[((hsi*166320+15905571)*1+lsi)*1]), &(inteval->stack[((hsi*145530+15537093)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+16894119)*1+lsi)*1]), &(inteval->stack[((hsi*194040+16700079)*1+lsi)*1]), &(inteval->stack[((hsi*168168+16228575)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+16071891)*1+lsi)*1]), &(inteval->stack[((hsi*216216+16894119)*1+lsi)*1]), &(inteval->stack[((hsi*185328+15682623)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+15503235)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1712106)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1717254)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+15516303)*1+lsi)*1]), &(inteval->stack[((hsi*15444+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*13068+15503235)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+15542439)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15017277)*1+lsi)*1]), &(inteval->stack[((hsi*26136+15516303)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*51480+15104991)*1+lsi)*1]), &(inteval->stack[((hsi*43560+15542439)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+15503235)*1+lsi)*1]), &(inteval->stack[((hsi*77220+15281871)*1+lsi)*1]), &(inteval->stack[((hsi*65340+14983815)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*108108+15156471)*1+lsi)*1]), &(inteval->stack[((hsi*91476+15503235)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+15105783)*1+lsi)*1]), &(inteval->stack[((hsi*144144+15359091)*1+lsi)*1]), &(inteval->stack[((hsi*121968+14983815)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+15262599)*1+lsi)*1]), &(inteval->stack[((hsi*185328+15682623)*1+lsi)*1]), &(inteval->stack[((hsi*156816+15105783)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+15458619)*1+lsi)*1]), &(inteval->stack[((hsi*231660+16071891)*1+lsi)*1]), &(inteval->stack[((hsi*196020+15262599)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1619244)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1634490)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+15025395)*1+lsi)*1]), &(inteval->stack[((hsi*41580+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*37620+15867951)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+15100635)*1+lsi)*1]), &(inteval->stack[((hsi*75240+15025395)*1+lsi)*1]), &(inteval->stack[((hsi*67716+16396743)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+15213495)*1+lsi)*1]), &(inteval->stack[((hsi*112860+15100635)*1+lsi)*1]), &(inteval->stack[((hsi*100980+16464459)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+16303551)*1+lsi)*1]), &(inteval->stack[((hsi*151470+15213495)*1+lsi)*1]), &(inteval->stack[((hsi*134640+16565439)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*188496+16303551)*1+lsi)*1]), &(inteval->stack[((hsi*166320+15905571)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+16303551)*1+lsi)*1]), &(inteval->stack[((hsi*221760+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*194040+16700079)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*249480+16303551)*1+lsi)*1]), &(inteval->stack[((hsi*216216+16894119)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+15698199)*1+lsi)*1]), &(inteval->stack[((hsi*270270+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*231660+16071891)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*283140+15698199)*1+lsi)*1]), &(inteval->stack[((hsi*239580+15458619)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1619244)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1600914)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1608012)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1637496)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1592724)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1600914)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1658790)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1637496)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1619244)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1695294)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1583364)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1592724)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1695294)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1637496)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+15313899)*1+lsi)*1]), &(inteval->stack[((hsi*42588+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1658790)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+15374739)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1572756)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1583364)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+15402819)*1+lsi)*1]), &(inteval->stack[((hsi*28080+15374739)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1695294)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+15451959)*1+lsi)*1]), &(inteval->stack[((hsi*49140+15402819)*1+lsi)*1]), &(inteval->stack[((hsi*42588+15271311)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+15522939)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15451959)*1+lsi)*1]), &(inteval->stack[((hsi*60840+15313899)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1560822)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1572756)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+15614199)*1+lsi)*1]), &(inteval->stack[((hsi*31824+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*28080+15374739)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+15670359)*1+lsi)*1]), &(inteval->stack[((hsi*56160+15614199)*1+lsi)*1]), &(inteval->stack[((hsi*49140+15402819)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+15752259)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15670359)*1+lsi)*1]), &(inteval->stack[((hsi*70980+15451959)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+15374739)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15752259)*1+lsi)*1]), &(inteval->stack[((hsi*91260+15522939)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+15858729)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1547484)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1560822)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+15894531)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15858729)*1+lsi)*1]), &(inteval->stack[((hsi*31824+15271311)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+15958179)*1+lsi)*1]), &(inteval->stack[((hsi*63648+15894531)*1+lsi)*1]), &(inteval->stack[((hsi*56160+15614199)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+16051779)*1+lsi)*1]), &(inteval->stack[((hsi*93600+15958179)*1+lsi)*1]), &(inteval->stack[((hsi*81900+15670359)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+16174629)*1+lsi)*1]), &(inteval->stack[((hsi*122850+16051779)*1+lsi)*1]), &(inteval->stack[((hsi*106470+15752259)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+15614199)*1+lsi)*1]), &(inteval->stack[((hsi*149058+16174629)*1+lsi)*1]), &(inteval->stack[((hsi*127764+15374739)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+15784551)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1532664)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1547484)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+16323687)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15784551)*1+lsi)*1]), &(inteval->stack[((hsi*35802+15858729)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+16395291)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16323687)*1+lsi)*1]), &(inteval->stack[((hsi*63648+15894531)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+16501371)*1+lsi)*1]), &(inteval->stack[((hsi*106080+16395291)*1+lsi)*1]), &(inteval->stack[((hsi*93600+15958179)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+15824565)*1+lsi)*1]), &(inteval->stack[((hsi*140400+16501371)*1+lsi)*1]), &(inteval->stack[((hsi*122850+16051779)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+16641771)*1+lsi)*1]), &(inteval->stack[((hsi*171990+15824565)*1+lsi)*1]), &(inteval->stack[((hsi*149058+16174629)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+15996555)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16641771)*1+lsi)*1]), &(inteval->stack[((hsi*170352+15614199)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+16215579)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1516284)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1532664)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+16840515)*1+lsi)*1]), &(inteval->stack[((hsi*44460+16215579)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15784551)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+16920543)*1+lsi)*1]), &(inteval->stack[((hsi*80028+16840515)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16323687)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+17039883)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16920543)*1+lsi)*1]), &(inteval->stack[((hsi*106080+16395291)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+16260039)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17039883)*1+lsi)*1]), &(inteval->stack[((hsi*140400+16501371)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+17199003)*1+lsi)*1]), &(inteval->stack[((hsi*196560+16260039)*1+lsi)*1]), &(inteval->stack[((hsi*171990+15824565)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+17428323)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17199003)*1+lsi)*1]), &(inteval->stack[((hsi*198744+16641771)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+16456599)*1+lsi)*1]), &(inteval->stack[((hsi*255528+17428323)*1+lsi)*1]), &(inteval->stack[((hsi*219024+15996555)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+15784551)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1608012)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1614096)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+15799995)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1619244)*1+lsi)*1]), &(inteval->stack[((hsi*15444+15784551)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+15830883)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1658790)*1+lsi)*1]), &(inteval->stack[((hsi*30888+15799995)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1532664)*1+lsi)*1]), &(inteval->stack[((hsi*60840+15313899)*1+lsi)*1]), &(inteval->stack[((hsi*51480+15830883)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+15784551)*1+lsi)*1]), &(inteval->stack[((hsi*91260+15522939)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1532664)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+1532664)*1+lsi)*1]), &(inteval->stack[((hsi*127764+15374739)*1+lsi)*1]), &(inteval->stack[((hsi*108108+15784551)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*170352+15614199)*1+lsi)*1]), &(inteval->stack[((hsi*144144+1532664)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+15456639)*1+lsi)*1]), &(inteval->stack[((hsi*219024+15996555)*1+lsi)*1]), &(inteval->stack[((hsi*185328+15271311)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+15688299)*1+lsi)*1]), &(inteval->stack[((hsi*273780+16456599)*1+lsi)*1]), &(inteval->stack[((hsi*231660+15456639)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1498266)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1516284)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+15320451)*1+lsi)*1]), &(inteval->stack[((hsi*49140+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*44460+16215579)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+15971439)*1+lsi)*1]), &(inteval->stack[((hsi*88920+15320451)*1+lsi)*1]), &(inteval->stack[((hsi*80028+16840515)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*133380+15971439)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16920543)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+16730379)*1+lsi)*1]), &(inteval->stack[((hsi*179010+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17039883)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*222768+16730379)*1+lsi)*1]), &(inteval->stack[((hsi*196560+16260039)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+15971439)*1+lsi)*1]), &(inteval->stack[((hsi*262080+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17199003)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+16730379)*1+lsi)*1]), &(inteval->stack[((hsi*294840+15971439)*1+lsi)*1]), &(inteval->stack[((hsi*255528+17428323)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+15971439)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16730379)*1+lsi)*1]), &(inteval->stack[((hsi*273780+16456599)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*334620+15971439)*1+lsi)*1]), &(inteval->stack[((hsi*283140+15688299)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+15611079)*1+lsi)*1]), &(inteval->stack[((hsi*339768+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*287496+14983815)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1498266)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1476881)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1485162)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1519560)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1467326)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1476881)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1544403)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1519560)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1498266)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1456406)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1467326)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1615656)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1519560)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1615656)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1544403)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1665342)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1444030)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1456406)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+16544547)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1665342)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1586991)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+16601877)*1+lsi)*1]), &(inteval->stack[((hsi*57330+16544547)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1615656)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+16684687)*1+lsi)*1]), &(inteval->stack[((hsi*82810+16601877)*1+lsi)*1]), &(inteval->stack[((hsi*70980+16473567)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1430107)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1444030)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+16791157)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1665342)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+1624119)*1+lsi)*1]), &(inteval->stack[((hsi*65520+16791157)*1+lsi)*1]), &(inteval->stack[((hsi*57330+16544547)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+16856677)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1624119)*1+lsi)*1]), &(inteval->stack[((hsi*82810+16601877)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+16980892)*1+lsi)*1]), &(inteval->stack[((hsi*124215+16856677)*1+lsi)*1]), &(inteval->stack[((hsi*106470+16684687)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+16544547)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1414546)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1430107)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+16586316)*1+lsi)*1]), &(inteval->stack[((hsi*41769+16544547)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1586991)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+17129950)*1+lsi)*1]), &(inteval->stack[((hsi*74256+16586316)*1+lsi)*1]), &(inteval->stack[((hsi*65520+16791157)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+17239150)*1+lsi)*1]), &(inteval->stack[((hsi*109200+17129950)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1624119)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+17382475)*1+lsi)*1]), &(inteval->stack[((hsi*143325+17239150)*1+lsi)*1]), &(inteval->stack[((hsi*124215+16856677)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+17556376)*1+lsi)*1]), &(inteval->stack[((hsi*173901+17382475)*1+lsi)*1]), &(inteval->stack[((hsi*149058+16980892)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+16791157)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1397256)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1414546)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+16837840)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16791157)*1+lsi)*1]), &(inteval->stack[((hsi*41769+16544547)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16837840)*1+lsi)*1]), &(inteval->stack[((hsi*74256+16586316)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+17755120)*1+lsi)*1]), &(inteval->stack[((hsi*123760+1586991)*1+lsi)*1]), &(inteval->stack[((hsi*109200+17129950)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+17918920)*1+lsi)*1]), &(inteval->stack[((hsi*163800+17755120)*1+lsi)*1]), &(inteval->stack[((hsi*143325+17239150)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+17129950)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17918920)*1+lsi)*1]), &(inteval->stack[((hsi*173901+17382475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+18119575)*1+lsi)*1]), &(inteval->stack[((hsi*231868+17129950)*1+lsi)*1]), &(inteval->stack[((hsi*198744+17556376)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+17361818)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1378146)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1397256)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+17413688)*1+lsi)*1]), &(inteval->stack[((hsi*51870+17361818)*1+lsi)*1]), &(inteval->stack[((hsi*46683+16791157)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+16544547)*1+lsi)*1]), &(inteval->stack[((hsi*93366+17413688)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16837840)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+16791157)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16544547)*1+lsi)*1]), &(inteval->stack[((hsi*123760+1586991)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+18375103)*1+lsi)*1]), &(inteval->stack[((hsi*185640+16791157)*1+lsi)*1]), &(inteval->stack[((hsi*163800+17755120)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+18604423)*1+lsi)*1]), &(inteval->stack[((hsi*229320+18375103)*1+lsi)*1]), &(inteval->stack[((hsi*200655+17918920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+17755120)*1+lsi)*1]), &(inteval->stack[((hsi*267540+18604423)*1+lsi)*1]), &(inteval->stack[((hsi*231868+17129950)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+18871963)*1+lsi)*1]), &(inteval->stack[((hsi*298116+17755120)*1+lsi)*1]), &(inteval->stack[((hsi*255528+18119575)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+17129950)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1485162)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1492260)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+17147968)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1498266)*1+lsi)*1]), &(inteval->stack[((hsi*18018+17129950)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+17184004)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1544403)*1+lsi)*1]), &(inteval->stack[((hsi*36036+17147968)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1397256)*1+lsi)*1]), &(inteval->stack[((hsi*70980+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*60060+17184004)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1487346)*1+lsi)*1]), &(inteval->stack[((hsi*106470+16684687)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1397256)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+17129950)*1+lsi)*1]), &(inteval->stack[((hsi*149058+16980892)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1487346)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+1397256)*1+lsi)*1]), &(inteval->stack[((hsi*198744+17556376)*1+lsi)*1]), &(inteval->stack[((hsi*168168+17129950)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+16976797)*1+lsi)*1]), &(inteval->stack[((hsi*255528+18119575)*1+lsi)*1]), &(inteval->stack[((hsi*216216+1397256)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+19191373)*1+lsi)*1]), &(inteval->stack[((hsi*319410+18871963)*1+lsi)*1]), &(inteval->stack[((hsi*270270+16976797)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+16976797)*1+lsi)*1]), &(inteval->stack[((hsi*21021+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1378146)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*57330+16976797)*1+lsi)*1]), &(inteval->stack[((hsi*51870+17361818)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+16976797)*1+lsi)*1]), &(inteval->stack[((hsi*103740+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*93366+17413688)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+17132407)*1+lsi)*1]), &(inteval->stack[((hsi*155610+16976797)*1+lsi)*1]), &(inteval->stack[((hsi*139230+16544547)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+17341252)*1+lsi)*1]), &(inteval->stack[((hsi*208845+17132407)*1+lsi)*1]), &(inteval->stack[((hsi*185640+16791157)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*259896+17341252)*1+lsi)*1]), &(inteval->stack[((hsi*229320+18375103)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+16779327)*1+lsi)*1]), &(inteval->stack[((hsi*305760+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*267540+18604423)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+18053236)*1+lsi)*1]), &(inteval->stack[((hsi*343980+16779327)*1+lsi)*1]), &(inteval->stack[((hsi*298116+17755120)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*372645+18053236)*1+lsi)*1]), &(inteval->stack[((hsi*319410+18871963)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+16863957)*1+lsi)*1]), &(inteval->stack[((hsi*390390+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*330330+19191373)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+17260353)*1+lsi)*1]), &(inteval->stack[((hsi*396396+16863957)*1+lsi)*1]), &(inteval->stack[((hsi*339768+15271311)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+18279657)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+17260353)*1+lsi)*1]), &(inteval->stack[((hsi*862488+15611079)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1332450)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1342005)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+16498137)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1321425)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1332450)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*28665+16498137)*1+lsi)*1]), &(inteval->stack[((hsi*24570+16473567)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1308825)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1321425)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+16526802)*1+lsi)*1]), &(inteval->stack[((hsi*33075+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*28665+16498137)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+1406265)*1+lsi)*1]), &(inteval->stack[((hsi*57330+16526802)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1357125)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+15304386)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1294545)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1308825)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+16584132)*1+lsi)*1]), &(inteval->stack[((hsi*37800+15304386)*1+lsi)*1]), &(inteval->stack[((hsi*33075+15271311)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+15342186)*1+lsi)*1]), &(inteval->stack[((hsi*66150+16584132)*1+lsi)*1]), &(inteval->stack[((hsi*57330+16526802)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+1488165)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15342186)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1406265)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+16650282)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1278480)*1+lsi)*1]), &(inteval->stack[((hsi*14280+1294545)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+15437736)*1+lsi)*1]), &(inteval->stack[((hsi*42840+16650282)*1+lsi)*1]), &(inteval->stack[((hsi*37800+15304386)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+16693122)*1+lsi)*1]), &(inteval->stack[((hsi*75600+15437736)*1+lsi)*1]), &(inteval->stack[((hsi*66150+16584132)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+16498137)*1+lsi)*1]), &(inteval->stack[((hsi*110250+16693122)*1+lsi)*1]), &(inteval->stack[((hsi*95550+15342186)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16498137)*1+lsi)*1]), &(inteval->stack[((hsi*122850+1488165)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1260525)*1+lsi)*1]), &(inteval->stack[((hsi*16065+1278480)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+15319506)*1+lsi)*1]), &(inteval->stack[((hsi*48195+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*42840+16650282)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+20176623)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15319506)*1+lsi)*1]), &(inteval->stack[((hsi*75600+15437736)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+15405186)*1+lsi)*1]), &(inteval->stack[((hsi*126000+20176623)*1+lsi)*1]), &(inteval->stack[((hsi*110250+16693122)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+16641462)*1+lsi)*1]), &(inteval->stack[((hsi*165375+15405186)*1+lsi)*1]), &(inteval->stack[((hsi*143325+16498137)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+20302623)*1+lsi)*1]), &(inteval->stack[((hsi*200655+16641462)*1+lsi)*1]), &(inteval->stack[((hsi*171990+20004633)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+16498137)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*17955+1260525)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+1611015)*1+lsi)*1]), &(inteval->stack[((hsi*53865+16498137)*1+lsi)*1]), &(inteval->stack[((hsi*48195+15271311)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+20531943)*1+lsi)*1]), &(inteval->stack[((hsi*96390+1611015)*1+lsi)*1]), &(inteval->stack[((hsi*85680+15319506)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+20674743)*1+lsi)*1]), &(inteval->stack[((hsi*142800+20531943)*1+lsi)*1]), &(inteval->stack[((hsi*126000+20176623)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+20863743)*1+lsi)*1]), &(inteval->stack[((hsi*189000+20674743)*1+lsi)*1]), &(inteval->stack[((hsi*165375+15405186)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*231525+20863743)*1+lsi)*1]), &(inteval->stack[((hsi*200655+16641462)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+16552002)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*229320+20302623)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+20176623)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1218525)*1+lsi)*1]), &(inteval->stack[((hsi*19950+1240575)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+21095268)*1+lsi)*1]), &(inteval->stack[((hsi*59850+20176623)*1+lsi)*1]), &(inteval->stack[((hsi*53865+16498137)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+21202998)*1+lsi)*1]), &(inteval->stack[((hsi*107730+21095268)*1+lsi)*1]), &(inteval->stack[((hsi*96390+1611015)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+21363648)*1+lsi)*1]), &(inteval->stack[((hsi*160650+21202998)*1+lsi)*1]), &(inteval->stack[((hsi*142800+20531943)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+21577848)*1+lsi)*1]), &(inteval->stack[((hsi*214200+21363648)*1+lsi)*1]), &(inteval->stack[((hsi*189000+20674743)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+20531943)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21577848)*1+lsi)*1]), &(inteval->stack[((hsi*231525+20863743)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+21842448)*1+lsi)*1]), &(inteval->stack[((hsi*308700+20531943)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15271311)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+22186428)*1+lsi)*1]), &(inteval->stack[((hsi*343980+21842448)*1+lsi)*1]), &(inteval->stack[((hsi*294840+16552002)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1342005)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1350195)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+15292101)*1+lsi)*1]), &(inteval->stack[((hsi*24570+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*20790+15271311)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+15333681)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1357125)*1+lsi)*1]), &(inteval->stack[((hsi*41580+15292101)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+20840643)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1406265)*1+lsi)*1]), &(inteval->stack[((hsi*69300+15333681)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*122850+1488165)*1+lsi)*1]), &(inteval->stack[((hsi*103950+20840643)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*171990+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*145530+15271311)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*229320+20302623)*1+lsi)*1]), &(inteval->stack[((hsi*194040+1240575)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*294840+16552002)*1+lsi)*1]), &(inteval->stack[((hsi*249480+15271311)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*368550+22186428)*1+lsi)*1]), &(inteval->stack[((hsi*311850+1240575)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*24255+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*22050+1218525)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+1306725)*1+lsi)*1]), &(inteval->stack[((hsi*66150+1240575)*1+lsi)*1]), &(inteval->stack[((hsi*59850+20176623)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*119700+1306725)*1+lsi)*1]), &(inteval->stack[((hsi*107730+21095268)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*179550+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*160650+21202998)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*240975+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*214200+21363648)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+20840643)*1+lsi)*1]), &(inteval->stack[((hsi*299880+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*264600+21577848)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+21193443)*1+lsi)*1]), &(inteval->stack[((hsi*352800+20840643)*1+lsi)*1]), &(inteval->stack[((hsi*308700+20531943)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*396900+21193443)*1+lsi)*1]), &(inteval->stack[((hsi*343980+21842448)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+20434608)*1+lsi)*1]), &(inteval->stack[((hsi*429975+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*368550+22186428)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*450450+20434608)*1+lsi)*1]), &(inteval->stack[((hsi*381150+16473567)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*457380+1194270)*1+lsi)*1]), &(inteval->stack[((hsi*396396+16863957)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+21193821)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+17260353)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+23232429)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+21193821)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+18279657)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1166070)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1176990)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+16501647)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1153470)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1166070)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+16534407)*1+lsi)*1]), &(inteval->stack[((hsi*32760+16501647)*1+lsi)*1]), &(inteval->stack[((hsi*28080+16473567)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+16590567)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1139070)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1153470)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+16628367)*1+lsi)*1]), &(inteval->stack[((hsi*37800+16590567)*1+lsi)*1]), &(inteval->stack[((hsi*32760+16501647)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+16693887)*1+lsi)*1]), &(inteval->stack[((hsi*65520+16628367)*1+lsi)*1]), &(inteval->stack[((hsi*56160+16534407)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+16787487)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1122750)*1+lsi)*1]), &(inteval->stack[((hsi*14400+1139070)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+16830687)*1+lsi)*1]), &(inteval->stack[((hsi*43200+16787487)*1+lsi)*1]), &(inteval->stack[((hsi*37800+16590567)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+16906287)*1+lsi)*1]), &(inteval->stack[((hsi*75600+16830687)*1+lsi)*1]), &(inteval->stack[((hsi*65520+16628367)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+17015487)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16906287)*1+lsi)*1]), &(inteval->stack[((hsi*93600+16693887)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+17155887)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1104390)*1+lsi)*1]), &(inteval->stack[((hsi*16320+1122750)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+17204847)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17155887)*1+lsi)*1]), &(inteval->stack[((hsi*43200+16787487)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+17291247)*1+lsi)*1]), &(inteval->stack[((hsi*86400+17204847)*1+lsi)*1]), &(inteval->stack[((hsi*75600+16830687)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+17417247)*1+lsi)*1]), &(inteval->stack[((hsi*126000+17291247)*1+lsi)*1]), &(inteval->stack[((hsi*109200+16906287)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+17581047)*1+lsi)*1]), &(inteval->stack[((hsi*163800+17417247)*1+lsi)*1]), &(inteval->stack[((hsi*140400+17015487)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+17777607)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1083870)*1+lsi)*1]), &(inteval->stack[((hsi*18360+1104390)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+17832687)*1+lsi)*1]), &(inteval->stack[((hsi*55080+17777607)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17155887)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+17930607)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17832687)*1+lsi)*1]), &(inteval->stack[((hsi*86400+17204847)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*144000+17930607)*1+lsi)*1]), &(inteval->stack[((hsi*126000+17291247)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+17155887)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*163800+17417247)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17155887)*1+lsi)*1]), &(inteval->stack[((hsi*196560+17581047)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+16787487)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1061070)*1+lsi)*1]), &(inteval->stack[((hsi*20520+1083870)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+18074607)*1+lsi)*1]), &(inteval->stack[((hsi*61560+16787487)*1+lsi)*1]), &(inteval->stack[((hsi*55080+17777607)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+17385207)*1+lsi)*1]), &(inteval->stack[((hsi*110160+18074607)*1+lsi)*1]), &(inteval->stack[((hsi*97920+17832687)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+26369469)*1+lsi)*1]), &(inteval->stack[((hsi*163200+17385207)*1+lsi)*1]), &(inteval->stack[((hsi*144000+17930607)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+17777607)*1+lsi)*1]), &(inteval->stack[((hsi*216000+26369469)*1+lsi)*1]), &(inteval->stack[((hsi*189000+15271311)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*264600+17777607)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17155887)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+26585469)*1+lsi)*1]), &(inteval->stack[((hsi*305760+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*262080+26107389)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+17155887)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1035870)*1+lsi)*1]), &(inteval->stack[((hsi*22800+1061070)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+16849047)*1+lsi)*1]), &(inteval->stack[((hsi*68400+17155887)*1+lsi)*1]), &(inteval->stack[((hsi*61560+16787487)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+26922429)*1+lsi)*1]), &(inteval->stack[((hsi*123120+16849047)*1+lsi)*1]), &(inteval->stack[((hsi*110160+18074607)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+27106029)*1+lsi)*1]), &(inteval->stack[((hsi*183600+26922429)*1+lsi)*1]), &(inteval->stack[((hsi*163200+17385207)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+17224287)*1+lsi)*1]), &(inteval->stack[((hsi*244800+27106029)*1+lsi)*1]), &(inteval->stack[((hsi*216000+26369469)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+27350829)*1+lsi)*1]), &(inteval->stack[((hsi*302400+17224287)*1+lsi)*1]), &(inteval->stack[((hsi*264600+17777607)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+17777607)*1+lsi)*1]), &(inteval->stack[((hsi*352800+27350829)*1+lsi)*1]), &(inteval->stack[((hsi*305760+15271311)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+27703629)*1+lsi)*1]), &(inteval->stack[((hsi*393120+17777607)*1+lsi)*1]), &(inteval->stack[((hsi*336960+26585469)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1176990)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1186350)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+15295071)*1+lsi)*1]), &(inteval->stack[((hsi*28080+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*23760+15271311)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+15342591)*1+lsi)*1]), &(inteval->stack[((hsi*56160+16534407)*1+lsi)*1]), &(inteval->stack[((hsi*47520+15295071)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*93600+16693887)*1+lsi)*1]), &(inteval->stack[((hsi*79200+15342591)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*140400+17015487)*1+lsi)*1]), &(inteval->stack[((hsi*118800+16473567)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*196560+17581047)*1+lsi)*1]), &(inteval->stack[((hsi*166320+15271311)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*262080+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*221760+16473567)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*336960+26585469)*1+lsi)*1]), &(inteval->stack[((hsi*285120+15271311)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+26463789)*1+lsi)*1]), &(inteval->stack[((hsi*421200+27703629)*1+lsi)*1]), &(inteval->stack[((hsi*356400+26107389)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*27720+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*25200+1035870)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*75600+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*68400+17155887)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*136800+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*123120+16849047)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+16678767)*1+lsi)*1]), &(inteval->stack[((hsi*205200+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*183600+26922429)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*275400+16678767)*1+lsi)*1]), &(inteval->stack[((hsi*244800+27106029)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*342720+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*302400+17224287)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+16876767)*1+lsi)*1]), &(inteval->stack[((hsi*403200+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*352800+27350829)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+26899389)*1+lsi)*1]), &(inteval->stack[((hsi*453600+16876767)*1+lsi)*1]), &(inteval->stack[((hsi*393120+17777607)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*491400+26899389)*1+lsi)*1]), &(inteval->stack[((hsi*421200+27703629)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+16988367)*1+lsi)*1]), &(inteval->stack[((hsi*514800+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*435600+26463789)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*522720+16988367)*1+lsi)*1]), &(inteval->stack[((hsi*457380+1194270)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+27479529)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+20004633)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+29857905)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+27479529)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+21193821)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+33255585)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+29857905)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+23232429)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*12376+976190)*1+lsi)*1]), &(inteval->stack[((hsi*10608+988566)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+20036457)*1+lsi)*1]), &(inteval->stack[((hsi*14280+961910)*1+lsi)*1]), &(inteval->stack[((hsi*12376+976190)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+20073585)*1+lsi)*1]), &(inteval->stack[((hsi*37128+20036457)*1+lsi)*1]), &(inteval->stack[((hsi*31824+20004633)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+20137233)*1+lsi)*1]), &(inteval->stack[((hsi*16320+945590)*1+lsi)*1]), &(inteval->stack[((hsi*14280+961910)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+20180073)*1+lsi)*1]), &(inteval->stack[((hsi*42840+20137233)*1+lsi)*1]), &(inteval->stack[((hsi*37128+20036457)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+20254329)*1+lsi)*1]), &(inteval->stack[((hsi*74256+20180073)*1+lsi)*1]), &(inteval->stack[((hsi*63648+20073585)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+20360409)*1+lsi)*1]), &(inteval->stack[((hsi*18496+927094)*1+lsi)*1]), &(inteval->stack[((hsi*16320+945590)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+20409369)*1+lsi)*1]), &(inteval->stack[((hsi*48960+20360409)*1+lsi)*1]), &(inteval->stack[((hsi*42840+20137233)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+20495049)*1+lsi)*1]), &(inteval->stack[((hsi*85680+20409369)*1+lsi)*1]), &(inteval->stack[((hsi*74256+20180073)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+20618809)*1+lsi)*1]), &(inteval->stack[((hsi*123760+20495049)*1+lsi)*1]), &(inteval->stack[((hsi*106080+20254329)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+20777929)*1+lsi)*1]), &(inteval->stack[((hsi*20808+906286)*1+lsi)*1]), &(inteval->stack[((hsi*18496+927094)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+20833417)*1+lsi)*1]), &(inteval->stack[((hsi*55488+20777929)*1+lsi)*1]), &(inteval->stack[((hsi*48960+20360409)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+20931337)*1+lsi)*1]), &(inteval->stack[((hsi*97920+20833417)*1+lsi)*1]), &(inteval->stack[((hsi*85680+20409369)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+21074137)*1+lsi)*1]), &(inteval->stack[((hsi*142800+20931337)*1+lsi)*1]), &(inteval->stack[((hsi*123760+20495049)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+21259777)*1+lsi)*1]), &(inteval->stack[((hsi*185640+21074137)*1+lsi)*1]), &(inteval->stack[((hsi*159120+20618809)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+21482545)*1+lsi)*1]), &(inteval->stack[((hsi*23256+883030)*1+lsi)*1]), &(inteval->stack[((hsi*20808+906286)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+21544969)*1+lsi)*1]), &(inteval->stack[((hsi*62424+21482545)*1+lsi)*1]), &(inteval->stack[((hsi*55488+20777929)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+21655945)*1+lsi)*1]), &(inteval->stack[((hsi*110976+21544969)*1+lsi)*1]), &(inteval->stack[((hsi*97920+20833417)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+21819145)*1+lsi)*1]), &(inteval->stack[((hsi*163200+21655945)*1+lsi)*1]), &(inteval->stack[((hsi*142800+20931337)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+22033345)*1+lsi)*1]), &(inteval->stack[((hsi*214200+21819145)*1+lsi)*1]), &(inteval->stack[((hsi*185640+21074137)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+22293241)*1+lsi)*1]), &(inteval->stack[((hsi*259896+22033345)*1+lsi)*1]), &(inteval->stack[((hsi*222768+21259777)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+17511087)*1+lsi)*1]), &(inteval->stack[((hsi*25840+857190)*1+lsi)*1]), &(inteval->stack[((hsi*23256+883030)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17511087)*1+lsi)*1]), &(inteval->stack[((hsi*62424+21482545)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+17580855)*1+lsi)*1]), &(inteval->stack[((hsi*124848+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*110976+21544969)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+22590265)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17580855)*1+lsi)*1]), &(inteval->stack[((hsi*163200+21655945)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+1132998)*1+lsi)*1]), &(inteval->stack[((hsi*244800+22590265)*1+lsi)*1]), &(inteval->stack[((hsi*214200+21819145)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+21482545)*1+lsi)*1]), &(inteval->stack[((hsi*299880+1132998)*1+lsi)*1]), &(inteval->stack[((hsi*259896+22033345)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*346528+21482545)*1+lsi)*1]), &(inteval->stack[((hsi*297024+22293241)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+17765815)*1+lsi)*1]), &(inteval->stack[((hsi*28560+828630)*1+lsi)*1]), &(inteval->stack[((hsi*25840+857190)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+20777929)*1+lsi)*1]), &(inteval->stack[((hsi*77520+17765815)*1+lsi)*1]), &(inteval->stack[((hsi*69768+17511087)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+21829073)*1+lsi)*1]), &(inteval->stack[((hsi*139536+20777929)*1+lsi)*1]), &(inteval->stack[((hsi*124848+1008150)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+17843335)*1+lsi)*1]), &(inteval->stack[((hsi*208080+21829073)*1+lsi)*1]), &(inteval->stack[((hsi*184960+17580855)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+22835065)*1+lsi)*1]), &(inteval->stack[((hsi*277440+17843335)*1+lsi)*1]), &(inteval->stack[((hsi*244800+22590265)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+37568025)*1+lsi)*1]), &(inteval->stack[((hsi*342720+22835065)*1+lsi)*1]), &(inteval->stack[((hsi*299880+1132998)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*399840+37568025)*1+lsi)*1]), &(inteval->stack[((hsi*346528+21482545)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+37967865)*1+lsi)*1]), &(inteval->stack[((hsi*445536+1008150)*1+lsi)*1]), &(inteval->stack[((hsi*381888+16473567)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+21482545)*1+lsi)*1]), &(inteval->stack[((hsi*10608+988566)*1+lsi)*1]), &(inteval->stack[((hsi*8976+999174)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+20917465)*1+lsi)*1]), &(inteval->stack[((hsi*31824+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*26928+21482545)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+21482545)*1+lsi)*1]), &(inteval->stack[((hsi*63648+20073585)*1+lsi)*1]), &(inteval->stack[((hsi*53856+20917465)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+20917465)*1+lsi)*1]), &(inteval->stack[((hsi*106080+20254329)*1+lsi)*1]), &(inteval->stack[((hsi*89760+21482545)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*159120+20618809)*1+lsi)*1]), &(inteval->stack[((hsi*134640+20917465)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+20193129)*1+lsi)*1]), &(inteval->stack[((hsi*222768+21259777)*1+lsi)*1]), &(inteval->stack[((hsi*188496+20004633)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+20917465)*1+lsi)*1]), &(inteval->stack[((hsi*297024+22293241)*1+lsi)*1]), &(inteval->stack[((hsi*251328+20193129)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+22037153)*1+lsi)*1]), &(inteval->stack[((hsi*381888+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*323136+20917465)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+20917465)*1+lsi)*1]), &(inteval->stack[((hsi*477360+37967865)*1+lsi)*1]), &(inteval->stack[((hsi*403920+22037153)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+22037153)*1+lsi)*1]), &(inteval->stack[((hsi*31416+797214)*1+lsi)*1]), &(inteval->stack[((hsi*28560+828630)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*85680+22037153)*1+lsi)*1]), &(inteval->stack[((hsi*77520+17765815)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+22037153)*1+lsi)*1]), &(inteval->stack[((hsi*155040+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*139536+20777929)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*232560+22037153)*1+lsi)*1]), &(inteval->stack[((hsi*208080+21829073)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+21411145)*1+lsi)*1]), &(inteval->stack[((hsi*312120+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*277440+17843335)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+21799561)*1+lsi)*1]), &(inteval->stack[((hsi*388416+21411145)*1+lsi)*1]), &(inteval->stack[((hsi*342720+22835065)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+22256521)*1+lsi)*1]), &(inteval->stack[((hsi*456960+21799561)*1+lsi)*1]), &(inteval->stack[((hsi*399840+37568025)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*514080+22256521)*1+lsi)*1]), &(inteval->stack[((hsi*445536+1008150)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+21411145)*1+lsi)*1]), &(inteval->stack[((hsi*556920+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*477360+37967865)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+21994585)*1+lsi)*1]), &(inteval->stack[((hsi*583440+21411145)*1+lsi)*1]), &(inteval->stack[((hsi*493680+20917465)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*592416+21994585)*1+lsi)*1]), &(inteval->stack[((hsi*522720+16988367)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+37568025)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+26107389)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+40312305)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+37568025)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+27479529)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+44276265)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+40312305)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+29857905)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+44276265)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+33255585)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*13923+761259)*1+lsi)*1]), &(inteval->stack[((hsi*11934+775182)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+16509369)*1+lsi)*1]), &(inteval->stack[((hsi*16065+745194)*1+lsi)*1]), &(inteval->stack[((hsi*13923+761259)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+16551138)*1+lsi)*1]), &(inteval->stack[((hsi*41769+16509369)*1+lsi)*1]), &(inteval->stack[((hsi*35802+16473567)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+16622742)*1+lsi)*1]), &(inteval->stack[((hsi*18360+726834)*1+lsi)*1]), &(inteval->stack[((hsi*16065+745194)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+16670937)*1+lsi)*1]), &(inteval->stack[((hsi*48195+16622742)*1+lsi)*1]), &(inteval->stack[((hsi*41769+16509369)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+16754475)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16670937)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16551138)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+16873815)*1+lsi)*1]), &(inteval->stack[((hsi*20808+706026)*1+lsi)*1]), &(inteval->stack[((hsi*18360+726834)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+16928895)*1+lsi)*1]), &(inteval->stack[((hsi*55080+16873815)*1+lsi)*1]), &(inteval->stack[((hsi*48195+16622742)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+17025285)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16928895)*1+lsi)*1]), &(inteval->stack[((hsi*83538+16670937)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+17164515)*1+lsi)*1]), &(inteval->stack[((hsi*139230+17025285)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16754475)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*23409+682617)*1+lsi)*1]), &(inteval->stack[((hsi*20808+706026)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+32207229)*1+lsi)*1]), &(inteval->stack[((hsi*62424+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*55080+16873815)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+32317389)*1+lsi)*1]), &(inteval->stack[((hsi*110160+32207229)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16928895)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+17343525)*1+lsi)*1]), &(inteval->stack[((hsi*160650+32317389)*1+lsi)*1]), &(inteval->stack[((hsi*139230+17025285)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+797214)*1+lsi)*1]), &(inteval->stack[((hsi*208845+17343525)*1+lsi)*1]), &(inteval->stack[((hsi*179010+17164515)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+32478039)*1+lsi)*1]), &(inteval->stack[((hsi*26163+656454)*1+lsi)*1]), &(inteval->stack[((hsi*23409+682617)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+17552370)*1+lsi)*1]), &(inteval->stack[((hsi*70227+32478039)*1+lsi)*1]), &(inteval->stack[((hsi*62424+32144805)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+32548266)*1+lsi)*1]), &(inteval->stack[((hsi*124848+17552370)*1+lsi)*1]), &(inteval->stack[((hsi*110160+32207229)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+1047828)*1+lsi)*1]), &(inteval->stack[((hsi*183600+32548266)*1+lsi)*1]), &(inteval->stack[((hsi*160650+32317389)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+22587001)*1+lsi)*1]), &(inteval->stack[((hsi*240975+1047828)*1+lsi)*1]), &(inteval->stack[((hsi*208845+17343525)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+17677218)*1+lsi)*1]), &(inteval->stack[((hsi*292383+22587001)*1+lsi)*1]), &(inteval->stack[((hsi*250614+797214)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+32731866)*1+lsi)*1]), &(inteval->stack[((hsi*29070+627384)*1+lsi)*1]), &(inteval->stack[((hsi*26163+656454)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+32810355)*1+lsi)*1]), &(inteval->stack[((hsi*78489+32731866)*1+lsi)*1]), &(inteval->stack[((hsi*70227+32478039)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+1288803)*1+lsi)*1]), &(inteval->stack[((hsi*140454+32810355)*1+lsi)*1]), &(inteval->stack[((hsi*124848+17552370)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+21572793)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1288803)*1+lsi)*1]), &(inteval->stack[((hsi*183600+32548266)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*275400+21572793)*1+lsi)*1]), &(inteval->stack[((hsi*240975+1047828)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*337365+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*292383+22587001)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+22587001)*1+lsi)*1]), &(inteval->stack[((hsi*389844+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*334152+17677218)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*32130+595254)*1+lsi)*1]), &(inteval->stack[((hsi*29070+627384)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+17343525)*1+lsi)*1]), &(inteval->stack[((hsi*87210+15271311)*1+lsi)*1]), &(inteval->stack[((hsi*78489+32731866)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+32482170)*1+lsi)*1]), &(inteval->stack[((hsi*156978+17343525)*1+lsi)*1]), &(inteval->stack[((hsi*140454+32810355)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+32716260)*1+lsi)*1]), &(inteval->stack[((hsi*234090+32482170)*1+lsi)*1]), &(inteval->stack[((hsi*208080+1288803)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+1047828)*1+lsi)*1]), &(inteval->stack[((hsi*312120+32716260)*1+lsi)*1]), &(inteval->stack[((hsi*275400+21572793)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+49762629)*1+lsi)*1]), &(inteval->stack[((hsi*385560+1047828)*1+lsi)*1]), &(inteval->stack[((hsi*337365+32144805)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+50212449)*1+lsi)*1]), &(inteval->stack[((hsi*449820+49762629)*1+lsi)*1]), &(inteval->stack[((hsi*389844+49372785)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+50713677)*1+lsi)*1]), &(inteval->stack[((hsi*501228+50212449)*1+lsi)*1]), &(inteval->stack[((hsi*429624+22587001)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+21572793)*1+lsi)*1]), &(inteval->stack[((hsi*11934+775182)*1+lsi)*1]), &(inteval->stack[((hsi*10098+787116)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+21603087)*1+lsi)*1]), &(inteval->stack[((hsi*35802+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*30294+21572793)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*71604+16551138)*1+lsi)*1]), &(inteval->stack[((hsi*60588+21603087)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+21572793)*1+lsi)*1]), &(inteval->stack[((hsi*119340+16754475)*1+lsi)*1]), &(inteval->stack[((hsi*100980+49372785)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*179010+17164515)*1+lsi)*1]), &(inteval->stack[((hsi*151470+21572793)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+16685625)*1+lsi)*1]), &(inteval->stack[((hsi*250614+797214)*1+lsi)*1]), &(inteval->stack[((hsi*212058+16473567)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+21572793)*1+lsi)*1]), &(inteval->stack[((hsi*334152+17677218)*1+lsi)*1]), &(inteval->stack[((hsi*282744+16685625)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*429624+22587001)*1+lsi)*1]), &(inteval->stack[((hsi*363528+21572793)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+17500503)*1+lsi)*1]), &(inteval->stack[((hsi*537030+50713677)*1+lsi)*1]), &(inteval->stack[((hsi*454410+16473567)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*35343+559911)*1+lsi)*1]), &(inteval->stack[((hsi*32130+595254)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+16569957)*1+lsi)*1]), &(inteval->stack[((hsi*96390+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*87210+15271311)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+22587001)*1+lsi)*1]), &(inteval->stack[((hsi*174420+16569957)*1+lsi)*1]), &(inteval->stack[((hsi*156978+17343525)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*261630+22587001)*1+lsi)*1]), &(inteval->stack[((hsi*234090+32482170)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+16824702)*1+lsi)*1]), &(inteval->stack[((hsi*351135+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*312120+32716260)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*436968+16824702)*1+lsi)*1]), &(inteval->stack[((hsi*385560+1047828)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+559911)*1+lsi)*1]), &(inteval->stack[((hsi*514080+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*449820+49762629)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*578340+559911)*1+lsi)*1]), &(inteval->stack[((hsi*501228+50212449)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*626535+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*537030+50713677)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+559911)*1+lsi)*1]), &(inteval->stack[((hsi*656370+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*555390+17500503)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*666468+559911)*1+lsi)*1]), &(inteval->stack[((hsi*592416+21994585)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+20004633)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+52509105)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+49372785)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+37568025)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+57082905)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+52509105)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+40312305)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+63028845)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+57082905)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+44276265)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+37568025)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+63028845)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+26107389)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*15561+519726)*1+lsi)*1]), &(inteval->stack[((hsi*13338+535287)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+45657927)*1+lsi)*1]), &(inteval->stack[((hsi*17955+501771)*1+lsi)*1]), &(inteval->stack[((hsi*15561+519726)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+45704610)*1+lsi)*1]), &(inteval->stack[((hsi*46683+45657927)*1+lsi)*1]), &(inteval->stack[((hsi*40014+45617913)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+45784638)*1+lsi)*1]), &(inteval->stack[((hsi*20520+481251)*1+lsi)*1]), &(inteval->stack[((hsi*17955+501771)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+45838503)*1+lsi)*1]), &(inteval->stack[((hsi*53865+45784638)*1+lsi)*1]), &(inteval->stack[((hsi*46683+45657927)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+45931869)*1+lsi)*1]), &(inteval->stack[((hsi*93366+45838503)*1+lsi)*1]), &(inteval->stack[((hsi*80028+45704610)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+46065249)*1+lsi)*1]), &(inteval->stack[((hsi*23256+457995)*1+lsi)*1]), &(inteval->stack[((hsi*20520+481251)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+46126809)*1+lsi)*1]), &(inteval->stack[((hsi*61560+46065249)*1+lsi)*1]), &(inteval->stack[((hsi*53865+45784638)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*107730+46126809)*1+lsi)*1]), &(inteval->stack[((hsi*93366+45838503)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+46234539)*1+lsi)*1]), &(inteval->stack[((hsi*155610+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*133380+45931869)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+20160243)*1+lsi)*1]), &(inteval->stack[((hsi*26163+431832)*1+lsi)*1]), &(inteval->stack[((hsi*23256+457995)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+20230011)*1+lsi)*1]), &(inteval->stack[((hsi*69768+20160243)*1+lsi)*1]), &(inteval->stack[((hsi*61560+46065249)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+46434609)*1+lsi)*1]), &(inteval->stack[((hsi*123120+20230011)*1+lsi)*1]), &(inteval->stack[((hsi*107730+46126809)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+20353131)*1+lsi)*1]), &(inteval->stack[((hsi*179550+46434609)*1+lsi)*1]), &(inteval->stack[((hsi*155610+20004633)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+46614159)*1+lsi)*1]), &(inteval->stack[((hsi*233415+20353131)*1+lsi)*1]), &(inteval->stack[((hsi*200070+46234539)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+20586546)*1+lsi)*1]), &(inteval->stack[((hsi*29241+402591)*1+lsi)*1]), &(inteval->stack[((hsi*26163+431832)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+20665035)*1+lsi)*1]), &(inteval->stack[((hsi*78489+20586546)*1+lsi)*1]), &(inteval->stack[((hsi*69768+20160243)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+46894257)*1+lsi)*1]), &(inteval->stack[((hsi*139536+20665035)*1+lsi)*1]), &(inteval->stack[((hsi*123120+20230011)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+20804571)*1+lsi)*1]), &(inteval->stack[((hsi*205200+46894257)*1+lsi)*1]), &(inteval->stack[((hsi*179550+46434609)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+47099457)*1+lsi)*1]), &(inteval->stack[((hsi*269325+20804571)*1+lsi)*1]), &(inteval->stack[((hsi*233415+20353131)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+21073896)*1+lsi)*1]), &(inteval->stack[((hsi*326781+47099457)*1+lsi)*1]), &(inteval->stack[((hsi*280098+46614159)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+47426238)*1+lsi)*1]), &(inteval->stack[((hsi*32490+370101)*1+lsi)*1]), &(inteval->stack[((hsi*29241+402591)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+47513961)*1+lsi)*1]), &(inteval->stack[((hsi*87723+47426238)*1+lsi)*1]), &(inteval->stack[((hsi*78489+20586546)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+21447360)*1+lsi)*1]), &(inteval->stack[((hsi*156978+47513961)*1+lsi)*1]), &(inteval->stack[((hsi*139536+20665035)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+47670939)*1+lsi)*1]), &(inteval->stack[((hsi*232560+21447360)*1+lsi)*1]), &(inteval->stack[((hsi*205200+46894257)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+21679920)*1+lsi)*1]), &(inteval->stack[((hsi*307800+47670939)*1+lsi)*1]), &(inteval->stack[((hsi*269325+20804571)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+47978739)*1+lsi)*1]), &(inteval->stack[((hsi*377055+21679920)*1+lsi)*1]), &(inteval->stack[((hsi*326781+47099457)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+22056975)*1+lsi)*1]), &(inteval->stack[((hsi*435708+47978739)*1+lsi)*1]), &(inteval->stack[((hsi*373464+21073896)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*35910+334191)*1+lsi)*1]), &(inteval->stack[((hsi*32490+370101)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*97470+32144805)*1+lsi)*1]), &(inteval->stack[((hsi*87723+47426238)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+32242275)*1+lsi)*1]), &(inteval->stack[((hsi*175446+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*156978+47513961)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+48414447)*1+lsi)*1]), &(inteval->stack[((hsi*261630+32242275)*1+lsi)*1]), &(inteval->stack[((hsi*232560+21447360)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+20180079)*1+lsi)*1]), &(inteval->stack[((hsi*348840+48414447)*1+lsi)*1]), &(inteval->stack[((hsi*307800+47670939)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+46894257)*1+lsi)*1]), &(inteval->stack[((hsi*430920+20180079)*1+lsi)*1]), &(inteval->stack[((hsi*377055+21679920)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+32503905)*1+lsi)*1]), &(inteval->stack[((hsi*502740+46894257)*1+lsi)*1]), &(inteval->stack[((hsi*435708+47978739)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+47396997)*1+lsi)*1]), &(inteval->stack[((hsi*560196+32503905)*1+lsi)*1]), &(inteval->stack[((hsi*480168+22056975)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+22537143)*1+lsi)*1]), &(inteval->stack[((hsi*13338+535287)*1+lsi)*1]), &(inteval->stack[((hsi*11286+548625)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+22571001)*1+lsi)*1]), &(inteval->stack[((hsi*40014+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*33858+22537143)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+21447360)*1+lsi)*1]), &(inteval->stack[((hsi*80028+45704610)*1+lsi)*1]), &(inteval->stack[((hsi*67716+22571001)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+46065249)*1+lsi)*1]), &(inteval->stack[((hsi*133380+45931869)*1+lsi)*1]), &(inteval->stack[((hsi*112860+21447360)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+22537143)*1+lsi)*1]), &(inteval->stack[((hsi*200070+46234539)*1+lsi)*1]), &(inteval->stack[((hsi*169290+46065249)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*280098+46614159)*1+lsi)*1]), &(inteval->stack[((hsi*237006+22537143)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+45933921)*1+lsi)*1]), &(inteval->stack[((hsi*373464+21073896)*1+lsi)*1]), &(inteval->stack[((hsi*316008+45617913)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+20610999)*1+lsi)*1]), &(inteval->stack[((hsi*480168+22056975)*1+lsi)*1]), &(inteval->stack[((hsi*406296+45933921)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+21118869)*1+lsi)*1]), &(inteval->stack[((hsi*600210+47396997)*1+lsi)*1]), &(inteval->stack[((hsi*507870+20610999)*1+lsi)*1]),171);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*107730+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*39501+294690)*1+lsi)*1]), &(inteval->stack[((hsi*35910+334191)*1+lsi)*1]),171);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*194940+21847329)*1+lsi)*1]), &(inteval->stack[((hsi*107730+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*97470+32144805)*1+lsi)*1]),171);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*292410+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*194940+21847329)*1+lsi)*1]), &(inteval->stack[((hsi*175446+20004633)*1+lsi)*1]),171);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*392445+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*292410+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*261630+32242275)*1+lsi)*1]),171);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*488376+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*392445+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*348840+48414447)*1+lsi)*1]),171);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*574560+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*488376+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*430920+20180079)*1+lsi)*1]),171);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*646380+47997207)*1+lsi)*1]), &(inteval->stack[((hsi*574560+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*502740+46894257)*1+lsi)*1]),171);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*700245+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*646380+47997207)*1+lsi)*1]), &(inteval->stack[((hsi*560196+32503905)*1+lsi)*1]),171);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*733590+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*700245+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*600210+47396997)*1+lsi)*1]),171);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*744876+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*733590+21739599)*1+lsi)*1]), &(inteval->stack[((hsi*620730+21118869)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1999404+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*744876+45617913)*1+lsi)*1]), &(inteval->stack[((hsi*666468+559911)*1+lsi)*1]),4356);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*3554496+70163973)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+20004633)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+16473567)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*5227200+73718469)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+70163973)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+49372785)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*6860700+78945669)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+73718469)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+52509105)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*8324316+46362789)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+78945669)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+57082905)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*9513504+85806369)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+46362789)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+63028845)*1+lsi)*1]),4356);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*10349856+54687105)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+85806369)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+37568025)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1793990)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1798995)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+65049831)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1788215)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1793990)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+65064846)*1+lsi)*1]), &(inteval->stack[((hsi*15015+65049831)*1+lsi)*1]), &(inteval->stack[((hsi*12870+65036961)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+65090586)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1781615)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1788215)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+65107911)*1+lsi)*1]), &(inteval->stack[((hsi*17325+65090586)*1+lsi)*1]), &(inteval->stack[((hsi*15015+65049831)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+65137941)*1+lsi)*1]), &(inteval->stack[((hsi*30030+65107911)*1+lsi)*1]), &(inteval->stack[((hsi*25740+65064846)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+65180841)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1774135)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1781615)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+65200641)*1+lsi)*1]), &(inteval->stack[((hsi*19800+65180841)*1+lsi)*1]), &(inteval->stack[((hsi*17325+65090586)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+65235291)*1+lsi)*1]), &(inteval->stack[((hsi*34650+65200641)*1+lsi)*1]), &(inteval->stack[((hsi*30030+65107911)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+65285341)*1+lsi)*1]), &(inteval->stack[((hsi*50050+65235291)*1+lsi)*1]), &(inteval->stack[((hsi*42900+65137941)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+65349691)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1765720)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1774135)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+65372131)*1+lsi)*1]), &(inteval->stack[((hsi*22440+65349691)*1+lsi)*1]), &(inteval->stack[((hsi*19800+65180841)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+65411731)*1+lsi)*1]), &(inteval->stack[((hsi*39600+65372131)*1+lsi)*1]), &(inteval->stack[((hsi*34650+65200641)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+65469481)*1+lsi)*1]), &(inteval->stack[((hsi*57750+65411731)*1+lsi)*1]), &(inteval->stack[((hsi*50050+65235291)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+65544556)*1+lsi)*1]), &(inteval->stack[((hsi*75075+65469481)*1+lsi)*1]), &(inteval->stack[((hsi*64350+65285341)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+65634646)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1756315)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1765720)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+65659891)*1+lsi)*1]), &(inteval->stack[((hsi*25245+65634646)*1+lsi)*1]), &(inteval->stack[((hsi*22440+65349691)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+65704771)*1+lsi)*1]), &(inteval->stack[((hsi*44880+65659891)*1+lsi)*1]), &(inteval->stack[((hsi*39600+65372131)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+65770771)*1+lsi)*1]), &(inteval->stack[((hsi*66000+65704771)*1+lsi)*1]), &(inteval->stack[((hsi*57750+65411731)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+65857396)*1+lsi)*1]), &(inteval->stack[((hsi*86625+65770771)*1+lsi)*1]), &(inteval->stack[((hsi*75075+65469481)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+65962501)*1+lsi)*1]), &(inteval->stack[((hsi*105105+65857396)*1+lsi)*1]), &(inteval->stack[((hsi*90090+65544556)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+66082621)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1745865)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1756315)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+66110836)*1+lsi)*1]), &(inteval->stack[((hsi*28215+66082621)*1+lsi)*1]), &(inteval->stack[((hsi*25245+65634646)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+66161326)*1+lsi)*1]), &(inteval->stack[((hsi*50490+66110836)*1+lsi)*1]), &(inteval->stack[((hsi*44880+65659891)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+66236126)*1+lsi)*1]), &(inteval->stack[((hsi*74800+66161326)*1+lsi)*1]), &(inteval->stack[((hsi*66000+65704771)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+66335126)*1+lsi)*1]), &(inteval->stack[((hsi*99000+66236126)*1+lsi)*1]), &(inteval->stack[((hsi*86625+65770771)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+66456401)*1+lsi)*1]), &(inteval->stack[((hsi*121275+66335126)*1+lsi)*1]), &(inteval->stack[((hsi*105105+65857396)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+66596541)*1+lsi)*1]), &(inteval->stack[((hsi*140140+66456401)*1+lsi)*1]), &(inteval->stack[((hsi*120120+65962501)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+66750981)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1734315)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1745865)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+66782331)*1+lsi)*1]), &(inteval->stack[((hsi*31350+66750981)*1+lsi)*1]), &(inteval->stack[((hsi*28215+66082621)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+66838761)*1+lsi)*1]), &(inteval->stack[((hsi*56430+66782331)*1+lsi)*1]), &(inteval->stack[((hsi*50490+66110836)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+66922911)*1+lsi)*1]), &(inteval->stack[((hsi*84150+66838761)*1+lsi)*1]), &(inteval->stack[((hsi*74800+66161326)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+67035111)*1+lsi)*1]), &(inteval->stack[((hsi*112200+66922911)*1+lsi)*1]), &(inteval->stack[((hsi*99000+66236126)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+67173711)*1+lsi)*1]), &(inteval->stack[((hsi*138600+67035111)*1+lsi)*1]), &(inteval->stack[((hsi*121275+66335126)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+67335411)*1+lsi)*1]), &(inteval->stack[((hsi*161700+67173711)*1+lsi)*1]), &(inteval->stack[((hsi*140140+66456401)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+67515591)*1+lsi)*1]), &(inteval->stack[((hsi*180180+67335411)*1+lsi)*1]), &(inteval->stack[((hsi*154440+66596541)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+67708641)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1798995)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1803285)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+67719531)*1+lsi)*1]), &(inteval->stack[((hsi*12870+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*10890+67708641)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+67741311)*1+lsi)*1]), &(inteval->stack[((hsi*25740+65064846)*1+lsi)*1]), &(inteval->stack[((hsi*21780+67719531)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+67777611)*1+lsi)*1]), &(inteval->stack[((hsi*42900+65137941)*1+lsi)*1]), &(inteval->stack[((hsi*36300+67741311)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+67832061)*1+lsi)*1]), &(inteval->stack[((hsi*64350+65285341)*1+lsi)*1]), &(inteval->stack[((hsi*54450+67777611)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+67908291)*1+lsi)*1]), &(inteval->stack[((hsi*90090+65544556)*1+lsi)*1]), &(inteval->stack[((hsi*76230+67832061)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+68009931)*1+lsi)*1]), &(inteval->stack[((hsi*120120+65962501)*1+lsi)*1]), &(inteval->stack[((hsi*101640+67908291)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+68140611)*1+lsi)*1]), &(inteval->stack[((hsi*154440+66596541)*1+lsi)*1]), &(inteval->stack[((hsi*130680+68009931)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+68303961)*1+lsi)*1]), &(inteval->stack[((hsi*193050+67515591)*1+lsi)*1]), &(inteval->stack[((hsi*163350+68140611)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*12705+1721610)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1734315)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+16508217)*1+lsi)*1]), &(inteval->stack[((hsi*34650+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*31350+66750981)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*62700+16508217)*1+lsi)*1]), &(inteval->stack[((hsi*56430+66782331)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*94050+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*84150+66838761)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*126225+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*112200+66922911)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+65194041)*1+lsi)*1]), &(inteval->stack[((hsi*157080+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*138600+67035111)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*184800+65194041)*1+lsi)*1]), &(inteval->stack[((hsi*161700+67173711)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*207900+16473567)*1+lsi)*1]), &(inteval->stack[((hsi*180180+67335411)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+65262186)*1+lsi)*1]), &(inteval->stack[((hsi*225225+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*193050+67515591)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+65498136)*1+lsi)*1]), &(inteval->stack[((hsi*235950+65262186)*1+lsi)*1]), &(inteval->stack[((hsi*199650+68303961)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+65737716)*1+lsi)*1]), &(inteval->stack[((hsi*287496+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*239580+65498136)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+66456456)*1+lsi)*1]), &(inteval->stack[((hsi*862488+15611079)*1+lsi)*1]), &(inteval->stack[((hsi*718740+65737716)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+18279657)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+66456456)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+23232429)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+14983815)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+95319873)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+33255585)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+65036961)*1+lsi)*1]),4356);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*6708240+100351053)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+26107389)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+95319873)*1+lsi)*1]),4356);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*8624880+22004037)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+37568025)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+100351053)*1+lsi)*1]),4356);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*10781100+30628917)*1+lsi)*1]), &(inteval->stack[((hsi*10349856+54687105)*1+lsi)*1]), &(inteval->stack[((hsi*8624880+22004037)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*44460+22004037)*1+lsi)*1]), &(inteval->stack[((hsi*17290+250040)*1+lsi)*1]), &(inteval->stack[((hsi*14820+267330)*1+lsi)*1]),190);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*51870+22048497)*1+lsi)*1]), &(inteval->stack[((hsi*19950+230090)*1+lsi)*1]), &(inteval->stack[((hsi*17290+250040)*1+lsi)*1]),190);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*88920+22100367)*1+lsi)*1]), &(inteval->stack[((hsi*51870+22048497)*1+lsi)*1]), &(inteval->stack[((hsi*44460+22004037)*1+lsi)*1]),190);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*59850+22189287)*1+lsi)*1]), &(inteval->stack[((hsi*22800+207290)*1+lsi)*1]), &(inteval->stack[((hsi*19950+230090)*1+lsi)*1]),190);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*103740+22249137)*1+lsi)*1]), &(inteval->stack[((hsi*59850+22189287)*1+lsi)*1]), &(inteval->stack[((hsi*51870+22048497)*1+lsi)*1]),190);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*148200+22352877)*1+lsi)*1]), &(inteval->stack[((hsi*103740+22249137)*1+lsi)*1]), &(inteval->stack[((hsi*88920+22100367)*1+lsi)*1]),190);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*68400+22501077)*1+lsi)*1]), &(inteval->stack[((hsi*25840+181450)*1+lsi)*1]), &(inteval->stack[((hsi*22800+207290)*1+lsi)*1]),190);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*119700+22569477)*1+lsi)*1]), &(inteval->stack[((hsi*68400+22501077)*1+lsi)*1]), &(inteval->stack[((hsi*59850+22189287)*1+lsi)*1]),190);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*172900+22689177)*1+lsi)*1]), &(inteval->stack[((hsi*119700+22569477)*1+lsi)*1]), &(inteval->stack[((hsi*103740+22249137)*1+lsi)*1]),190);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*222300+22862077)*1+lsi)*1]), &(inteval->stack[((hsi*172900+22689177)*1+lsi)*1]), &(inteval->stack[((hsi*148200+22352877)*1+lsi)*1]),190);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*77520+23084377)*1+lsi)*1]), &(inteval->stack[((hsi*29070+152380)*1+lsi)*1]), &(inteval->stack[((hsi*25840+181450)*1+lsi)*1]),190);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*136800+23161897)*1+lsi)*1]), &(inteval->stack[((hsi*77520+23084377)*1+lsi)*1]), &(inteval->stack[((hsi*68400+22501077)*1+lsi)*1]),190);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*199500+23298697)*1+lsi)*1]), &(inteval->stack[((hsi*136800+23161897)*1+lsi)*1]), &(inteval->stack[((hsi*119700+22569477)*1+lsi)*1]),190);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*259350+23498197)*1+lsi)*1]), &(inteval->stack[((hsi*199500+23298697)*1+lsi)*1]), &(inteval->stack[((hsi*172900+22689177)*1+lsi)*1]),190);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*311220+23757547)*1+lsi)*1]), &(inteval->stack[((hsi*259350+23498197)*1+lsi)*1]), &(inteval->stack[((hsi*222300+22862077)*1+lsi)*1]),190);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*87210+24068767)*1+lsi)*1]), &(inteval->stack[((hsi*32490+119890)*1+lsi)*1]), &(inteval->stack[((hsi*29070+152380)*1+lsi)*1]),190);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*155040+24155977)*1+lsi)*1]), &(inteval->stack[((hsi*87210+24068767)*1+lsi)*1]), &(inteval->stack[((hsi*77520+23084377)*1+lsi)*1]),190);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*228000+24311017)*1+lsi)*1]), &(inteval->stack[((hsi*155040+24155977)*1+lsi)*1]), &(inteval->stack[((hsi*136800+23161897)*1+lsi)*1]),190);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*299250+24539017)*1+lsi)*1]), &(inteval->stack[((hsi*228000+24311017)*1+lsi)*1]), &(inteval->stack[((hsi*199500+23298697)*1+lsi)*1]),190);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*363090+24838267)*1+lsi)*1]), &(inteval->stack[((hsi*299250+24539017)*1+lsi)*1]), &(inteval->stack[((hsi*259350+23498197)*1+lsi)*1]),190);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*414960+25201357)*1+lsi)*1]), &(inteval->stack[((hsi*363090+24838267)*1+lsi)*1]), &(inteval->stack[((hsi*311220+23757547)*1+lsi)*1]),190);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*97470+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*36100+83790)*1+lsi)*1]), &(inteval->stack[((hsi*32490+119890)*1+lsi)*1]),190);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*174420+65134431)*1+lsi)*1]), &(inteval->stack[((hsi*97470+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*87210+24068767)*1+lsi)*1]),190);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*258400+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*174420+65134431)*1+lsi)*1]), &(inteval->stack[((hsi*155040+24155977)*1+lsi)*1]),190);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*342000+25616317)*1+lsi)*1]), &(inteval->stack[((hsi*258400+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*228000+24311017)*1+lsi)*1]),190);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*418950+65308851)*1+lsi)*1]), &(inteval->stack[((hsi*342000+25616317)*1+lsi)*1]), &(inteval->stack[((hsi*299250+24539017)*1+lsi)*1]),190);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*484120+15242215)*1+lsi)*1]), &(inteval->stack[((hsi*418950+65308851)*1+lsi)*1]), &(inteval->stack[((hsi*363090+24838267)*1+lsi)*1]),190);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*533520+25958317)*1+lsi)*1]), &(inteval->stack[((hsi*484120+15242215)*1+lsi)*1]), &(inteval->stack[((hsi*414960+25201357)*1+lsi)*1]),190);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*108300+65727801)*1+lsi)*1]), &(inteval->stack[((hsi*39900+43890)*1+lsi)*1]), &(inteval->stack[((hsi*36100+83790)*1+lsi)*1]),190);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*194940+65836101)*1+lsi)*1]), &(inteval->stack[((hsi*108300+65727801)*1+lsi)*1]), &(inteval->stack[((hsi*97470+65036961)*1+lsi)*1]),190);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*290700+15726335)*1+lsi)*1]), &(inteval->stack[((hsi*194940+65836101)*1+lsi)*1]), &(inteval->stack[((hsi*174420+65134431)*1+lsi)*1]),190);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*387600+41410017)*1+lsi)*1]), &(inteval->stack[((hsi*290700+15726335)*1+lsi)*1]), &(inteval->stack[((hsi*258400+14983815)*1+lsi)*1]),190);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*478800+26491837)*1+lsi)*1]), &(inteval->stack[((hsi*387600+41410017)*1+lsi)*1]), &(inteval->stack[((hsi*342000+25616317)*1+lsi)*1]),190);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*558600+66031041)*1+lsi)*1]), &(inteval->stack[((hsi*478800+26491837)*1+lsi)*1]), &(inteval->stack[((hsi*418950+65308851)*1+lsi)*1]),190);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*622440+16017035)*1+lsi)*1]), &(inteval->stack[((hsi*558600+66031041)*1+lsi)*1]), &(inteval->stack[((hsi*484120+15242215)*1+lsi)*1]),190);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*666900+41797617)*1+lsi)*1]), &(inteval->stack[((hsi*622440+16017035)*1+lsi)*1]), &(inteval->stack[((hsi*533520+25958317)*1+lsi)*1]),190);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*37620+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*14820+267330)*1+lsi)*1]), &(inteval->stack[((hsi*12540+282150)*1+lsi)*1]),190);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*75240+27008257)*1+lsi)*1]), &(inteval->stack[((hsi*44460+22004037)*1+lsi)*1]), &(inteval->stack[((hsi*37620+26970637)*1+lsi)*1]),190);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*125400+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*88920+22100367)*1+lsi)*1]), &(inteval->stack[((hsi*75240+27008257)*1+lsi)*1]),190);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*188100+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*148200+22352877)*1+lsi)*1]), &(inteval->stack[((hsi*125400+66589641)*1+lsi)*1]),190);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*263340+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*222300+22862077)*1+lsi)*1]), &(inteval->stack[((hsi*188100+26970637)*1+lsi)*1]),190);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*351120+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*311220+23757547)*1+lsi)*1]), &(inteval->stack[((hsi*263340+66589641)*1+lsi)*1]),190);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*451440+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*414960+25201357)*1+lsi)*1]), &(inteval->stack[((hsi*351120+26970637)*1+lsi)*1]),190);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*564300+22004037)*1+lsi)*1]), &(inteval->stack[((hsi*533520+25958317)*1+lsi)*1]), &(inteval->stack[((hsi*451440+66589641)*1+lsi)*1]),190);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*689700+22568337)*1+lsi)*1]), &(inteval->stack[((hsi*666900+41797617)*1+lsi)*1]), &(inteval->stack[((hsi*564300+22004037)*1+lsi)*1]),190);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*119700+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*43890+0)*1+lsi)*1]), &(inteval->stack[((hsi*39900+43890)*1+lsi)*1]),190);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*216600+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*119700+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*108300+65727801)*1+lsi)*1]),190);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*324900+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*216600+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*194940+65836101)*1+lsi)*1]),190);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*436050+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*324900+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*290700+15726335)*1+lsi)*1]),190);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*542640+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*436050+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*387600+41410017)*1+lsi)*1]),190);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*638400+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*542640+26970637)*1+lsi)*1]), &(inteval->stack[((hsi*478800+26491837)*1+lsi)*1]),190);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*718200+23258037)*1+lsi)*1]), &(inteval->stack[((hsi*638400+66589641)*1+lsi)*1]), &(inteval->stack[((hsi*558600+66031041)*1+lsi)*1]),190);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*778050+23976237)*1+lsi)*1]), &(inteval->stack[((hsi*718200+23258037)*1+lsi)*1]), &(inteval->stack[((hsi*622440+16017035)*1+lsi)*1]),190);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*815100+24754287)*1+lsi)*1]), &(inteval->stack[((hsi*778050+23976237)*1+lsi)*1]), &(inteval->stack[((hsi*666900+41797617)*1+lsi)*1]),190);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*827640+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*815100+24754287)*1+lsi)*1]), &(inteval->stack[((hsi*689700+22568337)*1+lsi)*1]),190);
HRRPart0bra0ket0pkp(inteval, &(inteval->stack[((hsi*2234628+22004037)*1+lsi)*1]), &(inteval->stack[((hsi*827640+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*744876+45617913)*1+lsi)*1]),4356);
HRRPart0bra0ket0pid(inteval, &(inteval->stack[((hsi*3998808+24238665)*1+lsi)*1]), &(inteval->stack[((hsi*2234628+22004037)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+20004633)*1+lsi)*1]),4356);
HRRPart0bra0ket0phf(inteval, &(inteval->stack[((hsi*5924160+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*3998808+24238665)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+70163973)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgg(inteval, &(inteval->stack[((hsi*7840800+20907975)*1+lsi)*1]), &(inteval->stack[((hsi*5924160+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+73718469)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfh(inteval, &(inteval->stack[((hsi*9604980+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*7840800+20907975)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+78945669)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdi(inteval, &(inteval->stack[((hsi*11099088+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*9604980+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+46362789)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppk(inteval, &(inteval->stack[((hsi*12231648+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*11099088+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+85806369)*1+lsi)*1]),4356);
HRRPart0bra0ket0psl(inteval, &(inteval->stack[((hsi*12937320+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*12231648+65036961)*1+lsi)*1]), &(inteval->stack[((hsi*10349856+54687105)*1+lsi)*1]),4356);
HRRPart0bra0ket0mm(inteval, &(inteval->stack[((hsi*13176900+1806915)*1+lsi)*1]), &(inteval->stack[((hsi*12937320+14983815)*1+lsi)*1]), &(inteval->stack[((hsi*10781100+30628917)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*13176900+1806915)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
