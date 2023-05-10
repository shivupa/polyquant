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
#include <_aB_PS__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_D__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,121025)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_D__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+578405)*1+lsi)*1]), &(inteval->stack[((hsi*6084+71513)*1+lsi)*1]), &(inteval->stack[((hsi*5148+77597)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+593849)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64415)*1+lsi)*1]), &(inteval->stack[((hsi*6084+71513)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+612101)*1+lsi)*1]), &(inteval->stack[((hsi*18252+593849)*1+lsi)*1]), &(inteval->stack[((hsi*15444+578405)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+642989)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56225)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64415)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+664283)*1+lsi)*1]), &(inteval->stack[((hsi*21294+642989)*1+lsi)*1]), &(inteval->stack[((hsi*18252+593849)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+700787)*1+lsi)*1]), &(inteval->stack[((hsi*36504+664283)*1+lsi)*1]), &(inteval->stack[((hsi*30888+612101)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+593849)*1+lsi)*1]), &(inteval->stack[((hsi*5148+77597)*1+lsi)*1]), &(inteval->stack[((hsi*4290+82745)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+752267)*1+lsi)*1]), &(inteval->stack[((hsi*15444+578405)*1+lsi)*1]), &(inteval->stack[((hsi*12870+593849)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+778007)*1+lsi)*1]), &(inteval->stack[((hsi*30888+612101)*1+lsi)*1]), &(inteval->stack[((hsi*25740+752267)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+578405)*1+lsi)*1]), &(inteval->stack[((hsi*51480+700787)*1+lsi)*1]), &(inteval->stack[((hsi*42900+778007)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+752267)*1+lsi)*1]), &(inteval->stack[((hsi*9360+46865)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56225)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+776837)*1+lsi)*1]), &(inteval->stack[((hsi*24570+752267)*1+lsi)*1]), &(inteval->stack[((hsi*21294+642989)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+819425)*1+lsi)*1]), &(inteval->stack[((hsi*42588+776837)*1+lsi)*1]), &(inteval->stack[((hsi*36504+664283)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+880265)*1+lsi)*1]), &(inteval->stack[((hsi*60840+819425)*1+lsi)*1]), &(inteval->stack[((hsi*51480+700787)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+642755)*1+lsi)*1]), &(inteval->stack[((hsi*77220+880265)*1+lsi)*1]), &(inteval->stack[((hsi*64350+578405)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+578405)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107891)*1+lsi)*1]), &(inteval->stack[((hsi*4356+113039)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+591473)*1+lsi)*1]), &(inteval->stack[((hsi*6006+101885)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107891)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+46865)*1+lsi)*1]), &(inteval->stack[((hsi*15444+591473)*1+lsi)*1]), &(inteval->stack[((hsi*13068+578405)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+606917)*1+lsi)*1]), &(inteval->stack[((hsi*6930+94955)*1+lsi)*1]), &(inteval->stack[((hsi*6006+101885)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+732845)*1+lsi)*1]), &(inteval->stack[((hsi*18018+606917)*1+lsi)*1]), &(inteval->stack[((hsi*15444+591473)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+763733)*1+lsi)*1]), &(inteval->stack[((hsi*30888+732845)*1+lsi)*1]), &(inteval->stack[((hsi*26136+46865)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+624935)*1+lsi)*1]), &(inteval->stack[((hsi*4356+113039)*1+lsi)*1]), &(inteval->stack[((hsi*3630+117395)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+807293)*1+lsi)*1]), &(inteval->stack[((hsi*13068+578405)*1+lsi)*1]), &(inteval->stack[((hsi*10890+624935)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+829073)*1+lsi)*1]), &(inteval->stack[((hsi*26136+46865)*1+lsi)*1]), &(inteval->stack[((hsi*21780+807293)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+865373)*1+lsi)*1]), &(inteval->stack[((hsi*43560+763733)*1+lsi)*1]), &(inteval->stack[((hsi*36300+829073)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+807293)*1+lsi)*1]), &(inteval->stack[((hsi*7920+87035)*1+lsi)*1]), &(inteval->stack[((hsi*6930+94955)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+46865)*1+lsi)*1]), &(inteval->stack[((hsi*20790+807293)*1+lsi)*1]), &(inteval->stack[((hsi*18018+606917)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+578405)*1+lsi)*1]), &(inteval->stack[((hsi*36036+46865)*1+lsi)*1]), &(inteval->stack[((hsi*30888+732845)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+46865)*1+lsi)*1]), &(inteval->stack[((hsi*51480+578405)*1+lsi)*1]), &(inteval->stack[((hsi*43560+763733)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+732845)*1+lsi)*1]), &(inteval->stack[((hsi*65340+46865)*1+lsi)*1]), &(inteval->stack[((hsi*54450+865373)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*228690+809075)*1+lsi)*1]), &(inteval->stack[((hsi*90090+642755)*1+lsi)*1]), &(inteval->stack[((hsi*76230+732845)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+732845)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+46865)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+578405)*1+lsi)*1]), &(inteval->stack[((hsi*21294+46865)*1+lsi)*1]), &(inteval->stack[((hsi*18018+732845)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+750863)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+68159)*1+lsi)*1]), &(inteval->stack[((hsi*24843+750863)*1+lsi)*1]), &(inteval->stack[((hsi*21294+46865)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1037765)*1+lsi)*1]), &(inteval->stack[((hsi*42588+68159)*1+lsi)*1]), &(inteval->stack[((hsi*36036+578405)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+775706)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+20475)*1+lsi)*1]), &(inteval->stack[((hsi*18018+732845)*1+lsi)*1]), &(inteval->stack[((hsi*15015+775706)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1097825)*1+lsi)*1]), &(inteval->stack[((hsi*36036+578405)*1+lsi)*1]), &(inteval->stack[((hsi*30030+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1147875)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1037765)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1097825)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+578405)*1+lsi)*1]), &(inteval->stack[((hsi*10920+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+0)*1+lsi)*1]), &(inteval->stack[((hsi*28665+578405)*1+lsi)*1]), &(inteval->stack[((hsi*24843+750863)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+732845)*1+lsi)*1]), &(inteval->stack[((hsi*49686+0)*1+lsi)*1]), &(inteval->stack[((hsi*42588+68159)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+0)*1+lsi)*1]), &(inteval->stack[((hsi*70980+732845)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1037765)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+1037765)*1+lsi)*1]), &(inteval->stack[((hsi*90090+0)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1147875)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*270270+1142870)*1+lsi)*1]), &(inteval->stack[((hsi*105105+1037765)*1+lsi)*1]), &(inteval->stack[((hsi*90090+642755)*1+lsi)*1]),1155);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*457380+121025)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1142870)*1+lsi)*1]), &(inteval->stack[((hsi*228690+809075)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*457380+121025)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
