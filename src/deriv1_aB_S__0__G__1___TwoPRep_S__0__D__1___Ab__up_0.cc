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
#include <CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,612)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_S__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+1692)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+1737)*1+lsi)*1]), &(inteval->stack[((hsi*21+576)*1+lsi)*1]), &(inteval->stack[((hsi*15+597)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+1782)*1+lsi)*1]), &(inteval->stack[((hsi*28+548)*1+lsi)*1]), &(inteval->stack[((hsi*21+576)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]),1);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+1602)*1+lsi)*1]), &(inteval->stack[((hsi*63+1782)*1+lsi)*1]), &(inteval->stack[((hsi*45+1737)*1+lsi)*1]), &(inteval->stack[((hsi*45+1692)*1+lsi)*1]),1);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+1845)*1+lsi)*1]), &(inteval->stack[((hsi*21+512)*1+lsi)*1]), &(inteval->stack[((hsi*15+533)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+1890)*1+lsi)*1]), &(inteval->stack[((hsi*28+484)*1+lsi)*1]), &(inteval->stack[((hsi*21+512)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]),1);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+1512)*1+lsi)*1]), &(inteval->stack[((hsi*63+1890)*1+lsi)*1]), &(inteval->stack[((hsi*45+1845)*1+lsi)*1]), &(inteval->stack[((hsi*45+1692)*1+lsi)*1]),1);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+1953)*1+lsi)*1]), &(inteval->stack[((hsi*21+433)*1+lsi)*1]), &(inteval->stack[((hsi*15+469)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+1998)*1+lsi)*1]), &(inteval->stack[((hsi*28+405)*1+lsi)*1]), &(inteval->stack[((hsi*21+433)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]),1);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+1422)*1+lsi)*1]), &(inteval->stack[((hsi*63+1998)*1+lsi)*1]), &(inteval->stack[((hsi*45+1953)*1+lsi)*1]), &(inteval->stack[((hsi*45+1692)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]), &(inteval->stack[((hsi*21+576)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*15+576)*1+lsi)*1]), &(inteval->stack[((hsi*15+177)*1+lsi)*1]), &(inteval->stack[((hsi*15+369)*1+lsi)*1]), &(inteval->stack[((hsi*15+597)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*45+2082)*1+lsi)*1]), &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*15+576)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+576)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*28+548)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+2127)*1+lsi)*1]), &(inteval->stack[((hsi*28+576)*1+lsi)*1]), &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]),1);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*90+1332)*1+lsi)*1]), &(inteval->stack[((hsi*63+2127)*1+lsi)*1]), &(inteval->stack[((hsi*45+2082)*1+lsi)*1]), &(inteval->stack[((hsi*45+1692)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]), &(inteval->stack[((hsi*21+512)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*15+548)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]), &(inteval->stack[((hsi*15+305)*1+lsi)*1]), &(inteval->stack[((hsi*15+533)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*45+563)*1+lsi)*1]), &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*15+548)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+512)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*28+256)*1+lsi)*1]), &(inteval->stack[((hsi*28+484)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+2190)*1+lsi)*1]), &(inteval->stack[((hsi*28+512)*1+lsi)*1]), &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]),1);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*90+1242)*1+lsi)*1]), &(inteval->stack[((hsi*63+2190)*1+lsi)*1]), &(inteval->stack[((hsi*45+563)*1+lsi)*1]), &(inteval->stack[((hsi*45+1692)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]), &(inteval->stack[((hsi*21+433)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*15+484)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]), &(inteval->stack[((hsi*15+241)*1+lsi)*1]), &(inteval->stack[((hsi*15+469)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*45+499)*1+lsi)*1]), &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*15+484)*1+lsi)*1]), &(inteval->stack[((hsi*15+454)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+433)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+192)*1+lsi)*1]), &(inteval->stack[((hsi*28+405)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+2253)*1+lsi)*1]), &(inteval->stack[((hsi*28+433)*1+lsi)*1]), &(inteval->stack[((hsi*21+2061)*1+lsi)*1]), &(inteval->stack[((hsi*21+384)*1+lsi)*1]),1);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*90+1152)*1+lsi)*1]), &(inteval->stack[((hsi*63+2253)*1+lsi)*1]), &(inteval->stack[((hsi*45+499)*1+lsi)*1]), &(inteval->stack[((hsi*45+1692)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+384)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]), &(inteval->stack[((hsi*15+369)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+429)*1+lsi)*1]), &(inteval->stack[((hsi*28+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+348)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1062)*1+lsi)*1]), &(inteval->stack[((hsi*63+429)*1+lsi)*1]), &(inteval->stack[((hsi*45+384)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+320)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]), &(inteval->stack[((hsi*15+305)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2316)*1+lsi)*1]), &(inteval->stack[((hsi*28+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+284)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+972)*1+lsi)*1]), &(inteval->stack[((hsi*63+2316)*1+lsi)*1]), &(inteval->stack[((hsi*45+320)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+256)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]), &(inteval->stack[((hsi*15+241)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2379)*1+lsi)*1]), &(inteval->stack[((hsi*28+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+220)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+882)*1+lsi)*1]), &(inteval->stack[((hsi*63+2379)*1+lsi)*1]), &(inteval->stack[((hsi*45+256)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+192)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]), &(inteval->stack[((hsi*15+177)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2442)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+792)*1+lsi)*1]), &(inteval->stack[((hsi*63+2442)*1+lsi)*1]), &(inteval->stack[((hsi*45+192)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]), &(inteval->stack[((hsi*15+113)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2505)*1+lsi)*1]), &(inteval->stack[((hsi*28+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+92)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+702)*1+lsi)*1]), &(inteval->stack[((hsi*63+2505)*1+lsi)*1]), &(inteval->stack[((hsi*45+128)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+64)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]), &(inteval->stack[((hsi*15+49)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2568)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+28)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+612)*1+lsi)*1]), &(inteval->stack[((hsi*63+2568)*1+lsi)*1]), &(inteval->stack[((hsi*45+64)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*90+612)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*90+702)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*90+792)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*90+882)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*90+972)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*90+1062)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*90+1152)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*90+1242)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*90+1332)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*90+1422)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*90+1512)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*90+1602)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
