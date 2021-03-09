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
#include <CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0dp001.h>
#include <HRRPart1bra0ket0dp010.h>
#include <HRRPart1bra0ket0dp100.h>
#include <HRRPart1bra0ket0d001p.h>
#include <HRRPart1bra0ket0d010p.h>
#include <HRRPart1bra0ket0d100p.h>
#include <deriv1_aB_F__0__D__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__D__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__D__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*180+3480)*1+lsi)*1]), &(inteval->stack[((hsi*100+1340)*1+lsi)*1]), &(inteval->stack[((hsi*60+1440)*1+lsi)*1]), &(inteval->stack[((hsi*60+960)*1+lsi)*1]),10);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*180+3300)*1+lsi)*1]), &(inteval->stack[((hsi*100+1180)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]), &(inteval->stack[((hsi*60+960)*1+lsi)*1]),10);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*180+3120)*1+lsi)*1]), &(inteval->stack[((hsi*100+1020)*1+lsi)*1]), &(inteval->stack[((hsi*60+1120)*1+lsi)*1]), &(inteval->stack[((hsi*60+960)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3660)*1+lsi)*1]), &(inteval->stack[((hsi*60+740)*1+lsi)*1]), &(inteval->stack[((hsi*60+900)*1+lsi)*1]), &(inteval->stack[((hsi*60+1440)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+3720)*1+lsi)*1]), &(inteval->stack[((hsi*100+640)*1+lsi)*1]), &(inteval->stack[((hsi*100+800)*1+lsi)*1]), &(inteval->stack[((hsi*100+1340)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*180+2940)*1+lsi)*1]), &(inteval->stack[((hsi*100+3720)*1+lsi)*1]), &(inteval->stack[((hsi*60+3660)*1+lsi)*1]), &(inteval->stack[((hsi*60+960)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3820)*1+lsi)*1]), &(inteval->stack[((hsi*60+420)*1+lsi)*1]), &(inteval->stack[((hsi*60+580)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+3880)*1+lsi)*1]), &(inteval->stack[((hsi*100+320)*1+lsi)*1]), &(inteval->stack[((hsi*100+480)*1+lsi)*1]), &(inteval->stack[((hsi*100+1180)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*180+2760)*1+lsi)*1]), &(inteval->stack[((hsi*100+3880)*1+lsi)*1]), &(inteval->stack[((hsi*60+3820)*1+lsi)*1]), &(inteval->stack[((hsi*60+960)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3980)*1+lsi)*1]), &(inteval->stack[((hsi*60+100)*1+lsi)*1]), &(inteval->stack[((hsi*60+260)*1+lsi)*1]), &(inteval->stack[((hsi*60+1120)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+4040)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]), &(inteval->stack[((hsi*100+160)*1+lsi)*1]), &(inteval->stack[((hsi*100+1020)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*180+2580)*1+lsi)*1]), &(inteval->stack[((hsi*100+4040)*1+lsi)*1]), &(inteval->stack[((hsi*60+3980)*1+lsi)*1]), &(inteval->stack[((hsi*60+960)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+2400)*1+lsi)*1]), &(inteval->stack[((hsi*100+800)*1+lsi)*1]), &(inteval->stack[((hsi*60+900)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1860)*1+lsi)*1]), &(inteval->stack[((hsi*100+640)*1+lsi)*1]), &(inteval->stack[((hsi*60+740)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+2220)*1+lsi)*1]), &(inteval->stack[((hsi*100+480)*1+lsi)*1]), &(inteval->stack[((hsi*60+580)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1680)*1+lsi)*1]), &(inteval->stack[((hsi*100+320)*1+lsi)*1]), &(inteval->stack[((hsi*60+420)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+2040)*1+lsi)*1]), &(inteval->stack[((hsi*100+160)*1+lsi)*1]), &(inteval->stack[((hsi*60+260)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1500)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]), &(inteval->stack[((hsi*60+100)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*180+1500)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*180+1680)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*180+1860)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*180+2040)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*180+2220)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*180+2400)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*180+2580)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*180+2760)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*180+2940)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*180+3120)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*180+3300)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*180+3480)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
