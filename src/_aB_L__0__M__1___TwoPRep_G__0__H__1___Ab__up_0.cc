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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
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
#include <_aB_L__0__M__1___TwoPRep_G__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_G__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,172525)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_G__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+952150)*1+lsi)*1]), &(inteval->stack[((hsi*4290+138405)*1+lsi)*1]), &(inteval->stack[((hsi*3630+142695)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+963040)*1+lsi)*1]), &(inteval->stack[((hsi*5005+133400)*1+lsi)*1]), &(inteval->stack[((hsi*4290+138405)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+975910)*1+lsi)*1]), &(inteval->stack[((hsi*12870+963040)*1+lsi)*1]), &(inteval->stack[((hsi*10890+952150)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+997690)*1+lsi)*1]), &(inteval->stack[((hsi*5775+127625)*1+lsi)*1]), &(inteval->stack[((hsi*5005+133400)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+1012705)*1+lsi)*1]), &(inteval->stack[((hsi*15015+997690)*1+lsi)*1]), &(inteval->stack[((hsi*12870+963040)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1038445)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1012705)*1+lsi)*1]), &(inteval->stack[((hsi*21780+975910)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+963040)*1+lsi)*1]), &(inteval->stack[((hsi*3630+142695)*1+lsi)*1]), &(inteval->stack[((hsi*3025+146325)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+1074745)*1+lsi)*1]), &(inteval->stack[((hsi*10890+952150)*1+lsi)*1]), &(inteval->stack[((hsi*9075+963040)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+1092895)*1+lsi)*1]), &(inteval->stack[((hsi*21780+975910)*1+lsi)*1]), &(inteval->stack[((hsi*18150+1074745)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+952150)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1038445)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1092895)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+1074745)*1+lsi)*1]), &(inteval->stack[((hsi*6600+121025)*1+lsi)*1]), &(inteval->stack[((hsi*5775+127625)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+1092070)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1074745)*1+lsi)*1]), &(inteval->stack[((hsi*15015+997690)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+1122100)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1092070)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1012705)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+1165000)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1122100)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1038445)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+997525)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1165000)*1+lsi)*1]), &(inteval->stack[((hsi*45375+952150)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+952150)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107891)*1+lsi)*1]), &(inteval->stack[((hsi*4356+113039)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+965218)*1+lsi)*1]), &(inteval->stack[((hsi*6006+101885)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107891)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+121025)*1+lsi)*1]), &(inteval->stack[((hsi*15444+965218)*1+lsi)*1]), &(inteval->stack[((hsi*13068+952150)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*6930+94955)*1+lsi)*1]), &(inteval->stack[((hsi*6006+101885)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1079068)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*15444+965218)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1109956)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1079068)*1+lsi)*1]), &(inteval->stack[((hsi*26136+121025)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+965218)*1+lsi)*1]), &(inteval->stack[((hsi*4356+113039)*1+lsi)*1]), &(inteval->stack[((hsi*3630+117395)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+1153516)*1+lsi)*1]), &(inteval->stack[((hsi*13068+952150)*1+lsi)*1]), &(inteval->stack[((hsi*10890+965218)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+952150)*1+lsi)*1]), &(inteval->stack[((hsi*26136+121025)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1153516)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1153516)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1109956)*1+lsi)*1]), &(inteval->stack[((hsi*36300+952150)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+101885)*1+lsi)*1]), &(inteval->stack[((hsi*7920+87035)*1+lsi)*1]), &(inteval->stack[((hsi*6930+94955)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+952150)*1+lsi)*1]), &(inteval->stack[((hsi*20790+101885)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1061050)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+87035)*1+lsi)*1]), &(inteval->stack[((hsi*36036+952150)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1079068)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1207966)*1+lsi)*1]), &(inteval->stack[((hsi*51480+87035)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1109956)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1207966)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1153516)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*190575+1137280)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*63525+997525)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+87035)*1+lsi)*1]), &(inteval->stack[((hsi*6084+71513)*1+lsi)*1]), &(inteval->stack[((hsi*5148+77597)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+102479)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64415)*1+lsi)*1]), &(inteval->stack[((hsi*6084+71513)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+952150)*1+lsi)*1]), &(inteval->stack[((hsi*18252+102479)*1+lsi)*1]), &(inteval->stack[((hsi*15444+87035)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+120731)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56225)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64415)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1327855)*1+lsi)*1]), &(inteval->stack[((hsi*21294+120731)*1+lsi)*1]), &(inteval->stack[((hsi*18252+102479)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1364359)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1327855)*1+lsi)*1]), &(inteval->stack[((hsi*30888+952150)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+102479)*1+lsi)*1]), &(inteval->stack[((hsi*5148+77597)*1+lsi)*1]), &(inteval->stack[((hsi*4290+82745)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1415839)*1+lsi)*1]), &(inteval->stack[((hsi*15444+87035)*1+lsi)*1]), &(inteval->stack[((hsi*12870+102479)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+64415)*1+lsi)*1]), &(inteval->stack[((hsi*30888+952150)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1415839)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1415839)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1364359)*1+lsi)*1]), &(inteval->stack[((hsi*42900+64415)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+64415)*1+lsi)*1]), &(inteval->stack[((hsi*9360+46865)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56225)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+952150)*1+lsi)*1]), &(inteval->stack[((hsi*24570+64415)*1+lsi)*1]), &(inteval->stack[((hsi*21294+120731)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+46865)*1+lsi)*1]), &(inteval->stack[((hsi*42588+952150)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1327855)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1480189)*1+lsi)*1]), &(inteval->stack[((hsi*60840+46865)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1364359)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+46865)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1480189)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1415839)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*228690+1327855)*1+lsi)*1]), &(inteval->stack[((hsi*90090+46865)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1061050)*1+lsi)*1]),1155);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*381150+1556545)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1327855)*1+lsi)*1]), &(inteval->stack[((hsi*190575+1137280)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*3510+163570)*1+lsi)*1]), &(inteval->stack[((hsi*2970+167080)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+1069960)*1+lsi)*1]), &(inteval->stack[((hsi*4095+159475)*1+lsi)*1]), &(inteval->stack[((hsi*3510+163570)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+1080490)*1+lsi)*1]), &(inteval->stack[((hsi*10530+1069960)*1+lsi)*1]), &(inteval->stack[((hsi*8910+1061050)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+952150)*1+lsi)*1]), &(inteval->stack[((hsi*4725+154750)*1+lsi)*1]), &(inteval->stack[((hsi*4095+159475)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+1098310)*1+lsi)*1]), &(inteval->stack[((hsi*12285+952150)*1+lsi)*1]), &(inteval->stack[((hsi*10530+1069960)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+964435)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1098310)*1+lsi)*1]), &(inteval->stack[((hsi*17820+1080490)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+1119370)*1+lsi)*1]), &(inteval->stack[((hsi*2970+167080)*1+lsi)*1]), &(inteval->stack[((hsi*2475+170050)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*8910+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*7425+1119370)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+1952545)*1+lsi)*1]), &(inteval->stack[((hsi*17820+1080490)*1+lsi)*1]), &(inteval->stack[((hsi*14850+1937695)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+1061050)*1+lsi)*1]), &(inteval->stack[((hsi*29700+964435)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1952545)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+1119370)*1+lsi)*1]), &(inteval->stack[((hsi*5400+149350)*1+lsi)*1]), &(inteval->stack[((hsi*4725+154750)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+136955)*1+lsi)*1]), &(inteval->stack[((hsi*14175+1119370)*1+lsi)*1]), &(inteval->stack[((hsi*12285+952150)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*24570+136955)*1+lsi)*1]), &(inteval->stack[((hsi*21060+1098310)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+1972795)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*29700+964435)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+2017345)*1+lsi)*1]), &(inteval->stack[((hsi*44550+1972795)*1+lsi)*1]), &(inteval->stack[((hsi*37125+1061050)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*155925+2069320)*1+lsi)*1]), &(inteval->stack[((hsi*63525+997525)*1+lsi)*1]), &(inteval->stack[((hsi*51975+2017345)*1+lsi)*1]),1155);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*311850+2225245)*1+lsi)*1]), &(inteval->stack[((hsi*190575+1137280)*1+lsi)*1]), &(inteval->stack[((hsi*155925+2069320)*1+lsi)*1]),1155);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*519750+2537095)*1+lsi)*1]), &(inteval->stack[((hsi*381150+1556545)*1+lsi)*1]), &(inteval->stack[((hsi*311850+2225245)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1955713)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1977007)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1955713)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1937695)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+2013043)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+2037886)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2013043)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1955713)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+2080474)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2037886)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1977007)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+2140534)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+2155549)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*15015+2140534)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+952150)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1977007)*1+lsi)*1]), &(inteval->stack[((hsi*30030+2155549)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+2140534)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2080474)*1+lsi)*1]), &(inteval->stack[((hsi*50050+952150)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+952150)*1+lsi)*1]), &(inteval->stack[((hsi*10920+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+980815)*1+lsi)*1]), &(inteval->stack[((hsi*28665+952150)*1+lsi)*1]), &(inteval->stack[((hsi*24843+2013043)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+2215609)*1+lsi)*1]), &(inteval->stack[((hsi*49686+980815)*1+lsi)*1]), &(inteval->stack[((hsi*42588+2037886)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+952150)*1+lsi)*1]), &(inteval->stack[((hsi*70980+2215609)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2080474)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+2215609)*1+lsi)*1]), &(inteval->stack[((hsi*90090+952150)*1+lsi)*1]), &(inteval->stack[((hsi*75075+2140534)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*270270+952150)*1+lsi)*1]), &(inteval->stack[((hsi*105105+2215609)*1+lsi)*1]), &(inteval->stack[((hsi*90090+46865)*1+lsi)*1]),1155);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*457380+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*270270+952150)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1327855)*1+lsi)*1]),1155);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*635250+3056845)*1+lsi)*1]), &(inteval->stack[((hsi*457380+1937695)*1+lsi)*1]), &(inteval->stack[((hsi*381150+1556545)*1+lsi)*1]),1155);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*779625+172525)*1+lsi)*1]), &(inteval->stack[((hsi*635250+3056845)*1+lsi)*1]), &(inteval->stack[((hsi*519750+2537095)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*779625+172525)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
