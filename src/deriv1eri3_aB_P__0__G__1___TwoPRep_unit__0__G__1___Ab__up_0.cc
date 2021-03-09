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
#include <CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gd001.h>
#include <HRRPart1bra0ket0gd010.h>
#include <HRRPart1bra0ket0gd100.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gf001.h>
#include <HRRPart1bra0ket0gf010.h>
#include <HRRPart1bra0ket0gf100.h>
#include <HRRPart1bra0ket0gg.h>
#include <HRRPart1bra0ket0gg001.h>
#include <HRRPart1bra0ket0gg010.h>
#include <HRRPart1bra0ket0gg100.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0gp001.h>
#include <HRRPart1bra0ket0gp010.h>
#include <HRRPart1bra0ket0gp100.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hf001.h>
#include <HRRPart1bra0ket0hf010.h>
#include <HRRPart1bra0ket0hf100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0id001.h>
#include <HRRPart1bra0ket0id010.h>
#include <HRRPart1bra0ket0id100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,2910)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+8985)*1+lsi)*1]), &(inteval->stack[((hsi*84+1740)*1+lsi)*1]), &(inteval->stack[((hsi*63+1887)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+9174)*1+lsi)*1]), &(inteval->stack[((hsi*63+1887)*1+lsi)*1]), &(inteval->stack[((hsi*45+1995)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+9309)*1+lsi)*1]), &(inteval->stack[((hsi*189+8985)*1+lsi)*1]), &(inteval->stack[((hsi*135+9174)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+9579)*1+lsi)*1]), &(inteval->stack[((hsi*108+1548)*1+lsi)*1]), &(inteval->stack[((hsi*84+1740)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+9831)*1+lsi)*1]), &(inteval->stack[((hsi*252+9579)*1+lsi)*1]), &(inteval->stack[((hsi*189+8985)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+10209)*1+lsi)*1]), &(inteval->stack[((hsi*378+9831)*1+lsi)*1]), &(inteval->stack[((hsi*270+9309)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*84+2718)*1+lsi)*1]), &(inteval->stack[((hsi*63+2802)*1+lsi)*1]), &(inteval->stack[((hsi*63+1887)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*108+2610)*1+lsi)*1]), &(inteval->stack[((hsi*84+2718)*1+lsi)*1]), &(inteval->stack[((hsi*84+1740)*1+lsi)*1]),3);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*189+8985)*1+lsi)*1]),3);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*135+11478)*1+lsi)*1]), &(inteval->stack[((hsi*63+2802)*1+lsi)*1]), &(inteval->stack[((hsi*45+2865)*1+lsi)*1]), &(inteval->stack[((hsi*45+1995)*1+lsi)*1]),3);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*270+11613)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*135+11478)*1+lsi)*1]), &(inteval->stack[((hsi*135+9174)*1+lsi)*1]),3);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*450+11883)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*270+11613)*1+lsi)*1]), &(inteval->stack[((hsi*270+9309)*1+lsi)*1]),3);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+11478)*1+lsi)*1]), &(inteval->stack[((hsi*135+2475)*1+lsi)*1]), &(inteval->stack[((hsi*108+2610)*1+lsi)*1]), &(inteval->stack[((hsi*108+1548)*1+lsi)*1]),3);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*504+12333)*1+lsi)*1]), &(inteval->stack[((hsi*324+11478)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*252+9579)*1+lsi)*1]),3);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*630+12837)*1+lsi)*1]), &(inteval->stack[((hsi*504+12333)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*378+9831)*1+lsi)*1]),3);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*675+8310)*1+lsi)*1]), &(inteval->stack[((hsi*630+12837)*1+lsi)*1]), &(inteval->stack[((hsi*450+11883)*1+lsi)*1]), &(inteval->stack[((hsi*450+10209)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*84+1113)*1+lsi)*1]), &(inteval->stack[((hsi*63+1197)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*108+1005)*1+lsi)*1]), &(inteval->stack[((hsi*84+1113)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+12333)*1+lsi)*1]), &(inteval->stack[((hsi*63+1197)*1+lsi)*1]), &(inteval->stack[((hsi*45+1260)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+2475)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*135+12333)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+12333)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*270+2475)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+2475)*1+lsi)*1]), &(inteval->stack[((hsi*135+870)*1+lsi)*1]), &(inteval->stack[((hsi*108+1005)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+13467)*1+lsi)*1]), &(inteval->stack[((hsi*324+2475)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+13971)*1+lsi)*1]), &(inteval->stack[((hsi*504+13467)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]),3);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*675+4260)*1+lsi)*1]), &(inteval->stack[((hsi*630+13971)*1+lsi)*1]), &(inteval->stack[((hsi*450+12333)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+6285)*1+lsi)*1]), &(inteval->stack[((hsi*675+4260)*1+lsi)*1]), &(inteval->stack[((hsi*675+8310)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*84+2283)*1+lsi)*1]), &(inteval->stack[((hsi*63+2367)*1+lsi)*1]), &(inteval->stack[((hsi*63+1887)*1+lsi)*1]),3);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*108+2175)*1+lsi)*1]), &(inteval->stack[((hsi*84+2283)*1+lsi)*1]), &(inteval->stack[((hsi*84+1740)*1+lsi)*1]),3);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*189+8985)*1+lsi)*1]),3);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*135+13467)*1+lsi)*1]), &(inteval->stack[((hsi*63+2367)*1+lsi)*1]), &(inteval->stack[((hsi*45+2430)*1+lsi)*1]), &(inteval->stack[((hsi*45+1995)*1+lsi)*1]),3);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*270+2283)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*135+13467)*1+lsi)*1]), &(inteval->stack[((hsi*135+9174)*1+lsi)*1]),3);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*450+13467)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*270+2283)*1+lsi)*1]), &(inteval->stack[((hsi*270+9309)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+2283)*1+lsi)*1]), &(inteval->stack[((hsi*135+2040)*1+lsi)*1]), &(inteval->stack[((hsi*108+2175)*1+lsi)*1]), &(inteval->stack[((hsi*108+1548)*1+lsi)*1]),3);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*504+14601)*1+lsi)*1]), &(inteval->stack[((hsi*324+2283)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*252+9579)*1+lsi)*1]),3);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*630+2040)*1+lsi)*1]), &(inteval->stack[((hsi*504+14601)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*378+9831)*1+lsi)*1]),3);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*675+7635)*1+lsi)*1]), &(inteval->stack[((hsi*630+2040)*1+lsi)*1]), &(inteval->stack[((hsi*450+13467)*1+lsi)*1]), &(inteval->stack[((hsi*450+10209)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*84+678)*1+lsi)*1]), &(inteval->stack[((hsi*63+762)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*108+570)*1+lsi)*1]), &(inteval->stack[((hsi*84+678)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+870)*1+lsi)*1]), &(inteval->stack[((hsi*63+762)*1+lsi)*1]), &(inteval->stack[((hsi*45+825)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+11478)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*135+870)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+678)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*270+11478)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+11478)*1+lsi)*1]), &(inteval->stack[((hsi*135+435)*1+lsi)*1]), &(inteval->stack[((hsi*108+570)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+14601)*1+lsi)*1]), &(inteval->stack[((hsi*324+11478)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+15105)*1+lsi)*1]), &(inteval->stack[((hsi*504+14601)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]),3);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*675+3585)*1+lsi)*1]), &(inteval->stack[((hsi*630+15105)*1+lsi)*1]), &(inteval->stack[((hsi*450+678)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+5610)*1+lsi)*1]), &(inteval->stack[((hsi*675+3585)*1+lsi)*1]), &(inteval->stack[((hsi*675+7635)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*84+1656)*1+lsi)*1]), &(inteval->stack[((hsi*63+1824)*1+lsi)*1]), &(inteval->stack[((hsi*63+1887)*1+lsi)*1]),3);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*108+1440)*1+lsi)*1]), &(inteval->stack[((hsi*84+1656)*1+lsi)*1]), &(inteval->stack[((hsi*84+1740)*1+lsi)*1]),3);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*189+8985)*1+lsi)*1]),3);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*135+14601)*1+lsi)*1]), &(inteval->stack[((hsi*63+1824)*1+lsi)*1]), &(inteval->stack[((hsi*45+1950)*1+lsi)*1]), &(inteval->stack[((hsi*45+1995)*1+lsi)*1]),3);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*270+11478)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*135+14601)*1+lsi)*1]), &(inteval->stack[((hsi*135+9174)*1+lsi)*1]),3);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*450+14601)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*270+11478)*1+lsi)*1]), &(inteval->stack[((hsi*270+9309)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+8985)*1+lsi)*1]), &(inteval->stack[((hsi*135+1305)*1+lsi)*1]), &(inteval->stack[((hsi*108+1440)*1+lsi)*1]), &(inteval->stack[((hsi*108+1548)*1+lsi)*1]),3);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*504+1128)*1+lsi)*1]), &(inteval->stack[((hsi*324+8985)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*252+9579)*1+lsi)*1]),3);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*630+8985)*1+lsi)*1]), &(inteval->stack[((hsi*504+1128)*1+lsi)*1]), &(inteval->stack[((hsi*378+11100)*1+lsi)*1]), &(inteval->stack[((hsi*378+9831)*1+lsi)*1]),3);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*675+6960)*1+lsi)*1]), &(inteval->stack[((hsi*630+8985)*1+lsi)*1]), &(inteval->stack[((hsi*450+14601)*1+lsi)*1]), &(inteval->stack[((hsi*450+10209)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*84+243)*1+lsi)*1]), &(inteval->stack[((hsi*63+327)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*108+135)*1+lsi)*1]), &(inteval->stack[((hsi*84+243)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+1128)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]),3);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*135+11100)*1+lsi)*1]), &(inteval->stack[((hsi*63+327)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]),3);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*270+11235)*1+lsi)*1]), &(inteval->stack[((hsi*189+10659)*1+lsi)*1]), &(inteval->stack[((hsi*135+11100)*1+lsi)*1]),3);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*450+9615)*1+lsi)*1]), &(inteval->stack[((hsi*378+1128)*1+lsi)*1]), &(inteval->stack[((hsi*270+11235)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+11100)*1+lsi)*1]), &(inteval->stack[((hsi*135+0)*1+lsi)*1]), &(inteval->stack[((hsi*108+135)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+0)*1+lsi)*1]), &(inteval->stack[((hsi*324+11100)*1+lsi)*1]), &(inteval->stack[((hsi*252+10848)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+10659)*1+lsi)*1]), &(inteval->stack[((hsi*504+0)*1+lsi)*1]), &(inteval->stack[((hsi*378+1128)*1+lsi)*1]),3);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*675+2910)*1+lsi)*1]), &(inteval->stack[((hsi*630+10659)*1+lsi)*1]), &(inteval->stack[((hsi*450+9615)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*675+4935)*1+lsi)*1]), &(inteval->stack[((hsi*675+2910)*1+lsi)*1]), &(inteval->stack[((hsi*675+6960)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*675+2910)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*675+3585)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*675+4260)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*675+4935)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*675+5610)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*675+6285)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*675+6960)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*675+7635)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*675+8310)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
