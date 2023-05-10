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
#include <_aB_M__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1512225)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_L__0__PS__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1411410)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1417416)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+12308769)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1404480)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1411410)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+12326787)*1+lsi)*1]), &(inteval->stack[((hsi*18018+12308769)*1+lsi)*1]), &(inteval->stack[((hsi*15444+12293325)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+12357675)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1396560)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1404480)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+12378465)*1+lsi)*1]), &(inteval->stack[((hsi*20790+12357675)*1+lsi)*1]), &(inteval->stack[((hsi*18018+12308769)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+12414501)*1+lsi)*1]), &(inteval->stack[((hsi*36036+12378465)*1+lsi)*1]), &(inteval->stack[((hsi*30888+12326787)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+12465981)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1387584)*1+lsi)*1]), &(inteval->stack[((hsi*7920+1396560)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+12489741)*1+lsi)*1]), &(inteval->stack[((hsi*23760+12465981)*1+lsi)*1]), &(inteval->stack[((hsi*20790+12357675)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+12531321)*1+lsi)*1]), &(inteval->stack[((hsi*41580+12489741)*1+lsi)*1]), &(inteval->stack[((hsi*36036+12378465)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+12591381)*1+lsi)*1]), &(inteval->stack[((hsi*60060+12531321)*1+lsi)*1]), &(inteval->stack[((hsi*51480+12414501)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+12357675)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1377486)*1+lsi)*1]), &(inteval->stack[((hsi*8976+1387584)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+12668601)*1+lsi)*1]), &(inteval->stack[((hsi*26928+12357675)*1+lsi)*1]), &(inteval->stack[((hsi*23760+12465981)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+12716121)*1+lsi)*1]), &(inteval->stack[((hsi*47520+12668601)*1+lsi)*1]), &(inteval->stack[((hsi*41580+12489741)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+12785421)*1+lsi)*1]), &(inteval->stack[((hsi*69300+12716121)*1+lsi)*1]), &(inteval->stack[((hsi*60060+12531321)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+12465981)*1+lsi)*1]), &(inteval->stack[((hsi*90090+12785421)*1+lsi)*1]), &(inteval->stack[((hsi*77220+12591381)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+12875511)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1366200)*1+lsi)*1]), &(inteval->stack[((hsi*10098+1377486)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+12905805)*1+lsi)*1]), &(inteval->stack[((hsi*30294+12875511)*1+lsi)*1]), &(inteval->stack[((hsi*26928+12357675)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+12959661)*1+lsi)*1]), &(inteval->stack[((hsi*53856+12905805)*1+lsi)*1]), &(inteval->stack[((hsi*47520+12668601)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+13038861)*1+lsi)*1]), &(inteval->stack[((hsi*79200+12959661)*1+lsi)*1]), &(inteval->stack[((hsi*69300+12716121)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+13142811)*1+lsi)*1]), &(inteval->stack[((hsi*103950+13038861)*1+lsi)*1]), &(inteval->stack[((hsi*90090+12785421)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+12668601)*1+lsi)*1]), &(inteval->stack[((hsi*126126+13142811)*1+lsi)*1]), &(inteval->stack[((hsi*108108+12465981)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+12812745)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1353660)*1+lsi)*1]), &(inteval->stack[((hsi*11286+1366200)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+13268937)*1+lsi)*1]), &(inteval->stack[((hsi*33858+12812745)*1+lsi)*1]), &(inteval->stack[((hsi*30294+12875511)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+13329525)*1+lsi)*1]), &(inteval->stack[((hsi*60588+13268937)*1+lsi)*1]), &(inteval->stack[((hsi*53856+12905805)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+13419285)*1+lsi)*1]), &(inteval->stack[((hsi*89760+13329525)*1+lsi)*1]), &(inteval->stack[((hsi*79200+12959661)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+12846603)*1+lsi)*1]), &(inteval->stack[((hsi*118800+13419285)*1+lsi)*1]), &(inteval->stack[((hsi*103950+13038861)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+13538085)*1+lsi)*1]), &(inteval->stack[((hsi*145530+12846603)*1+lsi)*1]), &(inteval->stack[((hsi*126126+13142811)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+12992133)*1+lsi)*1]), &(inteval->stack[((hsi*168168+13538085)*1+lsi)*1]), &(inteval->stack[((hsi*144144+12668601)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+13177461)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1339800)*1+lsi)*1]), &(inteval->stack[((hsi*12540+1353660)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+13706253)*1+lsi)*1]), &(inteval->stack[((hsi*37620+13177461)*1+lsi)*1]), &(inteval->stack[((hsi*33858+12812745)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+13773969)*1+lsi)*1]), &(inteval->stack[((hsi*67716+13706253)*1+lsi)*1]), &(inteval->stack[((hsi*60588+13268937)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+13874949)*1+lsi)*1]), &(inteval->stack[((hsi*100980+13773969)*1+lsi)*1]), &(inteval->stack[((hsi*89760+13329525)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+13215081)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13874949)*1+lsi)*1]), &(inteval->stack[((hsi*118800+13419285)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+14009589)*1+lsi)*1]), &(inteval->stack[((hsi*166320+13215081)*1+lsi)*1]), &(inteval->stack[((hsi*145530+12846603)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+14203629)*1+lsi)*1]), &(inteval->stack[((hsi*194040+14009589)*1+lsi)*1]), &(inteval->stack[((hsi*168168+13538085)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+13381401)*1+lsi)*1]), &(inteval->stack[((hsi*216216+14203629)*1+lsi)*1]), &(inteval->stack[((hsi*185328+12992133)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+12812745)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1417416)*1+lsi)*1]), &(inteval->stack[((hsi*4356+1422564)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+12825813)*1+lsi)*1]), &(inteval->stack[((hsi*15444+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*13068+12812745)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+12851949)*1+lsi)*1]), &(inteval->stack[((hsi*30888+12326787)*1+lsi)*1]), &(inteval->stack[((hsi*26136+12825813)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*51480+12414501)*1+lsi)*1]), &(inteval->stack[((hsi*43560+12851949)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+12812745)*1+lsi)*1]), &(inteval->stack[((hsi*77220+12591381)*1+lsi)*1]), &(inteval->stack[((hsi*65340+12293325)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*108108+12465981)*1+lsi)*1]), &(inteval->stack[((hsi*91476+12812745)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+12415293)*1+lsi)*1]), &(inteval->stack[((hsi*144144+12668601)*1+lsi)*1]), &(inteval->stack[((hsi*121968+12293325)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+12572109)*1+lsi)*1]), &(inteval->stack[((hsi*185328+12992133)*1+lsi)*1]), &(inteval->stack[((hsi*156816+12415293)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+12768129)*1+lsi)*1]), &(inteval->stack[((hsi*231660+13381401)*1+lsi)*1]), &(inteval->stack[((hsi*196020+12572109)*1+lsi)*1]),66);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*41580+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*15246+1324554)*1+lsi)*1]), &(inteval->stack[((hsi*13860+1339800)*1+lsi)*1]),66);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*75240+12334905)*1+lsi)*1]), &(inteval->stack[((hsi*41580+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*37620+13177461)*1+lsi)*1]),66);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*112860+12410145)*1+lsi)*1]), &(inteval->stack[((hsi*75240+12334905)*1+lsi)*1]), &(inteval->stack[((hsi*67716+13706253)*1+lsi)*1]),66);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*151470+12523005)*1+lsi)*1]), &(inteval->stack[((hsi*112860+12410145)*1+lsi)*1]), &(inteval->stack[((hsi*100980+13773969)*1+lsi)*1]),66);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*188496+13613061)*1+lsi)*1]), &(inteval->stack[((hsi*151470+12523005)*1+lsi)*1]), &(inteval->stack[((hsi*134640+13874949)*1+lsi)*1]),66);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*221760+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*188496+13613061)*1+lsi)*1]), &(inteval->stack[((hsi*166320+13215081)*1+lsi)*1]),66);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*249480+13613061)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*194040+14009589)*1+lsi)*1]),66);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*270270+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*249480+13613061)*1+lsi)*1]), &(inteval->stack[((hsi*216216+14203629)*1+lsi)*1]),66);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*283140+13007709)*1+lsi)*1]), &(inteval->stack[((hsi*270270+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*231660+13381401)*1+lsi)*1]),66);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*287496+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*283140+13007709)*1+lsi)*1]), &(inteval->stack[((hsi*239580+12768129)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1324554)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1306224)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1313322)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1342806)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1298034)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1306224)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1364100)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1342806)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1324554)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1400604)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1288674)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1298034)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1400604)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1342806)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+12623409)*1+lsi)*1]), &(inteval->stack[((hsi*42588+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1364100)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+12684249)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1278066)*1+lsi)*1]), &(inteval->stack[((hsi*9360+1288674)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+12712329)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12684249)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1400604)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+12761469)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12712329)*1+lsi)*1]), &(inteval->stack[((hsi*42588+12580821)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+12832449)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12761469)*1+lsi)*1]), &(inteval->stack[((hsi*60840+12623409)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1266132)*1+lsi)*1]), &(inteval->stack[((hsi*10608+1278066)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+12923709)*1+lsi)*1]), &(inteval->stack[((hsi*31824+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12684249)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+12979869)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12923709)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12712329)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+13061769)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12979869)*1+lsi)*1]), &(inteval->stack[((hsi*70980+12761469)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+12684249)*1+lsi)*1]), &(inteval->stack[((hsi*106470+13061769)*1+lsi)*1]), &(inteval->stack[((hsi*91260+12832449)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+13168239)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1252794)*1+lsi)*1]), &(inteval->stack[((hsi*11934+1266132)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+13204041)*1+lsi)*1]), &(inteval->stack[((hsi*35802+13168239)*1+lsi)*1]), &(inteval->stack[((hsi*31824+12580821)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+13267689)*1+lsi)*1]), &(inteval->stack[((hsi*63648+13204041)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12923709)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+13361289)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13267689)*1+lsi)*1]), &(inteval->stack[((hsi*81900+12979869)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+13484139)*1+lsi)*1]), &(inteval->stack[((hsi*122850+13361289)*1+lsi)*1]), &(inteval->stack[((hsi*106470+13061769)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+12923709)*1+lsi)*1]), &(inteval->stack[((hsi*149058+13484139)*1+lsi)*1]), &(inteval->stack[((hsi*127764+12684249)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+13094061)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1237974)*1+lsi)*1]), &(inteval->stack[((hsi*13338+1252794)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+13633197)*1+lsi)*1]), &(inteval->stack[((hsi*40014+13094061)*1+lsi)*1]), &(inteval->stack[((hsi*35802+13168239)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+13704801)*1+lsi)*1]), &(inteval->stack[((hsi*71604+13633197)*1+lsi)*1]), &(inteval->stack[((hsi*63648+13204041)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+13810881)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13704801)*1+lsi)*1]), &(inteval->stack[((hsi*93600+13267689)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+13134075)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13810881)*1+lsi)*1]), &(inteval->stack[((hsi*122850+13361289)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+13951281)*1+lsi)*1]), &(inteval->stack[((hsi*171990+13134075)*1+lsi)*1]), &(inteval->stack[((hsi*149058+13484139)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+13306065)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13951281)*1+lsi)*1]), &(inteval->stack[((hsi*170352+12923709)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+13525089)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1221594)*1+lsi)*1]), &(inteval->stack[((hsi*14820+1237974)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+14150025)*1+lsi)*1]), &(inteval->stack[((hsi*44460+13525089)*1+lsi)*1]), &(inteval->stack[((hsi*40014+13094061)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+14230053)*1+lsi)*1]), &(inteval->stack[((hsi*80028+14150025)*1+lsi)*1]), &(inteval->stack[((hsi*71604+13633197)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+14349393)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14230053)*1+lsi)*1]), &(inteval->stack[((hsi*106080+13704801)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+13569549)*1+lsi)*1]), &(inteval->stack[((hsi*159120+14349393)*1+lsi)*1]), &(inteval->stack[((hsi*140400+13810881)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+14508513)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13569549)*1+lsi)*1]), &(inteval->stack[((hsi*171990+13134075)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+14737833)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14508513)*1+lsi)*1]), &(inteval->stack[((hsi*198744+13951281)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+13766109)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14737833)*1+lsi)*1]), &(inteval->stack[((hsi*219024+13306065)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+13094061)*1+lsi)*1]), &(inteval->stack[((hsi*6084+1313322)*1+lsi)*1]), &(inteval->stack[((hsi*5148+1319406)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+13109505)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1324554)*1+lsi)*1]), &(inteval->stack[((hsi*15444+13094061)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+13140393)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1364100)*1+lsi)*1]), &(inteval->stack[((hsi*30888+13109505)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1237974)*1+lsi)*1]), &(inteval->stack[((hsi*60840+12623409)*1+lsi)*1]), &(inteval->stack[((hsi*51480+13140393)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+13094061)*1+lsi)*1]), &(inteval->stack[((hsi*91260+12832449)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1237974)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+1237974)*1+lsi)*1]), &(inteval->stack[((hsi*127764+12684249)*1+lsi)*1]), &(inteval->stack[((hsi*108108+13094061)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*170352+12923709)*1+lsi)*1]), &(inteval->stack[((hsi*144144+1237974)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+12766149)*1+lsi)*1]), &(inteval->stack[((hsi*219024+13306065)*1+lsi)*1]), &(inteval->stack[((hsi*185328+12580821)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+12997809)*1+lsi)*1]), &(inteval->stack[((hsi*273780+13766109)*1+lsi)*1]), &(inteval->stack[((hsi*231660+12766149)*1+lsi)*1]),78);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*49140+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1203576)*1+lsi)*1]), &(inteval->stack[((hsi*16380+1221594)*1+lsi)*1]),78);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*88920+12629961)*1+lsi)*1]), &(inteval->stack[((hsi*49140+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*44460+13525089)*1+lsi)*1]),78);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*133380+13280949)*1+lsi)*1]), &(inteval->stack[((hsi*88920+12629961)*1+lsi)*1]), &(inteval->stack[((hsi*80028+14150025)*1+lsi)*1]),78);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*179010+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*133380+13280949)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14230053)*1+lsi)*1]),78);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*222768+14039889)*1+lsi)*1]), &(inteval->stack[((hsi*179010+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*159120+14349393)*1+lsi)*1]),78);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*262080+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*222768+14039889)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13569549)*1+lsi)*1]),78);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*294840+13280949)*1+lsi)*1]), &(inteval->stack[((hsi*262080+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14508513)*1+lsi)*1]),78);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*319410+14039889)*1+lsi)*1]), &(inteval->stack[((hsi*294840+13280949)*1+lsi)*1]), &(inteval->stack[((hsi*255528+14737833)*1+lsi)*1]),78);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*334620+13280949)*1+lsi)*1]), &(inteval->stack[((hsi*319410+14039889)*1+lsi)*1]), &(inteval->stack[((hsi*273780+13766109)*1+lsi)*1]),78);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*339768+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*334620+13280949)*1+lsi)*1]), &(inteval->stack[((hsi*283140+12997809)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*862488+12920589)*1+lsi)*1]), &(inteval->stack[((hsi*339768+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*287496+12293325)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1203576)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1182191)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1190472)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1224870)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1172636)*1+lsi)*1]), &(inteval->stack[((hsi*8281+1182191)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1249713)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1224870)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1203576)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1161716)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1172636)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1320966)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1224870)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1320966)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1249713)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1370652)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1149340)*1+lsi)*1]), &(inteval->stack[((hsi*10920+1161716)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+13854057)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1370652)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1292301)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+13911387)*1+lsi)*1]), &(inteval->stack[((hsi*57330+13854057)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1320966)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+13994197)*1+lsi)*1]), &(inteval->stack[((hsi*82810+13911387)*1+lsi)*1]), &(inteval->stack[((hsi*70980+13783077)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1135417)*1+lsi)*1]), &(inteval->stack[((hsi*12376+1149340)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+14100667)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1370652)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+1329429)*1+lsi)*1]), &(inteval->stack[((hsi*65520+14100667)*1+lsi)*1]), &(inteval->stack[((hsi*57330+13854057)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+14166187)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1329429)*1+lsi)*1]), &(inteval->stack[((hsi*82810+13911387)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+14290402)*1+lsi)*1]), &(inteval->stack[((hsi*124215+14166187)*1+lsi)*1]), &(inteval->stack[((hsi*106470+13994197)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+13854057)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1119856)*1+lsi)*1]), &(inteval->stack[((hsi*13923+1135417)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+13895826)*1+lsi)*1]), &(inteval->stack[((hsi*41769+13854057)*1+lsi)*1]), &(inteval->stack[((hsi*37128+1292301)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+14439460)*1+lsi)*1]), &(inteval->stack[((hsi*74256+13895826)*1+lsi)*1]), &(inteval->stack[((hsi*65520+14100667)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+14548660)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14439460)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1329429)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+14691985)*1+lsi)*1]), &(inteval->stack[((hsi*143325+14548660)*1+lsi)*1]), &(inteval->stack[((hsi*124215+14166187)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+14865886)*1+lsi)*1]), &(inteval->stack[((hsi*173901+14691985)*1+lsi)*1]), &(inteval->stack[((hsi*149058+14290402)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+14100667)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1102566)*1+lsi)*1]), &(inteval->stack[((hsi*15561+1119856)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+14147350)*1+lsi)*1]), &(inteval->stack[((hsi*46683+14100667)*1+lsi)*1]), &(inteval->stack[((hsi*41769+13854057)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14147350)*1+lsi)*1]), &(inteval->stack[((hsi*74256+13895826)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+15064630)*1+lsi)*1]), &(inteval->stack[((hsi*123760+1292301)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14439460)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+15228430)*1+lsi)*1]), &(inteval->stack[((hsi*163800+15064630)*1+lsi)*1]), &(inteval->stack[((hsi*143325+14548660)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+14439460)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15228430)*1+lsi)*1]), &(inteval->stack[((hsi*173901+14691985)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+15429085)*1+lsi)*1]), &(inteval->stack[((hsi*231868+14439460)*1+lsi)*1]), &(inteval->stack[((hsi*198744+14865886)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+14671328)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1083456)*1+lsi)*1]), &(inteval->stack[((hsi*17290+1102566)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+14723198)*1+lsi)*1]), &(inteval->stack[((hsi*51870+14671328)*1+lsi)*1]), &(inteval->stack[((hsi*46683+14100667)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+13854057)*1+lsi)*1]), &(inteval->stack[((hsi*93366+14723198)*1+lsi)*1]), &(inteval->stack[((hsi*83538+14147350)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+14100667)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13854057)*1+lsi)*1]), &(inteval->stack[((hsi*123760+1292301)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+15684613)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14100667)*1+lsi)*1]), &(inteval->stack[((hsi*163800+15064630)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+15913933)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15684613)*1+lsi)*1]), &(inteval->stack[((hsi*200655+15228430)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+15064630)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15913933)*1+lsi)*1]), &(inteval->stack[((hsi*231868+14439460)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+16181473)*1+lsi)*1]), &(inteval->stack[((hsi*298116+15064630)*1+lsi)*1]), &(inteval->stack[((hsi*255528+15429085)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+14439460)*1+lsi)*1]), &(inteval->stack[((hsi*7098+1190472)*1+lsi)*1]), &(inteval->stack[((hsi*6006+1197570)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+14457478)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1203576)*1+lsi)*1]), &(inteval->stack[((hsi*18018+14439460)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+14493514)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1249713)*1+lsi)*1]), &(inteval->stack[((hsi*36036+14457478)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1102566)*1+lsi)*1]), &(inteval->stack[((hsi*70980+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*60060+14493514)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1192656)*1+lsi)*1]), &(inteval->stack[((hsi*106470+13994197)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1102566)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+14439460)*1+lsi)*1]), &(inteval->stack[((hsi*149058+14290402)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1192656)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+1102566)*1+lsi)*1]), &(inteval->stack[((hsi*198744+14865886)*1+lsi)*1]), &(inteval->stack[((hsi*168168+14439460)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+14286307)*1+lsi)*1]), &(inteval->stack[((hsi*255528+15429085)*1+lsi)*1]), &(inteval->stack[((hsi*216216+1102566)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+16500883)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16181473)*1+lsi)*1]), &(inteval->stack[((hsi*270270+14286307)*1+lsi)*1]),91);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*57330+14286307)*1+lsi)*1]), &(inteval->stack[((hsi*21021+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*19110+1083456)*1+lsi)*1]),91);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*103740+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*57330+14286307)*1+lsi)*1]), &(inteval->stack[((hsi*51870+14671328)*1+lsi)*1]),91);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*155610+14286307)*1+lsi)*1]), &(inteval->stack[((hsi*103740+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*93366+14723198)*1+lsi)*1]),91);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*208845+14441917)*1+lsi)*1]), &(inteval->stack[((hsi*155610+14286307)*1+lsi)*1]), &(inteval->stack[((hsi*139230+13854057)*1+lsi)*1]),91);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*259896+14650762)*1+lsi)*1]), &(inteval->stack[((hsi*208845+14441917)*1+lsi)*1]), &(inteval->stack[((hsi*185640+14100667)*1+lsi)*1]),91);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*305760+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*259896+14650762)*1+lsi)*1]), &(inteval->stack[((hsi*229320+15684613)*1+lsi)*1]),91);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*343980+14088837)*1+lsi)*1]), &(inteval->stack[((hsi*305760+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*267540+15913933)*1+lsi)*1]),91);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*372645+15362746)*1+lsi)*1]), &(inteval->stack[((hsi*343980+14088837)*1+lsi)*1]), &(inteval->stack[((hsi*298116+15064630)*1+lsi)*1]),91);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*390390+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*372645+15362746)*1+lsi)*1]), &(inteval->stack[((hsi*319410+16181473)*1+lsi)*1]),91);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*396396+14173467)*1+lsi)*1]), &(inteval->stack[((hsi*390390+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*330330+16500883)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*1019304+14569863)*1+lsi)*1]), &(inteval->stack[((hsi*396396+14173467)*1+lsi)*1]), &(inteval->stack[((hsi*339768+12580821)*1+lsi)*1]),4356);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1724976+15589167)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+14569863)*1+lsi)*1]), &(inteval->stack[((hsi*862488+12920589)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1037760)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1047315)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+13807647)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1026735)*1+lsi)*1]), &(inteval->stack[((hsi*9555+1037760)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*28665+13807647)*1+lsi)*1]), &(inteval->stack[((hsi*24570+13783077)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1014135)*1+lsi)*1]), &(inteval->stack[((hsi*11025+1026735)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+13836312)*1+lsi)*1]), &(inteval->stack[((hsi*33075+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*28665+13807647)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+1111575)*1+lsi)*1]), &(inteval->stack[((hsi*57330+13836312)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1062435)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+12613896)*1+lsi)*1]), &(inteval->stack[((hsi*14280+999855)*1+lsi)*1]), &(inteval->stack[((hsi*12600+1014135)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+13893642)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12613896)*1+lsi)*1]), &(inteval->stack[((hsi*33075+12580821)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+12651696)*1+lsi)*1]), &(inteval->stack[((hsi*66150+13893642)*1+lsi)*1]), &(inteval->stack[((hsi*57330+13836312)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+1193475)*1+lsi)*1]), &(inteval->stack[((hsi*95550+12651696)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1111575)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+13959792)*1+lsi)*1]), &(inteval->stack[((hsi*16065+983790)*1+lsi)*1]), &(inteval->stack[((hsi*14280+999855)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+12747246)*1+lsi)*1]), &(inteval->stack[((hsi*42840+13959792)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12613896)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+14002632)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12747246)*1+lsi)*1]), &(inteval->stack[((hsi*66150+13893642)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+13807647)*1+lsi)*1]), &(inteval->stack[((hsi*110250+14002632)*1+lsi)*1]), &(inteval->stack[((hsi*95550+12651696)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13807647)*1+lsi)*1]), &(inteval->stack[((hsi*122850+1193475)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*17955+965835)*1+lsi)*1]), &(inteval->stack[((hsi*16065+983790)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+12629016)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*42840+13959792)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+17486133)*1+lsi)*1]), &(inteval->stack[((hsi*85680+12629016)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12747246)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+12714696)*1+lsi)*1]), &(inteval->stack[((hsi*126000+17486133)*1+lsi)*1]), &(inteval->stack[((hsi*110250+14002632)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+13950972)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12714696)*1+lsi)*1]), &(inteval->stack[((hsi*143325+13807647)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+17612133)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13950972)*1+lsi)*1]), &(inteval->stack[((hsi*171990+17314143)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+13807647)*1+lsi)*1]), &(inteval->stack[((hsi*19950+945885)*1+lsi)*1]), &(inteval->stack[((hsi*17955+965835)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+1316325)*1+lsi)*1]), &(inteval->stack[((hsi*53865+13807647)*1+lsi)*1]), &(inteval->stack[((hsi*48195+12580821)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+17841453)*1+lsi)*1]), &(inteval->stack[((hsi*96390+1316325)*1+lsi)*1]), &(inteval->stack[((hsi*85680+12629016)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+17984253)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17841453)*1+lsi)*1]), &(inteval->stack[((hsi*126000+17486133)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+18173253)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17984253)*1+lsi)*1]), &(inteval->stack[((hsi*165375+12714696)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*231525+18173253)*1+lsi)*1]), &(inteval->stack[((hsi*200655+13950972)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+13861512)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17612133)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+17486133)*1+lsi)*1]), &(inteval->stack[((hsi*22050+923835)*1+lsi)*1]), &(inteval->stack[((hsi*19950+945885)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+18404778)*1+lsi)*1]), &(inteval->stack[((hsi*59850+17486133)*1+lsi)*1]), &(inteval->stack[((hsi*53865+13807647)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+18512508)*1+lsi)*1]), &(inteval->stack[((hsi*107730+18404778)*1+lsi)*1]), &(inteval->stack[((hsi*96390+1316325)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+18673158)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18512508)*1+lsi)*1]), &(inteval->stack[((hsi*142800+17841453)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+18887358)*1+lsi)*1]), &(inteval->stack[((hsi*214200+18673158)*1+lsi)*1]), &(inteval->stack[((hsi*189000+17984253)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+17841453)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18887358)*1+lsi)*1]), &(inteval->stack[((hsi*231525+18173253)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+19151958)*1+lsi)*1]), &(inteval->stack[((hsi*308700+17841453)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12580821)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+19495938)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19151958)*1+lsi)*1]), &(inteval->stack[((hsi*294840+13861512)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*8190+1047315)*1+lsi)*1]), &(inteval->stack[((hsi*6930+1055505)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+12601611)*1+lsi)*1]), &(inteval->stack[((hsi*24570+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*20790+12580821)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+12643191)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1062435)*1+lsi)*1]), &(inteval->stack[((hsi*41580+12601611)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+18150153)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1111575)*1+lsi)*1]), &(inteval->stack[((hsi*69300+12643191)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*122850+1193475)*1+lsi)*1]), &(inteval->stack[((hsi*103950+18150153)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+945885)*1+lsi)*1]), &(inteval->stack[((hsi*171990+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*145530+12580821)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*229320+17612133)*1+lsi)*1]), &(inteval->stack[((hsi*194040+945885)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+945885)*1+lsi)*1]), &(inteval->stack[((hsi*294840+13861512)*1+lsi)*1]), &(inteval->stack[((hsi*249480+12580821)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*368550+19495938)*1+lsi)*1]), &(inteval->stack[((hsi*311850+945885)*1+lsi)*1]),105);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*66150+945885)*1+lsi)*1]), &(inteval->stack[((hsi*24255+899580)*1+lsi)*1]), &(inteval->stack[((hsi*22050+923835)*1+lsi)*1]),105);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*119700+1012035)*1+lsi)*1]), &(inteval->stack[((hsi*66150+945885)*1+lsi)*1]), &(inteval->stack[((hsi*59850+17486133)*1+lsi)*1]),105);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*179550+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*119700+1012035)*1+lsi)*1]), &(inteval->stack[((hsi*107730+18404778)*1+lsi)*1]),105);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*240975+899580)*1+lsi)*1]), &(inteval->stack[((hsi*179550+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*160650+18512508)*1+lsi)*1]),105);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*299880+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*240975+899580)*1+lsi)*1]), &(inteval->stack[((hsi*214200+18673158)*1+lsi)*1]),105);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*352800+18150153)*1+lsi)*1]), &(inteval->stack[((hsi*299880+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*264600+18887358)*1+lsi)*1]),105);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*396900+18502953)*1+lsi)*1]), &(inteval->stack[((hsi*352800+18150153)*1+lsi)*1]), &(inteval->stack[((hsi*308700+17841453)*1+lsi)*1]),105);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*429975+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*396900+18502953)*1+lsi)*1]), &(inteval->stack[((hsi*343980+19151958)*1+lsi)*1]),105);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*450450+17744118)*1+lsi)*1]), &(inteval->stack[((hsi*429975+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*368550+19495938)*1+lsi)*1]),105);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*457380+899580)*1+lsi)*1]), &(inteval->stack[((hsi*450450+17744118)*1+lsi)*1]), &(inteval->stack[((hsi*381150+13783077)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*1189188+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*457380+899580)*1+lsi)*1]), &(inteval->stack[((hsi*396396+14173467)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*2038608+18503331)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*1019304+14569863)*1+lsi)*1]),4356);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2874960+20541939)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+18503331)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+15589167)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*10920+871380)*1+lsi)*1]), &(inteval->stack[((hsi*9360+882300)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+13811157)*1+lsi)*1]), &(inteval->stack[((hsi*12600+858780)*1+lsi)*1]), &(inteval->stack[((hsi*10920+871380)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+13843917)*1+lsi)*1]), &(inteval->stack[((hsi*32760+13811157)*1+lsi)*1]), &(inteval->stack[((hsi*28080+13783077)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+13900077)*1+lsi)*1]), &(inteval->stack[((hsi*14400+844380)*1+lsi)*1]), &(inteval->stack[((hsi*12600+858780)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+13937877)*1+lsi)*1]), &(inteval->stack[((hsi*37800+13900077)*1+lsi)*1]), &(inteval->stack[((hsi*32760+13811157)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+14003397)*1+lsi)*1]), &(inteval->stack[((hsi*65520+13937877)*1+lsi)*1]), &(inteval->stack[((hsi*56160+13843917)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+14096997)*1+lsi)*1]), &(inteval->stack[((hsi*16320+828060)*1+lsi)*1]), &(inteval->stack[((hsi*14400+844380)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+14140197)*1+lsi)*1]), &(inteval->stack[((hsi*43200+14096997)*1+lsi)*1]), &(inteval->stack[((hsi*37800+13900077)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+14215797)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14140197)*1+lsi)*1]), &(inteval->stack[((hsi*65520+13937877)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+14324997)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14215797)*1+lsi)*1]), &(inteval->stack[((hsi*93600+14003397)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+14465397)*1+lsi)*1]), &(inteval->stack[((hsi*18360+809700)*1+lsi)*1]), &(inteval->stack[((hsi*16320+828060)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+14514357)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14465397)*1+lsi)*1]), &(inteval->stack[((hsi*43200+14096997)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+14600757)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14514357)*1+lsi)*1]), &(inteval->stack[((hsi*75600+14140197)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+14726757)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14600757)*1+lsi)*1]), &(inteval->stack[((hsi*109200+14215797)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+14890557)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14726757)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14324997)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+15087117)*1+lsi)*1]), &(inteval->stack[((hsi*20520+789180)*1+lsi)*1]), &(inteval->stack[((hsi*18360+809700)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+15142197)*1+lsi)*1]), &(inteval->stack[((hsi*55080+15087117)*1+lsi)*1]), &(inteval->stack[((hsi*48960+14465397)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+15240117)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15142197)*1+lsi)*1]), &(inteval->stack[((hsi*86400+14514357)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15240117)*1+lsi)*1]), &(inteval->stack[((hsi*126000+14600757)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+14465397)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*163800+14726757)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14465397)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14890557)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+14096997)*1+lsi)*1]), &(inteval->stack[((hsi*22800+766380)*1+lsi)*1]), &(inteval->stack[((hsi*20520+789180)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+15384117)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14096997)*1+lsi)*1]), &(inteval->stack[((hsi*55080+15087117)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+14694717)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15384117)*1+lsi)*1]), &(inteval->stack[((hsi*97920+15142197)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+23678979)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14694717)*1+lsi)*1]), &(inteval->stack[((hsi*144000+15240117)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+15087117)*1+lsi)*1]), &(inteval->stack[((hsi*216000+23678979)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12580821)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*264600+15087117)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14465397)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+23894979)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*262080+23416899)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+14465397)*1+lsi)*1]), &(inteval->stack[((hsi*25200+741180)*1+lsi)*1]), &(inteval->stack[((hsi*22800+766380)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+14158557)*1+lsi)*1]), &(inteval->stack[((hsi*68400+14465397)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14096997)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+24231939)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14158557)*1+lsi)*1]), &(inteval->stack[((hsi*110160+15384117)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+24415539)*1+lsi)*1]), &(inteval->stack[((hsi*183600+24231939)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14694717)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+14533797)*1+lsi)*1]), &(inteval->stack[((hsi*244800+24415539)*1+lsi)*1]), &(inteval->stack[((hsi*216000+23678979)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+24660339)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14533797)*1+lsi)*1]), &(inteval->stack[((hsi*264600+15087117)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+15087117)*1+lsi)*1]), &(inteval->stack[((hsi*352800+24660339)*1+lsi)*1]), &(inteval->stack[((hsi*305760+12580821)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+25013139)*1+lsi)*1]), &(inteval->stack[((hsi*393120+15087117)*1+lsi)*1]), &(inteval->stack[((hsi*336960+23894979)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*9360+882300)*1+lsi)*1]), &(inteval->stack[((hsi*7920+891660)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+12604581)*1+lsi)*1]), &(inteval->stack[((hsi*28080+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*23760+12580821)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+12652101)*1+lsi)*1]), &(inteval->stack[((hsi*56160+13843917)*1+lsi)*1]), &(inteval->stack[((hsi*47520+12604581)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*93600+14003397)*1+lsi)*1]), &(inteval->stack[((hsi*79200+12652101)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*140400+14324997)*1+lsi)*1]), &(inteval->stack[((hsi*118800+13783077)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*196560+14890557)*1+lsi)*1]), &(inteval->stack[((hsi*166320+12580821)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*262080+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*221760+13783077)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*336960+23894979)*1+lsi)*1]), &(inteval->stack[((hsi*285120+12580821)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+23773299)*1+lsi)*1]), &(inteval->stack[((hsi*421200+25013139)*1+lsi)*1]), &(inteval->stack[((hsi*356400+23416899)*1+lsi)*1]),120);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*75600+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*27720+713460)*1+lsi)*1]), &(inteval->stack[((hsi*25200+741180)*1+lsi)*1]),120);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*136800+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*75600+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*68400+14465397)*1+lsi)*1]),120);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*205200+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*136800+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*123120+14158557)*1+lsi)*1]),120);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*275400+13988277)*1+lsi)*1]), &(inteval->stack[((hsi*205200+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*183600+24231939)*1+lsi)*1]),120);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*342720+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*275400+13988277)*1+lsi)*1]), &(inteval->stack[((hsi*244800+24415539)*1+lsi)*1]),120);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*403200+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*342720+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14533797)*1+lsi)*1]),120);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*453600+14186277)*1+lsi)*1]), &(inteval->stack[((hsi*403200+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*352800+24660339)*1+lsi)*1]),120);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*491400+24208899)*1+lsi)*1]), &(inteval->stack[((hsi*453600+14186277)*1+lsi)*1]), &(inteval->stack[((hsi*393120+15087117)*1+lsi)*1]),120);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*514800+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*491400+24208899)*1+lsi)*1]), &(inteval->stack[((hsi*421200+25013139)*1+lsi)*1]),120);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*522720+14297877)*1+lsi)*1]), &(inteval->stack[((hsi*514800+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*435600+23773299)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1372140+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*522720+14297877)*1+lsi)*1]), &(inteval->stack[((hsi*457380+899580)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*2378376+24789039)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*1189188+17314143)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*3397680+27167415)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+24789039)*1+lsi)*1]), &(inteval->stack[((hsi*2038608+18503331)*1+lsi)*1]),4356);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*4312440+30565095)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+27167415)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+20541939)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*12376+681500)*1+lsi)*1]), &(inteval->stack[((hsi*10608+693876)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+17345967)*1+lsi)*1]), &(inteval->stack[((hsi*14280+667220)*1+lsi)*1]), &(inteval->stack[((hsi*12376+681500)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+17383095)*1+lsi)*1]), &(inteval->stack[((hsi*37128+17345967)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17314143)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+17446743)*1+lsi)*1]), &(inteval->stack[((hsi*16320+650900)*1+lsi)*1]), &(inteval->stack[((hsi*14280+667220)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+17489583)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17446743)*1+lsi)*1]), &(inteval->stack[((hsi*37128+17345967)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+17563839)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17489583)*1+lsi)*1]), &(inteval->stack[((hsi*63648+17383095)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+17669919)*1+lsi)*1]), &(inteval->stack[((hsi*18496+632404)*1+lsi)*1]), &(inteval->stack[((hsi*16320+650900)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+17718879)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17669919)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17446743)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+17804559)*1+lsi)*1]), &(inteval->stack[((hsi*85680+17718879)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17489583)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+17928319)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17804559)*1+lsi)*1]), &(inteval->stack[((hsi*106080+17563839)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+18087439)*1+lsi)*1]), &(inteval->stack[((hsi*20808+611596)*1+lsi)*1]), &(inteval->stack[((hsi*18496+632404)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+18142927)*1+lsi)*1]), &(inteval->stack[((hsi*55488+18087439)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17669919)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+18240847)*1+lsi)*1]), &(inteval->stack[((hsi*97920+18142927)*1+lsi)*1]), &(inteval->stack[((hsi*85680+17718879)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+18383647)*1+lsi)*1]), &(inteval->stack[((hsi*142800+18240847)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17804559)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+18569287)*1+lsi)*1]), &(inteval->stack[((hsi*185640+18383647)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17928319)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+18792055)*1+lsi)*1]), &(inteval->stack[((hsi*23256+588340)*1+lsi)*1]), &(inteval->stack[((hsi*20808+611596)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+18854479)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18792055)*1+lsi)*1]), &(inteval->stack[((hsi*55488+18087439)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+18965455)*1+lsi)*1]), &(inteval->stack[((hsi*110976+18854479)*1+lsi)*1]), &(inteval->stack[((hsi*97920+18142927)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+19128655)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18965455)*1+lsi)*1]), &(inteval->stack[((hsi*142800+18240847)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+19342855)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19128655)*1+lsi)*1]), &(inteval->stack[((hsi*185640+18383647)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+19602751)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19342855)*1+lsi)*1]), &(inteval->stack[((hsi*222768+18569287)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+14820597)*1+lsi)*1]), &(inteval->stack[((hsi*25840+562500)*1+lsi)*1]), &(inteval->stack[((hsi*23256+588340)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+713460)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14820597)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18792055)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+14890365)*1+lsi)*1]), &(inteval->stack[((hsi*124848+713460)*1+lsi)*1]), &(inteval->stack[((hsi*110976+18854479)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+19899775)*1+lsi)*1]), &(inteval->stack[((hsi*184960+14890365)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18965455)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+838308)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19899775)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19128655)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+18792055)*1+lsi)*1]), &(inteval->stack[((hsi*299880+838308)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19342855)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*346528+18792055)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19602751)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+15075325)*1+lsi)*1]), &(inteval->stack[((hsi*28560+533940)*1+lsi)*1]), &(inteval->stack[((hsi*25840+562500)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+18087439)*1+lsi)*1]), &(inteval->stack[((hsi*77520+15075325)*1+lsi)*1]), &(inteval->stack[((hsi*69768+14820597)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+19138583)*1+lsi)*1]), &(inteval->stack[((hsi*139536+18087439)*1+lsi)*1]), &(inteval->stack[((hsi*124848+713460)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+15152845)*1+lsi)*1]), &(inteval->stack[((hsi*208080+19138583)*1+lsi)*1]), &(inteval->stack[((hsi*184960+14890365)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+20144575)*1+lsi)*1]), &(inteval->stack[((hsi*277440+15152845)*1+lsi)*1]), &(inteval->stack[((hsi*244800+19899775)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+34877535)*1+lsi)*1]), &(inteval->stack[((hsi*342720+20144575)*1+lsi)*1]), &(inteval->stack[((hsi*299880+838308)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+713460)*1+lsi)*1]), &(inteval->stack[((hsi*399840+34877535)*1+lsi)*1]), &(inteval->stack[((hsi*346528+18792055)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+35277375)*1+lsi)*1]), &(inteval->stack[((hsi*445536+713460)*1+lsi)*1]), &(inteval->stack[((hsi*381888+13783077)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+18792055)*1+lsi)*1]), &(inteval->stack[((hsi*10608+693876)*1+lsi)*1]), &(inteval->stack[((hsi*8976+704484)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+18226975)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*26928+18792055)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+18792055)*1+lsi)*1]), &(inteval->stack[((hsi*63648+17383095)*1+lsi)*1]), &(inteval->stack[((hsi*53856+18226975)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+18226975)*1+lsi)*1]), &(inteval->stack[((hsi*106080+17563839)*1+lsi)*1]), &(inteval->stack[((hsi*89760+18792055)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17928319)*1+lsi)*1]), &(inteval->stack[((hsi*134640+18226975)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+17502639)*1+lsi)*1]), &(inteval->stack[((hsi*222768+18569287)*1+lsi)*1]), &(inteval->stack[((hsi*188496+17314143)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+18226975)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19602751)*1+lsi)*1]), &(inteval->stack[((hsi*251328+17502639)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+19346663)*1+lsi)*1]), &(inteval->stack[((hsi*381888+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*323136+18226975)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+18226975)*1+lsi)*1]), &(inteval->stack[((hsi*477360+35277375)*1+lsi)*1]), &(inteval->stack[((hsi*403920+19346663)*1+lsi)*1]),136);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*85680+19346663)*1+lsi)*1]), &(inteval->stack[((hsi*31416+502524)*1+lsi)*1]), &(inteval->stack[((hsi*28560+533940)*1+lsi)*1]),136);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*155040+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*85680+19346663)*1+lsi)*1]), &(inteval->stack[((hsi*77520+15075325)*1+lsi)*1]),136);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*232560+19346663)*1+lsi)*1]), &(inteval->stack[((hsi*155040+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*139536+18087439)*1+lsi)*1]),136);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*312120+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*232560+19346663)*1+lsi)*1]), &(inteval->stack[((hsi*208080+19138583)*1+lsi)*1]),136);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*388416+18720655)*1+lsi)*1]), &(inteval->stack[((hsi*312120+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*277440+15152845)*1+lsi)*1]),136);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*456960+19109071)*1+lsi)*1]), &(inteval->stack[((hsi*388416+18720655)*1+lsi)*1]), &(inteval->stack[((hsi*342720+20144575)*1+lsi)*1]),136);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*514080+19566031)*1+lsi)*1]), &(inteval->stack[((hsi*456960+19109071)*1+lsi)*1]), &(inteval->stack[((hsi*399840+34877535)*1+lsi)*1]),136);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*556920+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*514080+19566031)*1+lsi)*1]), &(inteval->stack[((hsi*445536+713460)*1+lsi)*1]),136);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*583440+18720655)*1+lsi)*1]), &(inteval->stack[((hsi*556920+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*477360+35277375)*1+lsi)*1]),136);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*592416+19304095)*1+lsi)*1]), &(inteval->stack[((hsi*583440+18720655)*1+lsi)*1]), &(inteval->stack[((hsi*493680+18226975)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1568160+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*592416+19304095)*1+lsi)*1]), &(inteval->stack[((hsi*522720+14297877)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2744280+34877535)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*1372140+23416899)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3963960+37621815)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+34877535)*1+lsi)*1]), &(inteval->stack[((hsi*2378376+24789039)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*5096520+41585775)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+37621815)*1+lsi)*1]), &(inteval->stack[((hsi*3397680+27167415)*1+lsi)*1]),4356);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*6037416+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+41585775)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+30565095)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*13923+466569)*1+lsi)*1]), &(inteval->stack[((hsi*11934+480492)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+13818879)*1+lsi)*1]), &(inteval->stack[((hsi*16065+450504)*1+lsi)*1]), &(inteval->stack[((hsi*13923+466569)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+13860648)*1+lsi)*1]), &(inteval->stack[((hsi*41769+13818879)*1+lsi)*1]), &(inteval->stack[((hsi*35802+13783077)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+13932252)*1+lsi)*1]), &(inteval->stack[((hsi*18360+432144)*1+lsi)*1]), &(inteval->stack[((hsi*16065+450504)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+13980447)*1+lsi)*1]), &(inteval->stack[((hsi*48195+13932252)*1+lsi)*1]), &(inteval->stack[((hsi*41769+13818879)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+14063985)*1+lsi)*1]), &(inteval->stack[((hsi*83538+13980447)*1+lsi)*1]), &(inteval->stack[((hsi*71604+13860648)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+14183325)*1+lsi)*1]), &(inteval->stack[((hsi*20808+411336)*1+lsi)*1]), &(inteval->stack[((hsi*18360+432144)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+14238405)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14183325)*1+lsi)*1]), &(inteval->stack[((hsi*48195+13932252)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+14334795)*1+lsi)*1]), &(inteval->stack[((hsi*96390+14238405)*1+lsi)*1]), &(inteval->stack[((hsi*83538+13980447)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+14474025)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14334795)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14063985)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*23409+387927)*1+lsi)*1]), &(inteval->stack[((hsi*20808+411336)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+29516739)*1+lsi)*1]), &(inteval->stack[((hsi*62424+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*55080+14183325)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+29626899)*1+lsi)*1]), &(inteval->stack[((hsi*110160+29516739)*1+lsi)*1]), &(inteval->stack[((hsi*96390+14238405)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+14653035)*1+lsi)*1]), &(inteval->stack[((hsi*160650+29626899)*1+lsi)*1]), &(inteval->stack[((hsi*139230+14334795)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+502524)*1+lsi)*1]), &(inteval->stack[((hsi*208845+14653035)*1+lsi)*1]), &(inteval->stack[((hsi*179010+14474025)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+29787549)*1+lsi)*1]), &(inteval->stack[((hsi*26163+361764)*1+lsi)*1]), &(inteval->stack[((hsi*23409+387927)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+14861880)*1+lsi)*1]), &(inteval->stack[((hsi*70227+29787549)*1+lsi)*1]), &(inteval->stack[((hsi*62424+29454315)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+29857776)*1+lsi)*1]), &(inteval->stack[((hsi*124848+14861880)*1+lsi)*1]), &(inteval->stack[((hsi*110160+29516739)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+753138)*1+lsi)*1]), &(inteval->stack[((hsi*183600+29857776)*1+lsi)*1]), &(inteval->stack[((hsi*160650+29626899)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+19896511)*1+lsi)*1]), &(inteval->stack[((hsi*240975+753138)*1+lsi)*1]), &(inteval->stack[((hsi*208845+14653035)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+14986728)*1+lsi)*1]), &(inteval->stack[((hsi*292383+19896511)*1+lsi)*1]), &(inteval->stack[((hsi*250614+502524)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+30041376)*1+lsi)*1]), &(inteval->stack[((hsi*29070+332694)*1+lsi)*1]), &(inteval->stack[((hsi*26163+361764)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+30119865)*1+lsi)*1]), &(inteval->stack[((hsi*78489+30041376)*1+lsi)*1]), &(inteval->stack[((hsi*70227+29787549)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+994113)*1+lsi)*1]), &(inteval->stack[((hsi*140454+30119865)*1+lsi)*1]), &(inteval->stack[((hsi*124848+14861880)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+18882303)*1+lsi)*1]), &(inteval->stack[((hsi*208080+994113)*1+lsi)*1]), &(inteval->stack[((hsi*183600+29857776)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*275400+18882303)*1+lsi)*1]), &(inteval->stack[((hsi*240975+753138)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*337365+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*292383+19896511)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+19896511)*1+lsi)*1]), &(inteval->stack[((hsi*389844+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*334152+14986728)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*32130+300564)*1+lsi)*1]), &(inteval->stack[((hsi*29070+332694)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+14653035)*1+lsi)*1]), &(inteval->stack[((hsi*87210+12580821)*1+lsi)*1]), &(inteval->stack[((hsi*78489+30041376)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+29791680)*1+lsi)*1]), &(inteval->stack[((hsi*156978+14653035)*1+lsi)*1]), &(inteval->stack[((hsi*140454+30119865)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+30025770)*1+lsi)*1]), &(inteval->stack[((hsi*234090+29791680)*1+lsi)*1]), &(inteval->stack[((hsi*208080+994113)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+753138)*1+lsi)*1]), &(inteval->stack[((hsi*312120+30025770)*1+lsi)*1]), &(inteval->stack[((hsi*275400+18882303)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+47072139)*1+lsi)*1]), &(inteval->stack[((hsi*385560+753138)*1+lsi)*1]), &(inteval->stack[((hsi*337365+29454315)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+47521959)*1+lsi)*1]), &(inteval->stack[((hsi*449820+47072139)*1+lsi)*1]), &(inteval->stack[((hsi*389844+46682295)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+48023187)*1+lsi)*1]), &(inteval->stack[((hsi*501228+47521959)*1+lsi)*1]), &(inteval->stack[((hsi*429624+19896511)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+18882303)*1+lsi)*1]), &(inteval->stack[((hsi*11934+480492)*1+lsi)*1]), &(inteval->stack[((hsi*10098+492426)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+18912597)*1+lsi)*1]), &(inteval->stack[((hsi*35802+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*30294+18882303)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*71604+13860648)*1+lsi)*1]), &(inteval->stack[((hsi*60588+18912597)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+18882303)*1+lsi)*1]), &(inteval->stack[((hsi*119340+14063985)*1+lsi)*1]), &(inteval->stack[((hsi*100980+46682295)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*179010+14474025)*1+lsi)*1]), &(inteval->stack[((hsi*151470+18882303)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+13995135)*1+lsi)*1]), &(inteval->stack[((hsi*250614+502524)*1+lsi)*1]), &(inteval->stack[((hsi*212058+13783077)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+18882303)*1+lsi)*1]), &(inteval->stack[((hsi*334152+14986728)*1+lsi)*1]), &(inteval->stack[((hsi*282744+13995135)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*429624+19896511)*1+lsi)*1]), &(inteval->stack[((hsi*363528+18882303)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+14810013)*1+lsi)*1]), &(inteval->stack[((hsi*537030+48023187)*1+lsi)*1]), &(inteval->stack[((hsi*454410+13783077)*1+lsi)*1]),153);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*96390+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*35343+265221)*1+lsi)*1]), &(inteval->stack[((hsi*32130+300564)*1+lsi)*1]),153);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*174420+13879467)*1+lsi)*1]), &(inteval->stack[((hsi*96390+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*87210+12580821)*1+lsi)*1]),153);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*261630+19896511)*1+lsi)*1]), &(inteval->stack[((hsi*174420+13879467)*1+lsi)*1]), &(inteval->stack[((hsi*156978+14653035)*1+lsi)*1]),153);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*351135+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*261630+19896511)*1+lsi)*1]), &(inteval->stack[((hsi*234090+29791680)*1+lsi)*1]),153);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*436968+14134212)*1+lsi)*1]), &(inteval->stack[((hsi*351135+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*312120+30025770)*1+lsi)*1]),153);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*514080+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*436968+14134212)*1+lsi)*1]), &(inteval->stack[((hsi*385560+753138)*1+lsi)*1]),153);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*578340+265221)*1+lsi)*1]), &(inteval->stack[((hsi*514080+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*449820+47072139)*1+lsi)*1]),153);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*626535+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*578340+265221)*1+lsi)*1]), &(inteval->stack[((hsi*501228+47521959)*1+lsi)*1]),153);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*656370+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*626535+29454315)*1+lsi)*1]), &(inteval->stack[((hsi*537030+48023187)*1+lsi)*1]),153);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*666468+265221)*1+lsi)*1]), &(inteval->stack[((hsi*656370+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*555390+14810013)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1777248+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*666468+265221)*1+lsi)*1]), &(inteval->stack[((hsi*592416+19304095)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*3136320+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+13783077)*1+lsi)*1]), &(inteval->stack[((hsi*1568160+17314143)*1+lsi)*1]),4356);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*4573800+49818615)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+46682295)*1+lsi)*1]), &(inteval->stack[((hsi*2744280+34877535)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*5945940+54392415)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+49818615)*1+lsi)*1]), &(inteval->stack[((hsi*3963960+37621815)*1+lsi)*1]),4356);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*7135128+60338355)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+54392415)*1+lsi)*1]), &(inteval->stack[((hsi*5096520+41585775)*1+lsi)*1]),4356);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*8049888+34877535)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+60338355)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+23416899)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1499300)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1504305)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+42940293)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1493525)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1499300)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+42955308)*1+lsi)*1]), &(inteval->stack[((hsi*15015+42940293)*1+lsi)*1]), &(inteval->stack[((hsi*12870+42927423)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+42981048)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1486925)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1493525)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+42998373)*1+lsi)*1]), &(inteval->stack[((hsi*17325+42981048)*1+lsi)*1]), &(inteval->stack[((hsi*15015+42940293)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+43028403)*1+lsi)*1]), &(inteval->stack[((hsi*30030+42998373)*1+lsi)*1]), &(inteval->stack[((hsi*25740+42955308)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+43071303)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1479445)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1486925)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+43091103)*1+lsi)*1]), &(inteval->stack[((hsi*19800+43071303)*1+lsi)*1]), &(inteval->stack[((hsi*17325+42981048)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+43125753)*1+lsi)*1]), &(inteval->stack[((hsi*34650+43091103)*1+lsi)*1]), &(inteval->stack[((hsi*30030+42998373)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+43175803)*1+lsi)*1]), &(inteval->stack[((hsi*50050+43125753)*1+lsi)*1]), &(inteval->stack[((hsi*42900+43028403)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+43240153)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1471030)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1479445)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+43262593)*1+lsi)*1]), &(inteval->stack[((hsi*22440+43240153)*1+lsi)*1]), &(inteval->stack[((hsi*19800+43071303)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+43302193)*1+lsi)*1]), &(inteval->stack[((hsi*39600+43262593)*1+lsi)*1]), &(inteval->stack[((hsi*34650+43091103)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+43359943)*1+lsi)*1]), &(inteval->stack[((hsi*57750+43302193)*1+lsi)*1]), &(inteval->stack[((hsi*50050+43125753)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+43435018)*1+lsi)*1]), &(inteval->stack[((hsi*75075+43359943)*1+lsi)*1]), &(inteval->stack[((hsi*64350+43175803)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1461625)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1471030)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+17339388)*1+lsi)*1]), &(inteval->stack[((hsi*25245+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*22440+43240153)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+17384268)*1+lsi)*1]), &(inteval->stack[((hsi*44880+17339388)*1+lsi)*1]), &(inteval->stack[((hsi*39600+43262593)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+43525108)*1+lsi)*1]), &(inteval->stack[((hsi*66000+17384268)*1+lsi)*1]), &(inteval->stack[((hsi*57750+43302193)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+17450268)*1+lsi)*1]), &(inteval->stack[((hsi*86625+43525108)*1+lsi)*1]), &(inteval->stack[((hsi*75075+43359943)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+43611733)*1+lsi)*1]), &(inteval->stack[((hsi*105105+17450268)*1+lsi)*1]), &(inteval->stack[((hsi*90090+43435018)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+17555373)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1451175)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1461625)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+17583588)*1+lsi)*1]), &(inteval->stack[((hsi*28215+17555373)*1+lsi)*1]), &(inteval->stack[((hsi*25245+17314143)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+43731853)*1+lsi)*1]), &(inteval->stack[((hsi*50490+17583588)*1+lsi)*1]), &(inteval->stack[((hsi*44880+17339388)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+17634078)*1+lsi)*1]), &(inteval->stack[((hsi*74800+43731853)*1+lsi)*1]), &(inteval->stack[((hsi*66000+17384268)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+43806653)*1+lsi)*1]), &(inteval->stack[((hsi*99000+17634078)*1+lsi)*1]), &(inteval->stack[((hsi*86625+43525108)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+17733078)*1+lsi)*1]), &(inteval->stack[((hsi*121275+43806653)*1+lsi)*1]), &(inteval->stack[((hsi*105105+17450268)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+43927928)*1+lsi)*1]), &(inteval->stack[((hsi*140140+17733078)*1+lsi)*1]), &(inteval->stack[((hsi*120120+43611733)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+17873218)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1439625)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1451175)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+17904568)*1+lsi)*1]), &(inteval->stack[((hsi*31350+17873218)*1+lsi)*1]), &(inteval->stack[((hsi*28215+17555373)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+44082368)*1+lsi)*1]), &(inteval->stack[((hsi*56430+17904568)*1+lsi)*1]), &(inteval->stack[((hsi*50490+17583588)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+17960998)*1+lsi)*1]), &(inteval->stack[((hsi*84150+44082368)*1+lsi)*1]), &(inteval->stack[((hsi*74800+43731853)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+44166518)*1+lsi)*1]), &(inteval->stack[((hsi*112200+17960998)*1+lsi)*1]), &(inteval->stack[((hsi*99000+17634078)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+18073198)*1+lsi)*1]), &(inteval->stack[((hsi*138600+44166518)*1+lsi)*1]), &(inteval->stack[((hsi*121275+43806653)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+44305118)*1+lsi)*1]), &(inteval->stack[((hsi*161700+18073198)*1+lsi)*1]), &(inteval->stack[((hsi*140140+17733078)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+18234898)*1+lsi)*1]), &(inteval->stack[((hsi*180180+44305118)*1+lsi)*1]), &(inteval->stack[((hsi*154440+43927928)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1504305)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1508595)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+44496188)*1+lsi)*1]), &(inteval->stack[((hsi*12870+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*10890+44485298)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+44517968)*1+lsi)*1]), &(inteval->stack[((hsi*25740+42955308)*1+lsi)*1]), &(inteval->stack[((hsi*21780+44496188)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+44554268)*1+lsi)*1]), &(inteval->stack[((hsi*42900+43028403)*1+lsi)*1]), &(inteval->stack[((hsi*36300+44517968)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+18427948)*1+lsi)*1]), &(inteval->stack[((hsi*64350+43175803)*1+lsi)*1]), &(inteval->stack[((hsi*54450+44554268)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*90090+43435018)*1+lsi)*1]), &(inteval->stack[((hsi*76230+18427948)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+18427948)*1+lsi)*1]), &(inteval->stack[((hsi*120120+43611733)*1+lsi)*1]), &(inteval->stack[((hsi*101640+44485298)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*154440+43927928)*1+lsi)*1]), &(inteval->stack[((hsi*130680+18427948)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+18427948)*1+lsi)*1]), &(inteval->stack[((hsi*193050+18234898)*1+lsi)*1]), &(inteval->stack[((hsi*163350+44485298)*1+lsi)*1]),55);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*34650+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*12705+1426920)*1+lsi)*1]), &(inteval->stack[((hsi*11550+1439625)*1+lsi)*1]),55);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*62700+44519948)*1+lsi)*1]), &(inteval->stack[((hsi*34650+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*31350+17873218)*1+lsi)*1]),55);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*94050+44582648)*1+lsi)*1]), &(inteval->stack[((hsi*62700+44519948)*1+lsi)*1]), &(inteval->stack[((hsi*56430+17904568)*1+lsi)*1]),55);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*126225+44676698)*1+lsi)*1]), &(inteval->stack[((hsi*94050+44582648)*1+lsi)*1]), &(inteval->stack[((hsi*84150+44082368)*1+lsi)*1]),55);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*157080+18627598)*1+lsi)*1]), &(inteval->stack[((hsi*126225+44676698)*1+lsi)*1]), &(inteval->stack[((hsi*112200+17960998)*1+lsi)*1]),55);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*184800+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*157080+18627598)*1+lsi)*1]), &(inteval->stack[((hsi*138600+44166518)*1+lsi)*1]),55);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*207900+44670098)*1+lsi)*1]), &(inteval->stack[((hsi*184800+44485298)*1+lsi)*1]), &(inteval->stack[((hsi*161700+18073198)*1+lsi)*1]),55);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*225225+18627598)*1+lsi)*1]), &(inteval->stack[((hsi*207900+44670098)*1+lsi)*1]), &(inteval->stack[((hsi*180180+44305118)*1+lsi)*1]),55);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*235950+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*225225+18627598)*1+lsi)*1]), &(inteval->stack[((hsi*193050+18234898)*1+lsi)*1]),55);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*239580+43163373)*1+lsi)*1]), &(inteval->stack[((hsi*235950+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*199650+18427948)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*718740+43402953)*1+lsi)*1]), &(inteval->stack[((hsi*287496+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*239580+43163373)*1+lsi)*1]),4356);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1437480+17314143)*1+lsi)*1]), &(inteval->stack[((hsi*862488+12920589)*1+lsi)*1]), &(inteval->stack[((hsi*718740+43402953)*1+lsi)*1]),4356);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*2395800+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*1724976+15589167)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+17314143)*1+lsi)*1]),4356);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*3593700+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*2874960+20541939)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+42927423)*1+lsi)*1]),4356);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*5031180+67473483)*1+lsi)*1]), &(inteval->stack[((hsi*4312440+30565095)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+15560325)*1+lsi)*1]),4356);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*6708240+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*6037416+23416899)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+67473483)*1+lsi)*1]),4356);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*8624880+22268565)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+34877535)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+15560325)*1+lsi)*1]),4356);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*40014+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*15561+225036)*1+lsi)*1]), &(inteval->stack[((hsi*13338+240597)*1+lsi)*1]),171);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*46683+15600339)*1+lsi)*1]), &(inteval->stack[((hsi*17955+207081)*1+lsi)*1]), &(inteval->stack[((hsi*15561+225036)*1+lsi)*1]),171);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*80028+15647022)*1+lsi)*1]), &(inteval->stack[((hsi*46683+15600339)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15560325)*1+lsi)*1]),171);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*53865+15727050)*1+lsi)*1]), &(inteval->stack[((hsi*20520+186561)*1+lsi)*1]), &(inteval->stack[((hsi*17955+207081)*1+lsi)*1]),171);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*93366+15780915)*1+lsi)*1]), &(inteval->stack[((hsi*53865+15727050)*1+lsi)*1]), &(inteval->stack[((hsi*46683+15600339)*1+lsi)*1]),171);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*133380+15874281)*1+lsi)*1]), &(inteval->stack[((hsi*93366+15780915)*1+lsi)*1]), &(inteval->stack[((hsi*80028+15647022)*1+lsi)*1]),171);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*61560+16007661)*1+lsi)*1]), &(inteval->stack[((hsi*23256+163305)*1+lsi)*1]), &(inteval->stack[((hsi*20520+186561)*1+lsi)*1]),171);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*107730+16069221)*1+lsi)*1]), &(inteval->stack[((hsi*61560+16007661)*1+lsi)*1]), &(inteval->stack[((hsi*53865+15727050)*1+lsi)*1]),171);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*155610+16176951)*1+lsi)*1]), &(inteval->stack[((hsi*107730+16069221)*1+lsi)*1]), &(inteval->stack[((hsi*93366+15780915)*1+lsi)*1]),171);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*200070+16332561)*1+lsi)*1]), &(inteval->stack[((hsi*155610+16176951)*1+lsi)*1]), &(inteval->stack[((hsi*133380+15874281)*1+lsi)*1]),171);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*69768+16532631)*1+lsi)*1]), &(inteval->stack[((hsi*26163+137142)*1+lsi)*1]), &(inteval->stack[((hsi*23256+163305)*1+lsi)*1]),171);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*123120+16602399)*1+lsi)*1]), &(inteval->stack[((hsi*69768+16532631)*1+lsi)*1]), &(inteval->stack[((hsi*61560+16007661)*1+lsi)*1]),171);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*179550+16725519)*1+lsi)*1]), &(inteval->stack[((hsi*123120+16602399)*1+lsi)*1]), &(inteval->stack[((hsi*107730+16069221)*1+lsi)*1]),171);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*233415+16905069)*1+lsi)*1]), &(inteval->stack[((hsi*179550+16725519)*1+lsi)*1]), &(inteval->stack[((hsi*155610+16176951)*1+lsi)*1]),171);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*280098+17138484)*1+lsi)*1]), &(inteval->stack[((hsi*233415+16905069)*1+lsi)*1]), &(inteval->stack[((hsi*200070+16332561)*1+lsi)*1]),171);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*78489+17418582)*1+lsi)*1]), &(inteval->stack[((hsi*29241+107901)*1+lsi)*1]), &(inteval->stack[((hsi*26163+137142)*1+lsi)*1]),171);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*139536+17497071)*1+lsi)*1]), &(inteval->stack[((hsi*78489+17418582)*1+lsi)*1]), &(inteval->stack[((hsi*69768+16532631)*1+lsi)*1]),171);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*205200+17636607)*1+lsi)*1]), &(inteval->stack[((hsi*139536+17497071)*1+lsi)*1]), &(inteval->stack[((hsi*123120+16602399)*1+lsi)*1]),171);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*269325+17841807)*1+lsi)*1]), &(inteval->stack[((hsi*205200+17636607)*1+lsi)*1]), &(inteval->stack[((hsi*179550+16725519)*1+lsi)*1]),171);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*326781+18111132)*1+lsi)*1]), &(inteval->stack[((hsi*269325+17841807)*1+lsi)*1]), &(inteval->stack[((hsi*233415+16905069)*1+lsi)*1]),171);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*373464+30893445)*1+lsi)*1]), &(inteval->stack[((hsi*326781+18111132)*1+lsi)*1]), &(inteval->stack[((hsi*280098+17138484)*1+lsi)*1]),171);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*87723+18437913)*1+lsi)*1]), &(inteval->stack[((hsi*32490+75411)*1+lsi)*1]), &(inteval->stack[((hsi*29241+107901)*1+lsi)*1]),171);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*156978+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*87723+18437913)*1+lsi)*1]), &(inteval->stack[((hsi*78489+17418582)*1+lsi)*1]),171);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*232560+18525636)*1+lsi)*1]), &(inteval->stack[((hsi*156978+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*139536+17497071)*1+lsi)*1]),171);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*307800+31266909)*1+lsi)*1]), &(inteval->stack[((hsi*232560+18525636)*1+lsi)*1]), &(inteval->stack[((hsi*205200+17636607)*1+lsi)*1]),171);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*377055+43084401)*1+lsi)*1]), &(inteval->stack[((hsi*307800+31266909)*1+lsi)*1]), &(inteval->stack[((hsi*269325+17841807)*1+lsi)*1]),171);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*435708+18758196)*1+lsi)*1]), &(inteval->stack[((hsi*377055+43084401)*1+lsi)*1]), &(inteval->stack[((hsi*326781+18111132)*1+lsi)*1]),171);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*480168+31574709)*1+lsi)*1]), &(inteval->stack[((hsi*435708+18758196)*1+lsi)*1]), &(inteval->stack[((hsi*373464+30893445)*1+lsi)*1]),171);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*97470+43461456)*1+lsi)*1]), &(inteval->stack[((hsi*35910+39501)*1+lsi)*1]), &(inteval->stack[((hsi*32490+75411)*1+lsi)*1]),171);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*175446+43558926)*1+lsi)*1]), &(inteval->stack[((hsi*97470+43461456)*1+lsi)*1]), &(inteval->stack[((hsi*87723+18437913)*1+lsi)*1]),171);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*261630+19193904)*1+lsi)*1]), &(inteval->stack[((hsi*175446+43558926)*1+lsi)*1]), &(inteval->stack[((hsi*156978+42927423)*1+lsi)*1]),171);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*348840+43734372)*1+lsi)*1]), &(inteval->stack[((hsi*261630+19193904)*1+lsi)*1]), &(inteval->stack[((hsi*232560+18525636)*1+lsi)*1]),171);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*430920+32054877)*1+lsi)*1]), &(inteval->stack[((hsi*348840+43734372)*1+lsi)*1]), &(inteval->stack[((hsi*307800+31266909)*1+lsi)*1]),171);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*502740+19455534)*1+lsi)*1]), &(inteval->stack[((hsi*430920+32054877)*1+lsi)*1]), &(inteval->stack[((hsi*377055+43084401)*1+lsi)*1]),171);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*560196+44083212)*1+lsi)*1]), &(inteval->stack[((hsi*502740+19455534)*1+lsi)*1]), &(inteval->stack[((hsi*435708+18758196)*1+lsi)*1]),171);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*600210+32485797)*1+lsi)*1]), &(inteval->stack[((hsi*560196+44083212)*1+lsi)*1]), &(inteval->stack[((hsi*480168+31574709)*1+lsi)*1]),171);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*33858+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*13338+240597)*1+lsi)*1]), &(inteval->stack[((hsi*11286+253935)*1+lsi)*1]),171);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*67716+19992132)*1+lsi)*1]), &(inteval->stack[((hsi*40014+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*33858+19958274)*1+lsi)*1]),171);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*112860+20059848)*1+lsi)*1]), &(inteval->stack[((hsi*80028+15647022)*1+lsi)*1]), &(inteval->stack[((hsi*67716+19992132)*1+lsi)*1]),171);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*169290+20172708)*1+lsi)*1]), &(inteval->stack[((hsi*133380+15874281)*1+lsi)*1]), &(inteval->stack[((hsi*112860+20059848)*1+lsi)*1]),171);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*237006+44643408)*1+lsi)*1]), &(inteval->stack[((hsi*200070+16332561)*1+lsi)*1]), &(inteval->stack[((hsi*169290+20172708)*1+lsi)*1]),171);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*316008+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*280098+17138484)*1+lsi)*1]), &(inteval->stack[((hsi*237006+44643408)*1+lsi)*1]),171);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*406296+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*373464+30893445)*1+lsi)*1]), &(inteval->stack[((hsi*316008+19958274)*1+lsi)*1]),171);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*507870+15966621)*1+lsi)*1]), &(inteval->stack[((hsi*480168+31574709)*1+lsi)*1]), &(inteval->stack[((hsi*406296+15560325)*1+lsi)*1]),171);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*620730+16474491)*1+lsi)*1]), &(inteval->stack[((hsi*600210+32485797)*1+lsi)*1]), &(inteval->stack[((hsi*507870+15966621)*1+lsi)*1]),171);
HRRPart1bra0ket0pmp(inteval, &(inteval->stack[((hsi*107730+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*39501+0)*1+lsi)*1]), &(inteval->stack[((hsi*35910+39501)*1+lsi)*1]),171);
HRRPart1bra0ket0pld(inteval, &(inteval->stack[((hsi*194940+20066004)*1+lsi)*1]), &(inteval->stack[((hsi*107730+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*97470+43461456)*1+lsi)*1]),171);
HRRPart1bra0ket0pkf(inteval, &(inteval->stack[((hsi*292410+17095221)*1+lsi)*1]), &(inteval->stack[((hsi*194940+20066004)*1+lsi)*1]), &(inteval->stack[((hsi*175446+43558926)*1+lsi)*1]),171);
HRRPart1bra0ket0pig(inteval, &(inteval->stack[((hsi*392445+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*292410+17095221)*1+lsi)*1]), &(inteval->stack[((hsi*261630+19193904)*1+lsi)*1]),171);
HRRPart1bra0ket0phh(inteval, &(inteval->stack[((hsi*488376+17095221)*1+lsi)*1]), &(inteval->stack[((hsi*392445+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*348840+43734372)*1+lsi)*1]),171);
HRRPart1bra0ket0pgi(inteval, &(inteval->stack[((hsi*574560+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*488376+17095221)*1+lsi)*1]), &(inteval->stack[((hsi*430920+32054877)*1+lsi)*1]),171);
HRRPart1bra0ket0pfk(inteval, &(inteval->stack[((hsi*646380+17095221)*1+lsi)*1]), &(inteval->stack[((hsi*574560+19958274)*1+lsi)*1]), &(inteval->stack[((hsi*502740+19455534)*1+lsi)*1]),171);
HRRPart1bra0ket0pdl(inteval, &(inteval->stack[((hsi*700245+17741601)*1+lsi)*1]), &(inteval->stack[((hsi*646380+17095221)*1+lsi)*1]), &(inteval->stack[((hsi*560196+44083212)*1+lsi)*1]),171);
HRRPart1bra0ket0ppm(inteval, &(inteval->stack[((hsi*733590+18441846)*1+lsi)*1]), &(inteval->stack[((hsi*700245+17741601)*1+lsi)*1]), &(inteval->stack[((hsi*600210+32485797)*1+lsi)*1]),171);
HRRPart1bra0ket0psps(inteval, &(inteval->stack[((hsi*744876+30893445)*1+lsi)*1]), &(inteval->stack[((hsi*733590+18441846)*1+lsi)*1]), &(inteval->stack[((hsi*620730+16474491)*1+lsi)*1]),171);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*1999404+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*744876+30893445)*1+lsi)*1]), &(inteval->stack[((hsi*666468+265221)*1+lsi)*1]),4356);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*3554496+17559729)*1+lsi)*1]), &(inteval->stack[((hsi*1999404+15560325)*1+lsi)*1]), &(inteval->stack[((hsi*1777248+13783077)*1+lsi)*1]),4356);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*5227200+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*3554496+17559729)*1+lsi)*1]), &(inteval->stack[((hsi*3136320+46682295)*1+lsi)*1]),4356);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*6860700+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*5227200+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+49818615)*1+lsi)*1]),4356);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*8324316+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*6860700+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+54392415)*1+lsi)*1]),4356);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*9513504+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*8324316+12293325)*1+lsi)*1]), &(inteval->stack[((hsi*7135128+60338355)*1+lsi)*1]),4356);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*10349856+52440927)*1+lsi)*1]), &(inteval->stack[((hsi*9513504+42927423)*1+lsi)*1]), &(inteval->stack[((hsi*8049888+34877535)*1+lsi)*1]),4356);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*10781100+1512225)*1+lsi)*1]), &(inteval->stack[((hsi*10349856+52440927)*1+lsi)*1]), &(inteval->stack[((hsi*8624880+22268565)*1+lsi)*1]),4356);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10781100+1512225)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
