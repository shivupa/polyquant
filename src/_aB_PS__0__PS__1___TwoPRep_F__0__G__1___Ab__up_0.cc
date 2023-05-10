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
#include <_aB_PS__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,156400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_F__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+809800)*1+lsi)*1]), &(inteval->stack[((hsi*7098+107710)*1+lsi)*1]), &(inteval->stack[((hsi*6084+114808)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+828052)*1+lsi)*1]), &(inteval->stack[((hsi*8190+99520)*1+lsi)*1]), &(inteval->stack[((hsi*7098+107710)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+849346)*1+lsi)*1]), &(inteval->stack[((hsi*21294+828052)*1+lsi)*1]), &(inteval->stack[((hsi*18252+809800)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+885850)*1+lsi)*1]), &(inteval->stack[((hsi*6084+114808)*1+lsi)*1]), &(inteval->stack[((hsi*5148+120892)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+901294)*1+lsi)*1]), &(inteval->stack[((hsi*18252+809800)*1+lsi)*1]), &(inteval->stack[((hsi*15444+885850)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+932182)*1+lsi)*1]), &(inteval->stack[((hsi*36504+849346)*1+lsi)*1]), &(inteval->stack[((hsi*30888+901294)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+885850)*1+lsi)*1]), &(inteval->stack[((hsi*9360+90160)*1+lsi)*1]), &(inteval->stack[((hsi*8190+99520)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+983662)*1+lsi)*1]), &(inteval->stack[((hsi*24570+885850)*1+lsi)*1]), &(inteval->stack[((hsi*21294+828052)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+1026250)*1+lsi)*1]), &(inteval->stack[((hsi*42588+983662)*1+lsi)*1]), &(inteval->stack[((hsi*36504+849346)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+809800)*1+lsi)*1]), &(inteval->stack[((hsi*60840+1026250)*1+lsi)*1]), &(inteval->stack[((hsi*51480+932182)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+90160)*1+lsi)*1]), &(inteval->stack[((hsi*8281+68775)*1+lsi)*1]), &(inteval->stack[((hsi*7098+77056)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+887020)*1+lsi)*1]), &(inteval->stack[((hsi*9555+59220)*1+lsi)*1]), &(inteval->stack[((hsi*8281+68775)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+911863)*1+lsi)*1]), &(inteval->stack[((hsi*24843+887020)*1+lsi)*1]), &(inteval->stack[((hsi*21294+90160)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+954451)*1+lsi)*1]), &(inteval->stack[((hsi*7098+77056)*1+lsi)*1]), &(inteval->stack[((hsi*6006+84154)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+972469)*1+lsi)*1]), &(inteval->stack[((hsi*21294+90160)*1+lsi)*1]), &(inteval->stack[((hsi*18018+954451)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+1008505)*1+lsi)*1]), &(inteval->stack[((hsi*42588+911863)*1+lsi)*1]), &(inteval->stack[((hsi*36036+972469)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+68775)*1+lsi)*1]), &(inteval->stack[((hsi*10920+48300)*1+lsi)*1]), &(inteval->stack[((hsi*9555+59220)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+954451)*1+lsi)*1]), &(inteval->stack[((hsi*28665+68775)*1+lsi)*1]), &(inteval->stack[((hsi*24843+887020)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+48300)*1+lsi)*1]), &(inteval->stack[((hsi*49686+954451)*1+lsi)*1]), &(inteval->stack[((hsi*42588+911863)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+887020)*1+lsi)*1]), &(inteval->stack[((hsi*70980+48300)*1+lsi)*1]), &(inteval->stack[((hsi*60060+1008505)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*231660+977110)*1+lsi)*1]), &(inteval->stack[((hsi*90090+887020)*1+lsi)*1]), &(inteval->stack[((hsi*77220+809800)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+48300)*1+lsi)*1]), &(inteval->stack[((hsi*6006+140890)*1+lsi)*1]), &(inteval->stack[((hsi*5148+146896)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+63744)*1+lsi)*1]), &(inteval->stack[((hsi*6930+133960)*1+lsi)*1]), &(inteval->stack[((hsi*6006+140890)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+81762)*1+lsi)*1]), &(inteval->stack[((hsi*18018+63744)*1+lsi)*1]), &(inteval->stack[((hsi*15444+48300)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+112650)*1+lsi)*1]), &(inteval->stack[((hsi*5148+146896)*1+lsi)*1]), &(inteval->stack[((hsi*4356+152044)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+1208770)*1+lsi)*1]), &(inteval->stack[((hsi*15444+48300)*1+lsi)*1]), &(inteval->stack[((hsi*13068+112650)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+1234906)*1+lsi)*1]), &(inteval->stack[((hsi*30888+81762)*1+lsi)*1]), &(inteval->stack[((hsi*26136+1208770)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+1208770)*1+lsi)*1]), &(inteval->stack[((hsi*7920+126040)*1+lsi)*1]), &(inteval->stack[((hsi*6930+133960)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+112650)*1+lsi)*1]), &(inteval->stack[((hsi*20790+1208770)*1+lsi)*1]), &(inteval->stack[((hsi*18018+63744)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+1278466)*1+lsi)*1]), &(inteval->stack[((hsi*36036+112650)*1+lsi)*1]), &(inteval->stack[((hsi*30888+81762)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+48300)*1+lsi)*1]), &(inteval->stack[((hsi*51480+1278466)*1+lsi)*1]), &(inteval->stack[((hsi*43560+1234906)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*196020+1208770)*1+lsi)*1]), &(inteval->stack[((hsi*77220+809800)*1+lsi)*1]), &(inteval->stack[((hsi*65340+48300)*1+lsi)*1]),990);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*392040+1404790)*1+lsi)*1]), &(inteval->stack[((hsi*231660+977110)*1+lsi)*1]), &(inteval->stack[((hsi*196020+1208770)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+1208770)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23625)*1+lsi)*1]), &(inteval->stack[((hsi*8190+33180)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+1233340)*1+lsi)*1]), &(inteval->stack[((hsi*11025+12600)*1+lsi)*1]), &(inteval->stack[((hsi*9555+23625)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+1262005)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1233340)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1208770)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+48300)*1+lsi)*1]), &(inteval->stack[((hsi*8190+33180)*1+lsi)*1]), &(inteval->stack[((hsi*6930+41370)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+1311145)*1+lsi)*1]), &(inteval->stack[((hsi*24570+1208770)*1+lsi)*1]), &(inteval->stack[((hsi*20790+48300)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+23625)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1262005)*1+lsi)*1]), &(inteval->stack[((hsi*41580+1311145)*1+lsi)*1]),105);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*33075+1311145)*1+lsi)*1]), &(inteval->stack[((hsi*12600+0)*1+lsi)*1]), &(inteval->stack[((hsi*11025+12600)*1+lsi)*1]),105);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*57330+809800)*1+lsi)*1]), &(inteval->stack[((hsi*33075+1311145)*1+lsi)*1]), &(inteval->stack[((hsi*28665+1233340)*1+lsi)*1]),105);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*81900+1311145)*1+lsi)*1]), &(inteval->stack[((hsi*57330+809800)*1+lsi)*1]), &(inteval->stack[((hsi*49140+1262005)*1+lsi)*1]),105);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*103950+1796830)*1+lsi)*1]), &(inteval->stack[((hsi*81900+1311145)*1+lsi)*1]), &(inteval->stack[((hsi*69300+23625)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*270270+1900780)*1+lsi)*1]), &(inteval->stack[((hsi*103950+1796830)*1+lsi)*1]), &(inteval->stack[((hsi*90090+887020)*1+lsi)*1]),990);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*463320+2171050)*1+lsi)*1]), &(inteval->stack[((hsi*270270+1900780)*1+lsi)*1]), &(inteval->stack[((hsi*231660+977110)*1+lsi)*1]),990);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*653400+156400)*1+lsi)*1]), &(inteval->stack[((hsi*463320+2171050)*1+lsi)*1]), &(inteval->stack[((hsi*392040+1404790)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*653400+156400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
