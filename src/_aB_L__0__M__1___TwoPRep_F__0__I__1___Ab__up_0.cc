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
#include <HRRPart0bra0ket0lp.h>
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
#include <_aB_L__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_F__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,158844)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_F__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+851844)*1+lsi)*1]), &(inteval->stack[((hsi*4290+118604)*1+lsi)*1]), &(inteval->stack[((hsi*3630+122894)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+862734)*1+lsi)*1]), &(inteval->stack[((hsi*5005+113599)*1+lsi)*1]), &(inteval->stack[((hsi*4290+118604)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+875604)*1+lsi)*1]), &(inteval->stack[((hsi*12870+862734)*1+lsi)*1]), &(inteval->stack[((hsi*10890+851844)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+897384)*1+lsi)*1]), &(inteval->stack[((hsi*5775+107824)*1+lsi)*1]), &(inteval->stack[((hsi*5005+113599)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+912399)*1+lsi)*1]), &(inteval->stack[((hsi*15015+897384)*1+lsi)*1]), &(inteval->stack[((hsi*12870+862734)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+938139)*1+lsi)*1]), &(inteval->stack[((hsi*25740+912399)*1+lsi)*1]), &(inteval->stack[((hsi*21780+875604)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+974439)*1+lsi)*1]), &(inteval->stack[((hsi*6600+101224)*1+lsi)*1]), &(inteval->stack[((hsi*5775+107824)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+991764)*1+lsi)*1]), &(inteval->stack[((hsi*17325+974439)*1+lsi)*1]), &(inteval->stack[((hsi*15015+897384)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+1021794)*1+lsi)*1]), &(inteval->stack[((hsi*30030+991764)*1+lsi)*1]), &(inteval->stack[((hsi*25740+912399)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+1064694)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1021794)*1+lsi)*1]), &(inteval->stack[((hsi*36300+938139)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+897384)*1+lsi)*1]), &(inteval->stack[((hsi*3630+122894)*1+lsi)*1]), &(inteval->stack[((hsi*3025+126524)*1+lsi)*1]),55);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*18150+906459)*1+lsi)*1]), &(inteval->stack[((hsi*10890+851844)*1+lsi)*1]), &(inteval->stack[((hsi*9075+897384)*1+lsi)*1]),55);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+1119144)*1+lsi)*1]), &(inteval->stack[((hsi*21780+875604)*1+lsi)*1]), &(inteval->stack[((hsi*18150+906459)*1+lsi)*1]),55);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+851844)*1+lsi)*1]), &(inteval->stack[((hsi*36300+938139)*1+lsi)*1]), &(inteval->stack[((hsi*30250+1119144)*1+lsi)*1]),55);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*63525+897219)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1064694)*1+lsi)*1]), &(inteval->stack[((hsi*45375+851844)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+851844)*1+lsi)*1]), &(inteval->stack[((hsi*7480+93744)*1+lsi)*1]), &(inteval->stack[((hsi*6600+101224)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+93744)*1+lsi)*1]), &(inteval->stack[((hsi*19800+851844)*1+lsi)*1]), &(inteval->stack[((hsi*17325+974439)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+1119144)*1+lsi)*1]), &(inteval->stack[((hsi*34650+93744)*1+lsi)*1]), &(inteval->stack[((hsi*30030+991764)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+1169194)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1119144)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1021794)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+960744)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1169194)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1064694)*1+lsi)*1]),55);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*84700+1036974)*1+lsi)*1]), &(inteval->stack[((hsi*76230+960744)*1+lsi)*1]), &(inteval->stack[((hsi*63525+897219)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+851844)*1+lsi)*1]), &(inteval->stack[((hsi*5148+80610)*1+lsi)*1]), &(inteval->stack[((hsi*4356+85758)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+864912)*1+lsi)*1]), &(inteval->stack[((hsi*6006+74604)*1+lsi)*1]), &(inteval->stack[((hsi*5148+80610)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+880356)*1+lsi)*1]), &(inteval->stack[((hsi*15444+864912)*1+lsi)*1]), &(inteval->stack[((hsi*13068+851844)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+906492)*1+lsi)*1]), &(inteval->stack[((hsi*6930+67674)*1+lsi)*1]), &(inteval->stack[((hsi*6006+74604)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+924510)*1+lsi)*1]), &(inteval->stack[((hsi*18018+906492)*1+lsi)*1]), &(inteval->stack[((hsi*15444+864912)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+955398)*1+lsi)*1]), &(inteval->stack[((hsi*30888+924510)*1+lsi)*1]), &(inteval->stack[((hsi*26136+880356)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+998958)*1+lsi)*1]), &(inteval->stack[((hsi*7920+59754)*1+lsi)*1]), &(inteval->stack[((hsi*6930+67674)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1121674)*1+lsi)*1]), &(inteval->stack[((hsi*20790+998958)*1+lsi)*1]), &(inteval->stack[((hsi*18018+906492)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1157710)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1121674)*1+lsi)*1]), &(inteval->stack[((hsi*30888+924510)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1209190)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1157710)*1+lsi)*1]), &(inteval->stack[((hsi*43560+955398)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+906492)*1+lsi)*1]), &(inteval->stack[((hsi*4356+85758)*1+lsi)*1]), &(inteval->stack[((hsi*3630+90114)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+67674)*1+lsi)*1]), &(inteval->stack[((hsi*13068+851844)*1+lsi)*1]), &(inteval->stack[((hsi*10890+906492)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+906492)*1+lsi)*1]), &(inteval->stack[((hsi*26136+880356)*1+lsi)*1]), &(inteval->stack[((hsi*21780+67674)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+67674)*1+lsi)*1]), &(inteval->stack[((hsi*43560+955398)*1+lsi)*1]), &(inteval->stack[((hsi*36300+906492)*1+lsi)*1]),66);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*76230+851844)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1209190)*1+lsi)*1]), &(inteval->stack[((hsi*54450+67674)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+928074)*1+lsi)*1]), &(inteval->stack[((hsi*8976+50778)*1+lsi)*1]), &(inteval->stack[((hsi*7920+59754)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+50778)*1+lsi)*1]), &(inteval->stack[((hsi*23760+928074)*1+lsi)*1]), &(inteval->stack[((hsi*20790+998958)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+928074)*1+lsi)*1]), &(inteval->stack[((hsi*41580+50778)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1121674)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+50778)*1+lsi)*1]), &(inteval->stack[((hsi*60060+928074)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1157710)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+928074)*1+lsi)*1]), &(inteval->stack[((hsi*77220+50778)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1209190)*1+lsi)*1]),66);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*101640+1121674)*1+lsi)*1]), &(inteval->stack[((hsi*91476+928074)*1+lsi)*1]), &(inteval->stack[((hsi*76230+851844)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*254100+1223314)*1+lsi)*1]), &(inteval->stack[((hsi*101640+1121674)*1+lsi)*1]), &(inteval->stack[((hsi*84700+1036974)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+851844)*1+lsi)*1]), &(inteval->stack[((hsi*3510+149889)*1+lsi)*1]), &(inteval->stack[((hsi*2970+153399)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+860754)*1+lsi)*1]), &(inteval->stack[((hsi*4095+145794)*1+lsi)*1]), &(inteval->stack[((hsi*3510+149889)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+871284)*1+lsi)*1]), &(inteval->stack[((hsi*10530+860754)*1+lsi)*1]), &(inteval->stack[((hsi*8910+851844)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+889104)*1+lsi)*1]), &(inteval->stack[((hsi*4725+141069)*1+lsi)*1]), &(inteval->stack[((hsi*4095+145794)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+901389)*1+lsi)*1]), &(inteval->stack[((hsi*12285+889104)*1+lsi)*1]), &(inteval->stack[((hsi*10530+860754)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+922449)*1+lsi)*1]), &(inteval->stack[((hsi*21060+901389)*1+lsi)*1]), &(inteval->stack[((hsi*17820+871284)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+952149)*1+lsi)*1]), &(inteval->stack[((hsi*5400+135669)*1+lsi)*1]), &(inteval->stack[((hsi*4725+141069)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+50778)*1+lsi)*1]), &(inteval->stack[((hsi*14175+952149)*1+lsi)*1]), &(inteval->stack[((hsi*12285+889104)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+966324)*1+lsi)*1]), &(inteval->stack[((hsi*24570+50778)*1+lsi)*1]), &(inteval->stack[((hsi*21060+901389)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+75348)*1+lsi)*1]), &(inteval->stack[((hsi*35100+966324)*1+lsi)*1]), &(inteval->stack[((hsi*29700+922449)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+1001424)*1+lsi)*1]), &(inteval->stack[((hsi*2970+153399)*1+lsi)*1]), &(inteval->stack[((hsi*2475+156369)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+889104)*1+lsi)*1]), &(inteval->stack[((hsi*8910+851844)*1+lsi)*1]), &(inteval->stack[((hsi*7425+1001424)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+1001424)*1+lsi)*1]), &(inteval->stack[((hsi*17820+871284)*1+lsi)*1]), &(inteval->stack[((hsi*14850+889104)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+851844)*1+lsi)*1]), &(inteval->stack[((hsi*29700+922449)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1001424)*1+lsi)*1]),45);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*51975+888969)*1+lsi)*1]), &(inteval->stack[((hsi*44550+75348)*1+lsi)*1]), &(inteval->stack[((hsi*37125+851844)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+851844)*1+lsi)*1]), &(inteval->stack[((hsi*6120+129549)*1+lsi)*1]), &(inteval->stack[((hsi*5400+135669)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+119898)*1+lsi)*1]), &(inteval->stack[((hsi*16200+851844)*1+lsi)*1]), &(inteval->stack[((hsi*14175+952149)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*28350+119898)*1+lsi)*1]), &(inteval->stack[((hsi*24570+50778)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+1518364)*1+lsi)*1]), &(inteval->stack[((hsi*40950+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*35100+966324)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+940944)*1+lsi)*1]), &(inteval->stack[((hsi*52650+1518364)*1+lsi)*1]), &(inteval->stack[((hsi*44550+75348)*1+lsi)*1]),45);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*69300+50778)*1+lsi)*1]), &(inteval->stack[((hsi*62370+940944)*1+lsi)*1]), &(inteval->stack[((hsi*51975+888969)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*207900+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*84700+1036974)*1+lsi)*1]), &(inteval->stack[((hsi*69300+50778)*1+lsi)*1]),1540);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*415800+1685314)*1+lsi)*1]), &(inteval->stack[((hsi*254100+1223314)*1+lsi)*1]), &(inteval->stack[((hsi*207900+1477414)*1+lsi)*1]),1540);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+851844)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+867288)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]), &(inteval->stack[((hsi*6084+35256)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+885540)*1+lsi)*1]), &(inteval->stack[((hsi*18252+867288)*1+lsi)*1]), &(inteval->stack[((hsi*15444+851844)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28158)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+916428)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*18252+867288)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1498708)*1+lsi)*1]), &(inteval->stack[((hsi*36504+916428)*1+lsi)*1]), &(inteval->stack[((hsi*30888+885540)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+952932)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]), &(inteval->stack[((hsi*8190+19968)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+977502)*1+lsi)*1]), &(inteval->stack[((hsi*24570+952932)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1477414)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1550188)*1+lsi)*1]), &(inteval->stack[((hsi*42588+977502)*1+lsi)*1]), &(inteval->stack[((hsi*36504+916428)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+50778)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1550188)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1498708)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+1020090)*1+lsi)*1]), &(inteval->stack[((hsi*5148+41340)*1+lsi)*1]), &(inteval->stack[((hsi*4290+46488)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+1032960)*1+lsi)*1]), &(inteval->stack[((hsi*15444+851844)*1+lsi)*1]), &(inteval->stack[((hsi*12870+1020090)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1611028)*1+lsi)*1]), &(inteval->stack[((hsi*30888+885540)*1+lsi)*1]), &(inteval->stack[((hsi*25740+1032960)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1020090)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1498708)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1611028)*1+lsi)*1]),78);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*90090+851844)*1+lsi)*1]), &(inteval->stack[((hsi*77220+50778)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1020090)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1020090)*1+lsi)*1]), &(inteval->stack[((hsi*10608+0)*1+lsi)*1]), &(inteval->stack[((hsi*9360+10608)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1611028)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1020090)*1+lsi)*1]), &(inteval->stack[((hsi*24570+952932)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1020090)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1611028)*1+lsi)*1]), &(inteval->stack[((hsi*42588+977502)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+2101114)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1020090)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1550188)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*91260+2101114)*1+lsi)*1]), &(inteval->stack[((hsi*77220+50778)*1+lsi)*1]),78);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*120120+941934)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1477414)*1+lsi)*1]), &(inteval->stack[((hsi*90090+851844)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*304920+2101114)*1+lsi)*1]), &(inteval->stack[((hsi*120120+941934)*1+lsi)*1]), &(inteval->stack[((hsi*101640+1121674)*1+lsi)*1]),1540);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*508200+2406034)*1+lsi)*1]), &(inteval->stack[((hsi*304920+2101114)*1+lsi)*1]), &(inteval->stack[((hsi*254100+1223314)*1+lsi)*1]),1540);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*693000+158844)*1+lsi)*1]), &(inteval->stack[((hsi*508200+2406034)*1+lsi)*1]), &(inteval->stack[((hsi*415800+1685314)*1+lsi)*1]),1540);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*693000+158844)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
