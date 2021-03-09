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
#include <CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gf001.h>
#include <HRRPart1bra0ket0gf010.h>
#include <HRRPart1bra0ket0gf100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,664)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2014)*1+lsi)*1]), &(inteval->stack[((hsi*21+413)*1+lsi)*1]), &(inteval->stack[((hsi*15+449)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2059)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]), &(inteval->stack[((hsi*21+413)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2122)*1+lsi)*1]), &(inteval->stack[((hsi*63+2059)*1+lsi)*1]), &(inteval->stack[((hsi*45+2014)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+600)*1+lsi)*1]), &(inteval->stack[((hsi*21+628)*1+lsi)*1]), &(inteval->stack[((hsi*21+413)*1+lsi)*1]),1);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*21+628)*1+lsi)*1]), &(inteval->stack[((hsi*15+649)*1+lsi)*1]), &(inteval->stack[((hsi*15+449)*1+lsi)*1]),1);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+2320)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*45+2014)*1+lsi)*1]),1);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*36+564)*1+lsi)*1]), &(inteval->stack[((hsi*28+600)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]),1);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+2494)*1+lsi)*1]), &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*63+2059)*1+lsi)*1]),1);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*150+1864)*1+lsi)*1]), &(inteval->stack[((hsi*126+2494)*1+lsi)*1]), &(inteval->stack[((hsi*90+2320)*1+lsi)*1]), &(inteval->stack[((hsi*90+2122)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]), &(inteval->stack[((hsi*21+264)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*21+264)*1+lsi)*1]), &(inteval->stack[((hsi*15+285)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+564)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*36+200)*1+lsi)*1]), &(inteval->stack[((hsi*28+236)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2620)*1+lsi)*1]), &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+964)*1+lsi)*1]), &(inteval->stack[((hsi*126+2620)*1+lsi)*1]), &(inteval->stack[((hsi*90+564)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+1414)*1+lsi)*1]), &(inteval->stack[((hsi*150+964)*1+lsi)*1]), &(inteval->stack[((hsi*150+1864)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+500)*1+lsi)*1]), &(inteval->stack[((hsi*21+528)*1+lsi)*1]), &(inteval->stack[((hsi*21+413)*1+lsi)*1]),1);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*21+528)*1+lsi)*1]), &(inteval->stack[((hsi*15+549)*1+lsi)*1]), &(inteval->stack[((hsi*15+449)*1+lsi)*1]),1);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+200)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*45+2014)*1+lsi)*1]),1);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*36+464)*1+lsi)*1]), &(inteval->stack[((hsi*28+500)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]),1);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+2746)*1+lsi)*1]), &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*63+2059)*1+lsi)*1]),1);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*150+1714)*1+lsi)*1]), &(inteval->stack[((hsi*126+2746)*1+lsi)*1]), &(inteval->stack[((hsi*90+200)*1+lsi)*1]), &(inteval->stack[((hsi*90+2122)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]), &(inteval->stack[((hsi*15+185)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+464)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2872)*1+lsi)*1]), &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+814)*1+lsi)*1]), &(inteval->stack[((hsi*126+2872)*1+lsi)*1]), &(inteval->stack[((hsi*90+464)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+1264)*1+lsi)*1]), &(inteval->stack[((hsi*150+814)*1+lsi)*1]), &(inteval->stack[((hsi*150+1714)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*21+392)*1+lsi)*1]), &(inteval->stack[((hsi*21+413)*1+lsi)*1]),1);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*21+392)*1+lsi)*1]), &(inteval->stack[((hsi*15+434)*1+lsi)*1]), &(inteval->stack[((hsi*15+449)*1+lsi)*1]),1);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+100)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*45+2014)*1+lsi)*1]),1);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*36+300)*1+lsi)*1]), &(inteval->stack[((hsi*28+336)*1+lsi)*1]), &(inteval->stack[((hsi*28+364)*1+lsi)*1]),1);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+290)*1+lsi)*1]), &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*63+2059)*1+lsi)*1]),1);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*150+1564)*1+lsi)*1]), &(inteval->stack[((hsi*126+290)*1+lsi)*1]), &(inteval->stack[((hsi*90+100)*1+lsi)*1]), &(inteval->stack[((hsi*90+2122)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*21+64)*1+lsi)*1]), &(inteval->stack[((hsi*15+85)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2014)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]), &(inteval->stack[((hsi*28+36)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2998)*1+lsi)*1]), &(inteval->stack[((hsi*84+2410)*1+lsi)*1]), &(inteval->stack[((hsi*63+2212)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+664)*1+lsi)*1]), &(inteval->stack[((hsi*126+2998)*1+lsi)*1]), &(inteval->stack[((hsi*90+2014)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*150+1114)*1+lsi)*1]), &(inteval->stack[((hsi*150+664)*1+lsi)*1]), &(inteval->stack[((hsi*150+1564)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*150+664)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*150+814)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*150+964)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*150+1114)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*150+1264)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*150+1414)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*150+1564)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*150+1714)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*150+1864)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
