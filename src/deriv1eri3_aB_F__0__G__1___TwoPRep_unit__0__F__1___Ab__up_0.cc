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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gf001.h>
#include <HRRPart1bra0ket0gf010.h>
#include <HRRPart1bra0ket0gf100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+20140)*1+lsi)*1]), &(inteval->stack[((hsi*210+4130)*1+lsi)*1]), &(inteval->stack[((hsi*150+4490)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+20590)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]), &(inteval->stack[((hsi*210+4130)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+21220)*1+lsi)*1]), &(inteval->stack[((hsi*630+20590)*1+lsi)*1]), &(inteval->stack[((hsi*450+20140)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*280+6000)*1+lsi)*1]), &(inteval->stack[((hsi*210+6280)*1+lsi)*1]), &(inteval->stack[((hsi*210+4130)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*210+6280)*1+lsi)*1]), &(inteval->stack[((hsi*150+6490)*1+lsi)*1]), &(inteval->stack[((hsi*150+4490)*1+lsi)*1]),10);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*900+23200)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*450+20140)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*360+5640)*1+lsi)*1]), &(inteval->stack[((hsi*280+6000)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]),10);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1260+24940)*1+lsi)*1]), &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*630+20590)*1+lsi)*1]),10);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*1500+18640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+24940)*1+lsi)*1]), &(inteval->stack[((hsi*900+23200)*1+lsi)*1]), &(inteval->stack[((hsi*900+21220)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*280+2360)*1+lsi)*1]), &(inteval->stack[((hsi*210+2640)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*210+2640)*1+lsi)*1]), &(inteval->stack[((hsi*150+2850)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+5640)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*450+22750)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*360+2000)*1+lsi)*1]), &(inteval->stack[((hsi*280+2360)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+26200)*1+lsi)*1]), &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+9640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26200)*1+lsi)*1]), &(inteval->stack[((hsi*900+5640)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1500+14140)*1+lsi)*1]), &(inteval->stack[((hsi*1500+9640)*1+lsi)*1]), &(inteval->stack[((hsi*1500+18640)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*280+5000)*1+lsi)*1]), &(inteval->stack[((hsi*210+5280)*1+lsi)*1]), &(inteval->stack[((hsi*210+4130)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*210+5280)*1+lsi)*1]), &(inteval->stack[((hsi*150+5490)*1+lsi)*1]), &(inteval->stack[((hsi*150+4490)*1+lsi)*1]),10);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*900+2000)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*450+20140)*1+lsi)*1]),10);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*360+4640)*1+lsi)*1]), &(inteval->stack[((hsi*280+5000)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]),10);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1260+27460)*1+lsi)*1]), &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*630+20590)*1+lsi)*1]),10);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*1500+17140)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27460)*1+lsi)*1]), &(inteval->stack[((hsi*900+2000)*1+lsi)*1]), &(inteval->stack[((hsi*900+21220)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*280+1360)*1+lsi)*1]), &(inteval->stack[((hsi*210+1640)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*210+1640)*1+lsi)*1]), &(inteval->stack[((hsi*150+1850)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+4640)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*450+22750)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*280+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+28720)*1+lsi)*1]), &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+8140)*1+lsi)*1]), &(inteval->stack[((hsi*1260+28720)*1+lsi)*1]), &(inteval->stack[((hsi*900+4640)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1500+12640)*1+lsi)*1]), &(inteval->stack[((hsi*1500+8140)*1+lsi)*1]), &(inteval->stack[((hsi*1500+17140)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*280+3360)*1+lsi)*1]), &(inteval->stack[((hsi*210+3920)*1+lsi)*1]), &(inteval->stack[((hsi*210+4130)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*210+3920)*1+lsi)*1]), &(inteval->stack[((hsi*150+4340)*1+lsi)*1]), &(inteval->stack[((hsi*150+4490)*1+lsi)*1]),10);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*900+1000)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*450+20140)*1+lsi)*1]),10);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*360+3000)*1+lsi)*1]), &(inteval->stack[((hsi*280+3360)*1+lsi)*1]), &(inteval->stack[((hsi*280+3640)*1+lsi)*1]),10);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1260+2900)*1+lsi)*1]), &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*630+20590)*1+lsi)*1]),10);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*1500+15640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+2900)*1+lsi)*1]), &(inteval->stack[((hsi*900+1000)*1+lsi)*1]), &(inteval->stack[((hsi*900+21220)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]), &(inteval->stack[((hsi*210+640)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+22750)*1+lsi)*1]), &(inteval->stack[((hsi*210+640)*1+lsi)*1]), &(inteval->stack[((hsi*150+850)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+20140)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]), &(inteval->stack[((hsi*450+22750)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*360+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+360)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+29980)*1+lsi)*1]), &(inteval->stack[((hsi*840+24100)*1+lsi)*1]), &(inteval->stack[((hsi*630+22120)*1+lsi)*1]),10);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*1500+6640)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29980)*1+lsi)*1]), &(inteval->stack[((hsi*900+20140)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1500+11140)*1+lsi)*1]), &(inteval->stack[((hsi*1500+6640)*1+lsi)*1]), &(inteval->stack[((hsi*1500+15640)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1500+6640)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1500+8140)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1500+9640)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1500+11140)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1500+12640)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1500+14140)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1500+15640)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1500+17140)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1500+18640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
