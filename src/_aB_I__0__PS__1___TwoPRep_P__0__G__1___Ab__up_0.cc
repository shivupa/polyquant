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
#include <HRRPart0bra0ket0ip.h>
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
#include <_aB_I__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+112600)*1+lsi)*1]), &(inteval->stack[((hsi*2548+22860)*1+lsi)*1]), &(inteval->stack[((hsi*2184+25408)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+119152)*1+lsi)*1]), &(inteval->stack[((hsi*2940+19920)*1+lsi)*1]), &(inteval->stack[((hsi*2548+22860)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+126796)*1+lsi)*1]), &(inteval->stack[((hsi*7644+119152)*1+lsi)*1]), &(inteval->stack[((hsi*6552+112600)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+139900)*1+lsi)*1]), &(inteval->stack[((hsi*2184+25408)*1+lsi)*1]), &(inteval->stack[((hsi*1848+27592)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+145444)*1+lsi)*1]), &(inteval->stack[((hsi*6552+112600)*1+lsi)*1]), &(inteval->stack[((hsi*5544+139900)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+156532)*1+lsi)*1]), &(inteval->stack[((hsi*13104+126796)*1+lsi)*1]), &(inteval->stack[((hsi*11088+145444)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+139900)*1+lsi)*1]), &(inteval->stack[((hsi*3360+16560)*1+lsi)*1]), &(inteval->stack[((hsi*2940+19920)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+175012)*1+lsi)*1]), &(inteval->stack[((hsi*8820+139900)*1+lsi)*1]), &(inteval->stack[((hsi*7644+119152)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+190300)*1+lsi)*1]), &(inteval->stack[((hsi*15288+175012)*1+lsi)*1]), &(inteval->stack[((hsi*13104+126796)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+112600)*1+lsi)*1]), &(inteval->stack[((hsi*21840+190300)*1+lsi)*1]), &(inteval->stack[((hsi*18480+156532)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+16560)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+140320)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]), &(inteval->stack[((hsi*3276+8100)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+150148)*1+lsi)*1]), &(inteval->stack[((hsi*9828+140320)*1+lsi)*1]), &(inteval->stack[((hsi*8424+16560)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+166996)*1+lsi)*1]), &(inteval->stack[((hsi*2808+11376)*1+lsi)*1]), &(inteval->stack[((hsi*2376+14184)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+174124)*1+lsi)*1]), &(inteval->stack[((hsi*8424+16560)*1+lsi)*1]), &(inteval->stack[((hsi*7128+166996)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+188380)*1+lsi)*1]), &(inteval->stack[((hsi*16848+150148)*1+lsi)*1]), &(inteval->stack[((hsi*14256+174124)*1+lsi)*1]),36);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*11340+166996)*1+lsi)*1]), &(inteval->stack[((hsi*4320+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+4320)*1+lsi)*1]),36);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*11340+166996)*1+lsi)*1]), &(inteval->stack[((hsi*9828+140320)*1+lsi)*1]),36);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*28080+212140)*1+lsi)*1]), &(inteval->stack[((hsi*19656+0)*1+lsi)*1]), &(inteval->stack[((hsi*16848+150148)*1+lsi)*1]),36);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*35640+140320)*1+lsi)*1]), &(inteval->stack[((hsi*28080+212140)*1+lsi)*1]), &(inteval->stack[((hsi*23760+188380)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*83160+29440)*1+lsi)*1]), &(inteval->stack[((hsi*35640+140320)*1+lsi)*1]), &(inteval->stack[((hsi*27720+112600)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*83160+29440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
