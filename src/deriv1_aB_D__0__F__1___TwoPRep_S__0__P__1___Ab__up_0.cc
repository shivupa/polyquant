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
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1_aB_D__0__F__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__F__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1410)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__F__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+3390)*1+lsi)*1]), &(inteval->stack[((hsi*90+1260)*1+lsi)*1]), &(inteval->stack[((hsi*60+1350)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+3210)*1+lsi)*1]), &(inteval->stack[((hsi*90+1110)*1+lsi)*1]), &(inteval->stack[((hsi*60+1200)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+3030)*1+lsi)*1]), &(inteval->stack[((hsi*90+960)*1+lsi)*1]), &(inteval->stack[((hsi*60+1050)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3570)*1+lsi)*1]), &(inteval->stack[((hsi*60+450)*1+lsi)*1]), &(inteval->stack[((hsi*60+900)*1+lsi)*1]), &(inteval->stack[((hsi*60+1350)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3630)*1+lsi)*1]), &(inteval->stack[((hsi*90+360)*1+lsi)*1]), &(inteval->stack[((hsi*90+810)*1+lsi)*1]), &(inteval->stack[((hsi*90+1260)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+2850)*1+lsi)*1]), &(inteval->stack[((hsi*90+3630)*1+lsi)*1]), &(inteval->stack[((hsi*60+3570)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3720)*1+lsi)*1]), &(inteval->stack[((hsi*60+300)*1+lsi)*1]), &(inteval->stack[((hsi*60+750)*1+lsi)*1]), &(inteval->stack[((hsi*60+1200)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3780)*1+lsi)*1]), &(inteval->stack[((hsi*90+210)*1+lsi)*1]), &(inteval->stack[((hsi*90+660)*1+lsi)*1]), &(inteval->stack[((hsi*90+1110)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+2670)*1+lsi)*1]), &(inteval->stack[((hsi*90+3780)*1+lsi)*1]), &(inteval->stack[((hsi*60+3720)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3870)*1+lsi)*1]), &(inteval->stack[((hsi*60+150)*1+lsi)*1]), &(inteval->stack[((hsi*60+600)*1+lsi)*1]), &(inteval->stack[((hsi*60+1050)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3930)*1+lsi)*1]), &(inteval->stack[((hsi*90+60)*1+lsi)*1]), &(inteval->stack[((hsi*90+510)*1+lsi)*1]), &(inteval->stack[((hsi*90+960)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+2490)*1+lsi)*1]), &(inteval->stack[((hsi*90+3930)*1+lsi)*1]), &(inteval->stack[((hsi*60+3870)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+2310)*1+lsi)*1]), &(inteval->stack[((hsi*90+810)*1+lsi)*1]), &(inteval->stack[((hsi*60+900)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+2130)*1+lsi)*1]), &(inteval->stack[((hsi*90+660)*1+lsi)*1]), &(inteval->stack[((hsi*60+750)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1950)*1+lsi)*1]), &(inteval->stack[((hsi*90+510)*1+lsi)*1]), &(inteval->stack[((hsi*60+600)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1770)*1+lsi)*1]), &(inteval->stack[((hsi*90+360)*1+lsi)*1]), &(inteval->stack[((hsi*60+450)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1590)*1+lsi)*1]), &(inteval->stack[((hsi*90+210)*1+lsi)*1]), &(inteval->stack[((hsi*60+300)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1410)*1+lsi)*1]), &(inteval->stack[((hsi*90+60)*1+lsi)*1]), &(inteval->stack[((hsi*60+150)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*180+1410)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*180+1590)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*180+1770)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*180+1950)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*180+2130)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*180+2310)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*180+2490)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*180+2670)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*180+2850)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*180+3030)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*180+3210)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*180+3390)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
