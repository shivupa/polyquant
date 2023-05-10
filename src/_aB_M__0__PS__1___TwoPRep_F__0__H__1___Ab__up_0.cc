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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
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
#include <_aB_M__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,172840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+935140)*1+lsi)*1]), &(inteval->stack[((hsi*6006+124550)*1+lsi)*1]), &(inteval->stack[((hsi*5148+130556)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+950584)*1+lsi)*1]), &(inteval->stack[((hsi*6930+117620)*1+lsi)*1]), &(inteval->stack[((hsi*6006+124550)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+968602)*1+lsi)*1]), &(inteval->stack[((hsi*18018+950584)*1+lsi)*1]), &(inteval->stack[((hsi*15444+935140)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+999490)*1+lsi)*1]), &(inteval->stack[((hsi*7920+109700)*1+lsi)*1]), &(inteval->stack[((hsi*6930+117620)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1020280)*1+lsi)*1]), &(inteval->stack[((hsi*20790+999490)*1+lsi)*1]), &(inteval->stack[((hsi*18018+950584)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1056316)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1020280)*1+lsi)*1]), &(inteval->stack[((hsi*30888+968602)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+950584)*1+lsi)*1]), &(inteval->stack[((hsi*5148+130556)*1+lsi)*1]), &(inteval->stack[((hsi*4356+135704)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1107796)*1+lsi)*1]), &(inteval->stack[((hsi*15444+935140)*1+lsi)*1]), &(inteval->stack[((hsi*13068+950584)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1133932)*1+lsi)*1]), &(inteval->stack[((hsi*30888+968602)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1107796)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1177492)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1056316)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1133932)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1107796)*1+lsi)*1]), &(inteval->stack[((hsi*8976+100724)*1+lsi)*1]), &(inteval->stack[((hsi*7920+109700)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+935140)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1107796)*1+lsi)*1]), &(inteval->stack[((hsi*20790+999490)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+1107796)*1+lsi)*1]), &(inteval->stack[((hsi*41580+935140)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1020280)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+935140)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1107796)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1056316)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1012360)*1+lsi)*1]), &(inteval->stack[((hsi*77220+935140)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1177492)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+935140)*1+lsi)*1]), &(inteval->stack[((hsi*7098+82394)*1+lsi)*1]), &(inteval->stack[((hsi*6084+89492)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+953392)*1+lsi)*1]), &(inteval->stack[((hsi*8190+74204)*1+lsi)*1]), &(inteval->stack[((hsi*7098+82394)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+100724)*1+lsi)*1]), &(inteval->stack[((hsi*21294+953392)*1+lsi)*1]), &(inteval->stack[((hsi*18252+935140)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+974686)*1+lsi)*1]), &(inteval->stack[((hsi*9360+64844)*1+lsi)*1]), &(inteval->stack[((hsi*8190+74204)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1103836)*1+lsi)*1]), &(inteval->stack[((hsi*24570+974686)*1+lsi)*1]), &(inteval->stack[((hsi*21294+953392)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1146424)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1103836)*1+lsi)*1]), &(inteval->stack[((hsi*36504+100724)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+953392)*1+lsi)*1]), &(inteval->stack[((hsi*6084+89492)*1+lsi)*1]), &(inteval->stack[((hsi*5148+95576)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1207264)*1+lsi)*1]), &(inteval->stack[((hsi*18252+935140)*1+lsi)*1]), &(inteval->stack[((hsi*15444+953392)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1238152)*1+lsi)*1]), &(inteval->stack[((hsi*36504+100724)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1207264)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1289632)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1146424)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1238152)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1207264)*1+lsi)*1]), &(inteval->stack[((hsi*10608+54236)*1+lsi)*1]), &(inteval->stack[((hsi*9360+64844)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+54236)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1207264)*1+lsi)*1]), &(inteval->stack[((hsi*24570+974686)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1207264)*1+lsi)*1]), &(inteval->stack[((hsi*49140+54236)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1103836)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+1366852)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1207264)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1146424)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1103836)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1366852)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1289632)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*274428+1211944)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1103836)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1012360)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+54236)*1+lsi)*1]), &(inteval->stack[((hsi*5005+159915)*1+lsi)*1]), &(inteval->stack[((hsi*4290+164920)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+935140)*1+lsi)*1]), &(inteval->stack[((hsi*5775+154140)*1+lsi)*1]), &(inteval->stack[((hsi*5005+159915)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+67106)*1+lsi)*1]), &(inteval->stack[((hsi*15015+935140)*1+lsi)*1]), &(inteval->stack[((hsi*12870+54236)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+950155)*1+lsi)*1]), &(inteval->stack[((hsi*6600+147540)*1+lsi)*1]), &(inteval->stack[((hsi*5775+154140)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+92846)*1+lsi)*1]), &(inteval->stack[((hsi*17325+950155)*1+lsi)*1]), &(inteval->stack[((hsi*15015+935140)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+967480)*1+lsi)*1]), &(inteval->stack[((hsi*30030+92846)*1+lsi)*1]), &(inteval->stack[((hsi*25740+67106)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+122876)*1+lsi)*1]), &(inteval->stack[((hsi*4290+164920)*1+lsi)*1]), &(inteval->stack[((hsi*3630+169210)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*12870+54236)*1+lsi)*1]), &(inteval->stack[((hsi*10890+122876)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1508152)*1+lsi)*1]), &(inteval->stack[((hsi*25740+67106)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1486372)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+1544452)*1+lsi)*1]), &(inteval->stack[((hsi*42900+967480)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1508152)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*7480+140060)*1+lsi)*1]), &(inteval->stack[((hsi*6600+147540)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+122876)*1+lsi)*1]), &(inteval->stack[((hsi*19800+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*17325+950155)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*34650+122876)*1+lsi)*1]), &(inteval->stack[((hsi*30030+92846)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+54236)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*42900+967480)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+935140)*1+lsi)*1]), &(inteval->stack[((hsi*64350+54236)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1544452)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*228690+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1012360)*1+lsi)*1]), &(inteval->stack[((hsi*76230+935140)*1+lsi)*1]),1386);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*457380+1715062)*1+lsi)*1]), &(inteval->stack[((hsi*274428+1211944)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1486372)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*8281+32851)*1+lsi)*1]), &(inteval->stack[((hsi*7098+41132)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1507666)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23296)*1+lsi)*1]), &(inteval->stack[((hsi*8281+32851)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1532509)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1507666)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1486372)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+935140)*1+lsi)*1]), &(inteval->stack[((hsi*10920+12376)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23296)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+963805)*1+lsi)*1]), &(inteval->stack[((hsi*28665+935140)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1507666)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1575097)*1+lsi)*1]), &(inteval->stack[((hsi*49686+963805)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1532509)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+54236)*1+lsi)*1]), &(inteval->stack[((hsi*7098+41132)*1+lsi)*1]), &(inteval->stack[((hsi*6006+48230)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+72254)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*18018+54236)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1013491)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1532509)*1+lsi)*1]), &(inteval->stack[((hsi*36036+72254)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+23296)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1575097)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1013491)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1013491)*1+lsi)*1]), &(inteval->stack[((hsi*12376+0)*1+lsi)*1]), &(inteval->stack[((hsi*10920+12376)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1013491)*1+lsi)*1]), &(inteval->stack[((hsi*28665+935140)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1013491)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*49686+963805)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+2172442)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1013491)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1575097)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2172442)*1+lsi)*1]), &(inteval->stack[((hsi*90090+23296)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*324324+2172442)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1486372)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1103836)*1+lsi)*1]),1386);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*548856+2496766)*1+lsi)*1]), &(inteval->stack[((hsi*324324+2172442)*1+lsi)*1]), &(inteval->stack[((hsi*274428+1211944)*1+lsi)*1]),1386);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*762300+172840)*1+lsi)*1]), &(inteval->stack[((hsi*548856+2496766)*1+lsi)*1]), &(inteval->stack[((hsi*457380+1715062)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*762300+172840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
