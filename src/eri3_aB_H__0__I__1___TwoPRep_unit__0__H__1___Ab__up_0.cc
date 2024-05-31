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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ig.h>
#include <HRRPart1bra0ket0ih.h>
#include <HRRPart1bra0ket0ip.h>
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
#include <eri3_aB_H__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6468)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__I__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+18816)*1+lsi)*1]), &(inteval->stack[((hsi*945+4179)*1+lsi)*1]), &(inteval->stack[((hsi*756+5124)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+21084)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3024)*1+lsi)*1]), &(inteval->stack[((hsi*945+4179)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+23919)*1+lsi)*1]), &(inteval->stack[((hsi*2835+21084)*1+lsi)*1]), &(inteval->stack[((hsi*2268+18816)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+28455)*1+lsi)*1]), &(inteval->stack[((hsi*1386+1638)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3024)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+31920)*1+lsi)*1]), &(inteval->stack[((hsi*3465+28455)*1+lsi)*1]), &(inteval->stack[((hsi*2835+21084)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+37590)*1+lsi)*1]), &(inteval->stack[((hsi*5670+31920)*1+lsi)*1]), &(inteval->stack[((hsi*4536+23919)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+21084)*1+lsi)*1]), &(inteval->stack[((hsi*756+5124)*1+lsi)*1]), &(inteval->stack[((hsi*588+5880)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+45150)*1+lsi)*1]), &(inteval->stack[((hsi*2268+18816)*1+lsi)*1]), &(inteval->stack[((hsi*1764+21084)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+48678)*1+lsi)*1]), &(inteval->stack[((hsi*4536+23919)*1+lsi)*1]), &(inteval->stack[((hsi*3528+45150)*1+lsi)*1]),21);
HRRPart1bra0ket0ig(inteval, &(inteval->stack[((hsi*8820+18816)*1+lsi)*1]), &(inteval->stack[((hsi*7560+37590)*1+lsi)*1]), &(inteval->stack[((hsi*5880+48678)*1+lsi)*1]),21);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*4158+45150)*1+lsi)*1]), &(inteval->stack[((hsi*1638+0)*1+lsi)*1]), &(inteval->stack[((hsi*1386+1638)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+49308)*1+lsi)*1]), &(inteval->stack[((hsi*4158+45150)*1+lsi)*1]), &(inteval->stack[((hsi*3465+28455)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+56238)*1+lsi)*1]), &(inteval->stack[((hsi*6930+49308)*1+lsi)*1]), &(inteval->stack[((hsi*5670+31920)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+65688)*1+lsi)*1]), &(inteval->stack[((hsi*9450+56238)*1+lsi)*1]), &(inteval->stack[((hsi*7560+37590)*1+lsi)*1]),21);
HRRPart1bra0ket0ih(inteval, &(inteval->stack[((hsi*12348+6468)*1+lsi)*1]), &(inteval->stack[((hsi*11340+65688)*1+lsi)*1]), &(inteval->stack[((hsi*8820+18816)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12348+6468)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
