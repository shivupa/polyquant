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
#include <CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3360)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__F__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+8400)*1+lsi)*1]), &(inteval->stack[((hsi*315+2835)*1+lsi)*1]), &(inteval->stack[((hsi*210+3150)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+7770)*1+lsi)*1]), &(inteval->stack[((hsi*315+2310)*1+lsi)*1]), &(inteval->stack[((hsi*210+2625)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+7140)*1+lsi)*1]), &(inteval->stack[((hsi*315+1785)*1+lsi)*1]), &(inteval->stack[((hsi*210+2100)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+9030)*1+lsi)*1]), &(inteval->stack[((hsi*210+1575)*1+lsi)*1]), &(inteval->stack[((hsi*210+3150)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+9240)*1+lsi)*1]), &(inteval->stack[((hsi*315+1260)*1+lsi)*1]), &(inteval->stack[((hsi*315+2835)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+6510)*1+lsi)*1]), &(inteval->stack[((hsi*315+9240)*1+lsi)*1]), &(inteval->stack[((hsi*210+9030)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+9555)*1+lsi)*1]), &(inteval->stack[((hsi*210+1050)*1+lsi)*1]), &(inteval->stack[((hsi*210+2625)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+9765)*1+lsi)*1]), &(inteval->stack[((hsi*315+735)*1+lsi)*1]), &(inteval->stack[((hsi*315+2310)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+5880)*1+lsi)*1]), &(inteval->stack[((hsi*315+9765)*1+lsi)*1]), &(inteval->stack[((hsi*210+9555)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+10080)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]), &(inteval->stack[((hsi*210+2100)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10290)*1+lsi)*1]), &(inteval->stack[((hsi*315+210)*1+lsi)*1]), &(inteval->stack[((hsi*315+1785)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+5250)*1+lsi)*1]), &(inteval->stack[((hsi*315+10290)*1+lsi)*1]), &(inteval->stack[((hsi*210+10080)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+4620)*1+lsi)*1]), &(inteval->stack[((hsi*315+1260)*1+lsi)*1]), &(inteval->stack[((hsi*210+1575)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+3990)*1+lsi)*1]), &(inteval->stack[((hsi*315+735)*1+lsi)*1]), &(inteval->stack[((hsi*210+1050)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+3360)*1+lsi)*1]), &(inteval->stack[((hsi*315+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*630+3360)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*630+3990)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*630+4620)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*630+5250)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*630+5880)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*630+6510)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*630+7140)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*630+7770)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*630+8400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
