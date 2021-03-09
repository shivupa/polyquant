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
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_D__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__F__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2634)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+6954)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+7134)*1+lsi)*1]), &(inteval->stack[((hsi*90+2484)*1+lsi)*1]), &(inteval->stack[((hsi*60+2574)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+7314)*1+lsi)*1]), &(inteval->stack[((hsi*126+2358)*1+lsi)*1]), &(inteval->stack[((hsi*90+2484)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*360+6594)*1+lsi)*1]), &(inteval->stack[((hsi*270+7314)*1+lsi)*1]), &(inteval->stack[((hsi*180+7134)*1+lsi)*1]), &(inteval->stack[((hsi*180+6954)*1+lsi)*1]),6);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+7584)*1+lsi)*1]), &(inteval->stack[((hsi*90+2208)*1+lsi)*1]), &(inteval->stack[((hsi*60+2298)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+7764)*1+lsi)*1]), &(inteval->stack[((hsi*126+2082)*1+lsi)*1]), &(inteval->stack[((hsi*90+2208)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*360+6234)*1+lsi)*1]), &(inteval->stack[((hsi*270+7764)*1+lsi)*1]), &(inteval->stack[((hsi*180+7584)*1+lsi)*1]), &(inteval->stack[((hsi*180+6954)*1+lsi)*1]),6);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+8034)*1+lsi)*1]), &(inteval->stack[((hsi*90+1872)*1+lsi)*1]), &(inteval->stack[((hsi*60+2022)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+8214)*1+lsi)*1]), &(inteval->stack[((hsi*126+1746)*1+lsi)*1]), &(inteval->stack[((hsi*90+1872)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*360+5874)*1+lsi)*1]), &(inteval->stack[((hsi*270+8214)*1+lsi)*1]), &(inteval->stack[((hsi*180+8034)*1+lsi)*1]), &(inteval->stack[((hsi*180+6954)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]), &(inteval->stack[((hsi*90+1506)*1+lsi)*1]), &(inteval->stack[((hsi*90+2484)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2484)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]), &(inteval->stack[((hsi*60+1596)*1+lsi)*1]), &(inteval->stack[((hsi*60+2574)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+8574)*1+lsi)*1]), &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*60+2484)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2484)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]), &(inteval->stack[((hsi*126+1380)*1+lsi)*1]), &(inteval->stack[((hsi*126+2358)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*270+8754)*1+lsi)*1]), &(inteval->stack[((hsi*126+2484)*1+lsi)*1]), &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*360+5514)*1+lsi)*1]), &(inteval->stack[((hsi*270+8754)*1+lsi)*1]), &(inteval->stack[((hsi*180+8574)*1+lsi)*1]), &(inteval->stack[((hsi*180+6954)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*90+402)*1+lsi)*1]), &(inteval->stack[((hsi*90+1230)*1+lsi)*1]), &(inteval->stack[((hsi*90+2208)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2358)*1+lsi)*1]), &(inteval->stack[((hsi*60+492)*1+lsi)*1]), &(inteval->stack[((hsi*60+1320)*1+lsi)*1]), &(inteval->stack[((hsi*60+2298)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+2418)*1+lsi)*1]), &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*60+2358)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2208)*1+lsi)*1]), &(inteval->stack[((hsi*126+276)*1+lsi)*1]), &(inteval->stack[((hsi*126+1104)*1+lsi)*1]), &(inteval->stack[((hsi*126+2082)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*270+9024)*1+lsi)*1]), &(inteval->stack[((hsi*126+2208)*1+lsi)*1]), &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*360+5154)*1+lsi)*1]), &(inteval->stack[((hsi*270+9024)*1+lsi)*1]), &(inteval->stack[((hsi*180+2418)*1+lsi)*1]), &(inteval->stack[((hsi*180+6954)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*90+126)*1+lsi)*1]), &(inteval->stack[((hsi*90+954)*1+lsi)*1]), &(inteval->stack[((hsi*90+1872)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2082)*1+lsi)*1]), &(inteval->stack[((hsi*60+216)*1+lsi)*1]), &(inteval->stack[((hsi*60+1044)*1+lsi)*1]), &(inteval->stack[((hsi*60+2022)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+2142)*1+lsi)*1]), &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*60+2082)*1+lsi)*1]), &(inteval->stack[((hsi*60+1962)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+1872)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+828)*1+lsi)*1]), &(inteval->stack[((hsi*126+1746)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*270+9294)*1+lsi)*1]), &(inteval->stack[((hsi*126+1872)*1+lsi)*1]), &(inteval->stack[((hsi*90+8484)*1+lsi)*1]), &(inteval->stack[((hsi*90+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*360+4794)*1+lsi)*1]), &(inteval->stack[((hsi*270+9294)*1+lsi)*1]), &(inteval->stack[((hsi*180+2142)*1+lsi)*1]), &(inteval->stack[((hsi*180+6954)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1656)*1+lsi)*1]), &(inteval->stack[((hsi*90+1506)*1+lsi)*1]), &(inteval->stack[((hsi*60+1596)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1836)*1+lsi)*1]), &(inteval->stack[((hsi*126+1380)*1+lsi)*1]), &(inteval->stack[((hsi*90+1506)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+4434)*1+lsi)*1]), &(inteval->stack[((hsi*270+1836)*1+lsi)*1]), &(inteval->stack[((hsi*180+1656)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1380)*1+lsi)*1]), &(inteval->stack[((hsi*90+1230)*1+lsi)*1]), &(inteval->stack[((hsi*60+1320)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+9564)*1+lsi)*1]), &(inteval->stack[((hsi*126+1104)*1+lsi)*1]), &(inteval->stack[((hsi*90+1230)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+4074)*1+lsi)*1]), &(inteval->stack[((hsi*270+9564)*1+lsi)*1]), &(inteval->stack[((hsi*180+1380)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+1104)*1+lsi)*1]), &(inteval->stack[((hsi*90+954)*1+lsi)*1]), &(inteval->stack[((hsi*60+1044)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+9834)*1+lsi)*1]), &(inteval->stack[((hsi*126+828)*1+lsi)*1]), &(inteval->stack[((hsi*90+954)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+3714)*1+lsi)*1]), &(inteval->stack[((hsi*270+9834)*1+lsi)*1]), &(inteval->stack[((hsi*180+1104)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+828)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+10104)*1+lsi)*1]), &(inteval->stack[((hsi*126+552)*1+lsi)*1]), &(inteval->stack[((hsi*90+678)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+3354)*1+lsi)*1]), &(inteval->stack[((hsi*270+10104)*1+lsi)*1]), &(inteval->stack[((hsi*180+828)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+552)*1+lsi)*1]), &(inteval->stack[((hsi*90+402)*1+lsi)*1]), &(inteval->stack[((hsi*60+492)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+10374)*1+lsi)*1]), &(inteval->stack[((hsi*126+276)*1+lsi)*1]), &(inteval->stack[((hsi*90+402)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+2994)*1+lsi)*1]), &(inteval->stack[((hsi*270+10374)*1+lsi)*1]), &(inteval->stack[((hsi*180+552)*1+lsi)*1]),6);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*180+276)*1+lsi)*1]), &(inteval->stack[((hsi*90+126)*1+lsi)*1]), &(inteval->stack[((hsi*60+216)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+10644)*1+lsi)*1]), &(inteval->stack[((hsi*126+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+126)*1+lsi)*1]),6);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*360+2634)*1+lsi)*1]), &(inteval->stack[((hsi*270+10644)*1+lsi)*1]), &(inteval->stack[((hsi*180+276)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+2634)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*360+2994)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*360+3354)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*360+3714)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*360+4074)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*360+4434)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*360+4794)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*360+5154)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*360+5514)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*360+5874)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*360+6234)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*360+6594)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
