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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__H__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+25960)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5940)*1+lsi)*1]), &(inteval->stack[((hsi*784+6948)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+28312)*1+lsi)*1]), &(inteval->stack[((hsi*784+6948)*1+lsi)*1]), &(inteval->stack[((hsi*588+7732)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+30076)*1+lsi)*1]), &(inteval->stack[((hsi*2352+25960)*1+lsi)*1]), &(inteval->stack[((hsi*1764+28312)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+33604)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4680)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5940)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+36628)*1+lsi)*1]), &(inteval->stack[((hsi*3024+33604)*1+lsi)*1]), &(inteval->stack[((hsi*2352+25960)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+41332)*1+lsi)*1]), &(inteval->stack[((hsi*4704+36628)*1+lsi)*1]), &(inteval->stack[((hsi*3528+30076)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+25960)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]),36);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+28984)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]), &(inteval->stack[((hsi*756+3924)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+31252)*1+lsi)*1]), &(inteval->stack[((hsi*3024+25960)*1+lsi)*1]), &(inteval->stack[((hsi*2268+28984)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+35788)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+0)*1+lsi)*1]), &(inteval->stack[((hsi*3888+35788)*1+lsi)*1]), &(inteval->stack[((hsi*3024+25960)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+47212)*1+lsi)*1]), &(inteval->stack[((hsi*6048+0)*1+lsi)*1]), &(inteval->stack[((hsi*4536+31252)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*17640+8320)*1+lsi)*1]), &(inteval->stack[((hsi*7560+47212)*1+lsi)*1]), &(inteval->stack[((hsi*5880+41332)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*17640+8320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
