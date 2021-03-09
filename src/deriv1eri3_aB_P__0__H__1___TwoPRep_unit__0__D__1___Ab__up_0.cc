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
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1677)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+5079)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+5268)*1+lsi)*1]), &(inteval->stack[((hsi*84+1467)*1+lsi)*1]), &(inteval->stack[((hsi*63+1614)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+5457)*1+lsi)*1]), &(inteval->stack[((hsi*108+1275)*1+lsi)*1]), &(inteval->stack[((hsi*84+1467)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*378+4701)*1+lsi)*1]), &(inteval->stack[((hsi*252+5457)*1+lsi)*1]), &(inteval->stack[((hsi*189+5268)*1+lsi)*1]), &(inteval->stack[((hsi*189+5079)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+5709)*1+lsi)*1]), &(inteval->stack[((hsi*84+957)*1+lsi)*1]), &(inteval->stack[((hsi*63+1104)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+5898)*1+lsi)*1]), &(inteval->stack[((hsi*108+765)*1+lsi)*1]), &(inteval->stack[((hsi*84+957)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*378+4323)*1+lsi)*1]), &(inteval->stack[((hsi*252+5898)*1+lsi)*1]), &(inteval->stack[((hsi*189+5709)*1+lsi)*1]), &(inteval->stack[((hsi*189+5079)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+6150)*1+lsi)*1]), &(inteval->stack[((hsi*84+384)*1+lsi)*1]), &(inteval->stack[((hsi*63+594)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+6339)*1+lsi)*1]), &(inteval->stack[((hsi*108+192)*1+lsi)*1]), &(inteval->stack[((hsi*84+384)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*378+3945)*1+lsi)*1]), &(inteval->stack[((hsi*252+6339)*1+lsi)*1]), &(inteval->stack[((hsi*189+6150)*1+lsi)*1]), &(inteval->stack[((hsi*189+5079)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6591)*1+lsi)*1]), &(inteval->stack[((hsi*84+1383)*1+lsi)*1]), &(inteval->stack[((hsi*63+1551)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+6780)*1+lsi)*1]), &(inteval->stack[((hsi*108+1167)*1+lsi)*1]), &(inteval->stack[((hsi*84+1383)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+2433)*1+lsi)*1]), &(inteval->stack[((hsi*252+6780)*1+lsi)*1]), &(inteval->stack[((hsi*189+6591)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+7032)*1+lsi)*1]), &(inteval->stack[((hsi*84+873)*1+lsi)*1]), &(inteval->stack[((hsi*63+1041)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+7221)*1+lsi)*1]), &(inteval->stack[((hsi*108+657)*1+lsi)*1]), &(inteval->stack[((hsi*84+873)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+2055)*1+lsi)*1]), &(inteval->stack[((hsi*252+7221)*1+lsi)*1]), &(inteval->stack[((hsi*189+7032)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+7473)*1+lsi)*1]), &(inteval->stack[((hsi*84+300)*1+lsi)*1]), &(inteval->stack[((hsi*63+531)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+7662)*1+lsi)*1]), &(inteval->stack[((hsi*108+84)*1+lsi)*1]), &(inteval->stack[((hsi*84+300)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+1677)*1+lsi)*1]), &(inteval->stack[((hsi*252+7662)*1+lsi)*1]), &(inteval->stack[((hsi*189+7473)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*84+1383)*1+lsi)*1]), &(inteval->stack[((hsi*84+1467)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+1383)*1+lsi)*1]), &(inteval->stack[((hsi*63+1551)*1+lsi)*1]), &(inteval->stack[((hsi*63+1614)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*189+1446)*1+lsi)*1]), &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*63+1383)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+7998)*1+lsi)*1]), &(inteval->stack[((hsi*108+1167)*1+lsi)*1]), &(inteval->stack[((hsi*108+1275)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*252+1167)*1+lsi)*1]), &(inteval->stack[((hsi*108+7998)*1+lsi)*1]), &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*378+3567)*1+lsi)*1]), &(inteval->stack[((hsi*252+1167)*1+lsi)*1]), &(inteval->stack[((hsi*189+1446)*1+lsi)*1]), &(inteval->stack[((hsi*189+5079)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*84+873)*1+lsi)*1]), &(inteval->stack[((hsi*84+957)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+873)*1+lsi)*1]), &(inteval->stack[((hsi*63+1041)*1+lsi)*1]), &(inteval->stack[((hsi*63+1104)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*189+936)*1+lsi)*1]), &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*63+873)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+7998)*1+lsi)*1]), &(inteval->stack[((hsi*108+657)*1+lsi)*1]), &(inteval->stack[((hsi*108+765)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*252+657)*1+lsi)*1]), &(inteval->stack[((hsi*108+7998)*1+lsi)*1]), &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*378+3189)*1+lsi)*1]), &(inteval->stack[((hsi*252+657)*1+lsi)*1]), &(inteval->stack[((hsi*189+936)*1+lsi)*1]), &(inteval->stack[((hsi*189+5079)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*84+300)*1+lsi)*1]), &(inteval->stack[((hsi*84+384)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+300)*1+lsi)*1]), &(inteval->stack[((hsi*63+531)*1+lsi)*1]), &(inteval->stack[((hsi*63+594)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*189+7998)*1+lsi)*1]), &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*63+300)*1+lsi)*1]), &(inteval->stack[((hsi*63+468)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*108+300)*1+lsi)*1]), &(inteval->stack[((hsi*108+84)*1+lsi)*1]), &(inteval->stack[((hsi*108+192)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*252+8187)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]), &(inteval->stack[((hsi*84+7914)*1+lsi)*1]), &(inteval->stack[((hsi*84+0)*1+lsi)*1]),3);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*378+2811)*1+lsi)*1]), &(inteval->stack[((hsi*252+8187)*1+lsi)*1]), &(inteval->stack[((hsi*189+7998)*1+lsi)*1]), &(inteval->stack[((hsi*189+5079)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*378+1677)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*378+2055)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*378+2433)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*378+2811)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*378+3189)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*378+3567)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*378+3945)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*378+4323)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*378+4701)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
