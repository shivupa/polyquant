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
#include <CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0fp001.h>
#include <HRRPart0bra0ket0fp010.h>
#include <HRRPart0bra0ket0fp100.h>
#include <HRRPart0bra0ket0f001p.h>
#include <HRRPart0bra0ket0f010p.h>
#include <HRRPart0bra0ket0f100p.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8685)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_F__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*450+24885)*1+lsi)*1]), &(inteval->stack[((hsi*210+8325)*1+lsi)*1]), &(inteval->stack[((hsi*150+8535)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),10);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+25335)*1+lsi)*1]), &(inteval->stack[((hsi*315+7785)*1+lsi)*1]), &(inteval->stack[((hsi*225+8100)*1+lsi)*1]), &(inteval->stack[((hsi*225+5760)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+23535)*1+lsi)*1]), &(inteval->stack[((hsi*675+25335)*1+lsi)*1]), &(inteval->stack[((hsi*450+24885)*1+lsi)*1]),45);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*450+26010)*1+lsi)*1]), &(inteval->stack[((hsi*210+7425)*1+lsi)*1]), &(inteval->stack[((hsi*150+7635)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),10);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+26460)*1+lsi)*1]), &(inteval->stack[((hsi*315+6885)*1+lsi)*1]), &(inteval->stack[((hsi*225+7200)*1+lsi)*1]), &(inteval->stack[((hsi*225+5760)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+22185)*1+lsi)*1]), &(inteval->stack[((hsi*675+26460)*1+lsi)*1]), &(inteval->stack[((hsi*450+26010)*1+lsi)*1]),45);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*450+27135)*1+lsi)*1]), &(inteval->stack[((hsi*210+6525)*1+lsi)*1]), &(inteval->stack[((hsi*150+6735)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),10);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+27585)*1+lsi)*1]), &(inteval->stack[((hsi*315+5985)*1+lsi)*1]), &(inteval->stack[((hsi*225+6300)*1+lsi)*1]), &(inteval->stack[((hsi*225+5760)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+20835)*1+lsi)*1]), &(inteval->stack[((hsi*675+27585)*1+lsi)*1]), &(inteval->stack[((hsi*450+27135)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_F__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+28260)*1+lsi)*1]), &(inteval->stack[((hsi*150+2910)*1+lsi)*1]), &(inteval->stack[((hsi*150+5610)*1+lsi)*1]), &(inteval->stack[((hsi*150+8535)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+28410)*1+lsi)*1]), &(inteval->stack[((hsi*210+2475)*1+lsi)*1]), &(inteval->stack[((hsi*210+5175)*1+lsi)*1]), &(inteval->stack[((hsi*210+8325)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*450+28620)*1+lsi)*1]), &(inteval->stack[((hsi*210+28410)*1+lsi)*1]), &(inteval->stack[((hsi*150+28260)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+8325)*1+lsi)*1]), &(inteval->stack[((hsi*225+2685)*1+lsi)*1]), &(inteval->stack[((hsi*225+5385)*1+lsi)*1]), &(inteval->stack[((hsi*225+8100)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+28260)*1+lsi)*1]), &(inteval->stack[((hsi*315+2160)*1+lsi)*1]), &(inteval->stack[((hsi*315+4860)*1+lsi)*1]), &(inteval->stack[((hsi*315+7785)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+29070)*1+lsi)*1]), &(inteval->stack[((hsi*315+28260)*1+lsi)*1]), &(inteval->stack[((hsi*225+8325)*1+lsi)*1]), &(inteval->stack[((hsi*225+5760)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+19485)*1+lsi)*1]), &(inteval->stack[((hsi*675+29070)*1+lsi)*1]), &(inteval->stack[((hsi*450+28620)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_F__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+7785)*1+lsi)*1]), &(inteval->stack[((hsi*150+2010)*1+lsi)*1]), &(inteval->stack[((hsi*150+4710)*1+lsi)*1]), &(inteval->stack[((hsi*150+7635)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+7935)*1+lsi)*1]), &(inteval->stack[((hsi*210+1575)*1+lsi)*1]), &(inteval->stack[((hsi*210+4275)*1+lsi)*1]), &(inteval->stack[((hsi*210+7425)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*450+8145)*1+lsi)*1]), &(inteval->stack[((hsi*210+7935)*1+lsi)*1]), &(inteval->stack[((hsi*150+7785)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+7425)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]), &(inteval->stack[((hsi*225+4485)*1+lsi)*1]), &(inteval->stack[((hsi*225+7200)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+7650)*1+lsi)*1]), &(inteval->stack[((hsi*315+1260)*1+lsi)*1]), &(inteval->stack[((hsi*315+3960)*1+lsi)*1]), &(inteval->stack[((hsi*315+6885)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+29745)*1+lsi)*1]), &(inteval->stack[((hsi*315+7650)*1+lsi)*1]), &(inteval->stack[((hsi*225+7425)*1+lsi)*1]), &(inteval->stack[((hsi*225+5760)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+18135)*1+lsi)*1]), &(inteval->stack[((hsi*675+29745)*1+lsi)*1]), &(inteval->stack[((hsi*450+8145)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_F__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+6885)*1+lsi)*1]), &(inteval->stack[((hsi*150+960)*1+lsi)*1]), &(inteval->stack[((hsi*150+3810)*1+lsi)*1]), &(inteval->stack[((hsi*150+6735)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*210+7035)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*210+3375)*1+lsi)*1]), &(inteval->stack[((hsi*210+6525)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*450+7245)*1+lsi)*1]), &(inteval->stack[((hsi*210+7035)*1+lsi)*1]), &(inteval->stack[((hsi*150+6885)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+6525)*1+lsi)*1]), &(inteval->stack[((hsi*225+735)*1+lsi)*1]), &(inteval->stack[((hsi*225+3585)*1+lsi)*1]), &(inteval->stack[((hsi*225+6300)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+6750)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+3060)*1+lsi)*1]), &(inteval->stack[((hsi*315+5985)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+30420)*1+lsi)*1]), &(inteval->stack[((hsi*315+6750)*1+lsi)*1]), &(inteval->stack[((hsi*225+6525)*1+lsi)*1]), &(inteval->stack[((hsi*225+5760)*1+lsi)*1]),15);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+16785)*1+lsi)*1]), &(inteval->stack[((hsi*675+30420)*1+lsi)*1]), &(inteval->stack[((hsi*450+7245)*1+lsi)*1]),45);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+7695)*1+lsi)*1]), &(inteval->stack[((hsi*225+5385)*1+lsi)*1]), &(inteval->stack[((hsi*150+5610)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),15);
HRRPart0bra0ket0fp001(inteval, &(inteval->stack[((hsi*630+5385)*1+lsi)*1]), &(inteval->stack[((hsi*315+4860)*1+lsi)*1]), &(inteval->stack[((hsi*210+5175)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1350+15435)*1+lsi)*1]), &(inteval->stack[((hsi*630+5385)*1+lsi)*1]), &(inteval->stack[((hsi*450+7695)*1+lsi)*1]),30);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+6015)*1+lsi)*1]), &(inteval->stack[((hsi*225+4485)*1+lsi)*1]), &(inteval->stack[((hsi*150+4710)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),15);
HRRPart0bra0ket0fp010(inteval, &(inteval->stack[((hsi*630+4485)*1+lsi)*1]), &(inteval->stack[((hsi*315+3960)*1+lsi)*1]), &(inteval->stack[((hsi*210+4275)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1350+14085)*1+lsi)*1]), &(inteval->stack[((hsi*630+4485)*1+lsi)*1]), &(inteval->stack[((hsi*450+6015)*1+lsi)*1]),30);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+6465)*1+lsi)*1]), &(inteval->stack[((hsi*225+3585)*1+lsi)*1]), &(inteval->stack[((hsi*150+3810)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),15);
HRRPart0bra0ket0fp100(inteval, &(inteval->stack[((hsi*630+3585)*1+lsi)*1]), &(inteval->stack[((hsi*315+3060)*1+lsi)*1]), &(inteval->stack[((hsi*210+3375)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1350+12735)*1+lsi)*1]), &(inteval->stack[((hsi*630+3585)*1+lsi)*1]), &(inteval->stack[((hsi*450+6465)*1+lsi)*1]),30);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+3060)*1+lsi)*1]), &(inteval->stack[((hsi*225+2685)*1+lsi)*1]), &(inteval->stack[((hsi*150+2910)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),15);
HRRPart0bra0ket0f001p(inteval, &(inteval->stack[((hsi*630+31095)*1+lsi)*1]), &(inteval->stack[((hsi*315+2160)*1+lsi)*1]), &(inteval->stack[((hsi*210+2475)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1350+11385)*1+lsi)*1]), &(inteval->stack[((hsi*630+31095)*1+lsi)*1]), &(inteval->stack[((hsi*450+3060)*1+lsi)*1]),30);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+2160)*1+lsi)*1]), &(inteval->stack[((hsi*225+1785)*1+lsi)*1]), &(inteval->stack[((hsi*150+2010)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),15);
HRRPart0bra0ket0f010p(inteval, &(inteval->stack[((hsi*630+31725)*1+lsi)*1]), &(inteval->stack[((hsi*315+1260)*1+lsi)*1]), &(inteval->stack[((hsi*210+1575)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1350+10035)*1+lsi)*1]), &(inteval->stack[((hsi*630+31725)*1+lsi)*1]), &(inteval->stack[((hsi*450+2160)*1+lsi)*1]),30);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+2610)*1+lsi)*1]), &(inteval->stack[((hsi*225+735)*1+lsi)*1]), &(inteval->stack[((hsi*150+960)*1+lsi)*1]), &(inteval->stack[((hsi*150+1110)*1+lsi)*1]),15);
HRRPart0bra0ket0f100p(inteval, &(inteval->stack[((hsi*630+735)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*210+525)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1350+8685)*1+lsi)*1]), &(inteval->stack[((hsi*630+735)*1+lsi)*1]), &(inteval->stack[((hsi*450+2610)*1+lsi)*1]),30);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1350+8685)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1350+10035)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1350+11385)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1350+12735)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1350+14085)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1350+15435)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1350+16785)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1350+18135)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1350+19485)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1350+20835)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1350+22185)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1350+23535)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
