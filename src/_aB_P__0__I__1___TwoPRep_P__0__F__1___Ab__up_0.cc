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
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1476)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__I__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+3996)*1+lsi)*1]), &(inteval->stack[((hsi*135+1149)*1+lsi)*1]), &(inteval->stack[((hsi*108+1284)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+4320)*1+lsi)*1]), &(inteval->stack[((hsi*108+1284)*1+lsi)*1]), &(inteval->stack[((hsi*84+1392)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+4572)*1+lsi)*1]), &(inteval->stack[((hsi*324+3996)*1+lsi)*1]), &(inteval->stack[((hsi*252+4320)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+5076)*1+lsi)*1]), &(inteval->stack[((hsi*165+984)*1+lsi)*1]), &(inteval->stack[((hsi*135+1149)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+5481)*1+lsi)*1]), &(inteval->stack[((hsi*405+5076)*1+lsi)*1]), &(inteval->stack[((hsi*324+3996)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+6129)*1+lsi)*1]), &(inteval->stack[((hsi*648+5481)*1+lsi)*1]), &(inteval->stack[((hsi*504+4572)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+3996)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+4644)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+6969)*1+lsi)*1]), &(inteval->stack[((hsi*648+3996)*1+lsi)*1]), &(inteval->stack[((hsi*504+4644)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+4644)*1+lsi)*1]), &(inteval->stack[((hsi*330+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*810+4644)*1+lsi)*1]), &(inteval->stack[((hsi*648+3996)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+3996)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+6969)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*2520+1476)*1+lsi)*1]), &(inteval->stack[((hsi*1680+3996)*1+lsi)*1]), &(inteval->stack[((hsi*840+6129)*1+lsi)*1]),280);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2520+1476)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
