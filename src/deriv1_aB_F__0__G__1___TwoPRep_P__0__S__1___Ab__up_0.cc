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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_F__0__G__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__G__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3525)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__G__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+5775)*1+lsi)*1]), &(inteval->stack[((hsi*225+2475)*1+lsi)*1]), &(inteval->stack[((hsi*150+3075)*1+lsi)*1]), &(inteval->stack[((hsi*150+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+5325)*1+lsi)*1]), &(inteval->stack[((hsi*225+1350)*1+lsi)*1]), &(inteval->stack[((hsi*150+1950)*1+lsi)*1]), &(inteval->stack[((hsi*150+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+4875)*1+lsi)*1]), &(inteval->stack[((hsi*225+225)*1+lsi)*1]), &(inteval->stack[((hsi*150+825)*1+lsi)*1]), &(inteval->stack[((hsi*150+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+4425)*1+lsi)*1]), &(inteval->stack[((hsi*225+2250)*1+lsi)*1]), &(inteval->stack[((hsi*150+2925)*1+lsi)*1]), &(inteval->stack[((hsi*150+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+3975)*1+lsi)*1]), &(inteval->stack[((hsi*225+1125)*1+lsi)*1]), &(inteval->stack[((hsi*150+1800)*1+lsi)*1]), &(inteval->stack[((hsi*150+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+3525)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+675)*1+lsi)*1]), &(inteval->stack[((hsi*150+3375)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+8475)*1+lsi)*1]), &(inteval->stack[((hsi*225+2700)*1+lsi)*1]), &(inteval->stack[((hsi*150+3225)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+8025)*1+lsi)*1]), &(inteval->stack[((hsi*225+1575)*1+lsi)*1]), &(inteval->stack[((hsi*150+2100)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+7575)*1+lsi)*1]), &(inteval->stack[((hsi*225+450)*1+lsi)*1]), &(inteval->stack[((hsi*150+975)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+8925)*1+lsi)*1]), &(inteval->stack[((hsi*150+2925)*1+lsi)*1]), &(inteval->stack[((hsi*150+3075)*1+lsi)*1]), &(inteval->stack[((hsi*150+3225)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+9075)*1+lsi)*1]), &(inteval->stack[((hsi*225+2250)*1+lsi)*1]), &(inteval->stack[((hsi*225+2475)*1+lsi)*1]), &(inteval->stack[((hsi*225+2700)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+7125)*1+lsi)*1]), &(inteval->stack[((hsi*225+9075)*1+lsi)*1]), &(inteval->stack[((hsi*150+8925)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+9300)*1+lsi)*1]), &(inteval->stack[((hsi*150+1800)*1+lsi)*1]), &(inteval->stack[((hsi*150+1950)*1+lsi)*1]), &(inteval->stack[((hsi*150+2100)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+9450)*1+lsi)*1]), &(inteval->stack[((hsi*225+1125)*1+lsi)*1]), &(inteval->stack[((hsi*225+1350)*1+lsi)*1]), &(inteval->stack[((hsi*225+1575)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+6675)*1+lsi)*1]), &(inteval->stack[((hsi*225+9450)*1+lsi)*1]), &(inteval->stack[((hsi*150+9300)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+9675)*1+lsi)*1]), &(inteval->stack[((hsi*150+675)*1+lsi)*1]), &(inteval->stack[((hsi*150+825)*1+lsi)*1]), &(inteval->stack[((hsi*150+975)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+9825)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+225)*1+lsi)*1]), &(inteval->stack[((hsi*225+450)*1+lsi)*1]));
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*450+6225)*1+lsi)*1]), &(inteval->stack[((hsi*225+9825)*1+lsi)*1]), &(inteval->stack[((hsi*150+9675)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*450+3525)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*450+3975)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*450+4425)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*450+4875)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*450+5325)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*450+5775)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*450+6225)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*450+6675)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*450+7125)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*450+7575)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*450+8025)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*450+8475)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
