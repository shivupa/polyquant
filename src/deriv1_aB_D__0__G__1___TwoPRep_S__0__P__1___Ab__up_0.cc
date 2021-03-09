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
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_D__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_D__0__G__1___TwoPRep_S__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2034)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_D__0__G__1___TwoPRep_S__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+5004)*1+lsi)*1]), &(inteval->stack[((hsi*126+1818)*1+lsi)*1]), &(inteval->stack[((hsi*90+1944)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+4734)*1+lsi)*1]), &(inteval->stack[((hsi*126+1602)*1+lsi)*1]), &(inteval->stack[((hsi*90+1728)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+4464)*1+lsi)*1]), &(inteval->stack[((hsi*126+1386)*1+lsi)*1]), &(inteval->stack[((hsi*90+1512)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5274)*1+lsi)*1]), &(inteval->stack[((hsi*90+648)*1+lsi)*1]), &(inteval->stack[((hsi*90+1296)*1+lsi)*1]), &(inteval->stack[((hsi*90+1944)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5364)*1+lsi)*1]), &(inteval->stack[((hsi*126+522)*1+lsi)*1]), &(inteval->stack[((hsi*126+1170)*1+lsi)*1]), &(inteval->stack[((hsi*126+1818)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*270+4194)*1+lsi)*1]), &(inteval->stack[((hsi*126+5364)*1+lsi)*1]), &(inteval->stack[((hsi*90+5274)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5490)*1+lsi)*1]), &(inteval->stack[((hsi*90+432)*1+lsi)*1]), &(inteval->stack[((hsi*90+1080)*1+lsi)*1]), &(inteval->stack[((hsi*90+1728)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5580)*1+lsi)*1]), &(inteval->stack[((hsi*126+306)*1+lsi)*1]), &(inteval->stack[((hsi*126+954)*1+lsi)*1]), &(inteval->stack[((hsi*126+1602)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*270+3924)*1+lsi)*1]), &(inteval->stack[((hsi*126+5580)*1+lsi)*1]), &(inteval->stack[((hsi*90+5490)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*90+5706)*1+lsi)*1]), &(inteval->stack[((hsi*90+216)*1+lsi)*1]), &(inteval->stack[((hsi*90+864)*1+lsi)*1]), &(inteval->stack[((hsi*90+1512)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*126+5796)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]), &(inteval->stack[((hsi*126+738)*1+lsi)*1]), &(inteval->stack[((hsi*126+1386)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*270+3654)*1+lsi)*1]), &(inteval->stack[((hsi*126+5796)*1+lsi)*1]), &(inteval->stack[((hsi*90+5706)*1+lsi)*1]), &(inteval->stack[((hsi*90+0)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+3384)*1+lsi)*1]), &(inteval->stack[((hsi*126+1170)*1+lsi)*1]), &(inteval->stack[((hsi*90+1296)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+3114)*1+lsi)*1]), &(inteval->stack[((hsi*126+954)*1+lsi)*1]), &(inteval->stack[((hsi*90+1080)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+2844)*1+lsi)*1]), &(inteval->stack[((hsi*126+738)*1+lsi)*1]), &(inteval->stack[((hsi*90+864)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+2574)*1+lsi)*1]), &(inteval->stack[((hsi*126+522)*1+lsi)*1]), &(inteval->stack[((hsi*90+648)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+2304)*1+lsi)*1]), &(inteval->stack[((hsi*126+306)*1+lsi)*1]), &(inteval->stack[((hsi*90+432)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+2034)*1+lsi)*1]), &(inteval->stack[((hsi*126+90)*1+lsi)*1]), &(inteval->stack[((hsi*90+216)*1+lsi)*1]),6);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*270+2034)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*270+2304)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*270+2574)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*270+2844)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*270+3114)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*270+3384)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*270+3654)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*270+3924)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*270+4194)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*270+4464)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*270+4734)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*270+5004)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
