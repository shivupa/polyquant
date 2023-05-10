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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mp.h>
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
#include <_aB_M__0__M__1___TwoPRep_D__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_D__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,129549)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_D__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+637749)*1+lsi)*1]), &(inteval->stack[((hsi*5148+80610)*1+lsi)*1]), &(inteval->stack[((hsi*4356+85758)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+650817)*1+lsi)*1]), &(inteval->stack[((hsi*6006+74604)*1+lsi)*1]), &(inteval->stack[((hsi*5148+80610)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+666261)*1+lsi)*1]), &(inteval->stack[((hsi*15444+650817)*1+lsi)*1]), &(inteval->stack[((hsi*13068+637749)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+692397)*1+lsi)*1]), &(inteval->stack[((hsi*6930+67674)*1+lsi)*1]), &(inteval->stack[((hsi*6006+74604)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+710415)*1+lsi)*1]), &(inteval->stack[((hsi*18018+692397)*1+lsi)*1]), &(inteval->stack[((hsi*15444+650817)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+741303)*1+lsi)*1]), &(inteval->stack[((hsi*30888+710415)*1+lsi)*1]), &(inteval->stack[((hsi*26136+666261)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+784863)*1+lsi)*1]), &(inteval->stack[((hsi*7920+59754)*1+lsi)*1]), &(inteval->stack[((hsi*6930+67674)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+805653)*1+lsi)*1]), &(inteval->stack[((hsi*20790+784863)*1+lsi)*1]), &(inteval->stack[((hsi*18018+692397)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+841689)*1+lsi)*1]), &(inteval->stack[((hsi*36036+805653)*1+lsi)*1]), &(inteval->stack[((hsi*30888+710415)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+893169)*1+lsi)*1]), &(inteval->stack[((hsi*51480+841689)*1+lsi)*1]), &(inteval->stack[((hsi*43560+741303)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+692397)*1+lsi)*1]), &(inteval->stack[((hsi*4356+85758)*1+lsi)*1]), &(inteval->stack[((hsi*3630+90114)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+703287)*1+lsi)*1]), &(inteval->stack[((hsi*13068+637749)*1+lsi)*1]), &(inteval->stack[((hsi*10890+692397)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+958509)*1+lsi)*1]), &(inteval->stack[((hsi*26136+666261)*1+lsi)*1]), &(inteval->stack[((hsi*21780+703287)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+637749)*1+lsi)*1]), &(inteval->stack[((hsi*43560+741303)*1+lsi)*1]), &(inteval->stack[((hsi*36300+958509)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+692199)*1+lsi)*1]), &(inteval->stack[((hsi*65340+893169)*1+lsi)*1]), &(inteval->stack[((hsi*54450+637749)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+637749)*1+lsi)*1]), &(inteval->stack[((hsi*8976+50778)*1+lsi)*1]), &(inteval->stack[((hsi*7920+59754)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+50778)*1+lsi)*1]), &(inteval->stack[((hsi*23760+637749)*1+lsi)*1]), &(inteval->stack[((hsi*20790+784863)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+958509)*1+lsi)*1]), &(inteval->stack[((hsi*41580+50778)*1+lsi)*1]), &(inteval->stack[((hsi*36036+805653)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+1018569)*1+lsi)*1]), &(inteval->stack[((hsi*60060+958509)*1+lsi)*1]), &(inteval->stack[((hsi*51480+841689)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+768429)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1018569)*1+lsi)*1]), &(inteval->stack[((hsi*65340+893169)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+859905)*1+lsi)*1]), &(inteval->stack[((hsi*91476+768429)*1+lsi)*1]), &(inteval->stack[((hsi*76230+692199)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+637749)*1+lsi)*1]), &(inteval->stack[((hsi*4290+118604)*1+lsi)*1]), &(inteval->stack[((hsi*3630+122894)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+648639)*1+lsi)*1]), &(inteval->stack[((hsi*5005+113599)*1+lsi)*1]), &(inteval->stack[((hsi*4290+118604)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+661509)*1+lsi)*1]), &(inteval->stack[((hsi*12870+648639)*1+lsi)*1]), &(inteval->stack[((hsi*10890+637749)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+683289)*1+lsi)*1]), &(inteval->stack[((hsi*5775+107824)*1+lsi)*1]), &(inteval->stack[((hsi*5005+113599)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+698304)*1+lsi)*1]), &(inteval->stack[((hsi*15015+683289)*1+lsi)*1]), &(inteval->stack[((hsi*12870+648639)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+724044)*1+lsi)*1]), &(inteval->stack[((hsi*25740+698304)*1+lsi)*1]), &(inteval->stack[((hsi*21780+661509)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+760344)*1+lsi)*1]), &(inteval->stack[((hsi*6600+101224)*1+lsi)*1]), &(inteval->stack[((hsi*5775+107824)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+777669)*1+lsi)*1]), &(inteval->stack[((hsi*17325+760344)*1+lsi)*1]), &(inteval->stack[((hsi*15015+683289)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+807699)*1+lsi)*1]), &(inteval->stack[((hsi*30030+777669)*1+lsi)*1]), &(inteval->stack[((hsi*25740+698304)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+961545)*1+lsi)*1]), &(inteval->stack[((hsi*42900+807699)*1+lsi)*1]), &(inteval->stack[((hsi*36300+724044)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+50778)*1+lsi)*1]), &(inteval->stack[((hsi*3630+122894)*1+lsi)*1]), &(inteval->stack[((hsi*3025+126524)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+683289)*1+lsi)*1]), &(inteval->stack[((hsi*10890+637749)*1+lsi)*1]), &(inteval->stack[((hsi*9075+50778)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+50778)*1+lsi)*1]), &(inteval->stack[((hsi*21780+661509)*1+lsi)*1]), &(inteval->stack[((hsi*18150+683289)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+637749)*1+lsi)*1]), &(inteval->stack[((hsi*36300+724044)*1+lsi)*1]), &(inteval->stack[((hsi*30250+50778)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+683124)*1+lsi)*1]), &(inteval->stack[((hsi*54450+961545)*1+lsi)*1]), &(inteval->stack[((hsi*45375+637749)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+637749)*1+lsi)*1]), &(inteval->stack[((hsi*7480+93744)*1+lsi)*1]), &(inteval->stack[((hsi*6600+101224)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+50778)*1+lsi)*1]), &(inteval->stack[((hsi*19800+637749)*1+lsi)*1]), &(inteval->stack[((hsi*17325+760344)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+1015995)*1+lsi)*1]), &(inteval->stack[((hsi*34650+50778)*1+lsi)*1]), &(inteval->stack[((hsi*30030+777669)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+50778)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1015995)*1+lsi)*1]), &(inteval->stack[((hsi*42900+807699)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+746649)*1+lsi)*1]), &(inteval->stack[((hsi*64350+50778)*1+lsi)*1]), &(inteval->stack[((hsi*54450+961545)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+961545)*1+lsi)*1]), &(inteval->stack[((hsi*76230+746649)*1+lsi)*1]), &(inteval->stack[((hsi*63525+683124)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*254100+1046245)*1+lsi)*1]), &(inteval->stack[((hsi*101640+859905)*1+lsi)*1]), &(inteval->stack[((hsi*84700+961545)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+637749)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+653193)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+671445)*1+lsi)*1]), &(inteval->stack[((hsi*18252+653193)*1+lsi)*1]), &(inteval->stack[((hsi*15444+637749)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+702333)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+723627)*1+lsi)*1]), &(inteval->stack[((hsi*21294+702333)*1+lsi)*1]), &(inteval->stack[((hsi*18252+653193)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+760131)*1+lsi)*1]), &(inteval->stack[((hsi*36504+723627)*1+lsi)*1]), &(inteval->stack[((hsi*30888+671445)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+961545)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+50778)*1+lsi)*1]), &(inteval->stack[((hsi*24570+961545)*1+lsi)*1]), &(inteval->stack[((hsi*21294+702333)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1300345)*1+lsi)*1]), &(inteval->stack[((hsi*42588+50778)*1+lsi)*1]), &(inteval->stack[((hsi*36504+723627)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1361185)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1300345)*1+lsi)*1]), &(inteval->stack[((hsi*51480+760131)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+986115)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]), &(inteval->stack[((hsi*4290+46488)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+702333)*1+lsi)*1]), &(inteval->stack[((hsi*15444+637749)*1+lsi)*1]), &(inteval->stack[((hsi*12870+986115)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+986115)*1+lsi)*1]), &(inteval->stack[((hsi*30888+671445)*1+lsi)*1]), &(inteval->stack[((hsi*25740+702333)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+637749)*1+lsi)*1]), &(inteval->stack[((hsi*51480+760131)*1+lsi)*1]), &(inteval->stack[((hsi*42900+986115)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+702099)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1361185)*1+lsi)*1]), &(inteval->stack[((hsi*64350+637749)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+792189)*1+lsi)*1]), &(inteval->stack[((hsi*10608+0)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+637749)*1+lsi)*1]), &(inteval->stack[((hsi*28080+792189)*1+lsi)*1]), &(inteval->stack[((hsi*24570+961545)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+961545)*1+lsi)*1]), &(inteval->stack[((hsi*49140+637749)*1+lsi)*1]), &(inteval->stack[((hsi*42588+50778)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+0)*1+lsi)*1]), &(inteval->stack[((hsi*70980+961545)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1300345)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1438405)*1+lsi)*1]), &(inteval->stack[((hsi*91260+0)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1361185)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+1300345)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1438405)*1+lsi)*1]), &(inteval->stack[((hsi*90090+702099)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*304920+1420465)*1+lsi)*1]), &(inteval->stack[((hsi*120120+1300345)*1+lsi)*1]), &(inteval->stack[((hsi*101640+859905)*1+lsi)*1]),1540);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*508200+129549)*1+lsi)*1]), &(inteval->stack[((hsi*304920+1420465)*1+lsi)*1]), &(inteval->stack[((hsi*254100+1046245)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*508200+129549)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
