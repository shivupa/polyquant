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
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6468)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+16548)*1+lsi)*1]), &(inteval->stack[((hsi*588+5460)*1+lsi)*1]), &(inteval->stack[((hsi*420+6048)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+15288)*1+lsi)*1]), &(inteval->stack[((hsi*588+4452)*1+lsi)*1]), &(inteval->stack[((hsi*420+5040)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+14028)*1+lsi)*1]), &(inteval->stack[((hsi*588+3444)*1+lsi)*1]), &(inteval->stack[((hsi*420+4032)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+17808)*1+lsi)*1]), &(inteval->stack[((hsi*420+3024)*1+lsi)*1]), &(inteval->stack[((hsi*420+6048)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+18228)*1+lsi)*1]), &(inteval->stack[((hsi*588+2436)*1+lsi)*1]), &(inteval->stack[((hsi*588+5460)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+12768)*1+lsi)*1]), &(inteval->stack[((hsi*588+18228)*1+lsi)*1]), &(inteval->stack[((hsi*420+17808)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+18816)*1+lsi)*1]), &(inteval->stack[((hsi*420+2016)*1+lsi)*1]), &(inteval->stack[((hsi*420+5040)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+19236)*1+lsi)*1]), &(inteval->stack[((hsi*588+1428)*1+lsi)*1]), &(inteval->stack[((hsi*588+4452)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+11508)*1+lsi)*1]), &(inteval->stack[((hsi*588+19236)*1+lsi)*1]), &(inteval->stack[((hsi*420+18816)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+19824)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]), &(inteval->stack[((hsi*420+4032)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+20244)*1+lsi)*1]), &(inteval->stack[((hsi*588+420)*1+lsi)*1]), &(inteval->stack[((hsi*588+3444)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+10248)*1+lsi)*1]), &(inteval->stack[((hsi*588+20244)*1+lsi)*1]), &(inteval->stack[((hsi*420+19824)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+8988)*1+lsi)*1]), &(inteval->stack[((hsi*588+2436)*1+lsi)*1]), &(inteval->stack[((hsi*420+3024)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+7728)*1+lsi)*1]), &(inteval->stack[((hsi*588+1428)*1+lsi)*1]), &(inteval->stack[((hsi*420+2016)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+6468)*1+lsi)*1]), &(inteval->stack[((hsi*588+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+1008)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1260+6468)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1260+7728)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1260+8988)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1260+10248)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1260+11508)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1260+12768)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1260+14028)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1260+15288)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1260+16548)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
