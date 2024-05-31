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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0np.h>
#include <_aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,280)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_S__0__K__1___TwoPRep_S__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+820)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]),1);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*165+955)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]),1);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*270+1120)*1+lsi)*1]), &(inteval->stack[((hsi*165+955)*1+lsi)*1]), &(inteval->stack[((hsi*135+820)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1390)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]), &(inteval->stack[((hsi*36+244)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1498)*1+lsi)*1]), &(inteval->stack[((hsi*135+820)*1+lsi)*1]), &(inteval->stack[((hsi*108+1390)*1+lsi)*1]),1);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*360+1714)*1+lsi)*1]), &(inteval->stack[((hsi*270+1120)*1+lsi)*1]), &(inteval->stack[((hsi*216+1498)*1+lsi)*1]),1);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*198+1390)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]),1);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*330+2074)*1+lsi)*1]), &(inteval->stack[((hsi*198+1390)*1+lsi)*1]), &(inteval->stack[((hsi*165+955)*1+lsi)*1]),1);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*450+2404)*1+lsi)*1]), &(inteval->stack[((hsi*330+2074)*1+lsi)*1]), &(inteval->stack[((hsi*270+1120)*1+lsi)*1]),1);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*540+280)*1+lsi)*1]), &(inteval->stack[((hsi*450+2404)*1+lsi)*1]), &(inteval->stack[((hsi*360+1714)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+280)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
