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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_K__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__K__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16362)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__K__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+55242)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11466)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13446)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+60102)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13446)*1+lsi)*1]), &(inteval->stack[((hsi*1296+15066)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+63990)*1+lsi)*1]), &(inteval->stack[((hsi*4860+55242)*1+lsi)*1]), &(inteval->stack[((hsi*3888+60102)*1+lsi)*1]),36);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*5940+71766)*1+lsi)*1]), &(inteval->stack[((hsi*2376+9090)*1+lsi)*1]), &(inteval->stack[((hsi*1980+11466)*1+lsi)*1]),36);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*9720+77706)*1+lsi)*1]), &(inteval->stack[((hsi*5940+71766)*1+lsi)*1]), &(inteval->stack[((hsi*4860+55242)*1+lsi)*1]),36);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*12960+87426)*1+lsi)*1]), &(inteval->stack[((hsi*9720+77706)*1+lsi)*1]), &(inteval->stack[((hsi*7776+63990)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+55242)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+61317)*1+lsi)*1]), &(inteval->stack[((hsi*2025+5445)*1+lsi)*1]), &(inteval->stack[((hsi*1620+7470)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+66177)*1+lsi)*1]), &(inteval->stack[((hsi*6075+55242)*1+lsi)*1]), &(inteval->stack[((hsi*4860+61317)*1+lsi)*1]),45);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+75897)*1+lsi)*1]), &(inteval->stack[((hsi*2970+0)*1+lsi)*1]), &(inteval->stack[((hsi*2475+2970)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+0)*1+lsi)*1]), &(inteval->stack[((hsi*7425+75897)*1+lsi)*1]), &(inteval->stack[((hsi*6075+55242)*1+lsi)*1]),45);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*16200+100386)*1+lsi)*1]), &(inteval->stack[((hsi*12150+0)*1+lsi)*1]), &(inteval->stack[((hsi*9720+66177)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*38880+16362)*1+lsi)*1]), &(inteval->stack[((hsi*16200+100386)*1+lsi)*1]), &(inteval->stack[((hsi*12960+87426)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*38880+16362)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
