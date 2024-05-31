/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_D__0__K__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__K__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6262)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+19222)*1+lsi)*1]), &(inteval->stack[((hsi*550+3690)*1+lsi)*1]), &(inteval->stack[((hsi*450+4240)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+20572)*1+lsi)*1]), &(inteval->stack[((hsi*450+4240)*1+lsi)*1]), &(inteval->stack[((hsi*360+4690)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+21652)*1+lsi)*1]), &(inteval->stack[((hsi*1350+19222)*1+lsi)*1]), &(inteval->stack[((hsi*1080+20572)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+23812)*1+lsi)*1]), &(inteval->stack[((hsi*660+3030)*1+lsi)*1]), &(inteval->stack[((hsi*550+3690)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+25462)*1+lsi)*1]), &(inteval->stack[((hsi*1650+23812)*1+lsi)*1]), &(inteval->stack[((hsi*1350+19222)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+28162)*1+lsi)*1]), &(inteval->stack[((hsi*2700+25462)*1+lsi)*1]), &(inteval->stack[((hsi*2160+21652)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+19222)*1+lsi)*1]), &(inteval->stack[((hsi*330+5446)*1+lsi)*1]), &(inteval->stack[((hsi*270+5776)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+20032)*1+lsi)*1]), &(inteval->stack[((hsi*270+5776)*1+lsi)*1]), &(inteval->stack[((hsi*216+6046)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+20680)*1+lsi)*1]), &(inteval->stack[((hsi*810+19222)*1+lsi)*1]), &(inteval->stack[((hsi*648+20032)*1+lsi)*1]),6);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*990+21976)*1+lsi)*1]), &(inteval->stack[((hsi*396+5050)*1+lsi)*1]), &(inteval->stack[((hsi*330+5446)*1+lsi)*1]),6);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*1620+22966)*1+lsi)*1]), &(inteval->stack[((hsi*990+21976)*1+lsi)*1]), &(inteval->stack[((hsi*810+19222)*1+lsi)*1]),6);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*2160+24586)*1+lsi)*1]), &(inteval->stack[((hsi*1620+22966)*1+lsi)*1]), &(inteval->stack[((hsi*1296+20680)*1+lsi)*1]),6);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*6480+31762)*1+lsi)*1]), &(inteval->stack[((hsi*3600+28162)*1+lsi)*1]), &(inteval->stack[((hsi*2160+24586)*1+lsi)*1]),360);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+19222)*1+lsi)*1]), &(inteval->stack[((hsi*825+990)*1+lsi)*1]), &(inteval->stack[((hsi*675+1815)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+21247)*1+lsi)*1]), &(inteval->stack[((hsi*675+1815)*1+lsi)*1]), &(inteval->stack[((hsi*540+2490)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+22867)*1+lsi)*1]), &(inteval->stack[((hsi*2025+19222)*1+lsi)*1]), &(inteval->stack[((hsi*1620+21247)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+1815)*1+lsi)*1]), &(inteval->stack[((hsi*990+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+990)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+38242)*1+lsi)*1]), &(inteval->stack[((hsi*2475+1815)*1+lsi)*1]), &(inteval->stack[((hsi*2025+19222)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4050+38242)*1+lsi)*1]), &(inteval->stack[((hsi*3240+22867)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*10800+38242)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*3600+28162)*1+lsi)*1]),360);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*12960+6262)*1+lsi)*1]), &(inteval->stack[((hsi*10800+38242)*1+lsi)*1]), &(inteval->stack[((hsi*6480+31762)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12960+6262)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
