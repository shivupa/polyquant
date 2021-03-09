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
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1_aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3850)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+10330)*1+lsi)*1]), &(inteval->stack[((hsi*90+3700)*1+lsi)*1]), &(inteval->stack[((hsi*60+3790)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),6);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+10510)*1+lsi)*1]), &(inteval->stack[((hsi*150+3450)*1+lsi)*1]), &(inteval->stack[((hsi*100+3600)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*540+9790)*1+lsi)*1]), &(inteval->stack[((hsi*300+10510)*1+lsi)*1]), &(inteval->stack[((hsi*180+10330)*1+lsi)*1]),30);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+10810)*1+lsi)*1]), &(inteval->stack[((hsi*90+3300)*1+lsi)*1]), &(inteval->stack[((hsi*60+3390)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+10990)*1+lsi)*1]), &(inteval->stack[((hsi*150+3050)*1+lsi)*1]), &(inteval->stack[((hsi*100+3200)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*540+9250)*1+lsi)*1]), &(inteval->stack[((hsi*300+10990)*1+lsi)*1]), &(inteval->stack[((hsi*180+10810)*1+lsi)*1]),30);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+11290)*1+lsi)*1]), &(inteval->stack[((hsi*90+2900)*1+lsi)*1]), &(inteval->stack[((hsi*60+2990)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+11470)*1+lsi)*1]), &(inteval->stack[((hsi*150+2650)*1+lsi)*1]), &(inteval->stack[((hsi*100+2800)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*540+8710)*1+lsi)*1]), &(inteval->stack[((hsi*300+11470)*1+lsi)*1]), &(inteval->stack[((hsi*180+11290)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+11770)*1+lsi)*1]), &(inteval->stack[((hsi*60+1290)*1+lsi)*1]), &(inteval->stack[((hsi*60+2490)*1+lsi)*1]), &(inteval->stack[((hsi*60+3790)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+11830)*1+lsi)*1]), &(inteval->stack[((hsi*90+1100)*1+lsi)*1]), &(inteval->stack[((hsi*90+2300)*1+lsi)*1]), &(inteval->stack[((hsi*90+3700)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+11920)*1+lsi)*1]), &(inteval->stack[((hsi*90+11830)*1+lsi)*1]), &(inteval->stack[((hsi*60+11770)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+3700)*1+lsi)*1]), &(inteval->stack[((hsi*100+1190)*1+lsi)*1]), &(inteval->stack[((hsi*100+2390)*1+lsi)*1]), &(inteval->stack[((hsi*100+3600)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*150+950)*1+lsi)*1]), &(inteval->stack[((hsi*150+2150)*1+lsi)*1]), &(inteval->stack[((hsi*150+3450)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+12100)*1+lsi)*1]), &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*100+3700)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*540+8170)*1+lsi)*1]), &(inteval->stack[((hsi*300+12100)*1+lsi)*1]), &(inteval->stack[((hsi*180+11920)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3450)*1+lsi)*1]), &(inteval->stack[((hsi*60+890)*1+lsi)*1]), &(inteval->stack[((hsi*60+2090)*1+lsi)*1]), &(inteval->stack[((hsi*60+3390)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3510)*1+lsi)*1]), &(inteval->stack[((hsi*90+700)*1+lsi)*1]), &(inteval->stack[((hsi*90+1900)*1+lsi)*1]), &(inteval->stack[((hsi*90+3300)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+3600)*1+lsi)*1]), &(inteval->stack[((hsi*90+3510)*1+lsi)*1]), &(inteval->stack[((hsi*60+3450)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+3300)*1+lsi)*1]), &(inteval->stack[((hsi*100+790)*1+lsi)*1]), &(inteval->stack[((hsi*100+1990)*1+lsi)*1]), &(inteval->stack[((hsi*100+3200)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*150+550)*1+lsi)*1]), &(inteval->stack[((hsi*150+1750)*1+lsi)*1]), &(inteval->stack[((hsi*150+3050)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+12400)*1+lsi)*1]), &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*100+3300)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*540+7630)*1+lsi)*1]), &(inteval->stack[((hsi*300+12400)*1+lsi)*1]), &(inteval->stack[((hsi*180+3600)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3050)*1+lsi)*1]), &(inteval->stack[((hsi*60+430)*1+lsi)*1]), &(inteval->stack[((hsi*60+1690)*1+lsi)*1]), &(inteval->stack[((hsi*60+2990)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+3110)*1+lsi)*1]), &(inteval->stack[((hsi*90+150)*1+lsi)*1]), &(inteval->stack[((hsi*90+1500)*1+lsi)*1]), &(inteval->stack[((hsi*90+2900)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+3200)*1+lsi)*1]), &(inteval->stack[((hsi*90+3110)*1+lsi)*1]), &(inteval->stack[((hsi*60+3050)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+2900)*1+lsi)*1]), &(inteval->stack[((hsi*100+330)*1+lsi)*1]), &(inteval->stack[((hsi*100+1590)*1+lsi)*1]), &(inteval->stack[((hsi*100+2800)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+1350)*1+lsi)*1]), &(inteval->stack[((hsi*150+2650)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+12700)*1+lsi)*1]), &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*100+2900)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*540+7090)*1+lsi)*1]), &(inteval->stack[((hsi*300+12700)*1+lsi)*1]), &(inteval->stack[((hsi*180+3200)*1+lsi)*1]),30);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*180+2550)*1+lsi)*1]), &(inteval->stack[((hsi*100+2390)*1+lsi)*1]), &(inteval->stack[((hsi*60+2490)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),10);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*270+2730)*1+lsi)*1]), &(inteval->stack[((hsi*150+2150)*1+lsi)*1]), &(inteval->stack[((hsi*90+2300)*1+lsi)*1]), &(inteval->stack[((hsi*90+240)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*540+6550)*1+lsi)*1]), &(inteval->stack[((hsi*270+2730)*1+lsi)*1]), &(inteval->stack[((hsi*180+2550)*1+lsi)*1]),18);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*180+2150)*1+lsi)*1]), &(inteval->stack[((hsi*100+1990)*1+lsi)*1]), &(inteval->stack[((hsi*60+2090)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),10);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*270+13000)*1+lsi)*1]), &(inteval->stack[((hsi*150+1750)*1+lsi)*1]), &(inteval->stack[((hsi*90+1900)*1+lsi)*1]), &(inteval->stack[((hsi*90+240)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*540+6010)*1+lsi)*1]), &(inteval->stack[((hsi*270+13000)*1+lsi)*1]), &(inteval->stack[((hsi*180+2150)*1+lsi)*1]),18);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*180+1750)*1+lsi)*1]), &(inteval->stack[((hsi*100+1590)*1+lsi)*1]), &(inteval->stack[((hsi*60+1690)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),10);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*270+13270)*1+lsi)*1]), &(inteval->stack[((hsi*150+1350)*1+lsi)*1]), &(inteval->stack[((hsi*90+1500)*1+lsi)*1]), &(inteval->stack[((hsi*90+240)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*540+5470)*1+lsi)*1]), &(inteval->stack[((hsi*270+13270)*1+lsi)*1]), &(inteval->stack[((hsi*180+1750)*1+lsi)*1]),18);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*180+1350)*1+lsi)*1]), &(inteval->stack[((hsi*100+1190)*1+lsi)*1]), &(inteval->stack[((hsi*60+1290)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),10);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*270+13540)*1+lsi)*1]), &(inteval->stack[((hsi*150+950)*1+lsi)*1]), &(inteval->stack[((hsi*90+1100)*1+lsi)*1]), &(inteval->stack[((hsi*90+240)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*540+4930)*1+lsi)*1]), &(inteval->stack[((hsi*270+13540)*1+lsi)*1]), &(inteval->stack[((hsi*180+1350)*1+lsi)*1]),18);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*180+950)*1+lsi)*1]), &(inteval->stack[((hsi*100+790)*1+lsi)*1]), &(inteval->stack[((hsi*60+890)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),10);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*270+13810)*1+lsi)*1]), &(inteval->stack[((hsi*150+550)*1+lsi)*1]), &(inteval->stack[((hsi*90+700)*1+lsi)*1]), &(inteval->stack[((hsi*90+240)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*540+4390)*1+lsi)*1]), &(inteval->stack[((hsi*270+13810)*1+lsi)*1]), &(inteval->stack[((hsi*180+950)*1+lsi)*1]),18);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*180+550)*1+lsi)*1]), &(inteval->stack[((hsi*100+330)*1+lsi)*1]), &(inteval->stack[((hsi*60+430)*1+lsi)*1]), &(inteval->stack[((hsi*60+490)*1+lsi)*1]),10);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*270+14080)*1+lsi)*1]), &(inteval->stack[((hsi*150+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+150)*1+lsi)*1]), &(inteval->stack[((hsi*90+240)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*540+3850)*1+lsi)*1]), &(inteval->stack[((hsi*270+14080)*1+lsi)*1]), &(inteval->stack[((hsi*180+550)*1+lsi)*1]),18);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+3850)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*540+4390)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*540+4930)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*540+5470)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*540+6010)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*540+6550)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*540+7090)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*540+7630)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*540+8170)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*540+8710)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*540+9250)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*540+9790)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
