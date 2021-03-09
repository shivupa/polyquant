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
#include <CR_DerivGaussP1InBra_aB_I__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_I__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5656)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__D__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*504+14728)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*504+15232)*1+lsi)*1]), &(inteval->stack[((hsi*280+5208)*1+lsi)*1]), &(inteval->stack[((hsi*168+5488)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+15736)*1+lsi)*1]), &(inteval->stack[((hsi*420+4788)*1+lsi)*1]), &(inteval->stack[((hsi*280+5208)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0dd001(inteval, &(inteval->stack[((hsi*1008+13720)*1+lsi)*1]), &(inteval->stack[((hsi*840+15736)*1+lsi)*1]), &(inteval->stack[((hsi*504+15232)*1+lsi)*1]), &(inteval->stack[((hsi*504+14728)*1+lsi)*1]),28);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*504+16576)*1+lsi)*1]), &(inteval->stack[((hsi*280+4340)*1+lsi)*1]), &(inteval->stack[((hsi*168+4620)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+17080)*1+lsi)*1]), &(inteval->stack[((hsi*420+3920)*1+lsi)*1]), &(inteval->stack[((hsi*280+4340)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0dd010(inteval, &(inteval->stack[((hsi*1008+12712)*1+lsi)*1]), &(inteval->stack[((hsi*840+17080)*1+lsi)*1]), &(inteval->stack[((hsi*504+16576)*1+lsi)*1]), &(inteval->stack[((hsi*504+14728)*1+lsi)*1]),28);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*504+17920)*1+lsi)*1]), &(inteval->stack[((hsi*280+3304)*1+lsi)*1]), &(inteval->stack[((hsi*168+3752)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+18424)*1+lsi)*1]), &(inteval->stack[((hsi*420+2884)*1+lsi)*1]), &(inteval->stack[((hsi*280+3304)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0dd100(inteval, &(inteval->stack[((hsi*1008+11704)*1+lsi)*1]), &(inteval->stack[((hsi*840+18424)*1+lsi)*1]), &(inteval->stack[((hsi*504+17920)*1+lsi)*1]), &(inteval->stack[((hsi*504+14728)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*280+2156)*1+lsi)*1]), &(inteval->stack[((hsi*280+5208)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__D001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+5208)*1+lsi)*1]), &(inteval->stack[((hsi*168+2436)*1+lsi)*1]), &(inteval->stack[((hsi*168+5488)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*504+19544)*1+lsi)*1]), &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*168+5208)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+5208)*1+lsi)*1]), &(inteval->stack[((hsi*420+1736)*1+lsi)*1]), &(inteval->stack[((hsi*420+4788)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+20048)*1+lsi)*1]), &(inteval->stack[((hsi*420+5208)*1+lsi)*1]), &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0d001d(inteval, &(inteval->stack[((hsi*1008+10696)*1+lsi)*1]), &(inteval->stack[((hsi*840+20048)*1+lsi)*1]), &(inteval->stack[((hsi*504+19544)*1+lsi)*1]), &(inteval->stack[((hsi*504+14728)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*280+1288)*1+lsi)*1]), &(inteval->stack[((hsi*280+4340)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__D010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+4788)*1+lsi)*1]), &(inteval->stack[((hsi*168+1568)*1+lsi)*1]), &(inteval->stack[((hsi*168+4620)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*504+4956)*1+lsi)*1]), &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*168+4788)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+4340)*1+lsi)*1]), &(inteval->stack[((hsi*420+868)*1+lsi)*1]), &(inteval->stack[((hsi*420+3920)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+20888)*1+lsi)*1]), &(inteval->stack[((hsi*420+4340)*1+lsi)*1]), &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0d010d(inteval, &(inteval->stack[((hsi*1008+9688)*1+lsi)*1]), &(inteval->stack[((hsi*840+20888)*1+lsi)*1]), &(inteval->stack[((hsi*504+4956)*1+lsi)*1]), &(inteval->stack[((hsi*504+14728)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*280+3304)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__D100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*168+3920)*1+lsi)*1]), &(inteval->stack[((hsi*168+700)*1+lsi)*1]), &(inteval->stack[((hsi*168+3752)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*504+4088)*1+lsi)*1]), &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*168+3920)*1+lsi)*1]), &(inteval->stack[((hsi*168+3584)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+3304)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+2884)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+21728)*1+lsi)*1]), &(inteval->stack[((hsi*420+3304)*1+lsi)*1]), &(inteval->stack[((hsi*280+19264)*1+lsi)*1]), &(inteval->stack[((hsi*280+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0d100d(inteval, &(inteval->stack[((hsi*1008+8680)*1+lsi)*1]), &(inteval->stack[((hsi*840+21728)*1+lsi)*1]), &(inteval->stack[((hsi*504+4088)*1+lsi)*1]), &(inteval->stack[((hsi*504+14728)*1+lsi)*1]),28);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*504+2604)*1+lsi)*1]), &(inteval->stack[((hsi*280+2156)*1+lsi)*1]), &(inteval->stack[((hsi*168+2436)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+3108)*1+lsi)*1]), &(inteval->stack[((hsi*420+1736)*1+lsi)*1]), &(inteval->stack[((hsi*280+2156)*1+lsi)*1]),28);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+7672)*1+lsi)*1]), &(inteval->stack[((hsi*840+3108)*1+lsi)*1]), &(inteval->stack[((hsi*504+2604)*1+lsi)*1]),28);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*504+1736)*1+lsi)*1]), &(inteval->stack[((hsi*280+1288)*1+lsi)*1]), &(inteval->stack[((hsi*168+1568)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+22568)*1+lsi)*1]), &(inteval->stack[((hsi*420+868)*1+lsi)*1]), &(inteval->stack[((hsi*280+1288)*1+lsi)*1]),28);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+6664)*1+lsi)*1]), &(inteval->stack[((hsi*840+22568)*1+lsi)*1]), &(inteval->stack[((hsi*504+1736)*1+lsi)*1]),28);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*504+868)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]), &(inteval->stack[((hsi*168+700)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+23408)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+420)*1+lsi)*1]),28);
HRRPart1bra0ket0dd(inteval, &(inteval->stack[((hsi*1008+5656)*1+lsi)*1]), &(inteval->stack[((hsi*840+23408)*1+lsi)*1]), &(inteval->stack[((hsi*504+868)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1008+5656)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1008+6664)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1008+7672)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1008+8680)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1008+9688)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1008+10696)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1008+11704)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1008+12712)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1008+13720)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
