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
#include <CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_D__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1212)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+3156)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*108+3264)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]), &(inteval->stack[((hsi*36+1176)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+3372)*1+lsi)*1]), &(inteval->stack[((hsi*90+1026)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]),6);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*216+2940)*1+lsi)*1]), &(inteval->stack[((hsi*180+3372)*1+lsi)*1]), &(inteval->stack[((hsi*108+3264)*1+lsi)*1]), &(inteval->stack[((hsi*108+3156)*1+lsi)*1]),6);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*108+3552)*1+lsi)*1]), &(inteval->stack[((hsi*60+930)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+3660)*1+lsi)*1]), &(inteval->stack[((hsi*90+840)*1+lsi)*1]), &(inteval->stack[((hsi*60+930)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]),6);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*216+2724)*1+lsi)*1]), &(inteval->stack[((hsi*180+3660)*1+lsi)*1]), &(inteval->stack[((hsi*108+3552)*1+lsi)*1]), &(inteval->stack[((hsi*108+3156)*1+lsi)*1]),6);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*108+3840)*1+lsi)*1]), &(inteval->stack[((hsi*60+708)*1+lsi)*1]), &(inteval->stack[((hsi*36+804)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+3948)*1+lsi)*1]), &(inteval->stack[((hsi*90+618)*1+lsi)*1]), &(inteval->stack[((hsi*60+708)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]),6);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*216+2508)*1+lsi)*1]), &(inteval->stack[((hsi*180+3948)*1+lsi)*1]), &(inteval->stack[((hsi*108+3840)*1+lsi)*1]), &(inteval->stack[((hsi*108+3156)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*60+462)*1+lsi)*1]), &(inteval->stack[((hsi*60+1116)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1116)*1+lsi)*1]), &(inteval->stack[((hsi*36+522)*1+lsi)*1]), &(inteval->stack[((hsi*36+1176)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*108+4188)*1+lsi)*1]), &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*36+1116)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1116)*1+lsi)*1]), &(inteval->stack[((hsi*90+372)*1+lsi)*1]), &(inteval->stack[((hsi*90+1026)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+4296)*1+lsi)*1]), &(inteval->stack[((hsi*90+1116)*1+lsi)*1]), &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]),6);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*216+2292)*1+lsi)*1]), &(inteval->stack[((hsi*180+4296)*1+lsi)*1]), &(inteval->stack[((hsi*108+4188)*1+lsi)*1]), &(inteval->stack[((hsi*108+3156)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*60+276)*1+lsi)*1]), &(inteval->stack[((hsi*60+930)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1026)*1+lsi)*1]), &(inteval->stack[((hsi*36+336)*1+lsi)*1]), &(inteval->stack[((hsi*36+990)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*108+1062)*1+lsi)*1]), &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*36+1026)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+930)*1+lsi)*1]), &(inteval->stack[((hsi*90+186)*1+lsi)*1]), &(inteval->stack[((hsi*90+840)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+4476)*1+lsi)*1]), &(inteval->stack[((hsi*90+930)*1+lsi)*1]), &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]),6);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*216+2076)*1+lsi)*1]), &(inteval->stack[((hsi*180+4476)*1+lsi)*1]), &(inteval->stack[((hsi*108+1062)*1+lsi)*1]), &(inteval->stack[((hsi*108+3156)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*60+90)*1+lsi)*1]), &(inteval->stack[((hsi*60+708)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+840)*1+lsi)*1]), &(inteval->stack[((hsi*36+150)*1+lsi)*1]), &(inteval->stack[((hsi*36+804)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*108+876)*1+lsi)*1]), &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*36+840)*1+lsi)*1]), &(inteval->stack[((hsi*36+768)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+708)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+618)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+4656)*1+lsi)*1]), &(inteval->stack[((hsi*90+708)*1+lsi)*1]), &(inteval->stack[((hsi*60+4128)*1+lsi)*1]), &(inteval->stack[((hsi*60+558)*1+lsi)*1]),6);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*216+1860)*1+lsi)*1]), &(inteval->stack[((hsi*180+4656)*1+lsi)*1]), &(inteval->stack[((hsi*108+876)*1+lsi)*1]), &(inteval->stack[((hsi*108+3156)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+558)*1+lsi)*1]), &(inteval->stack[((hsi*60+462)*1+lsi)*1]), &(inteval->stack[((hsi*36+522)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+666)*1+lsi)*1]), &(inteval->stack[((hsi*90+372)*1+lsi)*1]), &(inteval->stack[((hsi*60+462)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+1644)*1+lsi)*1]), &(inteval->stack[((hsi*180+666)*1+lsi)*1]), &(inteval->stack[((hsi*108+558)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+372)*1+lsi)*1]), &(inteval->stack[((hsi*60+276)*1+lsi)*1]), &(inteval->stack[((hsi*36+336)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+4836)*1+lsi)*1]), &(inteval->stack[((hsi*90+186)*1+lsi)*1]), &(inteval->stack[((hsi*60+276)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+1428)*1+lsi)*1]), &(inteval->stack[((hsi*180+4836)*1+lsi)*1]), &(inteval->stack[((hsi*108+372)*1+lsi)*1]),6);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*108+186)*1+lsi)*1]), &(inteval->stack[((hsi*60+90)*1+lsi)*1]), &(inteval->stack[((hsi*36+150)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+5016)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*60+90)*1+lsi)*1]),6);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*216+1212)*1+lsi)*1]), &(inteval->stack[((hsi*180+5016)*1+lsi)*1]), &(inteval->stack[((hsi*108+186)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*216+1212)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*216+1428)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*216+1644)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*216+1860)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*216+2076)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*216+2292)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*216+2508)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*216+2724)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*216+2940)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
