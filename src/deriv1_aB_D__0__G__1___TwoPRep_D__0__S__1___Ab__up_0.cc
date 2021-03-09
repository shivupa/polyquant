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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dd.h>
#include <HRRPart0bra0ket0dd001.h>
#include <HRRPart0bra0ket0dd010.h>
#include <HRRPart0bra0ket0dd100.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001d.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010d.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100d.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <deriv1_aB_D__0__G__1___TwoPRep_D__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__G__1___TwoPRep_D__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4425)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__G__1___TwoPRep_D__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+10905)*1+lsi)*1]), &(inteval->stack[((hsi*150+4185)*1+lsi)*1]), &(inteval->stack[((hsi*90+4335)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+11175)*1+lsi)*1]), &(inteval->stack[((hsi*225+3960)*1+lsi)*1]), &(inteval->stack[((hsi*150+4185)*1+lsi)*1]),15);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*540+10365)*1+lsi)*1]), &(inteval->stack[((hsi*450+11175)*1+lsi)*1]), &(inteval->stack[((hsi*270+10905)*1+lsi)*1]),15);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+11625)*1+lsi)*1]), &(inteval->stack[((hsi*150+3720)*1+lsi)*1]), &(inteval->stack[((hsi*90+3870)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+11895)*1+lsi)*1]), &(inteval->stack[((hsi*225+3495)*1+lsi)*1]), &(inteval->stack[((hsi*150+3720)*1+lsi)*1]),15);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*540+9825)*1+lsi)*1]), &(inteval->stack[((hsi*450+11895)*1+lsi)*1]), &(inteval->stack[((hsi*270+11625)*1+lsi)*1]),15);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+12345)*1+lsi)*1]), &(inteval->stack[((hsi*150+3255)*1+lsi)*1]), &(inteval->stack[((hsi*90+3405)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+12615)*1+lsi)*1]), &(inteval->stack[((hsi*225+3030)*1+lsi)*1]), &(inteval->stack[((hsi*150+3255)*1+lsi)*1]),15);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*540+9285)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]), &(inteval->stack[((hsi*270+12345)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+13065)*1+lsi)*1]), &(inteval->stack[((hsi*150+1395)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]), &(inteval->stack[((hsi*150+4185)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+4185)*1+lsi)*1]), &(inteval->stack[((hsi*90+1545)*1+lsi)*1]), &(inteval->stack[((hsi*90+2940)*1+lsi)*1]), &(inteval->stack[((hsi*90+4335)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+13215)*1+lsi)*1]), &(inteval->stack[((hsi*150+13065)*1+lsi)*1]), &(inteval->stack[((hsi*90+4185)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+4185)*1+lsi)*1]), &(inteval->stack[((hsi*225+1170)*1+lsi)*1]), &(inteval->stack[((hsi*225+2565)*1+lsi)*1]), &(inteval->stack[((hsi*225+3960)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+13485)*1+lsi)*1]), &(inteval->stack[((hsi*225+4185)*1+lsi)*1]), &(inteval->stack[((hsi*150+13065)*1+lsi)*1]),15);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*540+8745)*1+lsi)*1]), &(inteval->stack[((hsi*450+13485)*1+lsi)*1]), &(inteval->stack[((hsi*270+13215)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+13065)*1+lsi)*1]), &(inteval->stack[((hsi*150+930)*1+lsi)*1]), &(inteval->stack[((hsi*150+2325)*1+lsi)*1]), &(inteval->stack[((hsi*150+3720)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3960)*1+lsi)*1]), &(inteval->stack[((hsi*90+1080)*1+lsi)*1]), &(inteval->stack[((hsi*90+2475)*1+lsi)*1]), &(inteval->stack[((hsi*90+3870)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+4050)*1+lsi)*1]), &(inteval->stack[((hsi*150+13065)*1+lsi)*1]), &(inteval->stack[((hsi*90+3960)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+3720)*1+lsi)*1]), &(inteval->stack[((hsi*225+705)*1+lsi)*1]), &(inteval->stack[((hsi*225+2100)*1+lsi)*1]), &(inteval->stack[((hsi*225+3495)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+13935)*1+lsi)*1]), &(inteval->stack[((hsi*225+3720)*1+lsi)*1]), &(inteval->stack[((hsi*150+13065)*1+lsi)*1]),15);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*540+8205)*1+lsi)*1]), &(inteval->stack[((hsi*450+13935)*1+lsi)*1]), &(inteval->stack[((hsi*270+4050)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+13065)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*150+1860)*1+lsi)*1]), &(inteval->stack[((hsi*150+3255)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3495)*1+lsi)*1]), &(inteval->stack[((hsi*90+525)*1+lsi)*1]), &(inteval->stack[((hsi*90+2010)*1+lsi)*1]), &(inteval->stack[((hsi*90+3405)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+3585)*1+lsi)*1]), &(inteval->stack[((hsi*150+13065)*1+lsi)*1]), &(inteval->stack[((hsi*90+3495)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+3255)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+1635)*1+lsi)*1]), &(inteval->stack[((hsi*225+3030)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+14385)*1+lsi)*1]), &(inteval->stack[((hsi*225+3255)*1+lsi)*1]), &(inteval->stack[((hsi*150+13065)*1+lsi)*1]),15);
HRRPart0bra0ket0dd(inteval, &(inteval->stack[((hsi*540+7665)*1+lsi)*1]), &(inteval->stack[((hsi*450+14385)*1+lsi)*1]), &(inteval->stack[((hsi*270+3585)*1+lsi)*1]),15);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+3030)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*270+3300)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]), &(inteval->stack[((hsi*90+2940)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+14835)*1+lsi)*1]), &(inteval->stack[((hsi*225+2565)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart0bra0ket0dd001(inteval, &(inteval->stack[((hsi*540+7125)*1+lsi)*1]), &(inteval->stack[((hsi*450+14835)*1+lsi)*1]), &(inteval->stack[((hsi*270+3300)*1+lsi)*1]), &(inteval->stack[((hsi*270+3030)*1+lsi)*1]),15);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*270+2565)*1+lsi)*1]), &(inteval->stack[((hsi*150+2325)*1+lsi)*1]), &(inteval->stack[((hsi*90+2475)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+15285)*1+lsi)*1]), &(inteval->stack[((hsi*225+2100)*1+lsi)*1]), &(inteval->stack[((hsi*150+2325)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart0bra0ket0dd010(inteval, &(inteval->stack[((hsi*540+6585)*1+lsi)*1]), &(inteval->stack[((hsi*450+15285)*1+lsi)*1]), &(inteval->stack[((hsi*270+2565)*1+lsi)*1]), &(inteval->stack[((hsi*270+3030)*1+lsi)*1]),15);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*270+2100)*1+lsi)*1]), &(inteval->stack[((hsi*150+1860)*1+lsi)*1]), &(inteval->stack[((hsi*90+2010)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+15735)*1+lsi)*1]), &(inteval->stack[((hsi*225+1635)*1+lsi)*1]), &(inteval->stack[((hsi*150+1860)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart0bra0ket0dd100(inteval, &(inteval->stack[((hsi*540+6045)*1+lsi)*1]), &(inteval->stack[((hsi*450+15735)*1+lsi)*1]), &(inteval->stack[((hsi*270+2100)*1+lsi)*1]), &(inteval->stack[((hsi*270+3030)*1+lsi)*1]),15);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*270+1635)*1+lsi)*1]), &(inteval->stack[((hsi*150+1395)*1+lsi)*1]), &(inteval->stack[((hsi*90+1545)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+16185)*1+lsi)*1]), &(inteval->stack[((hsi*225+1170)*1+lsi)*1]), &(inteval->stack[((hsi*150+1395)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart0bra0ket0d001d(inteval, &(inteval->stack[((hsi*540+5505)*1+lsi)*1]), &(inteval->stack[((hsi*450+16185)*1+lsi)*1]), &(inteval->stack[((hsi*270+1635)*1+lsi)*1]), &(inteval->stack[((hsi*270+3030)*1+lsi)*1]),15);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*270+1170)*1+lsi)*1]), &(inteval->stack[((hsi*150+930)*1+lsi)*1]), &(inteval->stack[((hsi*90+1080)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+16635)*1+lsi)*1]), &(inteval->stack[((hsi*225+705)*1+lsi)*1]), &(inteval->stack[((hsi*150+930)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart0bra0ket0d010d(inteval, &(inteval->stack[((hsi*540+4965)*1+lsi)*1]), &(inteval->stack[((hsi*450+16635)*1+lsi)*1]), &(inteval->stack[((hsi*270+1170)*1+lsi)*1]), &(inteval->stack[((hsi*270+3030)*1+lsi)*1]),15);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*270+705)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*90+525)*1+lsi)*1]), &(inteval->stack[((hsi*90+615)*1+lsi)*1]),15);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+17085)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart0bra0ket0d100d(inteval, &(inteval->stack[((hsi*540+4425)*1+lsi)*1]), &(inteval->stack[((hsi*450+17085)*1+lsi)*1]), &(inteval->stack[((hsi*270+705)*1+lsi)*1]), &(inteval->stack[((hsi*270+3030)*1+lsi)*1]),15);
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
