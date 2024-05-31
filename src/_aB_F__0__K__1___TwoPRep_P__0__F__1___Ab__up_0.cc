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
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5050)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+15850)*1+lsi)*1]), &(inteval->stack[((hsi*550+3690)*1+lsi)*1]), &(inteval->stack[((hsi*450+4240)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+17200)*1+lsi)*1]), &(inteval->stack[((hsi*450+4240)*1+lsi)*1]), &(inteval->stack[((hsi*360+4690)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+18280)*1+lsi)*1]), &(inteval->stack[((hsi*1350+15850)*1+lsi)*1]), &(inteval->stack[((hsi*1080+17200)*1+lsi)*1]),10);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*1650+20440)*1+lsi)*1]), &(inteval->stack[((hsi*660+3030)*1+lsi)*1]), &(inteval->stack[((hsi*550+3690)*1+lsi)*1]),10);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*2700+22090)*1+lsi)*1]), &(inteval->stack[((hsi*1650+20440)*1+lsi)*1]), &(inteval->stack[((hsi*1350+15850)*1+lsi)*1]),10);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*3600+24790)*1+lsi)*1]), &(inteval->stack[((hsi*2700+22090)*1+lsi)*1]), &(inteval->stack[((hsi*2160+18280)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+15850)*1+lsi)*1]), &(inteval->stack[((hsi*825+990)*1+lsi)*1]), &(inteval->stack[((hsi*675+1815)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+17875)*1+lsi)*1]), &(inteval->stack[((hsi*675+1815)*1+lsi)*1]), &(inteval->stack[((hsi*540+2490)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+19495)*1+lsi)*1]), &(inteval->stack[((hsi*2025+15850)*1+lsi)*1]), &(inteval->stack[((hsi*1620+17875)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+1815)*1+lsi)*1]), &(inteval->stack[((hsi*990+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+990)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+28390)*1+lsi)*1]), &(inteval->stack[((hsi*2475+1815)*1+lsi)*1]), &(inteval->stack[((hsi*2025+15850)*1+lsi)*1]),15);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*5400+32440)*1+lsi)*1]), &(inteval->stack[((hsi*4050+28390)*1+lsi)*1]), &(inteval->stack[((hsi*3240+19495)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*10800+5050)*1+lsi)*1]), &(inteval->stack[((hsi*5400+32440)*1+lsi)*1]), &(inteval->stack[((hsi*3600+24790)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10800+5050)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
