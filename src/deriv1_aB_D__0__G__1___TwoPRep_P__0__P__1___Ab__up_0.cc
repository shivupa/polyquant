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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0dp.h>
#include <HRRPart0bra0ket0dp001.h>
#include <HRRPart0bra0ket0dp010.h>
#include <HRRPart0bra0ket0dp100.h>
#include <HRRPart0bra0ket0d001p.h>
#include <HRRPart0bra0ket0d010p.h>
#include <HRRPart0bra0ket0d100p.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_D__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5550)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+15270)*1+lsi)*1]), &(inteval->stack[((hsi*126+5334)*1+lsi)*1]), &(inteval->stack[((hsi*90+5460)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+15540)*1+lsi)*1]), &(inteval->stack[((hsi*210+4974)*1+lsi)*1]), &(inteval->stack[((hsi*150+5184)*1+lsi)*1]), &(inteval->stack[((hsi*150+3672)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+14460)*1+lsi)*1]), &(inteval->stack[((hsi*450+15540)*1+lsi)*1]), &(inteval->stack[((hsi*270+15270)*1+lsi)*1]),45);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+15990)*1+lsi)*1]), &(inteval->stack[((hsi*126+4758)*1+lsi)*1]), &(inteval->stack[((hsi*90+4884)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+16260)*1+lsi)*1]), &(inteval->stack[((hsi*210+4398)*1+lsi)*1]), &(inteval->stack[((hsi*150+4608)*1+lsi)*1]), &(inteval->stack[((hsi*150+3672)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+13650)*1+lsi)*1]), &(inteval->stack[((hsi*450+16260)*1+lsi)*1]), &(inteval->stack[((hsi*270+15990)*1+lsi)*1]),45);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+16710)*1+lsi)*1]), &(inteval->stack[((hsi*126+4182)*1+lsi)*1]), &(inteval->stack[((hsi*90+4308)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+16980)*1+lsi)*1]), &(inteval->stack[((hsi*210+3822)*1+lsi)*1]), &(inteval->stack[((hsi*150+4032)*1+lsi)*1]), &(inteval->stack[((hsi*150+3672)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+12840)*1+lsi)*1]), &(inteval->stack[((hsi*450+16980)*1+lsi)*1]), &(inteval->stack[((hsi*270+16710)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+17430)*1+lsi)*1]), &(inteval->stack[((hsi*90+1854)*1+lsi)*1]), &(inteval->stack[((hsi*90+3582)*1+lsi)*1]), &(inteval->stack[((hsi*90+5460)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+17520)*1+lsi)*1]), &(inteval->stack[((hsi*126+1578)*1+lsi)*1]), &(inteval->stack[((hsi*126+3306)*1+lsi)*1]), &(inteval->stack[((hsi*126+5334)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*270+17646)*1+lsi)*1]), &(inteval->stack[((hsi*126+17520)*1+lsi)*1]), &(inteval->stack[((hsi*90+17430)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5334)*1+lsi)*1]), &(inteval->stack[((hsi*150+1704)*1+lsi)*1]), &(inteval->stack[((hsi*150+3432)*1+lsi)*1]), &(inteval->stack[((hsi*150+5184)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+17430)*1+lsi)*1]), &(inteval->stack[((hsi*210+1368)*1+lsi)*1]), &(inteval->stack[((hsi*210+3096)*1+lsi)*1]), &(inteval->stack[((hsi*210+4974)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+17916)*1+lsi)*1]), &(inteval->stack[((hsi*210+17430)*1+lsi)*1]), &(inteval->stack[((hsi*150+5334)*1+lsi)*1]), &(inteval->stack[((hsi*150+3672)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+12030)*1+lsi)*1]), &(inteval->stack[((hsi*450+17916)*1+lsi)*1]), &(inteval->stack[((hsi*270+17646)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+4974)*1+lsi)*1]), &(inteval->stack[((hsi*90+1278)*1+lsi)*1]), &(inteval->stack[((hsi*90+3006)*1+lsi)*1]), &(inteval->stack[((hsi*90+4884)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5064)*1+lsi)*1]), &(inteval->stack[((hsi*126+1002)*1+lsi)*1]), &(inteval->stack[((hsi*126+2730)*1+lsi)*1]), &(inteval->stack[((hsi*126+4758)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*270+5190)*1+lsi)*1]), &(inteval->stack[((hsi*126+5064)*1+lsi)*1]), &(inteval->stack[((hsi*90+4974)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+4758)*1+lsi)*1]), &(inteval->stack[((hsi*150+1128)*1+lsi)*1]), &(inteval->stack[((hsi*150+2856)*1+lsi)*1]), &(inteval->stack[((hsi*150+4608)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+4908)*1+lsi)*1]), &(inteval->stack[((hsi*210+792)*1+lsi)*1]), &(inteval->stack[((hsi*210+2520)*1+lsi)*1]), &(inteval->stack[((hsi*210+4398)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+18366)*1+lsi)*1]), &(inteval->stack[((hsi*210+4908)*1+lsi)*1]), &(inteval->stack[((hsi*150+4758)*1+lsi)*1]), &(inteval->stack[((hsi*150+3672)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+11220)*1+lsi)*1]), &(inteval->stack[((hsi*450+18366)*1+lsi)*1]), &(inteval->stack[((hsi*270+5190)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5460)*1+lsi)*1]), &(inteval->stack[((hsi*90+612)*1+lsi)*1]), &(inteval->stack[((hsi*90+2430)*1+lsi)*1]), &(inteval->stack[((hsi*90+4308)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+4308)*1+lsi)*1]), &(inteval->stack[((hsi*126+210)*1+lsi)*1]), &(inteval->stack[((hsi*126+2154)*1+lsi)*1]), &(inteval->stack[((hsi*126+4182)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*270+4434)*1+lsi)*1]), &(inteval->stack[((hsi*126+4308)*1+lsi)*1]), &(inteval->stack[((hsi*90+5460)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+4704)*1+lsi)*1]), &(inteval->stack[((hsi*150+462)*1+lsi)*1]), &(inteval->stack[((hsi*150+2280)*1+lsi)*1]), &(inteval->stack[((hsi*150+4032)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+4032)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+1944)*1+lsi)*1]), &(inteval->stack[((hsi*210+3822)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+18816)*1+lsi)*1]), &(inteval->stack[((hsi*210+4032)*1+lsi)*1]), &(inteval->stack[((hsi*150+4704)*1+lsi)*1]), &(inteval->stack[((hsi*150+3672)*1+lsi)*1]),10);
HRRPart0bra0ket0dp(inteval, &(inteval->stack[((hsi*810+10410)*1+lsi)*1]), &(inteval->stack[((hsi*450+18816)*1+lsi)*1]), &(inteval->stack[((hsi*270+4434)*1+lsi)*1]),45);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*270+3672)*1+lsi)*1]), &(inteval->stack[((hsi*150+3432)*1+lsi)*1]), &(inteval->stack[((hsi*90+3582)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),15);
HRRPart0bra0ket0dp001(inteval, &(inteval->stack[((hsi*378+3942)*1+lsi)*1]), &(inteval->stack[((hsi*210+3096)*1+lsi)*1]), &(inteval->stack[((hsi*126+3306)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*810+9600)*1+lsi)*1]), &(inteval->stack[((hsi*378+3942)*1+lsi)*1]), &(inteval->stack[((hsi*270+3672)*1+lsi)*1]),18);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*270+3096)*1+lsi)*1]), &(inteval->stack[((hsi*150+2856)*1+lsi)*1]), &(inteval->stack[((hsi*90+3006)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),15);
HRRPart0bra0ket0dp010(inteval, &(inteval->stack[((hsi*378+4704)*1+lsi)*1]), &(inteval->stack[((hsi*210+2520)*1+lsi)*1]), &(inteval->stack[((hsi*126+2730)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*810+8790)*1+lsi)*1]), &(inteval->stack[((hsi*378+4704)*1+lsi)*1]), &(inteval->stack[((hsi*270+3096)*1+lsi)*1]),18);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*270+2520)*1+lsi)*1]), &(inteval->stack[((hsi*150+2280)*1+lsi)*1]), &(inteval->stack[((hsi*90+2430)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),15);
HRRPart0bra0ket0dp100(inteval, &(inteval->stack[((hsi*378+19266)*1+lsi)*1]), &(inteval->stack[((hsi*210+1944)*1+lsi)*1]), &(inteval->stack[((hsi*126+2154)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*810+7980)*1+lsi)*1]), &(inteval->stack[((hsi*378+19266)*1+lsi)*1]), &(inteval->stack[((hsi*270+2520)*1+lsi)*1]),18);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*270+1944)*1+lsi)*1]), &(inteval->stack[((hsi*150+1704)*1+lsi)*1]), &(inteval->stack[((hsi*90+1854)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),15);
HRRPart0bra0ket0d001p(inteval, &(inteval->stack[((hsi*378+19644)*1+lsi)*1]), &(inteval->stack[((hsi*210+1368)*1+lsi)*1]), &(inteval->stack[((hsi*126+1578)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*810+7170)*1+lsi)*1]), &(inteval->stack[((hsi*378+19644)*1+lsi)*1]), &(inteval->stack[((hsi*270+1944)*1+lsi)*1]),18);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*270+1368)*1+lsi)*1]), &(inteval->stack[((hsi*150+1128)*1+lsi)*1]), &(inteval->stack[((hsi*90+1278)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),15);
HRRPart0bra0ket0d010p(inteval, &(inteval->stack[((hsi*378+20022)*1+lsi)*1]), &(inteval->stack[((hsi*210+792)*1+lsi)*1]), &(inteval->stack[((hsi*126+1002)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*810+6360)*1+lsi)*1]), &(inteval->stack[((hsi*378+20022)*1+lsi)*1]), &(inteval->stack[((hsi*270+1368)*1+lsi)*1]),18);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*270+792)*1+lsi)*1]), &(inteval->stack[((hsi*150+462)*1+lsi)*1]), &(inteval->stack[((hsi*90+612)*1+lsi)*1]), &(inteval->stack[((hsi*90+702)*1+lsi)*1]),15);
HRRPart0bra0ket0d100p(inteval, &(inteval->stack[((hsi*378+20400)*1+lsi)*1]), &(inteval->stack[((hsi*210+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+210)*1+lsi)*1]), &(inteval->stack[((hsi*126+336)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*810+5550)*1+lsi)*1]), &(inteval->stack[((hsi*378+20400)*1+lsi)*1]), &(inteval->stack[((hsi*270+792)*1+lsi)*1]),18);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*810+5550)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*810+6360)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*810+7170)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*810+7980)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*810+8790)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*810+9600)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*810+10410)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*810+11220)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*810+12030)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*810+12840)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*810+13650)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*810+14460)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
