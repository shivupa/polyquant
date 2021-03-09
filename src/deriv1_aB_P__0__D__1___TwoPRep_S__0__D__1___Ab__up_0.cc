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
#include <CR_DerivGaussP1InBra_aB_P__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_P__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,885)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+2181)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*54+2235)*1+lsi)*1]), &(inteval->stack[((hsi*30+837)*1+lsi)*1]), &(inteval->stack[((hsi*18+867)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*90+2289)*1+lsi)*1]), &(inteval->stack[((hsi*45+792)*1+lsi)*1]), &(inteval->stack[((hsi*30+837)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]),3);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*108+2073)*1+lsi)*1]), &(inteval->stack[((hsi*90+2289)*1+lsi)*1]), &(inteval->stack[((hsi*54+2235)*1+lsi)*1]), &(inteval->stack[((hsi*54+2181)*1+lsi)*1]),3);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*54+2379)*1+lsi)*1]), &(inteval->stack[((hsi*30+744)*1+lsi)*1]), &(inteval->stack[((hsi*18+774)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*90+2433)*1+lsi)*1]), &(inteval->stack[((hsi*45+699)*1+lsi)*1]), &(inteval->stack[((hsi*30+744)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]),3);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*108+1965)*1+lsi)*1]), &(inteval->stack[((hsi*90+2433)*1+lsi)*1]), &(inteval->stack[((hsi*54+2379)*1+lsi)*1]), &(inteval->stack[((hsi*54+2181)*1+lsi)*1]),3);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*54+2523)*1+lsi)*1]), &(inteval->stack[((hsi*30+651)*1+lsi)*1]), &(inteval->stack[((hsi*18+681)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*90+2577)*1+lsi)*1]), &(inteval->stack[((hsi*45+606)*1+lsi)*1]), &(inteval->stack[((hsi*30+651)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]),3);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*108+1857)*1+lsi)*1]), &(inteval->stack[((hsi*90+2577)*1+lsi)*1]), &(inteval->stack[((hsi*54+2523)*1+lsi)*1]), &(inteval->stack[((hsi*54+2181)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*30+249)*1+lsi)*1]), &(inteval->stack[((hsi*30+528)*1+lsi)*1]), &(inteval->stack[((hsi*30+837)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+837)*1+lsi)*1]), &(inteval->stack[((hsi*18+279)*1+lsi)*1]), &(inteval->stack[((hsi*18+558)*1+lsi)*1]), &(inteval->stack[((hsi*18+867)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*54+2697)*1+lsi)*1]), &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*18+837)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+837)*1+lsi)*1]), &(inteval->stack[((hsi*45+204)*1+lsi)*1]), &(inteval->stack[((hsi*45+483)*1+lsi)*1]), &(inteval->stack[((hsi*45+792)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*90+2751)*1+lsi)*1]), &(inteval->stack[((hsi*45+837)*1+lsi)*1]), &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]),3);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*108+1749)*1+lsi)*1]), &(inteval->stack[((hsi*90+2751)*1+lsi)*1]), &(inteval->stack[((hsi*54+2697)*1+lsi)*1]), &(inteval->stack[((hsi*54+2181)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*30+156)*1+lsi)*1]), &(inteval->stack[((hsi*30+435)*1+lsi)*1]), &(inteval->stack[((hsi*30+744)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+792)*1+lsi)*1]), &(inteval->stack[((hsi*18+186)*1+lsi)*1]), &(inteval->stack[((hsi*18+465)*1+lsi)*1]), &(inteval->stack[((hsi*18+774)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*54+810)*1+lsi)*1]), &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*18+792)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+744)*1+lsi)*1]), &(inteval->stack[((hsi*45+111)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*45+699)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*90+2841)*1+lsi)*1]), &(inteval->stack[((hsi*45+744)*1+lsi)*1]), &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]),3);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*108+1641)*1+lsi)*1]), &(inteval->stack[((hsi*90+2841)*1+lsi)*1]), &(inteval->stack[((hsi*54+810)*1+lsi)*1]), &(inteval->stack[((hsi*54+2181)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*30+63)*1+lsi)*1]), &(inteval->stack[((hsi*30+342)*1+lsi)*1]), &(inteval->stack[((hsi*30+651)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+699)*1+lsi)*1]), &(inteval->stack[((hsi*18+93)*1+lsi)*1]), &(inteval->stack[((hsi*18+372)*1+lsi)*1]), &(inteval->stack[((hsi*18+681)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*54+717)*1+lsi)*1]), &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*18+699)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+651)*1+lsi)*1]), &(inteval->stack[((hsi*45+18)*1+lsi)*1]), &(inteval->stack[((hsi*45+297)*1+lsi)*1]), &(inteval->stack[((hsi*45+606)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*90+2931)*1+lsi)*1]), &(inteval->stack[((hsi*45+651)*1+lsi)*1]), &(inteval->stack[((hsi*30+2667)*1+lsi)*1]), &(inteval->stack[((hsi*30+576)*1+lsi)*1]),3);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*108+1533)*1+lsi)*1]), &(inteval->stack[((hsi*90+2931)*1+lsi)*1]), &(inteval->stack[((hsi*54+717)*1+lsi)*1]), &(inteval->stack[((hsi*54+2181)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+576)*1+lsi)*1]), &(inteval->stack[((hsi*30+528)*1+lsi)*1]), &(inteval->stack[((hsi*18+558)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3021)*1+lsi)*1]), &(inteval->stack[((hsi*45+483)*1+lsi)*1]), &(inteval->stack[((hsi*30+528)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+1425)*1+lsi)*1]), &(inteval->stack[((hsi*90+3021)*1+lsi)*1]), &(inteval->stack[((hsi*54+576)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+483)*1+lsi)*1]), &(inteval->stack[((hsi*30+435)*1+lsi)*1]), &(inteval->stack[((hsi*18+465)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3111)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*30+435)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+1317)*1+lsi)*1]), &(inteval->stack[((hsi*90+3111)*1+lsi)*1]), &(inteval->stack[((hsi*54+483)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+390)*1+lsi)*1]), &(inteval->stack[((hsi*30+342)*1+lsi)*1]), &(inteval->stack[((hsi*18+372)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3201)*1+lsi)*1]), &(inteval->stack[((hsi*45+297)*1+lsi)*1]), &(inteval->stack[((hsi*30+342)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+1209)*1+lsi)*1]), &(inteval->stack[((hsi*90+3201)*1+lsi)*1]), &(inteval->stack[((hsi*54+390)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+297)*1+lsi)*1]), &(inteval->stack[((hsi*30+249)*1+lsi)*1]), &(inteval->stack[((hsi*18+279)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3291)*1+lsi)*1]), &(inteval->stack[((hsi*45+204)*1+lsi)*1]), &(inteval->stack[((hsi*30+249)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+1101)*1+lsi)*1]), &(inteval->stack[((hsi*90+3291)*1+lsi)*1]), &(inteval->stack[((hsi*54+297)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+204)*1+lsi)*1]), &(inteval->stack[((hsi*30+156)*1+lsi)*1]), &(inteval->stack[((hsi*18+186)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3381)*1+lsi)*1]), &(inteval->stack[((hsi*45+111)*1+lsi)*1]), &(inteval->stack[((hsi*30+156)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+993)*1+lsi)*1]), &(inteval->stack[((hsi*90+3381)*1+lsi)*1]), &(inteval->stack[((hsi*54+204)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+111)*1+lsi)*1]), &(inteval->stack[((hsi*30+63)*1+lsi)*1]), &(inteval->stack[((hsi*18+93)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3471)*1+lsi)*1]), &(inteval->stack[((hsi*45+18)*1+lsi)*1]), &(inteval->stack[((hsi*30+63)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+885)*1+lsi)*1]), &(inteval->stack[((hsi*90+3471)*1+lsi)*1]), &(inteval->stack[((hsi*54+111)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*108+885)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*108+993)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*108+1101)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*108+1209)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*108+1317)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*108+1425)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*108+1533)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*108+1641)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*108+1749)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*108+1857)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*108+1965)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*108+2073)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
