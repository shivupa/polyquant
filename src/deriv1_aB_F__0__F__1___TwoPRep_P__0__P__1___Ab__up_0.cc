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
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1_aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6025)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+16825)*1+lsi)*1]), &(inteval->stack[((hsi*150+5775)*1+lsi)*1]), &(inteval->stack[((hsi*100+5925)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+17125)*1+lsi)*1]), &(inteval->stack[((hsi*225+5400)*1+lsi)*1]), &(inteval->stack[((hsi*150+5625)*1+lsi)*1]), &(inteval->stack[((hsi*150+4000)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*900+15925)*1+lsi)*1]), &(inteval->stack[((hsi*450+17125)*1+lsi)*1]), &(inteval->stack[((hsi*300+16825)*1+lsi)*1]),30);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+17575)*1+lsi)*1]), &(inteval->stack[((hsi*150+5150)*1+lsi)*1]), &(inteval->stack[((hsi*100+5300)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+17875)*1+lsi)*1]), &(inteval->stack[((hsi*225+4775)*1+lsi)*1]), &(inteval->stack[((hsi*150+5000)*1+lsi)*1]), &(inteval->stack[((hsi*150+4000)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*900+15025)*1+lsi)*1]), &(inteval->stack[((hsi*450+17875)*1+lsi)*1]), &(inteval->stack[((hsi*300+17575)*1+lsi)*1]),30);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+18325)*1+lsi)*1]), &(inteval->stack[((hsi*150+4525)*1+lsi)*1]), &(inteval->stack[((hsi*100+4675)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+18625)*1+lsi)*1]), &(inteval->stack[((hsi*225+4150)*1+lsi)*1]), &(inteval->stack[((hsi*150+4375)*1+lsi)*1]), &(inteval->stack[((hsi*150+4000)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*900+14125)*1+lsi)*1]), &(inteval->stack[((hsi*450+18625)*1+lsi)*1]), &(inteval->stack[((hsi*300+18325)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+19075)*1+lsi)*1]), &(inteval->stack[((hsi*100+2025)*1+lsi)*1]), &(inteval->stack[((hsi*100+3900)*1+lsi)*1]), &(inteval->stack[((hsi*100+5925)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+19175)*1+lsi)*1]), &(inteval->stack[((hsi*150+1725)*1+lsi)*1]), &(inteval->stack[((hsi*150+3600)*1+lsi)*1]), &(inteval->stack[((hsi*150+5775)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+19325)*1+lsi)*1]), &(inteval->stack[((hsi*150+19175)*1+lsi)*1]), &(inteval->stack[((hsi*100+19075)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5775)*1+lsi)*1]), &(inteval->stack[((hsi*150+1875)*1+lsi)*1]), &(inteval->stack[((hsi*150+3750)*1+lsi)*1]), &(inteval->stack[((hsi*150+5625)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+19075)*1+lsi)*1]), &(inteval->stack[((hsi*225+1500)*1+lsi)*1]), &(inteval->stack[((hsi*225+3375)*1+lsi)*1]), &(inteval->stack[((hsi*225+5400)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+19625)*1+lsi)*1]), &(inteval->stack[((hsi*225+19075)*1+lsi)*1]), &(inteval->stack[((hsi*150+5775)*1+lsi)*1]), &(inteval->stack[((hsi*150+4000)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*900+13225)*1+lsi)*1]), &(inteval->stack[((hsi*450+19625)*1+lsi)*1]), &(inteval->stack[((hsi*300+19325)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+5400)*1+lsi)*1]), &(inteval->stack[((hsi*100+1400)*1+lsi)*1]), &(inteval->stack[((hsi*100+3275)*1+lsi)*1]), &(inteval->stack[((hsi*100+5300)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5500)*1+lsi)*1]), &(inteval->stack[((hsi*150+1100)*1+lsi)*1]), &(inteval->stack[((hsi*150+2975)*1+lsi)*1]), &(inteval->stack[((hsi*150+5150)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+5650)*1+lsi)*1]), &(inteval->stack[((hsi*150+5500)*1+lsi)*1]), &(inteval->stack[((hsi*100+5400)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5150)*1+lsi)*1]), &(inteval->stack[((hsi*150+1250)*1+lsi)*1]), &(inteval->stack[((hsi*150+3125)*1+lsi)*1]), &(inteval->stack[((hsi*150+5000)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+5300)*1+lsi)*1]), &(inteval->stack[((hsi*225+875)*1+lsi)*1]), &(inteval->stack[((hsi*225+2750)*1+lsi)*1]), &(inteval->stack[((hsi*225+4775)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+20075)*1+lsi)*1]), &(inteval->stack[((hsi*225+5300)*1+lsi)*1]), &(inteval->stack[((hsi*150+5150)*1+lsi)*1]), &(inteval->stack[((hsi*150+4000)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*900+12325)*1+lsi)*1]), &(inteval->stack[((hsi*450+20075)*1+lsi)*1]), &(inteval->stack[((hsi*300+5650)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+4775)*1+lsi)*1]), &(inteval->stack[((hsi*100+675)*1+lsi)*1]), &(inteval->stack[((hsi*100+2650)*1+lsi)*1]), &(inteval->stack[((hsi*100+4675)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+4875)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*150+2350)*1+lsi)*1]), &(inteval->stack[((hsi*150+4525)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+5025)*1+lsi)*1]), &(inteval->stack[((hsi*150+4875)*1+lsi)*1]), &(inteval->stack[((hsi*100+4775)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+4525)*1+lsi)*1]), &(inteval->stack[((hsi*150+525)*1+lsi)*1]), &(inteval->stack[((hsi*150+2500)*1+lsi)*1]), &(inteval->stack[((hsi*150+4375)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+4675)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+2125)*1+lsi)*1]), &(inteval->stack[((hsi*225+4150)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+20525)*1+lsi)*1]), &(inteval->stack[((hsi*225+4675)*1+lsi)*1]), &(inteval->stack[((hsi*150+4525)*1+lsi)*1]), &(inteval->stack[((hsi*150+4000)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*900+11425)*1+lsi)*1]), &(inteval->stack[((hsi*450+20525)*1+lsi)*1]), &(inteval->stack[((hsi*300+5025)*1+lsi)*1]),30);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+4000)*1+lsi)*1]), &(inteval->stack[((hsi*150+3750)*1+lsi)*1]), &(inteval->stack[((hsi*100+3900)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+4300)*1+lsi)*1]), &(inteval->stack[((hsi*225+3375)*1+lsi)*1]), &(inteval->stack[((hsi*150+3600)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*900+10525)*1+lsi)*1]), &(inteval->stack[((hsi*450+4300)*1+lsi)*1]), &(inteval->stack[((hsi*300+4000)*1+lsi)*1]),30);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+3375)*1+lsi)*1]), &(inteval->stack[((hsi*150+3125)*1+lsi)*1]), &(inteval->stack[((hsi*100+3275)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+20975)*1+lsi)*1]), &(inteval->stack[((hsi*225+2750)*1+lsi)*1]), &(inteval->stack[((hsi*150+2975)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*900+9625)*1+lsi)*1]), &(inteval->stack[((hsi*450+20975)*1+lsi)*1]), &(inteval->stack[((hsi*300+3375)*1+lsi)*1]),30);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+2750)*1+lsi)*1]), &(inteval->stack[((hsi*150+2500)*1+lsi)*1]), &(inteval->stack[((hsi*100+2650)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+21425)*1+lsi)*1]), &(inteval->stack[((hsi*225+2125)*1+lsi)*1]), &(inteval->stack[((hsi*150+2350)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*900+8725)*1+lsi)*1]), &(inteval->stack[((hsi*450+21425)*1+lsi)*1]), &(inteval->stack[((hsi*300+2750)*1+lsi)*1]),30);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+2125)*1+lsi)*1]), &(inteval->stack[((hsi*150+1875)*1+lsi)*1]), &(inteval->stack[((hsi*100+2025)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+21875)*1+lsi)*1]), &(inteval->stack[((hsi*225+1500)*1+lsi)*1]), &(inteval->stack[((hsi*150+1725)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*900+7825)*1+lsi)*1]), &(inteval->stack[((hsi*450+21875)*1+lsi)*1]), &(inteval->stack[((hsi*300+2125)*1+lsi)*1]),30);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+1500)*1+lsi)*1]), &(inteval->stack[((hsi*150+1250)*1+lsi)*1]), &(inteval->stack[((hsi*100+1400)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+22325)*1+lsi)*1]), &(inteval->stack[((hsi*225+875)*1+lsi)*1]), &(inteval->stack[((hsi*150+1100)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*900+6925)*1+lsi)*1]), &(inteval->stack[((hsi*450+22325)*1+lsi)*1]), &(inteval->stack[((hsi*300+1500)*1+lsi)*1]),30);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+875)*1+lsi)*1]), &(inteval->stack[((hsi*150+525)*1+lsi)*1]), &(inteval->stack[((hsi*100+675)*1+lsi)*1]), &(inteval->stack[((hsi*100+775)*1+lsi)*1]),10);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+22775)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+225)*1+lsi)*1]), &(inteval->stack[((hsi*150+375)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*900+6025)*1+lsi)*1]), &(inteval->stack[((hsi*450+22775)*1+lsi)*1]), &(inteval->stack[((hsi*300+875)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*900+6025)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*900+6925)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*900+7825)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*900+8725)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*900+9625)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*900+10525)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*900+11425)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*900+12325)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*900+13225)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*900+14125)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*900+15025)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*900+15925)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
