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
#include <_aB_PS__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,108100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_D__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+500140)*1+lsi)*1]), &(inteval->stack[((hsi*7098+59410)*1+lsi)*1]), &(inteval->stack[((hsi*6084+66508)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+518392)*1+lsi)*1]), &(inteval->stack[((hsi*8190+51220)*1+lsi)*1]), &(inteval->stack[((hsi*7098+59410)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+539686)*1+lsi)*1]), &(inteval->stack[((hsi*21294+518392)*1+lsi)*1]), &(inteval->stack[((hsi*18252+500140)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+576190)*1+lsi)*1]), &(inteval->stack[((hsi*6084+66508)*1+lsi)*1]), &(inteval->stack[((hsi*5148+72592)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+591634)*1+lsi)*1]), &(inteval->stack[((hsi*18252+500140)*1+lsi)*1]), &(inteval->stack[((hsi*15444+576190)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+622522)*1+lsi)*1]), &(inteval->stack[((hsi*36504+539686)*1+lsi)*1]), &(inteval->stack[((hsi*30888+591634)*1+lsi)*1]),78);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*24570+576190)*1+lsi)*1]), &(inteval->stack[((hsi*9360+41860)*1+lsi)*1]), &(inteval->stack[((hsi*8190+51220)*1+lsi)*1]),78);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*42588+674002)*1+lsi)*1]), &(inteval->stack[((hsi*24570+576190)*1+lsi)*1]), &(inteval->stack[((hsi*21294+518392)*1+lsi)*1]),78);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*60840+716590)*1+lsi)*1]), &(inteval->stack[((hsi*42588+674002)*1+lsi)*1]), &(inteval->stack[((hsi*36504+539686)*1+lsi)*1]),78);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*77220+500140)*1+lsi)*1]), &(inteval->stack[((hsi*60840+716590)*1+lsi)*1]), &(inteval->stack[((hsi*51480+622522)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+41860)*1+lsi)*1]), &(inteval->stack[((hsi*6006+92590)*1+lsi)*1]), &(inteval->stack[((hsi*5148+98596)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+57304)*1+lsi)*1]), &(inteval->stack[((hsi*6930+85660)*1+lsi)*1]), &(inteval->stack[((hsi*6006+92590)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+577360)*1+lsi)*1]), &(inteval->stack[((hsi*18018+57304)*1+lsi)*1]), &(inteval->stack[((hsi*15444+41860)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+608248)*1+lsi)*1]), &(inteval->stack[((hsi*5148+98596)*1+lsi)*1]), &(inteval->stack[((hsi*4356+103744)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+621316)*1+lsi)*1]), &(inteval->stack[((hsi*15444+41860)*1+lsi)*1]), &(inteval->stack[((hsi*13068+608248)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+647452)*1+lsi)*1]), &(inteval->stack[((hsi*30888+577360)*1+lsi)*1]), &(inteval->stack[((hsi*26136+621316)*1+lsi)*1]),66);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*20790+608248)*1+lsi)*1]), &(inteval->stack[((hsi*7920+77740)*1+lsi)*1]), &(inteval->stack[((hsi*6930+85660)*1+lsi)*1]),66);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*36036+691012)*1+lsi)*1]), &(inteval->stack[((hsi*20790+608248)*1+lsi)*1]), &(inteval->stack[((hsi*18018+57304)*1+lsi)*1]),66);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*51480+41860)*1+lsi)*1]), &(inteval->stack[((hsi*36036+691012)*1+lsi)*1]), &(inteval->stack[((hsi*30888+577360)*1+lsi)*1]),66);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*65340+577360)*1+lsi)*1]), &(inteval->stack[((hsi*51480+41860)*1+lsi)*1]), &(inteval->stack[((hsi*43560+647452)*1+lsi)*1]),66);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*196020+642700)*1+lsi)*1]), &(inteval->stack[((hsi*77220+500140)*1+lsi)*1]), &(inteval->stack[((hsi*65340+577360)*1+lsi)*1]),990);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21294+41860)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]),91);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*24843+577360)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]), &(inteval->stack[((hsi*8281+20475)*1+lsi)*1]),91);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*42588+63154)*1+lsi)*1]), &(inteval->stack[((hsi*24843+577360)*1+lsi)*1]), &(inteval->stack[((hsi*21294+41860)*1+lsi)*1]),91);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*18018+602203)*1+lsi)*1]), &(inteval->stack[((hsi*7098+28756)*1+lsi)*1]), &(inteval->stack[((hsi*6006+35854)*1+lsi)*1]),91);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*36036+838720)*1+lsi)*1]), &(inteval->stack[((hsi*21294+41860)*1+lsi)*1]), &(inteval->stack[((hsi*18018+602203)*1+lsi)*1]),91);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*60060+874756)*1+lsi)*1]), &(inteval->stack[((hsi*42588+63154)*1+lsi)*1]), &(inteval->stack[((hsi*36036+838720)*1+lsi)*1]),91);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*28665+20475)*1+lsi)*1]), &(inteval->stack[((hsi*10920+0)*1+lsi)*1]), &(inteval->stack[((hsi*9555+10920)*1+lsi)*1]),91);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*49686+934816)*1+lsi)*1]), &(inteval->stack[((hsi*28665+20475)*1+lsi)*1]), &(inteval->stack[((hsi*24843+577360)*1+lsi)*1]),91);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*70980+984502)*1+lsi)*1]), &(inteval->stack[((hsi*49686+934816)*1+lsi)*1]), &(inteval->stack[((hsi*42588+63154)*1+lsi)*1]),91);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*90090+0)*1+lsi)*1]), &(inteval->stack[((hsi*70980+984502)*1+lsi)*1]), &(inteval->stack[((hsi*60060+874756)*1+lsi)*1]),91);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*231660+838720)*1+lsi)*1]), &(inteval->stack[((hsi*90090+0)*1+lsi)*1]), &(inteval->stack[((hsi*77220+500140)*1+lsi)*1]),990);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*392040+108100)*1+lsi)*1]), &(inteval->stack[((hsi*231660+838720)*1+lsi)*1]), &(inteval->stack[((hsi*196020+642700)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*392040+108100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
