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
#include <CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__P001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__P010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__P100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0pp.h>
#include <HRRPart1bra0ket0pp001.h>
#include <HRRPart1bra0ket0pp010.h>
#include <HRRPart1bra0ket0pp100.h>
#include <HRRPart1bra0ket0p001p.h>
#include <HRRPart1bra0ket0p010p.h>
#include <HRRPart1bra0ket0p100p.h>
#include <deriv1eri3_aB_G__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,855)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__P__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0pp001(inteval, &(inteval->stack[((hsi*135+1935)*1+lsi)*1]), &(inteval->stack[((hsi*90+720)*1+lsi)*1]), &(inteval->stack[((hsi*45+810)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),15);
HRRPart1bra0ket0pp010(inteval, &(inteval->stack[((hsi*135+1800)*1+lsi)*1]), &(inteval->stack[((hsi*90+585)*1+lsi)*1]), &(inteval->stack[((hsi*45+675)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),15);
HRRPart1bra0ket0pp100(inteval, &(inteval->stack[((hsi*135+1665)*1+lsi)*1]), &(inteval->stack[((hsi*90+450)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__P001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2070)*1+lsi)*1]), &(inteval->stack[((hsi*45+405)*1+lsi)*1]), &(inteval->stack[((hsi*45+810)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2115)*1+lsi)*1]), &(inteval->stack[((hsi*90+315)*1+lsi)*1]), &(inteval->stack[((hsi*90+720)*1+lsi)*1]));
HRRPart1bra0ket0p001p(inteval, &(inteval->stack[((hsi*135+1530)*1+lsi)*1]), &(inteval->stack[((hsi*90+2115)*1+lsi)*1]), &(inteval->stack[((hsi*45+2070)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__P010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2205)*1+lsi)*1]), &(inteval->stack[((hsi*45+270)*1+lsi)*1]), &(inteval->stack[((hsi*45+675)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2250)*1+lsi)*1]), &(inteval->stack[((hsi*90+180)*1+lsi)*1]), &(inteval->stack[((hsi*90+585)*1+lsi)*1]));
HRRPart1bra0ket0p010p(inteval, &(inteval->stack[((hsi*135+1395)*1+lsi)*1]), &(inteval->stack[((hsi*90+2250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2205)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__P100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2340)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2385)*1+lsi)*1]), &(inteval->stack[((hsi*90+45)*1+lsi)*1]), &(inteval->stack[((hsi*90+450)*1+lsi)*1]));
HRRPart1bra0ket0p100p(inteval, &(inteval->stack[((hsi*135+1260)*1+lsi)*1]), &(inteval->stack[((hsi*90+2385)*1+lsi)*1]), &(inteval->stack[((hsi*45+2340)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]),15);
HRRPart1bra0ket0pp(inteval, &(inteval->stack[((hsi*135+1125)*1+lsi)*1]), &(inteval->stack[((hsi*90+315)*1+lsi)*1]), &(inteval->stack[((hsi*45+405)*1+lsi)*1]),15);
HRRPart1bra0ket0pp(inteval, &(inteval->stack[((hsi*135+990)*1+lsi)*1]), &(inteval->stack[((hsi*90+180)*1+lsi)*1]), &(inteval->stack[((hsi*45+270)*1+lsi)*1]),15);
HRRPart1bra0ket0pp(inteval, &(inteval->stack[((hsi*135+855)*1+lsi)*1]), &(inteval->stack[((hsi*90+45)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*135+855)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*135+990)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*135+1125)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*135+1260)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*135+1395)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*135+1530)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*135+1665)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*135+1800)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*135+1935)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
