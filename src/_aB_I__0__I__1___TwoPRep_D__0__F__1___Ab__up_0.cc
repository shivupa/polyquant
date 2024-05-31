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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__I__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,17876)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+64916)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9360)*1+lsi)*1]), &(inteval->stack[((hsi*1296+10980)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+68804)*1+lsi)*1]), &(inteval->stack[((hsi*1296+10980)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12276)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+71828)*1+lsi)*1]), &(inteval->stack[((hsi*3888+64916)*1+lsi)*1]), &(inteval->stack[((hsi*3024+68804)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+77876)*1+lsi)*1]), &(inteval->stack[((hsi*1980+7380)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9360)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+82736)*1+lsi)*1]), &(inteval->stack[((hsi*4860+77876)*1+lsi)*1]), &(inteval->stack[((hsi*3888+64916)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+90512)*1+lsi)*1]), &(inteval->stack[((hsi*7776+82736)*1+lsi)*1]), &(inteval->stack[((hsi*6048+71828)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+64916)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14824)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16084)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+67940)*1+lsi)*1]), &(inteval->stack[((hsi*1008+16084)*1+lsi)*1]), &(inteval->stack[((hsi*784+17092)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+70292)*1+lsi)*1]), &(inteval->stack[((hsi*3024+64916)*1+lsi)*1]), &(inteval->stack[((hsi*2352+67940)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+74996)*1+lsi)*1]), &(inteval->stack[((hsi*1540+13284)*1+lsi)*1]), &(inteval->stack[((hsi*1260+14824)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+78776)*1+lsi)*1]), &(inteval->stack[((hsi*3780+74996)*1+lsi)*1]), &(inteval->stack[((hsi*3024+64916)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+7380)*1+lsi)*1]), &(inteval->stack[((hsi*6048+78776)*1+lsi)*1]), &(inteval->stack[((hsi*4704+70292)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*23520+64916)*1+lsi)*1]), &(inteval->stack[((hsi*10080+90512)*1+lsi)*1]), &(inteval->stack[((hsi*7840+7380)*1+lsi)*1]),280);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+7380)*1+lsi)*1]), &(inteval->stack[((hsi*2025+2475)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4500)*1+lsi)*1]),45);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6120)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+100592)*1+lsi)*1]), &(inteval->stack[((hsi*4860+7380)*1+lsi)*1]), &(inteval->stack[((hsi*3780+12240)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+108152)*1+lsi)*1]), &(inteval->stack[((hsi*2475+0)*1+lsi)*1]), &(inteval->stack[((hsi*2025+2475)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+114227)*1+lsi)*1]), &(inteval->stack[((hsi*6075+108152)*1+lsi)*1]), &(inteval->stack[((hsi*4860+7380)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+0)*1+lsi)*1]), &(inteval->stack[((hsi*9720+114227)*1+lsi)*1]), &(inteval->stack[((hsi*7560+100592)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*30240+100592)*1+lsi)*1]), &(inteval->stack[((hsi*12600+0)*1+lsi)*1]), &(inteval->stack[((hsi*10080+90512)*1+lsi)*1]),280);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*47040+17876)*1+lsi)*1]), &(inteval->stack[((hsi*30240+100592)*1+lsi)*1]), &(inteval->stack[((hsi*23520+64916)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*47040+17876)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
