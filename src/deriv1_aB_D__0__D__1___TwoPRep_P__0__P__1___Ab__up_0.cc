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
#include <CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0dp001.h>
#include <HRRPart1bra0ket0dp010.h>
#include <HRRPart1bra0ket0dp100.h>
#include <HRRPart1bra0ket0d001p.h>
#include <HRRPart1bra0ket0d010p.h>
#include <HRRPart1bra0ket0d100p.h>
#include <deriv1_aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2460)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__D__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*108+6348)*1+lsi)*1]), &(inteval->stack[((hsi*60+2364)*1+lsi)*1]), &(inteval->stack[((hsi*36+2424)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*180+6456)*1+lsi)*1]), &(inteval->stack[((hsi*100+2204)*1+lsi)*1]), &(inteval->stack[((hsi*60+2304)*1+lsi)*1]), &(inteval->stack[((hsi*60+1632)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+6024)*1+lsi)*1]), &(inteval->stack[((hsi*180+6456)*1+lsi)*1]), &(inteval->stack[((hsi*108+6348)*1+lsi)*1]),18);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*108+6636)*1+lsi)*1]), &(inteval->stack[((hsi*60+2108)*1+lsi)*1]), &(inteval->stack[((hsi*36+2168)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*180+6744)*1+lsi)*1]), &(inteval->stack[((hsi*100+1948)*1+lsi)*1]), &(inteval->stack[((hsi*60+2048)*1+lsi)*1]), &(inteval->stack[((hsi*60+1632)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+5700)*1+lsi)*1]), &(inteval->stack[((hsi*180+6744)*1+lsi)*1]), &(inteval->stack[((hsi*108+6636)*1+lsi)*1]),18);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*108+6924)*1+lsi)*1]), &(inteval->stack[((hsi*60+1852)*1+lsi)*1]), &(inteval->stack[((hsi*36+1912)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*180+7032)*1+lsi)*1]), &(inteval->stack[((hsi*100+1692)*1+lsi)*1]), &(inteval->stack[((hsi*60+1792)*1+lsi)*1]), &(inteval->stack[((hsi*60+1632)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+5376)*1+lsi)*1]), &(inteval->stack[((hsi*180+7032)*1+lsi)*1]), &(inteval->stack[((hsi*108+6924)*1+lsi)*1]),18);
CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+7212)*1+lsi)*1]), &(inteval->stack[((hsi*36+828)*1+lsi)*1]), &(inteval->stack[((hsi*36+1596)*1+lsi)*1]), &(inteval->stack[((hsi*36+2424)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+7248)*1+lsi)*1]), &(inteval->stack[((hsi*60+708)*1+lsi)*1]), &(inteval->stack[((hsi*60+1476)*1+lsi)*1]), &(inteval->stack[((hsi*60+2364)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*108+7308)*1+lsi)*1]), &(inteval->stack[((hsi*60+7248)*1+lsi)*1]), &(inteval->stack[((hsi*36+7212)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2364)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]), &(inteval->stack[((hsi*60+1536)*1+lsi)*1]), &(inteval->stack[((hsi*60+2304)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+7416)*1+lsi)*1]), &(inteval->stack[((hsi*100+608)*1+lsi)*1]), &(inteval->stack[((hsi*100+1376)*1+lsi)*1]), &(inteval->stack[((hsi*100+2204)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*180+7516)*1+lsi)*1]), &(inteval->stack[((hsi*100+7416)*1+lsi)*1]), &(inteval->stack[((hsi*60+2364)*1+lsi)*1]), &(inteval->stack[((hsi*60+1632)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+5052)*1+lsi)*1]), &(inteval->stack[((hsi*180+7516)*1+lsi)*1]), &(inteval->stack[((hsi*108+7308)*1+lsi)*1]),18);
CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+2204)*1+lsi)*1]), &(inteval->stack[((hsi*36+572)*1+lsi)*1]), &(inteval->stack[((hsi*36+1340)*1+lsi)*1]), &(inteval->stack[((hsi*36+2168)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2240)*1+lsi)*1]), &(inteval->stack[((hsi*60+452)*1+lsi)*1]), &(inteval->stack[((hsi*60+1220)*1+lsi)*1]), &(inteval->stack[((hsi*60+2108)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*108+2300)*1+lsi)*1]), &(inteval->stack[((hsi*60+2240)*1+lsi)*1]), &(inteval->stack[((hsi*36+2204)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2108)*1+lsi)*1]), &(inteval->stack[((hsi*60+512)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]), &(inteval->stack[((hsi*60+2048)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+7416)*1+lsi)*1]), &(inteval->stack[((hsi*100+352)*1+lsi)*1]), &(inteval->stack[((hsi*100+1120)*1+lsi)*1]), &(inteval->stack[((hsi*100+1948)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*180+7696)*1+lsi)*1]), &(inteval->stack[((hsi*100+7416)*1+lsi)*1]), &(inteval->stack[((hsi*60+2108)*1+lsi)*1]), &(inteval->stack[((hsi*60+1632)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+4728)*1+lsi)*1]), &(inteval->stack[((hsi*180+7696)*1+lsi)*1]), &(inteval->stack[((hsi*108+2300)*1+lsi)*1]),18);
CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1948)*1+lsi)*1]), &(inteval->stack[((hsi*36+280)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]), &(inteval->stack[((hsi*36+1912)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1984)*1+lsi)*1]), &(inteval->stack[((hsi*60+100)*1+lsi)*1]), &(inteval->stack[((hsi*60+964)*1+lsi)*1]), &(inteval->stack[((hsi*60+1852)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*108+2044)*1+lsi)*1]), &(inteval->stack[((hsi*60+1984)*1+lsi)*1]), &(inteval->stack[((hsi*36+1948)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1852)*1+lsi)*1]), &(inteval->stack[((hsi*60+220)*1+lsi)*1]), &(inteval->stack[((hsi*60+1024)*1+lsi)*1]), &(inteval->stack[((hsi*60+1792)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+7416)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]), &(inteval->stack[((hsi*100+864)*1+lsi)*1]), &(inteval->stack[((hsi*100+1692)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*180+7876)*1+lsi)*1]), &(inteval->stack[((hsi*100+7416)*1+lsi)*1]), &(inteval->stack[((hsi*60+1852)*1+lsi)*1]), &(inteval->stack[((hsi*60+1632)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*324+4404)*1+lsi)*1]), &(inteval->stack[((hsi*180+7876)*1+lsi)*1]), &(inteval->stack[((hsi*108+2044)*1+lsi)*1]),18);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*108+1632)*1+lsi)*1]), &(inteval->stack[((hsi*60+1536)*1+lsi)*1]), &(inteval->stack[((hsi*36+1596)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*180+1740)*1+lsi)*1]), &(inteval->stack[((hsi*100+1376)*1+lsi)*1]), &(inteval->stack[((hsi*60+1476)*1+lsi)*1]), &(inteval->stack[((hsi*60+160)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*324+4080)*1+lsi)*1]), &(inteval->stack[((hsi*180+1740)*1+lsi)*1]), &(inteval->stack[((hsi*108+1632)*1+lsi)*1]),18);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*108+1376)*1+lsi)*1]), &(inteval->stack[((hsi*60+1280)*1+lsi)*1]), &(inteval->stack[((hsi*36+1340)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*180+8056)*1+lsi)*1]), &(inteval->stack[((hsi*100+1120)*1+lsi)*1]), &(inteval->stack[((hsi*60+1220)*1+lsi)*1]), &(inteval->stack[((hsi*60+160)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*324+3756)*1+lsi)*1]), &(inteval->stack[((hsi*180+8056)*1+lsi)*1]), &(inteval->stack[((hsi*108+1376)*1+lsi)*1]),18);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*108+1120)*1+lsi)*1]), &(inteval->stack[((hsi*60+1024)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*180+8236)*1+lsi)*1]), &(inteval->stack[((hsi*100+864)*1+lsi)*1]), &(inteval->stack[((hsi*60+964)*1+lsi)*1]), &(inteval->stack[((hsi*60+160)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*324+3432)*1+lsi)*1]), &(inteval->stack[((hsi*180+8236)*1+lsi)*1]), &(inteval->stack[((hsi*108+1120)*1+lsi)*1]),18);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*108+864)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]), &(inteval->stack[((hsi*36+828)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*180+8416)*1+lsi)*1]), &(inteval->stack[((hsi*100+608)*1+lsi)*1]), &(inteval->stack[((hsi*60+708)*1+lsi)*1]), &(inteval->stack[((hsi*60+160)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*324+3108)*1+lsi)*1]), &(inteval->stack[((hsi*180+8416)*1+lsi)*1]), &(inteval->stack[((hsi*108+864)*1+lsi)*1]),18);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*108+608)*1+lsi)*1]), &(inteval->stack[((hsi*60+512)*1+lsi)*1]), &(inteval->stack[((hsi*36+572)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*180+8596)*1+lsi)*1]), &(inteval->stack[((hsi*100+352)*1+lsi)*1]), &(inteval->stack[((hsi*60+452)*1+lsi)*1]), &(inteval->stack[((hsi*60+160)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*324+2784)*1+lsi)*1]), &(inteval->stack[((hsi*180+8596)*1+lsi)*1]), &(inteval->stack[((hsi*108+608)*1+lsi)*1]),18);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*108+352)*1+lsi)*1]), &(inteval->stack[((hsi*60+220)*1+lsi)*1]), &(inteval->stack[((hsi*36+280)*1+lsi)*1]), &(inteval->stack[((hsi*36+316)*1+lsi)*1]),6);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*180+8776)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]), &(inteval->stack[((hsi*60+100)*1+lsi)*1]), &(inteval->stack[((hsi*60+160)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*324+2460)*1+lsi)*1]), &(inteval->stack[((hsi*180+8776)*1+lsi)*1]), &(inteval->stack[((hsi*108+352)*1+lsi)*1]),18);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*324+2460)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*324+2784)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*324+3108)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*324+3432)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*324+3756)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*324+4080)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*324+4404)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*324+4728)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*324+5052)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*324+5376)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*324+5700)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*324+6024)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
