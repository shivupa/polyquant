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
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3465)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+8865)*1+lsi)*1]), &(inteval->stack[((hsi*315+2925)*1+lsi)*1]), &(inteval->stack[((hsi*225+3240)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+8190)*1+lsi)*1]), &(inteval->stack[((hsi*315+2385)*1+lsi)*1]), &(inteval->stack[((hsi*225+2700)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+7515)*1+lsi)*1]), &(inteval->stack[((hsi*315+1845)*1+lsi)*1]), &(inteval->stack[((hsi*225+2160)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+9540)*1+lsi)*1]), &(inteval->stack[((hsi*225+1620)*1+lsi)*1]), &(inteval->stack[((hsi*225+3240)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+9765)*1+lsi)*1]), &(inteval->stack[((hsi*315+1305)*1+lsi)*1]), &(inteval->stack[((hsi*315+2925)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+6840)*1+lsi)*1]), &(inteval->stack[((hsi*315+9765)*1+lsi)*1]), &(inteval->stack[((hsi*225+9540)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+10080)*1+lsi)*1]), &(inteval->stack[((hsi*225+1080)*1+lsi)*1]), &(inteval->stack[((hsi*225+2700)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10305)*1+lsi)*1]), &(inteval->stack[((hsi*315+765)*1+lsi)*1]), &(inteval->stack[((hsi*315+2385)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+6165)*1+lsi)*1]), &(inteval->stack[((hsi*315+10305)*1+lsi)*1]), &(inteval->stack[((hsi*225+10080)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+10620)*1+lsi)*1]), &(inteval->stack[((hsi*225+540)*1+lsi)*1]), &(inteval->stack[((hsi*225+2160)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10845)*1+lsi)*1]), &(inteval->stack[((hsi*315+225)*1+lsi)*1]), &(inteval->stack[((hsi*315+1845)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+5490)*1+lsi)*1]), &(inteval->stack[((hsi*315+10845)*1+lsi)*1]), &(inteval->stack[((hsi*225+10620)*1+lsi)*1]), &(inteval->stack[((hsi*225+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+4815)*1+lsi)*1]), &(inteval->stack[((hsi*315+1305)*1+lsi)*1]), &(inteval->stack[((hsi*225+1620)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+4140)*1+lsi)*1]), &(inteval->stack[((hsi*315+765)*1+lsi)*1]), &(inteval->stack[((hsi*225+1080)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+3465)*1+lsi)*1]), &(inteval->stack[((hsi*315+225)*1+lsi)*1]), &(inteval->stack[((hsi*225+540)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*675+3465)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*675+4140)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*675+4815)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*675+5490)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*675+6165)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*675+6840)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*675+7515)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*675+8190)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*675+8865)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
