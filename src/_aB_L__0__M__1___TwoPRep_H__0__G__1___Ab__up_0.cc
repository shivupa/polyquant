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
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0lp.h>
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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__M__1___TwoPRep_H__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__M__1___TwoPRep_H__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,173800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__M__1___TwoPRep_H__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+953425)*1+lsi)*1]), &(inteval->stack[((hsi*4356+138644)*1+lsi)*1]), &(inteval->stack[((hsi*3630+143000)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+964315)*1+lsi)*1]), &(inteval->stack[((hsi*5148+133496)*1+lsi)*1]), &(inteval->stack[((hsi*4356+138644)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+977383)*1+lsi)*1]), &(inteval->stack[((hsi*13068+964315)*1+lsi)*1]), &(inteval->stack[((hsi*10890+953425)*1+lsi)*1]),66);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+999163)*1+lsi)*1]), &(inteval->stack[((hsi*6006+127490)*1+lsi)*1]), &(inteval->stack[((hsi*5148+133496)*1+lsi)*1]),66);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1014607)*1+lsi)*1]), &(inteval->stack[((hsi*15444+999163)*1+lsi)*1]), &(inteval->stack[((hsi*13068+964315)*1+lsi)*1]),66);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1040743)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1014607)*1+lsi)*1]), &(inteval->stack[((hsi*21780+977383)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+964315)*1+lsi)*1]), &(inteval->stack[((hsi*3630+143000)*1+lsi)*1]), &(inteval->stack[((hsi*2970+146630)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+1077043)*1+lsi)*1]), &(inteval->stack[((hsi*10890+953425)*1+lsi)*1]), &(inteval->stack[((hsi*8910+964315)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+1094863)*1+lsi)*1]), &(inteval->stack[((hsi*21780+977383)*1+lsi)*1]), &(inteval->stack[((hsi*17820+1077043)*1+lsi)*1]),66);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+953425)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1040743)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1094863)*1+lsi)*1]),66);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+1077043)*1+lsi)*1]), &(inteval->stack[((hsi*6930+120560)*1+lsi)*1]), &(inteval->stack[((hsi*6006+127490)*1+lsi)*1]),66);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+1095061)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1077043)*1+lsi)*1]), &(inteval->stack[((hsi*15444+999163)*1+lsi)*1]),66);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1125949)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1095061)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1014607)*1+lsi)*1]),66);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+1169509)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1125949)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1040743)*1+lsi)*1]),66);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+997975)*1+lsi)*1]), &(inteval->stack[((hsi*54450+1169509)*1+lsi)*1]), &(inteval->stack[((hsi*44550+953425)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+953425)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107612)*1+lsi)*1]), &(inteval->stack[((hsi*4290+112760)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+966295)*1+lsi)*1]), &(inteval->stack[((hsi*6084+101528)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107612)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+120560)*1+lsi)*1]), &(inteval->stack[((hsi*15444+966295)*1+lsi)*1]), &(inteval->stack[((hsi*12870+953425)*1+lsi)*1]),78);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*7098+94430)*1+lsi)*1]), &(inteval->stack[((hsi*6084+101528)*1+lsi)*1]),78);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1078597)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*15444+966295)*1+lsi)*1]),78);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+1109485)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1078597)*1+lsi)*1]), &(inteval->stack[((hsi*25740+120560)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+966295)*1+lsi)*1]), &(inteval->stack[((hsi*4290+112760)*1+lsi)*1]), &(inteval->stack[((hsi*3510+117050)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+976825)*1+lsi)*1]), &(inteval->stack[((hsi*12870+953425)*1+lsi)*1]), &(inteval->stack[((hsi*10530+966295)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+1152385)*1+lsi)*1]), &(inteval->stack[((hsi*25740+120560)*1+lsi)*1]), &(inteval->stack[((hsi*21060+976825)*1+lsi)*1]),78);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+1187485)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1109485)*1+lsi)*1]), &(inteval->stack[((hsi*35100+1152385)*1+lsi)*1]),78);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+101528)*1+lsi)*1]), &(inteval->stack[((hsi*8190+86240)*1+lsi)*1]), &(inteval->stack[((hsi*7098+94430)*1+lsi)*1]),78);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+953425)*1+lsi)*1]), &(inteval->stack[((hsi*21294+101528)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1060345)*1+lsi)*1]),78);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+86240)*1+lsi)*1]), &(inteval->stack[((hsi*36504+953425)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1078597)*1+lsi)*1]),78);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1240135)*1+lsi)*1]), &(inteval->stack[((hsi*51480+86240)*1+lsi)*1]), &(inteval->stack[((hsi*42900+1109485)*1+lsi)*1]),78);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1240135)*1+lsi)*1]), &(inteval->stack[((hsi*52650+1187485)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*187110+1134055)*1+lsi)*1]), &(inteval->stack[((hsi*73710+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*62370+997975)*1+lsi)*1]),945);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+86240)*1+lsi)*1]), &(inteval->stack[((hsi*6006+71134)*1+lsi)*1]), &(inteval->stack[((hsi*5005+77140)*1+lsi)*1]),91);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+101255)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64036)*1+lsi)*1]), &(inteval->stack[((hsi*6006+71134)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+953425)*1+lsi)*1]), &(inteval->stack[((hsi*18018+101255)*1+lsi)*1]), &(inteval->stack[((hsi*15015+86240)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+119273)*1+lsi)*1]), &(inteval->stack[((hsi*8281+55755)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64036)*1+lsi)*1]),91);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1321165)*1+lsi)*1]), &(inteval->stack[((hsi*21294+119273)*1+lsi)*1]), &(inteval->stack[((hsi*18018+101255)*1+lsi)*1]),91);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+1357201)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1321165)*1+lsi)*1]), &(inteval->stack[((hsi*30030+953425)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+101255)*1+lsi)*1]), &(inteval->stack[((hsi*5005+77140)*1+lsi)*1]), &(inteval->stack[((hsi*4095+82145)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+1407251)*1+lsi)*1]), &(inteval->stack[((hsi*15015+86240)*1+lsi)*1]), &(inteval->stack[((hsi*12285+101255)*1+lsi)*1]),91);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+64036)*1+lsi)*1]), &(inteval->stack[((hsi*30030+953425)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1407251)*1+lsi)*1]),91);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+1407251)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1357201)*1+lsi)*1]), &(inteval->stack[((hsi*40950+64036)*1+lsi)*1]),91);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+64036)*1+lsi)*1]), &(inteval->stack[((hsi*9555+46200)*1+lsi)*1]), &(inteval->stack[((hsi*8281+55755)*1+lsi)*1]),91);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+953425)*1+lsi)*1]), &(inteval->stack[((hsi*24843+64036)*1+lsi)*1]), &(inteval->stack[((hsi*21294+119273)*1+lsi)*1]),91);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+46200)*1+lsi)*1]), &(inteval->stack[((hsi*42588+953425)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1321165)*1+lsi)*1]),91);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1468676)*1+lsi)*1]), &(inteval->stack[((hsi*60060+46200)*1+lsi)*1]), &(inteval->stack[((hsi*50050+1357201)*1+lsi)*1]),91);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+46200)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1468676)*1+lsi)*1]), &(inteval->stack[((hsi*61425+1407251)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*221130+1321165)*1+lsi)*1]), &(inteval->stack[((hsi*85995+46200)*1+lsi)*1]), &(inteval->stack[((hsi*73710+1060345)*1+lsi)*1]),945);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*374220+1542295)*1+lsi)*1]), &(inteval->stack[((hsi*221130+1321165)*1+lsi)*1]), &(inteval->stack[((hsi*187110+1134055)*1+lsi)*1]),945);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*9075+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*3630+164670)*1+lsi)*1]), &(inteval->stack[((hsi*3025+168300)*1+lsi)*1]),55);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+1069420)*1+lsi)*1]), &(inteval->stack[((hsi*4290+160380)*1+lsi)*1]), &(inteval->stack[((hsi*3630+164670)*1+lsi)*1]),55);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*18150+1080310)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1069420)*1+lsi)*1]), &(inteval->stack[((hsi*9075+1060345)*1+lsi)*1]),55);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+953425)*1+lsi)*1]), &(inteval->stack[((hsi*5005+155375)*1+lsi)*1]), &(inteval->stack[((hsi*4290+160380)*1+lsi)*1]),55);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+1098460)*1+lsi)*1]), &(inteval->stack[((hsi*12870+953425)*1+lsi)*1]), &(inteval->stack[((hsi*10890+1069420)*1+lsi)*1]),55);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*30250+966295)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1098460)*1+lsi)*1]), &(inteval->stack[((hsi*18150+1080310)*1+lsi)*1]),55);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*7425+132195)*1+lsi)*1]), &(inteval->stack[((hsi*3025+168300)*1+lsi)*1]), &(inteval->stack[((hsi*2475+171325)*1+lsi)*1]),55);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*14850+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*9075+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*7425+132195)*1+lsi)*1]),55);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*24750+1931365)*1+lsi)*1]), &(inteval->stack[((hsi*18150+1080310)*1+lsi)*1]), &(inteval->stack[((hsi*14850+1916515)*1+lsi)*1]),55);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*37125+1060345)*1+lsi)*1]), &(inteval->stack[((hsi*30250+966295)*1+lsi)*1]), &(inteval->stack[((hsi*24750+1931365)*1+lsi)*1]),55);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+132195)*1+lsi)*1]), &(inteval->stack[((hsi*5775+149600)*1+lsi)*1]), &(inteval->stack[((hsi*5005+155375)*1+lsi)*1]),55);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+147210)*1+lsi)*1]), &(inteval->stack[((hsi*15015+132195)*1+lsi)*1]), &(inteval->stack[((hsi*12870+953425)*1+lsi)*1]),55);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*25740+147210)*1+lsi)*1]), &(inteval->stack[((hsi*21780+1098460)*1+lsi)*1]),55);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*45375+1952815)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*30250+966295)*1+lsi)*1]),55);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*51975+1998190)*1+lsi)*1]), &(inteval->stack[((hsi*45375+1952815)*1+lsi)*1]), &(inteval->stack[((hsi*37125+1060345)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*155925+2050165)*1+lsi)*1]), &(inteval->stack[((hsi*62370+997975)*1+lsi)*1]), &(inteval->stack[((hsi*51975+1998190)*1+lsi)*1]),945);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*311850+2206090)*1+lsi)*1]), &(inteval->stack[((hsi*187110+1134055)*1+lsi)*1]), &(inteval->stack[((hsi*155925+2050165)*1+lsi)*1]),945);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*519750+2517940)*1+lsi)*1]), &(inteval->stack[((hsi*374220+1542295)*1+lsi)*1]), &(inteval->stack[((hsi*311850+2206090)*1+lsi)*1]),945);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28770)*1+lsi)*1]), &(inteval->stack[((hsi*5775+35700)*1+lsi)*1]),105);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1933840)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20580)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28770)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+1954630)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1933840)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1916515)*1+lsi)*1]),105);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1989280)*1+lsi)*1]), &(inteval->stack[((hsi*9555+11025)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20580)*1+lsi)*1]),105);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+2013850)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1989280)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1933840)*1+lsi)*1]),105);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+2055430)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2013850)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1954630)*1+lsi)*1]),105);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+2113180)*1+lsi)*1]), &(inteval->stack[((hsi*5775+35700)*1+lsi)*1]), &(inteval->stack[((hsi*4725+41475)*1+lsi)*1]),105);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*28350+2127355)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*14175+2113180)*1+lsi)*1]),105);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*47250+953425)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1954630)*1+lsi)*1]), &(inteval->stack[((hsi*28350+2127355)*1+lsi)*1]),105);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*70875+2113180)*1+lsi)*1]), &(inteval->stack[((hsi*57750+2055430)*1+lsi)*1]), &(inteval->stack[((hsi*47250+953425)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+953425)*1+lsi)*1]), &(inteval->stack[((hsi*11025+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+11025)*1+lsi)*1]),105);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+982090)*1+lsi)*1]), &(inteval->stack[((hsi*28665+953425)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1989280)*1+lsi)*1]),105);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+2184055)*1+lsi)*1]), &(inteval->stack[((hsi*49140+982090)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2013850)*1+lsi)*1]),105);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+953425)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2184055)*1+lsi)*1]), &(inteval->stack[((hsi*57750+2055430)*1+lsi)*1]),105);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*99225+2184055)*1+lsi)*1]), &(inteval->stack[((hsi*86625+953425)*1+lsi)*1]), &(inteval->stack[((hsi*70875+2113180)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*257985+953425)*1+lsi)*1]), &(inteval->stack[((hsi*99225+2184055)*1+lsi)*1]), &(inteval->stack[((hsi*85995+46200)*1+lsi)*1]),945);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*442260+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*257985+953425)*1+lsi)*1]), &(inteval->stack[((hsi*221130+1321165)*1+lsi)*1]),945);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*623700+3037690)*1+lsi)*1]), &(inteval->stack[((hsi*442260+1916515)*1+lsi)*1]), &(inteval->stack[((hsi*374220+1542295)*1+lsi)*1]),945);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*779625+173800)*1+lsi)*1]), &(inteval->stack[((hsi*623700+3037690)*1+lsi)*1]), &(inteval->stack[((hsi*519750+2517940)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*779625+173800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
