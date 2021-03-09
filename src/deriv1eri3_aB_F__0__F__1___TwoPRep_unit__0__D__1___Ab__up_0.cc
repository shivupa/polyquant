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
#include <CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3010)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+8410)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*300+8710)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]), &(inteval->stack[((hsi*100+2910)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+9010)*1+lsi)*1]), &(inteval->stack[((hsi*210+2550)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*600+7810)*1+lsi)*1]), &(inteval->stack[((hsi*450+9010)*1+lsi)*1]), &(inteval->stack[((hsi*300+8710)*1+lsi)*1]), &(inteval->stack[((hsi*300+8410)*1+lsi)*1]),10);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*300+9460)*1+lsi)*1]), &(inteval->stack[((hsi*150+2300)*1+lsi)*1]), &(inteval->stack[((hsi*100+2450)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+9760)*1+lsi)*1]), &(inteval->stack[((hsi*210+2090)*1+lsi)*1]), &(inteval->stack[((hsi*150+2300)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*600+7210)*1+lsi)*1]), &(inteval->stack[((hsi*450+9760)*1+lsi)*1]), &(inteval->stack[((hsi*300+9460)*1+lsi)*1]), &(inteval->stack[((hsi*300+8410)*1+lsi)*1]),10);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*300+10210)*1+lsi)*1]), &(inteval->stack[((hsi*150+1740)*1+lsi)*1]), &(inteval->stack[((hsi*100+1990)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+10510)*1+lsi)*1]), &(inteval->stack[((hsi*210+1530)*1+lsi)*1]), &(inteval->stack[((hsi*150+1740)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*600+6610)*1+lsi)*1]), &(inteval->stack[((hsi*450+10510)*1+lsi)*1]), &(inteval->stack[((hsi*300+10210)*1+lsi)*1]), &(inteval->stack[((hsi*300+8410)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]), &(inteval->stack[((hsi*150+2760)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+2760)*1+lsi)*1]), &(inteval->stack[((hsi*100+1280)*1+lsi)*1]), &(inteval->stack[((hsi*100+2910)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*300+11110)*1+lsi)*1]), &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*100+2760)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+2760)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]), &(inteval->stack[((hsi*210+2550)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+11410)*1+lsi)*1]), &(inteval->stack[((hsi*210+2760)*1+lsi)*1]), &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*600+6010)*1+lsi)*1]), &(inteval->stack[((hsi*450+11410)*1+lsi)*1]), &(inteval->stack[((hsi*300+11110)*1+lsi)*1]), &(inteval->stack[((hsi*300+8410)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*150+670)*1+lsi)*1]), &(inteval->stack[((hsi*150+2300)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+2550)*1+lsi)*1]), &(inteval->stack[((hsi*100+820)*1+lsi)*1]), &(inteval->stack[((hsi*100+2450)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*300+2650)*1+lsi)*1]), &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*100+2550)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+2300)*1+lsi)*1]), &(inteval->stack[((hsi*210+460)*1+lsi)*1]), &(inteval->stack[((hsi*210+2090)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+11860)*1+lsi)*1]), &(inteval->stack[((hsi*210+2300)*1+lsi)*1]), &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*600+5410)*1+lsi)*1]), &(inteval->stack[((hsi*450+11860)*1+lsi)*1]), &(inteval->stack[((hsi*300+2650)*1+lsi)*1]), &(inteval->stack[((hsi*300+8410)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*150+210)*1+lsi)*1]), &(inteval->stack[((hsi*150+1740)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*100+2090)*1+lsi)*1]), &(inteval->stack[((hsi*100+360)*1+lsi)*1]), &(inteval->stack[((hsi*100+1990)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*300+2190)*1+lsi)*1]), &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*100+2090)*1+lsi)*1]), &(inteval->stack[((hsi*100+1890)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+1740)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+1530)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+12310)*1+lsi)*1]), &(inteval->stack[((hsi*210+1740)*1+lsi)*1]), &(inteval->stack[((hsi*150+10960)*1+lsi)*1]), &(inteval->stack[((hsi*150+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*600+4810)*1+lsi)*1]), &(inteval->stack[((hsi*450+12310)*1+lsi)*1]), &(inteval->stack[((hsi*300+2190)*1+lsi)*1]), &(inteval->stack[((hsi*300+8410)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+1380)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]), &(inteval->stack[((hsi*100+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+1680)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+4210)*1+lsi)*1]), &(inteval->stack[((hsi*450+1680)*1+lsi)*1]), &(inteval->stack[((hsi*300+1380)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+920)*1+lsi)*1]), &(inteval->stack[((hsi*150+670)*1+lsi)*1]), &(inteval->stack[((hsi*100+820)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+12760)*1+lsi)*1]), &(inteval->stack[((hsi*210+460)*1+lsi)*1]), &(inteval->stack[((hsi*150+670)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+3610)*1+lsi)*1]), &(inteval->stack[((hsi*450+12760)*1+lsi)*1]), &(inteval->stack[((hsi*300+920)*1+lsi)*1]),10);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*300+460)*1+lsi)*1]), &(inteval->stack[((hsi*150+210)*1+lsi)*1]), &(inteval->stack[((hsi*100+360)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+13210)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+210)*1+lsi)*1]),10);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*600+3010)*1+lsi)*1]), &(inteval->stack[((hsi*450+13210)*1+lsi)*1]), &(inteval->stack[((hsi*300+460)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*600+3010)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*600+3610)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*600+4210)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*600+4810)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*600+5410)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*600+6010)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*600+6610)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*600+7210)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*600+7810)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
