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
#include <_aB_M__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__M__1___TwoPRep_F__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,149350)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__M__1___TwoPRep_F__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+784600)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107891)*1+lsi)*1]), &(inteval->stack[((hsi*4356+113039)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+797668)*1+lsi)*1]), &(inteval->stack[((hsi*6006+101885)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107891)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+813112)*1+lsi)*1]), &(inteval->stack[((hsi*15444+797668)*1+lsi)*1]), &(inteval->stack[((hsi*13068+784600)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+839248)*1+lsi)*1]), &(inteval->stack[((hsi*6930+94955)*1+lsi)*1]), &(inteval->stack[((hsi*6006+101885)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+857266)*1+lsi)*1]), &(inteval->stack[((hsi*18018+839248)*1+lsi)*1]), &(inteval->stack[((hsi*15444+797668)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+888154)*1+lsi)*1]), &(inteval->stack[((hsi*30888+857266)*1+lsi)*1]), &(inteval->stack[((hsi*26136+813112)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+797668)*1+lsi)*1]), &(inteval->stack[((hsi*4356+113039)*1+lsi)*1]), &(inteval->stack[((hsi*3630+117395)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+931714)*1+lsi)*1]), &(inteval->stack[((hsi*13068+784600)*1+lsi)*1]), &(inteval->stack[((hsi*10890+797668)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+953494)*1+lsi)*1]), &(inteval->stack[((hsi*26136+813112)*1+lsi)*1]), &(inteval->stack[((hsi*21780+931714)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+784600)*1+lsi)*1]), &(inteval->stack[((hsi*43560+888154)*1+lsi)*1]), &(inteval->stack[((hsi*36300+953494)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+931714)*1+lsi)*1]), &(inteval->stack[((hsi*7920+87035)*1+lsi)*1]), &(inteval->stack[((hsi*6930+94955)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+952504)*1+lsi)*1]), &(inteval->stack[((hsi*20790+931714)*1+lsi)*1]), &(inteval->stack[((hsi*18018+839248)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+988540)*1+lsi)*1]), &(inteval->stack[((hsi*36036+952504)*1+lsi)*1]), &(inteval->stack[((hsi*30888+857266)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1040020)*1+lsi)*1]), &(inteval->stack[((hsi*51480+988540)*1+lsi)*1]), &(inteval->stack[((hsi*43560+888154)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+839050)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1040020)*1+lsi)*1]), &(inteval->stack[((hsi*54450+784600)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+784600)*1+lsi)*1]), &(inteval->stack[((hsi*6084+71513)*1+lsi)*1]), &(inteval->stack[((hsi*5148+77597)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+800044)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64415)*1+lsi)*1]), &(inteval->stack[((hsi*6084+71513)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+87035)*1+lsi)*1]), &(inteval->stack[((hsi*18252+800044)*1+lsi)*1]), &(inteval->stack[((hsi*15444+784600)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+915280)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56225)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64415)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+936574)*1+lsi)*1]), &(inteval->stack[((hsi*21294+915280)*1+lsi)*1]), &(inteval->stack[((hsi*18252+800044)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+973078)*1+lsi)*1]), &(inteval->stack[((hsi*36504+936574)*1+lsi)*1]), &(inteval->stack[((hsi*30888+87035)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+800044)*1+lsi)*1]), &(inteval->stack[((hsi*5148+77597)*1+lsi)*1]), &(inteval->stack[((hsi*4290+82745)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+812914)*1+lsi)*1]), &(inteval->stack[((hsi*15444+784600)*1+lsi)*1]), &(inteval->stack[((hsi*12870+800044)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1024558)*1+lsi)*1]), &(inteval->stack[((hsi*30888+87035)*1+lsi)*1]), &(inteval->stack[((hsi*25740+812914)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1067458)*1+lsi)*1]), &(inteval->stack[((hsi*51480+973078)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1024558)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+64415)*1+lsi)*1]), &(inteval->stack[((hsi*9360+46865)*1+lsi)*1]), &(inteval->stack[((hsi*8190+56225)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+784600)*1+lsi)*1]), &(inteval->stack[((hsi*24570+64415)*1+lsi)*1]), &(inteval->stack[((hsi*21294+915280)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+46865)*1+lsi)*1]), &(inteval->stack[((hsi*42588+784600)*1+lsi)*1]), &(inteval->stack[((hsi*36504+936574)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1131808)*1+lsi)*1]), &(inteval->stack[((hsi*60840+46865)*1+lsi)*1]), &(inteval->stack[((hsi*51480+973078)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+915280)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1131808)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1067458)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*228690+1005370)*1+lsi)*1]), &(inteval->stack[((hsi*90090+915280)*1+lsi)*1]), &(inteval->stack[((hsi*76230+839050)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+46865)*1+lsi)*1]), &(inteval->stack[((hsi*4290+138405)*1+lsi)*1]), &(inteval->stack[((hsi*3630+142695)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+57755)*1+lsi)*1]), &(inteval->stack[((hsi*5005+133400)*1+lsi)*1]), &(inteval->stack[((hsi*4290+138405)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+784600)*1+lsi)*1]), &(inteval->stack[((hsi*12870+57755)*1+lsi)*1]), &(inteval->stack[((hsi*10890+46865)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+70625)*1+lsi)*1]), &(inteval->stack[((hsi*5775+127625)*1+lsi)*1]), &(inteval->stack[((hsi*5005+133400)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+85640)*1+lsi)*1]), &(inteval->stack[((hsi*15015+70625)*1+lsi)*1]), &(inteval->stack[((hsi*12870+57755)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*25740+85640)*1+lsi)*1]), &(inteval->stack[((hsi*21780+784600)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+806380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+142695)*1+lsi)*1]), &(inteval->stack[((hsi*3025+146325)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+815455)*1+lsi)*1]), &(inteval->stack[((hsi*10890+46865)*1+lsi)*1]), &(inteval->stack[((hsi*9075+806380)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+1270360)*1+lsi)*1]), &(inteval->stack[((hsi*21780+784600)*1+lsi)*1]), &(inteval->stack[((hsi*18150+815455)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+784600)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1270360)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+46865)*1+lsi)*1]), &(inteval->stack[((hsi*6600+121025)*1+lsi)*1]), &(inteval->stack[((hsi*5775+127625)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+111380)*1+lsi)*1]), &(inteval->stack[((hsi*17325+46865)*1+lsi)*1]), &(inteval->stack[((hsi*15015+70625)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+1270360)*1+lsi)*1]), &(inteval->stack[((hsi*30030+111380)*1+lsi)*1]), &(inteval->stack[((hsi*25740+85640)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+46865)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1270360)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1234060)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*54450+46865)*1+lsi)*1]), &(inteval->stack[((hsi*45375+784600)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*190575+1297585)*1+lsi)*1]), &(inteval->stack[((hsi*76230+839050)*1+lsi)*1]), &(inteval->stack[((hsi*63525+1234060)*1+lsi)*1]),1155);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*381150+1488160)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1005370)*1+lsi)*1]), &(inteval->stack[((hsi*190575+1297585)*1+lsi)*1]),1155);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1252078)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1273372)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1252078)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1234060)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1309408)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1334251)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1309408)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1252078)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+784600)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1334251)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1273372)*1+lsi)*1]),91);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1376839)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+20475)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1376839)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1376839)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1273372)*1+lsi)*1]), &(inteval->stack[((hsi*30030+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+20475)*1+lsi)*1]), &(inteval->stack[((hsi*60060+784600)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1376839)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1376839)*1+lsi)*1]), &(inteval->stack[((hsi*10920+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1405504)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1376839)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1309408)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1405504)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1334251)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1305040)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1234060)*1+lsi)*1]), &(inteval->stack[((hsi*60060+784600)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+784600)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1305040)*1+lsi)*1]), &(inteval->stack[((hsi*75075+20475)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*270270+1869310)*1+lsi)*1]), &(inteval->stack[((hsi*105105+784600)*1+lsi)*1]), &(inteval->stack[((hsi*90090+915280)*1+lsi)*1]),1155);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*457380+2139580)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1869310)*1+lsi)*1]), &(inteval->stack[((hsi*228690+1005370)*1+lsi)*1]),1155);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*635250+149350)*1+lsi)*1]), &(inteval->stack[((hsi*457380+2139580)*1+lsi)*1]), &(inteval->stack[((hsi*381150+1488160)*1+lsi)*1]),1155);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*635250+149350)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
