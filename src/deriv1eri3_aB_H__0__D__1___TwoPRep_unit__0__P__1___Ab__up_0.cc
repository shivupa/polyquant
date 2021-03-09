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
#include <CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0dp001.h>
#include <HRRPart1bra0ket0dp010.h>
#include <HRRPart1bra0ket0dp100.h>
#include <HRRPart1bra0ket0d001p.h>
#include <HRRPart1bra0ket0d010p.h>
#include <HRRPart1bra0ket0d100p.h>
#include <deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2142)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*378+5166)*1+lsi)*1]), &(inteval->stack[((hsi*210+1806)*1+lsi)*1]), &(inteval->stack[((hsi*126+2016)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),21);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*378+4788)*1+lsi)*1]), &(inteval->stack[((hsi*210+1470)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),21);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*378+4410)*1+lsi)*1]), &(inteval->stack[((hsi*210+1134)*1+lsi)*1]), &(inteval->stack[((hsi*126+1344)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5544)*1+lsi)*1]), &(inteval->stack[((hsi*126+1008)*1+lsi)*1]), &(inteval->stack[((hsi*126+2016)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+5670)*1+lsi)*1]), &(inteval->stack[((hsi*210+798)*1+lsi)*1]), &(inteval->stack[((hsi*210+1806)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*378+4032)*1+lsi)*1]), &(inteval->stack[((hsi*210+5670)*1+lsi)*1]), &(inteval->stack[((hsi*126+5544)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5880)*1+lsi)*1]), &(inteval->stack[((hsi*126+672)*1+lsi)*1]), &(inteval->stack[((hsi*126+1680)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+6006)*1+lsi)*1]), &(inteval->stack[((hsi*210+462)*1+lsi)*1]), &(inteval->stack[((hsi*210+1470)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*378+3654)*1+lsi)*1]), &(inteval->stack[((hsi*210+6006)*1+lsi)*1]), &(inteval->stack[((hsi*126+5880)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+6216)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]), &(inteval->stack[((hsi*126+1344)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+6342)*1+lsi)*1]), &(inteval->stack[((hsi*210+126)*1+lsi)*1]), &(inteval->stack[((hsi*210+1134)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*378+3276)*1+lsi)*1]), &(inteval->stack[((hsi*210+6342)*1+lsi)*1]), &(inteval->stack[((hsi*126+6216)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]),21);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+2898)*1+lsi)*1]), &(inteval->stack[((hsi*210+798)*1+lsi)*1]), &(inteval->stack[((hsi*126+1008)*1+lsi)*1]),21);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+2520)*1+lsi)*1]), &(inteval->stack[((hsi*210+462)*1+lsi)*1]), &(inteval->stack[((hsi*126+672)*1+lsi)*1]),21);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+2142)*1+lsi)*1]), &(inteval->stack[((hsi*210+126)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*378+2142)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*378+2520)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*378+2898)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*378+3276)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*378+3654)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*378+4032)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*378+4410)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*378+4788)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*378+5166)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
