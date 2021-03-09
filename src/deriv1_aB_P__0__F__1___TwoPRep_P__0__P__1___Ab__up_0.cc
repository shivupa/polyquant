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
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0fp001.h>
#include <HRRPart1bra0ket0fp010.h>
#include <HRRPart1bra0ket0fp100.h>
#include <HRRPart1bra0ket0f001p.h>
#include <HRRPart1bra0ket0f010p.h>
#include <HRRPart1bra0ket0f100p.h>
#include <deriv1_aB_P__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__F__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__F__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*90+5400)*1+lsi)*1]), &(inteval->stack[((hsi*45+2085)*1+lsi)*1]), &(inteval->stack[((hsi*30+2130)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),3);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*180+5490)*1+lsi)*1]), &(inteval->stack[((hsi*90+1935)*1+lsi)*1]), &(inteval->stack[((hsi*60+2025)*1+lsi)*1]), &(inteval->stack[((hsi*60+1425)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*270+5130)*1+lsi)*1]), &(inteval->stack[((hsi*180+5490)*1+lsi)*1]), &(inteval->stack[((hsi*90+5400)*1+lsi)*1]),30);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*90+5670)*1+lsi)*1]), &(inteval->stack[((hsi*45+1860)*1+lsi)*1]), &(inteval->stack[((hsi*30+1905)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),3);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*180+5760)*1+lsi)*1]), &(inteval->stack[((hsi*90+1710)*1+lsi)*1]), &(inteval->stack[((hsi*60+1800)*1+lsi)*1]), &(inteval->stack[((hsi*60+1425)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*270+4860)*1+lsi)*1]), &(inteval->stack[((hsi*180+5760)*1+lsi)*1]), &(inteval->stack[((hsi*90+5670)*1+lsi)*1]),30);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*90+5940)*1+lsi)*1]), &(inteval->stack[((hsi*45+1635)*1+lsi)*1]), &(inteval->stack[((hsi*30+1680)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),3);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*180+6030)*1+lsi)*1]), &(inteval->stack[((hsi*90+1485)*1+lsi)*1]), &(inteval->stack[((hsi*60+1575)*1+lsi)*1]), &(inteval->stack[((hsi*60+1425)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*270+4590)*1+lsi)*1]), &(inteval->stack[((hsi*180+6030)*1+lsi)*1]), &(inteval->stack[((hsi*90+5940)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+6210)*1+lsi)*1]), &(inteval->stack[((hsi*30+720)*1+lsi)*1]), &(inteval->stack[((hsi*30+1395)*1+lsi)*1]), &(inteval->stack[((hsi*30+2130)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+6240)*1+lsi)*1]), &(inteval->stack[((hsi*45+615)*1+lsi)*1]), &(inteval->stack[((hsi*45+1290)*1+lsi)*1]), &(inteval->stack[((hsi*45+2085)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*90+6285)*1+lsi)*1]), &(inteval->stack[((hsi*45+6240)*1+lsi)*1]), &(inteval->stack[((hsi*30+6210)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+2085)*1+lsi)*1]), &(inteval->stack[((hsi*60+660)*1+lsi)*1]), &(inteval->stack[((hsi*60+1335)*1+lsi)*1]), &(inteval->stack[((hsi*60+2025)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+6375)*1+lsi)*1]), &(inteval->stack[((hsi*90+525)*1+lsi)*1]), &(inteval->stack[((hsi*90+1200)*1+lsi)*1]), &(inteval->stack[((hsi*90+1935)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*180+6465)*1+lsi)*1]), &(inteval->stack[((hsi*90+6375)*1+lsi)*1]), &(inteval->stack[((hsi*60+2085)*1+lsi)*1]), &(inteval->stack[((hsi*60+1425)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*270+4320)*1+lsi)*1]), &(inteval->stack[((hsi*180+6465)*1+lsi)*1]), &(inteval->stack[((hsi*90+6285)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1935)*1+lsi)*1]), &(inteval->stack[((hsi*30+495)*1+lsi)*1]), &(inteval->stack[((hsi*30+1170)*1+lsi)*1]), &(inteval->stack[((hsi*30+1905)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1965)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*45+1065)*1+lsi)*1]), &(inteval->stack[((hsi*45+1860)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*90+6375)*1+lsi)*1]), &(inteval->stack[((hsi*45+1965)*1+lsi)*1]), &(inteval->stack[((hsi*30+1935)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1860)*1+lsi)*1]), &(inteval->stack[((hsi*60+435)*1+lsi)*1]), &(inteval->stack[((hsi*60+1110)*1+lsi)*1]), &(inteval->stack[((hsi*60+1800)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1920)*1+lsi)*1]), &(inteval->stack[((hsi*90+300)*1+lsi)*1]), &(inteval->stack[((hsi*90+975)*1+lsi)*1]), &(inteval->stack[((hsi*90+1710)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*180+6645)*1+lsi)*1]), &(inteval->stack[((hsi*90+1920)*1+lsi)*1]), &(inteval->stack[((hsi*60+1860)*1+lsi)*1]), &(inteval->stack[((hsi*60+1425)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*270+4050)*1+lsi)*1]), &(inteval->stack[((hsi*180+6645)*1+lsi)*1]), &(inteval->stack[((hsi*90+6375)*1+lsi)*1]),30);
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1710)*1+lsi)*1]), &(inteval->stack[((hsi*30+240)*1+lsi)*1]), &(inteval->stack[((hsi*30+945)*1+lsi)*1]), &(inteval->stack[((hsi*30+1680)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1740)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]), &(inteval->stack[((hsi*45+840)*1+lsi)*1]), &(inteval->stack[((hsi*45+1635)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*90+1785)*1+lsi)*1]), &(inteval->stack[((hsi*45+1740)*1+lsi)*1]), &(inteval->stack[((hsi*30+1710)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+1875)*1+lsi)*1]), &(inteval->stack[((hsi*60+180)*1+lsi)*1]), &(inteval->stack[((hsi*60+885)*1+lsi)*1]), &(inteval->stack[((hsi*60+1575)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+1935)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*90+750)*1+lsi)*1]), &(inteval->stack[((hsi*90+1485)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*180+1485)*1+lsi)*1]), &(inteval->stack[((hsi*90+1935)*1+lsi)*1]), &(inteval->stack[((hsi*60+1875)*1+lsi)*1]), &(inteval->stack[((hsi*60+1425)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*270+3780)*1+lsi)*1]), &(inteval->stack[((hsi*180+1485)*1+lsi)*1]), &(inteval->stack[((hsi*90+1785)*1+lsi)*1]),30);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*90+1875)*1+lsi)*1]), &(inteval->stack[((hsi*60+1335)*1+lsi)*1]), &(inteval->stack[((hsi*30+1395)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),10);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*135+1965)*1+lsi)*1]), &(inteval->stack[((hsi*90+1200)*1+lsi)*1]), &(inteval->stack[((hsi*45+1290)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*270+3510)*1+lsi)*1]), &(inteval->stack[((hsi*135+1965)*1+lsi)*1]), &(inteval->stack[((hsi*90+1875)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*90+1200)*1+lsi)*1]), &(inteval->stack[((hsi*60+1110)*1+lsi)*1]), &(inteval->stack[((hsi*30+1170)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),10);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*135+1290)*1+lsi)*1]), &(inteval->stack[((hsi*90+975)*1+lsi)*1]), &(inteval->stack[((hsi*45+1065)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*270+3240)*1+lsi)*1]), &(inteval->stack[((hsi*135+1290)*1+lsi)*1]), &(inteval->stack[((hsi*90+1200)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*90+975)*1+lsi)*1]), &(inteval->stack[((hsi*60+885)*1+lsi)*1]), &(inteval->stack[((hsi*30+945)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),10);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*135+1065)*1+lsi)*1]), &(inteval->stack[((hsi*90+750)*1+lsi)*1]), &(inteval->stack[((hsi*45+840)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*270+2970)*1+lsi)*1]), &(inteval->stack[((hsi*135+1065)*1+lsi)*1]), &(inteval->stack[((hsi*90+975)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*90+750)*1+lsi)*1]), &(inteval->stack[((hsi*60+660)*1+lsi)*1]), &(inteval->stack[((hsi*30+720)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),10);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*135+840)*1+lsi)*1]), &(inteval->stack[((hsi*90+525)*1+lsi)*1]), &(inteval->stack[((hsi*45+615)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*270+2700)*1+lsi)*1]), &(inteval->stack[((hsi*135+840)*1+lsi)*1]), &(inteval->stack[((hsi*90+750)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*90+525)*1+lsi)*1]), &(inteval->stack[((hsi*60+435)*1+lsi)*1]), &(inteval->stack[((hsi*30+495)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),10);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*135+615)*1+lsi)*1]), &(inteval->stack[((hsi*90+300)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*270+2430)*1+lsi)*1]), &(inteval->stack[((hsi*135+615)*1+lsi)*1]), &(inteval->stack[((hsi*90+525)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*90+300)*1+lsi)*1]), &(inteval->stack[((hsi*60+180)*1+lsi)*1]), &(inteval->stack[((hsi*30+240)*1+lsi)*1]), &(inteval->stack[((hsi*30+270)*1+lsi)*1]),10);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*135+390)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*270+2160)*1+lsi)*1]), &(inteval->stack[((hsi*135+390)*1+lsi)*1]), &(inteval->stack[((hsi*90+300)*1+lsi)*1]),9);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*270+2160)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*270+2430)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*270+2700)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*270+2970)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*270+3240)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*270+3510)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*270+3780)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*270+4050)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*270+4320)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*270+4590)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*270+4860)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*270+5130)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
