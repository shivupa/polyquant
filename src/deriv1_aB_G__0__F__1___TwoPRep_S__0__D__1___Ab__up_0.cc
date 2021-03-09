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
#include <CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
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
#include <deriv1_aB_G__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__F__1___TwoPRep_S__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6585)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__F__1___TwoPRep_S__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+17385)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+17835)*1+lsi)*1]), &(inteval->stack[((hsi*225+6210)*1+lsi)*1]), &(inteval->stack[((hsi*150+6435)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+18285)*1+lsi)*1]), &(inteval->stack[((hsi*315+5895)*1+lsi)*1]), &(inteval->stack[((hsi*225+6210)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*900+16485)*1+lsi)*1]), &(inteval->stack[((hsi*675+18285)*1+lsi)*1]), &(inteval->stack[((hsi*450+17835)*1+lsi)*1]), &(inteval->stack[((hsi*450+17385)*1+lsi)*1]),15);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+18960)*1+lsi)*1]), &(inteval->stack[((hsi*225+5520)*1+lsi)*1]), &(inteval->stack[((hsi*150+5745)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+19410)*1+lsi)*1]), &(inteval->stack[((hsi*315+5205)*1+lsi)*1]), &(inteval->stack[((hsi*225+5520)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*900+15585)*1+lsi)*1]), &(inteval->stack[((hsi*675+19410)*1+lsi)*1]), &(inteval->stack[((hsi*450+18960)*1+lsi)*1]), &(inteval->stack[((hsi*450+17385)*1+lsi)*1]),15);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+20085)*1+lsi)*1]), &(inteval->stack[((hsi*225+4680)*1+lsi)*1]), &(inteval->stack[((hsi*150+5055)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+20535)*1+lsi)*1]), &(inteval->stack[((hsi*315+4365)*1+lsi)*1]), &(inteval->stack[((hsi*225+4680)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*900+14685)*1+lsi)*1]), &(inteval->stack[((hsi*675+20535)*1+lsi)*1]), &(inteval->stack[((hsi*450+20085)*1+lsi)*1]), &(inteval->stack[((hsi*450+17385)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*225+3075)*1+lsi)*1]), &(inteval->stack[((hsi*225+3765)*1+lsi)*1]), &(inteval->stack[((hsi*225+6210)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+6210)*1+lsi)*1]), &(inteval->stack[((hsi*150+3300)*1+lsi)*1]), &(inteval->stack[((hsi*150+3990)*1+lsi)*1]), &(inteval->stack[((hsi*150+6435)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+21435)*1+lsi)*1]), &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*150+6210)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+6210)*1+lsi)*1]), &(inteval->stack[((hsi*315+2760)*1+lsi)*1]), &(inteval->stack[((hsi*315+3450)*1+lsi)*1]), &(inteval->stack[((hsi*315+5895)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+21885)*1+lsi)*1]), &(inteval->stack[((hsi*315+6210)*1+lsi)*1]), &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*900+13785)*1+lsi)*1]), &(inteval->stack[((hsi*675+21885)*1+lsi)*1]), &(inteval->stack[((hsi*450+21435)*1+lsi)*1]), &(inteval->stack[((hsi*450+17385)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]), &(inteval->stack[((hsi*225+2385)*1+lsi)*1]), &(inteval->stack[((hsi*225+5520)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5895)*1+lsi)*1]), &(inteval->stack[((hsi*150+1920)*1+lsi)*1]), &(inteval->stack[((hsi*150+2610)*1+lsi)*1]), &(inteval->stack[((hsi*150+5745)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+6045)*1+lsi)*1]), &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*150+5895)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+5520)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]), &(inteval->stack[((hsi*315+2070)*1+lsi)*1]), &(inteval->stack[((hsi*315+5205)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+22560)*1+lsi)*1]), &(inteval->stack[((hsi*315+5520)*1+lsi)*1]), &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*900+12885)*1+lsi)*1]), &(inteval->stack[((hsi*675+22560)*1+lsi)*1]), &(inteval->stack[((hsi*450+6045)*1+lsi)*1]), &(inteval->stack[((hsi*450+17385)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]), &(inteval->stack[((hsi*225+1005)*1+lsi)*1]), &(inteval->stack[((hsi*225+4680)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+5205)*1+lsi)*1]), &(inteval->stack[((hsi*150+540)*1+lsi)*1]), &(inteval->stack[((hsi*150+1230)*1+lsi)*1]), &(inteval->stack[((hsi*150+5055)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+5355)*1+lsi)*1]), &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*150+5205)*1+lsi)*1]), &(inteval->stack[((hsi*150+4905)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+4680)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+690)*1+lsi)*1]), &(inteval->stack[((hsi*315+4365)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+23235)*1+lsi)*1]), &(inteval->stack[((hsi*315+4680)*1+lsi)*1]), &(inteval->stack[((hsi*225+21210)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*900+11985)*1+lsi)*1]), &(inteval->stack[((hsi*675+23235)*1+lsi)*1]), &(inteval->stack[((hsi*450+5355)*1+lsi)*1]), &(inteval->stack[((hsi*450+17385)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+4140)*1+lsi)*1]), &(inteval->stack[((hsi*225+3765)*1+lsi)*1]), &(inteval->stack[((hsi*150+3990)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+4590)*1+lsi)*1]), &(inteval->stack[((hsi*315+3450)*1+lsi)*1]), &(inteval->stack[((hsi*225+3765)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+11085)*1+lsi)*1]), &(inteval->stack[((hsi*675+4590)*1+lsi)*1]), &(inteval->stack[((hsi*450+4140)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+3450)*1+lsi)*1]), &(inteval->stack[((hsi*225+3075)*1+lsi)*1]), &(inteval->stack[((hsi*150+3300)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+23910)*1+lsi)*1]), &(inteval->stack[((hsi*315+2760)*1+lsi)*1]), &(inteval->stack[((hsi*225+3075)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+8385)*1+lsi)*1]), &(inteval->stack[((hsi*675+23910)*1+lsi)*1]), &(inteval->stack[((hsi*450+3450)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+2760)*1+lsi)*1]), &(inteval->stack[((hsi*225+2385)*1+lsi)*1]), &(inteval->stack[((hsi*150+2610)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+24585)*1+lsi)*1]), &(inteval->stack[((hsi*315+2070)*1+lsi)*1]), &(inteval->stack[((hsi*225+2385)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+10185)*1+lsi)*1]), &(inteval->stack[((hsi*675+24585)*1+lsi)*1]), &(inteval->stack[((hsi*450+2760)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+2070)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]), &(inteval->stack[((hsi*150+1920)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+25260)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+7485)*1+lsi)*1]), &(inteval->stack[((hsi*675+25260)*1+lsi)*1]), &(inteval->stack[((hsi*450+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+1380)*1+lsi)*1]), &(inteval->stack[((hsi*225+1005)*1+lsi)*1]), &(inteval->stack[((hsi*150+1230)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+25935)*1+lsi)*1]), &(inteval->stack[((hsi*315+690)*1+lsi)*1]), &(inteval->stack[((hsi*225+1005)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+9285)*1+lsi)*1]), &(inteval->stack[((hsi*675+25935)*1+lsi)*1]), &(inteval->stack[((hsi*450+1380)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+690)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]), &(inteval->stack[((hsi*150+540)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+26610)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+6585)*1+lsi)*1]), &(inteval->stack[((hsi*675+26610)*1+lsi)*1]), &(inteval->stack[((hsi*450+690)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*900+6585)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*900+7485)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*900+8385)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*900+9285)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*900+10185)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*900+11085)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*900+11985)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*900+12885)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*900+13785)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*900+14685)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*900+15585)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*900+16485)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
