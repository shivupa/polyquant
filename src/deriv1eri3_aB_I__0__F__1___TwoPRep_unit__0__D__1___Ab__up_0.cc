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
#include <CR_DerivGaussP1InBra_aB_I__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8428)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+23548)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*840+24388)*1+lsi)*1]), &(inteval->stack[((hsi*420+7728)*1+lsi)*1]), &(inteval->stack[((hsi*280+8148)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+25228)*1+lsi)*1]), &(inteval->stack[((hsi*588+7140)*1+lsi)*1]), &(inteval->stack[((hsi*420+7728)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*1680+21868)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25228)*1+lsi)*1]), &(inteval->stack[((hsi*840+24388)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]),28);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*840+26488)*1+lsi)*1]), &(inteval->stack[((hsi*420+6440)*1+lsi)*1]), &(inteval->stack[((hsi*280+6860)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+27328)*1+lsi)*1]), &(inteval->stack[((hsi*588+5852)*1+lsi)*1]), &(inteval->stack[((hsi*420+6440)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*1680+20188)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27328)*1+lsi)*1]), &(inteval->stack[((hsi*840+26488)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]),28);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*840+28588)*1+lsi)*1]), &(inteval->stack[((hsi*420+4872)*1+lsi)*1]), &(inteval->stack[((hsi*280+5572)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+29428)*1+lsi)*1]), &(inteval->stack[((hsi*588+4284)*1+lsi)*1]), &(inteval->stack[((hsi*420+4872)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*1680+18508)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29428)*1+lsi)*1]), &(inteval->stack[((hsi*840+28588)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*420+3164)*1+lsi)*1]), &(inteval->stack[((hsi*420+7728)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+7728)*1+lsi)*1]), &(inteval->stack[((hsi*280+3584)*1+lsi)*1]), &(inteval->stack[((hsi*280+8148)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*840+31108)*1+lsi)*1]), &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*280+7728)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+7728)*1+lsi)*1]), &(inteval->stack[((hsi*588+2576)*1+lsi)*1]), &(inteval->stack[((hsi*588+7140)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*1260+31948)*1+lsi)*1]), &(inteval->stack[((hsi*588+7728)*1+lsi)*1]), &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*1680+16828)*1+lsi)*1]), &(inteval->stack[((hsi*1260+31948)*1+lsi)*1]), &(inteval->stack[((hsi*840+31108)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*420+1876)*1+lsi)*1]), &(inteval->stack[((hsi*420+6440)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+7140)*1+lsi)*1]), &(inteval->stack[((hsi*280+2296)*1+lsi)*1]), &(inteval->stack[((hsi*280+6860)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*840+7420)*1+lsi)*1]), &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*280+7140)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+6440)*1+lsi)*1]), &(inteval->stack[((hsi*588+1288)*1+lsi)*1]), &(inteval->stack[((hsi*588+5852)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*1260+33208)*1+lsi)*1]), &(inteval->stack[((hsi*588+6440)*1+lsi)*1]), &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*1680+15148)*1+lsi)*1]), &(inteval->stack[((hsi*1260+33208)*1+lsi)*1]), &(inteval->stack[((hsi*840+7420)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*420+4872)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_I__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+5852)*1+lsi)*1]), &(inteval->stack[((hsi*280+1008)*1+lsi)*1]), &(inteval->stack[((hsi*280+5572)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*840+6132)*1+lsi)*1]), &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*280+5852)*1+lsi)*1]), &(inteval->stack[((hsi*280+5292)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*588+4872)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+4284)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*1260+34468)*1+lsi)*1]), &(inteval->stack[((hsi*588+4872)*1+lsi)*1]), &(inteval->stack[((hsi*420+30688)*1+lsi)*1]), &(inteval->stack[((hsi*420+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*1680+13468)*1+lsi)*1]), &(inteval->stack[((hsi*1260+34468)*1+lsi)*1]), &(inteval->stack[((hsi*840+6132)*1+lsi)*1]), &(inteval->stack[((hsi*840+23548)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+3864)*1+lsi)*1]), &(inteval->stack[((hsi*420+3164)*1+lsi)*1]), &(inteval->stack[((hsi*280+3584)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+4704)*1+lsi)*1]), &(inteval->stack[((hsi*588+2576)*1+lsi)*1]), &(inteval->stack[((hsi*420+3164)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+11788)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4704)*1+lsi)*1]), &(inteval->stack[((hsi*840+3864)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+2576)*1+lsi)*1]), &(inteval->stack[((hsi*420+1876)*1+lsi)*1]), &(inteval->stack[((hsi*280+2296)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+35728)*1+lsi)*1]), &(inteval->stack[((hsi*588+1288)*1+lsi)*1]), &(inteval->stack[((hsi*420+1876)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+10108)*1+lsi)*1]), &(inteval->stack[((hsi*1260+35728)*1+lsi)*1]), &(inteval->stack[((hsi*840+2576)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+1288)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]), &(inteval->stack[((hsi*280+1008)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+36988)*1+lsi)*1]), &(inteval->stack[((hsi*588+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+588)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+8428)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36988)*1+lsi)*1]), &(inteval->stack[((hsi*840+1288)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1680+8428)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1680+10108)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1680+11788)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1680+13468)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1680+15148)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1680+16828)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1680+18508)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1680+20188)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1680+21868)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
