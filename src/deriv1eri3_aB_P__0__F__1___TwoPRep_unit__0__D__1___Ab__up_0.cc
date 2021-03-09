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
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,903)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+2523)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*90+2613)*1+lsi)*1]), &(inteval->stack[((hsi*45+828)*1+lsi)*1]), &(inteval->stack[((hsi*30+873)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+2703)*1+lsi)*1]), &(inteval->stack[((hsi*63+765)*1+lsi)*1]), &(inteval->stack[((hsi*45+828)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]),3);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*180+2343)*1+lsi)*1]), &(inteval->stack[((hsi*135+2703)*1+lsi)*1]), &(inteval->stack[((hsi*90+2613)*1+lsi)*1]), &(inteval->stack[((hsi*90+2523)*1+lsi)*1]),3);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*90+2838)*1+lsi)*1]), &(inteval->stack[((hsi*45+690)*1+lsi)*1]), &(inteval->stack[((hsi*30+735)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+2928)*1+lsi)*1]), &(inteval->stack[((hsi*63+627)*1+lsi)*1]), &(inteval->stack[((hsi*45+690)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]),3);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*180+2163)*1+lsi)*1]), &(inteval->stack[((hsi*135+2928)*1+lsi)*1]), &(inteval->stack[((hsi*90+2838)*1+lsi)*1]), &(inteval->stack[((hsi*90+2523)*1+lsi)*1]),3);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*90+3063)*1+lsi)*1]), &(inteval->stack[((hsi*45+552)*1+lsi)*1]), &(inteval->stack[((hsi*30+597)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+3153)*1+lsi)*1]), &(inteval->stack[((hsi*63+489)*1+lsi)*1]), &(inteval->stack[((hsi*45+552)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]),3);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*180+1983)*1+lsi)*1]), &(inteval->stack[((hsi*135+3153)*1+lsi)*1]), &(inteval->stack[((hsi*90+3063)*1+lsi)*1]), &(inteval->stack[((hsi*90+2523)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]), &(inteval->stack[((hsi*45+828)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+828)*1+lsi)*1]), &(inteval->stack[((hsi*30+414)*1+lsi)*1]), &(inteval->stack[((hsi*30+873)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*90+3333)*1+lsi)*1]), &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*30+828)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+828)*1+lsi)*1]), &(inteval->stack[((hsi*63+306)*1+lsi)*1]), &(inteval->stack[((hsi*63+765)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*135+3423)*1+lsi)*1]), &(inteval->stack[((hsi*63+828)*1+lsi)*1]), &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]),3);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*180+1803)*1+lsi)*1]), &(inteval->stack[((hsi*135+3423)*1+lsi)*1]), &(inteval->stack[((hsi*90+3333)*1+lsi)*1]), &(inteval->stack[((hsi*90+2523)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*45+690)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+765)*1+lsi)*1]), &(inteval->stack[((hsi*30+276)*1+lsi)*1]), &(inteval->stack[((hsi*30+735)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*90+795)*1+lsi)*1]), &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*30+765)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+690)*1+lsi)*1]), &(inteval->stack[((hsi*63+168)*1+lsi)*1]), &(inteval->stack[((hsi*63+627)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*135+3558)*1+lsi)*1]), &(inteval->stack[((hsi*63+690)*1+lsi)*1]), &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]),3);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*180+1623)*1+lsi)*1]), &(inteval->stack[((hsi*135+3558)*1+lsi)*1]), &(inteval->stack[((hsi*90+795)*1+lsi)*1]), &(inteval->stack[((hsi*90+2523)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*45+93)*1+lsi)*1]), &(inteval->stack[((hsi*45+552)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+627)*1+lsi)*1]), &(inteval->stack[((hsi*30+138)*1+lsi)*1]), &(inteval->stack[((hsi*30+597)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*90+657)*1+lsi)*1]), &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*30+627)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+552)*1+lsi)*1]), &(inteval->stack[((hsi*63+30)*1+lsi)*1]), &(inteval->stack[((hsi*63+489)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*135+3693)*1+lsi)*1]), &(inteval->stack[((hsi*63+552)*1+lsi)*1]), &(inteval->stack[((hsi*45+3288)*1+lsi)*1]), &(inteval->stack[((hsi*45+444)*1+lsi)*1]),3);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*180+1443)*1+lsi)*1]), &(inteval->stack[((hsi*135+3693)*1+lsi)*1]), &(inteval->stack[((hsi*90+657)*1+lsi)*1]), &(inteval->stack[((hsi*90+2523)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+444)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]), &(inteval->stack[((hsi*30+414)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+3828)*1+lsi)*1]), &(inteval->stack[((hsi*63+306)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1263)*1+lsi)*1]), &(inteval->stack[((hsi*135+3828)*1+lsi)*1]), &(inteval->stack[((hsi*90+444)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+306)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*30+276)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+3963)*1+lsi)*1]), &(inteval->stack[((hsi*63+168)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1083)*1+lsi)*1]), &(inteval->stack[((hsi*135+3963)*1+lsi)*1]), &(inteval->stack[((hsi*90+306)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+168)*1+lsi)*1]), &(inteval->stack[((hsi*45+93)*1+lsi)*1]), &(inteval->stack[((hsi*30+138)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4098)*1+lsi)*1]), &(inteval->stack[((hsi*63+30)*1+lsi)*1]), &(inteval->stack[((hsi*45+93)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+903)*1+lsi)*1]), &(inteval->stack[((hsi*135+4098)*1+lsi)*1]), &(inteval->stack[((hsi*90+168)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*180+903)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*180+1083)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*180+1263)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*180+1443)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*180+1623)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*180+1803)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*180+1983)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*180+2163)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*180+2343)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
