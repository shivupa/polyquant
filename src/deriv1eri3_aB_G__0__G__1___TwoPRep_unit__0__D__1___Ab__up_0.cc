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
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6300)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+18450)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+19125)*1+lsi)*1]), &(inteval->stack[((hsi*315+5535)*1+lsi)*1]), &(inteval->stack[((hsi*225+6075)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+19800)*1+lsi)*1]), &(inteval->stack[((hsi*420+4800)*1+lsi)*1]), &(inteval->stack[((hsi*315+5535)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1350+17100)*1+lsi)*1]), &(inteval->stack[((hsi*945+19800)*1+lsi)*1]), &(inteval->stack[((hsi*675+19125)*1+lsi)*1]), &(inteval->stack[((hsi*675+18450)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+20745)*1+lsi)*1]), &(inteval->stack[((hsi*315+3615)*1+lsi)*1]), &(inteval->stack[((hsi*225+4155)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+21420)*1+lsi)*1]), &(inteval->stack[((hsi*420+2880)*1+lsi)*1]), &(inteval->stack[((hsi*315+3615)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1350+15750)*1+lsi)*1]), &(inteval->stack[((hsi*945+21420)*1+lsi)*1]), &(inteval->stack[((hsi*675+20745)*1+lsi)*1]), &(inteval->stack[((hsi*675+18450)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+22365)*1+lsi)*1]), &(inteval->stack[((hsi*315+1470)*1+lsi)*1]), &(inteval->stack[((hsi*225+2235)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+23040)*1+lsi)*1]), &(inteval->stack[((hsi*420+735)*1+lsi)*1]), &(inteval->stack[((hsi*315+1470)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1350+14400)*1+lsi)*1]), &(inteval->stack[((hsi*945+23040)*1+lsi)*1]), &(inteval->stack[((hsi*675+22365)*1+lsi)*1]), &(inteval->stack[((hsi*675+18450)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+23985)*1+lsi)*1]), &(inteval->stack[((hsi*315+5220)*1+lsi)*1]), &(inteval->stack[((hsi*225+5850)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+24660)*1+lsi)*1]), &(inteval->stack[((hsi*420+4380)*1+lsi)*1]), &(inteval->stack[((hsi*315+5220)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+9000)*1+lsi)*1]), &(inteval->stack[((hsi*945+24660)*1+lsi)*1]), &(inteval->stack[((hsi*675+23985)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+25605)*1+lsi)*1]), &(inteval->stack[((hsi*315+3300)*1+lsi)*1]), &(inteval->stack[((hsi*225+3930)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+26280)*1+lsi)*1]), &(inteval->stack[((hsi*420+2460)*1+lsi)*1]), &(inteval->stack[((hsi*315+3300)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+7650)*1+lsi)*1]), &(inteval->stack[((hsi*945+26280)*1+lsi)*1]), &(inteval->stack[((hsi*675+25605)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+27225)*1+lsi)*1]), &(inteval->stack[((hsi*315+1155)*1+lsi)*1]), &(inteval->stack[((hsi*225+2010)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+27900)*1+lsi)*1]), &(inteval->stack[((hsi*420+315)*1+lsi)*1]), &(inteval->stack[((hsi*315+1155)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+6300)*1+lsi)*1]), &(inteval->stack[((hsi*945+27900)*1+lsi)*1]), &(inteval->stack[((hsi*675+27225)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*315+5220)*1+lsi)*1]), &(inteval->stack[((hsi*315+5535)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+5220)*1+lsi)*1]), &(inteval->stack[((hsi*225+5850)*1+lsi)*1]), &(inteval->stack[((hsi*225+6075)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+5445)*1+lsi)*1]), &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*225+5220)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+29160)*1+lsi)*1]), &(inteval->stack[((hsi*420+4380)*1+lsi)*1]), &(inteval->stack[((hsi*420+4800)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+4380)*1+lsi)*1]), &(inteval->stack[((hsi*420+29160)*1+lsi)*1]), &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*1350+13050)*1+lsi)*1]), &(inteval->stack[((hsi*945+4380)*1+lsi)*1]), &(inteval->stack[((hsi*675+5445)*1+lsi)*1]), &(inteval->stack[((hsi*675+18450)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*315+3300)*1+lsi)*1]), &(inteval->stack[((hsi*315+3615)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+3300)*1+lsi)*1]), &(inteval->stack[((hsi*225+3930)*1+lsi)*1]), &(inteval->stack[((hsi*225+4155)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+3525)*1+lsi)*1]), &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*225+3300)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+29160)*1+lsi)*1]), &(inteval->stack[((hsi*420+2460)*1+lsi)*1]), &(inteval->stack[((hsi*420+2880)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+2460)*1+lsi)*1]), &(inteval->stack[((hsi*420+29160)*1+lsi)*1]), &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*1350+11700)*1+lsi)*1]), &(inteval->stack[((hsi*945+2460)*1+lsi)*1]), &(inteval->stack[((hsi*675+3525)*1+lsi)*1]), &(inteval->stack[((hsi*675+18450)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*315+1155)*1+lsi)*1]), &(inteval->stack[((hsi*315+1470)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+1155)*1+lsi)*1]), &(inteval->stack[((hsi*225+2010)*1+lsi)*1]), &(inteval->stack[((hsi*225+2235)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+29160)*1+lsi)*1]), &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*225+1155)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+1155)*1+lsi)*1]), &(inteval->stack[((hsi*420+315)*1+lsi)*1]), &(inteval->stack[((hsi*420+735)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+29835)*1+lsi)*1]), &(inteval->stack[((hsi*420+1155)*1+lsi)*1]), &(inteval->stack[((hsi*315+28845)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]),15);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*1350+10350)*1+lsi)*1]), &(inteval->stack[((hsi*945+29835)*1+lsi)*1]), &(inteval->stack[((hsi*675+29160)*1+lsi)*1]), &(inteval->stack[((hsi*675+18450)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1350+6300)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1350+7650)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1350+9000)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1350+10350)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1350+11700)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1350+13050)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1350+14400)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1350+15750)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1350+17100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
