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
#include <CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_F__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2020)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+5260)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*180+5440)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]), &(inteval->stack[((hsi*60+1960)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+5620)*1+lsi)*1]), &(inteval->stack[((hsi*150+1710)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]),10);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*360+4900)*1+lsi)*1]), &(inteval->stack[((hsi*300+5620)*1+lsi)*1]), &(inteval->stack[((hsi*180+5440)*1+lsi)*1]), &(inteval->stack[((hsi*180+5260)*1+lsi)*1]),10);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*180+5920)*1+lsi)*1]), &(inteval->stack[((hsi*100+1550)*1+lsi)*1]), &(inteval->stack[((hsi*60+1650)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+6100)*1+lsi)*1]), &(inteval->stack[((hsi*150+1400)*1+lsi)*1]), &(inteval->stack[((hsi*100+1550)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]),10);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*360+4540)*1+lsi)*1]), &(inteval->stack[((hsi*300+6100)*1+lsi)*1]), &(inteval->stack[((hsi*180+5920)*1+lsi)*1]), &(inteval->stack[((hsi*180+5260)*1+lsi)*1]),10);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*180+6400)*1+lsi)*1]), &(inteval->stack[((hsi*100+1180)*1+lsi)*1]), &(inteval->stack[((hsi*60+1340)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+6580)*1+lsi)*1]), &(inteval->stack[((hsi*150+1030)*1+lsi)*1]), &(inteval->stack[((hsi*100+1180)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]),10);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*360+4180)*1+lsi)*1]), &(inteval->stack[((hsi*300+6580)*1+lsi)*1]), &(inteval->stack[((hsi*180+6400)*1+lsi)*1]), &(inteval->stack[((hsi*180+5260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*100+770)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1860)*1+lsi)*1]), &(inteval->stack[((hsi*60+870)*1+lsi)*1]), &(inteval->stack[((hsi*60+1960)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*180+6980)*1+lsi)*1]), &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*60+1860)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+1860)*1+lsi)*1]), &(inteval->stack[((hsi*150+620)*1+lsi)*1]), &(inteval->stack[((hsi*150+1710)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+7160)*1+lsi)*1]), &(inteval->stack[((hsi*150+1860)*1+lsi)*1]), &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]),10);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*360+3820)*1+lsi)*1]), &(inteval->stack[((hsi*300+7160)*1+lsi)*1]), &(inteval->stack[((hsi*180+6980)*1+lsi)*1]), &(inteval->stack[((hsi*180+5260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*100+460)*1+lsi)*1]), &(inteval->stack[((hsi*100+1550)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1710)*1+lsi)*1]), &(inteval->stack[((hsi*60+560)*1+lsi)*1]), &(inteval->stack[((hsi*60+1650)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*180+1770)*1+lsi)*1]), &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*60+1710)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+1550)*1+lsi)*1]), &(inteval->stack[((hsi*150+310)*1+lsi)*1]), &(inteval->stack[((hsi*150+1400)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+7460)*1+lsi)*1]), &(inteval->stack[((hsi*150+1550)*1+lsi)*1]), &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]),10);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*360+3460)*1+lsi)*1]), &(inteval->stack[((hsi*300+7460)*1+lsi)*1]), &(inteval->stack[((hsi*180+1770)*1+lsi)*1]), &(inteval->stack[((hsi*180+5260)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]), &(inteval->stack[((hsi*100+1180)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1400)*1+lsi)*1]), &(inteval->stack[((hsi*60+250)*1+lsi)*1]), &(inteval->stack[((hsi*60+1340)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*180+1460)*1+lsi)*1]), &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*60+1400)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+1180)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+1030)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+7760)*1+lsi)*1]), &(inteval->stack[((hsi*150+1180)*1+lsi)*1]), &(inteval->stack[((hsi*100+6880)*1+lsi)*1]), &(inteval->stack[((hsi*100+930)*1+lsi)*1]),10);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*360+3100)*1+lsi)*1]), &(inteval->stack[((hsi*300+7760)*1+lsi)*1]), &(inteval->stack[((hsi*180+1460)*1+lsi)*1]), &(inteval->stack[((hsi*180+5260)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+930)*1+lsi)*1]), &(inteval->stack[((hsi*100+770)*1+lsi)*1]), &(inteval->stack[((hsi*60+870)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+1110)*1+lsi)*1]), &(inteval->stack[((hsi*150+620)*1+lsi)*1]), &(inteval->stack[((hsi*100+770)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+2740)*1+lsi)*1]), &(inteval->stack[((hsi*300+1110)*1+lsi)*1]), &(inteval->stack[((hsi*180+930)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+620)*1+lsi)*1]), &(inteval->stack[((hsi*100+460)*1+lsi)*1]), &(inteval->stack[((hsi*60+560)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+8060)*1+lsi)*1]), &(inteval->stack[((hsi*150+310)*1+lsi)*1]), &(inteval->stack[((hsi*100+460)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+2380)*1+lsi)*1]), &(inteval->stack[((hsi*300+8060)*1+lsi)*1]), &(inteval->stack[((hsi*180+620)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+310)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]), &(inteval->stack[((hsi*60+250)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+8360)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+2020)*1+lsi)*1]), &(inteval->stack[((hsi*300+8360)*1+lsi)*1]), &(inteval->stack[((hsi*180+310)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+2020)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*360+2380)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*360+2740)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*360+3100)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*360+3460)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*360+3820)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*360+4180)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*360+4540)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*360+4900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
