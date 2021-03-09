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
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart0bra0ket0pp001.h>
#include <HRRPart0bra0ket0pp010.h>
#include <HRRPart0bra0ket0pp100.h>
#include <HRRPart0bra0ket0p001p.h>
#include <HRRPart0bra0ket0p010p.h>
#include <HRRPart0bra0ket0p100p.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3114)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_P__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*135+7974)*1+lsi)*1]), &(inteval->stack[((hsi*90+2547)*1+lsi)*1]), &(inteval->stack[((hsi*45+2961)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),15);
HRRPart0bra0ket0pp001(inteval, &(inteval->stack[((hsi*189+8109)*1+lsi)*1]), &(inteval->stack[((hsi*126+2205)*1+lsi)*1]), &(inteval->stack[((hsi*63+2790)*1+lsi)*1]), &(inteval->stack[((hsi*63+3051)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*405+5139)*1+lsi)*1]), &(inteval->stack[((hsi*189+8109)*1+lsi)*1]), &(inteval->stack[((hsi*135+7974)*1+lsi)*1]),9);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*135+8298)*1+lsi)*1]), &(inteval->stack[((hsi*90+1575)*1+lsi)*1]), &(inteval->stack[((hsi*45+1989)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),15);
HRRPart0bra0ket0pp010(inteval, &(inteval->stack[((hsi*189+8433)*1+lsi)*1]), &(inteval->stack[((hsi*126+1233)*1+lsi)*1]), &(inteval->stack[((hsi*63+1818)*1+lsi)*1]), &(inteval->stack[((hsi*63+3051)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*405+4734)*1+lsi)*1]), &(inteval->stack[((hsi*189+8433)*1+lsi)*1]), &(inteval->stack[((hsi*135+8298)*1+lsi)*1]),9);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*135+8622)*1+lsi)*1]), &(inteval->stack[((hsi*90+558)*1+lsi)*1]), &(inteval->stack[((hsi*45+1017)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),15);
HRRPart0bra0ket0pp100(inteval, &(inteval->stack[((hsi*189+8757)*1+lsi)*1]), &(inteval->stack[((hsi*126+216)*1+lsi)*1]), &(inteval->stack[((hsi*63+846)*1+lsi)*1]), &(inteval->stack[((hsi*63+3051)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*405+4329)*1+lsi)*1]), &(inteval->stack[((hsi*189+8757)*1+lsi)*1]), &(inteval->stack[((hsi*135+8622)*1+lsi)*1]),9);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*135+8946)*1+lsi)*1]), &(inteval->stack[((hsi*90+2457)*1+lsi)*1]), &(inteval->stack[((hsi*45+2916)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),15);
HRRPart0bra0ket0p001p(inteval, &(inteval->stack[((hsi*189+9081)*1+lsi)*1]), &(inteval->stack[((hsi*126+2079)*1+lsi)*1]), &(inteval->stack[((hsi*63+2727)*1+lsi)*1]), &(inteval->stack[((hsi*63+3051)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*405+3924)*1+lsi)*1]), &(inteval->stack[((hsi*189+9081)*1+lsi)*1]), &(inteval->stack[((hsi*135+8946)*1+lsi)*1]),9);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*135+9270)*1+lsi)*1]), &(inteval->stack[((hsi*90+1485)*1+lsi)*1]), &(inteval->stack[((hsi*45+1944)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),15);
HRRPart0bra0ket0p010p(inteval, &(inteval->stack[((hsi*189+9405)*1+lsi)*1]), &(inteval->stack[((hsi*126+1107)*1+lsi)*1]), &(inteval->stack[((hsi*63+1755)*1+lsi)*1]), &(inteval->stack[((hsi*63+3051)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*405+3519)*1+lsi)*1]), &(inteval->stack[((hsi*189+9405)*1+lsi)*1]), &(inteval->stack[((hsi*135+9270)*1+lsi)*1]),9);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*135+9594)*1+lsi)*1]), &(inteval->stack[((hsi*90+468)*1+lsi)*1]), &(inteval->stack[((hsi*45+972)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),15);
HRRPart0bra0ket0p100p(inteval, &(inteval->stack[((hsi*189+9729)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]), &(inteval->stack[((hsi*63+783)*1+lsi)*1]), &(inteval->stack[((hsi*63+3051)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*405+3114)*1+lsi)*1]), &(inteval->stack[((hsi*189+9729)*1+lsi)*1]), &(inteval->stack[((hsi*135+9594)*1+lsi)*1]),9);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+9918)*1+lsi)*1]), &(inteval->stack[((hsi*63+2853)*1+lsi)*1]), &(inteval->stack[((hsi*45+3006)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+10053)*1+lsi)*1]), &(inteval->stack[((hsi*126+2331)*1+lsi)*1]), &(inteval->stack[((hsi*90+2637)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*405+7569)*1+lsi)*1]), &(inteval->stack[((hsi*270+10053)*1+lsi)*1]), &(inteval->stack[((hsi*135+9918)*1+lsi)*1]),45);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+10323)*1+lsi)*1]), &(inteval->stack[((hsi*63+1881)*1+lsi)*1]), &(inteval->stack[((hsi*45+2034)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+10458)*1+lsi)*1]), &(inteval->stack[((hsi*126+1359)*1+lsi)*1]), &(inteval->stack[((hsi*90+1665)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*405+7164)*1+lsi)*1]), &(inteval->stack[((hsi*270+10458)*1+lsi)*1]), &(inteval->stack[((hsi*135+10323)*1+lsi)*1]),45);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+10728)*1+lsi)*1]), &(inteval->stack[((hsi*63+909)*1+lsi)*1]), &(inteval->stack[((hsi*45+1062)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+10863)*1+lsi)*1]), &(inteval->stack[((hsi*126+342)*1+lsi)*1]), &(inteval->stack[((hsi*90+648)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*405+6759)*1+lsi)*1]), &(inteval->stack[((hsi*270+10863)*1+lsi)*1]), &(inteval->stack[((hsi*135+10728)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+3051)*1+lsi)*1]), &(inteval->stack[((hsi*45+2916)*1+lsi)*1]), &(inteval->stack[((hsi*45+2961)*1+lsi)*1]), &(inteval->stack[((hsi*45+3006)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2916)*1+lsi)*1]), &(inteval->stack[((hsi*63+2727)*1+lsi)*1]), &(inteval->stack[((hsi*63+2790)*1+lsi)*1]), &(inteval->stack[((hsi*63+2853)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*135+2727)*1+lsi)*1]), &(inteval->stack[((hsi*63+2916)*1+lsi)*1]), &(inteval->stack[((hsi*45+3051)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2862)*1+lsi)*1]), &(inteval->stack[((hsi*90+2457)*1+lsi)*1]), &(inteval->stack[((hsi*90+2547)*1+lsi)*1]), &(inteval->stack[((hsi*90+2637)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2457)*1+lsi)*1]), &(inteval->stack[((hsi*126+2079)*1+lsi)*1]), &(inteval->stack[((hsi*126+2205)*1+lsi)*1]), &(inteval->stack[((hsi*126+2331)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*270+2079)*1+lsi)*1]), &(inteval->stack[((hsi*126+2457)*1+lsi)*1]), &(inteval->stack[((hsi*90+2862)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*405+6354)*1+lsi)*1]), &(inteval->stack[((hsi*270+2079)*1+lsi)*1]), &(inteval->stack[((hsi*135+2727)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+2349)*1+lsi)*1]), &(inteval->stack[((hsi*45+1944)*1+lsi)*1]), &(inteval->stack[((hsi*45+1989)*1+lsi)*1]), &(inteval->stack[((hsi*45+2034)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2394)*1+lsi)*1]), &(inteval->stack[((hsi*63+1755)*1+lsi)*1]), &(inteval->stack[((hsi*63+1818)*1+lsi)*1]), &(inteval->stack[((hsi*63+1881)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*135+1755)*1+lsi)*1]), &(inteval->stack[((hsi*63+2394)*1+lsi)*1]), &(inteval->stack[((hsi*45+2349)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2349)*1+lsi)*1]), &(inteval->stack[((hsi*90+1485)*1+lsi)*1]), &(inteval->stack[((hsi*90+1575)*1+lsi)*1]), &(inteval->stack[((hsi*90+1665)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+2439)*1+lsi)*1]), &(inteval->stack[((hsi*126+1107)*1+lsi)*1]), &(inteval->stack[((hsi*126+1233)*1+lsi)*1]), &(inteval->stack[((hsi*126+1359)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*270+1107)*1+lsi)*1]), &(inteval->stack[((hsi*126+2439)*1+lsi)*1]), &(inteval->stack[((hsi*90+2349)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*405+5949)*1+lsi)*1]), &(inteval->stack[((hsi*270+1107)*1+lsi)*1]), &(inteval->stack[((hsi*135+1755)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*45+1377)*1+lsi)*1]), &(inteval->stack[((hsi*45+972)*1+lsi)*1]), &(inteval->stack[((hsi*45+1017)*1+lsi)*1]), &(inteval->stack[((hsi*45+1062)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*63+2349)*1+lsi)*1]), &(inteval->stack[((hsi*63+783)*1+lsi)*1]), &(inteval->stack[((hsi*63+846)*1+lsi)*1]), &(inteval->stack[((hsi*63+909)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*135+1422)*1+lsi)*1]), &(inteval->stack[((hsi*63+2349)*1+lsi)*1]), &(inteval->stack[((hsi*45+1377)*1+lsi)*1]), &(inteval->stack[((hsi*45+738)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+2349)*1+lsi)*1]), &(inteval->stack[((hsi*90+468)*1+lsi)*1]), &(inteval->stack[((hsi*90+558)*1+lsi)*1]), &(inteval->stack[((hsi*90+648)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+468)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]), &(inteval->stack[((hsi*126+216)*1+lsi)*1]), &(inteval->stack[((hsi*126+342)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*270+594)*1+lsi)*1]), &(inteval->stack[((hsi*126+468)*1+lsi)*1]), &(inteval->stack[((hsi*90+2349)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*405+5544)*1+lsi)*1]), &(inteval->stack[((hsi*270+594)*1+lsi)*1]), &(inteval->stack[((hsi*135+1422)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*405+3114)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*405+3519)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*405+3924)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*405+4329)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*405+4734)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*405+5139)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*405+5544)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*405+5949)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*405+6354)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*405+6759)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*405+7164)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*405+7569)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
