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
#include <CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001d.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010d.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100d.h>
#include <HRRPart1bra0ket0g100p.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100p.h>
#include <deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,420)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1230)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+1275)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]), &(inteval->stack[((hsi*15+405)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*28+356)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]),1);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+1140)*1+lsi)*1]), &(inteval->stack[((hsi*63+1320)*1+lsi)*1]), &(inteval->stack[((hsi*45+1275)*1+lsi)*1]), &(inteval->stack[((hsi*45+1230)*1+lsi)*1]),1);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+1383)*1+lsi)*1]), &(inteval->stack[((hsi*21+320)*1+lsi)*1]), &(inteval->stack[((hsi*15+341)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+1428)*1+lsi)*1]), &(inteval->stack[((hsi*28+292)*1+lsi)*1]), &(inteval->stack[((hsi*21+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]),1);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+1050)*1+lsi)*1]), &(inteval->stack[((hsi*63+1428)*1+lsi)*1]), &(inteval->stack[((hsi*45+1383)*1+lsi)*1]), &(inteval->stack[((hsi*45+1230)*1+lsi)*1]),1);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+1491)*1+lsi)*1]), &(inteval->stack[((hsi*21+241)*1+lsi)*1]), &(inteval->stack[((hsi*15+277)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+1536)*1+lsi)*1]), &(inteval->stack[((hsi*28+213)*1+lsi)*1]), &(inteval->stack[((hsi*21+241)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]),1);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+960)*1+lsi)*1]), &(inteval->stack[((hsi*63+1536)*1+lsi)*1]), &(inteval->stack[((hsi*45+1491)*1+lsi)*1]), &(inteval->stack[((hsi*45+1230)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*15+384)*1+lsi)*1]), &(inteval->stack[((hsi*15+177)*1+lsi)*1]), &(inteval->stack[((hsi*15+405)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+1620)*1+lsi)*1]), &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*15+384)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+384)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*28+356)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+1665)*1+lsi)*1]), &(inteval->stack[((hsi*28+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]),1);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+870)*1+lsi)*1]), &(inteval->stack[((hsi*63+1665)*1+lsi)*1]), &(inteval->stack[((hsi*45+1620)*1+lsi)*1]), &(inteval->stack[((hsi*45+1230)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*21+320)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*15+356)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]), &(inteval->stack[((hsi*15+341)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+371)*1+lsi)*1]), &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*15+356)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*28+292)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+1728)*1+lsi)*1]), &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]),1);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+780)*1+lsi)*1]), &(inteval->stack[((hsi*63+1728)*1+lsi)*1]), &(inteval->stack[((hsi*45+371)*1+lsi)*1]), &(inteval->stack[((hsi*45+1230)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*21+241)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*15+292)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]), &(inteval->stack[((hsi*15+277)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+307)*1+lsi)*1]), &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*15+292)*1+lsi)*1]), &(inteval->stack[((hsi*15+262)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+241)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+213)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+1791)*1+lsi)*1]), &(inteval->stack[((hsi*28+241)*1+lsi)*1]), &(inteval->stack[((hsi*21+1599)*1+lsi)*1]), &(inteval->stack[((hsi*21+192)*1+lsi)*1]),1);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+690)*1+lsi)*1]), &(inteval->stack[((hsi*63+1791)*1+lsi)*1]), &(inteval->stack[((hsi*45+307)*1+lsi)*1]), &(inteval->stack[((hsi*45+1230)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*15+177)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+237)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+600)*1+lsi)*1]), &(inteval->stack[((hsi*63+237)*1+lsi)*1]), &(inteval->stack[((hsi*45+192)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1854)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+510)*1+lsi)*1]), &(inteval->stack[((hsi*63+1854)*1+lsi)*1]), &(inteval->stack[((hsi*45+128)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1917)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+420)*1+lsi)*1]), &(inteval->stack[((hsi*63+1917)*1+lsi)*1]), &(inteval->stack[((hsi*45+64)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+420)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+510)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+600)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+690)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+780)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+870)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*90+960)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*90+1050)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*90+1140)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
