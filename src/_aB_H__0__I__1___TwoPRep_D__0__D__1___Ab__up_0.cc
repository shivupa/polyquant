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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9265)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+30433)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5121)*1+lsi)*1]), &(inteval->stack[((hsi*756+6129)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+32701)*1+lsi)*1]), &(inteval->stack[((hsi*1296+3825)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5121)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+35725)*1+lsi)*1]), &(inteval->stack[((hsi*3024+32701)*1+lsi)*1]), &(inteval->stack[((hsi*2268+30433)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+30433)*1+lsi)*1]), &(inteval->stack[((hsi*784+7893)*1+lsi)*1]), &(inteval->stack[((hsi*588+8677)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+32197)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6885)*1+lsi)*1]), &(inteval->stack[((hsi*784+7893)*1+lsi)*1]),28);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+3825)*1+lsi)*1]), &(inteval->stack[((hsi*2352+32197)*1+lsi)*1]), &(inteval->stack[((hsi*1764+30433)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*10584+40261)*1+lsi)*1]), &(inteval->stack[((hsi*4536+35725)*1+lsi)*1]), &(inteval->stack[((hsi*3528+3825)*1+lsi)*1]),126);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+3825)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1620)*1+lsi)*1]), &(inteval->stack[((hsi*945+2880)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+30433)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1620)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+50845)*1+lsi)*1]), &(inteval->stack[((hsi*3780+30433)*1+lsi)*1]), &(inteval->stack[((hsi*2835+3825)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*13608+56515)*1+lsi)*1]), &(inteval->stack[((hsi*5670+50845)*1+lsi)*1]), &(inteval->stack[((hsi*4536+35725)*1+lsi)*1]),126);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*21168+9265)*1+lsi)*1]), &(inteval->stack[((hsi*13608+56515)*1+lsi)*1]), &(inteval->stack[((hsi*10584+40261)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*21168+9265)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
