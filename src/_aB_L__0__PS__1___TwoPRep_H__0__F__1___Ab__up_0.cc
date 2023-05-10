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
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,149600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_H__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+773300)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107612)*1+lsi)*1]), &(inteval->stack[((hsi*4290+112760)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+786170)*1+lsi)*1]), &(inteval->stack[((hsi*6084+101528)*1+lsi)*1]), &(inteval->stack[((hsi*5148+107612)*1+lsi)*1]),78);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*25740+801614)*1+lsi)*1]), &(inteval->stack[((hsi*15444+786170)*1+lsi)*1]), &(inteval->stack[((hsi*12870+773300)*1+lsi)*1]),78);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+827354)*1+lsi)*1]), &(inteval->stack[((hsi*7098+94430)*1+lsi)*1]), &(inteval->stack[((hsi*6084+101528)*1+lsi)*1]),78);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+845606)*1+lsi)*1]), &(inteval->stack[((hsi*18252+827354)*1+lsi)*1]), &(inteval->stack[((hsi*15444+786170)*1+lsi)*1]),78);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+876494)*1+lsi)*1]), &(inteval->stack[((hsi*30888+845606)*1+lsi)*1]), &(inteval->stack[((hsi*25740+801614)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+786170)*1+lsi)*1]), &(inteval->stack[((hsi*4290+112760)*1+lsi)*1]), &(inteval->stack[((hsi*3510+117050)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+919394)*1+lsi)*1]), &(inteval->stack[((hsi*12870+773300)*1+lsi)*1]), &(inteval->stack[((hsi*10530+786170)*1+lsi)*1]),78);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*35100+940454)*1+lsi)*1]), &(inteval->stack[((hsi*25740+801614)*1+lsi)*1]), &(inteval->stack[((hsi*21060+919394)*1+lsi)*1]),78);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*52650+773300)*1+lsi)*1]), &(inteval->stack[((hsi*42900+876494)*1+lsi)*1]), &(inteval->stack[((hsi*35100+940454)*1+lsi)*1]),78);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+919394)*1+lsi)*1]), &(inteval->stack[((hsi*8190+86240)*1+lsi)*1]), &(inteval->stack[((hsi*7098+94430)*1+lsi)*1]),78);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+940688)*1+lsi)*1]), &(inteval->stack[((hsi*21294+919394)*1+lsi)*1]), &(inteval->stack[((hsi*18252+827354)*1+lsi)*1]),78);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+977192)*1+lsi)*1]), &(inteval->stack[((hsi*36504+940688)*1+lsi)*1]), &(inteval->stack[((hsi*30888+845606)*1+lsi)*1]),78);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+1028672)*1+lsi)*1]), &(inteval->stack[((hsi*51480+977192)*1+lsi)*1]), &(inteval->stack[((hsi*42900+876494)*1+lsi)*1]),78);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*73710+825950)*1+lsi)*1]), &(inteval->stack[((hsi*64350+1028672)*1+lsi)*1]), &(inteval->stack[((hsi*52650+773300)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*15015+773300)*1+lsi)*1]), &(inteval->stack[((hsi*6006+71134)*1+lsi)*1]), &(inteval->stack[((hsi*5005+77140)*1+lsi)*1]),91);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+788315)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64036)*1+lsi)*1]), &(inteval->stack[((hsi*6006+71134)*1+lsi)*1]),91);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*30030+86240)*1+lsi)*1]), &(inteval->stack[((hsi*18018+788315)*1+lsi)*1]), &(inteval->stack[((hsi*15015+773300)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+899660)*1+lsi)*1]), &(inteval->stack[((hsi*8281+55755)*1+lsi)*1]), &(inteval->stack[((hsi*7098+64036)*1+lsi)*1]),91);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+920954)*1+lsi)*1]), &(inteval->stack[((hsi*21294+899660)*1+lsi)*1]), &(inteval->stack[((hsi*18018+788315)*1+lsi)*1]),91);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*50050+956990)*1+lsi)*1]), &(inteval->stack[((hsi*36036+920954)*1+lsi)*1]), &(inteval->stack[((hsi*30030+86240)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+788315)*1+lsi)*1]), &(inteval->stack[((hsi*5005+77140)*1+lsi)*1]), &(inteval->stack[((hsi*4095+82145)*1+lsi)*1]),91);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*24570+800600)*1+lsi)*1]), &(inteval->stack[((hsi*15015+773300)*1+lsi)*1]), &(inteval->stack[((hsi*12285+788315)*1+lsi)*1]),91);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*40950+1007040)*1+lsi)*1]), &(inteval->stack[((hsi*30030+86240)*1+lsi)*1]), &(inteval->stack[((hsi*24570+800600)*1+lsi)*1]),91);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*61425+1047990)*1+lsi)*1]), &(inteval->stack[((hsi*50050+956990)*1+lsi)*1]), &(inteval->stack[((hsi*40950+1007040)*1+lsi)*1]),91);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+64036)*1+lsi)*1]), &(inteval->stack[((hsi*9555+46200)*1+lsi)*1]), &(inteval->stack[((hsi*8281+55755)*1+lsi)*1]),91);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+773300)*1+lsi)*1]), &(inteval->stack[((hsi*24843+64036)*1+lsi)*1]), &(inteval->stack[((hsi*21294+899660)*1+lsi)*1]),91);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+46200)*1+lsi)*1]), &(inteval->stack[((hsi*42588+773300)*1+lsi)*1]), &(inteval->stack[((hsi*36036+920954)*1+lsi)*1]),91);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*75075+1109415)*1+lsi)*1]), &(inteval->stack[((hsi*60060+46200)*1+lsi)*1]), &(inteval->stack[((hsi*50050+956990)*1+lsi)*1]),91);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*85995+899660)*1+lsi)*1]), &(inteval->stack[((hsi*75075+1109415)*1+lsi)*1]), &(inteval->stack[((hsi*61425+1047990)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*221130+985655)*1+lsi)*1]), &(inteval->stack[((hsi*85995+899660)*1+lsi)*1]), &(inteval->stack[((hsi*73710+825950)*1+lsi)*1]),945);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+46200)*1+lsi)*1]), &(inteval->stack[((hsi*4356+138644)*1+lsi)*1]), &(inteval->stack[((hsi*3630+143000)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+57090)*1+lsi)*1]), &(inteval->stack[((hsi*5148+133496)*1+lsi)*1]), &(inteval->stack[((hsi*4356+138644)*1+lsi)*1]),66);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*21780+773300)*1+lsi)*1]), &(inteval->stack[((hsi*13068+57090)*1+lsi)*1]), &(inteval->stack[((hsi*10890+46200)*1+lsi)*1]),66);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+70158)*1+lsi)*1]), &(inteval->stack[((hsi*6006+127490)*1+lsi)*1]), &(inteval->stack[((hsi*5148+133496)*1+lsi)*1]),66);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+85602)*1+lsi)*1]), &(inteval->stack[((hsi*15444+70158)*1+lsi)*1]), &(inteval->stack[((hsi*13068+57090)*1+lsi)*1]),66);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*26136+85602)*1+lsi)*1]), &(inteval->stack[((hsi*21780+773300)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+795080)*1+lsi)*1]), &(inteval->stack[((hsi*3630+143000)*1+lsi)*1]), &(inteval->stack[((hsi*2970+146630)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+803990)*1+lsi)*1]), &(inteval->stack[((hsi*10890+46200)*1+lsi)*1]), &(inteval->stack[((hsi*8910+795080)*1+lsi)*1]),66);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*29700+1243085)*1+lsi)*1]), &(inteval->stack[((hsi*21780+773300)*1+lsi)*1]), &(inteval->stack[((hsi*17820+803990)*1+lsi)*1]),66);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*44550+773300)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*29700+1243085)*1+lsi)*1]),66);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+46200)*1+lsi)*1]), &(inteval->stack[((hsi*6930+120560)*1+lsi)*1]), &(inteval->stack[((hsi*6006+127490)*1+lsi)*1]),66);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+111738)*1+lsi)*1]), &(inteval->stack[((hsi*18018+46200)*1+lsi)*1]), &(inteval->stack[((hsi*15444+70158)*1+lsi)*1]),66);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1243085)*1+lsi)*1]), &(inteval->stack[((hsi*30888+111738)*1+lsi)*1]), &(inteval->stack[((hsi*26136+85602)*1+lsi)*1]),66);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+46200)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1243085)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1206785)*1+lsi)*1]),66);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*62370+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*54450+46200)*1+lsi)*1]), &(inteval->stack[((hsi*44550+773300)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*187110+1269155)*1+lsi)*1]), &(inteval->stack[((hsi*73710+825950)*1+lsi)*1]), &(inteval->stack[((hsi*62370+1206785)*1+lsi)*1]),945);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*374220+1456265)*1+lsi)*1]), &(inteval->stack[((hsi*221130+985655)*1+lsi)*1]), &(inteval->stack[((hsi*187110+1269155)*1+lsi)*1]),945);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*17325+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28770)*1+lsi)*1]), &(inteval->stack[((hsi*5775+35700)*1+lsi)*1]),105);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1224110)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20580)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28770)*1+lsi)*1]),105);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*34650+1244900)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1224110)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1206785)*1+lsi)*1]),105);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1279550)*1+lsi)*1]), &(inteval->stack[((hsi*9555+11025)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20580)*1+lsi)*1]),105);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1304120)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1279550)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1224110)*1+lsi)*1]),105);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*57750+773300)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1304120)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1244900)*1+lsi)*1]),105);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*14175+1345700)*1+lsi)*1]), &(inteval->stack[((hsi*5775+35700)*1+lsi)*1]), &(inteval->stack[((hsi*4725+41475)*1+lsi)*1]),105);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*28350+20580)*1+lsi)*1]), &(inteval->stack[((hsi*17325+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*14175+1345700)*1+lsi)*1]),105);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*47250+1345700)*1+lsi)*1]), &(inteval->stack[((hsi*34650+1244900)*1+lsi)*1]), &(inteval->stack[((hsi*28350+20580)*1+lsi)*1]),105);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*70875+20580)*1+lsi)*1]), &(inteval->stack[((hsi*57750+773300)*1+lsi)*1]), &(inteval->stack[((hsi*47250+1345700)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1345700)*1+lsi)*1]), &(inteval->stack[((hsi*11025+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+11025)*1+lsi)*1]),105);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1374365)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1345700)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1279550)*1+lsi)*1]),105);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1374365)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1304120)*1+lsi)*1]),105);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*86625+1276085)*1+lsi)*1]), &(inteval->stack[((hsi*69300+1206785)*1+lsi)*1]), &(inteval->stack[((hsi*57750+773300)*1+lsi)*1]),105);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*99225+773300)*1+lsi)*1]), &(inteval->stack[((hsi*86625+1276085)*1+lsi)*1]), &(inteval->stack[((hsi*70875+20580)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*257985+1830485)*1+lsi)*1]), &(inteval->stack[((hsi*99225+773300)*1+lsi)*1]), &(inteval->stack[((hsi*85995+899660)*1+lsi)*1]),945);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*442260+2088470)*1+lsi)*1]), &(inteval->stack[((hsi*257985+1830485)*1+lsi)*1]), &(inteval->stack[((hsi*221130+985655)*1+lsi)*1]),945);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*623700+149600)*1+lsi)*1]), &(inteval->stack[((hsi*442260+2088470)*1+lsi)*1]), &(inteval->stack[((hsi*374220+1456265)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*623700+149600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
