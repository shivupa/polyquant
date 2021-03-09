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
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0fd001.h>
#include <HRRPart1bra0ket0fd010.h>
#include <HRRPart1bra0ket0fd100.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001d.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010d.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100d.h>
#include <HRRPart1bra0ket0f100p.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_F__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__F__1___TwoPRep_P__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11185)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__F__1___TwoPRep_P__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+33085)*1+lsi)*1]), &(inteval->stack[((hsi*150+10935)*1+lsi)*1]), &(inteval->stack[((hsi*100+11085)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+33385)*1+lsi)*1]), &(inteval->stack[((hsi*210+10725)*1+lsi)*1]), &(inteval->stack[((hsi*150+10935)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*600+33835)*1+lsi)*1]), &(inteval->stack[((hsi*450+33385)*1+lsi)*1]), &(inteval->stack[((hsi*300+33085)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+33085)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+10350)*1+lsi)*1]), &(inteval->stack[((hsi*150+10575)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+34885)*1+lsi)*1]), &(inteval->stack[((hsi*315+10035)*1+lsi)*1]), &(inteval->stack[((hsi*225+10350)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]),15);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*900+35560)*1+lsi)*1]), &(inteval->stack[((hsi*675+34885)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*450+33085)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1800+30985)*1+lsi)*1]), &(inteval->stack[((hsi*900+35560)*1+lsi)*1]), &(inteval->stack[((hsi*600+33835)*1+lsi)*1]),60);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*150+9785)*1+lsi)*1]), &(inteval->stack[((hsi*100+9935)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+9575)*1+lsi)*1]), &(inteval->stack[((hsi*150+9785)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*600+34885)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+9200)*1+lsi)*1]), &(inteval->stack[((hsi*150+9425)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+36460)*1+lsi)*1]), &(inteval->stack[((hsi*315+8885)*1+lsi)*1]), &(inteval->stack[((hsi*225+9200)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]),15);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*900+37135)*1+lsi)*1]), &(inteval->stack[((hsi*675+36460)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*450+33085)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1800+29185)*1+lsi)*1]), &(inteval->stack[((hsi*900+37135)*1+lsi)*1]), &(inteval->stack[((hsi*600+34885)*1+lsi)*1]),60);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*150+8635)*1+lsi)*1]), &(inteval->stack[((hsi*100+8785)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+8425)*1+lsi)*1]), &(inteval->stack[((hsi*150+8635)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*600+36460)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+7900)*1+lsi)*1]), &(inteval->stack[((hsi*150+8275)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+38035)*1+lsi)*1]), &(inteval->stack[((hsi*315+7585)*1+lsi)*1]), &(inteval->stack[((hsi*225+7900)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]),15);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*900+38710)*1+lsi)*1]), &(inteval->stack[((hsi*675+38035)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*450+33085)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1800+27385)*1+lsi)*1]), &(inteval->stack[((hsi*900+38710)*1+lsi)*1]), &(inteval->stack[((hsi*600+36460)*1+lsi)*1]),60);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+38035)*1+lsi)*1]), &(inteval->stack[((hsi*150+3660)*1+lsi)*1]), &(inteval->stack[((hsi*150+7110)*1+lsi)*1]), &(inteval->stack[((hsi*150+10935)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+38185)*1+lsi)*1]), &(inteval->stack[((hsi*100+3810)*1+lsi)*1]), &(inteval->stack[((hsi*100+7260)*1+lsi)*1]), &(inteval->stack[((hsi*100+11085)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*150+38035)*1+lsi)*1]), &(inteval->stack[((hsi*100+38185)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+38185)*1+lsi)*1]), &(inteval->stack[((hsi*210+3450)*1+lsi)*1]), &(inteval->stack[((hsi*210+6900)*1+lsi)*1]), &(inteval->stack[((hsi*210+10725)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+38185)*1+lsi)*1]), &(inteval->stack[((hsi*150+38035)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*600+38035)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+10725)*1+lsi)*1]), &(inteval->stack[((hsi*225+3075)*1+lsi)*1]), &(inteval->stack[((hsi*225+6525)*1+lsi)*1]), &(inteval->stack[((hsi*225+10350)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+34435)*1+lsi)*1]), &(inteval->stack[((hsi*150+3300)*1+lsi)*1]), &(inteval->stack[((hsi*150+6750)*1+lsi)*1]), &(inteval->stack[((hsi*150+10575)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*225+10725)*1+lsi)*1]), &(inteval->stack[((hsi*150+34435)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+34435)*1+lsi)*1]), &(inteval->stack[((hsi*315+2760)*1+lsi)*1]), &(inteval->stack[((hsi*315+6210)*1+lsi)*1]), &(inteval->stack[((hsi*315+10035)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+10035)*1+lsi)*1]), &(inteval->stack[((hsi*315+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+10725)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]),15);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*900+40060)*1+lsi)*1]), &(inteval->stack[((hsi*675+10035)*1+lsi)*1]), &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*450+33085)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1800+25585)*1+lsi)*1]), &(inteval->stack[((hsi*900+40060)*1+lsi)*1]), &(inteval->stack[((hsi*600+38035)*1+lsi)*1]),60);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+10035)*1+lsi)*1]), &(inteval->stack[((hsi*150+2510)*1+lsi)*1]), &(inteval->stack[((hsi*150+5960)*1+lsi)*1]), &(inteval->stack[((hsi*150+9785)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+10185)*1+lsi)*1]), &(inteval->stack[((hsi*100+2660)*1+lsi)*1]), &(inteval->stack[((hsi*100+6110)*1+lsi)*1]), &(inteval->stack[((hsi*100+9935)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*150+10035)*1+lsi)*1]), &(inteval->stack[((hsi*100+10185)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+10185)*1+lsi)*1]), &(inteval->stack[((hsi*210+2300)*1+lsi)*1]), &(inteval->stack[((hsi*210+5750)*1+lsi)*1]), &(inteval->stack[((hsi*210+9575)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*210+10185)*1+lsi)*1]), &(inteval->stack[((hsi*150+10035)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*600+9575)*1+lsi)*1]), &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+10175)*1+lsi)*1]), &(inteval->stack[((hsi*225+1925)*1+lsi)*1]), &(inteval->stack[((hsi*225+5375)*1+lsi)*1]), &(inteval->stack[((hsi*225+9200)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+10400)*1+lsi)*1]), &(inteval->stack[((hsi*150+2150)*1+lsi)*1]), &(inteval->stack[((hsi*150+5600)*1+lsi)*1]), &(inteval->stack[((hsi*150+9425)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*225+10175)*1+lsi)*1]), &(inteval->stack[((hsi*150+10400)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10400)*1+lsi)*1]), &(inteval->stack[((hsi*315+1610)*1+lsi)*1]), &(inteval->stack[((hsi*315+5060)*1+lsi)*1]), &(inteval->stack[((hsi*315+8885)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+8885)*1+lsi)*1]), &(inteval->stack[((hsi*315+10400)*1+lsi)*1]), &(inteval->stack[((hsi*225+10175)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]),15);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*900+10175)*1+lsi)*1]), &(inteval->stack[((hsi*675+8885)*1+lsi)*1]), &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*450+33085)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1800+23785)*1+lsi)*1]), &(inteval->stack[((hsi*900+10175)*1+lsi)*1]), &(inteval->stack[((hsi*600+9575)*1+lsi)*1]),60);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+8885)*1+lsi)*1]), &(inteval->stack[((hsi*150+900)*1+lsi)*1]), &(inteval->stack[((hsi*150+4810)*1+lsi)*1]), &(inteval->stack[((hsi*150+8635)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+9035)*1+lsi)*1]), &(inteval->stack[((hsi*100+1050)*1+lsi)*1]), &(inteval->stack[((hsi*100+4960)*1+lsi)*1]), &(inteval->stack[((hsi*100+8785)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*150+8885)*1+lsi)*1]), &(inteval->stack[((hsi*100+9035)*1+lsi)*1]), &(inteval->stack[((hsi*100+1510)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+9035)*1+lsi)*1]), &(inteval->stack[((hsi*210+690)*1+lsi)*1]), &(inteval->stack[((hsi*210+4600)*1+lsi)*1]), &(inteval->stack[((hsi*210+8425)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*210+9035)*1+lsi)*1]), &(inteval->stack[((hsi*150+8885)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*600+8425)*1+lsi)*1]), &(inteval->stack[((hsi*450+39610)*1+lsi)*1]), &(inteval->stack[((hsi*300+33535)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+9025)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]), &(inteval->stack[((hsi*225+4225)*1+lsi)*1]), &(inteval->stack[((hsi*225+7900)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+39610)*1+lsi)*1]), &(inteval->stack[((hsi*150+540)*1+lsi)*1]), &(inteval->stack[((hsi*150+4450)*1+lsi)*1]), &(inteval->stack[((hsi*150+8275)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+9025)*1+lsi)*1]), &(inteval->stack[((hsi*150+39610)*1+lsi)*1]), &(inteval->stack[((hsi*150+8125)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+7900)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+3910)*1+lsi)*1]), &(inteval->stack[((hsi*315+7585)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+40960)*1+lsi)*1]), &(inteval->stack[((hsi*315+7900)*1+lsi)*1]), &(inteval->stack[((hsi*225+9025)*1+lsi)*1]), &(inteval->stack[((hsi*225+7360)*1+lsi)*1]),15);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*900+7360)*1+lsi)*1]), &(inteval->stack[((hsi*675+40960)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*450+33085)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1800+21985)*1+lsi)*1]), &(inteval->stack[((hsi*900+7360)*1+lsi)*1]), &(inteval->stack[((hsi*600+8425)*1+lsi)*1]),60);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+1150)*1+lsi)*1]), &(inteval->stack[((hsi*150+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+33085)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+7110)*1+lsi)*1]), &(inteval->stack[((hsi*100+7260)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+6900)*1+lsi)*1]), &(inteval->stack[((hsi*150+7110)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+40960)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+6525)*1+lsi)*1]), &(inteval->stack[((hsi*150+6750)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+41560)*1+lsi)*1]), &(inteval->stack[((hsi*315+6210)*1+lsi)*1]), &(inteval->stack[((hsi*225+6525)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+6210)*1+lsi)*1]), &(inteval->stack[((hsi*675+41560)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]),15);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*1800+20185)*1+lsi)*1]), &(inteval->stack[((hsi*900+6210)*1+lsi)*1]), &(inteval->stack[((hsi*600+40960)*1+lsi)*1]), &(inteval->stack[((hsi*600+33085)*1+lsi)*1]),60);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+5960)*1+lsi)*1]), &(inteval->stack[((hsi*100+6110)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+5750)*1+lsi)*1]), &(inteval->stack[((hsi*150+5960)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+41560)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+5375)*1+lsi)*1]), &(inteval->stack[((hsi*150+5600)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+42160)*1+lsi)*1]), &(inteval->stack[((hsi*315+5060)*1+lsi)*1]), &(inteval->stack[((hsi*225+5375)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+5060)*1+lsi)*1]), &(inteval->stack[((hsi*675+42160)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]),15);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*1800+18385)*1+lsi)*1]), &(inteval->stack[((hsi*900+5060)*1+lsi)*1]), &(inteval->stack[((hsi*600+41560)*1+lsi)*1]), &(inteval->stack[((hsi*600+33085)*1+lsi)*1]),60);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+4810)*1+lsi)*1]), &(inteval->stack[((hsi*100+4960)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+4600)*1+lsi)*1]), &(inteval->stack[((hsi*150+4810)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+42160)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+4225)*1+lsi)*1]), &(inteval->stack[((hsi*150+4450)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+42760)*1+lsi)*1]), &(inteval->stack[((hsi*315+3910)*1+lsi)*1]), &(inteval->stack[((hsi*225+4225)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+3910)*1+lsi)*1]), &(inteval->stack[((hsi*675+42760)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]),15);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*1800+16585)*1+lsi)*1]), &(inteval->stack[((hsi*900+3910)*1+lsi)*1]), &(inteval->stack[((hsi*600+42160)*1+lsi)*1]), &(inteval->stack[((hsi*600+33085)*1+lsi)*1]),60);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+3660)*1+lsi)*1]), &(inteval->stack[((hsi*100+3810)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+3450)*1+lsi)*1]), &(inteval->stack[((hsi*150+3660)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+42760)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+3075)*1+lsi)*1]), &(inteval->stack[((hsi*150+3300)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+43360)*1+lsi)*1]), &(inteval->stack[((hsi*315+2760)*1+lsi)*1]), &(inteval->stack[((hsi*225+3075)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+2760)*1+lsi)*1]), &(inteval->stack[((hsi*675+43360)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]),15);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*1800+14785)*1+lsi)*1]), &(inteval->stack[((hsi*900+2760)*1+lsi)*1]), &(inteval->stack[((hsi*600+42760)*1+lsi)*1]), &(inteval->stack[((hsi*600+33085)*1+lsi)*1]),60);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+2510)*1+lsi)*1]), &(inteval->stack[((hsi*100+2660)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+2300)*1+lsi)*1]), &(inteval->stack[((hsi*150+2510)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+43360)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+1925)*1+lsi)*1]), &(inteval->stack[((hsi*150+2150)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+43960)*1+lsi)*1]), &(inteval->stack[((hsi*315+1610)*1+lsi)*1]), &(inteval->stack[((hsi*225+1925)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+1150)*1+lsi)*1]), &(inteval->stack[((hsi*675+43960)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]),15);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*1800+12985)*1+lsi)*1]), &(inteval->stack[((hsi*900+1150)*1+lsi)*1]), &(inteval->stack[((hsi*600+43360)*1+lsi)*1]), &(inteval->stack[((hsi*600+33085)*1+lsi)*1]),60);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+32785)*1+lsi)*1]), &(inteval->stack[((hsi*150+900)*1+lsi)*1]), &(inteval->stack[((hsi*100+1050)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*210+690)*1+lsi)*1]), &(inteval->stack[((hsi*150+900)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+2050)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*300+32785)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+34435)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]), &(inteval->stack[((hsi*150+540)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+43960)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+43960)*1+lsi)*1]), &(inteval->stack[((hsi*450+34435)*1+lsi)*1]),15);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*1800+11185)*1+lsi)*1]), &(inteval->stack[((hsi*900+0)*1+lsi)*1]), &(inteval->stack[((hsi*600+2050)*1+lsi)*1]), &(inteval->stack[((hsi*600+33085)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1800+11185)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1800+12985)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1800+14785)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1800+16585)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1800+18385)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1800+20185)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1800+21985)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1800+23785)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1800+25585)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1800+27385)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1800+29185)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1800+30985)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
