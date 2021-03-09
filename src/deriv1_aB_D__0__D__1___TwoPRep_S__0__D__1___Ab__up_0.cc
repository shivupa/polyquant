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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1770)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__D__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+4362)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*108+4470)*1+lsi)*1]), &(inteval->stack[((hsi*60+1674)*1+lsi)*1]), &(inteval->stack[((hsi*36+1734)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+4578)*1+lsi)*1]), &(inteval->stack[((hsi*90+1584)*1+lsi)*1]), &(inteval->stack[((hsi*60+1674)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*216+4146)*1+lsi)*1]), &(inteval->stack[((hsi*180+4578)*1+lsi)*1]), &(inteval->stack[((hsi*108+4470)*1+lsi)*1]), &(inteval->stack[((hsi*108+4362)*1+lsi)*1]),6);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*108+4758)*1+lsi)*1]), &(inteval->stack[((hsi*60+1488)*1+lsi)*1]), &(inteval->stack[((hsi*36+1548)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+4866)*1+lsi)*1]), &(inteval->stack[((hsi*90+1398)*1+lsi)*1]), &(inteval->stack[((hsi*60+1488)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*216+3930)*1+lsi)*1]), &(inteval->stack[((hsi*180+4866)*1+lsi)*1]), &(inteval->stack[((hsi*108+4758)*1+lsi)*1]), &(inteval->stack[((hsi*108+4362)*1+lsi)*1]),6);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*108+5046)*1+lsi)*1]), &(inteval->stack[((hsi*60+1266)*1+lsi)*1]), &(inteval->stack[((hsi*36+1362)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+5154)*1+lsi)*1]), &(inteval->stack[((hsi*90+1176)*1+lsi)*1]), &(inteval->stack[((hsi*60+1266)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*216+3714)*1+lsi)*1]), &(inteval->stack[((hsi*180+5154)*1+lsi)*1]), &(inteval->stack[((hsi*108+5046)*1+lsi)*1]), &(inteval->stack[((hsi*108+4362)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*60+462)*1+lsi)*1]), &(inteval->stack[((hsi*60+1020)*1+lsi)*1]), &(inteval->stack[((hsi*60+1674)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1674)*1+lsi)*1]), &(inteval->stack[((hsi*36+522)*1+lsi)*1]), &(inteval->stack[((hsi*36+1080)*1+lsi)*1]), &(inteval->stack[((hsi*36+1734)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*108+5394)*1+lsi)*1]), &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*36+1674)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1674)*1+lsi)*1]), &(inteval->stack[((hsi*90+372)*1+lsi)*1]), &(inteval->stack[((hsi*90+930)*1+lsi)*1]), &(inteval->stack[((hsi*90+1584)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+5502)*1+lsi)*1]), &(inteval->stack[((hsi*90+1674)*1+lsi)*1]), &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*216+3498)*1+lsi)*1]), &(inteval->stack[((hsi*180+5502)*1+lsi)*1]), &(inteval->stack[((hsi*108+5394)*1+lsi)*1]), &(inteval->stack[((hsi*108+4362)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*60+276)*1+lsi)*1]), &(inteval->stack[((hsi*60+834)*1+lsi)*1]), &(inteval->stack[((hsi*60+1488)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1584)*1+lsi)*1]), &(inteval->stack[((hsi*36+336)*1+lsi)*1]), &(inteval->stack[((hsi*36+894)*1+lsi)*1]), &(inteval->stack[((hsi*36+1548)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*108+1620)*1+lsi)*1]), &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*36+1584)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1488)*1+lsi)*1]), &(inteval->stack[((hsi*90+186)*1+lsi)*1]), &(inteval->stack[((hsi*90+744)*1+lsi)*1]), &(inteval->stack[((hsi*90+1398)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+5682)*1+lsi)*1]), &(inteval->stack[((hsi*90+1488)*1+lsi)*1]), &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*216+3282)*1+lsi)*1]), &(inteval->stack[((hsi*180+5682)*1+lsi)*1]), &(inteval->stack[((hsi*108+1620)*1+lsi)*1]), &(inteval->stack[((hsi*108+4362)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*60+90)*1+lsi)*1]), &(inteval->stack[((hsi*60+648)*1+lsi)*1]), &(inteval->stack[((hsi*60+1266)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1398)*1+lsi)*1]), &(inteval->stack[((hsi*36+150)*1+lsi)*1]), &(inteval->stack[((hsi*36+708)*1+lsi)*1]), &(inteval->stack[((hsi*36+1362)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*108+1434)*1+lsi)*1]), &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*36+1398)*1+lsi)*1]), &(inteval->stack[((hsi*36+1326)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1266)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+558)*1+lsi)*1]), &(inteval->stack[((hsi*90+1176)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+5862)*1+lsi)*1]), &(inteval->stack[((hsi*90+1266)*1+lsi)*1]), &(inteval->stack[((hsi*60+5334)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*216+3066)*1+lsi)*1]), &(inteval->stack[((hsi*180+5862)*1+lsi)*1]), &(inteval->stack[((hsi*108+1434)*1+lsi)*1]), &(inteval->stack[((hsi*108+4362)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+1116)*1+lsi)*1]), &(inteval->stack[((hsi*60+1020)*1+lsi)*1]), &(inteval->stack[((hsi*36+1080)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1224)*1+lsi)*1]), &(inteval->stack[((hsi*90+930)*1+lsi)*1]), &(inteval->stack[((hsi*60+1020)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+2850)*1+lsi)*1]), &(inteval->stack[((hsi*180+1224)*1+lsi)*1]), &(inteval->stack[((hsi*108+1116)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+930)*1+lsi)*1]), &(inteval->stack[((hsi*60+834)*1+lsi)*1]), &(inteval->stack[((hsi*36+894)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+6042)*1+lsi)*1]), &(inteval->stack[((hsi*90+744)*1+lsi)*1]), &(inteval->stack[((hsi*60+834)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+2634)*1+lsi)*1]), &(inteval->stack[((hsi*180+6042)*1+lsi)*1]), &(inteval->stack[((hsi*108+930)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+744)*1+lsi)*1]), &(inteval->stack[((hsi*60+648)*1+lsi)*1]), &(inteval->stack[((hsi*36+708)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+6222)*1+lsi)*1]), &(inteval->stack[((hsi*90+558)*1+lsi)*1]), &(inteval->stack[((hsi*60+648)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+2418)*1+lsi)*1]), &(inteval->stack[((hsi*180+6222)*1+lsi)*1]), &(inteval->stack[((hsi*108+744)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+558)*1+lsi)*1]), &(inteval->stack[((hsi*60+462)*1+lsi)*1]), &(inteval->stack[((hsi*36+522)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+6402)*1+lsi)*1]), &(inteval->stack[((hsi*90+372)*1+lsi)*1]), &(inteval->stack[((hsi*60+462)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+2202)*1+lsi)*1]), &(inteval->stack[((hsi*180+6402)*1+lsi)*1]), &(inteval->stack[((hsi*108+558)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+372)*1+lsi)*1]), &(inteval->stack[((hsi*60+276)*1+lsi)*1]), &(inteval->stack[((hsi*36+336)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+6582)*1+lsi)*1]), &(inteval->stack[((hsi*90+186)*1+lsi)*1]), &(inteval->stack[((hsi*60+276)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+1986)*1+lsi)*1]), &(inteval->stack[((hsi*180+6582)*1+lsi)*1]), &(inteval->stack[((hsi*108+372)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+186)*1+lsi)*1]), &(inteval->stack[((hsi*60+90)*1+lsi)*1]), &(inteval->stack[((hsi*36+150)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+6762)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*60+90)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+1770)*1+lsi)*1]), &(inteval->stack[((hsi*180+6762)*1+lsi)*1]), &(inteval->stack[((hsi*108+186)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*216+1770)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*216+1986)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*216+2202)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*216+2418)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*216+2634)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*216+2850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*216+3066)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*216+3282)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*216+3498)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*216+3714)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*216+3930)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*216+4146)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
