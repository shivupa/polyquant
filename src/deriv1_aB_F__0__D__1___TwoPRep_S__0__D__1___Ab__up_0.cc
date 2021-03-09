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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2950)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+7270)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*180+7450)*1+lsi)*1]), &(inteval->stack[((hsi*100+2790)*1+lsi)*1]), &(inteval->stack[((hsi*60+2890)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+7630)*1+lsi)*1]), &(inteval->stack[((hsi*150+2640)*1+lsi)*1]), &(inteval->stack[((hsi*100+2790)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*360+6910)*1+lsi)*1]), &(inteval->stack[((hsi*300+7630)*1+lsi)*1]), &(inteval->stack[((hsi*180+7450)*1+lsi)*1]), &(inteval->stack[((hsi*180+7270)*1+lsi)*1]),10);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*180+7930)*1+lsi)*1]), &(inteval->stack[((hsi*100+2480)*1+lsi)*1]), &(inteval->stack[((hsi*60+2580)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+8110)*1+lsi)*1]), &(inteval->stack[((hsi*150+2330)*1+lsi)*1]), &(inteval->stack[((hsi*100+2480)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*360+6550)*1+lsi)*1]), &(inteval->stack[((hsi*300+8110)*1+lsi)*1]), &(inteval->stack[((hsi*180+7930)*1+lsi)*1]), &(inteval->stack[((hsi*180+7270)*1+lsi)*1]),10);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*180+8410)*1+lsi)*1]), &(inteval->stack[((hsi*100+2110)*1+lsi)*1]), &(inteval->stack[((hsi*60+2270)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+8590)*1+lsi)*1]), &(inteval->stack[((hsi*150+1960)*1+lsi)*1]), &(inteval->stack[((hsi*100+2110)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*360+6190)*1+lsi)*1]), &(inteval->stack[((hsi*300+8590)*1+lsi)*1]), &(inteval->stack[((hsi*180+8410)*1+lsi)*1]), &(inteval->stack[((hsi*180+7270)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*100+1390)*1+lsi)*1]), &(inteval->stack[((hsi*100+1700)*1+lsi)*1]), &(inteval->stack[((hsi*100+2790)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2790)*1+lsi)*1]), &(inteval->stack[((hsi*60+1490)*1+lsi)*1]), &(inteval->stack[((hsi*60+1800)*1+lsi)*1]), &(inteval->stack[((hsi*60+2890)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*180+8990)*1+lsi)*1]), &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*60+2790)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+2790)*1+lsi)*1]), &(inteval->stack[((hsi*150+1240)*1+lsi)*1]), &(inteval->stack[((hsi*150+1550)*1+lsi)*1]), &(inteval->stack[((hsi*150+2640)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+9170)*1+lsi)*1]), &(inteval->stack[((hsi*150+2790)*1+lsi)*1]), &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*360+5830)*1+lsi)*1]), &(inteval->stack[((hsi*300+9170)*1+lsi)*1]), &(inteval->stack[((hsi*180+8990)*1+lsi)*1]), &(inteval->stack[((hsi*180+7270)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*100+770)*1+lsi)*1]), &(inteval->stack[((hsi*100+1080)*1+lsi)*1]), &(inteval->stack[((hsi*100+2480)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2640)*1+lsi)*1]), &(inteval->stack[((hsi*60+870)*1+lsi)*1]), &(inteval->stack[((hsi*60+1180)*1+lsi)*1]), &(inteval->stack[((hsi*60+2580)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*180+2700)*1+lsi)*1]), &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*60+2640)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+2480)*1+lsi)*1]), &(inteval->stack[((hsi*150+620)*1+lsi)*1]), &(inteval->stack[((hsi*150+930)*1+lsi)*1]), &(inteval->stack[((hsi*150+2330)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+9470)*1+lsi)*1]), &(inteval->stack[((hsi*150+2480)*1+lsi)*1]), &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*360+5470)*1+lsi)*1]), &(inteval->stack[((hsi*300+9470)*1+lsi)*1]), &(inteval->stack[((hsi*180+2700)*1+lsi)*1]), &(inteval->stack[((hsi*180+7270)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]), &(inteval->stack[((hsi*100+460)*1+lsi)*1]), &(inteval->stack[((hsi*100+2110)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2330)*1+lsi)*1]), &(inteval->stack[((hsi*60+250)*1+lsi)*1]), &(inteval->stack[((hsi*60+560)*1+lsi)*1]), &(inteval->stack[((hsi*60+2270)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*180+2390)*1+lsi)*1]), &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*60+2330)*1+lsi)*1]), &(inteval->stack[((hsi*60+2210)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+2110)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+310)*1+lsi)*1]), &(inteval->stack[((hsi*150+1960)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+9770)*1+lsi)*1]), &(inteval->stack[((hsi*150+2110)*1+lsi)*1]), &(inteval->stack[((hsi*100+8890)*1+lsi)*1]), &(inteval->stack[((hsi*100+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*360+5110)*1+lsi)*1]), &(inteval->stack[((hsi*300+9770)*1+lsi)*1]), &(inteval->stack[((hsi*180+2390)*1+lsi)*1]), &(inteval->stack[((hsi*180+7270)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1860)*1+lsi)*1]), &(inteval->stack[((hsi*100+1700)*1+lsi)*1]), &(inteval->stack[((hsi*60+1800)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2040)*1+lsi)*1]), &(inteval->stack[((hsi*150+1550)*1+lsi)*1]), &(inteval->stack[((hsi*100+1700)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+4750)*1+lsi)*1]), &(inteval->stack[((hsi*300+2040)*1+lsi)*1]), &(inteval->stack[((hsi*180+1860)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1550)*1+lsi)*1]), &(inteval->stack[((hsi*100+1390)*1+lsi)*1]), &(inteval->stack[((hsi*60+1490)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+10070)*1+lsi)*1]), &(inteval->stack[((hsi*150+1240)*1+lsi)*1]), &(inteval->stack[((hsi*100+1390)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+3670)*1+lsi)*1]), &(inteval->stack[((hsi*300+10070)*1+lsi)*1]), &(inteval->stack[((hsi*180+1550)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+1240)*1+lsi)*1]), &(inteval->stack[((hsi*100+1080)*1+lsi)*1]), &(inteval->stack[((hsi*60+1180)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+10370)*1+lsi)*1]), &(inteval->stack[((hsi*150+930)*1+lsi)*1]), &(inteval->stack[((hsi*100+1080)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+4390)*1+lsi)*1]), &(inteval->stack[((hsi*300+10370)*1+lsi)*1]), &(inteval->stack[((hsi*180+1240)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+930)*1+lsi)*1]), &(inteval->stack[((hsi*100+770)*1+lsi)*1]), &(inteval->stack[((hsi*60+870)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+10670)*1+lsi)*1]), &(inteval->stack[((hsi*150+620)*1+lsi)*1]), &(inteval->stack[((hsi*100+770)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+3310)*1+lsi)*1]), &(inteval->stack[((hsi*300+10670)*1+lsi)*1]), &(inteval->stack[((hsi*180+930)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+620)*1+lsi)*1]), &(inteval->stack[((hsi*100+460)*1+lsi)*1]), &(inteval->stack[((hsi*60+560)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+10970)*1+lsi)*1]), &(inteval->stack[((hsi*150+310)*1+lsi)*1]), &(inteval->stack[((hsi*100+460)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+4030)*1+lsi)*1]), &(inteval->stack[((hsi*300+10970)*1+lsi)*1]), &(inteval->stack[((hsi*180+620)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*180+310)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]), &(inteval->stack[((hsi*60+250)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+11270)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*100+150)*1+lsi)*1]),10);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*360+2950)*1+lsi)*1]), &(inteval->stack[((hsi*300+11270)*1+lsi)*1]), &(inteval->stack[((hsi*180+310)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+2950)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*360+3310)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*360+3670)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*360+4030)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*360+4390)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*360+4750)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*360+5110)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*360+5470)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*360+5830)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*360+6190)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*360+6550)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*360+6910)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
