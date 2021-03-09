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
#include <CR_DerivGaussP1InBra_aB_H__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__P001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__P010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__P100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0pp.h>
#include <HRRPart1bra0ket0pp001.h>
#include <HRRPart1bra0ket0pp010.h>
#include <HRRPart1bra0ket0pp100.h>
#include <HRRPart1bra0ket0p001p.h>
#include <HRRPart1bra0ket0p010p.h>
#include <HRRPart1bra0ket0p100p.h>
#include <deriv1eri3_aB_H__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1197)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0pp001(inteval, &(inteval->stack[((hsi*189+2709)*1+lsi)*1]), &(inteval->stack[((hsi*126+1008)*1+lsi)*1]), &(inteval->stack[((hsi*63+1134)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),21);
HRRPart1bra0ket0pp010(inteval, &(inteval->stack[((hsi*189+2520)*1+lsi)*1]), &(inteval->stack[((hsi*126+819)*1+lsi)*1]), &(inteval->stack[((hsi*63+945)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),21);
HRRPart1bra0ket0pp100(inteval, &(inteval->stack[((hsi*189+2331)*1+lsi)*1]), &(inteval->stack[((hsi*126+630)*1+lsi)*1]), &(inteval->stack[((hsi*63+756)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__P001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2898)*1+lsi)*1]), &(inteval->stack[((hsi*63+567)*1+lsi)*1]), &(inteval->stack[((hsi*63+1134)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2961)*1+lsi)*1]), &(inteval->stack[((hsi*126+441)*1+lsi)*1]), &(inteval->stack[((hsi*126+1008)*1+lsi)*1]));
HRRPart1bra0ket0p001p(inteval, &(inteval->stack[((hsi*189+2142)*1+lsi)*1]), &(inteval->stack[((hsi*126+2961)*1+lsi)*1]), &(inteval->stack[((hsi*63+2898)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__P010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+3087)*1+lsi)*1]), &(inteval->stack[((hsi*63+378)*1+lsi)*1]), &(inteval->stack[((hsi*63+945)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3150)*1+lsi)*1]), &(inteval->stack[((hsi*126+252)*1+lsi)*1]), &(inteval->stack[((hsi*126+819)*1+lsi)*1]));
HRRPart1bra0ket0p010p(inteval, &(inteval->stack[((hsi*189+1953)*1+lsi)*1]), &(inteval->stack[((hsi*126+3150)*1+lsi)*1]), &(inteval->stack[((hsi*63+3087)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__P100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+3276)*1+lsi)*1]), &(inteval->stack[((hsi*63+189)*1+lsi)*1]), &(inteval->stack[((hsi*63+756)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3339)*1+lsi)*1]), &(inteval->stack[((hsi*126+63)*1+lsi)*1]), &(inteval->stack[((hsi*126+630)*1+lsi)*1]));
HRRPart1bra0ket0p100p(inteval, &(inteval->stack[((hsi*189+1764)*1+lsi)*1]), &(inteval->stack[((hsi*126+3339)*1+lsi)*1]), &(inteval->stack[((hsi*63+3276)*1+lsi)*1]), &(inteval->stack[((hsi*63+0)*1+lsi)*1]),21);
HRRPart1bra0ket0pp(inteval, &(inteval->stack[((hsi*189+1575)*1+lsi)*1]), &(inteval->stack[((hsi*126+441)*1+lsi)*1]), &(inteval->stack[((hsi*63+567)*1+lsi)*1]),21);
HRRPart1bra0ket0pp(inteval, &(inteval->stack[((hsi*189+1386)*1+lsi)*1]), &(inteval->stack[((hsi*126+252)*1+lsi)*1]), &(inteval->stack[((hsi*63+378)*1+lsi)*1]),21);
HRRPart1bra0ket0pp(inteval, &(inteval->stack[((hsi*189+1197)*1+lsi)*1]), &(inteval->stack[((hsi*126+63)*1+lsi)*1]), &(inteval->stack[((hsi*63+189)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*189+1197)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*189+1386)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*189+1575)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*189+1764)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*189+1953)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*189+2142)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*189+2331)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*189+2520)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*189+2709)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
