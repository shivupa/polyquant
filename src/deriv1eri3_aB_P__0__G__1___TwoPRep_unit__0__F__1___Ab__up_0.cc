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
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1992)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+6042)*1+lsi)*1]), &(inteval->stack[((hsi*63+1239)*1+lsi)*1]), &(inteval->stack[((hsi*45+1347)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6177)*1+lsi)*1]), &(inteval->stack[((hsi*84+1092)*1+lsi)*1]), &(inteval->stack[((hsi*63+1239)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+6366)*1+lsi)*1]), &(inteval->stack[((hsi*189+6177)*1+lsi)*1]), &(inteval->stack[((hsi*135+6042)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*84+1800)*1+lsi)*1]), &(inteval->stack[((hsi*63+1884)*1+lsi)*1]), &(inteval->stack[((hsi*63+1239)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*63+1884)*1+lsi)*1]), &(inteval->stack[((hsi*45+1947)*1+lsi)*1]), &(inteval->stack[((hsi*45+1347)*1+lsi)*1]),3);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*270+6960)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*135+6042)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*108+1692)*1+lsi)*1]), &(inteval->stack[((hsi*84+1800)*1+lsi)*1]), &(inteval->stack[((hsi*84+1092)*1+lsi)*1]),3);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*378+7482)*1+lsi)*1]), &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*189+6177)*1+lsi)*1]),3);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*450+5592)*1+lsi)*1]), &(inteval->stack[((hsi*378+7482)*1+lsi)*1]), &(inteval->stack[((hsi*270+6960)*1+lsi)*1]), &(inteval->stack[((hsi*270+6366)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*84+708)*1+lsi)*1]), &(inteval->stack[((hsi*63+792)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*63+792)*1+lsi)*1]), &(inteval->stack[((hsi*45+855)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1692)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*135+6825)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*108+600)*1+lsi)*1]), &(inteval->stack[((hsi*84+708)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+7860)*1+lsi)*1]), &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+2892)*1+lsi)*1]), &(inteval->stack[((hsi*378+7860)*1+lsi)*1]), &(inteval->stack[((hsi*270+1692)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+4242)*1+lsi)*1]), &(inteval->stack[((hsi*450+2892)*1+lsi)*1]), &(inteval->stack[((hsi*450+5592)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*84+1500)*1+lsi)*1]), &(inteval->stack[((hsi*63+1584)*1+lsi)*1]), &(inteval->stack[((hsi*63+1239)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*63+1584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1647)*1+lsi)*1]), &(inteval->stack[((hsi*45+1347)*1+lsi)*1]),3);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*270+600)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*135+6042)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*108+1392)*1+lsi)*1]), &(inteval->stack[((hsi*84+1500)*1+lsi)*1]), &(inteval->stack[((hsi*84+1092)*1+lsi)*1]),3);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*378+8238)*1+lsi)*1]), &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*189+6177)*1+lsi)*1]),3);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*450+5142)*1+lsi)*1]), &(inteval->stack[((hsi*378+8238)*1+lsi)*1]), &(inteval->stack[((hsi*270+600)*1+lsi)*1]), &(inteval->stack[((hsi*270+6366)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*84+408)*1+lsi)*1]), &(inteval->stack[((hsi*63+492)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*63+492)*1+lsi)*1]), &(inteval->stack[((hsi*45+555)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+1392)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*135+6825)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]), &(inteval->stack[((hsi*84+408)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+8616)*1+lsi)*1]), &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+2442)*1+lsi)*1]), &(inteval->stack[((hsi*378+8616)*1+lsi)*1]), &(inteval->stack[((hsi*270+1392)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+3792)*1+lsi)*1]), &(inteval->stack[((hsi*450+2442)*1+lsi)*1]), &(inteval->stack[((hsi*450+5142)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*84+1008)*1+lsi)*1]), &(inteval->stack[((hsi*63+1176)*1+lsi)*1]), &(inteval->stack[((hsi*63+1239)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*63+1176)*1+lsi)*1]), &(inteval->stack[((hsi*45+1302)*1+lsi)*1]), &(inteval->stack[((hsi*45+1347)*1+lsi)*1]),3);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*270+300)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*135+6042)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*108+900)*1+lsi)*1]), &(inteval->stack[((hsi*84+1008)*1+lsi)*1]), &(inteval->stack[((hsi*84+1092)*1+lsi)*1]),3);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*378+870)*1+lsi)*1]), &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*189+6177)*1+lsi)*1]),3);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*450+4692)*1+lsi)*1]), &(inteval->stack[((hsi*378+870)*1+lsi)*1]), &(inteval->stack[((hsi*270+300)*1+lsi)*1]), &(inteval->stack[((hsi*270+6366)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]), &(inteval->stack[((hsi*63+192)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+6825)*1+lsi)*1]), &(inteval->stack[((hsi*63+192)*1+lsi)*1]), &(inteval->stack[((hsi*45+255)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+6042)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]), &(inteval->stack[((hsi*135+6825)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*108+0)*1+lsi)*1]), &(inteval->stack[((hsi*84+108)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+8994)*1+lsi)*1]), &(inteval->stack[((hsi*252+7230)*1+lsi)*1]), &(inteval->stack[((hsi*189+6636)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+1992)*1+lsi)*1]), &(inteval->stack[((hsi*378+8994)*1+lsi)*1]), &(inteval->stack[((hsi*270+6042)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__F__1___Ab__up_0(inteval, &(inteval->stack[((hsi*450+3342)*1+lsi)*1]), &(inteval->stack[((hsi*450+1992)*1+lsi)*1]), &(inteval->stack[((hsi*450+4692)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*450+1992)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*450+2442)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*450+2892)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*450+3342)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*450+3792)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*450+4242)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*450+4692)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*450+5142)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*450+5592)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
