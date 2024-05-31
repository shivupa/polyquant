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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10496)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_I__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+34016)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7444)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8704)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+37040)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8704)*1+lsi)*1]), &(inteval->stack[((hsi*784+9712)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+39392)*1+lsi)*1]), &(inteval->stack[((hsi*3024+34016)*1+lsi)*1]), &(inteval->stack[((hsi*2352+37040)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+44096)*1+lsi)*1]), &(inteval->stack[((hsi*1540+5904)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7444)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+47876)*1+lsi)*1]), &(inteval->stack[((hsi*3780+44096)*1+lsi)*1]), &(inteval->stack[((hsi*3024+34016)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+53924)*1+lsi)*1]), &(inteval->stack[((hsi*6048+47876)*1+lsi)*1]), &(inteval->stack[((hsi*4704+39392)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+34016)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1980)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3600)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+37904)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1008+4896)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+40928)*1+lsi)*1]), &(inteval->stack[((hsi*3888+34016)*1+lsi)*1]), &(inteval->stack[((hsi*3024+37904)*1+lsi)*1]),36);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*4860+46976)*1+lsi)*1]), &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+1980)*1+lsi)*1]),36);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*7776+0)*1+lsi)*1]), &(inteval->stack[((hsi*4860+46976)*1+lsi)*1]), &(inteval->stack[((hsi*3888+34016)*1+lsi)*1]),36);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*10080+61764)*1+lsi)*1]), &(inteval->stack[((hsi*7776+0)*1+lsi)*1]), &(inteval->stack[((hsi*6048+40928)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*23520+10496)*1+lsi)*1]), &(inteval->stack[((hsi*10080+61764)*1+lsi)*1]), &(inteval->stack[((hsi*7840+53924)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*23520+10496)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
