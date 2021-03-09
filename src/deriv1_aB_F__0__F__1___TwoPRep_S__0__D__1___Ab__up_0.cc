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
#include <deriv1_aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4390)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+11590)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+11890)*1+lsi)*1]), &(inteval->stack[((hsi*150+4140)*1+lsi)*1]), &(inteval->stack[((hsi*100+4290)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+12190)*1+lsi)*1]), &(inteval->stack[((hsi*210+3930)*1+lsi)*1]), &(inteval->stack[((hsi*150+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*600+10990)*1+lsi)*1]), &(inteval->stack[((hsi*450+12190)*1+lsi)*1]), &(inteval->stack[((hsi*300+11890)*1+lsi)*1]), &(inteval->stack[((hsi*300+11590)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+12640)*1+lsi)*1]), &(inteval->stack[((hsi*150+3680)*1+lsi)*1]), &(inteval->stack[((hsi*100+3830)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+12940)*1+lsi)*1]), &(inteval->stack[((hsi*210+3470)*1+lsi)*1]), &(inteval->stack[((hsi*150+3680)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*600+10390)*1+lsi)*1]), &(inteval->stack[((hsi*450+12940)*1+lsi)*1]), &(inteval->stack[((hsi*300+12640)*1+lsi)*1]), &(inteval->stack[((hsi*300+11590)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+13390)*1+lsi)*1]), &(inteval->stack[((hsi*150+3120)*1+lsi)*1]), &(inteval->stack[((hsi*100+3370)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+13690)*1+lsi)*1]), &(inteval->stack[((hsi*210+2910)*1+lsi)*1]), &(inteval->stack[((hsi*150+3120)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*600+9790)*1+lsi)*1]), &(inteval->stack[((hsi*450+13690)*1+lsi)*1]), &(inteval->stack[((hsi*300+13390)*1+lsi)*1]), &(inteval->stack[((hsi*300+11590)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*150+2050)*1+lsi)*1]), &(inteval->stack[((hsi*150+2510)*1+lsi)*1]), &(inteval->stack[((hsi*150+4140)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+4140)*1+lsi)*1]), &(inteval->stack[((hsi*100+2200)*1+lsi)*1]), &(inteval->stack[((hsi*100+2660)*1+lsi)*1]), &(inteval->stack[((hsi*100+4290)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+14290)*1+lsi)*1]), &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*100+4140)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+4140)*1+lsi)*1]), &(inteval->stack[((hsi*210+1840)*1+lsi)*1]), &(inteval->stack[((hsi*210+2300)*1+lsi)*1]), &(inteval->stack[((hsi*210+3930)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+14590)*1+lsi)*1]), &(inteval->stack[((hsi*210+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*600+9190)*1+lsi)*1]), &(inteval->stack[((hsi*450+14590)*1+lsi)*1]), &(inteval->stack[((hsi*300+14290)*1+lsi)*1]), &(inteval->stack[((hsi*300+11590)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]), &(inteval->stack[((hsi*150+1590)*1+lsi)*1]), &(inteval->stack[((hsi*150+3680)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+3930)*1+lsi)*1]), &(inteval->stack[((hsi*100+1280)*1+lsi)*1]), &(inteval->stack[((hsi*100+1740)*1+lsi)*1]), &(inteval->stack[((hsi*100+3830)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+4030)*1+lsi)*1]), &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*100+3930)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+3680)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]), &(inteval->stack[((hsi*210+1380)*1+lsi)*1]), &(inteval->stack[((hsi*210+3470)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+15040)*1+lsi)*1]), &(inteval->stack[((hsi*210+3680)*1+lsi)*1]), &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*600+8590)*1+lsi)*1]), &(inteval->stack[((hsi*450+15040)*1+lsi)*1]), &(inteval->stack[((hsi*300+4030)*1+lsi)*1]), &(inteval->stack[((hsi*300+11590)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*150+210)*1+lsi)*1]), &(inteval->stack[((hsi*150+670)*1+lsi)*1]), &(inteval->stack[((hsi*150+3120)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+3470)*1+lsi)*1]), &(inteval->stack[((hsi*100+360)*1+lsi)*1]), &(inteval->stack[((hsi*100+820)*1+lsi)*1]), &(inteval->stack[((hsi*100+3370)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+3570)*1+lsi)*1]), &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*100+3470)*1+lsi)*1]), &(inteval->stack[((hsi*100+3270)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+3120)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+460)*1+lsi)*1]), &(inteval->stack[((hsi*210+2910)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+15490)*1+lsi)*1]), &(inteval->stack[((hsi*210+3120)*1+lsi)*1]), &(inteval->stack[((hsi*150+14140)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*600+7990)*1+lsi)*1]), &(inteval->stack[((hsi*450+15490)*1+lsi)*1]), &(inteval->stack[((hsi*300+3570)*1+lsi)*1]), &(inteval->stack[((hsi*300+11590)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2760)*1+lsi)*1]), &(inteval->stack[((hsi*150+2510)*1+lsi)*1]), &(inteval->stack[((hsi*100+2660)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+3060)*1+lsi)*1]), &(inteval->stack[((hsi*210+2300)*1+lsi)*1]), &(inteval->stack[((hsi*150+2510)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+7390)*1+lsi)*1]), &(inteval->stack[((hsi*450+3060)*1+lsi)*1]), &(inteval->stack[((hsi*300+2760)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+2300)*1+lsi)*1]), &(inteval->stack[((hsi*150+2050)*1+lsi)*1]), &(inteval->stack[((hsi*100+2200)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+15940)*1+lsi)*1]), &(inteval->stack[((hsi*210+1840)*1+lsi)*1]), &(inteval->stack[((hsi*150+2050)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+5590)*1+lsi)*1]), &(inteval->stack[((hsi*450+15940)*1+lsi)*1]), &(inteval->stack[((hsi*300+2300)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+1840)*1+lsi)*1]), &(inteval->stack[((hsi*150+1590)*1+lsi)*1]), &(inteval->stack[((hsi*100+1740)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+16390)*1+lsi)*1]), &(inteval->stack[((hsi*210+1380)*1+lsi)*1]), &(inteval->stack[((hsi*150+1590)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+6790)*1+lsi)*1]), &(inteval->stack[((hsi*450+16390)*1+lsi)*1]), &(inteval->stack[((hsi*300+1840)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+1380)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]), &(inteval->stack[((hsi*100+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+16840)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+4990)*1+lsi)*1]), &(inteval->stack[((hsi*450+16840)*1+lsi)*1]), &(inteval->stack[((hsi*300+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+920)*1+lsi)*1]), &(inteval->stack[((hsi*150+670)*1+lsi)*1]), &(inteval->stack[((hsi*100+820)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+17290)*1+lsi)*1]), &(inteval->stack[((hsi*210+460)*1+lsi)*1]), &(inteval->stack[((hsi*150+670)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+6190)*1+lsi)*1]), &(inteval->stack[((hsi*450+17290)*1+lsi)*1]), &(inteval->stack[((hsi*300+920)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+460)*1+lsi)*1]), &(inteval->stack[((hsi*150+210)*1+lsi)*1]), &(inteval->stack[((hsi*100+360)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+17740)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+210)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+4390)*1+lsi)*1]), &(inteval->stack[((hsi*450+17740)*1+lsi)*1]), &(inteval->stack[((hsi*300+460)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*600+4390)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*600+4990)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*600+5590)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*600+6190)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*600+6790)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*600+7390)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*600+7990)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*600+8590)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*600+9190)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*600+9790)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*600+10390)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*600+10990)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
