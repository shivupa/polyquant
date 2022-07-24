/*
 *  Copyright (C) 2004-2021 Edward F. Valeev
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
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8820)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+22932)*1+lsi)*1]), &(inteval->stack[((hsi*784+7448)*1+lsi)*1]), &(inteval->stack[((hsi*588+8232)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+21168)*1+lsi)*1]), &(inteval->stack[((hsi*784+6076)*1+lsi)*1]), &(inteval->stack[((hsi*588+6860)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+19404)*1+lsi)*1]), &(inteval->stack[((hsi*784+4704)*1+lsi)*1]), &(inteval->stack[((hsi*588+5488)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+24696)*1+lsi)*1]), &(inteval->stack[((hsi*588+4116)*1+lsi)*1]), &(inteval->stack[((hsi*588+8232)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+25284)*1+lsi)*1]), &(inteval->stack[((hsi*784+3332)*1+lsi)*1]), &(inteval->stack[((hsi*784+7448)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*1764+17640)*1+lsi)*1]), &(inteval->stack[((hsi*784+25284)*1+lsi)*1]), &(inteval->stack[((hsi*588+24696)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+26068)*1+lsi)*1]), &(inteval->stack[((hsi*588+2744)*1+lsi)*1]), &(inteval->stack[((hsi*588+6860)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+26656)*1+lsi)*1]), &(inteval->stack[((hsi*784+1960)*1+lsi)*1]), &(inteval->stack[((hsi*784+6076)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*1764+15876)*1+lsi)*1]), &(inteval->stack[((hsi*784+26656)*1+lsi)*1]), &(inteval->stack[((hsi*588+26068)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+27440)*1+lsi)*1]), &(inteval->stack[((hsi*588+1372)*1+lsi)*1]), &(inteval->stack[((hsi*588+5488)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*784+28028)*1+lsi)*1]), &(inteval->stack[((hsi*784+588)*1+lsi)*1]), &(inteval->stack[((hsi*784+4704)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*1764+14112)*1+lsi)*1]), &(inteval->stack[((hsi*784+28028)*1+lsi)*1]), &(inteval->stack[((hsi*588+27440)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+12348)*1+lsi)*1]), &(inteval->stack[((hsi*784+3332)*1+lsi)*1]), &(inteval->stack[((hsi*588+4116)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+10584)*1+lsi)*1]), &(inteval->stack[((hsi*784+1960)*1+lsi)*1]), &(inteval->stack[((hsi*588+2744)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+8820)*1+lsi)*1]), &(inteval->stack[((hsi*784+588)*1+lsi)*1]), &(inteval->stack[((hsi*588+1372)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1764+8820)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1764+10584)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1764+12348)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1764+14112)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1764+15876)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1764+17640)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1764+19404)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1764+21168)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1764+22932)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
