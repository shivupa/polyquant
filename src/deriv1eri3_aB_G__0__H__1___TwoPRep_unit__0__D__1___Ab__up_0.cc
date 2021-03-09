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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0h001d.h>
#include <HRRPart1bra0ket0h001p.h>
#include <HRRPart1bra0ket0h010d.h>
#include <HRRPart1bra0ket0h010p.h>
#include <HRRPart1bra0ket0h100d.h>
#include <HRRPart1bra0ket0h100p.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0i001p.h>
#include <HRRPart1bra0ket0i010p.h>
#include <HRRPart1bra0ket0i100p.h>
#include <deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8385)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+25395)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+26340)*1+lsi)*1]), &(inteval->stack[((hsi*420+7335)*1+lsi)*1]), &(inteval->stack[((hsi*315+8070)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+27285)*1+lsi)*1]), &(inteval->stack[((hsi*540+6375)*1+lsi)*1]), &(inteval->stack[((hsi*420+7335)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1890+23505)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27285)*1+lsi)*1]), &(inteval->stack[((hsi*945+26340)*1+lsi)*1]), &(inteval->stack[((hsi*945+25395)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+28545)*1+lsi)*1]), &(inteval->stack[((hsi*420+4785)*1+lsi)*1]), &(inteval->stack[((hsi*315+5520)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+29490)*1+lsi)*1]), &(inteval->stack[((hsi*540+3825)*1+lsi)*1]), &(inteval->stack[((hsi*420+4785)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1890+21615)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29490)*1+lsi)*1]), &(inteval->stack[((hsi*945+28545)*1+lsi)*1]), &(inteval->stack[((hsi*945+25395)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+30750)*1+lsi)*1]), &(inteval->stack[((hsi*420+1920)*1+lsi)*1]), &(inteval->stack[((hsi*315+2970)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+31695)*1+lsi)*1]), &(inteval->stack[((hsi*540+960)*1+lsi)*1]), &(inteval->stack[((hsi*420+1920)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1890+19725)*1+lsi)*1]), &(inteval->stack[((hsi*1260+31695)*1+lsi)*1]), &(inteval->stack[((hsi*945+30750)*1+lsi)*1]), &(inteval->stack[((hsi*945+25395)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+32955)*1+lsi)*1]), &(inteval->stack[((hsi*420+6915)*1+lsi)*1]), &(inteval->stack[((hsi*315+7755)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+33900)*1+lsi)*1]), &(inteval->stack[((hsi*540+5835)*1+lsi)*1]), &(inteval->stack[((hsi*420+6915)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+12165)*1+lsi)*1]), &(inteval->stack[((hsi*1260+33900)*1+lsi)*1]), &(inteval->stack[((hsi*945+32955)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+35160)*1+lsi)*1]), &(inteval->stack[((hsi*420+4365)*1+lsi)*1]), &(inteval->stack[((hsi*315+5205)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+36105)*1+lsi)*1]), &(inteval->stack[((hsi*540+3285)*1+lsi)*1]), &(inteval->stack[((hsi*420+4365)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+10275)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36105)*1+lsi)*1]), &(inteval->stack[((hsi*945+35160)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+37365)*1+lsi)*1]), &(inteval->stack[((hsi*420+1500)*1+lsi)*1]), &(inteval->stack[((hsi*315+2655)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+38310)*1+lsi)*1]), &(inteval->stack[((hsi*540+420)*1+lsi)*1]), &(inteval->stack[((hsi*420+1500)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+8385)*1+lsi)*1]), &(inteval->stack[((hsi*1260+38310)*1+lsi)*1]), &(inteval->stack[((hsi*945+37365)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*420+6915)*1+lsi)*1]), &(inteval->stack[((hsi*420+7335)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+6915)*1+lsi)*1]), &(inteval->stack[((hsi*315+7755)*1+lsi)*1]), &(inteval->stack[((hsi*315+8070)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+7230)*1+lsi)*1]), &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*315+6915)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+39990)*1+lsi)*1]), &(inteval->stack[((hsi*540+5835)*1+lsi)*1]), &(inteval->stack[((hsi*540+6375)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*1260+5835)*1+lsi)*1]), &(inteval->stack[((hsi*540+39990)*1+lsi)*1]), &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*1890+17835)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5835)*1+lsi)*1]), &(inteval->stack[((hsi*945+7230)*1+lsi)*1]), &(inteval->stack[((hsi*945+25395)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*420+4365)*1+lsi)*1]), &(inteval->stack[((hsi*420+4785)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+4365)*1+lsi)*1]), &(inteval->stack[((hsi*315+5205)*1+lsi)*1]), &(inteval->stack[((hsi*315+5520)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+4680)*1+lsi)*1]), &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*315+4365)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+39990)*1+lsi)*1]), &(inteval->stack[((hsi*540+3285)*1+lsi)*1]), &(inteval->stack[((hsi*540+3825)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*1260+3285)*1+lsi)*1]), &(inteval->stack[((hsi*540+39990)*1+lsi)*1]), &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*1890+15945)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3285)*1+lsi)*1]), &(inteval->stack[((hsi*945+4680)*1+lsi)*1]), &(inteval->stack[((hsi*945+25395)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*420+1500)*1+lsi)*1]), &(inteval->stack[((hsi*420+1920)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+1500)*1+lsi)*1]), &(inteval->stack[((hsi*315+2655)*1+lsi)*1]), &(inteval->stack[((hsi*315+2970)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+39990)*1+lsi)*1]), &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*315+1500)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*540+1500)*1+lsi)*1]), &(inteval->stack[((hsi*540+420)*1+lsi)*1]), &(inteval->stack[((hsi*540+960)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*1260+40935)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]), &(inteval->stack[((hsi*420+39570)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]),15);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*1890+14055)*1+lsi)*1]), &(inteval->stack[((hsi*1260+40935)*1+lsi)*1]), &(inteval->stack[((hsi*945+39990)*1+lsi)*1]), &(inteval->stack[((hsi*945+25395)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1890+8385)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1890+10275)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1890+12165)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1890+14055)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1890+15945)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1890+17835)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1890+19725)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1890+21615)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1890+23505)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
