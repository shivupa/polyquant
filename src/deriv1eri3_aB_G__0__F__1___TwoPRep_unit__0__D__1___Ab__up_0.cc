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
#include <CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4515)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__F__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+12615)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
HRRPart1bra0ket0fp001(inteval, &(inteval->stack[((hsi*450+13065)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+4365)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*675+13515)*1+lsi)*1]), &(inteval->stack[((hsi*315+3825)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0fd001(inteval, &(inteval->stack[((hsi*900+11715)*1+lsi)*1]), &(inteval->stack[((hsi*675+13515)*1+lsi)*1]), &(inteval->stack[((hsi*450+13065)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]),15);
HRRPart1bra0ket0fp010(inteval, &(inteval->stack[((hsi*450+14190)*1+lsi)*1]), &(inteval->stack[((hsi*225+3450)*1+lsi)*1]), &(inteval->stack[((hsi*150+3675)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*675+14640)*1+lsi)*1]), &(inteval->stack[((hsi*315+3135)*1+lsi)*1]), &(inteval->stack[((hsi*225+3450)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0fd010(inteval, &(inteval->stack[((hsi*900+10815)*1+lsi)*1]), &(inteval->stack[((hsi*675+14640)*1+lsi)*1]), &(inteval->stack[((hsi*450+14190)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]),15);
HRRPart1bra0ket0fp100(inteval, &(inteval->stack[((hsi*450+15315)*1+lsi)*1]), &(inteval->stack[((hsi*225+2610)*1+lsi)*1]), &(inteval->stack[((hsi*150+2985)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*675+15765)*1+lsi)*1]), &(inteval->stack[((hsi*315+2295)*1+lsi)*1]), &(inteval->stack[((hsi*225+2610)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0fd100(inteval, &(inteval->stack[((hsi*900+9915)*1+lsi)*1]), &(inteval->stack[((hsi*675+15765)*1+lsi)*1]), &(inteval->stack[((hsi*450+15315)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]), &(inteval->stack[((hsi*225+4140)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+1920)*1+lsi)*1]), &(inteval->stack[((hsi*150+4365)*1+lsi)*1]));
HRRPart1bra0ket0f001p(inteval, &(inteval->stack[((hsi*450+16665)*1+lsi)*1]), &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*150+4140)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+4140)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]), &(inteval->stack[((hsi*315+3825)*1+lsi)*1]));
HRRPart1bra0ket0g001p(inteval, &(inteval->stack[((hsi*675+17115)*1+lsi)*1]), &(inteval->stack[((hsi*315+4140)*1+lsi)*1]), &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0f001d(inteval, &(inteval->stack[((hsi*900+9015)*1+lsi)*1]), &(inteval->stack[((hsi*675+17115)*1+lsi)*1]), &(inteval->stack[((hsi*450+16665)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*225+1005)*1+lsi)*1]), &(inteval->stack[((hsi*225+3450)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+3825)*1+lsi)*1]), &(inteval->stack[((hsi*150+1230)*1+lsi)*1]), &(inteval->stack[((hsi*150+3675)*1+lsi)*1]));
HRRPart1bra0ket0f010p(inteval, &(inteval->stack[((hsi*450+3975)*1+lsi)*1]), &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*150+3825)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+3450)*1+lsi)*1]), &(inteval->stack[((hsi*315+690)*1+lsi)*1]), &(inteval->stack[((hsi*315+3135)*1+lsi)*1]));
HRRPart1bra0ket0g010p(inteval, &(inteval->stack[((hsi*675+17790)*1+lsi)*1]), &(inteval->stack[((hsi*315+3450)*1+lsi)*1]), &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0f010d(inteval, &(inteval->stack[((hsi*900+8115)*1+lsi)*1]), &(inteval->stack[((hsi*675+17790)*1+lsi)*1]), &(inteval->stack[((hsi*450+3975)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__G100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]), &(inteval->stack[((hsi*225+2610)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_G__0__F100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+3135)*1+lsi)*1]), &(inteval->stack[((hsi*150+540)*1+lsi)*1]), &(inteval->stack[((hsi*150+2985)*1+lsi)*1]));
HRRPart1bra0ket0f100p(inteval, &(inteval->stack[((hsi*450+3285)*1+lsi)*1]), &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*150+3135)*1+lsi)*1]), &(inteval->stack[((hsi*150+2835)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+2610)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+2295)*1+lsi)*1]));
HRRPart1bra0ket0g100p(inteval, &(inteval->stack[((hsi*675+18465)*1+lsi)*1]), &(inteval->stack[((hsi*315+2610)*1+lsi)*1]), &(inteval->stack[((hsi*225+16440)*1+lsi)*1]), &(inteval->stack[((hsi*225+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0f100d(inteval, &(inteval->stack[((hsi*900+7215)*1+lsi)*1]), &(inteval->stack[((hsi*675+18465)*1+lsi)*1]), &(inteval->stack[((hsi*450+3285)*1+lsi)*1]), &(inteval->stack[((hsi*450+12615)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+2070)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]), &(inteval->stack[((hsi*150+1920)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+2520)*1+lsi)*1]), &(inteval->stack[((hsi*315+1380)*1+lsi)*1]), &(inteval->stack[((hsi*225+1695)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+6315)*1+lsi)*1]), &(inteval->stack[((hsi*675+2520)*1+lsi)*1]), &(inteval->stack[((hsi*450+2070)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+1380)*1+lsi)*1]), &(inteval->stack[((hsi*225+1005)*1+lsi)*1]), &(inteval->stack[((hsi*150+1230)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+19140)*1+lsi)*1]), &(inteval->stack[((hsi*315+690)*1+lsi)*1]), &(inteval->stack[((hsi*225+1005)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+5415)*1+lsi)*1]), &(inteval->stack[((hsi*675+19140)*1+lsi)*1]), &(inteval->stack[((hsi*450+1380)*1+lsi)*1]),15);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*450+690)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]), &(inteval->stack[((hsi*150+540)*1+lsi)*1]),15);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*675+19815)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*225+315)*1+lsi)*1]),15);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*900+4515)*1+lsi)*1]), &(inteval->stack[((hsi*675+19815)*1+lsi)*1]), &(inteval->stack[((hsi*450+690)*1+lsi)*1]),15);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*900+4515)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*900+5415)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*900+6315)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*900+7215)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*900+8115)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*900+9015)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*900+9915)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*900+10815)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*900+11715)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
