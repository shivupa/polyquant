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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4200)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+12300)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+12750)*1+lsi)*1]), &(inteval->stack[((hsi*210+3690)*1+lsi)*1]), &(inteval->stack[((hsi*150+4050)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+13200)*1+lsi)*1]), &(inteval->stack[((hsi*280+3200)*1+lsi)*1]), &(inteval->stack[((hsi*210+3690)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*900+11400)*1+lsi)*1]), &(inteval->stack[((hsi*630+13200)*1+lsi)*1]), &(inteval->stack[((hsi*450+12750)*1+lsi)*1]), &(inteval->stack[((hsi*450+12300)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+13830)*1+lsi)*1]), &(inteval->stack[((hsi*210+2410)*1+lsi)*1]), &(inteval->stack[((hsi*150+2770)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+14280)*1+lsi)*1]), &(inteval->stack[((hsi*280+1920)*1+lsi)*1]), &(inteval->stack[((hsi*210+2410)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*900+10500)*1+lsi)*1]), &(inteval->stack[((hsi*630+14280)*1+lsi)*1]), &(inteval->stack[((hsi*450+13830)*1+lsi)*1]), &(inteval->stack[((hsi*450+12300)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+14910)*1+lsi)*1]), &(inteval->stack[((hsi*210+980)*1+lsi)*1]), &(inteval->stack[((hsi*150+1490)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+15360)*1+lsi)*1]), &(inteval->stack[((hsi*280+490)*1+lsi)*1]), &(inteval->stack[((hsi*210+980)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*900+9600)*1+lsi)*1]), &(inteval->stack[((hsi*630+15360)*1+lsi)*1]), &(inteval->stack[((hsi*450+14910)*1+lsi)*1]), &(inteval->stack[((hsi*450+12300)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+15990)*1+lsi)*1]), &(inteval->stack[((hsi*210+3480)*1+lsi)*1]), &(inteval->stack[((hsi*150+3900)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+16440)*1+lsi)*1]), &(inteval->stack[((hsi*280+2920)*1+lsi)*1]), &(inteval->stack[((hsi*210+3480)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+6000)*1+lsi)*1]), &(inteval->stack[((hsi*630+16440)*1+lsi)*1]), &(inteval->stack[((hsi*450+15990)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+17070)*1+lsi)*1]), &(inteval->stack[((hsi*210+2200)*1+lsi)*1]), &(inteval->stack[((hsi*150+2620)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+17520)*1+lsi)*1]), &(inteval->stack[((hsi*280+1640)*1+lsi)*1]), &(inteval->stack[((hsi*210+2200)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+5100)*1+lsi)*1]), &(inteval->stack[((hsi*630+17520)*1+lsi)*1]), &(inteval->stack[((hsi*450+17070)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+18150)*1+lsi)*1]), &(inteval->stack[((hsi*210+770)*1+lsi)*1]), &(inteval->stack[((hsi*150+1340)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+18600)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*210+770)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+4200)*1+lsi)*1]), &(inteval->stack[((hsi*630+18600)*1+lsi)*1]), &(inteval->stack[((hsi*450+18150)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*210+3480)*1+lsi)*1]), &(inteval->stack[((hsi*210+3690)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+3480)*1+lsi)*1]), &(inteval->stack[((hsi*150+3900)*1+lsi)*1]), &(inteval->stack[((hsi*150+4050)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+3630)*1+lsi)*1]), &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*150+3480)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+19440)*1+lsi)*1]), &(inteval->stack[((hsi*280+2920)*1+lsi)*1]), &(inteval->stack[((hsi*280+3200)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+2920)*1+lsi)*1]), &(inteval->stack[((hsi*280+19440)*1+lsi)*1]), &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*900+8700)*1+lsi)*1]), &(inteval->stack[((hsi*630+2920)*1+lsi)*1]), &(inteval->stack[((hsi*450+3630)*1+lsi)*1]), &(inteval->stack[((hsi*450+12300)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*210+2200)*1+lsi)*1]), &(inteval->stack[((hsi*210+2410)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+2200)*1+lsi)*1]), &(inteval->stack[((hsi*150+2620)*1+lsi)*1]), &(inteval->stack[((hsi*150+2770)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+2350)*1+lsi)*1]), &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*150+2200)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+19440)*1+lsi)*1]), &(inteval->stack[((hsi*280+1640)*1+lsi)*1]), &(inteval->stack[((hsi*280+1920)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+1640)*1+lsi)*1]), &(inteval->stack[((hsi*280+19440)*1+lsi)*1]), &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*900+7800)*1+lsi)*1]), &(inteval->stack[((hsi*630+1640)*1+lsi)*1]), &(inteval->stack[((hsi*450+2350)*1+lsi)*1]), &(inteval->stack[((hsi*450+12300)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*210+770)*1+lsi)*1]), &(inteval->stack[((hsi*210+980)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+770)*1+lsi)*1]), &(inteval->stack[((hsi*150+1340)*1+lsi)*1]), &(inteval->stack[((hsi*150+1490)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+19440)*1+lsi)*1]), &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*150+770)*1+lsi)*1]), &(inteval->stack[((hsi*150+1190)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+770)*1+lsi)*1]), &(inteval->stack[((hsi*280+210)*1+lsi)*1]), &(inteval->stack[((hsi*280+490)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+19890)*1+lsi)*1]), &(inteval->stack[((hsi*280+770)*1+lsi)*1]), &(inteval->stack[((hsi*210+19230)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]),10);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*900+6900)*1+lsi)*1]), &(inteval->stack[((hsi*630+19890)*1+lsi)*1]), &(inteval->stack[((hsi*450+19440)*1+lsi)*1]), &(inteval->stack[((hsi*450+12300)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*900+4200)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*900+5100)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*900+6000)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*900+6900)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*900+7800)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*900+8700)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*900+9600)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*900+10500)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*900+11400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
