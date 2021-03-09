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
#include <CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,970)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_S__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+2995)*1+lsi)*1]), &(inteval->stack[((hsi*28+580)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3058)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3103)*1+lsi)*1]), &(inteval->stack[((hsi*63+2995)*1+lsi)*1]), &(inteval->stack[((hsi*45+3058)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3193)*1+lsi)*1]), &(inteval->stack[((hsi*36+516)*1+lsi)*1]), &(inteval->stack[((hsi*28+580)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3277)*1+lsi)*1]), &(inteval->stack[((hsi*84+3193)*1+lsi)*1]), &(inteval->stack[((hsi*63+2995)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3403)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]), &(inteval->stack[((hsi*90+3103)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*28+906)*1+lsi)*1]), &(inteval->stack[((hsi*21+934)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]),1);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+870)*1+lsi)*1]), &(inteval->stack[((hsi*28+906)*1+lsi)*1]), &(inteval->stack[((hsi*28+580)*1+lsi)*1]),1);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*63+2995)*1+lsi)*1]),1);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*45+3826)*1+lsi)*1]), &(inteval->stack[((hsi*21+934)*1+lsi)*1]), &(inteval->stack[((hsi*15+955)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]),1);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*90+3871)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*45+3826)*1+lsi)*1]), &(inteval->stack[((hsi*45+3058)*1+lsi)*1]),1);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*150+3961)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*90+3871)*1+lsi)*1]), &(inteval->stack[((hsi*90+3103)*1+lsi)*1]),1);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+3826)*1+lsi)*1]), &(inteval->stack[((hsi*45+825)*1+lsi)*1]), &(inteval->stack[((hsi*36+870)*1+lsi)*1]), &(inteval->stack[((hsi*36+516)*1+lsi)*1]),1);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*168+4111)*1+lsi)*1]), &(inteval->stack[((hsi*108+3826)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*84+3193)*1+lsi)*1]),1);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+4279)*1+lsi)*1]), &(inteval->stack[((hsi*168+4111)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*225+2770)*1+lsi)*1]), &(inteval->stack[((hsi*210+4279)*1+lsi)*1]), &(inteval->stack[((hsi*150+3961)*1+lsi)*1]), &(inteval->stack[((hsi*150+3403)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+4111)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*15+420)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+825)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*45+4111)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+4111)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*90+825)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+825)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+4489)*1+lsi)*1]), &(inteval->stack[((hsi*108+825)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4657)*1+lsi)*1]), &(inteval->stack[((hsi*168+4489)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]),1);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*225+1420)*1+lsi)*1]), &(inteval->stack[((hsi*210+4657)*1+lsi)*1]), &(inteval->stack[((hsi*150+4111)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+2095)*1+lsi)*1]), &(inteval->stack[((hsi*225+1420)*1+lsi)*1]), &(inteval->stack[((hsi*225+2770)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*28+761)*1+lsi)*1]), &(inteval->stack[((hsi*21+789)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]),1);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+725)*1+lsi)*1]), &(inteval->stack[((hsi*28+761)*1+lsi)*1]), &(inteval->stack[((hsi*28+580)*1+lsi)*1]),1);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*63+2995)*1+lsi)*1]),1);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*45+4489)*1+lsi)*1]), &(inteval->stack[((hsi*21+789)*1+lsi)*1]), &(inteval->stack[((hsi*15+810)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]),1);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*90+761)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*45+4489)*1+lsi)*1]), &(inteval->stack[((hsi*45+3058)*1+lsi)*1]),1);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*150+4489)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*90+761)*1+lsi)*1]), &(inteval->stack[((hsi*90+3103)*1+lsi)*1]),1);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+761)*1+lsi)*1]), &(inteval->stack[((hsi*45+680)*1+lsi)*1]), &(inteval->stack[((hsi*36+725)*1+lsi)*1]), &(inteval->stack[((hsi*36+516)*1+lsi)*1]),1);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*168+4867)*1+lsi)*1]), &(inteval->stack[((hsi*108+761)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*84+3193)*1+lsi)*1]),1);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+680)*1+lsi)*1]), &(inteval->stack[((hsi*168+4867)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*225+2545)*1+lsi)*1]), &(inteval->stack[((hsi*210+680)*1+lsi)*1]), &(inteval->stack[((hsi*150+4489)*1+lsi)*1]), &(inteval->stack[((hsi*150+3403)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*28+226)*1+lsi)*1]), &(inteval->stack[((hsi*21+254)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+190)*1+lsi)*1]), &(inteval->stack[((hsi*28+226)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*21+254)*1+lsi)*1]), &(inteval->stack[((hsi*15+275)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3826)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+226)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*90+3826)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3826)*1+lsi)*1]), &(inteval->stack[((hsi*45+145)*1+lsi)*1]), &(inteval->stack[((hsi*36+190)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+4867)*1+lsi)*1]), &(inteval->stack[((hsi*108+3826)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5035)*1+lsi)*1]), &(inteval->stack[((hsi*168+4867)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]),1);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*225+1195)*1+lsi)*1]), &(inteval->stack[((hsi*210+5035)*1+lsi)*1]), &(inteval->stack[((hsi*150+226)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+1870)*1+lsi)*1]), &(inteval->stack[((hsi*225+1195)*1+lsi)*1]), &(inteval->stack[((hsi*225+2545)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*28+552)*1+lsi)*1]), &(inteval->stack[((hsi*21+608)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]),1);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+480)*1+lsi)*1]), &(inteval->stack[((hsi*28+552)*1+lsi)*1]), &(inteval->stack[((hsi*28+580)*1+lsi)*1]),1);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*63+2995)*1+lsi)*1]),1);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*45+4867)*1+lsi)*1]), &(inteval->stack[((hsi*21+608)*1+lsi)*1]), &(inteval->stack[((hsi*15+650)*1+lsi)*1]), &(inteval->stack[((hsi*15+665)*1+lsi)*1]),1);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*90+3826)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*45+4867)*1+lsi)*1]), &(inteval->stack[((hsi*45+3058)*1+lsi)*1]),1);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*150+4867)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*90+3826)*1+lsi)*1]), &(inteval->stack[((hsi*90+3103)*1+lsi)*1]),1);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+2995)*1+lsi)*1]), &(inteval->stack[((hsi*45+435)*1+lsi)*1]), &(inteval->stack[((hsi*36+480)*1+lsi)*1]), &(inteval->stack[((hsi*36+516)*1+lsi)*1]),1);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*168+376)*1+lsi)*1]), &(inteval->stack[((hsi*108+2995)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*84+3193)*1+lsi)*1]),1);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+2995)*1+lsi)*1]), &(inteval->stack[((hsi*168+376)*1+lsi)*1]), &(inteval->stack[((hsi*126+3700)*1+lsi)*1]), &(inteval->stack[((hsi*126+3277)*1+lsi)*1]),1);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*225+2320)*1+lsi)*1]), &(inteval->stack[((hsi*210+2995)*1+lsi)*1]), &(inteval->stack[((hsi*150+4867)*1+lsi)*1]), &(inteval->stack[((hsi*150+3403)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+376)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]),1);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*45+3700)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]), &(inteval->stack[((hsi*15+130)*1+lsi)*1]),1);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3745)*1+lsi)*1]), &(inteval->stack[((hsi*63+3553)*1+lsi)*1]), &(inteval->stack[((hsi*45+3700)*1+lsi)*1]),1);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*150+3205)*1+lsi)*1]), &(inteval->stack[((hsi*126+376)*1+lsi)*1]), &(inteval->stack[((hsi*90+3745)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3700)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*108+3700)*1+lsi)*1]), &(inteval->stack[((hsi*84+3616)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3553)*1+lsi)*1]), &(inteval->stack[((hsi*168+0)*1+lsi)*1]), &(inteval->stack[((hsi*126+376)*1+lsi)*1]),1);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*225+970)*1+lsi)*1]), &(inteval->stack[((hsi*210+3553)*1+lsi)*1]), &(inteval->stack[((hsi*150+3205)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*225+1645)*1+lsi)*1]), &(inteval->stack[((hsi*225+970)*1+lsi)*1]), &(inteval->stack[((hsi*225+2320)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*225+970)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*225+1195)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*225+1420)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*225+1645)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*225+1870)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*225+2095)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*225+2320)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*225+2545)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*225+2770)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
