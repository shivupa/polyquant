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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4242)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+11046)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*378+11424)*1+lsi)*1]), &(inteval->stack[((hsi*210+3906)*1+lsi)*1]), &(inteval->stack[((hsi*126+4116)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+11802)*1+lsi)*1]), &(inteval->stack[((hsi*315+3591)*1+lsi)*1]), &(inteval->stack[((hsi*210+3906)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*756+10290)*1+lsi)*1]), &(inteval->stack[((hsi*630+11802)*1+lsi)*1]), &(inteval->stack[((hsi*378+11424)*1+lsi)*1]), &(inteval->stack[((hsi*378+11046)*1+lsi)*1]),21);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*378+12432)*1+lsi)*1]), &(inteval->stack[((hsi*210+3255)*1+lsi)*1]), &(inteval->stack[((hsi*126+3465)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+12810)*1+lsi)*1]), &(inteval->stack[((hsi*315+2940)*1+lsi)*1]), &(inteval->stack[((hsi*210+3255)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*756+9534)*1+lsi)*1]), &(inteval->stack[((hsi*630+12810)*1+lsi)*1]), &(inteval->stack[((hsi*378+12432)*1+lsi)*1]), &(inteval->stack[((hsi*378+11046)*1+lsi)*1]),21);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*378+13440)*1+lsi)*1]), &(inteval->stack[((hsi*210+2478)*1+lsi)*1]), &(inteval->stack[((hsi*126+2814)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+13818)*1+lsi)*1]), &(inteval->stack[((hsi*315+2163)*1+lsi)*1]), &(inteval->stack[((hsi*210+2478)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*756+8778)*1+lsi)*1]), &(inteval->stack[((hsi*630+13818)*1+lsi)*1]), &(inteval->stack[((hsi*378+13440)*1+lsi)*1]), &(inteval->stack[((hsi*378+11046)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*210+1617)*1+lsi)*1]), &(inteval->stack[((hsi*210+3906)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3906)*1+lsi)*1]), &(inteval->stack[((hsi*126+1827)*1+lsi)*1]), &(inteval->stack[((hsi*126+4116)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*378+14658)*1+lsi)*1]), &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*126+3906)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+3906)*1+lsi)*1]), &(inteval->stack[((hsi*315+1302)*1+lsi)*1]), &(inteval->stack[((hsi*315+3591)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+15036)*1+lsi)*1]), &(inteval->stack[((hsi*315+3906)*1+lsi)*1]), &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*756+8022)*1+lsi)*1]), &(inteval->stack[((hsi*630+15036)*1+lsi)*1]), &(inteval->stack[((hsi*378+14658)*1+lsi)*1]), &(inteval->stack[((hsi*378+11046)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*210+966)*1+lsi)*1]), &(inteval->stack[((hsi*210+3255)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+3591)*1+lsi)*1]), &(inteval->stack[((hsi*126+1176)*1+lsi)*1]), &(inteval->stack[((hsi*126+3465)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*378+3717)*1+lsi)*1]), &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*126+3591)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+3255)*1+lsi)*1]), &(inteval->stack[((hsi*315+651)*1+lsi)*1]), &(inteval->stack[((hsi*315+2940)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+15666)*1+lsi)*1]), &(inteval->stack[((hsi*315+3255)*1+lsi)*1]), &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*756+7266)*1+lsi)*1]), &(inteval->stack[((hsi*630+15666)*1+lsi)*1]), &(inteval->stack[((hsi*378+3717)*1+lsi)*1]), &(inteval->stack[((hsi*378+11046)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*210+2478)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2940)*1+lsi)*1]), &(inteval->stack[((hsi*126+525)*1+lsi)*1]), &(inteval->stack[((hsi*126+2814)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*378+3066)*1+lsi)*1]), &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*126+2940)*1+lsi)*1]), &(inteval->stack[((hsi*126+2688)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+2478)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+2163)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+16296)*1+lsi)*1]), &(inteval->stack[((hsi*315+2478)*1+lsi)*1]), &(inteval->stack[((hsi*210+14448)*1+lsi)*1]), &(inteval->stack[((hsi*210+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*756+6510)*1+lsi)*1]), &(inteval->stack[((hsi*630+16296)*1+lsi)*1]), &(inteval->stack[((hsi*378+3066)*1+lsi)*1]), &(inteval->stack[((hsi*378+11046)*1+lsi)*1]),21);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+1953)*1+lsi)*1]), &(inteval->stack[((hsi*210+1617)*1+lsi)*1]), &(inteval->stack[((hsi*126+1827)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+2331)*1+lsi)*1]), &(inteval->stack[((hsi*315+1302)*1+lsi)*1]), &(inteval->stack[((hsi*210+1617)*1+lsi)*1]),21);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*756+5754)*1+lsi)*1]), &(inteval->stack[((hsi*630+2331)*1+lsi)*1]), &(inteval->stack[((hsi*378+1953)*1+lsi)*1]),21);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+1302)*1+lsi)*1]), &(inteval->stack[((hsi*210+966)*1+lsi)*1]), &(inteval->stack[((hsi*126+1176)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+16926)*1+lsi)*1]), &(inteval->stack[((hsi*315+651)*1+lsi)*1]), &(inteval->stack[((hsi*210+966)*1+lsi)*1]),21);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*756+4998)*1+lsi)*1]), &(inteval->stack[((hsi*630+16926)*1+lsi)*1]), &(inteval->stack[((hsi*378+1302)*1+lsi)*1]),21);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*378+651)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*126+525)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+17556)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]),21);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*756+4242)*1+lsi)*1]), &(inteval->stack[((hsi*630+17556)*1+lsi)*1]), &(inteval->stack[((hsi*378+651)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+4242)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+4998)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+5754)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+6510)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+7266)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+8022)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*756+8778)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*756+9534)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*756+10290)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
