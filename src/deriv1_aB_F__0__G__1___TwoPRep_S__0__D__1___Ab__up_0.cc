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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_F__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6120)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+16920)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+17370)*1+lsi)*1]), &(inteval->stack[((hsi*210+5760)*1+lsi)*1]), &(inteval->stack[((hsi*150+5970)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+17820)*1+lsi)*1]), &(inteval->stack[((hsi*280+5480)*1+lsi)*1]), &(inteval->stack[((hsi*210+5760)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*900+16020)*1+lsi)*1]), &(inteval->stack[((hsi*630+17820)*1+lsi)*1]), &(inteval->stack[((hsi*450+17370)*1+lsi)*1]), &(inteval->stack[((hsi*450+16920)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+18450)*1+lsi)*1]), &(inteval->stack[((hsi*210+5120)*1+lsi)*1]), &(inteval->stack[((hsi*150+5330)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+18900)*1+lsi)*1]), &(inteval->stack[((hsi*280+4840)*1+lsi)*1]), &(inteval->stack[((hsi*210+5120)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*900+15120)*1+lsi)*1]), &(inteval->stack[((hsi*630+18900)*1+lsi)*1]), &(inteval->stack[((hsi*450+18450)*1+lsi)*1]), &(inteval->stack[((hsi*450+16920)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+19530)*1+lsi)*1]), &(inteval->stack[((hsi*210+4330)*1+lsi)*1]), &(inteval->stack[((hsi*150+4690)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+19980)*1+lsi)*1]), &(inteval->stack[((hsi*280+4050)*1+lsi)*1]), &(inteval->stack[((hsi*210+4330)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*900+14220)*1+lsi)*1]), &(inteval->stack[((hsi*630+19980)*1+lsi)*1]), &(inteval->stack[((hsi*450+19530)*1+lsi)*1]), &(inteval->stack[((hsi*450+16920)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]), &(inteval->stack[((hsi*210+3480)*1+lsi)*1]), &(inteval->stack[((hsi*210+5760)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5760)*1+lsi)*1]), &(inteval->stack[((hsi*150+1770)*1+lsi)*1]), &(inteval->stack[((hsi*150+3690)*1+lsi)*1]), &(inteval->stack[((hsi*150+5970)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+20820)*1+lsi)*1]), &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*150+5760)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+5760)*1+lsi)*1]), &(inteval->stack[((hsi*280+1280)*1+lsi)*1]), &(inteval->stack[((hsi*280+3200)*1+lsi)*1]), &(inteval->stack[((hsi*280+5480)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*630+21270)*1+lsi)*1]), &(inteval->stack[((hsi*280+5760)*1+lsi)*1]), &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*900+13320)*1+lsi)*1]), &(inteval->stack[((hsi*630+21270)*1+lsi)*1]), &(inteval->stack[((hsi*450+20820)*1+lsi)*1]), &(inteval->stack[((hsi*450+16920)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]), &(inteval->stack[((hsi*210+2840)*1+lsi)*1]), &(inteval->stack[((hsi*210+5120)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5480)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]), &(inteval->stack[((hsi*150+3050)*1+lsi)*1]), &(inteval->stack[((hsi*150+5330)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+5630)*1+lsi)*1]), &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*150+5480)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+5120)*1+lsi)*1]), &(inteval->stack[((hsi*280+640)*1+lsi)*1]), &(inteval->stack[((hsi*280+2560)*1+lsi)*1]), &(inteval->stack[((hsi*280+4840)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*630+21900)*1+lsi)*1]), &(inteval->stack[((hsi*280+5120)*1+lsi)*1]), &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*900+12420)*1+lsi)*1]), &(inteval->stack[((hsi*630+21900)*1+lsi)*1]), &(inteval->stack[((hsi*450+5630)*1+lsi)*1]), &(inteval->stack[((hsi*450+16920)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]), &(inteval->stack[((hsi*210+2200)*1+lsi)*1]), &(inteval->stack[((hsi*210+4330)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+4840)*1+lsi)*1]), &(inteval->stack[((hsi*150+490)*1+lsi)*1]), &(inteval->stack[((hsi*150+2410)*1+lsi)*1]), &(inteval->stack[((hsi*150+4690)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+4990)*1+lsi)*1]), &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*150+4840)*1+lsi)*1]), &(inteval->stack[((hsi*150+4540)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*280+4330)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*280+1920)*1+lsi)*1]), &(inteval->stack[((hsi*280+4050)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*630+22530)*1+lsi)*1]), &(inteval->stack[((hsi*280+4330)*1+lsi)*1]), &(inteval->stack[((hsi*210+20610)*1+lsi)*1]), &(inteval->stack[((hsi*210+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*900+11520)*1+lsi)*1]), &(inteval->stack[((hsi*630+22530)*1+lsi)*1]), &(inteval->stack[((hsi*450+4990)*1+lsi)*1]), &(inteval->stack[((hsi*450+16920)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+3840)*1+lsi)*1]), &(inteval->stack[((hsi*210+3480)*1+lsi)*1]), &(inteval->stack[((hsi*150+3690)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*280+3200)*1+lsi)*1]), &(inteval->stack[((hsi*210+3480)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+10620)*1+lsi)*1]), &(inteval->stack[((hsi*630+4290)*1+lsi)*1]), &(inteval->stack[((hsi*450+3840)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+3200)*1+lsi)*1]), &(inteval->stack[((hsi*210+2840)*1+lsi)*1]), &(inteval->stack[((hsi*150+3050)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+23160)*1+lsi)*1]), &(inteval->stack[((hsi*280+2560)*1+lsi)*1]), &(inteval->stack[((hsi*210+2840)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+9720)*1+lsi)*1]), &(inteval->stack[((hsi*630+23160)*1+lsi)*1]), &(inteval->stack[((hsi*450+3200)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+2560)*1+lsi)*1]), &(inteval->stack[((hsi*210+2200)*1+lsi)*1]), &(inteval->stack[((hsi*150+2410)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+23790)*1+lsi)*1]), &(inteval->stack[((hsi*280+1920)*1+lsi)*1]), &(inteval->stack[((hsi*210+2200)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+8820)*1+lsi)*1]), &(inteval->stack[((hsi*630+23790)*1+lsi)*1]), &(inteval->stack[((hsi*450+2560)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+1920)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]), &(inteval->stack[((hsi*150+1770)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+24420)*1+lsi)*1]), &(inteval->stack[((hsi*280+1280)*1+lsi)*1]), &(inteval->stack[((hsi*210+1560)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+7920)*1+lsi)*1]), &(inteval->stack[((hsi*630+24420)*1+lsi)*1]), &(inteval->stack[((hsi*450+1920)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+1280)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]), &(inteval->stack[((hsi*150+1130)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+25050)*1+lsi)*1]), &(inteval->stack[((hsi*280+640)*1+lsi)*1]), &(inteval->stack[((hsi*210+920)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+7020)*1+lsi)*1]), &(inteval->stack[((hsi*630+25050)*1+lsi)*1]), &(inteval->stack[((hsi*450+1280)*1+lsi)*1]),10);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*450+640)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]), &(inteval->stack[((hsi*150+490)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+25680)*1+lsi)*1]), &(inteval->stack[((hsi*280+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+280)*1+lsi)*1]),10);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*900+6120)*1+lsi)*1]), &(inteval->stack[((hsi*630+25680)*1+lsi)*1]), &(inteval->stack[((hsi*450+640)*1+lsi)*1]),10);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*900+6120)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*900+7020)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*900+7920)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*900+8820)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*900+9720)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*900+10620)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*900+11520)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*900+12420)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*900+13320)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*900+14220)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*900+15120)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*900+16020)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
