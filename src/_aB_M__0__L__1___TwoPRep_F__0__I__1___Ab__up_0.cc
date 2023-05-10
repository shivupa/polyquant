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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0li.h>
#include <HRRPart1bra0ket0lp.h>
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
#include <_aB_M__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__L__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,162400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__L__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+855400)*1+lsi)*1]), &(inteval->stack[((hsi*4356+120644)*1+lsi)*1]), &(inteval->stack[((hsi*3630+125000)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+866290)*1+lsi)*1]), &(inteval->stack[((hsi*5148+115496)*1+lsi)*1]), &(inteval->stack[((hsi*4356+120644)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+879358)*1+lsi)*1]), &(inteval->stack[((hsi*13068+866290)*1+lsi)*1]), &(inteval->stack[((hsi*10890+855400)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+901138)*1+lsi)*1]), &(inteval->stack[((hsi*6006+109490)*1+lsi)*1]), &(inteval->stack[((hsi*5148+115496)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+916582)*1+lsi)*1]), &(inteval->stack[((hsi*15444+901138)*1+lsi)*1]), &(inteval->stack[((hsi*13068+866290)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+942718)*1+lsi)*1]), &(inteval->stack[((hsi*26136+916582)*1+lsi)*1]), &(inteval->stack[((hsi*21780+879358)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+979018)*1+lsi)*1]), &(inteval->stack[((hsi*6930+102560)*1+lsi)*1]), &(inteval->stack[((hsi*6006+109490)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+997036)*1+lsi)*1]), &(inteval->stack[((hsi*18018+979018)*1+lsi)*1]), &(inteval->stack[((hsi*15444+901138)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1027924)*1+lsi)*1]), &(inteval->stack[((hsi*30888+997036)*1+lsi)*1]), &(inteval->stack[((hsi*26136+916582)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1071484)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1027924)*1+lsi)*1]), &(inteval->stack[((hsi*36300+942718)*1+lsi)*1]),66);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+901138)*1+lsi)*1]), &(inteval->stack[((hsi*3630+125000)*1+lsi)*1]), &(inteval->stack[((hsi*2970+128630)*1+lsi)*1]),66);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+910048)*1+lsi)*1]), &(inteval->stack[((hsi*10890+855400)*1+lsi)*1]), &(inteval->stack[((hsi*8910+901138)*1+lsi)*1]),66);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+1125934)*1+lsi)*1]), &(inteval->stack[((hsi*21780+879358)*1+lsi)*1]), &(inteval->stack[((hsi*17820+910048)*1+lsi)*1]),66);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+855400)*1+lsi)*1]), &(inteval->stack[((hsi*36300+942718)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1125934)*1+lsi)*1]),66);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+899950)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1071484)*1+lsi)*1]), &(inteval->stack[((hsi*44550+855400)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+855400)*1+lsi)*1]), &(inteval->stack[((hsi*7920+94640)*1+lsi)*1]), &(inteval->stack[((hsi*6930+102560)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+94640)*1+lsi)*1]), &(inteval->stack[((hsi*20790+855400)*1+lsi)*1]), &(inteval->stack[((hsi*18018+979018)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1125934)*1+lsi)*1]), &(inteval->stack[((hsi*36036+94640)*1+lsi)*1]), &(inteval->stack[((hsi*30888+997036)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+962320)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1125934)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1027924)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+1125934)*1+lsi)*1]), &(inteval->stack[((hsi*65340+962320)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1071484)*1+lsi)*1]),66);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*83160+962320)*1+lsi)*1]), &(inteval->stack[((hsi*76230+1125934)*1+lsi)*1]), &(inteval->stack[((hsi*62370+899950)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+855400)*1+lsi)*1]), &(inteval->stack[((hsi*5148+81692)*1+lsi)*1]), &(inteval->stack[((hsi*4290+86840)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+868270)*1+lsi)*1]), &(inteval->stack[((hsi*6084+75608)*1+lsi)*1]), &(inteval->stack[((hsi*5148+81692)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+883714)*1+lsi)*1]), &(inteval->stack[((hsi*15444+868270)*1+lsi)*1]), &(inteval->stack[((hsi*12870+855400)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+909454)*1+lsi)*1]), &(inteval->stack[((hsi*7098+68510)*1+lsi)*1]), &(inteval->stack[((hsi*6084+75608)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+94640)*1+lsi)*1]), &(inteval->stack[((hsi*18252+909454)*1+lsi)*1]), &(inteval->stack[((hsi*15444+868270)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1045480)*1+lsi)*1]), &(inteval->stack[((hsi*30888+94640)*1+lsi)*1]), &(inteval->stack[((hsi*25740+883714)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+927706)*1+lsi)*1]), &(inteval->stack[((hsi*8190+60320)*1+lsi)*1]), &(inteval->stack[((hsi*7098+68510)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1088380)*1+lsi)*1]), &(inteval->stack[((hsi*21294+927706)*1+lsi)*1]), &(inteval->stack[((hsi*18252+909454)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1124884)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1088380)*1+lsi)*1]), &(inteval->stack[((hsi*30888+94640)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1176364)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1124884)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1045480)*1+lsi)*1]),78);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+94640)*1+lsi)*1]), &(inteval->stack[((hsi*4290+86840)*1+lsi)*1]), &(inteval->stack[((hsi*3510+91130)*1+lsi)*1]),78);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+105170)*1+lsi)*1]), &(inteval->stack[((hsi*12870+855400)*1+lsi)*1]), &(inteval->stack[((hsi*10530+94640)*1+lsi)*1]),78);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+68510)*1+lsi)*1]), &(inteval->stack[((hsi*25740+883714)*1+lsi)*1]), &(inteval->stack[((hsi*21060+105170)*1+lsi)*1]),78);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+855400)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1045480)*1+lsi)*1]), &(inteval->stack[((hsi*35100+68510)*1+lsi)*1]),78);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+1240714)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1176364)*1+lsi)*1]), &(inteval->stack[((hsi*52650+855400)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+855400)*1+lsi)*1]), &(inteval->stack[((hsi*9360+50960)*1+lsi)*1]), &(inteval->stack[((hsi*8190+60320)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+50960)*1+lsi)*1]), &(inteval->stack[((hsi*24570+855400)*1+lsi)*1]), &(inteval->stack[((hsi*21294+927706)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+855400)*1+lsi)*1]), &(inteval->stack[((hsi*42588+50960)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1088380)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+50960)*1+lsi)*1]), &(inteval->stack[((hsi*60840+855400)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1124884)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+1045480)*1+lsi)*1]), &(inteval->stack[((hsi*77220+50960)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1176364)*1+lsi)*1]),78);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*98280+855400)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1045480)*1+lsi)*1]), &(inteval->stack[((hsi*73710+1240714)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*249480+1045480)*1+lsi)*1]), &(inteval->stack[((hsi*98280+855400)*1+lsi)*1]), &(inteval->stack[((hsi*83160+962320)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+50960)*1+lsi)*1]), &(inteval->stack[((hsi*3630+153270)*1+lsi)*1]), &(inteval->stack[((hsi*3025+156900)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+60035)*1+lsi)*1]), &(inteval->stack[((hsi*4290+148980)*1+lsi)*1]), &(inteval->stack[((hsi*3630+153270)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+70925)*1+lsi)*1]), &(inteval->stack[((hsi*10890+60035)*1+lsi)*1]), &(inteval->stack[((hsi*9075+50960)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+89075)*1+lsi)*1]), &(inteval->stack[((hsi*5005+143975)*1+lsi)*1]), &(inteval->stack[((hsi*4290+148980)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+101945)*1+lsi)*1]), &(inteval->stack[((hsi*12870+89075)*1+lsi)*1]), &(inteval->stack[((hsi*10890+60035)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*21780+101945)*1+lsi)*1]), &(inteval->stack[((hsi*18150+70925)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+1325210)*1+lsi)*1]), &(inteval->stack[((hsi*5775+138200)*1+lsi)*1]), &(inteval->stack[((hsi*5005+143975)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+1340225)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1325210)*1+lsi)*1]), &(inteval->stack[((hsi*12870+89075)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1365965)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1340225)*1+lsi)*1]), &(inteval->stack[((hsi*21780+101945)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+1402265)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1365965)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1294960)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+89075)*1+lsi)*1]), &(inteval->stack[((hsi*3025+156900)*1+lsi)*1]), &(inteval->stack[((hsi*2475+159925)*1+lsi)*1]),55);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+96500)*1+lsi)*1]), &(inteval->stack[((hsi*9075+50960)*1+lsi)*1]), &(inteval->stack[((hsi*7425+89075)*1+lsi)*1]),55);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+1447640)*1+lsi)*1]), &(inteval->stack[((hsi*18150+70925)*1+lsi)*1]), &(inteval->stack[((hsi*14850+96500)*1+lsi)*1]),55);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+50960)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1447640)*1+lsi)*1]),55);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+1447640)*1+lsi)*1]), &(inteval->stack[((hsi*45375+1402265)*1+lsi)*1]), &(inteval->stack[((hsi*37125+50960)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+50960)*1+lsi)*1]), &(inteval->stack[((hsi*6600+131600)*1+lsi)*1]), &(inteval->stack[((hsi*5775+138200)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+68285)*1+lsi)*1]), &(inteval->stack[((hsi*17325+50960)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1325210)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+98315)*1+lsi)*1]), &(inteval->stack[((hsi*30030+68285)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1340225)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*42900+98315)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1365965)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+50960)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*45375+1402265)*1+lsi)*1]),55);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*69300+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*63525+50960)*1+lsi)*1]), &(inteval->stack[((hsi*51975+1447640)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*207900+1364260)*1+lsi)*1]), &(inteval->stack[((hsi*83160+962320)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1294960)*1+lsi)*1]),1260);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*415800+1572160)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1045480)*1+lsi)*1]), &(inteval->stack[((hsi*207900+1364260)*1+lsi)*1]),1260);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1309975)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]),91);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*30030+1327993)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1309975)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1294960)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1358023)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1379317)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1358023)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1309975)*1+lsi)*1]),91);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1415353)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1379317)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1327993)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+50960)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+1465403)*1+lsi)*1]), &(inteval->stack[((hsi*24843+50960)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1358023)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+953680)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1465403)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1379317)*1+lsi)*1]),91);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+75803)*1+lsi)*1]), &(inteval->stack[((hsi*60060+953680)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1415353)*1+lsi)*1]),91);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+1507991)*1+lsi)*1]), &(inteval->stack[((hsi*5005+41860)*1+lsi)*1]), &(inteval->stack[((hsi*4095+46865)*1+lsi)*1]),91);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+1358023)*1+lsi)*1]), &(inteval->stack[((hsi*15015+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*12285+1507991)*1+lsi)*1]),91);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+1507991)*1+lsi)*1]), &(inteval->stack[((hsi*30030+1327993)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1358023)*1+lsi)*1]),91);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1415353)*1+lsi)*1]), &(inteval->stack[((hsi*40950+1507991)*1+lsi)*1]),91);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+1356385)*1+lsi)*1]), &(inteval->stack[((hsi*75075+75803)*1+lsi)*1]), &(inteval->stack[((hsi*61425+1294960)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1507991)*1+lsi)*1]), &(inteval->stack[((hsi*10920+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1507991)*1+lsi)*1]), &(inteval->stack[((hsi*24843+50960)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+0)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1294960)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1465403)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+1442380)*1+lsi)*1]), &(inteval->stack[((hsi*70980+0)*1+lsi)*1]), &(inteval->stack[((hsi*60060+953680)*1+lsi)*1]),91);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*105105+1987960)*1+lsi)*1]), &(inteval->stack[((hsi*90090+1442380)*1+lsi)*1]), &(inteval->stack[((hsi*75075+75803)*1+lsi)*1]),91);
HRRPart1bra0ket0li(inteval, &(inteval->stack[((hsi*114660+0)*1+lsi)*1]), &(inteval->stack[((hsi*105105+1987960)*1+lsi)*1]), &(inteval->stack[((hsi*85995+1356385)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*294840+1987960)*1+lsi)*1]), &(inteval->stack[((hsi*114660+0)*1+lsi)*1]), &(inteval->stack[((hsi*98280+855400)*1+lsi)*1]),1260);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*498960+2282800)*1+lsi)*1]), &(inteval->stack[((hsi*294840+1987960)*1+lsi)*1]), &(inteval->stack[((hsi*249480+1045480)*1+lsi)*1]),1260);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*693000+162400)*1+lsi)*1]), &(inteval->stack[((hsi*498960+2282800)*1+lsi)*1]), &(inteval->stack[((hsi*415800+1572160)*1+lsi)*1]),1260);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*693000+162400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
