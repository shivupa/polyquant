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
#include <HRRPart0bra0ket0mp.h>
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
#include <_aB_M__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,798765)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_H__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+5845389)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]), &(inteval->stack[((hsi*6006+697950)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+5863407)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5845389)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5829945)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+5894295)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]), &(inteval->stack[((hsi*6930+691020)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+5915085)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5894295)*1+lsi)*1]), &(inteval->stack[((hsi*18018+5845389)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+5951121)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5915085)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5863407)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+6002601)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]), &(inteval->stack[((hsi*7920+683100)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+6026361)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6002601)*1+lsi)*1]), &(inteval->stack[((hsi*20790+5894295)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+6067941)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6026361)*1+lsi)*1]), &(inteval->stack[((hsi*36036+5915085)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+6128001)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6067941)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5951121)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+5894295)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]), &(inteval->stack[((hsi*8976+674124)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+6205221)*1+lsi)*1]), &(inteval->stack[((hsi*26928+5894295)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6002601)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+6252741)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6205221)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6026361)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+6322041)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6252741)*1+lsi)*1]), &(inteval->stack[((hsi*60060+6067941)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+6002601)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6322041)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6128001)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+6412131)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]), &(inteval->stack[((hsi*10098+664026)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+6442425)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6412131)*1+lsi)*1]), &(inteval->stack[((hsi*26928+5894295)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+6496281)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6442425)*1+lsi)*1]), &(inteval->stack[((hsi*47520+6205221)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+6575481)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6496281)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6252741)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+6679431)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6575481)*1+lsi)*1]), &(inteval->stack[((hsi*90090+6322041)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+6205221)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6679431)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6002601)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+6349365)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]), &(inteval->stack[((hsi*11286+652740)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+6805557)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6349365)*1+lsi)*1]), &(inteval->stack[((hsi*30294+6412131)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+6866145)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6805557)*1+lsi)*1]), &(inteval->stack[((hsi*53856+6442425)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+6955905)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6866145)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6496281)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+6383223)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6955905)*1+lsi)*1]), &(inteval->stack[((hsi*103950+6575481)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+7074705)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6383223)*1+lsi)*1]), &(inteval->stack[((hsi*126126+6679431)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+6528753)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7074705)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6205221)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+6714081)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]), &(inteval->stack[((hsi*12540+640200)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+7242873)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6714081)*1+lsi)*1]), &(inteval->stack[((hsi*33858+6349365)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+7310589)*1+lsi)*1]), &(inteval->stack[((hsi*67716+7242873)*1+lsi)*1]), &(inteval->stack[((hsi*60588+6805557)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+7411569)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7310589)*1+lsi)*1]), &(inteval->stack[((hsi*89760+6866145)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+6751701)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7411569)*1+lsi)*1]), &(inteval->stack[((hsi*118800+6955905)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+7546209)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6751701)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6383223)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+7740249)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7546209)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7074705)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+6918021)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7740249)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6528753)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+6349365)*1+lsi)*1]), &(inteval->stack[((hsi*5148+703956)*1+lsi)*1]), &(inteval->stack[((hsi*4356+709104)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+6362433)*1+lsi)*1]), &(inteval->stack[((hsi*15444+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*13068+6349365)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+6388569)*1+lsi)*1]), &(inteval->stack[((hsi*30888+5863407)*1+lsi)*1]), &(inteval->stack[((hsi*26136+6362433)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*51480+5951121)*1+lsi)*1]), &(inteval->stack[((hsi*43560+6388569)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+6349365)*1+lsi)*1]), &(inteval->stack[((hsi*77220+6128001)*1+lsi)*1]), &(inteval->stack[((hsi*65340+5829945)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6002601)*1+lsi)*1]), &(inteval->stack[((hsi*91476+6349365)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+5951913)*1+lsi)*1]), &(inteval->stack[((hsi*144144+6205221)*1+lsi)*1]), &(inteval->stack[((hsi*121968+5829945)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+6108729)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6528753)*1+lsi)*1]), &(inteval->stack[((hsi*156816+5951913)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+6304749)*1+lsi)*1]), &(inteval->stack[((hsi*231660+6918021)*1+lsi)*1]), &(inteval->stack[((hsi*196020+6108729)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*15246+611094)*1+lsi)*1]), &(inteval->stack[((hsi*13860+626340)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+5871525)*1+lsi)*1]), &(inteval->stack[((hsi*41580+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*37620+6714081)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+5946765)*1+lsi)*1]), &(inteval->stack[((hsi*75240+5871525)*1+lsi)*1]), &(inteval->stack[((hsi*67716+7242873)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+6059625)*1+lsi)*1]), &(inteval->stack[((hsi*112860+5946765)*1+lsi)*1]), &(inteval->stack[((hsi*100980+7310589)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+7149681)*1+lsi)*1]), &(inteval->stack[((hsi*151470+6059625)*1+lsi)*1]), &(inteval->stack[((hsi*134640+7411569)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*188496+7149681)*1+lsi)*1]), &(inteval->stack[((hsi*166320+6751701)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+7149681)*1+lsi)*1]), &(inteval->stack[((hsi*221760+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*194040+7546209)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*249480+7149681)*1+lsi)*1]), &(inteval->stack[((hsi*216216+7740249)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+6544329)*1+lsi)*1]), &(inteval->stack[((hsi*270270+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*231660+6918021)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6544329)*1+lsi)*1]), &(inteval->stack[((hsi*239580+6304749)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+629346)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]), &(inteval->stack[((hsi*7098+592764)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+650640)*1+lsi)*1]), &(inteval->stack[((hsi*21294+629346)*1+lsi)*1]), &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+687144)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]), &(inteval->stack[((hsi*8190+584574)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*24570+687144)*1+lsi)*1]), &(inteval->stack[((hsi*21294+629346)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+6160029)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*36504+650640)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+6220869)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]), &(inteval->stack[((hsi*9360+575214)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+6248949)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6220869)*1+lsi)*1]), &(inteval->stack[((hsi*24570+687144)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+6298089)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6248949)*1+lsi)*1]), &(inteval->stack[((hsi*42588+6117441)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+6369069)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6298089)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6160029)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]), &(inteval->stack[((hsi*10608+564606)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+6460329)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*28080+6220869)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+6516489)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6460329)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6248949)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+6598389)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6516489)*1+lsi)*1]), &(inteval->stack[((hsi*70980+6298089)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+6220869)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6598389)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6369069)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+6704859)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]), &(inteval->stack[((hsi*11934+552672)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+6740661)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6704859)*1+lsi)*1]), &(inteval->stack[((hsi*31824+6117441)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+6804309)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6740661)*1+lsi)*1]), &(inteval->stack[((hsi*56160+6460329)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+6897909)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6804309)*1+lsi)*1]), &(inteval->stack[((hsi*81900+6516489)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+7020759)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6897909)*1+lsi)*1]), &(inteval->stack[((hsi*106470+6598389)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+6460329)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7020759)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6220869)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+6630681)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]), &(inteval->stack[((hsi*13338+539334)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+7169817)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6630681)*1+lsi)*1]), &(inteval->stack[((hsi*35802+6704859)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+7241421)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7169817)*1+lsi)*1]), &(inteval->stack[((hsi*63648+6740661)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+7347501)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7241421)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6804309)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+6670695)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7347501)*1+lsi)*1]), &(inteval->stack[((hsi*122850+6897909)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+7487901)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6670695)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7020759)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+6842685)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7487901)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6460329)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+7061709)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]), &(inteval->stack[((hsi*14820+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+7686645)*1+lsi)*1]), &(inteval->stack[((hsi*44460+7061709)*1+lsi)*1]), &(inteval->stack[((hsi*40014+6630681)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+7766673)*1+lsi)*1]), &(inteval->stack[((hsi*80028+7686645)*1+lsi)*1]), &(inteval->stack[((hsi*71604+7169817)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+7886013)*1+lsi)*1]), &(inteval->stack[((hsi*119340+7766673)*1+lsi)*1]), &(inteval->stack[((hsi*106080+7241421)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+7106169)*1+lsi)*1]), &(inteval->stack[((hsi*159120+7886013)*1+lsi)*1]), &(inteval->stack[((hsi*140400+7347501)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+8045133)*1+lsi)*1]), &(inteval->stack[((hsi*196560+7106169)*1+lsi)*1]), &(inteval->stack[((hsi*171990+6670695)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+8274453)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8045133)*1+lsi)*1]), &(inteval->stack[((hsi*198744+7487901)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+7302729)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8274453)*1+lsi)*1]), &(inteval->stack[((hsi*219024+6842685)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+6630681)*1+lsi)*1]), &(inteval->stack[((hsi*6084+599862)*1+lsi)*1]), &(inteval->stack[((hsi*5148+605946)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+6646125)*1+lsi)*1]), &(inteval->stack[((hsi*18252+611094)*1+lsi)*1]), &(inteval->stack[((hsi*15444+6630681)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+6677013)*1+lsi)*1]), &(inteval->stack[((hsi*36504+650640)*1+lsi)*1]), &(inteval->stack[((hsi*30888+6646125)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+524514)*1+lsi)*1]), &(inteval->stack[((hsi*60840+6160029)*1+lsi)*1]), &(inteval->stack[((hsi*51480+6677013)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+6630681)*1+lsi)*1]), &(inteval->stack[((hsi*91260+6369069)*1+lsi)*1]), &(inteval->stack[((hsi*77220+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+524514)*1+lsi)*1]), &(inteval->stack[((hsi*127764+6220869)*1+lsi)*1]), &(inteval->stack[((hsi*108108+6630681)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*170352+6460329)*1+lsi)*1]), &(inteval->stack[((hsi*144144+524514)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+6302769)*1+lsi)*1]), &(inteval->stack[((hsi*219024+6842685)*1+lsi)*1]), &(inteval->stack[((hsi*185328+6117441)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+6534429)*1+lsi)*1]), &(inteval->stack[((hsi*273780+7302729)*1+lsi)*1]), &(inteval->stack[((hsi*231660+6302769)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*18018+490116)*1+lsi)*1]), &(inteval->stack[((hsi*16380+508134)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+6166581)*1+lsi)*1]), &(inteval->stack[((hsi*49140+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*44460+7061709)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+6817569)*1+lsi)*1]), &(inteval->stack[((hsi*88920+6166581)*1+lsi)*1]), &(inteval->stack[((hsi*80028+7686645)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*133380+6817569)*1+lsi)*1]), &(inteval->stack[((hsi*119340+7766673)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+7576509)*1+lsi)*1]), &(inteval->stack[((hsi*179010+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*159120+7886013)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*222768+7576509)*1+lsi)*1]), &(inteval->stack[((hsi*196560+7106169)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+6817569)*1+lsi)*1]), &(inteval->stack[((hsi*262080+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8045133)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+7576509)*1+lsi)*1]), &(inteval->stack[((hsi*294840+6817569)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8274453)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+6817569)*1+lsi)*1]), &(inteval->stack[((hsi*319410+7576509)*1+lsi)*1]), &(inteval->stack[((hsi*273780+7302729)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*334620+6817569)*1+lsi)*1]), &(inteval->stack[((hsi*283140+6534429)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+6457209)*1+lsi)*1]), &(inteval->stack[((hsi*339768+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*287496+5829945)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+511410)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]), &(inteval->stack[((hsi*8281+468731)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+536253)*1+lsi)*1]), &(inteval->stack[((hsi*24843+511410)*1+lsi)*1]), &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+578841)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]), &(inteval->stack[((hsi*9555+459176)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+607506)*1+lsi)*1]), &(inteval->stack[((hsi*28665+578841)*1+lsi)*1]), &(inteval->stack[((hsi*24843+511410)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*49686+607506)*1+lsi)*1]), &(inteval->stack[((hsi*42588+536253)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+657192)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]), &(inteval->stack[((hsi*10920+448256)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+7390677)*1+lsi)*1]), &(inteval->stack[((hsi*32760+657192)*1+lsi)*1]), &(inteval->stack[((hsi*28665+578841)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+7448007)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7390677)*1+lsi)*1]), &(inteval->stack[((hsi*49686+607506)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+7530817)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7448007)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7319697)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+578841)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]), &(inteval->stack[((hsi*12376+435880)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+7637287)*1+lsi)*1]), &(inteval->stack[((hsi*37128+578841)*1+lsi)*1]), &(inteval->stack[((hsi*32760+657192)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+615969)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7637287)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7390677)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+7702807)*1+lsi)*1]), &(inteval->stack[((hsi*95550+615969)*1+lsi)*1]), &(inteval->stack[((hsi*82810+7448007)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+7827022)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7702807)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7530817)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+7390677)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]), &(inteval->stack[((hsi*13923+421957)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+7432446)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7390677)*1+lsi)*1]), &(inteval->stack[((hsi*37128+578841)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+7976080)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7432446)*1+lsi)*1]), &(inteval->stack[((hsi*65520+7637287)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+8085280)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7976080)*1+lsi)*1]), &(inteval->stack[((hsi*95550+615969)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+8228605)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8085280)*1+lsi)*1]), &(inteval->stack[((hsi*124215+7702807)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+8402506)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8228605)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7827022)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+7637287)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]), &(inteval->stack[((hsi*15561+406396)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+7683970)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7637287)*1+lsi)*1]), &(inteval->stack[((hsi*41769+7390677)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+578841)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7683970)*1+lsi)*1]), &(inteval->stack[((hsi*74256+7432446)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+8601250)*1+lsi)*1]), &(inteval->stack[((hsi*123760+578841)*1+lsi)*1]), &(inteval->stack[((hsi*109200+7976080)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+8765050)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8601250)*1+lsi)*1]), &(inteval->stack[((hsi*143325+8085280)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+7976080)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8765050)*1+lsi)*1]), &(inteval->stack[((hsi*173901+8228605)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+8965705)*1+lsi)*1]), &(inteval->stack[((hsi*231868+7976080)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8402506)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+8207948)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]), &(inteval->stack[((hsi*17290+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+8259818)*1+lsi)*1]), &(inteval->stack[((hsi*51870+8207948)*1+lsi)*1]), &(inteval->stack[((hsi*46683+7637287)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+7390677)*1+lsi)*1]), &(inteval->stack[((hsi*93366+8259818)*1+lsi)*1]), &(inteval->stack[((hsi*83538+7683970)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+7637287)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7390677)*1+lsi)*1]), &(inteval->stack[((hsi*123760+578841)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+9221233)*1+lsi)*1]), &(inteval->stack[((hsi*185640+7637287)*1+lsi)*1]), &(inteval->stack[((hsi*163800+8601250)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+9450553)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9221233)*1+lsi)*1]), &(inteval->stack[((hsi*200655+8765050)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+8601250)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9450553)*1+lsi)*1]), &(inteval->stack[((hsi*231868+7976080)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+9718093)*1+lsi)*1]), &(inteval->stack[((hsi*298116+8601250)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8965705)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+7976080)*1+lsi)*1]), &(inteval->stack[((hsi*7098+477012)*1+lsi)*1]), &(inteval->stack[((hsi*6006+484110)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+7994098)*1+lsi)*1]), &(inteval->stack[((hsi*21294+490116)*1+lsi)*1]), &(inteval->stack[((hsi*18018+7976080)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+8030134)*1+lsi)*1]), &(inteval->stack[((hsi*42588+536253)*1+lsi)*1]), &(inteval->stack[((hsi*36036+7994098)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+389106)*1+lsi)*1]), &(inteval->stack[((hsi*70980+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8030134)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+479196)*1+lsi)*1]), &(inteval->stack[((hsi*106470+7530817)*1+lsi)*1]), &(inteval->stack[((hsi*90090+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+7976080)*1+lsi)*1]), &(inteval->stack[((hsi*149058+7827022)*1+lsi)*1]), &(inteval->stack[((hsi*126126+479196)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+389106)*1+lsi)*1]), &(inteval->stack[((hsi*198744+8402506)*1+lsi)*1]), &(inteval->stack[((hsi*168168+7976080)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+7822927)*1+lsi)*1]), &(inteval->stack[((hsi*255528+8965705)*1+lsi)*1]), &(inteval->stack[((hsi*216216+389106)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+10037503)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9718093)*1+lsi)*1]), &(inteval->stack[((hsi*270270+7822927)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+7822927)*1+lsi)*1]), &(inteval->stack[((hsi*21021+348975)*1+lsi)*1]), &(inteval->stack[((hsi*19110+369996)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+348975)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7822927)*1+lsi)*1]), &(inteval->stack[((hsi*51870+8207948)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+7822927)*1+lsi)*1]), &(inteval->stack[((hsi*103740+348975)*1+lsi)*1]), &(inteval->stack[((hsi*93366+8259818)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+7978537)*1+lsi)*1]), &(inteval->stack[((hsi*155610+7822927)*1+lsi)*1]), &(inteval->stack[((hsi*139230+7390677)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+8187382)*1+lsi)*1]), &(inteval->stack[((hsi*208845+7978537)*1+lsi)*1]), &(inteval->stack[((hsi*185640+7637287)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*259896+8187382)*1+lsi)*1]), &(inteval->stack[((hsi*229320+9221233)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+7625457)*1+lsi)*1]), &(inteval->stack[((hsi*305760+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*267540+9450553)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+8899366)*1+lsi)*1]), &(inteval->stack[((hsi*343980+7625457)*1+lsi)*1]), &(inteval->stack[((hsi*298116+8601250)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*372645+8899366)*1+lsi)*1]), &(inteval->stack[((hsi*319410+9718093)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+7710087)*1+lsi)*1]), &(inteval->stack[((hsi*390390+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*330330+10037503)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+8106483)*1+lsi)*1]), &(inteval->stack[((hsi*396396+7710087)*1+lsi)*1]), &(inteval->stack[((hsi*339768+6117441)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+9125787)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+8106483)*1+lsi)*1]), &(inteval->stack[((hsi*862488+6457209)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+7344267)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]), &(inteval->stack[((hsi*9555+324300)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+348975)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7344267)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7319697)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]), &(inteval->stack[((hsi*11025+313275)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+7372932)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*28665+7344267)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+398115)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7372932)*1+lsi)*1]), &(inteval->stack[((hsi*49140+348975)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+6150516)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]), &(inteval->stack[((hsi*12600+300675)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+7430262)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6150516)*1+lsi)*1]), &(inteval->stack[((hsi*33075+6117441)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+6188316)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7430262)*1+lsi)*1]), &(inteval->stack[((hsi*57330+7372932)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+480015)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6188316)*1+lsi)*1]), &(inteval->stack[((hsi*81900+398115)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+7496412)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]), &(inteval->stack[((hsi*14280+286395)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+6283866)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7496412)*1+lsi)*1]), &(inteval->stack[((hsi*37800+6150516)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+7539252)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6283866)*1+lsi)*1]), &(inteval->stack[((hsi*66150+7430262)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+7344267)*1+lsi)*1]), &(inteval->stack[((hsi*110250+7539252)*1+lsi)*1]), &(inteval->stack[((hsi*95550+6188316)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7344267)*1+lsi)*1]), &(inteval->stack[((hsi*122850+480015)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]), &(inteval->stack[((hsi*16065+270330)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+6165636)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*42840+7496412)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+11022753)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6165636)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6283866)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+6251316)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11022753)*1+lsi)*1]), &(inteval->stack[((hsi*110250+7539252)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+7487592)*1+lsi)*1]), &(inteval->stack[((hsi*165375+6251316)*1+lsi)*1]), &(inteval->stack[((hsi*143325+7344267)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+11148753)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7487592)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10850763)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+7344267)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]), &(inteval->stack[((hsi*17955+252375)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+602865)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7344267)*1+lsi)*1]), &(inteval->stack[((hsi*48195+6117441)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+11378073)*1+lsi)*1]), &(inteval->stack[((hsi*96390+602865)*1+lsi)*1]), &(inteval->stack[((hsi*85680+6165636)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+11520873)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11378073)*1+lsi)*1]), &(inteval->stack[((hsi*126000+11022753)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+11709873)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11520873)*1+lsi)*1]), &(inteval->stack[((hsi*165375+6251316)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*231525+11709873)*1+lsi)*1]), &(inteval->stack[((hsi*200655+7487592)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+7398132)*1+lsi)*1]), &(inteval->stack[((hsi*267540+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11148753)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+11022753)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]), &(inteval->stack[((hsi*19950+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+11941398)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11022753)*1+lsi)*1]), &(inteval->stack[((hsi*53865+7344267)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+12049128)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11941398)*1+lsi)*1]), &(inteval->stack[((hsi*96390+602865)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+12209778)*1+lsi)*1]), &(inteval->stack[((hsi*160650+12049128)*1+lsi)*1]), &(inteval->stack[((hsi*142800+11378073)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+12423978)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12209778)*1+lsi)*1]), &(inteval->stack[((hsi*189000+11520873)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+11378073)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12423978)*1+lsi)*1]), &(inteval->stack[((hsi*231525+11709873)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+12688578)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11378073)*1+lsi)*1]), &(inteval->stack[((hsi*267540+6117441)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+13032558)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12688578)*1+lsi)*1]), &(inteval->stack[((hsi*294840+7398132)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*8190+333855)*1+lsi)*1]), &(inteval->stack[((hsi*6930+342045)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+6138231)*1+lsi)*1]), &(inteval->stack[((hsi*24570+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*20790+6117441)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+6179811)*1+lsi)*1]), &(inteval->stack[((hsi*49140+348975)*1+lsi)*1]), &(inteval->stack[((hsi*41580+6138231)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+11686773)*1+lsi)*1]), &(inteval->stack[((hsi*81900+398115)*1+lsi)*1]), &(inteval->stack[((hsi*69300+6179811)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*122850+480015)*1+lsi)*1]), &(inteval->stack[((hsi*103950+11686773)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+232425)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*145530+6117441)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*229320+11148753)*1+lsi)*1]), &(inteval->stack[((hsi*194040+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+232425)*1+lsi)*1]), &(inteval->stack[((hsi*294840+7398132)*1+lsi)*1]), &(inteval->stack[((hsi*249480+6117441)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*368550+13032558)*1+lsi)*1]), &(inteval->stack[((hsi*311850+232425)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+232425)*1+lsi)*1]), &(inteval->stack[((hsi*24255+186120)*1+lsi)*1]), &(inteval->stack[((hsi*22050+210375)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+298575)*1+lsi)*1]), &(inteval->stack[((hsi*66150+232425)*1+lsi)*1]), &(inteval->stack[((hsi*59850+11022753)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*119700+298575)*1+lsi)*1]), &(inteval->stack[((hsi*107730+11941398)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+186120)*1+lsi)*1]), &(inteval->stack[((hsi*179550+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*160650+12049128)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*240975+186120)*1+lsi)*1]), &(inteval->stack[((hsi*214200+12209778)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+11686773)*1+lsi)*1]), &(inteval->stack[((hsi*299880+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*264600+12423978)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+12039573)*1+lsi)*1]), &(inteval->stack[((hsi*352800+11686773)*1+lsi)*1]), &(inteval->stack[((hsi*308700+11378073)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*396900+12039573)*1+lsi)*1]), &(inteval->stack[((hsi*343980+12688578)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+11280738)*1+lsi)*1]), &(inteval->stack[((hsi*429975+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*368550+13032558)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+186120)*1+lsi)*1]), &(inteval->stack[((hsi*450450+11280738)*1+lsi)*1]), &(inteval->stack[((hsi*381150+7319697)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*457380+186120)*1+lsi)*1]), &(inteval->stack[((hsi*396396+7710087)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+12039951)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+10850763)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+8106483)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+14078559)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+12039951)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+9125787)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*5005+785840)*1+lsi)*1]), &(inteval->stack[((hsi*4290+790845)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+7332567)*1+lsi)*1]), &(inteval->stack[((hsi*5775+780065)*1+lsi)*1]), &(inteval->stack[((hsi*5005+785840)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+7347582)*1+lsi)*1]), &(inteval->stack[((hsi*15015+7332567)*1+lsi)*1]), &(inteval->stack[((hsi*12870+7319697)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+7373322)*1+lsi)*1]), &(inteval->stack[((hsi*6600+773465)*1+lsi)*1]), &(inteval->stack[((hsi*5775+780065)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+7390647)*1+lsi)*1]), &(inteval->stack[((hsi*17325+7373322)*1+lsi)*1]), &(inteval->stack[((hsi*15015+7332567)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+7420677)*1+lsi)*1]), &(inteval->stack[((hsi*30030+7390647)*1+lsi)*1]), &(inteval->stack[((hsi*25740+7347582)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+7463577)*1+lsi)*1]), &(inteval->stack[((hsi*7480+765985)*1+lsi)*1]), &(inteval->stack[((hsi*6600+773465)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+7483377)*1+lsi)*1]), &(inteval->stack[((hsi*19800+7463577)*1+lsi)*1]), &(inteval->stack[((hsi*17325+7373322)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+7518027)*1+lsi)*1]), &(inteval->stack[((hsi*34650+7483377)*1+lsi)*1]), &(inteval->stack[((hsi*30030+7390647)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+7568077)*1+lsi)*1]), &(inteval->stack[((hsi*50050+7518027)*1+lsi)*1]), &(inteval->stack[((hsi*42900+7420677)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+7632427)*1+lsi)*1]), &(inteval->stack[((hsi*8415+757570)*1+lsi)*1]), &(inteval->stack[((hsi*7480+765985)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+7654867)*1+lsi)*1]), &(inteval->stack[((hsi*22440+7632427)*1+lsi)*1]), &(inteval->stack[((hsi*19800+7463577)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+7694467)*1+lsi)*1]), &(inteval->stack[((hsi*39600+7654867)*1+lsi)*1]), &(inteval->stack[((hsi*34650+7483377)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+7752217)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7694467)*1+lsi)*1]), &(inteval->stack[((hsi*50050+7518027)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+7827292)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7752217)*1+lsi)*1]), &(inteval->stack[((hsi*64350+7568077)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+7917382)*1+lsi)*1]), &(inteval->stack[((hsi*9405+748165)*1+lsi)*1]), &(inteval->stack[((hsi*8415+757570)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+7942627)*1+lsi)*1]), &(inteval->stack[((hsi*25245+7917382)*1+lsi)*1]), &(inteval->stack[((hsi*22440+7632427)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+7987507)*1+lsi)*1]), &(inteval->stack[((hsi*44880+7942627)*1+lsi)*1]), &(inteval->stack[((hsi*39600+7654867)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+8053507)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7987507)*1+lsi)*1]), &(inteval->stack[((hsi*57750+7694467)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+8140132)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8053507)*1+lsi)*1]), &(inteval->stack[((hsi*75075+7752217)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+8245237)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8140132)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7827292)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+8365357)*1+lsi)*1]), &(inteval->stack[((hsi*10450+737715)*1+lsi)*1]), &(inteval->stack[((hsi*9405+748165)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+8393572)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8365357)*1+lsi)*1]), &(inteval->stack[((hsi*25245+7917382)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+8444062)*1+lsi)*1]), &(inteval->stack[((hsi*50490+8393572)*1+lsi)*1]), &(inteval->stack[((hsi*44880+7942627)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+8518862)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8444062)*1+lsi)*1]), &(inteval->stack[((hsi*66000+7987507)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+8617862)*1+lsi)*1]), &(inteval->stack[((hsi*99000+8518862)*1+lsi)*1]), &(inteval->stack[((hsi*86625+8053507)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+8739137)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8617862)*1+lsi)*1]), &(inteval->stack[((hsi*105105+8140132)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*140140+8739137)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8245237)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+7917382)*1+lsi)*1]), &(inteval->stack[((hsi*11550+726165)*1+lsi)*1]), &(inteval->stack[((hsi*10450+737715)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+7948732)*1+lsi)*1]), &(inteval->stack[((hsi*31350+7917382)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8365357)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+8879277)*1+lsi)*1]), &(inteval->stack[((hsi*56430+7948732)*1+lsi)*1]), &(inteval->stack[((hsi*50490+8393572)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+8005162)*1+lsi)*1]), &(inteval->stack[((hsi*84150+8879277)*1+lsi)*1]), &(inteval->stack[((hsi*74800+8444062)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+7632427)*1+lsi)*1]), &(inteval->stack[((hsi*112200+8005162)*1+lsi)*1]), &(inteval->stack[((hsi*99000+8518862)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+8365357)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7632427)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8617862)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+8527057)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8365357)*1+lsi)*1]), &(inteval->stack[((hsi*140140+8739137)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+16953519)*1+lsi)*1]), &(inteval->stack[((hsi*180180+8527057)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6117441)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+6271881)*1+lsi)*1]), &(inteval->stack[((hsi*4290+790845)*1+lsi)*1]), &(inteval->stack[((hsi*3630+795135)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+6282771)*1+lsi)*1]), &(inteval->stack[((hsi*12870+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*10890+6271881)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+8707237)*1+lsi)*1]), &(inteval->stack[((hsi*25740+7347582)*1+lsi)*1]), &(inteval->stack[((hsi*21780+6282771)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+6271881)*1+lsi)*1]), &(inteval->stack[((hsi*42900+7420677)*1+lsi)*1]), &(inteval->stack[((hsi*36300+8707237)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*64350+7568077)*1+lsi)*1]), &(inteval->stack[((hsi*54450+6271881)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+7395927)*1+lsi)*1]), &(inteval->stack[((hsi*90090+7827292)*1+lsi)*1]), &(inteval->stack[((hsi*76230+7319697)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+6271881)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8245237)*1+lsi)*1]), &(inteval->stack[((hsi*101640+7395927)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*154440+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*130680+6271881)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+6117441)*1+lsi)*1]), &(inteval->stack[((hsi*193050+16953519)*1+lsi)*1]), &(inteval->stack[((hsi*163350+7319697)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*12705+713460)*1+lsi)*1]), &(inteval->stack[((hsi*11550+726165)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+7354347)*1+lsi)*1]), &(inteval->stack[((hsi*34650+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*31350+7917382)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+8117362)*1+lsi)*1]), &(inteval->stack[((hsi*62700+7354347)*1+lsi)*1]), &(inteval->stack[((hsi*56430+7948732)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*94050+8117362)*1+lsi)*1]), &(inteval->stack[((hsi*84150+8879277)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+8707237)*1+lsi)*1]), &(inteval->stack[((hsi*126225+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*112200+8005162)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+7771027)*1+lsi)*1]), &(inteval->stack[((hsi*157080+8707237)*1+lsi)*1]), &(inteval->stack[((hsi*138600+7632427)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*184800+7771027)*1+lsi)*1]), &(inteval->stack[((hsi*161700+8365357)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+7527597)*1+lsi)*1]), &(inteval->stack[((hsi*207900+7319697)*1+lsi)*1]), &(inteval->stack[((hsi*180180+8527057)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+7752822)*1+lsi)*1]), &(inteval->stack[((hsi*225225+7527597)*1+lsi)*1]), &(inteval->stack[((hsi*193050+16953519)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+7988772)*1+lsi)*1]), &(inteval->stack[((hsi*235950+7752822)*1+lsi)*1]), &(inteval->stack[((hsi*199650+6117441)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+8228352)*1+lsi)*1]), &(inteval->stack[((hsi*287496+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*239580+7988772)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+16953519)*1+lsi)*1]), &(inteval->stack[((hsi*862488+6457209)*1+lsi)*1]), &(inteval->stack[((hsi*718740+8228352)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+9125787)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+16953519)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+16953519)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+14078559)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+5829945)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+5858025)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]), &(inteval->stack[((hsi*10920+157920)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+5890785)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5858025)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5829945)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+5946945)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]), &(inteval->stack[((hsi*12600+145320)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+5984745)*1+lsi)*1]), &(inteval->stack[((hsi*37800+5946945)*1+lsi)*1]), &(inteval->stack[((hsi*32760+5858025)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+6050265)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5984745)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5890785)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+6143865)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]), &(inteval->stack[((hsi*14400+130920)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+6187065)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6143865)*1+lsi)*1]), &(inteval->stack[((hsi*37800+5946945)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+6262665)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6187065)*1+lsi)*1]), &(inteval->stack[((hsi*65520+5984745)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+6371865)*1+lsi)*1]), &(inteval->stack[((hsi*109200+6262665)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6050265)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+6512265)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]), &(inteval->stack[((hsi*16320+114600)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+6561225)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6512265)*1+lsi)*1]), &(inteval->stack[((hsi*43200+6143865)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+6647625)*1+lsi)*1]), &(inteval->stack[((hsi*86400+6561225)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6187065)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+6773625)*1+lsi)*1]), &(inteval->stack[((hsi*126000+6647625)*1+lsi)*1]), &(inteval->stack[((hsi*109200+6262665)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+6937425)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6773625)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6371865)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+7133985)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]), &(inteval->stack[((hsi*18360+96240)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+7189065)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7133985)*1+lsi)*1]), &(inteval->stack[((hsi*48960+6512265)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+7286985)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7189065)*1+lsi)*1]), &(inteval->stack[((hsi*86400+6561225)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+7430985)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7286985)*1+lsi)*1]), &(inteval->stack[((hsi*126000+6647625)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+7619985)*1+lsi)*1]), &(inteval->stack[((hsi*189000+7430985)*1+lsi)*1]), &(inteval->stack[((hsi*163800+6773625)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+7849305)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7619985)*1+lsi)*1]), &(inteval->stack[((hsi*196560+6937425)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+8111385)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]), &(inteval->stack[((hsi*20520+75720)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+8172945)*1+lsi)*1]), &(inteval->stack[((hsi*61560+8111385)*1+lsi)*1]), &(inteval->stack[((hsi*55080+7133985)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+8283105)*1+lsi)*1]), &(inteval->stack[((hsi*110160+8172945)*1+lsi)*1]), &(inteval->stack[((hsi*97920+7189065)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+8446305)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8283105)*1+lsi)*1]), &(inteval->stack[((hsi*144000+7286985)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+8662305)*1+lsi)*1]), &(inteval->stack[((hsi*216000+8446305)*1+lsi)*1]), &(inteval->stack[((hsi*189000+7430985)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+8926905)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8662305)*1+lsi)*1]), &(inteval->stack[((hsi*229320+7619985)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+9232665)*1+lsi)*1]), &(inteval->stack[((hsi*305760+8926905)*1+lsi)*1]), &(inteval->stack[((hsi*262080+7849305)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+9569625)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]), &(inteval->stack[((hsi*22800+52920)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+9638025)*1+lsi)*1]), &(inteval->stack[((hsi*68400+9569625)*1+lsi)*1]), &(inteval->stack[((hsi*61560+8111385)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+9761145)*1+lsi)*1]), &(inteval->stack[((hsi*123120+9638025)*1+lsi)*1]), &(inteval->stack[((hsi*110160+8172945)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+9944745)*1+lsi)*1]), &(inteval->stack[((hsi*183600+9761145)*1+lsi)*1]), &(inteval->stack[((hsi*163200+8283105)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+7133985)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9944745)*1+lsi)*1]), &(inteval->stack[((hsi*216000+8446305)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+10189545)*1+lsi)*1]), &(inteval->stack[((hsi*302400+7133985)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8662305)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+8111385)*1+lsi)*1]), &(inteval->stack[((hsi*352800+10189545)*1+lsi)*1]), &(inteval->stack[((hsi*305760+8926905)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+8504505)*1+lsi)*1]), &(inteval->stack[((hsi*393120+8111385)*1+lsi)*1]), &(inteval->stack[((hsi*336960+9232665)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+6512265)*1+lsi)*1]), &(inteval->stack[((hsi*9360+168840)*1+lsi)*1]), &(inteval->stack[((hsi*7920+178200)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+7436385)*1+lsi)*1]), &(inteval->stack[((hsi*28080+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*23760+6512265)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+6512265)*1+lsi)*1]), &(inteval->stack[((hsi*56160+5890785)*1+lsi)*1]), &(inteval->stack[((hsi*47520+7436385)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+7436385)*1+lsi)*1]), &(inteval->stack[((hsi*93600+6050265)*1+lsi)*1]), &(inteval->stack[((hsi*79200+6512265)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*140400+6371865)*1+lsi)*1]), &(inteval->stack[((hsi*118800+7436385)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+5996265)*1+lsi)*1]), &(inteval->stack[((hsi*196560+6937425)*1+lsi)*1]), &(inteval->stack[((hsi*166320+5829945)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+6218025)*1+lsi)*1]), &(inteval->stack[((hsi*262080+7849305)*1+lsi)*1]), &(inteval->stack[((hsi*221760+5996265)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+7436385)*1+lsi)*1]), &(inteval->stack[((hsi*336960+9232665)*1+lsi)*1]), &(inteval->stack[((hsi*285120+6218025)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*421200+8504505)*1+lsi)*1]), &(inteval->stack[((hsi*356400+7436385)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*27720+0)*1+lsi)*1]), &(inteval->stack[((hsi*25200+27720)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+6341145)*1+lsi)*1]), &(inteval->stack[((hsi*75600+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*68400+9569625)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+8925705)*1+lsi)*1]), &(inteval->stack[((hsi*136800+6341145)*1+lsi)*1]), &(inteval->stack[((hsi*123120+9638025)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*205200+8925705)*1+lsi)*1]), &(inteval->stack[((hsi*183600+9761145)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+8925705)*1+lsi)*1]), &(inteval->stack[((hsi*275400+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9944745)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+9268425)*1+lsi)*1]), &(inteval->stack[((hsi*342720+8925705)*1+lsi)*1]), &(inteval->stack[((hsi*302400+7133985)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*403200+9268425)*1+lsi)*1]), &(inteval->stack[((hsi*352800+10189545)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+8925705)*1+lsi)*1]), &(inteval->stack[((hsi*453600+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*393120+8111385)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*491400+8925705)*1+lsi)*1]), &(inteval->stack[((hsi*421200+8504505)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+6780345)*1+lsi)*1]), &(inteval->stack[((hsi*514800+6265545)*1+lsi)*1]), &(inteval->stack[((hsi*435600+5829945)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+7303065)*1+lsi)*1]), &(inteval->stack[((hsi*522720+6780345)*1+lsi)*1]), &(inteval->stack[((hsi*457380+186120)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+20547219)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+7303065)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+10850763)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+20547219)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+12039951)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+9227625)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+5829945)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+14078559)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+798765)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+9227625)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+16953519)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*5031180+798765)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
