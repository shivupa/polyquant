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
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,115600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+551200)*1+lsi)*1]), &(inteval->stack[((hsi*7098+74830)*1+lsi)*1]), &(inteval->stack[((hsi*6084+81928)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+569452)*1+lsi)*1]), &(inteval->stack[((hsi*6084+81928)*1+lsi)*1]), &(inteval->stack[((hsi*5148+88012)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+584896)*1+lsi)*1]), &(inteval->stack[((hsi*18252+551200)*1+lsi)*1]), &(inteval->stack[((hsi*15444+569452)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+615784)*1+lsi)*1]), &(inteval->stack[((hsi*8190+66640)*1+lsi)*1]), &(inteval->stack[((hsi*7098+74830)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+637078)*1+lsi)*1]), &(inteval->stack[((hsi*21294+615784)*1+lsi)*1]), &(inteval->stack[((hsi*18252+551200)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+673582)*1+lsi)*1]), &(inteval->stack[((hsi*36504+637078)*1+lsi)*1]), &(inteval->stack[((hsi*30888+584896)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+551200)*1+lsi)*1]), &(inteval->stack[((hsi*8281+45255)*1+lsi)*1]), &(inteval->stack[((hsi*7098+53536)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+572494)*1+lsi)*1]), &(inteval->stack[((hsi*7098+53536)*1+lsi)*1]), &(inteval->stack[((hsi*6006+60634)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+590512)*1+lsi)*1]), &(inteval->stack[((hsi*21294+551200)*1+lsi)*1]), &(inteval->stack[((hsi*18018+572494)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+626548)*1+lsi)*1]), &(inteval->stack[((hsi*9555+35700)*1+lsi)*1]), &(inteval->stack[((hsi*8281+45255)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+35700)*1+lsi)*1]), &(inteval->stack[((hsi*24843+626548)*1+lsi)*1]), &(inteval->stack[((hsi*21294+551200)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+725062)*1+lsi)*1]), &(inteval->stack[((hsi*42588+35700)*1+lsi)*1]), &(inteval->stack[((hsi*36036+590512)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*154440+785122)*1+lsi)*1]), &(inteval->stack[((hsi*60060+725062)*1+lsi)*1]), &(inteval->stack[((hsi*51480+673582)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+551200)*1+lsi)*1]), &(inteval->stack[((hsi*6006+100090)*1+lsi)*1]), &(inteval->stack[((hsi*5148+106096)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+566644)*1+lsi)*1]), &(inteval->stack[((hsi*5148+106096)*1+lsi)*1]), &(inteval->stack[((hsi*4356+111244)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+579712)*1+lsi)*1]), &(inteval->stack[((hsi*15444+551200)*1+lsi)*1]), &(inteval->stack[((hsi*13068+566644)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+605848)*1+lsi)*1]), &(inteval->stack[((hsi*6930+93160)*1+lsi)*1]), &(inteval->stack[((hsi*6006+100090)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+35700)*1+lsi)*1]), &(inteval->stack[((hsi*18018+605848)*1+lsi)*1]), &(inteval->stack[((hsi*15444+551200)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+605848)*1+lsi)*1]), &(inteval->stack[((hsi*30888+35700)*1+lsi)*1]), &(inteval->stack[((hsi*26136+579712)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*130680+939562)*1+lsi)*1]), &(inteval->stack[((hsi*51480+673582)*1+lsi)*1]), &(inteval->stack[((hsi*43560+605848)*1+lsi)*1]),660);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*261360+1070242)*1+lsi)*1]), &(inteval->stack[((hsi*154440+785122)*1+lsi)*1]), &(inteval->stack[((hsi*130680+939562)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*24570+551200)*1+lsi)*1]), &(inteval->stack[((hsi*9555+11025)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20580)*1+lsi)*1]),105);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*20790+575770)*1+lsi)*1]), &(inteval->stack[((hsi*8190+20580)*1+lsi)*1]), &(inteval->stack[((hsi*6930+28770)*1+lsi)*1]),105);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*41580+939562)*1+lsi)*1]), &(inteval->stack[((hsi*24570+551200)*1+lsi)*1]), &(inteval->stack[((hsi*20790+575770)*1+lsi)*1]),105);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*28665+575770)*1+lsi)*1]), &(inteval->stack[((hsi*11025+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+11025)*1+lsi)*1]),105);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*49140+604435)*1+lsi)*1]), &(inteval->stack[((hsi*28665+575770)*1+lsi)*1]), &(inteval->stack[((hsi*24570+551200)*1+lsi)*1]),105);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*69300+0)*1+lsi)*1]), &(inteval->stack[((hsi*49140+604435)*1+lsi)*1]), &(inteval->stack[((hsi*41580+939562)*1+lsi)*1]),105);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*180180+1331602)*1+lsi)*1]), &(inteval->stack[((hsi*69300+0)*1+lsi)*1]), &(inteval->stack[((hsi*60060+725062)*1+lsi)*1]),660);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*308880+1511782)*1+lsi)*1]), &(inteval->stack[((hsi*180180+1331602)*1+lsi)*1]), &(inteval->stack[((hsi*154440+785122)*1+lsi)*1]),660);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*435600+115600)*1+lsi)*1]), &(inteval->stack[((hsi*308880+1511782)*1+lsi)*1]), &(inteval->stack[((hsi*261360+1070242)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*435600+115600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
