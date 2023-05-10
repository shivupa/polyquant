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
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_M__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,181700)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_G__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+998450)*1+lsi)*1]), &(inteval->stack[((hsi*6084+140108)*1+lsi)*1]), &(inteval->stack[((hsi*5148+146192)*1+lsi)*1]),78);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1013894)*1+lsi)*1]), &(inteval->stack[((hsi*7098+133010)*1+lsi)*1]), &(inteval->stack[((hsi*6084+140108)*1+lsi)*1]),78);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1032146)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1013894)*1+lsi)*1]), &(inteval->stack[((hsi*15444+998450)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1063034)*1+lsi)*1]), &(inteval->stack[((hsi*5148+146192)*1+lsi)*1]), &(inteval->stack[((hsi*4290+151340)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1075904)*1+lsi)*1]), &(inteval->stack[((hsi*15444+998450)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1063034)*1+lsi)*1]),78);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1101644)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1032146)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1075904)*1+lsi)*1]),78);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1063034)*1+lsi)*1]), &(inteval->stack[((hsi*8190+124820)*1+lsi)*1]), &(inteval->stack[((hsi*7098+133010)*1+lsi)*1]),78);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1144544)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1063034)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1013894)*1+lsi)*1]),78);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1181048)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1144544)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1032146)*1+lsi)*1]),78);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+998450)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1181048)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1101644)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+124820)*1+lsi)*1]), &(inteval->stack[((hsi*7098+106711)*1+lsi)*1]), &(inteval->stack[((hsi*6006+113809)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1062800)*1+lsi)*1]), &(inteval->stack[((hsi*8281+98430)*1+lsi)*1]), &(inteval->stack[((hsi*7098+106711)*1+lsi)*1]),91);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1084094)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1062800)*1+lsi)*1]), &(inteval->stack[((hsi*18018+124820)*1+lsi)*1]),91);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1120130)*1+lsi)*1]), &(inteval->stack[((hsi*6006+113809)*1+lsi)*1]), &(inteval->stack[((hsi*5005+119815)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1135145)*1+lsi)*1]), &(inteval->stack[((hsi*18018+124820)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1120130)*1+lsi)*1]),91);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1165175)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1084094)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1135145)*1+lsi)*1]),91);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+106711)*1+lsi)*1]), &(inteval->stack[((hsi*9555+88875)*1+lsi)*1]), &(inteval->stack[((hsi*8281+98430)*1+lsi)*1]),91);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1120130)*1+lsi)*1]), &(inteval->stack[((hsi*24843+106711)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1062800)*1+lsi)*1]),91);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+88875)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1120130)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1084094)*1+lsi)*1]),91);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1062800)*1+lsi)*1]), &(inteval->stack[((hsi*60060+88875)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1165175)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*193050+1137875)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1062800)*1+lsi)*1]), &(inteval->stack[((hsi*64350+998450)*1+lsi)*1]),825);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+88875)*1+lsi)*1]), &(inteval->stack[((hsi*8190+67980)*1+lsi)*1]), &(inteval->stack[((hsi*6930+76170)*1+lsi)*1]),105);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+109665)*1+lsi)*1]), &(inteval->stack[((hsi*9555+58425)*1+lsi)*1]), &(inteval->stack[((hsi*8190+67980)*1+lsi)*1]),105);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1330925)*1+lsi)*1]), &(inteval->stack[((hsi*24570+109665)*1+lsi)*1]), &(inteval->stack[((hsi*20790+88875)*1+lsi)*1]),105);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+134235)*1+lsi)*1]), &(inteval->stack[((hsi*6930+76170)*1+lsi)*1]), &(inteval->stack[((hsi*5775+83100)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+1372505)*1+lsi)*1]), &(inteval->stack[((hsi*20790+88875)*1+lsi)*1]), &(inteval->stack[((hsi*17325+134235)*1+lsi)*1]),105);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+1407155)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1330925)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1372505)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+67980)*1+lsi)*1]), &(inteval->stack[((hsi*11025+47400)*1+lsi)*1]), &(inteval->stack[((hsi*9555+58425)*1+lsi)*1]),105);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1464905)*1+lsi)*1]), &(inteval->stack[((hsi*28665+67980)*1+lsi)*1]), &(inteval->stack[((hsi*24570+109665)*1+lsi)*1]),105);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+47400)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1464905)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1330925)*1+lsi)*1]),105);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+1464905)*1+lsi)*1]), &(inteval->stack[((hsi*69300+47400)*1+lsi)*1]), &(inteval->stack[((hsi*57750+1407155)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*225225+1551530)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1464905)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1062800)*1+lsi)*1]),825);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*386100+1776755)*1+lsi)*1]), &(inteval->stack[((hsi*225225+1551530)*1+lsi)*1]), &(inteval->stack[((hsi*193050+1137875)*1+lsi)*1]),825);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+1330925)*1+lsi)*1]), &(inteval->stack[((hsi*5148+168566)*1+lsi)*1]), &(inteval->stack[((hsi*4356+173714)*1+lsi)*1]),66);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+1343993)*1+lsi)*1]), &(inteval->stack[((hsi*6006+162560)*1+lsi)*1]), &(inteval->stack[((hsi*5148+168566)*1+lsi)*1]),66);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+47400)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1343993)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1330925)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+1359437)*1+lsi)*1]), &(inteval->stack[((hsi*4356+173714)*1+lsi)*1]), &(inteval->stack[((hsi*3630+178070)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+1370327)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1330925)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1359437)*1+lsi)*1]),66);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+73536)*1+lsi)*1]), &(inteval->stack[((hsi*26136+47400)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1370327)*1+lsi)*1]),66);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1359437)*1+lsi)*1]), &(inteval->stack[((hsi*6930+155630)*1+lsi)*1]), &(inteval->stack[((hsi*6006+162560)*1+lsi)*1]),66);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1377455)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1359437)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1343993)*1+lsi)*1]),66);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1062800)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1377455)*1+lsi)*1]), &(inteval->stack[((hsi*26136+47400)*1+lsi)*1]),66);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1330925)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1062800)*1+lsi)*1]), &(inteval->stack[((hsi*36300+73536)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*163350+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*64350+998450)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1330925)*1+lsi)*1]),825);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*326700+2326205)*1+lsi)*1]), &(inteval->stack[((hsi*193050+1137875)*1+lsi)*1]), &(inteval->stack[((hsi*163350+2162855)*1+lsi)*1]),825);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*544500+2652905)*1+lsi)*1]), &(inteval->stack[((hsi*386100+1776755)*1+lsi)*1]), &(inteval->stack[((hsi*326700+2326205)*1+lsi)*1]),825);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*9360+23520)*1+lsi)*1]), &(inteval->stack[((hsi*7920+32880)*1+lsi)*1]),120);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+998450)*1+lsi)*1]), &(inteval->stack[((hsi*10920+12600)*1+lsi)*1]), &(inteval->stack[((hsi*9360+23520)*1+lsi)*1]),120);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+2186615)*1+lsi)*1]), &(inteval->stack[((hsi*28080+998450)*1+lsi)*1]), &(inteval->stack[((hsi*23760+2162855)*1+lsi)*1]),120);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*19800+1026530)*1+lsi)*1]), &(inteval->stack[((hsi*7920+32880)*1+lsi)*1]), &(inteval->stack[((hsi*6600+40800)*1+lsi)*1]),120);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*39600+2234135)*1+lsi)*1]), &(inteval->stack[((hsi*23760+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*19800+1026530)*1+lsi)*1]),120);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*66000+1026530)*1+lsi)*1]), &(inteval->stack[((hsi*47520+2186615)*1+lsi)*1]), &(inteval->stack[((hsi*39600+2234135)*1+lsi)*1]),120);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+2234135)*1+lsi)*1]), &(inteval->stack[((hsi*12600+0)*1+lsi)*1]), &(inteval->stack[((hsi*10920+12600)*1+lsi)*1]),120);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+2266895)*1+lsi)*1]), &(inteval->stack[((hsi*32760+2234135)*1+lsi)*1]), &(inteval->stack[((hsi*28080+998450)*1+lsi)*1]),120);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+1092530)*1+lsi)*1]), &(inteval->stack[((hsi*56160+2266895)*1+lsi)*1]), &(inteval->stack[((hsi*47520+2186615)*1+lsi)*1]),120);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*99000+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*79200+1092530)*1+lsi)*1]), &(inteval->stack[((hsi*66000+1026530)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*259875+998450)*1+lsi)*1]), &(inteval->stack[((hsi*99000+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1464905)*1+lsi)*1]),825);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*450450+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*259875+998450)*1+lsi)*1]), &(inteval->stack[((hsi*225225+1551530)*1+lsi)*1]),825);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*643500+998450)*1+lsi)*1]), &(inteval->stack[((hsi*450450+2162855)*1+lsi)*1]), &(inteval->stack[((hsi*386100+1776755)*1+lsi)*1]),825);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*816750+181700)*1+lsi)*1]), &(inteval->stack[((hsi*643500+998450)*1+lsi)*1]), &(inteval->stack[((hsi*544500+2652905)*1+lsi)*1]),825);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*816750+181700)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
