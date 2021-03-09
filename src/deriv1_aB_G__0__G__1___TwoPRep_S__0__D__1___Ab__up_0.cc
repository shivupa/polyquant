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
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_G__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__G__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9180)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__G__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+25380)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+26055)*1+lsi)*1]), &(inteval->stack[((hsi*315+8640)*1+lsi)*1]), &(inteval->stack[((hsi*225+8955)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+26730)*1+lsi)*1]), &(inteval->stack[((hsi*420+8220)*1+lsi)*1]), &(inteval->stack[((hsi*315+8640)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1350+24030)*1+lsi)*1]), &(inteval->stack[((hsi*945+26730)*1+lsi)*1]), &(inteval->stack[((hsi*675+26055)*1+lsi)*1]), &(inteval->stack[((hsi*675+25380)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+27675)*1+lsi)*1]), &(inteval->stack[((hsi*315+7680)*1+lsi)*1]), &(inteval->stack[((hsi*225+7995)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+28350)*1+lsi)*1]), &(inteval->stack[((hsi*420+7260)*1+lsi)*1]), &(inteval->stack[((hsi*315+7680)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1350+22680)*1+lsi)*1]), &(inteval->stack[((hsi*945+28350)*1+lsi)*1]), &(inteval->stack[((hsi*675+27675)*1+lsi)*1]), &(inteval->stack[((hsi*675+25380)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+29295)*1+lsi)*1]), &(inteval->stack[((hsi*315+6495)*1+lsi)*1]), &(inteval->stack[((hsi*225+7035)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+29970)*1+lsi)*1]), &(inteval->stack[((hsi*420+6075)*1+lsi)*1]), &(inteval->stack[((hsi*315+6495)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1350+21330)*1+lsi)*1]), &(inteval->stack[((hsi*945+29970)*1+lsi)*1]), &(inteval->stack[((hsi*675+29295)*1+lsi)*1]), &(inteval->stack[((hsi*675+25380)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]), &(inteval->stack[((hsi*315+5220)*1+lsi)*1]), &(inteval->stack[((hsi*315+8640)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+8640)*1+lsi)*1]), &(inteval->stack[((hsi*225+2655)*1+lsi)*1]), &(inteval->stack[((hsi*225+5535)*1+lsi)*1]), &(inteval->stack[((hsi*225+8955)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+31230)*1+lsi)*1]), &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*225+8640)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+8640)*1+lsi)*1]), &(inteval->stack[((hsi*420+1920)*1+lsi)*1]), &(inteval->stack[((hsi*420+4800)*1+lsi)*1]), &(inteval->stack[((hsi*420+8220)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*945+31905)*1+lsi)*1]), &(inteval->stack[((hsi*420+8640)*1+lsi)*1]), &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0g001d(inteval, &(inteval->stack[((hsi*1350+19980)*1+lsi)*1]), &(inteval->stack[((hsi*945+31905)*1+lsi)*1]), &(inteval->stack[((hsi*675+31230)*1+lsi)*1]), &(inteval->stack[((hsi*675+25380)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]), &(inteval->stack[((hsi*315+4260)*1+lsi)*1]), &(inteval->stack[((hsi*315+7680)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+8220)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]), &(inteval->stack[((hsi*225+4575)*1+lsi)*1]), &(inteval->stack[((hsi*225+7995)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+8445)*1+lsi)*1]), &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*225+8220)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+7680)*1+lsi)*1]), &(inteval->stack[((hsi*420+960)*1+lsi)*1]), &(inteval->stack[((hsi*420+3840)*1+lsi)*1]), &(inteval->stack[((hsi*420+7260)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*945+32850)*1+lsi)*1]), &(inteval->stack[((hsi*420+7680)*1+lsi)*1]), &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0g010d(inteval, &(inteval->stack[((hsi*1350+18630)*1+lsi)*1]), &(inteval->stack[((hsi*945+32850)*1+lsi)*1]), &(inteval->stack[((hsi*675+8445)*1+lsi)*1]), &(inteval->stack[((hsi*675+25380)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*315+420)*1+lsi)*1]), &(inteval->stack[((hsi*315+3300)*1+lsi)*1]), &(inteval->stack[((hsi*315+6495)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+7260)*1+lsi)*1]), &(inteval->stack[((hsi*225+735)*1+lsi)*1]), &(inteval->stack[((hsi*225+3615)*1+lsi)*1]), &(inteval->stack[((hsi*225+7035)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+7485)*1+lsi)*1]), &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*225+7260)*1+lsi)*1]), &(inteval->stack[((hsi*225+6810)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__I100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*420+6495)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*420+2880)*1+lsi)*1]), &(inteval->stack[((hsi*420+6075)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*945+33795)*1+lsi)*1]), &(inteval->stack[((hsi*420+6495)*1+lsi)*1]), &(inteval->stack[((hsi*315+30915)*1+lsi)*1]), &(inteval->stack[((hsi*315+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0g100d(inteval, &(inteval->stack[((hsi*1350+17280)*1+lsi)*1]), &(inteval->stack[((hsi*945+33795)*1+lsi)*1]), &(inteval->stack[((hsi*675+7485)*1+lsi)*1]), &(inteval->stack[((hsi*675+25380)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+5760)*1+lsi)*1]), &(inteval->stack[((hsi*315+5220)*1+lsi)*1]), &(inteval->stack[((hsi*225+5535)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+6435)*1+lsi)*1]), &(inteval->stack[((hsi*420+4800)*1+lsi)*1]), &(inteval->stack[((hsi*315+5220)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+15930)*1+lsi)*1]), &(inteval->stack[((hsi*945+6435)*1+lsi)*1]), &(inteval->stack[((hsi*675+5760)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+4800)*1+lsi)*1]), &(inteval->stack[((hsi*315+4260)*1+lsi)*1]), &(inteval->stack[((hsi*225+4575)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+34740)*1+lsi)*1]), &(inteval->stack[((hsi*420+3840)*1+lsi)*1]), &(inteval->stack[((hsi*315+4260)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+14580)*1+lsi)*1]), &(inteval->stack[((hsi*945+34740)*1+lsi)*1]), &(inteval->stack[((hsi*675+4800)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+3840)*1+lsi)*1]), &(inteval->stack[((hsi*315+3300)*1+lsi)*1]), &(inteval->stack[((hsi*225+3615)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+35685)*1+lsi)*1]), &(inteval->stack[((hsi*420+2880)*1+lsi)*1]), &(inteval->stack[((hsi*315+3300)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+13230)*1+lsi)*1]), &(inteval->stack[((hsi*945+35685)*1+lsi)*1]), &(inteval->stack[((hsi*675+3840)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+2880)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]), &(inteval->stack[((hsi*225+2655)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+36630)*1+lsi)*1]), &(inteval->stack[((hsi*420+1920)*1+lsi)*1]), &(inteval->stack[((hsi*315+2340)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+11880)*1+lsi)*1]), &(inteval->stack[((hsi*945+36630)*1+lsi)*1]), &(inteval->stack[((hsi*675+2880)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+1920)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+37575)*1+lsi)*1]), &(inteval->stack[((hsi*420+960)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+10530)*1+lsi)*1]), &(inteval->stack[((hsi*945+37575)*1+lsi)*1]), &(inteval->stack[((hsi*675+1920)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+960)*1+lsi)*1]), &(inteval->stack[((hsi*315+420)*1+lsi)*1]), &(inteval->stack[((hsi*225+735)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+38520)*1+lsi)*1]), &(inteval->stack[((hsi*420+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+420)*1+lsi)*1]),15);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1350+9180)*1+lsi)*1]), &(inteval->stack[((hsi*945+38520)*1+lsi)*1]), &(inteval->stack[((hsi*675+960)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1350+9180)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1350+10530)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1350+11880)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1350+13230)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1350+14580)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1350+15930)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1350+17280)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1350+18630)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1350+19980)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1350+21330)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1350+22680)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1350+24030)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
