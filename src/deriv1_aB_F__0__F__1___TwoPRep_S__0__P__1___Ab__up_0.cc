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
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1_aB_F__0__F__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__F__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2350)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__F__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+5650)*1+lsi)*1]), &(inteval->stack[((hsi*150+2100)*1+lsi)*1]), &(inteval->stack[((hsi*100+2250)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+5350)*1+lsi)*1]), &(inteval->stack[((hsi*150+1850)*1+lsi)*1]), &(inteval->stack[((hsi*100+2000)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+5050)*1+lsi)*1]), &(inteval->stack[((hsi*150+1600)*1+lsi)*1]), &(inteval->stack[((hsi*100+1750)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+5950)*1+lsi)*1]), &(inteval->stack[((hsi*100+750)*1+lsi)*1]), &(inteval->stack[((hsi*100+1500)*1+lsi)*1]), &(inteval->stack[((hsi*100+2250)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+6050)*1+lsi)*1]), &(inteval->stack[((hsi*150+600)*1+lsi)*1]), &(inteval->stack[((hsi*150+1350)*1+lsi)*1]), &(inteval->stack[((hsi*150+2100)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+4750)*1+lsi)*1]), &(inteval->stack[((hsi*150+6050)*1+lsi)*1]), &(inteval->stack[((hsi*100+5950)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+6200)*1+lsi)*1]), &(inteval->stack[((hsi*100+500)*1+lsi)*1]), &(inteval->stack[((hsi*100+1250)*1+lsi)*1]), &(inteval->stack[((hsi*100+2000)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+6300)*1+lsi)*1]), &(inteval->stack[((hsi*150+350)*1+lsi)*1]), &(inteval->stack[((hsi*150+1100)*1+lsi)*1]), &(inteval->stack[((hsi*150+1850)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+4450)*1+lsi)*1]), &(inteval->stack[((hsi*150+6300)*1+lsi)*1]), &(inteval->stack[((hsi*100+6200)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+6450)*1+lsi)*1]), &(inteval->stack[((hsi*100+250)*1+lsi)*1]), &(inteval->stack[((hsi*100+1000)*1+lsi)*1]), &(inteval->stack[((hsi*100+1750)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+6550)*1+lsi)*1]), &(inteval->stack[((hsi*150+100)*1+lsi)*1]), &(inteval->stack[((hsi*150+850)*1+lsi)*1]), &(inteval->stack[((hsi*150+1600)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+4150)*1+lsi)*1]), &(inteval->stack[((hsi*150+6550)*1+lsi)*1]), &(inteval->stack[((hsi*100+6450)*1+lsi)*1]), &(inteval->stack[((hsi*100+0)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+3850)*1+lsi)*1]), &(inteval->stack[((hsi*150+1350)*1+lsi)*1]), &(inteval->stack[((hsi*100+1500)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+3550)*1+lsi)*1]), &(inteval->stack[((hsi*150+1100)*1+lsi)*1]), &(inteval->stack[((hsi*100+1250)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+3250)*1+lsi)*1]), &(inteval->stack[((hsi*150+850)*1+lsi)*1]), &(inteval->stack[((hsi*100+1000)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2950)*1+lsi)*1]), &(inteval->stack[((hsi*150+600)*1+lsi)*1]), &(inteval->stack[((hsi*100+750)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2650)*1+lsi)*1]), &(inteval->stack[((hsi*150+350)*1+lsi)*1]), &(inteval->stack[((hsi*100+500)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2350)*1+lsi)*1]), &(inteval->stack[((hsi*150+100)*1+lsi)*1]), &(inteval->stack[((hsi*100+250)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*300+2350)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*300+2650)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*300+2950)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*300+3250)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*300+3550)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*300+3850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*300+4150)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*300+4450)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*300+4750)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*300+5050)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*300+5350)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*300+5650)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
