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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4851)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+12411)*1+lsi)*1]), &(inteval->stack[((hsi*441+4095)*1+lsi)*1]), &(inteval->stack[((hsi*315+4536)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+11466)*1+lsi)*1]), &(inteval->stack[((hsi*441+3339)*1+lsi)*1]), &(inteval->stack[((hsi*315+3780)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+10521)*1+lsi)*1]), &(inteval->stack[((hsi*441+2583)*1+lsi)*1]), &(inteval->stack[((hsi*315+3024)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+13356)*1+lsi)*1]), &(inteval->stack[((hsi*315+2268)*1+lsi)*1]), &(inteval->stack[((hsi*315+4536)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+13671)*1+lsi)*1]), &(inteval->stack[((hsi*441+1827)*1+lsi)*1]), &(inteval->stack[((hsi*441+4095)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+9576)*1+lsi)*1]), &(inteval->stack[((hsi*441+13671)*1+lsi)*1]), &(inteval->stack[((hsi*315+13356)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+14112)*1+lsi)*1]), &(inteval->stack[((hsi*315+1512)*1+lsi)*1]), &(inteval->stack[((hsi*315+3780)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+14427)*1+lsi)*1]), &(inteval->stack[((hsi*441+1071)*1+lsi)*1]), &(inteval->stack[((hsi*441+3339)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+8631)*1+lsi)*1]), &(inteval->stack[((hsi*441+14427)*1+lsi)*1]), &(inteval->stack[((hsi*315+14112)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+14868)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]), &(inteval->stack[((hsi*315+3024)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+15183)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]), &(inteval->stack[((hsi*441+2583)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+7686)*1+lsi)*1]), &(inteval->stack[((hsi*441+15183)*1+lsi)*1]), &(inteval->stack[((hsi*315+14868)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+6741)*1+lsi)*1]), &(inteval->stack[((hsi*441+1827)*1+lsi)*1]), &(inteval->stack[((hsi*315+2268)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+5796)*1+lsi)*1]), &(inteval->stack[((hsi*441+1071)*1+lsi)*1]), &(inteval->stack[((hsi*315+1512)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+4851)*1+lsi)*1]), &(inteval->stack[((hsi*441+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+4851)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*945+5796)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*945+6741)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*945+7686)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*945+8631)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*945+9576)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*945+10521)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*945+11466)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*945+12411)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
