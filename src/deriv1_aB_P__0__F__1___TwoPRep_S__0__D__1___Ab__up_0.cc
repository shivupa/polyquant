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
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_P__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__F__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1317)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+3477)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*90+3567)*1+lsi)*1]), &(inteval->stack[((hsi*45+1242)*1+lsi)*1]), &(inteval->stack[((hsi*30+1287)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+3657)*1+lsi)*1]), &(inteval->stack[((hsi*63+1179)*1+lsi)*1]), &(inteval->stack[((hsi*45+1242)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]),3);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*180+3297)*1+lsi)*1]), &(inteval->stack[((hsi*135+3657)*1+lsi)*1]), &(inteval->stack[((hsi*90+3567)*1+lsi)*1]), &(inteval->stack[((hsi*90+3477)*1+lsi)*1]),3);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*90+3792)*1+lsi)*1]), &(inteval->stack[((hsi*45+1104)*1+lsi)*1]), &(inteval->stack[((hsi*30+1149)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+3882)*1+lsi)*1]), &(inteval->stack[((hsi*63+1041)*1+lsi)*1]), &(inteval->stack[((hsi*45+1104)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]),3);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*180+3117)*1+lsi)*1]), &(inteval->stack[((hsi*135+3882)*1+lsi)*1]), &(inteval->stack[((hsi*90+3792)*1+lsi)*1]), &(inteval->stack[((hsi*90+3477)*1+lsi)*1]),3);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*90+4017)*1+lsi)*1]), &(inteval->stack[((hsi*45+966)*1+lsi)*1]), &(inteval->stack[((hsi*30+1011)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+4107)*1+lsi)*1]), &(inteval->stack[((hsi*63+903)*1+lsi)*1]), &(inteval->stack[((hsi*45+966)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]),3);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*180+2937)*1+lsi)*1]), &(inteval->stack[((hsi*135+4107)*1+lsi)*1]), &(inteval->stack[((hsi*90+4017)*1+lsi)*1]), &(inteval->stack[((hsi*90+3477)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]), &(inteval->stack[((hsi*45+783)*1+lsi)*1]), &(inteval->stack[((hsi*45+1242)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1242)*1+lsi)*1]), &(inteval->stack[((hsi*30+414)*1+lsi)*1]), &(inteval->stack[((hsi*30+828)*1+lsi)*1]), &(inteval->stack[((hsi*30+1287)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*90+4287)*1+lsi)*1]), &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*30+1242)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+1242)*1+lsi)*1]), &(inteval->stack[((hsi*63+306)*1+lsi)*1]), &(inteval->stack[((hsi*63+720)*1+lsi)*1]), &(inteval->stack[((hsi*63+1179)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*135+4377)*1+lsi)*1]), &(inteval->stack[((hsi*63+1242)*1+lsi)*1]), &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]),3);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*180+2757)*1+lsi)*1]), &(inteval->stack[((hsi*135+4377)*1+lsi)*1]), &(inteval->stack[((hsi*90+4287)*1+lsi)*1]), &(inteval->stack[((hsi*90+3477)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*45+645)*1+lsi)*1]), &(inteval->stack[((hsi*45+1104)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1179)*1+lsi)*1]), &(inteval->stack[((hsi*30+276)*1+lsi)*1]), &(inteval->stack[((hsi*30+690)*1+lsi)*1]), &(inteval->stack[((hsi*30+1149)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*90+1209)*1+lsi)*1]), &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*30+1179)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+1104)*1+lsi)*1]), &(inteval->stack[((hsi*63+168)*1+lsi)*1]), &(inteval->stack[((hsi*63+582)*1+lsi)*1]), &(inteval->stack[((hsi*63+1041)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*135+4512)*1+lsi)*1]), &(inteval->stack[((hsi*63+1104)*1+lsi)*1]), &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]),3);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*180+2577)*1+lsi)*1]), &(inteval->stack[((hsi*135+4512)*1+lsi)*1]), &(inteval->stack[((hsi*90+1209)*1+lsi)*1]), &(inteval->stack[((hsi*90+3477)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*45+93)*1+lsi)*1]), &(inteval->stack[((hsi*45+507)*1+lsi)*1]), &(inteval->stack[((hsi*45+966)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1041)*1+lsi)*1]), &(inteval->stack[((hsi*30+138)*1+lsi)*1]), &(inteval->stack[((hsi*30+552)*1+lsi)*1]), &(inteval->stack[((hsi*30+1011)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*90+1071)*1+lsi)*1]), &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*30+1041)*1+lsi)*1]), &(inteval->stack[((hsi*30+0)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+966)*1+lsi)*1]), &(inteval->stack[((hsi*63+30)*1+lsi)*1]), &(inteval->stack[((hsi*63+444)*1+lsi)*1]), &(inteval->stack[((hsi*63+903)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*135+4647)*1+lsi)*1]), &(inteval->stack[((hsi*63+966)*1+lsi)*1]), &(inteval->stack[((hsi*45+4242)*1+lsi)*1]), &(inteval->stack[((hsi*45+858)*1+lsi)*1]),3);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*180+2397)*1+lsi)*1]), &(inteval->stack[((hsi*135+4647)*1+lsi)*1]), &(inteval->stack[((hsi*90+1071)*1+lsi)*1]), &(inteval->stack[((hsi*90+3477)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+858)*1+lsi)*1]), &(inteval->stack[((hsi*45+783)*1+lsi)*1]), &(inteval->stack[((hsi*30+828)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4782)*1+lsi)*1]), &(inteval->stack[((hsi*63+720)*1+lsi)*1]), &(inteval->stack[((hsi*45+783)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+2217)*1+lsi)*1]), &(inteval->stack[((hsi*135+4782)*1+lsi)*1]), &(inteval->stack[((hsi*90+858)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+720)*1+lsi)*1]), &(inteval->stack[((hsi*45+645)*1+lsi)*1]), &(inteval->stack[((hsi*30+690)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+4917)*1+lsi)*1]), &(inteval->stack[((hsi*63+582)*1+lsi)*1]), &(inteval->stack[((hsi*45+645)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+2037)*1+lsi)*1]), &(inteval->stack[((hsi*135+4917)*1+lsi)*1]), &(inteval->stack[((hsi*90+720)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+582)*1+lsi)*1]), &(inteval->stack[((hsi*45+507)*1+lsi)*1]), &(inteval->stack[((hsi*30+552)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5052)*1+lsi)*1]), &(inteval->stack[((hsi*63+444)*1+lsi)*1]), &(inteval->stack[((hsi*45+507)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1857)*1+lsi)*1]), &(inteval->stack[((hsi*135+5052)*1+lsi)*1]), &(inteval->stack[((hsi*90+582)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+444)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]), &(inteval->stack[((hsi*30+414)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5187)*1+lsi)*1]), &(inteval->stack[((hsi*63+306)*1+lsi)*1]), &(inteval->stack[((hsi*45+369)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1677)*1+lsi)*1]), &(inteval->stack[((hsi*135+5187)*1+lsi)*1]), &(inteval->stack[((hsi*90+444)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+306)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]), &(inteval->stack[((hsi*30+276)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5322)*1+lsi)*1]), &(inteval->stack[((hsi*63+168)*1+lsi)*1]), &(inteval->stack[((hsi*45+231)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1497)*1+lsi)*1]), &(inteval->stack[((hsi*135+5322)*1+lsi)*1]), &(inteval->stack[((hsi*90+306)*1+lsi)*1]),3);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*90+168)*1+lsi)*1]), &(inteval->stack[((hsi*45+93)*1+lsi)*1]), &(inteval->stack[((hsi*30+138)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+5457)*1+lsi)*1]), &(inteval->stack[((hsi*63+30)*1+lsi)*1]), &(inteval->stack[((hsi*45+93)*1+lsi)*1]),3);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*180+1317)*1+lsi)*1]), &(inteval->stack[((hsi*135+5457)*1+lsi)*1]), &(inteval->stack[((hsi*90+168)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*180+1317)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*180+1497)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*180+1677)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*180+1857)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*180+2037)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*180+2217)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*180+2397)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*180+2577)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*180+2757)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*180+2937)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*180+3117)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*180+3297)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
