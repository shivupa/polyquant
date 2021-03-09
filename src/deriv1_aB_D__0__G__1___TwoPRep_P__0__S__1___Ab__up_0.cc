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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <deriv1_aB_D__0__G__1___TwoPRep_P__0__S__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__G__1___TwoPRep_P__0__S__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2250)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__G__1___TwoPRep_P__0__S__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*270+3600)*1+lsi)*1]), &(inteval->stack[((hsi*150+1590)*1+lsi)*1]), &(inteval->stack[((hsi*90+1980)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]),15);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*270+3330)*1+lsi)*1]), &(inteval->stack[((hsi*150+870)*1+lsi)*1]), &(inteval->stack[((hsi*90+1260)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]),15);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*270+3060)*1+lsi)*1]), &(inteval->stack[((hsi*150+150)*1+lsi)*1]), &(inteval->stack[((hsi*90+540)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]),15);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*270+2790)*1+lsi)*1]), &(inteval->stack[((hsi*150+1440)*1+lsi)*1]), &(inteval->stack[((hsi*90+1890)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]),15);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*270+2520)*1+lsi)*1]), &(inteval->stack[((hsi*150+720)*1+lsi)*1]), &(inteval->stack[((hsi*90+1170)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]),15);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*270+2250)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+450)*1+lsi)*1]), &(inteval->stack[((hsi*90+2160)*1+lsi)*1]),15);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+5220)*1+lsi)*1]), &(inteval->stack[((hsi*150+1740)*1+lsi)*1]), &(inteval->stack[((hsi*90+2070)*1+lsi)*1]),15);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+4950)*1+lsi)*1]), &(inteval->stack[((hsi*150+1020)*1+lsi)*1]), &(inteval->stack[((hsi*90+1350)*1+lsi)*1]),15);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+4680)*1+lsi)*1]), &(inteval->stack[((hsi*150+300)*1+lsi)*1]), &(inteval->stack[((hsi*90+630)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5490)*1+lsi)*1]), &(inteval->stack[((hsi*90+1890)*1+lsi)*1]), &(inteval->stack[((hsi*90+1980)*1+lsi)*1]), &(inteval->stack[((hsi*90+2070)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5580)*1+lsi)*1]), &(inteval->stack[((hsi*150+1440)*1+lsi)*1]), &(inteval->stack[((hsi*150+1590)*1+lsi)*1]), &(inteval->stack[((hsi*150+1740)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+4410)*1+lsi)*1]), &(inteval->stack[((hsi*150+5580)*1+lsi)*1]), &(inteval->stack[((hsi*90+5490)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5730)*1+lsi)*1]), &(inteval->stack[((hsi*90+1170)*1+lsi)*1]), &(inteval->stack[((hsi*90+1260)*1+lsi)*1]), &(inteval->stack[((hsi*90+1350)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5820)*1+lsi)*1]), &(inteval->stack[((hsi*150+720)*1+lsi)*1]), &(inteval->stack[((hsi*150+870)*1+lsi)*1]), &(inteval->stack[((hsi*150+1020)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+5820)*1+lsi)*1]), &(inteval->stack[((hsi*90+5730)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5970)*1+lsi)*1]), &(inteval->stack[((hsi*90+450)*1+lsi)*1]), &(inteval->stack[((hsi*90+540)*1+lsi)*1]), &(inteval->stack[((hsi*90+630)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+6060)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+150)*1+lsi)*1]), &(inteval->stack[((hsi*150+300)*1+lsi)*1]));
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*270+3870)*1+lsi)*1]), &(inteval->stack[((hsi*150+6060)*1+lsi)*1]), &(inteval->stack[((hsi*90+5970)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*270+2250)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*270+2520)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*270+2790)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*270+3060)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*270+3330)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*270+3600)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*270+3870)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*270+4140)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*270+4410)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*270+4680)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*270+4950)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*270+5220)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
