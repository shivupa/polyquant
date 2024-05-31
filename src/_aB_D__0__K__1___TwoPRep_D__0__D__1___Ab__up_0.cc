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
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4216)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_D__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+11992)*1+lsi)*1]), &(inteval->stack[((hsi*450+2380)*1+lsi)*1]), &(inteval->stack[((hsi*270+2830)*1+lsi)*1]),45);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+12802)*1+lsi)*1]), &(inteval->stack[((hsi*675+1705)*1+lsi)*1]), &(inteval->stack[((hsi*450+2380)*1+lsi)*1]),45);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1620+14152)*1+lsi)*1]), &(inteval->stack[((hsi*1350+12802)*1+lsi)*1]), &(inteval->stack[((hsi*810+11992)*1+lsi)*1]),45);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*648+11992)*1+lsi)*1]), &(inteval->stack[((hsi*360+3640)*1+lsi)*1]), &(inteval->stack[((hsi*216+4000)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+12640)*1+lsi)*1]), &(inteval->stack[((hsi*540+3100)*1+lsi)*1]), &(inteval->stack[((hsi*360+3640)*1+lsi)*1]),36);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1296+1705)*1+lsi)*1]), &(inteval->stack[((hsi*1080+12640)*1+lsi)*1]), &(inteval->stack[((hsi*648+11992)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+15772)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14152)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1705)*1+lsi)*1]),36);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*990+1705)*1+lsi)*1]), &(inteval->stack[((hsi*550+825)*1+lsi)*1]), &(inteval->stack[((hsi*330+1375)*1+lsi)*1]),55);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+11992)*1+lsi)*1]), &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*550+825)*1+lsi)*1]),55);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*1980+19660)*1+lsi)*1]), &(inteval->stack[((hsi*1650+11992)*1+lsi)*1]), &(inteval->stack[((hsi*990+1705)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+21640)*1+lsi)*1]), &(inteval->stack[((hsi*1980+19660)*1+lsi)*1]), &(inteval->stack[((hsi*1620+14152)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+4216)*1+lsi)*1]), &(inteval->stack[((hsi*4860+21640)*1+lsi)*1]), &(inteval->stack[((hsi*3888+15772)*1+lsi)*1]),36);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*7776+4216)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
