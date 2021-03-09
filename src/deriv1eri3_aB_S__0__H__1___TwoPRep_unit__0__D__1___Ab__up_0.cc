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
#include <CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,559)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+1693)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+1756)*1+lsi)*1]), &(inteval->stack[((hsi*28+489)*1+lsi)*1]), &(inteval->stack[((hsi*21+538)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+1819)*1+lsi)*1]), &(inteval->stack[((hsi*36+425)*1+lsi)*1]), &(inteval->stack[((hsi*28+489)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+1567)*1+lsi)*1]), &(inteval->stack[((hsi*84+1819)*1+lsi)*1]), &(inteval->stack[((hsi*63+1756)*1+lsi)*1]), &(inteval->stack[((hsi*63+1693)*1+lsi)*1]),1);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+1903)*1+lsi)*1]), &(inteval->stack[((hsi*28+319)*1+lsi)*1]), &(inteval->stack[((hsi*21+368)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+1966)*1+lsi)*1]), &(inteval->stack[((hsi*36+255)*1+lsi)*1]), &(inteval->stack[((hsi*28+319)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+1441)*1+lsi)*1]), &(inteval->stack[((hsi*84+1966)*1+lsi)*1]), &(inteval->stack[((hsi*63+1903)*1+lsi)*1]), &(inteval->stack[((hsi*63+1693)*1+lsi)*1]),1);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+2050)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*21+198)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+2113)*1+lsi)*1]), &(inteval->stack[((hsi*36+64)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+1315)*1+lsi)*1]), &(inteval->stack[((hsi*84+2113)*1+lsi)*1]), &(inteval->stack[((hsi*63+2050)*1+lsi)*1]), &(inteval->stack[((hsi*63+1693)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2197)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]), &(inteval->stack[((hsi*21+517)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2260)*1+lsi)*1]), &(inteval->stack[((hsi*36+389)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+811)*1+lsi)*1]), &(inteval->stack[((hsi*84+2260)*1+lsi)*1]), &(inteval->stack[((hsi*63+2197)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2344)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]), &(inteval->stack[((hsi*21+347)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2407)*1+lsi)*1]), &(inteval->stack[((hsi*36+219)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+685)*1+lsi)*1]), &(inteval->stack[((hsi*84+2407)*1+lsi)*1]), &(inteval->stack[((hsi*63+2344)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2491)*1+lsi)*1]), &(inteval->stack[((hsi*28+100)*1+lsi)*1]), &(inteval->stack[((hsi*21+177)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2554)*1+lsi)*1]), &(inteval->stack[((hsi*36+28)*1+lsi)*1]), &(inteval->stack[((hsi*28+100)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+559)*1+lsi)*1]), &(inteval->stack[((hsi*84+2554)*1+lsi)*1]), &(inteval->stack[((hsi*63+2491)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+461)*1+lsi)*1]), &(inteval->stack[((hsi*28+489)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+461)*1+lsi)*1]), &(inteval->stack[((hsi*21+517)*1+lsi)*1]), &(inteval->stack[((hsi*21+538)*1+lsi)*1]));
HRRPart1bra0ket0h001p(inteval, &(inteval->stack[((hsi*63+482)*1+lsi)*1]), &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*21+461)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K001__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+2666)*1+lsi)*1]), &(inteval->stack[((hsi*36+389)*1+lsi)*1]), &(inteval->stack[((hsi*36+425)*1+lsi)*1]));
HRRPart1bra0ket0i001p(inteval, &(inteval->stack[((hsi*84+389)*1+lsi)*1]), &(inteval->stack[((hsi*36+2666)*1+lsi)*1]), &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0h001d(inteval, &(inteval->stack[((hsi*126+1189)*1+lsi)*1]), &(inteval->stack[((hsi*84+389)*1+lsi)*1]), &(inteval->stack[((hsi*63+482)*1+lsi)*1]), &(inteval->stack[((hsi*63+1693)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+291)*1+lsi)*1]), &(inteval->stack[((hsi*28+319)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+291)*1+lsi)*1]), &(inteval->stack[((hsi*21+347)*1+lsi)*1]), &(inteval->stack[((hsi*21+368)*1+lsi)*1]));
HRRPart1bra0ket0h010p(inteval, &(inteval->stack[((hsi*63+312)*1+lsi)*1]), &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*21+291)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K010__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+2666)*1+lsi)*1]), &(inteval->stack[((hsi*36+219)*1+lsi)*1]), &(inteval->stack[((hsi*36+255)*1+lsi)*1]));
HRRPart1bra0ket0i010p(inteval, &(inteval->stack[((hsi*84+219)*1+lsi)*1]), &(inteval->stack[((hsi*36+2666)*1+lsi)*1]), &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0h010d(inteval, &(inteval->stack[((hsi*126+1063)*1+lsi)*1]), &(inteval->stack[((hsi*84+219)*1+lsi)*1]), &(inteval->stack[((hsi*63+312)*1+lsi)*1]), &(inteval->stack[((hsi*63+1693)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__I100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+128)*1+lsi)*1]));
CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*21+100)*1+lsi)*1]), &(inteval->stack[((hsi*21+177)*1+lsi)*1]), &(inteval->stack[((hsi*21+198)*1+lsi)*1]));
HRRPart1bra0ket0h100p(inteval, &(inteval->stack[((hsi*63+2666)*1+lsi)*1]), &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*21+100)*1+lsi)*1]), &(inteval->stack[((hsi*21+156)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__K100__1___TwoPRep_unit__0__S__1___Ab__up_0(inteval, &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*36+28)*1+lsi)*1]), &(inteval->stack[((hsi*36+64)*1+lsi)*1]));
HRRPart1bra0ket0i100p(inteval, &(inteval->stack[((hsi*84+2729)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+2638)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart1bra0ket0h100d(inteval, &(inteval->stack[((hsi*126+937)*1+lsi)*1]), &(inteval->stack[((hsi*84+2729)*1+lsi)*1]), &(inteval->stack[((hsi*63+2666)*1+lsi)*1]), &(inteval->stack[((hsi*63+1693)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*126+559)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*126+685)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*126+811)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*126+937)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*126+1063)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*126+1189)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*126+1315)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*126+1441)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*126+1567)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
