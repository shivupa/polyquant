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
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lk.h>
#include <HRRPart0bra0ket0ll.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdi.h>
#include <HRRPart1bra0ket0pdk.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfh.h>
#include <HRRPart1bra0ket0pfi.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgg.h>
#include <HRRPart1bra0ket0pgh.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0phf.h>
#include <HRRPart1bra0ket0phg.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pid.h>
#include <HRRPart1bra0ket0pif.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0pkd.h>
#include <HRRPart1bra0ket0pkp.h>
#include <HRRPart1bra0ket0plp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppk.h>
#include <HRRPart1bra0ket0ppl.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psl.h>
#include <HRRPart1bra0ket0psm.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1120680)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_L__0__M__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1048355)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1053360)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+8484300)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1042580)*1+lsi)*1]), &(inteval->stack[((hsi*5005+1048355)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+8499315)*1+lsi)*1]), &(inteval->stack[((hsi*15015+8484300)*1+lsi)*1]), &(inteval->stack[((hsi*12870+8471430)*1+lsi)*1]),55);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*17325+8525055)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1035980)*1+lsi)*1]), &(inteval->stack[((hsi*5775+1042580)*1+lsi)*1]),55);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*30030+8542380)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8525055)*1+lsi)*1]), &(inteval->stack[((hsi*15015+8484300)*1+lsi)*1]),55);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*42900+8572410)*1+lsi)*1]), &(inteval->stack[((hsi*30030+8542380)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8499315)*1+lsi)*1]),55);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*19800+8615310)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1028500)*1+lsi)*1]), &(inteval->stack[((hsi*6600+1035980)*1+lsi)*1]),55);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*34650+8635110)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8615310)*1+lsi)*1]), &(inteval->stack[((hsi*17325+8525055)*1+lsi)*1]),55);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*50050+8669760)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8635110)*1+lsi)*1]), &(inteval->stack[((hsi*30030+8542380)*1+lsi)*1]),55);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*64350+8719810)*1+lsi)*1]), &(inteval->stack[((hsi*50050+8669760)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8572410)*1+lsi)*1]),55);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*22440+8525055)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1020085)*1+lsi)*1]), &(inteval->stack[((hsi*7480+1028500)*1+lsi)*1]),55);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*39600+8784160)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8525055)*1+lsi)*1]), &(inteval->stack[((hsi*19800+8615310)*1+lsi)*1]),55);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*57750+8823760)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8784160)*1+lsi)*1]), &(inteval->stack[((hsi*34650+8635110)*1+lsi)*1]),55);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*75075+8881510)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8823760)*1+lsi)*1]), &(inteval->stack[((hsi*50050+8669760)*1+lsi)*1]),55);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*90090+8615310)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8881510)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8719810)*1+lsi)*1]),55);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*25245+8956585)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1010680)*1+lsi)*1]), &(inteval->stack[((hsi*8415+1020085)*1+lsi)*1]),55);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*44880+8981830)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8956585)*1+lsi)*1]), &(inteval->stack[((hsi*22440+8525055)*1+lsi)*1]),55);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*66000+9026710)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8981830)*1+lsi)*1]), &(inteval->stack[((hsi*39600+8784160)*1+lsi)*1]),55);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*86625+9092710)*1+lsi)*1]), &(inteval->stack[((hsi*66000+9026710)*1+lsi)*1]), &(inteval->stack[((hsi*57750+8823760)*1+lsi)*1]),55);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*105105+9179335)*1+lsi)*1]), &(inteval->stack[((hsi*86625+9092710)*1+lsi)*1]), &(inteval->stack[((hsi*75075+8881510)*1+lsi)*1]),55);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*120120+8784160)*1+lsi)*1]), &(inteval->stack[((hsi*105105+9179335)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8615310)*1+lsi)*1]),55);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*28215+8904280)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1000230)*1+lsi)*1]), &(inteval->stack[((hsi*9405+1010680)*1+lsi)*1]),55);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*50490+9284440)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8904280)*1+lsi)*1]), &(inteval->stack[((hsi*25245+8956585)*1+lsi)*1]),55);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*74800+9334930)*1+lsi)*1]), &(inteval->stack[((hsi*50490+9284440)*1+lsi)*1]), &(inteval->stack[((hsi*44880+8981830)*1+lsi)*1]),55);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*99000+9409730)*1+lsi)*1]), &(inteval->stack[((hsi*74800+9334930)*1+lsi)*1]), &(inteval->stack[((hsi*66000+9026710)*1+lsi)*1]),55);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*121275+8932495)*1+lsi)*1]), &(inteval->stack[((hsi*99000+9409730)*1+lsi)*1]), &(inteval->stack[((hsi*86625+9092710)*1+lsi)*1]),55);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*140140+9508730)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8932495)*1+lsi)*1]), &(inteval->stack[((hsi*105105+9179335)*1+lsi)*1]),55);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*154440+9053770)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9508730)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8784160)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*4290+1053360)*1+lsi)*1]), &(inteval->stack[((hsi*3630+1057650)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+9219100)*1+lsi)*1]), &(inteval->stack[((hsi*12870+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*10890+9208210)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+1010680)*1+lsi)*1]), &(inteval->stack[((hsi*25740+8499315)*1+lsi)*1]), &(inteval->stack[((hsi*21780+9219100)*1+lsi)*1]),55);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*54450+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*42900+8572410)*1+lsi)*1]), &(inteval->stack[((hsi*36300+1010680)*1+lsi)*1]),55);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*76230+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*64350+8719810)*1+lsi)*1]), &(inteval->stack[((hsi*54450+8471430)*1+lsi)*1]),55);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*101640+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8615310)*1+lsi)*1]), &(inteval->stack[((hsi*76230+9208210)*1+lsi)*1]),55);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*130680+8573070)*1+lsi)*1]), &(inteval->stack[((hsi*120120+8784160)*1+lsi)*1]), &(inteval->stack[((hsi*101640+8471430)*1+lsi)*1]),55);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*163350+8703750)*1+lsi)*1]), &(inteval->stack[((hsi*154440+9053770)*1+lsi)*1]), &(inteval->stack[((hsi*130680+8573070)*1+lsi)*1]),55);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*31350+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*11550+988680)*1+lsi)*1]), &(inteval->stack[((hsi*10450+1000230)*1+lsi)*1]),55);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*56430+8502780)*1+lsi)*1]), &(inteval->stack[((hsi*31350+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*28215+8904280)*1+lsi)*1]),55);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*84150+8559210)*1+lsi)*1]), &(inteval->stack[((hsi*56430+8502780)*1+lsi)*1]), &(inteval->stack[((hsi*50490+9284440)*1+lsi)*1]),55);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*112200+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*84150+8559210)*1+lsi)*1]), &(inteval->stack[((hsi*74800+9334930)*1+lsi)*1]),55);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*138600+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*112200+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*99000+9409730)*1+lsi)*1]),55);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*161700+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*138600+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*121275+8932495)*1+lsi)*1]),55);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*180180+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*161700+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*140140+9508730)*1+lsi)*1]),55);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*193050+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*180180+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*154440+9053770)*1+lsi)*1]),55);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*199650+8867100)*1+lsi)*1]), &(inteval->stack[((hsi*193050+9208210)*1+lsi)*1]), &(inteval->stack[((hsi*163350+8703750)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*6006+973170)*1+lsi)*1]), &(inteval->stack[((hsi*5148+979176)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+8486874)*1+lsi)*1]), &(inteval->stack[((hsi*6930+966240)*1+lsi)*1]), &(inteval->stack[((hsi*6006+973170)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+8504892)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8486874)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8471430)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+8535780)*1+lsi)*1]), &(inteval->stack[((hsi*7920+958320)*1+lsi)*1]), &(inteval->stack[((hsi*6930+966240)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+8556570)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8535780)*1+lsi)*1]), &(inteval->stack[((hsi*18018+8486874)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+8592606)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8556570)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8504892)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+8644086)*1+lsi)*1]), &(inteval->stack[((hsi*8976+949344)*1+lsi)*1]), &(inteval->stack[((hsi*7920+958320)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+8667846)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8644086)*1+lsi)*1]), &(inteval->stack[((hsi*20790+8535780)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+8709426)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8667846)*1+lsi)*1]), &(inteval->stack[((hsi*36036+8556570)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+8769486)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8709426)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8592606)*1+lsi)*1]),66);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*26928+988680)*1+lsi)*1]), &(inteval->stack[((hsi*10098+939246)*1+lsi)*1]), &(inteval->stack[((hsi*8976+949344)*1+lsi)*1]),66);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*47520+8535780)*1+lsi)*1]), &(inteval->stack[((hsi*26928+988680)*1+lsi)*1]), &(inteval->stack[((hsi*23760+8644086)*1+lsi)*1]),66);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*69300+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8535780)*1+lsi)*1]), &(inteval->stack[((hsi*41580+8667846)*1+lsi)*1]),66);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*90090+9136050)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*60060+8709426)*1+lsi)*1]),66);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*108108+8644086)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9136050)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8769486)*1+lsi)*1]),66);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*30294+1015608)*1+lsi)*1]), &(inteval->stack[((hsi*11286+927960)*1+lsi)*1]), &(inteval->stack[((hsi*10098+939246)*1+lsi)*1]),66);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*53856+9226140)*1+lsi)*1]), &(inteval->stack[((hsi*30294+1015608)*1+lsi)*1]), &(inteval->stack[((hsi*26928+988680)*1+lsi)*1]),66);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*79200+9279996)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9226140)*1+lsi)*1]), &(inteval->stack[((hsi*47520+8535780)*1+lsi)*1]),66);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*103950+9359196)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9279996)*1+lsi)*1]), &(inteval->stack[((hsi*69300+9066750)*1+lsi)*1]),66);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*126126+9463146)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9359196)*1+lsi)*1]), &(inteval->stack[((hsi*90090+9136050)*1+lsi)*1]),66);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*144144+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9463146)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8644086)*1+lsi)*1]),66);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*33858+8535780)*1+lsi)*1]), &(inteval->stack[((hsi*12540+915420)*1+lsi)*1]), &(inteval->stack[((hsi*11286+927960)*1+lsi)*1]),66);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*60588+9589272)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8535780)*1+lsi)*1]), &(inteval->stack[((hsi*30294+1015608)*1+lsi)*1]),66);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*89760+9649860)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9589272)*1+lsi)*1]), &(inteval->stack[((hsi*53856+9226140)*1+lsi)*1]),66);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*118800+9739620)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9649860)*1+lsi)*1]), &(inteval->stack[((hsi*79200+9279996)*1+lsi)*1]),66);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*145530+9210894)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9739620)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9359196)*1+lsi)*1]),66);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*168168+9858420)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9210894)*1+lsi)*1]), &(inteval->stack[((hsi*126126+9463146)*1+lsi)*1]),66);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*185328+9356424)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9858420)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9066750)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+988680)*1+lsi)*1]), &(inteval->stack[((hsi*5148+979176)*1+lsi)*1]), &(inteval->stack[((hsi*4356+984324)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+927960)*1+lsi)*1]), &(inteval->stack[((hsi*15444+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*13068+988680)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+954096)*1+lsi)*1]), &(inteval->stack[((hsi*30888+8504892)*1+lsi)*1]), &(inteval->stack[((hsi*26136+927960)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+10026588)*1+lsi)*1]), &(inteval->stack[((hsi*51480+8592606)*1+lsi)*1]), &(inteval->stack[((hsi*43560+954096)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+927960)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8769486)*1+lsi)*1]), &(inteval->stack[((hsi*65340+10026588)*1+lsi)*1]),66);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*121968+10026588)*1+lsi)*1]), &(inteval->stack[((hsi*108108+8644086)*1+lsi)*1]), &(inteval->stack[((hsi*91476+927960)*1+lsi)*1]),66);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*156816+8569638)*1+lsi)*1]), &(inteval->stack[((hsi*144144+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*121968+10026588)*1+lsi)*1]),66);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*196020+10026588)*1+lsi)*1]), &(inteval->stack[((hsi*185328+9356424)*1+lsi)*1]), &(inteval->stack[((hsi*156816+8569638)*1+lsi)*1]),66);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*37620+8569638)*1+lsi)*1]), &(inteval->stack[((hsi*13860+901560)*1+lsi)*1]), &(inteval->stack[((hsi*12540+915420)*1+lsi)*1]),66);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*67716+8607258)*1+lsi)*1]), &(inteval->stack[((hsi*37620+8569638)*1+lsi)*1]), &(inteval->stack[((hsi*33858+8535780)*1+lsi)*1]),66);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*100980+8674974)*1+lsi)*1]), &(inteval->stack[((hsi*67716+8607258)*1+lsi)*1]), &(inteval->stack[((hsi*60588+9589272)*1+lsi)*1]),66);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*134640+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*100980+8674974)*1+lsi)*1]), &(inteval->stack[((hsi*89760+9649860)*1+lsi)*1]),66);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*166320+8606070)*1+lsi)*1]), &(inteval->stack[((hsi*134640+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*118800+9739620)*1+lsi)*1]),66);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*194040+9541752)*1+lsi)*1]), &(inteval->stack[((hsi*166320+8606070)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9210894)*1+lsi)*1]),66);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*216216+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9541752)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9858420)*1+lsi)*1]),66);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*231660+9541752)*1+lsi)*1]), &(inteval->stack[((hsi*216216+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*185328+9356424)*1+lsi)*1]),66);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*239580+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9541752)*1+lsi)*1]), &(inteval->stack[((hsi*196020+10026588)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*598950+9306330)*1+lsi)*1]), &(inteval->stack[((hsi*239580+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*199650+8867100)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*7098+883230)*1+lsi)*1]), &(inteval->stack[((hsi*6084+890328)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+8489682)*1+lsi)*1]), &(inteval->stack[((hsi*8190+875040)*1+lsi)*1]), &(inteval->stack[((hsi*7098+883230)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+8510976)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8489682)*1+lsi)*1]), &(inteval->stack[((hsi*18252+8471430)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+8547480)*1+lsi)*1]), &(inteval->stack[((hsi*9360+865680)*1+lsi)*1]), &(inteval->stack[((hsi*8190+875040)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+8572050)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8547480)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8489682)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+8614638)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8572050)*1+lsi)*1]), &(inteval->stack[((hsi*36504+8510976)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+8675478)*1+lsi)*1]), &(inteval->stack[((hsi*10608+855072)*1+lsi)*1]), &(inteval->stack[((hsi*9360+865680)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+8703558)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8675478)*1+lsi)*1]), &(inteval->stack[((hsi*24570+8547480)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+901560)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8703558)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8572050)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+8752698)*1+lsi)*1]), &(inteval->stack[((hsi*70980+901560)*1+lsi)*1]), &(inteval->stack[((hsi*60840+8614638)*1+lsi)*1]),78);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*31824+972540)*1+lsi)*1]), &(inteval->stack[((hsi*11934+843138)*1+lsi)*1]), &(inteval->stack[((hsi*10608+855072)*1+lsi)*1]),78);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*56160+8547480)*1+lsi)*1]), &(inteval->stack[((hsi*31824+972540)*1+lsi)*1]), &(inteval->stack[((hsi*28080+8675478)*1+lsi)*1]),78);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*81900+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8547480)*1+lsi)*1]), &(inteval->stack[((hsi*49140+8703558)*1+lsi)*1]),78);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*106470+9987180)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*70980+901560)*1+lsi)*1]),78);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*127764+10093650)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9987180)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8752698)*1+lsi)*1]),78);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*35802+8675478)*1+lsi)*1]), &(inteval->stack[((hsi*13338+829800)*1+lsi)*1]), &(inteval->stack[((hsi*11934+843138)*1+lsi)*1]),78);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*63648+901560)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8675478)*1+lsi)*1]), &(inteval->stack[((hsi*31824+972540)*1+lsi)*1]),78);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*93600+965208)*1+lsi)*1]), &(inteval->stack[((hsi*63648+901560)*1+lsi)*1]), &(inteval->stack[((hsi*56160+8547480)*1+lsi)*1]),78);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*122850+10221414)*1+lsi)*1]), &(inteval->stack[((hsi*93600+965208)*1+lsi)*1]), &(inteval->stack[((hsi*81900+9905280)*1+lsi)*1]),78);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*149058+10344264)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10221414)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9987180)*1+lsi)*1]),78);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*170352+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10344264)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10093650)*1+lsi)*1]),78);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*40014+8547480)*1+lsi)*1]), &(inteval->stack[((hsi*14820+814980)*1+lsi)*1]), &(inteval->stack[((hsi*13338+829800)*1+lsi)*1]),78);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*71604+10493322)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8547480)*1+lsi)*1]), &(inteval->stack[((hsi*35802+8675478)*1+lsi)*1]),78);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*106080+10564926)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10493322)*1+lsi)*1]), &(inteval->stack[((hsi*63648+901560)*1+lsi)*1]),78);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*140400+10671006)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10564926)*1+lsi)*1]), &(inteval->stack[((hsi*93600+965208)*1+lsi)*1]),78);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*171990+10811406)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10671006)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10221414)*1+lsi)*1]),78);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*198744+10983396)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10811406)*1+lsi)*1]), &(inteval->stack[((hsi*149058+10344264)*1+lsi)*1]),78);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*219024+10221414)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10983396)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9905280)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+901560)*1+lsi)*1]), &(inteval->stack[((hsi*6084+890328)*1+lsi)*1]), &(inteval->stack[((hsi*5148+896412)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+917004)*1+lsi)*1]), &(inteval->stack[((hsi*18252+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*15444+901560)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+947892)*1+lsi)*1]), &(inteval->stack[((hsi*36504+8510976)*1+lsi)*1]), &(inteval->stack[((hsi*30888+917004)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+8675478)*1+lsi)*1]), &(inteval->stack[((hsi*60840+8614638)*1+lsi)*1]), &(inteval->stack[((hsi*51480+947892)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+829800)*1+lsi)*1]), &(inteval->stack[((hsi*91260+8752698)*1+lsi)*1]), &(inteval->stack[((hsi*77220+8675478)*1+lsi)*1]),78);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*144144+8587494)*1+lsi)*1]), &(inteval->stack[((hsi*127764+10093650)*1+lsi)*1]), &(inteval->stack[((hsi*108108+829800)*1+lsi)*1]),78);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*185328+829800)*1+lsi)*1]), &(inteval->stack[((hsi*170352+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*144144+8587494)*1+lsi)*1]),78);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*231660+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10221414)*1+lsi)*1]), &(inteval->stack[((hsi*185328+829800)*1+lsi)*1]),78);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*44460+8587494)*1+lsi)*1]), &(inteval->stack[((hsi*16380+798600)*1+lsi)*1]), &(inteval->stack[((hsi*14820+814980)*1+lsi)*1]),78);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*80028+798600)*1+lsi)*1]), &(inteval->stack[((hsi*44460+8587494)*1+lsi)*1]), &(inteval->stack[((hsi*40014+8547480)*1+lsi)*1]),78);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*119340+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*80028+798600)*1+lsi)*1]), &(inteval->stack[((hsi*71604+10493322)*1+lsi)*1]),78);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*159120+8590770)*1+lsi)*1]), &(inteval->stack[((hsi*119340+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*106080+10564926)*1+lsi)*1]),78);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*196560+798600)*1+lsi)*1]), &(inteval->stack[((hsi*159120+8590770)*1+lsi)*1]), &(inteval->stack[((hsi*140400+10671006)*1+lsi)*1]),78);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*229320+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*196560+798600)*1+lsi)*1]), &(inteval->stack[((hsi*171990+10811406)*1+lsi)*1]),78);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*255528+10440438)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*198744+10983396)*1+lsi)*1]),78);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*273780+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*255528+10440438)*1+lsi)*1]), &(inteval->stack[((hsi*219024+10221414)*1+lsi)*1]),78);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*283140+10136940)*1+lsi)*1]), &(inteval->stack[((hsi*273780+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*231660+9905280)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*718740+10420080)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10136940)*1+lsi)*1]), &(inteval->stack[((hsi*239580+9066750)*1+lsi)*1]),3630);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*1197900+11138820)*1+lsi)*1]), &(inteval->stack[((hsi*718740+10420080)*1+lsi)*1]), &(inteval->stack[((hsi*598950+9306330)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*8281+777215)*1+lsi)*1]), &(inteval->stack[((hsi*7098+785496)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+8492724)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767660)*1+lsi)*1]), &(inteval->stack[((hsi*8281+777215)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+8517567)*1+lsi)*1]), &(inteval->stack[((hsi*24843+8492724)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8471430)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+8560155)*1+lsi)*1]), &(inteval->stack[((hsi*10920+756740)*1+lsi)*1]), &(inteval->stack[((hsi*9555+767660)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+8588820)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8560155)*1+lsi)*1]), &(inteval->stack[((hsi*24843+8492724)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+798600)*1+lsi)*1]), &(inteval->stack[((hsi*49686+8588820)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8517567)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*12376+744364)*1+lsi)*1]), &(inteval->stack[((hsi*10920+756740)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*28665+8560155)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+8638506)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*49686+8588820)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+9099510)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8638506)*1+lsi)*1]), &(inteval->stack[((hsi*70980+798600)*1+lsi)*1]),91);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*37128+869580)*1+lsi)*1]), &(inteval->stack[((hsi*13923+730441)*1+lsi)*1]), &(inteval->stack[((hsi*12376+744364)*1+lsi)*1]),91);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*65520+9962610)*1+lsi)*1]), &(inteval->stack[((hsi*37128+869580)*1+lsi)*1]), &(inteval->stack[((hsi*32760+9066750)*1+lsi)*1]),91);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*95550+906708)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9962610)*1+lsi)*1]), &(inteval->stack[((hsi*57330+9905280)*1+lsi)*1]),91);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*124215+8721316)*1+lsi)*1]), &(inteval->stack[((hsi*95550+906708)*1+lsi)*1]), &(inteval->stack[((hsi*82810+8638506)*1+lsi)*1]),91);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*149058+8560155)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8721316)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9099510)*1+lsi)*1]),91);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*41769+10028130)*1+lsi)*1]), &(inteval->stack[((hsi*15561+714880)*1+lsi)*1]), &(inteval->stack[((hsi*13923+730441)*1+lsi)*1]),91);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*74256+9205980)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10028130)*1+lsi)*1]), &(inteval->stack[((hsi*37128+869580)*1+lsi)*1]),91);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*109200+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9205980)*1+lsi)*1]), &(inteval->stack[((hsi*65520+9962610)*1+lsi)*1]),91);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*143325+12445920)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*95550+906708)*1+lsi)*1]),91);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*173901+869580)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12445920)*1+lsi)*1]), &(inteval->stack[((hsi*124215+8721316)*1+lsi)*1]),91);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*198744+12589245)*1+lsi)*1]), &(inteval->stack[((hsi*173901+869580)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8560155)*1+lsi)*1]),91);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*46683+8709213)*1+lsi)*1]), &(inteval->stack[((hsi*17290+697590)*1+lsi)*1]), &(inteval->stack[((hsi*15561+714880)*1+lsi)*1]),91);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*83538+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8709213)*1+lsi)*1]), &(inteval->stack[((hsi*41769+10028130)*1+lsi)*1]),91);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*123760+9988818)*1+lsi)*1]), &(inteval->stack[((hsi*83538+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*74256+9205980)*1+lsi)*1]),91);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*163800+12787989)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9988818)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12336720)*1+lsi)*1]),91);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*200655+12951789)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12787989)*1+lsi)*1]), &(inteval->stack[((hsi*143325+12445920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*231868+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12951789)*1+lsi)*1]), &(inteval->stack[((hsi*173901+869580)*1+lsi)*1]),91);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*255528+13152444)*1+lsi)*1]), &(inteval->stack[((hsi*231868+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12589245)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+869580)*1+lsi)*1]), &(inteval->stack[((hsi*7098+785496)*1+lsi)*1]), &(inteval->stack[((hsi*6006+792594)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+887598)*1+lsi)*1]), &(inteval->stack[((hsi*21294+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*18018+869580)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+923634)*1+lsi)*1]), &(inteval->stack[((hsi*42588+8517567)*1+lsi)*1]), &(inteval->stack[((hsi*36036+887598)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+8755896)*1+lsi)*1]), &(inteval->stack[((hsi*70980+798600)*1+lsi)*1]), &(inteval->stack[((hsi*60060+923634)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+714880)*1+lsi)*1]), &(inteval->stack[((hsi*106470+9099510)*1+lsi)*1]), &(inteval->stack[((hsi*90090+8755896)*1+lsi)*1]),91);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*168168+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*149058+8560155)*1+lsi)*1]), &(inteval->stack[((hsi*126126+714880)*1+lsi)*1]),91);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*216216+714880)*1+lsi)*1]), &(inteval->stack[((hsi*198744+12589245)*1+lsi)*1]), &(inteval->stack[((hsi*168168+9066750)*1+lsi)*1]),91);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*270270+13407972)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13152444)*1+lsi)*1]), &(inteval->stack[((hsi*216216+714880)*1+lsi)*1]),91);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*51870+714880)*1+lsi)*1]), &(inteval->stack[((hsi*19110+678480)*1+lsi)*1]), &(inteval->stack[((hsi*17290+697590)*1+lsi)*1]),91);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*93366+766750)*1+lsi)*1]), &(inteval->stack[((hsi*51870+714880)*1+lsi)*1]), &(inteval->stack[((hsi*46683+8709213)*1+lsi)*1]),91);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*139230+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*93366+766750)*1+lsi)*1]), &(inteval->stack[((hsi*83538+9905280)*1+lsi)*1]),91);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*185640+678480)*1+lsi)*1]), &(inteval->stack[((hsi*139230+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*123760+9988818)*1+lsi)*1]),91);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*229320+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*185640+678480)*1+lsi)*1]), &(inteval->stack[((hsi*163800+12787989)*1+lsi)*1]),91);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*267540+12568588)*1+lsi)*1]), &(inteval->stack[((hsi*229320+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*200655+12951789)*1+lsi)*1]),91);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*298116+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*267540+12568588)*1+lsi)*1]), &(inteval->stack[((hsi*231868+12336720)*1+lsi)*1]),91);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*319410+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*298116+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*255528+13152444)*1+lsi)*1]),91);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*330330+12656130)*1+lsi)*1]), &(inteval->stack[((hsi*319410+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*270270+13407972)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*849420+12986460)*1+lsi)*1]), &(inteval->stack[((hsi*330330+12656130)*1+lsi)*1]), &(inteval->stack[((hsi*283140+10136940)*1+lsi)*1]),3630);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*1437480+13835880)*1+lsi)*1]), &(inteval->stack[((hsi*849420+12986460)*1+lsi)*1]), &(inteval->stack[((hsi*718740+10420080)*1+lsi)*1]),3630);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*1996500+15273360)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+13835880)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11138820)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*9555+653805)*1+lsi)*1]), &(inteval->stack[((hsi*8190+663360)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+9929850)*1+lsi)*1]), &(inteval->stack[((hsi*11025+642780)*1+lsi)*1]), &(inteval->stack[((hsi*9555+653805)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+9958515)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9929850)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9905280)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+10007655)*1+lsi)*1]), &(inteval->stack[((hsi*12600+630180)*1+lsi)*1]), &(inteval->stack[((hsi*11025+642780)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+10040730)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10007655)*1+lsi)*1]), &(inteval->stack[((hsi*28665+9929850)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+10098060)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10040730)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9958515)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+10179960)*1+lsi)*1]), &(inteval->stack[((hsi*14280+615900)*1+lsi)*1]), &(inteval->stack[((hsi*12600+630180)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+10217760)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10179960)*1+lsi)*1]), &(inteval->stack[((hsi*33075+10007655)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+10283910)*1+lsi)*1]), &(inteval->stack[((hsi*66150+10217760)*1+lsi)*1]), &(inteval->stack[((hsi*57330+10040730)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+10379460)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10283910)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10098060)*1+lsi)*1]),105);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*42840+10502310)*1+lsi)*1]), &(inteval->stack[((hsi*16065+599835)*1+lsi)*1]), &(inteval->stack[((hsi*14280+615900)*1+lsi)*1]),105);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*75600+10545150)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10502310)*1+lsi)*1]), &(inteval->stack[((hsi*37800+10179960)*1+lsi)*1]),105);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*110250+10620750)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10545150)*1+lsi)*1]), &(inteval->stack[((hsi*66150+10217760)*1+lsi)*1]),105);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*143325+10731000)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10620750)*1+lsi)*1]), &(inteval->stack[((hsi*95550+10283910)*1+lsi)*1]),105);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*171990+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10731000)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10379460)*1+lsi)*1]),105);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*48195+678480)*1+lsi)*1]), &(inteval->stack[((hsi*17955+581880)*1+lsi)*1]), &(inteval->stack[((hsi*16065+599835)*1+lsi)*1]),105);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*85680+726675)*1+lsi)*1]), &(inteval->stack[((hsi*48195+678480)*1+lsi)*1]), &(inteval->stack[((hsi*42840+10502310)*1+lsi)*1]),105);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*126000+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*85680+726675)*1+lsi)*1]), &(inteval->stack[((hsi*75600+10545150)*1+lsi)*1]),105);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*165375+10874325)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*110250+10620750)*1+lsi)*1]),105);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*200655+812355)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10874325)*1+lsi)*1]), &(inteval->stack[((hsi*143325+10731000)*1+lsi)*1]),105);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*229320+10502310)*1+lsi)*1]), &(inteval->stack[((hsi*200655+812355)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8471430)*1+lsi)*1]),105);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*53865+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*19950+561930)*1+lsi)*1]), &(inteval->stack[((hsi*17955+581880)*1+lsi)*1]),105);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*96390+8643420)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*48195+678480)*1+lsi)*1]),105);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*142800+10179960)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8643420)*1+lsi)*1]), &(inteval->stack[((hsi*85680+726675)*1+lsi)*1]),105);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*189000+12462720)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10179960)*1+lsi)*1]), &(inteval->stack[((hsi*126000+12336720)*1+lsi)*1]),105);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*231525+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12462720)*1+lsi)*1]), &(inteval->stack[((hsi*165375+10874325)*1+lsi)*1]),105);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*267540+10731630)*1+lsi)*1]), &(inteval->stack[((hsi*231525+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*200655+812355)*1+lsi)*1]),105);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*294840+678480)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10731630)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10502310)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+9120615)*1+lsi)*1]), &(inteval->stack[((hsi*8190+663360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+671550)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+9141405)*1+lsi)*1]), &(inteval->stack[((hsi*24570+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*20790+9120615)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+10999170)*1+lsi)*1]), &(inteval->stack[((hsi*49140+9958515)*1+lsi)*1]), &(inteval->stack[((hsi*41580+9141405)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*81900+10098060)*1+lsi)*1]), &(inteval->stack[((hsi*69300+10999170)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+9120615)*1+lsi)*1]), &(inteval->stack[((hsi*122850+10379460)*1+lsi)*1]), &(inteval->stack[((hsi*103950+9905280)*1+lsi)*1]),105);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*194040+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*171990+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*145530+9120615)*1+lsi)*1]),105);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*249480+17501385)*1+lsi)*1]), &(inteval->stack[((hsi*229320+10502310)*1+lsi)*1]), &(inteval->stack[((hsi*194040+9905280)*1+lsi)*1]),105);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*311850+10322760)*1+lsi)*1]), &(inteval->stack[((hsi*294840+678480)*1+lsi)*1]), &(inteval->stack[((hsi*249480+17501385)*1+lsi)*1]),105);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*59850+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*22050+539880)*1+lsi)*1]), &(inteval->stack[((hsi*19950+561930)*1+lsi)*1]),105);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*107730+9965130)*1+lsi)*1]), &(inteval->stack[((hsi*59850+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*53865+9066750)*1+lsi)*1]),105);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*160650+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*107730+9965130)*1+lsi)*1]), &(inteval->stack[((hsi*96390+8643420)*1+lsi)*1]),105);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*214200+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*160650+9066750)*1+lsi)*1]), &(inteval->stack[((hsi*142800+10179960)*1+lsi)*1]),105);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*264600+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*214200+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*189000+12462720)*1+lsi)*1]),105);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*308700+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*264600+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*231525+17269860)*1+lsi)*1]),105);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*343980+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*308700+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*267540+10731630)*1+lsi)*1]),105);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*368550+10634610)*1+lsi)*1]), &(inteval->stack[((hsi*343980+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*294840+678480)*1+lsi)*1]),105);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*381150+539880)*1+lsi)*1]), &(inteval->stack[((hsi*368550+10634610)*1+lsi)*1]), &(inteval->stack[((hsi*311850+10322760)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*990990+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*381150+539880)*1+lsi)*1]), &(inteval->stack[((hsi*330330+12656130)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*1698840+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*990990+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*849420+12986460)*1+lsi)*1]),3630);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*2395800+18968700)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*1437480+13835880)*1+lsi)*1]),3630);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*2994750+21364500)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+18968700)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+15273360)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*10920+511680)*1+lsi)*1]), &(inteval->stack[((hsi*9360+522600)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+12364800)*1+lsi)*1]), &(inteval->stack[((hsi*12600+499080)*1+lsi)*1]), &(inteval->stack[((hsi*10920+511680)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+12397560)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12364800)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12336720)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+12453720)*1+lsi)*1]), &(inteval->stack[((hsi*14400+484680)*1+lsi)*1]), &(inteval->stack[((hsi*12600+499080)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+12491520)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12453720)*1+lsi)*1]), &(inteval->stack[((hsi*32760+12364800)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+12557040)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12491520)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12397560)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+12650640)*1+lsi)*1]), &(inteval->stack[((hsi*16320+468360)*1+lsi)*1]), &(inteval->stack[((hsi*14400+484680)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+12693840)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12650640)*1+lsi)*1]), &(inteval->stack[((hsi*37800+12453720)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+12769440)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12693840)*1+lsi)*1]), &(inteval->stack[((hsi*65520+12491520)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+12878640)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12769440)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12557040)*1+lsi)*1]),120);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*48960+13019040)*1+lsi)*1]), &(inteval->stack[((hsi*18360+450000)*1+lsi)*1]), &(inteval->stack[((hsi*16320+468360)*1+lsi)*1]),120);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*86400+13068000)*1+lsi)*1]), &(inteval->stack[((hsi*48960+13019040)*1+lsi)*1]), &(inteval->stack[((hsi*43200+12650640)*1+lsi)*1]),120);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*126000+13154400)*1+lsi)*1]), &(inteval->stack[((hsi*86400+13068000)*1+lsi)*1]), &(inteval->stack[((hsi*75600+12693840)*1+lsi)*1]),120);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*163800+13280400)*1+lsi)*1]), &(inteval->stack[((hsi*126000+13154400)*1+lsi)*1]), &(inteval->stack[((hsi*109200+12769440)*1+lsi)*1]),120);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*196560+13444200)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13280400)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12878640)*1+lsi)*1]),120);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*55080+13640760)*1+lsi)*1]), &(inteval->stack[((hsi*20520+429480)*1+lsi)*1]), &(inteval->stack[((hsi*18360+450000)*1+lsi)*1]),120);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*97920+13695840)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13640760)*1+lsi)*1]), &(inteval->stack[((hsi*48960+13019040)*1+lsi)*1]),120);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*144000+13793760)*1+lsi)*1]), &(inteval->stack[((hsi*97920+13695840)*1+lsi)*1]), &(inteval->stack[((hsi*86400+13068000)*1+lsi)*1]),120);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*189000+13937760)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13793760)*1+lsi)*1]), &(inteval->stack[((hsi*126000+13154400)*1+lsi)*1]),120);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*229320+14126760)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13937760)*1+lsi)*1]), &(inteval->stack[((hsi*163800+13280400)*1+lsi)*1]),120);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*262080+14356080)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14126760)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13444200)*1+lsi)*1]),120);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*61560+14618160)*1+lsi)*1]), &(inteval->stack[((hsi*22800+406680)*1+lsi)*1]), &(inteval->stack[((hsi*20520+429480)*1+lsi)*1]),120);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*110160+14679720)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14618160)*1+lsi)*1]), &(inteval->stack[((hsi*55080+13640760)*1+lsi)*1]),120);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*163200+14789880)*1+lsi)*1]), &(inteval->stack[((hsi*110160+14679720)*1+lsi)*1]), &(inteval->stack[((hsi*97920+13695840)*1+lsi)*1]),120);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*216000+13019040)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14789880)*1+lsi)*1]), &(inteval->stack[((hsi*144000+13793760)*1+lsi)*1]),120);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*264600+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13019040)*1+lsi)*1]), &(inteval->stack[((hsi*189000+13937760)*1+lsi)*1]),120);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*305760+13640760)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*229320+14126760)*1+lsi)*1]),120);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*336960+13946520)*1+lsi)*1]), &(inteval->stack[((hsi*305760+13640760)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14356080)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+14953080)*1+lsi)*1]), &(inteval->stack[((hsi*9360+522600)*1+lsi)*1]), &(inteval->stack[((hsi*7920+531960)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+14976840)*1+lsi)*1]), &(inteval->stack[((hsi*28080+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*23760+14953080)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+15024360)*1+lsi)*1]), &(inteval->stack[((hsi*56160+12397560)*1+lsi)*1]), &(inteval->stack[((hsi*47520+14976840)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+10896270)*1+lsi)*1]), &(inteval->stack[((hsi*93600+12557040)*1+lsi)*1]), &(inteval->stack[((hsi*79200+15024360)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*140400+12878640)*1+lsi)*1]), &(inteval->stack[((hsi*118800+10896270)*1+lsi)*1]),120);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*221760+12503040)*1+lsi)*1]), &(inteval->stack[((hsi*196560+13444200)*1+lsi)*1]), &(inteval->stack[((hsi*166320+12336720)*1+lsi)*1]),120);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*285120+13235040)*1+lsi)*1]), &(inteval->stack[((hsi*262080+14356080)*1+lsi)*1]), &(inteval->stack[((hsi*221760+12503040)*1+lsi)*1]),120);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*356400+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*336960+13946520)*1+lsi)*1]), &(inteval->stack[((hsi*285120+13235040)*1+lsi)*1]),120);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*68400+13235040)*1+lsi)*1]), &(inteval->stack[((hsi*25200+381480)*1+lsi)*1]), &(inteval->stack[((hsi*22800+406680)*1+lsi)*1]),120);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*123120+13303440)*1+lsi)*1]), &(inteval->stack[((hsi*68400+13235040)*1+lsi)*1]), &(inteval->stack[((hsi*61560+14618160)*1+lsi)*1]),120);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*183600+14283480)*1+lsi)*1]), &(inteval->stack[((hsi*123120+13303440)*1+lsi)*1]), &(inteval->stack[((hsi*110160+14679720)*1+lsi)*1]),120);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*244800+13235040)*1+lsi)*1]), &(inteval->stack[((hsi*183600+14283480)*1+lsi)*1]), &(inteval->stack[((hsi*163200+14789880)*1+lsi)*1]),120);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*302400+14283480)*1+lsi)*1]), &(inteval->stack[((hsi*244800+13235040)*1+lsi)*1]), &(inteval->stack[((hsi*216000+13019040)*1+lsi)*1]),120);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*352800+12693120)*1+lsi)*1]), &(inteval->stack[((hsi*302400+14283480)*1+lsi)*1]), &(inteval->stack[((hsi*264600+8471430)*1+lsi)*1]),120);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*393120+14283480)*1+lsi)*1]), &(inteval->stack[((hsi*352800+12693120)*1+lsi)*1]), &(inteval->stack[((hsi*305760+13640760)*1+lsi)*1]),120);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*421200+12693120)*1+lsi)*1]), &(inteval->stack[((hsi*393120+14283480)*1+lsi)*1]), &(inteval->stack[((hsi*336960+13946520)*1+lsi)*1]),120);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*435600+13114320)*1+lsi)*1]), &(inteval->stack[((hsi*421200+12693120)*1+lsi)*1]), &(inteval->stack[((hsi*356400+12336720)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*1143450+13549920)*1+lsi)*1]), &(inteval->stack[((hsi*435600+13114320)*1+lsi)*1]), &(inteval->stack[((hsi*381150+539880)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*1981980+24359250)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+13549920)*1+lsi)*1]), &(inteval->stack[((hsi*990990+9905280)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*2831400+26341230)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+24359250)*1+lsi)*1]), &(inteval->stack[((hsi*1698840+17269860)*1+lsi)*1]),3630);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*3593700+29172630)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+26341230)*1+lsi)*1]), &(inteval->stack[((hsi*2395800+18968700)*1+lsi)*1]),3630);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*4192650+32766330)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+29172630)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+21364500)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*31824+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*12376+349520)*1+lsi)*1]), &(inteval->stack[((hsi*10608+361896)*1+lsi)*1]),136);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*37128+17301684)*1+lsi)*1]), &(inteval->stack[((hsi*14280+335240)*1+lsi)*1]), &(inteval->stack[((hsi*12376+349520)*1+lsi)*1]),136);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*63648+17338812)*1+lsi)*1]), &(inteval->stack[((hsi*37128+17301684)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17269860)*1+lsi)*1]),136);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*42840+17402460)*1+lsi)*1]), &(inteval->stack[((hsi*16320+318920)*1+lsi)*1]), &(inteval->stack[((hsi*14280+335240)*1+lsi)*1]),136);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*74256+17445300)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17402460)*1+lsi)*1]), &(inteval->stack[((hsi*37128+17301684)*1+lsi)*1]),136);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*106080+17519556)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17445300)*1+lsi)*1]), &(inteval->stack[((hsi*63648+17338812)*1+lsi)*1]),136);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*48960+17625636)*1+lsi)*1]), &(inteval->stack[((hsi*18496+300424)*1+lsi)*1]), &(inteval->stack[((hsi*16320+318920)*1+lsi)*1]),136);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*85680+17674596)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17625636)*1+lsi)*1]), &(inteval->stack[((hsi*42840+17402460)*1+lsi)*1]),136);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*123760+17760276)*1+lsi)*1]), &(inteval->stack[((hsi*85680+17674596)*1+lsi)*1]), &(inteval->stack[((hsi*74256+17445300)*1+lsi)*1]),136);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*159120+17884036)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17760276)*1+lsi)*1]), &(inteval->stack[((hsi*106080+17519556)*1+lsi)*1]),136);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*55488+18043156)*1+lsi)*1]), &(inteval->stack[((hsi*20808+279616)*1+lsi)*1]), &(inteval->stack[((hsi*18496+300424)*1+lsi)*1]),136);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*97920+18098644)*1+lsi)*1]), &(inteval->stack[((hsi*55488+18043156)*1+lsi)*1]), &(inteval->stack[((hsi*48960+17625636)*1+lsi)*1]),136);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*142800+18196564)*1+lsi)*1]), &(inteval->stack[((hsi*97920+18098644)*1+lsi)*1]), &(inteval->stack[((hsi*85680+17674596)*1+lsi)*1]),136);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*185640+18339364)*1+lsi)*1]), &(inteval->stack[((hsi*142800+18196564)*1+lsi)*1]), &(inteval->stack[((hsi*123760+17760276)*1+lsi)*1]),136);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*222768+18525004)*1+lsi)*1]), &(inteval->stack[((hsi*185640+18339364)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17884036)*1+lsi)*1]),136);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*62424+18747772)*1+lsi)*1]), &(inteval->stack[((hsi*23256+256360)*1+lsi)*1]), &(inteval->stack[((hsi*20808+279616)*1+lsi)*1]),136);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*110976+18810196)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18747772)*1+lsi)*1]), &(inteval->stack[((hsi*55488+18043156)*1+lsi)*1]),136);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*163200+18921172)*1+lsi)*1]), &(inteval->stack[((hsi*110976+18810196)*1+lsi)*1]), &(inteval->stack[((hsi*97920+18098644)*1+lsi)*1]),136);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*214200+19084372)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18921172)*1+lsi)*1]), &(inteval->stack[((hsi*142800+18196564)*1+lsi)*1]),136);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*259896+19298572)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19084372)*1+lsi)*1]), &(inteval->stack[((hsi*185640+18339364)*1+lsi)*1]),136);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*297024+19558468)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19298572)*1+lsi)*1]), &(inteval->stack[((hsi*222768+18525004)*1+lsi)*1]),136);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*69768+19855492)*1+lsi)*1]), &(inteval->stack[((hsi*25840+230520)*1+lsi)*1]), &(inteval->stack[((hsi*23256+256360)*1+lsi)*1]),136);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*124848+19925260)*1+lsi)*1]), &(inteval->stack[((hsi*69768+19855492)*1+lsi)*1]), &(inteval->stack[((hsi*62424+18747772)*1+lsi)*1]),136);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*184960+20050108)*1+lsi)*1]), &(inteval->stack[((hsi*124848+19925260)*1+lsi)*1]), &(inteval->stack[((hsi*110976+18810196)*1+lsi)*1]),136);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*244800+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*184960+20050108)*1+lsi)*1]), &(inteval->stack[((hsi*163200+18921172)*1+lsi)*1]),136);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*299880+20235068)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9905280)*1+lsi)*1]), &(inteval->stack[((hsi*214200+19084372)*1+lsi)*1]),136);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*346528+10150080)*1+lsi)*1]), &(inteval->stack[((hsi*299880+20235068)*1+lsi)*1]), &(inteval->stack[((hsi*259896+19298572)*1+lsi)*1]),136);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*381888+20534948)*1+lsi)*1]), &(inteval->stack[((hsi*346528+10150080)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19558468)*1+lsi)*1]),136);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*26928+18747772)*1+lsi)*1]), &(inteval->stack[((hsi*10608+361896)*1+lsi)*1]), &(inteval->stack[((hsi*8976+372504)*1+lsi)*1]),136);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*53856+256360)*1+lsi)*1]), &(inteval->stack[((hsi*31824+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*26928+18747772)*1+lsi)*1]),136);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*89760+18747772)*1+lsi)*1]), &(inteval->stack[((hsi*63648+17338812)*1+lsi)*1]), &(inteval->stack[((hsi*53856+256360)*1+lsi)*1]),136);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*134640+256360)*1+lsi)*1]), &(inteval->stack[((hsi*106080+17519556)*1+lsi)*1]), &(inteval->stack[((hsi*89760+18747772)*1+lsi)*1]),136);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*188496+18747772)*1+lsi)*1]), &(inteval->stack[((hsi*159120+17884036)*1+lsi)*1]), &(inteval->stack[((hsi*134640+256360)*1+lsi)*1]),136);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*251328+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*222768+18525004)*1+lsi)*1]), &(inteval->stack[((hsi*188496+18747772)*1+lsi)*1]),136);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*323136+17521188)*1+lsi)*1]), &(inteval->stack[((hsi*297024+19558468)*1+lsi)*1]), &(inteval->stack[((hsi*251328+17269860)*1+lsi)*1]),136);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*403920+17844324)*1+lsi)*1]), &(inteval->stack[((hsi*381888+20534948)*1+lsi)*1]), &(inteval->stack[((hsi*323136+17521188)*1+lsi)*1]),136);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*77520+18248244)*1+lsi)*1]), &(inteval->stack[((hsi*28560+201960)*1+lsi)*1]), &(inteval->stack[((hsi*25840+230520)*1+lsi)*1]),136);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*139536+18325764)*1+lsi)*1]), &(inteval->stack[((hsi*77520+18248244)*1+lsi)*1]), &(inteval->stack[((hsi*69768+19855492)*1+lsi)*1]),136);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*208080+18465300)*1+lsi)*1]), &(inteval->stack[((hsi*139536+18325764)*1+lsi)*1]), &(inteval->stack[((hsi*124848+19925260)*1+lsi)*1]),136);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*277440+18673380)*1+lsi)*1]), &(inteval->stack[((hsi*208080+18465300)*1+lsi)*1]), &(inteval->stack[((hsi*184960+20050108)*1+lsi)*1]),136);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*342720+18950820)*1+lsi)*1]), &(inteval->stack[((hsi*277440+18673380)*1+lsi)*1]), &(inteval->stack[((hsi*244800+9905280)*1+lsi)*1]),136);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*399840+19293540)*1+lsi)*1]), &(inteval->stack[((hsi*342720+18950820)*1+lsi)*1]), &(inteval->stack[((hsi*299880+20235068)*1+lsi)*1]),136);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*445536+18248244)*1+lsi)*1]), &(inteval->stack[((hsi*399840+19293540)*1+lsi)*1]), &(inteval->stack[((hsi*346528+10150080)*1+lsi)*1]),136);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*477360+18693780)*1+lsi)*1]), &(inteval->stack[((hsi*445536+18248244)*1+lsi)*1]), &(inteval->stack[((hsi*381888+20534948)*1+lsi)*1]),136);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*493680+19171140)*1+lsi)*1]), &(inteval->stack[((hsi*477360+18693780)*1+lsi)*1]), &(inteval->stack[((hsi*403920+17844324)*1+lsi)*1]),136);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*1306800+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*493680+19171140)*1+lsi)*1]), &(inteval->stack[((hsi*435600+13114320)*1+lsi)*1]),3630);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*2286900+36958980)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+17269860)*1+lsi)*1]), &(inteval->stack[((hsi*1143450+13549920)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*3303300+39245880)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+36958980)*1+lsi)*1]), &(inteval->stack[((hsi*1981980+24359250)*1+lsi)*1]),3630);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*4247100+42549180)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+39245880)*1+lsi)*1]), &(inteval->stack[((hsi*2831400+26341230)*1+lsi)*1]),3630);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*5031180+46796280)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+42549180)*1+lsi)*1]), &(inteval->stack[((hsi*3593700+29172630)*1+lsi)*1]),3630);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*5590200+24359250)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+46796280)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+32766330)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*4095+1110105)*1+lsi)*1]), &(inteval->stack[((hsi*3510+1114200)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+12347250)*1+lsi)*1]), &(inteval->stack[((hsi*4725+1105380)*1+lsi)*1]), &(inteval->stack[((hsi*4095+1110105)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+12359535)*1+lsi)*1]), &(inteval->stack[((hsi*12285+12347250)*1+lsi)*1]), &(inteval->stack[((hsi*10530+12336720)*1+lsi)*1]),45);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*14175+12380595)*1+lsi)*1]), &(inteval->stack[((hsi*5400+1099980)*1+lsi)*1]), &(inteval->stack[((hsi*4725+1105380)*1+lsi)*1]),45);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*24570+12394770)*1+lsi)*1]), &(inteval->stack[((hsi*14175+12380595)*1+lsi)*1]), &(inteval->stack[((hsi*12285+12347250)*1+lsi)*1]),45);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*35100+12419340)*1+lsi)*1]), &(inteval->stack[((hsi*24570+12394770)*1+lsi)*1]), &(inteval->stack[((hsi*21060+12359535)*1+lsi)*1]),45);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*16200+12454440)*1+lsi)*1]), &(inteval->stack[((hsi*6120+1093860)*1+lsi)*1]), &(inteval->stack[((hsi*5400+1099980)*1+lsi)*1]),45);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*28350+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*16200+12454440)*1+lsi)*1]), &(inteval->stack[((hsi*14175+12380595)*1+lsi)*1]),45);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*40950+12470640)*1+lsi)*1]), &(inteval->stack[((hsi*28350+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*24570+12394770)*1+lsi)*1]),45);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*52650+29977800)*1+lsi)*1]), &(inteval->stack[((hsi*40950+12470640)*1+lsi)*1]), &(inteval->stack[((hsi*35100+12419340)*1+lsi)*1]),45);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*18360+12511590)*1+lsi)*1]), &(inteval->stack[((hsi*6885+1086975)*1+lsi)*1]), &(inteval->stack[((hsi*6120+1093860)*1+lsi)*1]),45);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*32400+12529950)*1+lsi)*1]), &(inteval->stack[((hsi*18360+12511590)*1+lsi)*1]), &(inteval->stack[((hsi*16200+12454440)*1+lsi)*1]),45);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*47250+30030450)*1+lsi)*1]), &(inteval->stack[((hsi*32400+12529950)*1+lsi)*1]), &(inteval->stack[((hsi*28350+29949450)*1+lsi)*1]),45);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*61425+12562350)*1+lsi)*1]), &(inteval->stack[((hsi*47250+30030450)*1+lsi)*1]), &(inteval->stack[((hsi*40950+12470640)*1+lsi)*1]),45);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*73710+30077700)*1+lsi)*1]), &(inteval->stack[((hsi*61425+12562350)*1+lsi)*1]), &(inteval->stack[((hsi*52650+29977800)*1+lsi)*1]),45);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*20655+12623775)*1+lsi)*1]), &(inteval->stack[((hsi*7695+1079280)*1+lsi)*1]), &(inteval->stack[((hsi*6885+1086975)*1+lsi)*1]),45);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*36720+12644430)*1+lsi)*1]), &(inteval->stack[((hsi*20655+12623775)*1+lsi)*1]), &(inteval->stack[((hsi*18360+12511590)*1+lsi)*1]),45);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*54000+30151410)*1+lsi)*1]), &(inteval->stack[((hsi*36720+12644430)*1+lsi)*1]), &(inteval->stack[((hsi*32400+12529950)*1+lsi)*1]),45);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*70875+12681150)*1+lsi)*1]), &(inteval->stack[((hsi*54000+30151410)*1+lsi)*1]), &(inteval->stack[((hsi*47250+30030450)*1+lsi)*1]),45);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*85995+30205410)*1+lsi)*1]), &(inteval->stack[((hsi*70875+12681150)*1+lsi)*1]), &(inteval->stack[((hsi*61425+12562350)*1+lsi)*1]),45);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*98280+12752025)*1+lsi)*1]), &(inteval->stack[((hsi*85995+30205410)*1+lsi)*1]), &(inteval->stack[((hsi*73710+30077700)*1+lsi)*1]),45);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*23085+30291405)*1+lsi)*1]), &(inteval->stack[((hsi*8550+1070730)*1+lsi)*1]), &(inteval->stack[((hsi*7695+1079280)*1+lsi)*1]),45);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*41310+30314490)*1+lsi)*1]), &(inteval->stack[((hsi*23085+30291405)*1+lsi)*1]), &(inteval->stack[((hsi*20655+12623775)*1+lsi)*1]),45);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*61200+12850305)*1+lsi)*1]), &(inteval->stack[((hsi*41310+30314490)*1+lsi)*1]), &(inteval->stack[((hsi*36720+12644430)*1+lsi)*1]),45);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*81000+30355800)*1+lsi)*1]), &(inteval->stack[((hsi*61200+12850305)*1+lsi)*1]), &(inteval->stack[((hsi*54000+30151410)*1+lsi)*1]),45);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*99225+12911505)*1+lsi)*1]), &(inteval->stack[((hsi*81000+30355800)*1+lsi)*1]), &(inteval->stack[((hsi*70875+12681150)*1+lsi)*1]),45);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*114660+30436800)*1+lsi)*1]), &(inteval->stack[((hsi*99225+12911505)*1+lsi)*1]), &(inteval->stack[((hsi*85995+30205410)*1+lsi)*1]),45);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*126360+13010730)*1+lsi)*1]), &(inteval->stack[((hsi*114660+30436800)*1+lsi)*1]), &(inteval->stack[((hsi*98280+12752025)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+30551460)*1+lsi)*1]), &(inteval->stack[((hsi*3510+1114200)*1+lsi)*1]), &(inteval->stack[((hsi*2970+1117710)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+30560370)*1+lsi)*1]), &(inteval->stack[((hsi*10530+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*8910+30551460)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+30578190)*1+lsi)*1]), &(inteval->stack[((hsi*21060+12359535)*1+lsi)*1]), &(inteval->stack[((hsi*17820+30560370)*1+lsi)*1]),45);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*44550+30607890)*1+lsi)*1]), &(inteval->stack[((hsi*35100+12419340)*1+lsi)*1]), &(inteval->stack[((hsi*29700+30578190)*1+lsi)*1]),45);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*62370+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*52650+29977800)*1+lsi)*1]), &(inteval->stack[((hsi*44550+30607890)*1+lsi)*1]),45);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*83160+30551460)*1+lsi)*1]), &(inteval->stack[((hsi*73710+30077700)*1+lsi)*1]), &(inteval->stack[((hsi*62370+13137090)*1+lsi)*1]),45);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*106920+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*98280+12752025)*1+lsi)*1]), &(inteval->stack[((hsi*83160+30551460)*1+lsi)*1]),45);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*133650+30551460)*1+lsi)*1]), &(inteval->stack[((hsi*126360+13010730)*1+lsi)*1]), &(inteval->stack[((hsi*106920+13137090)*1+lsi)*1]),45);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*25650+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*9450+1061280)*1+lsi)*1]), &(inteval->stack[((hsi*8550+1070730)*1+lsi)*1]),45);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*46170+13162740)*1+lsi)*1]), &(inteval->stack[((hsi*25650+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*23085+30291405)*1+lsi)*1]),45);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*68850+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*46170+13162740)*1+lsi)*1]), &(inteval->stack[((hsi*41310+30314490)*1+lsi)*1]),45);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*91800+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*68850+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*61200+12850305)*1+lsi)*1]),45);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*113400+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*91800+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*81000+30355800)*1+lsi)*1]),45);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*132300+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*113400+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*99225+12911505)*1+lsi)*1]),45);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*147420+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*132300+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*114660+30436800)*1+lsi)*1]),45);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*157950+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*147420+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*126360+13010730)*1+lsi)*1]),45);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*163350+30685110)*1+lsi)*1]), &(inteval->stack[((hsi*157950+13137090)*1+lsi)*1]), &(inteval->stack[((hsi*133650+30551460)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*490050+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*199650+8867100)*1+lsi)*1]), &(inteval->stack[((hsi*163350+30685110)*1+lsi)*1]),3630);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*980100+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*598950+9306330)*1+lsi)*1]), &(inteval->stack[((hsi*490050+12336720)*1+lsi)*1]),3630);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*1633500+12336720)*1+lsi)*1]), &(inteval->stack[((hsi*1197900+11138820)*1+lsi)*1]), &(inteval->stack[((hsi*980100+29949450)*1+lsi)*1]),3630);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*2450250+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*1996500+15273360)*1+lsi)*1]), &(inteval->stack[((hsi*1633500+12336720)*1+lsi)*1]),3630);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*3430350+10921680)*1+lsi)*1]), &(inteval->stack[((hsi*2994750+21364500)*1+lsi)*1]), &(inteval->stack[((hsi*2450250+8471430)*1+lsi)*1]),3630);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*4573800+19664820)*1+lsi)*1]), &(inteval->stack[((hsi*4192650+32766330)*1+lsi)*1]), &(inteval->stack[((hsi*3430350+10921680)*1+lsi)*1]),3630);
HRRPart0bra0ket0lk(inteval, &(inteval->stack[((hsi*5880600+8471430)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+24359250)*1+lsi)*1]), &(inteval->stack[((hsi*4573800+19664820)*1+lsi)*1]),3630);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*35802+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*13923+166005)*1+lsi)*1]), &(inteval->stack[((hsi*11934+179928)*1+lsi)*1]),153);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*41769+29985252)*1+lsi)*1]), &(inteval->stack[((hsi*16065+149940)*1+lsi)*1]), &(inteval->stack[((hsi*13923+166005)*1+lsi)*1]),153);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*71604+30027021)*1+lsi)*1]), &(inteval->stack[((hsi*41769+29985252)*1+lsi)*1]), &(inteval->stack[((hsi*35802+29949450)*1+lsi)*1]),153);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*48195+30098625)*1+lsi)*1]), &(inteval->stack[((hsi*18360+131580)*1+lsi)*1]), &(inteval->stack[((hsi*16065+149940)*1+lsi)*1]),153);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*83538+30146820)*1+lsi)*1]), &(inteval->stack[((hsi*48195+30098625)*1+lsi)*1]), &(inteval->stack[((hsi*41769+29985252)*1+lsi)*1]),153);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*119340+30230358)*1+lsi)*1]), &(inteval->stack[((hsi*83538+30146820)*1+lsi)*1]), &(inteval->stack[((hsi*71604+30027021)*1+lsi)*1]),153);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*55080+30349698)*1+lsi)*1]), &(inteval->stack[((hsi*20808+110772)*1+lsi)*1]), &(inteval->stack[((hsi*18360+131580)*1+lsi)*1]),153);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*96390+30404778)*1+lsi)*1]), &(inteval->stack[((hsi*55080+30349698)*1+lsi)*1]), &(inteval->stack[((hsi*48195+30098625)*1+lsi)*1]),153);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*139230+30501168)*1+lsi)*1]), &(inteval->stack[((hsi*96390+30404778)*1+lsi)*1]), &(inteval->stack[((hsi*83538+30146820)*1+lsi)*1]),153);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*179010+30640398)*1+lsi)*1]), &(inteval->stack[((hsi*139230+30501168)*1+lsi)*1]), &(inteval->stack[((hsi*119340+30230358)*1+lsi)*1]),153);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*62424+30819408)*1+lsi)*1]), &(inteval->stack[((hsi*23409+87363)*1+lsi)*1]), &(inteval->stack[((hsi*20808+110772)*1+lsi)*1]),153);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*110160+30881832)*1+lsi)*1]), &(inteval->stack[((hsi*62424+30819408)*1+lsi)*1]), &(inteval->stack[((hsi*55080+30349698)*1+lsi)*1]),153);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*160650+30991992)*1+lsi)*1]), &(inteval->stack[((hsi*110160+30881832)*1+lsi)*1]), &(inteval->stack[((hsi*96390+30404778)*1+lsi)*1]),153);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*208845+31152642)*1+lsi)*1]), &(inteval->stack[((hsi*160650+30991992)*1+lsi)*1]), &(inteval->stack[((hsi*139230+30501168)*1+lsi)*1]),153);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*250614+31361487)*1+lsi)*1]), &(inteval->stack[((hsi*208845+31152642)*1+lsi)*1]), &(inteval->stack[((hsi*179010+30640398)*1+lsi)*1]),153);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*70227+31612101)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61200)*1+lsi)*1]), &(inteval->stack[((hsi*23409+87363)*1+lsi)*1]),153);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*124848+31682328)*1+lsi)*1]), &(inteval->stack[((hsi*70227+31612101)*1+lsi)*1]), &(inteval->stack[((hsi*62424+30819408)*1+lsi)*1]),153);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*183600+31807176)*1+lsi)*1]), &(inteval->stack[((hsi*124848+31682328)*1+lsi)*1]), &(inteval->stack[((hsi*110160+30881832)*1+lsi)*1]),153);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*240975+31990776)*1+lsi)*1]), &(inteval->stack[((hsi*183600+31807176)*1+lsi)*1]), &(inteval->stack[((hsi*160650+30991992)*1+lsi)*1]),153);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*292383+32231751)*1+lsi)*1]), &(inteval->stack[((hsi*240975+31990776)*1+lsi)*1]), &(inteval->stack[((hsi*208845+31152642)*1+lsi)*1]),153);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*334152+19664820)*1+lsi)*1]), &(inteval->stack[((hsi*292383+32231751)*1+lsi)*1]), &(inteval->stack[((hsi*250614+31361487)*1+lsi)*1]),153);
HRRPart1bra0ket0pkp(inteval, &(inteval->stack[((hsi*78489+32524134)*1+lsi)*1]), &(inteval->stack[((hsi*29070+32130)*1+lsi)*1]), &(inteval->stack[((hsi*26163+61200)*1+lsi)*1]),153);
HRRPart1bra0ket0pid(inteval, &(inteval->stack[((hsi*140454+19998972)*1+lsi)*1]), &(inteval->stack[((hsi*78489+32524134)*1+lsi)*1]), &(inteval->stack[((hsi*70227+31612101)*1+lsi)*1]),153);
HRRPart1bra0ket0phf(inteval, &(inteval->stack[((hsi*208080+32602623)*1+lsi)*1]), &(inteval->stack[((hsi*140454+19998972)*1+lsi)*1]), &(inteval->stack[((hsi*124848+31682328)*1+lsi)*1]),153);
HRRPart1bra0ket0pgg(inteval, &(inteval->stack[((hsi*275400+20139426)*1+lsi)*1]), &(inteval->stack[((hsi*208080+32602623)*1+lsi)*1]), &(inteval->stack[((hsi*183600+31807176)*1+lsi)*1]),153);
HRRPart1bra0ket0pfh(inteval, &(inteval->stack[((hsi*337365+32810703)*1+lsi)*1]), &(inteval->stack[((hsi*275400+20139426)*1+lsi)*1]), &(inteval->stack[((hsi*240975+31990776)*1+lsi)*1]),153);
HRRPart1bra0ket0pdi(inteval, &(inteval->stack[((hsi*389844+20414826)*1+lsi)*1]), &(inteval->stack[((hsi*337365+32810703)*1+lsi)*1]), &(inteval->stack[((hsi*292383+32231751)*1+lsi)*1]),153);
HRRPart1bra0ket0ppk(inteval, &(inteval->stack[((hsi*429624+33148068)*1+lsi)*1]), &(inteval->stack[((hsi*389844+20414826)*1+lsi)*1]), &(inteval->stack[((hsi*334152+19664820)*1+lsi)*1]),153);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*30294+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*11934+179928)*1+lsi)*1]), &(inteval->stack[((hsi*10098+191862)*1+lsi)*1]),153);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*60588+20834964)*1+lsi)*1]), &(inteval->stack[((hsi*35802+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*30294+20804670)*1+lsi)*1]),153);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*100980+20895552)*1+lsi)*1]), &(inteval->stack[((hsi*71604+30027021)*1+lsi)*1]), &(inteval->stack[((hsi*60588+20834964)*1+lsi)*1]),153);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*151470+33577692)*1+lsi)*1]), &(inteval->stack[((hsi*119340+30230358)*1+lsi)*1]), &(inteval->stack[((hsi*100980+20895552)*1+lsi)*1]),153);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*212058+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*179010+30640398)*1+lsi)*1]), &(inteval->stack[((hsi*151470+33577692)*1+lsi)*1]),153);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*282744+33577692)*1+lsi)*1]), &(inteval->stack[((hsi*250614+31361487)*1+lsi)*1]), &(inteval->stack[((hsi*212058+20804670)*1+lsi)*1]),153);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*363528+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*334152+19664820)*1+lsi)*1]), &(inteval->stack[((hsi*282744+33577692)*1+lsi)*1]),153);
HRRPart1bra0ket0psl(inteval, &(inteval->stack[((hsi*454410+33577692)*1+lsi)*1]), &(inteval->stack[((hsi*429624+33148068)*1+lsi)*1]), &(inteval->stack[((hsi*363528+20804670)*1+lsi)*1]),153);
HRRPart1bra0ket0plp(inteval, &(inteval->stack[((hsi*87210+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*32130+0)*1+lsi)*1]), &(inteval->stack[((hsi*29070+32130)*1+lsi)*1]),153);
HRRPart1bra0ket0pkd(inteval, &(inteval->stack[((hsi*156978+20891880)*1+lsi)*1]), &(inteval->stack[((hsi*87210+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*78489+32524134)*1+lsi)*1]),153);
HRRPart1bra0ket0pif(inteval, &(inteval->stack[((hsi*234090+21048858)*1+lsi)*1]), &(inteval->stack[((hsi*156978+20891880)*1+lsi)*1]), &(inteval->stack[((hsi*140454+19998972)*1+lsi)*1]),153);
HRRPart1bra0ket0phg(inteval, &(inteval->stack[((hsi*312120+21282948)*1+lsi)*1]), &(inteval->stack[((hsi*234090+21048858)*1+lsi)*1]), &(inteval->stack[((hsi*208080+32602623)*1+lsi)*1]),153);
HRRPart1bra0ket0pgh(inteval, &(inteval->stack[((hsi*385560+34032102)*1+lsi)*1]), &(inteval->stack[((hsi*312120+21282948)*1+lsi)*1]), &(inteval->stack[((hsi*275400+20139426)*1+lsi)*1]),153);
HRRPart1bra0ket0pfi(inteval, &(inteval->stack[((hsi*449820+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*385560+34032102)*1+lsi)*1]), &(inteval->stack[((hsi*337365+32810703)*1+lsi)*1]),153);
HRRPart1bra0ket0pdk(inteval, &(inteval->stack[((hsi*501228+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*449820+20804670)*1+lsi)*1]), &(inteval->stack[((hsi*389844+20414826)*1+lsi)*1]),153);
HRRPart1bra0ket0ppl(inteval, &(inteval->stack[((hsi*537030+19664820)*1+lsi)*1]), &(inteval->stack[((hsi*501228+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*429624+33148068)*1+lsi)*1]),153);
HRRPart1bra0ket0psm(inteval, &(inteval->stack[((hsi*555390+20201850)*1+lsi)*1]), &(inteval->stack[((hsi*537030+19664820)*1+lsi)*1]), &(inteval->stack[((hsi*454410+33577692)*1+lsi)*1]),153);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*1481040+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*555390+20201850)*1+lsi)*1]), &(inteval->stack[((hsi*493680+19171140)*1+lsi)*1]),3630);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*2613600+18576660)*1+lsi)*1]), &(inteval->stack[((hsi*1481040+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*1306800+17269860)*1+lsi)*1]),3630);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*3811500+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*2613600+18576660)*1+lsi)*1]), &(inteval->stack[((hsi*2286900+36958980)*1+lsi)*1]),3630);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*4954950+14352030)*1+lsi)*1]), &(inteval->stack[((hsi*3811500+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*3303300+39245880)*1+lsi)*1]),3630);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*5945940+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*4954950+14352030)*1+lsi)*1]), &(inteval->stack[((hsi*4247100+42549180)*1+lsi)*1]),3630);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*6708240+35895390)*1+lsi)*1]), &(inteval->stack[((hsi*5945940+29949450)*1+lsi)*1]), &(inteval->stack[((hsi*5031180+46796280)*1+lsi)*1]),3630);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*7187400+14352030)*1+lsi)*1]), &(inteval->stack[((hsi*6708240+35895390)*1+lsi)*1]), &(inteval->stack[((hsi*5590200+24359250)*1+lsi)*1]),3630);
HRRPart0bra0ket0ll(inteval, &(inteval->stack[((hsi*7350750+1120680)*1+lsi)*1]), &(inteval->stack[((hsi*7187400+14352030)*1+lsi)*1]), &(inteval->stack[((hsi*5880600+8471430)*1+lsi)*1]),3630);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7350750+1120680)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
