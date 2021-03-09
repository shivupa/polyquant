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
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5590)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+16930)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+17560)*1+lsi)*1]), &(inteval->stack[((hsi*280+4890)*1+lsi)*1]), &(inteval->stack[((hsi*210+5380)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+18190)*1+lsi)*1]), &(inteval->stack[((hsi*360+4250)*1+lsi)*1]), &(inteval->stack[((hsi*280+4890)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1260+15670)*1+lsi)*1]), &(inteval->stack[((hsi*840+18190)*1+lsi)*1]), &(inteval->stack[((hsi*630+17560)*1+lsi)*1]), &(inteval->stack[((hsi*630+16930)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+19030)*1+lsi)*1]), &(inteval->stack[((hsi*280+3190)*1+lsi)*1]), &(inteval->stack[((hsi*210+3680)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+19660)*1+lsi)*1]), &(inteval->stack[((hsi*360+2550)*1+lsi)*1]), &(inteval->stack[((hsi*280+3190)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1260+14410)*1+lsi)*1]), &(inteval->stack[((hsi*840+19660)*1+lsi)*1]), &(inteval->stack[((hsi*630+19030)*1+lsi)*1]), &(inteval->stack[((hsi*630+16930)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+20500)*1+lsi)*1]), &(inteval->stack[((hsi*280+1280)*1+lsi)*1]), &(inteval->stack[((hsi*210+1980)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+21130)*1+lsi)*1]), &(inteval->stack[((hsi*360+640)*1+lsi)*1]), &(inteval->stack[((hsi*280+1280)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1260+13150)*1+lsi)*1]), &(inteval->stack[((hsi*840+21130)*1+lsi)*1]), &(inteval->stack[((hsi*630+20500)*1+lsi)*1]), &(inteval->stack[((hsi*630+16930)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+21970)*1+lsi)*1]), &(inteval->stack[((hsi*280+4610)*1+lsi)*1]), &(inteval->stack[((hsi*210+5170)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+22600)*1+lsi)*1]), &(inteval->stack[((hsi*360+3890)*1+lsi)*1]), &(inteval->stack[((hsi*280+4610)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+8110)*1+lsi)*1]), &(inteval->stack[((hsi*840+22600)*1+lsi)*1]), &(inteval->stack[((hsi*630+21970)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+23440)*1+lsi)*1]), &(inteval->stack[((hsi*280+2910)*1+lsi)*1]), &(inteval->stack[((hsi*210+3470)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+24070)*1+lsi)*1]), &(inteval->stack[((hsi*360+2190)*1+lsi)*1]), &(inteval->stack[((hsi*280+2910)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+6850)*1+lsi)*1]), &(inteval->stack[((hsi*840+24070)*1+lsi)*1]), &(inteval->stack[((hsi*630+23440)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+24910)*1+lsi)*1]), &(inteval->stack[((hsi*280+1000)*1+lsi)*1]), &(inteval->stack[((hsi*210+1770)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+25540)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*280+1000)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+5590)*1+lsi)*1]), &(inteval->stack[((hsi*840+25540)*1+lsi)*1]), &(inteval->stack[((hsi*630+24910)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*280+4610)*1+lsi)*1]), &(inteval->stack[((hsi*280+4890)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+4610)*1+lsi)*1]), &(inteval->stack[((hsi*210+5170)*1+lsi)*1]), &(inteval->stack[((hsi*210+5380)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+4820)*1+lsi)*1]), &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*210+4610)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+26660)*1+lsi)*1]), &(inteval->stack[((hsi*360+3890)*1+lsi)*1]), &(inteval->stack[((hsi*360+4250)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*840+3890)*1+lsi)*1]), &(inteval->stack[((hsi*360+26660)*1+lsi)*1]), &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*1260+11890)*1+lsi)*1]), &(inteval->stack[((hsi*840+3890)*1+lsi)*1]), &(inteval->stack[((hsi*630+4820)*1+lsi)*1]), &(inteval->stack[((hsi*630+16930)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*280+2910)*1+lsi)*1]), &(inteval->stack[((hsi*280+3190)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+2910)*1+lsi)*1]), &(inteval->stack[((hsi*210+3470)*1+lsi)*1]), &(inteval->stack[((hsi*210+3680)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+3120)*1+lsi)*1]), &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*210+2910)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+26660)*1+lsi)*1]), &(inteval->stack[((hsi*360+2190)*1+lsi)*1]), &(inteval->stack[((hsi*360+2550)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*840+2190)*1+lsi)*1]), &(inteval->stack[((hsi*360+26660)*1+lsi)*1]), &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*1260+10630)*1+lsi)*1]), &(inteval->stack[((hsi*840+2190)*1+lsi)*1]), &(inteval->stack[((hsi*630+3120)*1+lsi)*1]), &(inteval->stack[((hsi*630+16930)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*280+1000)*1+lsi)*1]), &(inteval->stack[((hsi*280+1280)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+1000)*1+lsi)*1]), &(inteval->stack[((hsi*210+1770)*1+lsi)*1]), &(inteval->stack[((hsi*210+1980)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+26660)*1+lsi)*1]), &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*210+1000)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*360+280)*1+lsi)*1]), &(inteval->stack[((hsi*360+640)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*840+27290)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*280+26380)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]),10);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*1260+9370)*1+lsi)*1]), &(inteval->stack[((hsi*840+27290)*1+lsi)*1]), &(inteval->stack[((hsi*630+26660)*1+lsi)*1]), &(inteval->stack[((hsi*630+16930)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1260+5590)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1260+6850)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1260+8110)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1260+9370)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1260+10630)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1260+11890)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1260+13150)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1260+14410)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1260+15670)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
