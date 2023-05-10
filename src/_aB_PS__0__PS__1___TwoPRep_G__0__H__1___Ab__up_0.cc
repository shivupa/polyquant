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
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_PS__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,274160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_G__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*7098+216494)*1+lsi)*1]), &(inteval->stack[((hsi*6084+223592)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+1664552)*1+lsi)*1]), &(inteval->stack[((hsi*8190+208304)*1+lsi)*1]), &(inteval->stack[((hsi*7098+216494)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+1685846)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1664552)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1646300)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+1722350)*1+lsi)*1]), &(inteval->stack[((hsi*9360+198944)*1+lsi)*1]), &(inteval->stack[((hsi*8190+208304)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+1746920)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1722350)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1664552)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1789508)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1746920)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1685846)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+1664552)*1+lsi)*1]), &(inteval->stack[((hsi*6084+223592)*1+lsi)*1]), &(inteval->stack[((hsi*5148+229676)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+1850348)*1+lsi)*1]), &(inteval->stack[((hsi*18252+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*15444+1664552)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+1881236)*1+lsi)*1]), &(inteval->stack[((hsi*36504+1685846)*1+lsi)*1]), &(inteval->stack[((hsi*30888+1850348)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+1932716)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1789508)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1881236)*1+lsi)*1]),78);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*28080+1850348)*1+lsi)*1]), &(inteval->stack[((hsi*10608+188336)*1+lsi)*1]), &(inteval->stack[((hsi*9360+198944)*1+lsi)*1]),78);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*49140+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*28080+1850348)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1722350)*1+lsi)*1]),78);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*70980+1850348)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*42588+1746920)*1+lsi)*1]),78);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*91260+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1850348)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1789508)*1+lsi)*1]),78);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*108108+1737560)*1+lsi)*1]), &(inteval->stack[((hsi*91260+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*77220+1932716)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*8281+166951)*1+lsi)*1]), &(inteval->stack[((hsi*7098+175232)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+1667594)*1+lsi)*1]), &(inteval->stack[((hsi*9555+157396)*1+lsi)*1]), &(inteval->stack[((hsi*8281+166951)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+188336)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1667594)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1646300)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+1692437)*1+lsi)*1]), &(inteval->stack[((hsi*10920+146476)*1+lsi)*1]), &(inteval->stack[((hsi*9555+157396)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1692437)*1+lsi)*1]), &(inteval->stack[((hsi*24843+1667594)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+1895354)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*42588+188336)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+1667594)*1+lsi)*1]), &(inteval->stack[((hsi*7098+175232)*1+lsi)*1]), &(inteval->stack[((hsi*6006+182330)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+1966334)*1+lsi)*1]), &(inteval->stack[((hsi*21294+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*18018+1667594)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+2002370)*1+lsi)*1]), &(inteval->stack[((hsi*42588+188336)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1966334)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+2062430)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1895354)*1+lsi)*1]), &(inteval->stack[((hsi*60060+2002370)*1+lsi)*1]),91);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*32760+1966334)*1+lsi)*1]), &(inteval->stack[((hsi*12376+134100)*1+lsi)*1]), &(inteval->stack[((hsi*10920+146476)*1+lsi)*1]),91);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*57330+134100)*1+lsi)*1]), &(inteval->stack[((hsi*32760+1966334)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1692437)*1+lsi)*1]),91);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*82810+1966334)*1+lsi)*1]), &(inteval->stack[((hsi*57330+134100)*1+lsi)*1]), &(inteval->stack[((hsi*49686+1845668)*1+lsi)*1]),91);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*106470+2152520)*1+lsi)*1]), &(inteval->stack[((hsi*82810+1966334)*1+lsi)*1]), &(inteval->stack[((hsi*70980+1895354)*1+lsi)*1]),91);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*126126+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*106470+2152520)*1+lsi)*1]), &(inteval->stack[((hsi*90090+2062430)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*324324+1971794)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1737560)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+134100)*1+lsi)*1]), &(inteval->stack[((hsi*9555+109425)*1+lsi)*1]), &(inteval->stack[((hsi*8190+118980)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*11025+98400)*1+lsi)*1]), &(inteval->stack[((hsi*9555+109425)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+158670)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*24570+134100)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1674965)*1+lsi)*1]), &(inteval->stack[((hsi*12600+85800)*1+lsi)*1]), &(inteval->stack[((hsi*11025+98400)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+2296118)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1674965)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1646300)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+2353448)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2296118)*1+lsi)*1]), &(inteval->stack[((hsi*49140+158670)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+1708040)*1+lsi)*1]), &(inteval->stack[((hsi*8190+118980)*1+lsi)*1]), &(inteval->stack[((hsi*6930+127170)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+2435348)*1+lsi)*1]), &(inteval->stack[((hsi*24570+134100)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1708040)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+2476928)*1+lsi)*1]), &(inteval->stack[((hsi*49140+158670)*1+lsi)*1]), &(inteval->stack[((hsi*41580+2435348)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+98400)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2353448)*1+lsi)*1]), &(inteval->stack[((hsi*69300+2476928)*1+lsi)*1]),105);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*37800+2435348)*1+lsi)*1]), &(inteval->stack[((hsi*14280+71520)*1+lsi)*1]), &(inteval->stack[((hsi*12600+85800)*1+lsi)*1]),105);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*66150+2473148)*1+lsi)*1]), &(inteval->stack[((hsi*37800+2435348)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1674965)*1+lsi)*1]),105);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*95550+2539298)*1+lsi)*1]), &(inteval->stack[((hsi*66150+2473148)*1+lsi)*1]), &(inteval->stack[((hsi*57330+2296118)*1+lsi)*1]),105);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*122850+2634848)*1+lsi)*1]), &(inteval->stack[((hsi*95550+2539298)*1+lsi)*1]), &(inteval->stack[((hsi*81900+2353448)*1+lsi)*1]),105);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*145530+2296118)*1+lsi)*1]), &(inteval->stack[((hsi*122850+2634848)*1+lsi)*1]), &(inteval->stack[((hsi*103950+98400)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*378378+2441648)*1+lsi)*1]), &(inteval->stack[((hsi*145530+2296118)*1+lsi)*1]), &(inteval->stack[((hsi*126126+1845668)*1+lsi)*1]),1386);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*648648+2820026)*1+lsi)*1]), &(inteval->stack[((hsi*378378+2441648)*1+lsi)*1]), &(inteval->stack[((hsi*324324+1971794)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+71520)*1+lsi)*1]), &(inteval->stack[((hsi*6006+258650)*1+lsi)*1]), &(inteval->stack[((hsi*5148+264656)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+86964)*1+lsi)*1]), &(inteval->stack[((hsi*6930+251720)*1+lsi)*1]), &(inteval->stack[((hsi*6006+258650)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+104982)*1+lsi)*1]), &(inteval->stack[((hsi*18018+86964)*1+lsi)*1]), &(inteval->stack[((hsi*15444+71520)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*7920+243800)*1+lsi)*1]), &(inteval->stack[((hsi*6930+251720)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+1866458)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*18018+86964)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+135870)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1866458)*1+lsi)*1]), &(inteval->stack[((hsi*30888+104982)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*5148+264656)*1+lsi)*1]), &(inteval->stack[((hsi*4356+269804)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1659368)*1+lsi)*1]), &(inteval->stack[((hsi*15444+71520)*1+lsi)*1]), &(inteval->stack[((hsi*13068+1646300)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1902494)*1+lsi)*1]), &(inteval->stack[((hsi*30888+104982)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1659368)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*51480+135870)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1902494)*1+lsi)*1]),66);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*23760+1902494)*1+lsi)*1]), &(inteval->stack[((hsi*8976+234824)*1+lsi)*1]), &(inteval->stack[((hsi*7920+243800)*1+lsi)*1]),66);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*41580+187350)*1+lsi)*1]), &(inteval->stack[((hsi*23760+1902494)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1845668)*1+lsi)*1]),66);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*60060+1902494)*1+lsi)*1]), &(inteval->stack[((hsi*41580+187350)*1+lsi)*1]), &(inteval->stack[((hsi*36036+1866458)*1+lsi)*1]),66);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*77220+187350)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1902494)*1+lsi)*1]), &(inteval->stack[((hsi*51480+135870)*1+lsi)*1]),66);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*91476+1845668)*1+lsi)*1]), &(inteval->stack[((hsi*77220+187350)*1+lsi)*1]), &(inteval->stack[((hsi*65340+1646300)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*274428+3468674)*1+lsi)*1]), &(inteval->stack[((hsi*108108+1737560)*1+lsi)*1]), &(inteval->stack[((hsi*91476+1845668)*1+lsi)*1]),1386);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*548856+3743102)*1+lsi)*1]), &(inteval->stack[((hsi*324324+1971794)*1+lsi)*1]), &(inteval->stack[((hsi*274428+3468674)*1+lsi)*1]),1386);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*914760+4291958)*1+lsi)*1]), &(inteval->stack[((hsi*648648+2820026)*1+lsi)*1]), &(inteval->stack[((hsi*548856+3743102)*1+lsi)*1]),1386);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*28080+3468674)*1+lsi)*1]), &(inteval->stack[((hsi*10920+43320)*1+lsi)*1]), &(inteval->stack[((hsi*9360+54240)*1+lsi)*1]),120);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*32760+3496754)*1+lsi)*1]), &(inteval->stack[((hsi*12600+30720)*1+lsi)*1]), &(inteval->stack[((hsi*10920+43320)*1+lsi)*1]),120);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*56160+3529514)*1+lsi)*1]), &(inteval->stack[((hsi*32760+3496754)*1+lsi)*1]), &(inteval->stack[((hsi*28080+3468674)*1+lsi)*1]),120);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*37800+3585674)*1+lsi)*1]), &(inteval->stack[((hsi*14400+16320)*1+lsi)*1]), &(inteval->stack[((hsi*12600+30720)*1+lsi)*1]),120);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*65520+3623474)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3585674)*1+lsi)*1]), &(inteval->stack[((hsi*32760+3496754)*1+lsi)*1]),120);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*93600+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*65520+3623474)*1+lsi)*1]), &(inteval->stack[((hsi*56160+3529514)*1+lsi)*1]),120);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*23760+3688994)*1+lsi)*1]), &(inteval->stack[((hsi*9360+54240)*1+lsi)*1]), &(inteval->stack[((hsi*7920+63600)*1+lsi)*1]),120);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*47520+3712754)*1+lsi)*1]), &(inteval->stack[((hsi*28080+3468674)*1+lsi)*1]), &(inteval->stack[((hsi*23760+3688994)*1+lsi)*1]),120);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*79200+1739900)*1+lsi)*1]), &(inteval->stack[((hsi*56160+3529514)*1+lsi)*1]), &(inteval->stack[((hsi*47520+3712754)*1+lsi)*1]),120);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*118800+3688994)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*79200+1739900)*1+lsi)*1]),120);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*43200+1739900)*1+lsi)*1]), &(inteval->stack[((hsi*16320+0)*1+lsi)*1]), &(inteval->stack[((hsi*14400+16320)*1+lsi)*1]),120);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*75600+1783100)*1+lsi)*1]), &(inteval->stack[((hsi*43200+1739900)*1+lsi)*1]), &(inteval->stack[((hsi*37800+3585674)*1+lsi)*1]),120);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*109200+3807794)*1+lsi)*1]), &(inteval->stack[((hsi*75600+1783100)*1+lsi)*1]), &(inteval->stack[((hsi*65520+3623474)*1+lsi)*1]),120);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*140400+1739900)*1+lsi)*1]), &(inteval->stack[((hsi*109200+3807794)*1+lsi)*1]), &(inteval->stack[((hsi*93600+1646300)*1+lsi)*1]),120);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*166320+3807794)*1+lsi)*1]), &(inteval->stack[((hsi*140400+1739900)*1+lsi)*1]), &(inteval->stack[((hsi*118800+3688994)*1+lsi)*1]),120);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*436590+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*166320+3807794)*1+lsi)*1]), &(inteval->stack[((hsi*145530+2296118)*1+lsi)*1]),1386);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*756756+3468674)*1+lsi)*1]), &(inteval->stack[((hsi*436590+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*378378+2441648)*1+lsi)*1]),1386);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*1081080+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*756756+3468674)*1+lsi)*1]), &(inteval->stack[((hsi*648648+2820026)*1+lsi)*1]),1386);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*1372140+274160)*1+lsi)*1]), &(inteval->stack[((hsi*1081080+1646300)*1+lsi)*1]), &(inteval->stack[((hsi*914760+4291958)*1+lsi)*1]),1386);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1372140+274160)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
