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
#include <CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0dd.h>
#include <HRRPart1bra0ket0dd001.h>
#include <HRRPart1bra0ket0dd010.h>
#include <HRRPart1bra0ket0dd100.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0dp001.h>
#include <HRRPart1bra0ket0dp010.h>
#include <HRRPart1bra0ket0dp100.h>
#include <HRRPart1bra0ket0d001d.h>
#include <HRRPart1bra0ket0d001p.h>
#include <HRRPart1bra0ket0d010d.h>
#include <HRRPart1bra0ket0d010p.h>
#include <HRRPart1bra0ket0d100d.h>
#include <HRRPart1bra0ket0d100p.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1_aB_G__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4425)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+10905)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*270+11175)*1+lsi)*1]), &(inteval->stack[((hsi*150+4185)*1+lsi)*1]), &(inteval->stack[((hsi*90+4335)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+11445)*1+lsi)*1]), &(inteval->stack[((hsi*225+3960)*1+lsi)*1]), &(inteval->stack[((hsi*150+4185)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*540+10365)*1+lsi)*1]), &(inteval->stack[((hsi*450+11445)*1+lsi)*1]), &(inteval->stack[((hsi*270+11175)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*270+11895)*1+lsi)*1]), &(inteval->stack[((hsi*150+3720)*1+lsi)*1]), &(inteval->stack[((hsi*90+3870)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+12165)*1+lsi)*1]), &(inteval->stack[((hsi*225+3495)*1+lsi)*1]), &(inteval->stack[((hsi*150+3720)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*540+9825)*1+lsi)*1]), &(inteval->stack[((hsi*450+12165)*1+lsi)*1]), &(inteval->stack[((hsi*270+11895)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*270+12615)*1+lsi)*1]), &(inteval->stack[((hsi*150+3165)*1+lsi)*1]), &(inteval->stack[((hsi*90+3405)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+12885)*1+lsi)*1]), &(inteval->stack[((hsi*225+2940)*1+lsi)*1]), &(inteval->stack[((hsi*150+3165)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*540+9285)*1+lsi)*1]), &(inteval->stack[((hsi*450+12885)*1+lsi)*1]), &(inteval->stack[((hsi*270+12615)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*150+1155)*1+lsi)*1]), &(inteval->stack[((hsi*150+2550)*1+lsi)*1]), &(inteval->stack[((hsi*150+4185)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+4185)*1+lsi)*1]), &(inteval->stack[((hsi*90+1305)*1+lsi)*1]), &(inteval->stack[((hsi*90+2700)*1+lsi)*1]), &(inteval->stack[((hsi*90+4335)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*270+13485)*1+lsi)*1]), &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*90+4185)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+4185)*1+lsi)*1]), &(inteval->stack[((hsi*225+930)*1+lsi)*1]), &(inteval->stack[((hsi*225+2325)*1+lsi)*1]), &(inteval->stack[((hsi*225+3960)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+13755)*1+lsi)*1]), &(inteval->stack[((hsi*225+4185)*1+lsi)*1]), &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*540+8745)*1+lsi)*1]), &(inteval->stack[((hsi*450+13755)*1+lsi)*1]), &(inteval->stack[((hsi*270+13485)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*150+690)*1+lsi)*1]), &(inteval->stack[((hsi*150+2085)*1+lsi)*1]), &(inteval->stack[((hsi*150+3720)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3960)*1+lsi)*1]), &(inteval->stack[((hsi*90+840)*1+lsi)*1]), &(inteval->stack[((hsi*90+2235)*1+lsi)*1]), &(inteval->stack[((hsi*90+3870)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*270+4050)*1+lsi)*1]), &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*90+3960)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+3720)*1+lsi)*1]), &(inteval->stack[((hsi*225+465)*1+lsi)*1]), &(inteval->stack[((hsi*225+1860)*1+lsi)*1]), &(inteval->stack[((hsi*225+3495)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+14205)*1+lsi)*1]), &(inteval->stack[((hsi*225+3720)*1+lsi)*1]), &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*540+8205)*1+lsi)*1]), &(inteval->stack[((hsi*450+14205)*1+lsi)*1]), &(inteval->stack[((hsi*270+4050)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*150+1620)*1+lsi)*1]), &(inteval->stack[((hsi*150+3165)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3495)*1+lsi)*1]), &(inteval->stack[((hsi*90+375)*1+lsi)*1]), &(inteval->stack[((hsi*90+1770)*1+lsi)*1]), &(inteval->stack[((hsi*90+3405)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*270+3585)*1+lsi)*1]), &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*90+3495)*1+lsi)*1]), &(inteval->stack[((hsi*90+3315)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+3165)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+1395)*1+lsi)*1]), &(inteval->stack[((hsi*225+2940)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+14655)*1+lsi)*1]), &(inteval->stack[((hsi*225+3165)*1+lsi)*1]), &(inteval->stack[((hsi*150+13335)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*540+7665)*1+lsi)*1]), &(inteval->stack[((hsi*450+14655)*1+lsi)*1]), &(inteval->stack[((hsi*270+3585)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+2790)*1+lsi)*1]), &(inteval->stack[((hsi*150+2550)*1+lsi)*1]), &(inteval->stack[((hsi*90+2700)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+3060)*1+lsi)*1]), &(inteval->stack[((hsi*225+2325)*1+lsi)*1]), &(inteval->stack[((hsi*150+2550)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*540+7125)*1+lsi)*1]), &(inteval->stack[((hsi*450+3060)*1+lsi)*1]), &(inteval->stack[((hsi*270+2790)*1+lsi)*1]),15);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+2325)*1+lsi)*1]), &(inteval->stack[((hsi*150+2085)*1+lsi)*1]), &(inteval->stack[((hsi*90+2235)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+15105)*1+lsi)*1]), &(inteval->stack[((hsi*225+1860)*1+lsi)*1]), &(inteval->stack[((hsi*150+2085)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*540+6585)*1+lsi)*1]), &(inteval->stack[((hsi*450+15105)*1+lsi)*1]), &(inteval->stack[((hsi*270+2325)*1+lsi)*1]),15);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+1860)*1+lsi)*1]), &(inteval->stack[((hsi*150+1620)*1+lsi)*1]), &(inteval->stack[((hsi*90+1770)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+15555)*1+lsi)*1]), &(inteval->stack[((hsi*225+1395)*1+lsi)*1]), &(inteval->stack[((hsi*150+1620)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*540+6045)*1+lsi)*1]), &(inteval->stack[((hsi*450+15555)*1+lsi)*1]), &(inteval->stack[((hsi*270+1860)*1+lsi)*1]),15);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+1395)*1+lsi)*1]), &(inteval->stack[((hsi*150+1155)*1+lsi)*1]), &(inteval->stack[((hsi*90+1305)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+16005)*1+lsi)*1]), &(inteval->stack[((hsi*225+930)*1+lsi)*1]), &(inteval->stack[((hsi*150+1155)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*540+5505)*1+lsi)*1]), &(inteval->stack[((hsi*450+16005)*1+lsi)*1]), &(inteval->stack[((hsi*270+1395)*1+lsi)*1]),15);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+930)*1+lsi)*1]), &(inteval->stack[((hsi*150+690)*1+lsi)*1]), &(inteval->stack[((hsi*90+840)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+16455)*1+lsi)*1]), &(inteval->stack[((hsi*225+465)*1+lsi)*1]), &(inteval->stack[((hsi*150+690)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*540+4965)*1+lsi)*1]), &(inteval->stack[((hsi*450+16455)*1+lsi)*1]), &(inteval->stack[((hsi*270+930)*1+lsi)*1]),15);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*270+465)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*90+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+16905)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]),15);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*540+4425)*1+lsi)*1]), &(inteval->stack[((hsi*450+16905)*1+lsi)*1]), &(inteval->stack[((hsi*270+465)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+4425)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*540+4965)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*540+5505)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*540+6045)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*540+6585)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*540+7125)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*540+7665)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*540+8205)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*540+8745)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*540+9285)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*540+9825)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*540+10365)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
