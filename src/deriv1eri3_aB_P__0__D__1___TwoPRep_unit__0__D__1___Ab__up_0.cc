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
#include <CR_DerivGaussP1InBra_aB_P__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_P__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,606)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+1578)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*54+1632)*1+lsi)*1]), &(inteval->stack[((hsi*30+558)*1+lsi)*1]), &(inteval->stack[((hsi*18+588)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*90+1686)*1+lsi)*1]), &(inteval->stack[((hsi*45+513)*1+lsi)*1]), &(inteval->stack[((hsi*30+558)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]),3);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*108+1470)*1+lsi)*1]), &(inteval->stack[((hsi*90+1686)*1+lsi)*1]), &(inteval->stack[((hsi*54+1632)*1+lsi)*1]), &(inteval->stack[((hsi*54+1578)*1+lsi)*1]),3);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*54+1776)*1+lsi)*1]), &(inteval->stack[((hsi*30+465)*1+lsi)*1]), &(inteval->stack[((hsi*18+495)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*90+1830)*1+lsi)*1]), &(inteval->stack[((hsi*45+420)*1+lsi)*1]), &(inteval->stack[((hsi*30+465)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]),3);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*108+1362)*1+lsi)*1]), &(inteval->stack[((hsi*90+1830)*1+lsi)*1]), &(inteval->stack[((hsi*54+1776)*1+lsi)*1]), &(inteval->stack[((hsi*54+1578)*1+lsi)*1]),3);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*54+1920)*1+lsi)*1]), &(inteval->stack[((hsi*30+372)*1+lsi)*1]), &(inteval->stack[((hsi*18+402)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*90+1974)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]), &(inteval->stack[((hsi*30+372)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]),3);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*108+1254)*1+lsi)*1]), &(inteval->stack[((hsi*90+1974)*1+lsi)*1]), &(inteval->stack[((hsi*54+1920)*1+lsi)*1]), &(inteval->stack[((hsi*54+1578)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*30+249)*1+lsi)*1]), &(inteval->stack[((hsi*30+558)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+558)*1+lsi)*1]), &(inteval->stack[((hsi*18+279)*1+lsi)*1]), &(inteval->stack[((hsi*18+588)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*54+2094)*1+lsi)*1]), &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*18+558)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+558)*1+lsi)*1]), &(inteval->stack[((hsi*45+204)*1+lsi)*1]), &(inteval->stack[((hsi*45+513)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*90+2148)*1+lsi)*1]), &(inteval->stack[((hsi*45+558)*1+lsi)*1]), &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]),3);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*108+1146)*1+lsi)*1]), &(inteval->stack[((hsi*90+2148)*1+lsi)*1]), &(inteval->stack[((hsi*54+2094)*1+lsi)*1]), &(inteval->stack[((hsi*54+1578)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*30+156)*1+lsi)*1]), &(inteval->stack[((hsi*30+465)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+513)*1+lsi)*1]), &(inteval->stack[((hsi*18+186)*1+lsi)*1]), &(inteval->stack[((hsi*18+495)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*54+531)*1+lsi)*1]), &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*18+513)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+465)*1+lsi)*1]), &(inteval->stack[((hsi*45+111)*1+lsi)*1]), &(inteval->stack[((hsi*45+420)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*90+2238)*1+lsi)*1]), &(inteval->stack[((hsi*45+465)*1+lsi)*1]), &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]),3);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*108+1038)*1+lsi)*1]), &(inteval->stack[((hsi*90+2238)*1+lsi)*1]), &(inteval->stack[((hsi*54+531)*1+lsi)*1]), &(inteval->stack[((hsi*54+1578)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*30+63)*1+lsi)*1]), &(inteval->stack[((hsi*30+372)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+420)*1+lsi)*1]), &(inteval->stack[((hsi*18+93)*1+lsi)*1]), &(inteval->stack[((hsi*18+402)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*54+438)*1+lsi)*1]), &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*18+420)*1+lsi)*1]), &(inteval->stack[((hsi*18+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+372)*1+lsi)*1]), &(inteval->stack[((hsi*45+18)*1+lsi)*1]), &(inteval->stack[((hsi*45+327)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*90+2328)*1+lsi)*1]), &(inteval->stack[((hsi*45+372)*1+lsi)*1]), &(inteval->stack[((hsi*30+2064)*1+lsi)*1]), &(inteval->stack[((hsi*30+297)*1+lsi)*1]),3);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*108+930)*1+lsi)*1]), &(inteval->stack[((hsi*90+2328)*1+lsi)*1]), &(inteval->stack[((hsi*54+438)*1+lsi)*1]), &(inteval->stack[((hsi*54+1578)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+297)*1+lsi)*1]), &(inteval->stack[((hsi*30+249)*1+lsi)*1]), &(inteval->stack[((hsi*18+279)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+2418)*1+lsi)*1]), &(inteval->stack[((hsi*45+204)*1+lsi)*1]), &(inteval->stack[((hsi*30+249)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+822)*1+lsi)*1]), &(inteval->stack[((hsi*90+2418)*1+lsi)*1]), &(inteval->stack[((hsi*54+297)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+204)*1+lsi)*1]), &(inteval->stack[((hsi*30+156)*1+lsi)*1]), &(inteval->stack[((hsi*18+186)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+2508)*1+lsi)*1]), &(inteval->stack[((hsi*45+111)*1+lsi)*1]), &(inteval->stack[((hsi*30+156)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+714)*1+lsi)*1]), &(inteval->stack[((hsi*90+2508)*1+lsi)*1]), &(inteval->stack[((hsi*54+204)*1+lsi)*1]),3);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*54+111)*1+lsi)*1]), &(inteval->stack[((hsi*30+63)*1+lsi)*1]), &(inteval->stack[((hsi*18+93)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+2598)*1+lsi)*1]), &(inteval->stack[((hsi*45+18)*1+lsi)*1]), &(inteval->stack[((hsi*30+63)*1+lsi)*1]),3);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*108+606)*1+lsi)*1]), &(inteval->stack[((hsi*90+2598)*1+lsi)*1]), &(inteval->stack[((hsi*54+111)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*108+606)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*108+714)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*108+822)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*108+930)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*108+1038)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*108+1146)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*108+1254)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*108+1362)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*108+1470)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
