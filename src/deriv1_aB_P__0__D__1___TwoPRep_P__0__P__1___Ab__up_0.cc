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
#include <CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0dp.h>
#include <HRRPart1bra0ket0dp001.h>
#include <HRRPart1bra0ket0dp010.h>
#include <HRRPart1bra0ket0dp100.h>
#include <HRRPart1bra0ket0d001p.h>
#include <HRRPart1bra0ket0d010p.h>
#include <HRRPart1bra0ket0d100p.h>
#include <deriv1_aB_P__0__D__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__D__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1380)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__D__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*54+3324)*1+lsi)*1]), &(inteval->stack[((hsi*30+1332)*1+lsi)*1]), &(inteval->stack[((hsi*18+1362)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),3);
HRRPart1bra0ket0dp001(inteval, &(inteval->stack[((hsi*108+3378)*1+lsi)*1]), &(inteval->stack[((hsi*60+1236)*1+lsi)*1]), &(inteval->stack[((hsi*36+1296)*1+lsi)*1]), &(inteval->stack[((hsi*36+912)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*162+3162)*1+lsi)*1]), &(inteval->stack[((hsi*108+3378)*1+lsi)*1]), &(inteval->stack[((hsi*54+3324)*1+lsi)*1]),18);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*54+3486)*1+lsi)*1]), &(inteval->stack[((hsi*30+1188)*1+lsi)*1]), &(inteval->stack[((hsi*18+1218)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),3);
HRRPart1bra0ket0dp010(inteval, &(inteval->stack[((hsi*108+3540)*1+lsi)*1]), &(inteval->stack[((hsi*60+1092)*1+lsi)*1]), &(inteval->stack[((hsi*36+1152)*1+lsi)*1]), &(inteval->stack[((hsi*36+912)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*162+3000)*1+lsi)*1]), &(inteval->stack[((hsi*108+3540)*1+lsi)*1]), &(inteval->stack[((hsi*54+3486)*1+lsi)*1]),18);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*54+3648)*1+lsi)*1]), &(inteval->stack[((hsi*30+1044)*1+lsi)*1]), &(inteval->stack[((hsi*18+1074)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),3);
HRRPart1bra0ket0dp100(inteval, &(inteval->stack[((hsi*108+3702)*1+lsi)*1]), &(inteval->stack[((hsi*60+948)*1+lsi)*1]), &(inteval->stack[((hsi*36+1008)*1+lsi)*1]), &(inteval->stack[((hsi*36+912)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*162+2838)*1+lsi)*1]), &(inteval->stack[((hsi*108+3702)*1+lsi)*1]), &(inteval->stack[((hsi*54+3648)*1+lsi)*1]),18);
CR_DerivGaussP1InBra_aB_P__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+3810)*1+lsi)*1]), &(inteval->stack[((hsi*18+462)*1+lsi)*1]), &(inteval->stack[((hsi*18+894)*1+lsi)*1]), &(inteval->stack[((hsi*18+1362)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+3828)*1+lsi)*1]), &(inteval->stack[((hsi*30+396)*1+lsi)*1]), &(inteval->stack[((hsi*30+828)*1+lsi)*1]), &(inteval->stack[((hsi*30+1332)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*54+3858)*1+lsi)*1]), &(inteval->stack[((hsi*30+3828)*1+lsi)*1]), &(inteval->stack[((hsi*18+3810)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__D001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1332)*1+lsi)*1]), &(inteval->stack[((hsi*36+426)*1+lsi)*1]), &(inteval->stack[((hsi*36+858)*1+lsi)*1]), &(inteval->stack[((hsi*36+1296)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3912)*1+lsi)*1]), &(inteval->stack[((hsi*60+336)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]), &(inteval->stack[((hsi*60+1236)*1+lsi)*1]));
HRRPart1bra0ket0d001p(inteval, &(inteval->stack[((hsi*108+3972)*1+lsi)*1]), &(inteval->stack[((hsi*60+3912)*1+lsi)*1]), &(inteval->stack[((hsi*36+1332)*1+lsi)*1]), &(inteval->stack[((hsi*36+912)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*162+2676)*1+lsi)*1]), &(inteval->stack[((hsi*108+3972)*1+lsi)*1]), &(inteval->stack[((hsi*54+3858)*1+lsi)*1]),18);
CR_DerivGaussP1InBra_aB_P__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+1236)*1+lsi)*1]), &(inteval->stack[((hsi*18+318)*1+lsi)*1]), &(inteval->stack[((hsi*18+750)*1+lsi)*1]), &(inteval->stack[((hsi*18+1218)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1254)*1+lsi)*1]), &(inteval->stack[((hsi*30+252)*1+lsi)*1]), &(inteval->stack[((hsi*30+684)*1+lsi)*1]), &(inteval->stack[((hsi*30+1188)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*54+1284)*1+lsi)*1]), &(inteval->stack[((hsi*30+1254)*1+lsi)*1]), &(inteval->stack[((hsi*18+1236)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__D010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1188)*1+lsi)*1]), &(inteval->stack[((hsi*36+282)*1+lsi)*1]), &(inteval->stack[((hsi*36+714)*1+lsi)*1]), &(inteval->stack[((hsi*36+1152)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3912)*1+lsi)*1]), &(inteval->stack[((hsi*60+192)*1+lsi)*1]), &(inteval->stack[((hsi*60+624)*1+lsi)*1]), &(inteval->stack[((hsi*60+1092)*1+lsi)*1]));
HRRPart1bra0ket0d010p(inteval, &(inteval->stack[((hsi*108+4080)*1+lsi)*1]), &(inteval->stack[((hsi*60+3912)*1+lsi)*1]), &(inteval->stack[((hsi*36+1188)*1+lsi)*1]), &(inteval->stack[((hsi*36+912)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*162+2514)*1+lsi)*1]), &(inteval->stack[((hsi*108+4080)*1+lsi)*1]), &(inteval->stack[((hsi*54+1284)*1+lsi)*1]),18);
CR_DerivGaussP1InBra_aB_P__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*18+1092)*1+lsi)*1]), &(inteval->stack[((hsi*18+156)*1+lsi)*1]), &(inteval->stack[((hsi*18+606)*1+lsi)*1]), &(inteval->stack[((hsi*18+1074)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*30+1110)*1+lsi)*1]), &(inteval->stack[((hsi*30+60)*1+lsi)*1]), &(inteval->stack[((hsi*30+540)*1+lsi)*1]), &(inteval->stack[((hsi*30+1044)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*54+1140)*1+lsi)*1]), &(inteval->stack[((hsi*30+1110)*1+lsi)*1]), &(inteval->stack[((hsi*18+1092)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__D100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+1044)*1+lsi)*1]), &(inteval->stack[((hsi*36+120)*1+lsi)*1]), &(inteval->stack[((hsi*36+570)*1+lsi)*1]), &(inteval->stack[((hsi*36+1008)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*60+3912)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]), &(inteval->stack[((hsi*60+480)*1+lsi)*1]), &(inteval->stack[((hsi*60+948)*1+lsi)*1]));
HRRPart1bra0ket0d100p(inteval, &(inteval->stack[((hsi*108+4188)*1+lsi)*1]), &(inteval->stack[((hsi*60+3912)*1+lsi)*1]), &(inteval->stack[((hsi*36+1044)*1+lsi)*1]), &(inteval->stack[((hsi*36+912)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*162+2352)*1+lsi)*1]), &(inteval->stack[((hsi*108+4188)*1+lsi)*1]), &(inteval->stack[((hsi*54+1140)*1+lsi)*1]),18);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*54+912)*1+lsi)*1]), &(inteval->stack[((hsi*36+858)*1+lsi)*1]), &(inteval->stack[((hsi*18+894)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),6);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*90+1194)*1+lsi)*1]), &(inteval->stack[((hsi*60+768)*1+lsi)*1]), &(inteval->stack[((hsi*30+828)*1+lsi)*1]), &(inteval->stack[((hsi*30+90)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*162+2190)*1+lsi)*1]), &(inteval->stack[((hsi*90+1194)*1+lsi)*1]), &(inteval->stack[((hsi*54+912)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*54+966)*1+lsi)*1]), &(inteval->stack[((hsi*36+714)*1+lsi)*1]), &(inteval->stack[((hsi*18+750)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),6);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*90+714)*1+lsi)*1]), &(inteval->stack[((hsi*60+624)*1+lsi)*1]), &(inteval->stack[((hsi*30+684)*1+lsi)*1]), &(inteval->stack[((hsi*30+90)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*162+2028)*1+lsi)*1]), &(inteval->stack[((hsi*90+714)*1+lsi)*1]), &(inteval->stack[((hsi*54+966)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*54+1020)*1+lsi)*1]), &(inteval->stack[((hsi*36+570)*1+lsi)*1]), &(inteval->stack[((hsi*18+606)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),6);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*90+570)*1+lsi)*1]), &(inteval->stack[((hsi*60+480)*1+lsi)*1]), &(inteval->stack[((hsi*30+540)*1+lsi)*1]), &(inteval->stack[((hsi*30+90)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*162+1866)*1+lsi)*1]), &(inteval->stack[((hsi*90+570)*1+lsi)*1]), &(inteval->stack[((hsi*54+1020)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*54+660)*1+lsi)*1]), &(inteval->stack[((hsi*36+426)*1+lsi)*1]), &(inteval->stack[((hsi*18+462)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),6);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*90+426)*1+lsi)*1]), &(inteval->stack[((hsi*60+336)*1+lsi)*1]), &(inteval->stack[((hsi*30+396)*1+lsi)*1]), &(inteval->stack[((hsi*30+90)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*162+1704)*1+lsi)*1]), &(inteval->stack[((hsi*90+426)*1+lsi)*1]), &(inteval->stack[((hsi*54+660)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*54+516)*1+lsi)*1]), &(inteval->stack[((hsi*36+282)*1+lsi)*1]), &(inteval->stack[((hsi*18+318)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),6);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*90+282)*1+lsi)*1]), &(inteval->stack[((hsi*60+192)*1+lsi)*1]), &(inteval->stack[((hsi*30+252)*1+lsi)*1]), &(inteval->stack[((hsi*30+90)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*162+1542)*1+lsi)*1]), &(inteval->stack[((hsi*90+282)*1+lsi)*1]), &(inteval->stack[((hsi*54+516)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*54+372)*1+lsi)*1]), &(inteval->stack[((hsi*36+120)*1+lsi)*1]), &(inteval->stack[((hsi*18+156)*1+lsi)*1]), &(inteval->stack[((hsi*18+174)*1+lsi)*1]),6);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*90+120)*1+lsi)*1]), &(inteval->stack[((hsi*60+0)*1+lsi)*1]), &(inteval->stack[((hsi*30+60)*1+lsi)*1]), &(inteval->stack[((hsi*30+90)*1+lsi)*1]),10);
HRRPart1bra0ket0dp(inteval, &(inteval->stack[((hsi*162+1380)*1+lsi)*1]), &(inteval->stack[((hsi*90+120)*1+lsi)*1]), &(inteval->stack[((hsi*54+372)*1+lsi)*1]),9);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*162+1380)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*162+1542)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*162+1704)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*162+1866)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*162+2028)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*162+2190)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*162+2352)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*162+2514)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*162+2676)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*162+2838)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*162+3000)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*162+3162)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
