/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__H__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__H__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9065)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+28910)*1+lsi)*1]), &(inteval->stack[((hsi*756+7280)*1+lsi)*1]), &(inteval->stack[((hsi*588+8036)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+30674)*1+lsi)*1]), &(inteval->stack[((hsi*945+6335)*1+lsi)*1]), &(inteval->stack[((hsi*756+7280)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+32942)*1+lsi)*1]), &(inteval->stack[((hsi*2268+30674)*1+lsi)*1]), &(inteval->stack[((hsi*1764+28910)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+36470)*1+lsi)*1]), &(inteval->stack[((hsi*588+8036)*1+lsi)*1]), &(inteval->stack[((hsi*441+8624)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+37793)*1+lsi)*1]), &(inteval->stack[((hsi*1764+28910)*1+lsi)*1]), &(inteval->stack[((hsi*1323+36470)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+40439)*1+lsi)*1]), &(inteval->stack[((hsi*3528+32942)*1+lsi)*1]), &(inteval->stack[((hsi*2646+37793)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+36470)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5180)*1+lsi)*1]), &(inteval->stack[((hsi*945+6335)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+44849)*1+lsi)*1]), &(inteval->stack[((hsi*2835+36470)*1+lsi)*1]), &(inteval->stack[((hsi*2268+30674)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+49385)*1+lsi)*1]), &(inteval->stack[((hsi*4536+44849)*1+lsi)*1]), &(inteval->stack[((hsi*3528+32942)*1+lsi)*1]),21);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*6615+28910)*1+lsi)*1]), &(inteval->stack[((hsi*5880+49385)*1+lsi)*1]), &(inteval->stack[((hsi*4410+40439)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+5180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+35525)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+38549)*1+lsi)*1]), &(inteval->stack[((hsi*3024+35525)*1+lsi)*1]), &(inteval->stack[((hsi*2352+5180)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+43253)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]), &(inteval->stack[((hsi*588+4592)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+45017)*1+lsi)*1]), &(inteval->stack[((hsi*2352+5180)*1+lsi)*1]), &(inteval->stack[((hsi*1764+43253)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+2800)*1+lsi)*1]), &(inteval->stack[((hsi*4704+38549)*1+lsi)*1]), &(inteval->stack[((hsi*3528+45017)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+43253)*1+lsi)*1]), &(inteval->stack[((hsi*1540+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+47033)*1+lsi)*1]), &(inteval->stack[((hsi*3780+43253)*1+lsi)*1]), &(inteval->stack[((hsi*3024+35525)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+53081)*1+lsi)*1]), &(inteval->stack[((hsi*6048+47033)*1+lsi)*1]), &(inteval->stack[((hsi*4704+38549)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+35525)*1+lsi)*1]), &(inteval->stack[((hsi*7840+53081)*1+lsi)*1]), &(inteval->stack[((hsi*5880+2800)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*19845+9065)*1+lsi)*1]), &(inteval->stack[((hsi*8820+35525)*1+lsi)*1]), &(inteval->stack[((hsi*6615+28910)*1+lsi)*1]),315);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19845+9065)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
