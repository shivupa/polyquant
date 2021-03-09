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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0gp001.h>
#include <HRRPart0bra0ket0gp010.h>
#include <HRRPart0bra0ket0gp100.h>
#include <HRRPart0bra0ket0g001p.h>
#include <HRRPart0bra0ket0g010p.h>
#include <HRRPart0bra0ket0g100p.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0g001p.h>
#include <HRRPart1bra0ket0g010p.h>
#include <HRRPart1bra0ket0g100p.h>
#include <deriv1_aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1_aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12519)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1_aB_G__0__G__1___TwoPRep_P__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+36819)*1+lsi)*1]), &(inteval->stack[((hsi*315+11979)*1+lsi)*1]), &(inteval->stack[((hsi*225+12294)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+37494)*1+lsi)*1]), &(inteval->stack[((hsi*441+11223)*1+lsi)*1]), &(inteval->stack[((hsi*315+11664)*1+lsi)*1]), &(inteval->stack[((hsi*315+8316)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+34794)*1+lsi)*1]), &(inteval->stack[((hsi*945+37494)*1+lsi)*1]), &(inteval->stack[((hsi*675+36819)*1+lsi)*1]),45);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+38439)*1+lsi)*1]), &(inteval->stack[((hsi*315+10683)*1+lsi)*1]), &(inteval->stack[((hsi*225+10998)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+39114)*1+lsi)*1]), &(inteval->stack[((hsi*441+9927)*1+lsi)*1]), &(inteval->stack[((hsi*315+10368)*1+lsi)*1]), &(inteval->stack[((hsi*315+8316)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+32769)*1+lsi)*1]), &(inteval->stack[((hsi*945+39114)*1+lsi)*1]), &(inteval->stack[((hsi*675+38439)*1+lsi)*1]),45);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+40059)*1+lsi)*1]), &(inteval->stack[((hsi*315+9387)*1+lsi)*1]), &(inteval->stack[((hsi*225+9702)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+40734)*1+lsi)*1]), &(inteval->stack[((hsi*441+8631)*1+lsi)*1]), &(inteval->stack[((hsi*315+9072)*1+lsi)*1]), &(inteval->stack[((hsi*315+8316)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+30744)*1+lsi)*1]), &(inteval->stack[((hsi*945+40734)*1+lsi)*1]), &(inteval->stack[((hsi*675+40059)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+41679)*1+lsi)*1]), &(inteval->stack[((hsi*225+4203)*1+lsi)*1]), &(inteval->stack[((hsi*225+8091)*1+lsi)*1]), &(inteval->stack[((hsi*225+12294)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+41904)*1+lsi)*1]), &(inteval->stack[((hsi*315+3573)*1+lsi)*1]), &(inteval->stack[((hsi*315+7461)*1+lsi)*1]), &(inteval->stack[((hsi*315+11979)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+42219)*1+lsi)*1]), &(inteval->stack[((hsi*315+41904)*1+lsi)*1]), &(inteval->stack[((hsi*225+41679)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+11979)*1+lsi)*1]), &(inteval->stack[((hsi*315+3888)*1+lsi)*1]), &(inteval->stack[((hsi*315+7776)*1+lsi)*1]), &(inteval->stack[((hsi*315+11664)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+41679)*1+lsi)*1]), &(inteval->stack[((hsi*441+3132)*1+lsi)*1]), &(inteval->stack[((hsi*441+7020)*1+lsi)*1]), &(inteval->stack[((hsi*441+11223)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+42894)*1+lsi)*1]), &(inteval->stack[((hsi*441+41679)*1+lsi)*1]), &(inteval->stack[((hsi*315+11979)*1+lsi)*1]), &(inteval->stack[((hsi*315+8316)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+28719)*1+lsi)*1]), &(inteval->stack[((hsi*945+42894)*1+lsi)*1]), &(inteval->stack[((hsi*675+42219)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+11223)*1+lsi)*1]), &(inteval->stack[((hsi*225+2907)*1+lsi)*1]), &(inteval->stack[((hsi*225+6795)*1+lsi)*1]), &(inteval->stack[((hsi*225+10998)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+11448)*1+lsi)*1]), &(inteval->stack[((hsi*315+2277)*1+lsi)*1]), &(inteval->stack[((hsi*315+6165)*1+lsi)*1]), &(inteval->stack[((hsi*315+10683)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+11763)*1+lsi)*1]), &(inteval->stack[((hsi*315+11448)*1+lsi)*1]), &(inteval->stack[((hsi*225+11223)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10683)*1+lsi)*1]), &(inteval->stack[((hsi*315+2592)*1+lsi)*1]), &(inteval->stack[((hsi*315+6480)*1+lsi)*1]), &(inteval->stack[((hsi*315+10368)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+10998)*1+lsi)*1]), &(inteval->stack[((hsi*441+1836)*1+lsi)*1]), &(inteval->stack[((hsi*441+5724)*1+lsi)*1]), &(inteval->stack[((hsi*441+9927)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+43839)*1+lsi)*1]), &(inteval->stack[((hsi*441+10998)*1+lsi)*1]), &(inteval->stack[((hsi*315+10683)*1+lsi)*1]), &(inteval->stack[((hsi*315+8316)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+26694)*1+lsi)*1]), &(inteval->stack[((hsi*945+43839)*1+lsi)*1]), &(inteval->stack[((hsi*675+11763)*1+lsi)*1]),45);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+9927)*1+lsi)*1]), &(inteval->stack[((hsi*225+1386)*1+lsi)*1]), &(inteval->stack[((hsi*225+5499)*1+lsi)*1]), &(inteval->stack[((hsi*225+9702)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+10152)*1+lsi)*1]), &(inteval->stack[((hsi*315+441)*1+lsi)*1]), &(inteval->stack[((hsi*315+4869)*1+lsi)*1]), &(inteval->stack[((hsi*315+9387)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+10467)*1+lsi)*1]), &(inteval->stack[((hsi*315+10152)*1+lsi)*1]), &(inteval->stack[((hsi*225+9927)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+9387)*1+lsi)*1]), &(inteval->stack[((hsi*315+1071)*1+lsi)*1]), &(inteval->stack[((hsi*315+5184)*1+lsi)*1]), &(inteval->stack[((hsi*315+9072)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_S__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*441+9702)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*441+4428)*1+lsi)*1]), &(inteval->stack[((hsi*441+8631)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+44784)*1+lsi)*1]), &(inteval->stack[((hsi*441+9702)*1+lsi)*1]), &(inteval->stack[((hsi*315+9387)*1+lsi)*1]), &(inteval->stack[((hsi*315+8316)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+24669)*1+lsi)*1]), &(inteval->stack[((hsi*945+44784)*1+lsi)*1]), &(inteval->stack[((hsi*675+10467)*1+lsi)*1]),45);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+8316)*1+lsi)*1]), &(inteval->stack[((hsi*315+7776)*1+lsi)*1]), &(inteval->stack[((hsi*225+8091)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart0bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+8991)*1+lsi)*1]), &(inteval->stack[((hsi*441+7020)*1+lsi)*1]), &(inteval->stack[((hsi*315+7461)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+22644)*1+lsi)*1]), &(inteval->stack[((hsi*945+8991)*1+lsi)*1]), &(inteval->stack[((hsi*675+8316)*1+lsi)*1]),45);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+7020)*1+lsi)*1]), &(inteval->stack[((hsi*315+6480)*1+lsi)*1]), &(inteval->stack[((hsi*225+6795)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart0bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+45729)*1+lsi)*1]), &(inteval->stack[((hsi*441+5724)*1+lsi)*1]), &(inteval->stack[((hsi*315+6165)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+20619)*1+lsi)*1]), &(inteval->stack[((hsi*945+45729)*1+lsi)*1]), &(inteval->stack[((hsi*675+7020)*1+lsi)*1]),45);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+5724)*1+lsi)*1]), &(inteval->stack[((hsi*315+5184)*1+lsi)*1]), &(inteval->stack[((hsi*225+5499)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart0bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+46674)*1+lsi)*1]), &(inteval->stack[((hsi*441+4428)*1+lsi)*1]), &(inteval->stack[((hsi*315+4869)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+18594)*1+lsi)*1]), &(inteval->stack[((hsi*945+46674)*1+lsi)*1]), &(inteval->stack[((hsi*675+5724)*1+lsi)*1]),45);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+4428)*1+lsi)*1]), &(inteval->stack[((hsi*315+3888)*1+lsi)*1]), &(inteval->stack[((hsi*225+4203)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart0bra0ket0g001p(inteval, &(inteval->stack[((hsi*945+47619)*1+lsi)*1]), &(inteval->stack[((hsi*441+3132)*1+lsi)*1]), &(inteval->stack[((hsi*315+3573)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+16569)*1+lsi)*1]), &(inteval->stack[((hsi*945+47619)*1+lsi)*1]), &(inteval->stack[((hsi*675+4428)*1+lsi)*1]),45);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+3132)*1+lsi)*1]), &(inteval->stack[((hsi*315+2592)*1+lsi)*1]), &(inteval->stack[((hsi*225+2907)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart0bra0ket0g010p(inteval, &(inteval->stack[((hsi*945+48564)*1+lsi)*1]), &(inteval->stack[((hsi*441+1836)*1+lsi)*1]), &(inteval->stack[((hsi*315+2277)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+14544)*1+lsi)*1]), &(inteval->stack[((hsi*945+48564)*1+lsi)*1]), &(inteval->stack[((hsi*675+3132)*1+lsi)*1]),45);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+1836)*1+lsi)*1]), &(inteval->stack[((hsi*315+1071)*1+lsi)*1]), &(inteval->stack[((hsi*225+1386)*1+lsi)*1]), &(inteval->stack[((hsi*225+1611)*1+lsi)*1]),15);
HRRPart0bra0ket0g100p(inteval, &(inteval->stack[((hsi*945+49509)*1+lsi)*1]), &(inteval->stack[((hsi*441+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+441)*1+lsi)*1]), &(inteval->stack[((hsi*315+756)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+12519)*1+lsi)*1]), &(inteval->stack[((hsi*945+49509)*1+lsi)*1]), &(inteval->stack[((hsi*675+1836)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2025+12519)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*2025+14544)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*2025+16569)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*2025+18594)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*2025+20619)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*2025+22644)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*2025+24669)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*2025+26694)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*2025+28719)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*2025+30744)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*2025+32769)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*2025+34794)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
