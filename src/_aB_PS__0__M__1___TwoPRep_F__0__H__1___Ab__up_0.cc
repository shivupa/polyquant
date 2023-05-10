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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,175100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+937400)*1+lsi)*1]), &(inteval->stack[((hsi*6084+125588)*1+lsi)*1]), &(inteval->stack[((hsi*5148+131672)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+952844)*1+lsi)*1]), &(inteval->stack[((hsi*7098+118490)*1+lsi)*1]), &(inteval->stack[((hsi*6084+125588)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+971096)*1+lsi)*1]), &(inteval->stack[((hsi*18252+952844)*1+lsi)*1]), &(inteval->stack[((hsi*15444+937400)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1001984)*1+lsi)*1]), &(inteval->stack[((hsi*8190+110300)*1+lsi)*1]), &(inteval->stack[((hsi*7098+118490)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1023278)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1001984)*1+lsi)*1]), &(inteval->stack[((hsi*18252+952844)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1059782)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1023278)*1+lsi)*1]), &(inteval->stack[((hsi*30888+971096)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+952844)*1+lsi)*1]), &(inteval->stack[((hsi*5148+131672)*1+lsi)*1]), &(inteval->stack[((hsi*4290+136820)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1111262)*1+lsi)*1]), &(inteval->stack[((hsi*15444+937400)*1+lsi)*1]), &(inteval->stack[((hsi*12870+952844)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1137002)*1+lsi)*1]), &(inteval->stack[((hsi*30888+971096)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1111262)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+937400)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1059782)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1137002)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1111262)*1+lsi)*1]), &(inteval->stack[((hsi*9360+100940)*1+lsi)*1]), &(inteval->stack[((hsi*8190+110300)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1135832)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1111262)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1001984)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1178420)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1135832)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1023278)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1239260)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1178420)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1059782)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+1001750)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1239260)*1+lsi)*1]), &(inteval->stack[((hsi*64350+937400)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+937400)*1+lsi)*1]), &(inteval->stack[((hsi*7098+82831)*1+lsi)*1]), &(inteval->stack[((hsi*6006+89929)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+955418)*1+lsi)*1]), &(inteval->stack[((hsi*8281+74550)*1+lsi)*1]), &(inteval->stack[((hsi*7098+82831)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+100940)*1+lsi)*1]), &(inteval->stack[((hsi*21294+955418)*1+lsi)*1]), &(inteval->stack[((hsi*18018+937400)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+976712)*1+lsi)*1]), &(inteval->stack[((hsi*9555+64995)*1+lsi)*1]), &(inteval->stack[((hsi*8281+74550)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1091840)*1+lsi)*1]), &(inteval->stack[((hsi*24843+976712)*1+lsi)*1]), &(inteval->stack[((hsi*21294+955418)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1134428)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1091840)*1+lsi)*1]), &(inteval->stack[((hsi*36036+100940)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+955418)*1+lsi)*1]), &(inteval->stack[((hsi*6006+89929)*1+lsi)*1]), &(inteval->stack[((hsi*5005+95935)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1194488)*1+lsi)*1]), &(inteval->stack[((hsi*18018+937400)*1+lsi)*1]), &(inteval->stack[((hsi*15015+955418)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1224518)*1+lsi)*1]), &(inteval->stack[((hsi*36036+100940)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1194488)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1274568)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1134428)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1224518)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1194488)*1+lsi)*1]), &(inteval->stack[((hsi*10920+54075)*1+lsi)*1]), &(inteval->stack[((hsi*9555+64995)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+54075)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1194488)*1+lsi)*1]), &(inteval->stack[((hsi*24843+976712)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1194488)*1+lsi)*1]), &(inteval->stack[((hsi*49686+54075)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1091840)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1349643)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1194488)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1134428)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+1091840)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1349643)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1274568)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*270270+1196945)*1+lsi)*1]), &(inteval->stack[((hsi*105105+1091840)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1001750)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+54075)*1+lsi)*1]), &(inteval->stack[((hsi*5148+161966)*1+lsi)*1]), &(inteval->stack[((hsi*4356+167114)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+67143)*1+lsi)*1]), &(inteval->stack[((hsi*6006+155960)*1+lsi)*1]), &(inteval->stack[((hsi*5148+161966)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+937400)*1+lsi)*1]), &(inteval->stack[((hsi*15444+67143)*1+lsi)*1]), &(inteval->stack[((hsi*13068+54075)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+82587)*1+lsi)*1]), &(inteval->stack[((hsi*6930+149030)*1+lsi)*1]), &(inteval->stack[((hsi*6006+155960)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+100605)*1+lsi)*1]), &(inteval->stack[((hsi*18018+82587)*1+lsi)*1]), &(inteval->stack[((hsi*15444+67143)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*30888+100605)*1+lsi)*1]), &(inteval->stack[((hsi*26136+937400)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+963536)*1+lsi)*1]), &(inteval->stack[((hsi*4356+167114)*1+lsi)*1]), &(inteval->stack[((hsi*3630+171470)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+974426)*1+lsi)*1]), &(inteval->stack[((hsi*13068+54075)*1+lsi)*1]), &(inteval->stack[((hsi*10890+963536)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1510775)*1+lsi)*1]), &(inteval->stack[((hsi*26136+937400)*1+lsi)*1]), &(inteval->stack[((hsi*21780+974426)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+937400)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1510775)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+54075)*1+lsi)*1]), &(inteval->stack[((hsi*7920+141110)*1+lsi)*1]), &(inteval->stack[((hsi*6930+149030)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+131493)*1+lsi)*1]), &(inteval->stack[((hsi*20790+54075)*1+lsi)*1]), &(inteval->stack[((hsi*18018+82587)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1510775)*1+lsi)*1]), &(inteval->stack[((hsi*36036+131493)*1+lsi)*1]), &(inteval->stack[((hsi*30888+100605)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+54075)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1510775)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1467215)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*65340+54075)*1+lsi)*1]), &(inteval->stack[((hsi*54450+937400)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*228690+1543445)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1001750)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1467215)*1+lsi)*1]),1155);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*457380+1772135)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1196945)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1543445)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*8190+33180)*1+lsi)*1]), &(inteval->stack[((hsi*6930+41370)*1+lsi)*1]),105);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1488005)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23625)*1+lsi)*1]), &(inteval->stack[((hsi*8190+33180)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1512575)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1488005)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1467215)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1554155)*1+lsi)*1]), &(inteval->stack[((hsi*11025+12600)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23625)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1582820)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1554155)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1488005)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+937400)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1582820)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1512575)*1+lsi)*1]),105);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+1631960)*1+lsi)*1]), &(inteval->stack[((hsi*6930+41370)*1+lsi)*1]), &(inteval->stack[((hsi*5775+48300)*1+lsi)*1]),105);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*34650+23625)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1631960)*1+lsi)*1]),105);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+1631960)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1512575)*1+lsi)*1]), &(inteval->stack[((hsi*34650+23625)*1+lsi)*1]),105);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+23625)*1+lsi)*1]), &(inteval->stack[((hsi*69300+937400)*1+lsi)*1]), &(inteval->stack[((hsi*57750+1631960)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1631960)*1+lsi)*1]), &(inteval->stack[((hsi*12600+0)*1+lsi)*1]), &(inteval->stack[((hsi*11025+12600)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+1665035)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1631960)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1554155)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*57330+1665035)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1582820)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1549115)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1467215)*1+lsi)*1]), &(inteval->stack[((hsi*69300+937400)*1+lsi)*1]),105);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*121275+937400)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1549115)*1+lsi)*1]), &(inteval->stack[((hsi*86625+23625)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*315315+2229515)*1+lsi)*1]), &(inteval->stack[((hsi*121275+937400)*1+lsi)*1]), &(inteval->stack[((hsi*105105+1091840)*1+lsi)*1]),1155);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*540540+2544830)*1+lsi)*1]), &(inteval->stack[((hsi*315315+2229515)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1196945)*1+lsi)*1]),1155);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*762300+175100)*1+lsi)*1]), &(inteval->stack[((hsi*540540+2544830)*1+lsi)*1]), &(inteval->stack[((hsi*457380+1772135)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*762300+175100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
