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
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1806)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+5046)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+5226)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]), &(inteval->stack[((hsi*60+1746)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+5406)*1+lsi)*1]), &(inteval->stack[((hsi*126+1530)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]),6);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*360+4686)*1+lsi)*1]), &(inteval->stack[((hsi*270+5406)*1+lsi)*1]), &(inteval->stack[((hsi*180+5226)*1+lsi)*1]), &(inteval->stack[((hsi*180+5046)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+5676)*1+lsi)*1]), &(inteval->stack[((hsi*90+1380)*1+lsi)*1]), &(inteval->stack[((hsi*60+1470)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+5856)*1+lsi)*1]), &(inteval->stack[((hsi*126+1254)*1+lsi)*1]), &(inteval->stack[((hsi*90+1380)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]),6);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*360+4326)*1+lsi)*1]), &(inteval->stack[((hsi*270+5856)*1+lsi)*1]), &(inteval->stack[((hsi*180+5676)*1+lsi)*1]), &(inteval->stack[((hsi*180+5046)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+6126)*1+lsi)*1]), &(inteval->stack[((hsi*90+1044)*1+lsi)*1]), &(inteval->stack[((hsi*60+1194)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+6306)*1+lsi)*1]), &(inteval->stack[((hsi*126+918)*1+lsi)*1]), &(inteval->stack[((hsi*90+1044)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]),6);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*360+3966)*1+lsi)*1]), &(inteval->stack[((hsi*270+6306)*1+lsi)*1]), &(inteval->stack[((hsi*180+6126)*1+lsi)*1]), &(inteval->stack[((hsi*180+5046)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1656)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]), &(inteval->stack[((hsi*60+1746)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+6666)*1+lsi)*1]), &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*60+1656)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+1656)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]), &(inteval->stack[((hsi*126+1530)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*270+6846)*1+lsi)*1]), &(inteval->stack[((hsi*126+1656)*1+lsi)*1]), &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]),6);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*360+3606)*1+lsi)*1]), &(inteval->stack[((hsi*270+6846)*1+lsi)*1]), &(inteval->stack[((hsi*180+6666)*1+lsi)*1]), &(inteval->stack[((hsi*180+5046)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*90+402)*1+lsi)*1]), &(inteval->stack[((hsi*90+1380)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1530)*1+lsi)*1]), &(inteval->stack[((hsi*60+492)*1+lsi)*1]), &(inteval->stack[((hsi*60+1470)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+1590)*1+lsi)*1]), &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*60+1530)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+1380)*1+lsi)*1]), &(inteval->stack[((hsi*126+276)*1+lsi)*1]), &(inteval->stack[((hsi*126+1254)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*270+7116)*1+lsi)*1]), &(inteval->stack[((hsi*126+1380)*1+lsi)*1]), &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]),6);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*360+3246)*1+lsi)*1]), &(inteval->stack[((hsi*270+7116)*1+lsi)*1]), &(inteval->stack[((hsi*180+1590)*1+lsi)*1]), &(inteval->stack[((hsi*180+5046)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*90+126)*1+lsi)*1]), &(inteval->stack[((hsi*90+1044)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1254)*1+lsi)*1]), &(inteval->stack[((hsi*60+216)*1+lsi)*1]), &(inteval->stack[((hsi*60+1194)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+1314)*1+lsi)*1]), &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*60+1254)*1+lsi)*1]), &(inteval->stack[((hsi*60+1134)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+1044)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+918)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*270+7386)*1+lsi)*1]), &(inteval->stack[((hsi*126+1044)*1+lsi)*1]), &(inteval->stack[((hsi*90+6576)*1+lsi)*1]), &(inteval->stack[((hsi*90+828)*1+lsi)*1]),6);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*360+2886)*1+lsi)*1]), &(inteval->stack[((hsi*270+7386)*1+lsi)*1]), &(inteval->stack[((hsi*180+1314)*1+lsi)*1]), &(inteval->stack[((hsi*180+5046)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+828)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1008)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+2526)*1+lsi)*1]), &(inteval->stack[((hsi*270+1008)*1+lsi)*1]), &(inteval->stack[((hsi*180+828)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+552)*1+lsi)*1]), &(inteval->stack[((hsi*90+402)*1+lsi)*1]), &(inteval->stack[((hsi*60+492)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+7656)*1+lsi)*1]), &(inteval->stack[((hsi*126+276)*1+lsi)*1]), &(inteval->stack[((hsi*90+402)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+2166)*1+lsi)*1]), &(inteval->stack[((hsi*270+7656)*1+lsi)*1]), &(inteval->stack[((hsi*180+552)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+276)*1+lsi)*1]), &(inteval->stack[((hsi*90+126)*1+lsi)*1]), &(inteval->stack[((hsi*60+216)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+7926)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+126)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+1806)*1+lsi)*1]), &(inteval->stack[((hsi*270+7926)*1+lsi)*1]), &(inteval->stack[((hsi*180+276)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+1806)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*360+2166)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*360+2526)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*360+2886)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*360+3246)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*360+3606)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*360+3966)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*360+4326)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*360+4686)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
