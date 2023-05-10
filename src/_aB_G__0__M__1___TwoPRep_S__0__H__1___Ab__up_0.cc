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
#include <_aB_G__0__M__1___TwoPRep_S__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__M__1___TwoPRep_S__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7725)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__M__1___TwoPRep_S__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+25050)*1+lsi)*1]), &(inteval->stack[((hsi*1170+4740)*1+lsi)*1]), &(inteval->stack[((hsi*990+5910)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+28020)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3375)*1+lsi)*1]), &(inteval->stack[((hsi*1170+4740)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+31530)*1+lsi)*1]), &(inteval->stack[((hsi*3510+28020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+25050)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+37470)*1+lsi)*1]), &(inteval->stack[((hsi*1575+1800)*1+lsi)*1]), &(inteval->stack[((hsi*1365+3375)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+41565)*1+lsi)*1]), &(inteval->stack[((hsi*4095+37470)*1+lsi)*1]), &(inteval->stack[((hsi*3510+28020)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+48585)*1+lsi)*1]), &(inteval->stack[((hsi*7020+41565)*1+lsi)*1]), &(inteval->stack[((hsi*5940+31530)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+28020)*1+lsi)*1]), &(inteval->stack[((hsi*990+5910)*1+lsi)*1]), &(inteval->stack[((hsi*825+6900)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+58485)*1+lsi)*1]), &(inteval->stack[((hsi*2970+25050)*1+lsi)*1]), &(inteval->stack[((hsi*2475+28020)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+63435)*1+lsi)*1]), &(inteval->stack[((hsi*5940+31530)*1+lsi)*1]), &(inteval->stack[((hsi*4950+58485)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+25050)*1+lsi)*1]), &(inteval->stack[((hsi*9900+48585)*1+lsi)*1]), &(inteval->stack[((hsi*8250+63435)*1+lsi)*1]),15);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*4725+58485)*1+lsi)*1]), &(inteval->stack[((hsi*1800+0)*1+lsi)*1]), &(inteval->stack[((hsi*1575+1800)*1+lsi)*1]),15);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*8190+63210)*1+lsi)*1]), &(inteval->stack[((hsi*4725+58485)*1+lsi)*1]), &(inteval->stack[((hsi*4095+37470)*1+lsi)*1]),15);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*11700+71400)*1+lsi)*1]), &(inteval->stack[((hsi*8190+63210)*1+lsi)*1]), &(inteval->stack[((hsi*7020+41565)*1+lsi)*1]),15);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*14850+83100)*1+lsi)*1]), &(inteval->stack[((hsi*11700+71400)*1+lsi)*1]), &(inteval->stack[((hsi*9900+48585)*1+lsi)*1]),15);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*17325+7725)*1+lsi)*1]), &(inteval->stack[((hsi*14850+83100)*1+lsi)*1]), &(inteval->stack[((hsi*12375+25050)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*17325+7725)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
