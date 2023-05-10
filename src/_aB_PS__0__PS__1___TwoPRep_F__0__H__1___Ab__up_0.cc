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
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,202640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*7098+144974)*1+lsi)*1]), &(inteval->stack[((hsi*6084+152072)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1135652)*1+lsi)*1]), &(inteval->stack[((hsi*8190+136784)*1+lsi)*1]), &(inteval->stack[((hsi*7098+144974)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1156946)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1135652)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1117400)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1193450)*1+lsi)*1]), &(inteval->stack[((hsi*9360+127424)*1+lsi)*1]), &(inteval->stack[((hsi*8190+136784)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1218020)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1193450)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1135652)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1260608)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1218020)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1156946)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1135652)*1+lsi)*1]), &(inteval->stack[((hsi*6084+152072)*1+lsi)*1]), &(inteval->stack[((hsi*5148+158156)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1321448)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1135652)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1352336)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1156946)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1321448)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1403816)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1260608)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1352336)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1321448)*1+lsi)*1]), &(inteval->stack[((hsi*10608+116816)*1+lsi)*1]), &(inteval->stack[((hsi*9360+127424)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1321448)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1193450)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1321448)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1218020)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1321448)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1260608)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1208660)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1403816)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*8281+95431)*1+lsi)*1]), &(inteval->stack[((hsi*7098+103712)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1138694)*1+lsi)*1]), &(inteval->stack[((hsi*9555+85876)*1+lsi)*1]), &(inteval->stack[((hsi*8281+95431)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+116816)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1138694)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1117400)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1163537)*1+lsi)*1]), &(inteval->stack[((hsi*10920+74956)*1+lsi)*1]), &(inteval->stack[((hsi*9555+85876)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1316768)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1163537)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1138694)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1366454)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1316768)*1+lsi)*1]), &(inteval->stack[((hsi*42588+116816)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1138694)*1+lsi)*1]), &(inteval->stack[((hsi*7098+103712)*1+lsi)*1]), &(inteval->stack[((hsi*6006+110810)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1437434)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1138694)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1473470)*1+lsi)*1]), &(inteval->stack[((hsi*42588+116816)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1437434)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1533530)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1366454)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1473470)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1437434)*1+lsi)*1]), &(inteval->stack[((hsi*12376+62580)*1+lsi)*1]), &(inteval->stack[((hsi*10920+74956)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+62580)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1437434)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1163537)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1437434)*1+lsi)*1]), &(inteval->stack[((hsi*57330+62580)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1316768)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+1623620)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1437434)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1366454)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1316768)*1+lsi)*1]), &(inteval->stack[((hsi*106470+1623620)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1533530)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*324324+1442894)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1316768)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1208660)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+62580)*1+lsi)*1]), &(inteval->stack[((hsi*6006+187130)*1+lsi)*1]), &(inteval->stack[((hsi*5148+193136)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*6930+180200)*1+lsi)*1]), &(inteval->stack[((hsi*6006+187130)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+78024)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*15444+62580)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1135418)*1+lsi)*1]), &(inteval->stack[((hsi*7920+172280)*1+lsi)*1]), &(inteval->stack[((hsi*6930+180200)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+108912)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1135418)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1117400)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1156208)*1+lsi)*1]), &(inteval->stack[((hsi*36036+108912)*1+lsi)*1]), &(inteval->stack[((hsi*30888+78024)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+144948)*1+lsi)*1]), &(inteval->stack[((hsi*5148+193136)*1+lsi)*1]), &(inteval->stack[((hsi*4356+198284)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*15444+62580)*1+lsi)*1]), &(inteval->stack[((hsi*13068+144948)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1793354)*1+lsi)*1]), &(inteval->stack[((hsi*30888+78024)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1767218)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1836914)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1156208)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1793354)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*8976+163304)*1+lsi)*1]), &(inteval->stack[((hsi*7920+172280)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+144948)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1135418)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*41580+144948)*1+lsi)*1]), &(inteval->stack[((hsi*36036+108912)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+62580)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1156208)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1902254)*1+lsi)*1]), &(inteval->stack[((hsi*77220+62580)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1836914)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*274428+1993730)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1208660)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1902254)*1+lsi)*1]),1386);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*548856+2268158)*1+lsi)*1]), &(inteval->stack[((hsi*324324+1442894)*1+lsi)*1]), &(inteval->stack[((hsi*274428+1993730)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*9555+37905)*1+lsi)*1]), &(inteval->stack[((hsi*8190+47460)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1791788)*1+lsi)*1]), &(inteval->stack[((hsi*11025+26880)*1+lsi)*1]), &(inteval->stack[((hsi*9555+37905)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1820453)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1791788)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1767218)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1869593)*1+lsi)*1]), &(inteval->stack[((hsi*12600+14280)*1+lsi)*1]), &(inteval->stack[((hsi*11025+26880)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1902668)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1869593)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1791788)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+1959998)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1902668)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1820453)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+2041898)*1+lsi)*1]), &(inteval->stack[((hsi*8190+47460)*1+lsi)*1]), &(inteval->stack[((hsi*6930+55650)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+2062688)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*20790+2041898)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1820453)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2062688)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+2041898)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1959998)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1117400)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*14280+0)*1+lsi)*1]), &(inteval->stack[((hsi*12600+14280)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+0)*1+lsi)*1]), &(inteval->stack[((hsi*37800+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1869593)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*66150+0)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1902668)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+0)*1+lsi)*1]), &(inteval->stack[((hsi*95550+1117400)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1959998)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*122850+0)*1+lsi)*1]), &(inteval->stack[((hsi*103950+2041898)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*378378+2817014)*1+lsi)*1]), &(inteval->stack[((hsi*145530+1767218)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1316768)*1+lsi)*1]),1386);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*648648+3195392)*1+lsi)*1]), &(inteval->stack[((hsi*378378+2817014)*1+lsi)*1]), &(inteval->stack[((hsi*324324+1442894)*1+lsi)*1]),1386);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*914760+202640)*1+lsi)*1]), &(inteval->stack[((hsi*648648+3195392)*1+lsi)*1]), &(inteval->stack[((hsi*548856+2268158)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*914760+202640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
