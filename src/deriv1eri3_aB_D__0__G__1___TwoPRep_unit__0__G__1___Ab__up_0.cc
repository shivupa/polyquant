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
#include <CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5820)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+17970)*1+lsi)*1]), &(inteval->stack[((hsi*168+3480)*1+lsi)*1]), &(inteval->stack[((hsi*126+3774)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+18348)*1+lsi)*1]), &(inteval->stack[((hsi*126+3774)*1+lsi)*1]), &(inteval->stack[((hsi*90+3990)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+18618)*1+lsi)*1]), &(inteval->stack[((hsi*378+17970)*1+lsi)*1]), &(inteval->stack[((hsi*270+18348)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+19158)*1+lsi)*1]), &(inteval->stack[((hsi*216+3096)*1+lsi)*1]), &(inteval->stack[((hsi*168+3480)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+19662)*1+lsi)*1]), &(inteval->stack[((hsi*504+19158)*1+lsi)*1]), &(inteval->stack[((hsi*378+17970)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+20418)*1+lsi)*1]), &(inteval->stack[((hsi*756+19662)*1+lsi)*1]), &(inteval->stack[((hsi*540+18618)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*168+5436)*1+lsi)*1]), &(inteval->stack[((hsi*126+5604)*1+lsi)*1]), &(inteval->stack[((hsi*126+3774)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*216+5220)*1+lsi)*1]), &(inteval->stack[((hsi*168+5436)*1+lsi)*1]), &(inteval->stack[((hsi*168+3480)*1+lsi)*1]),6);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*378+17970)*1+lsi)*1]),6);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*270+22956)*1+lsi)*1]), &(inteval->stack[((hsi*126+5604)*1+lsi)*1]), &(inteval->stack[((hsi*90+5730)*1+lsi)*1]), &(inteval->stack[((hsi*90+3990)*1+lsi)*1]),6);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*540+23226)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*270+22956)*1+lsi)*1]), &(inteval->stack[((hsi*270+18348)*1+lsi)*1]),6);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*900+23766)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*540+23226)*1+lsi)*1]), &(inteval->stack[((hsi*540+18618)*1+lsi)*1]),6);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+22956)*1+lsi)*1]), &(inteval->stack[((hsi*270+4950)*1+lsi)*1]), &(inteval->stack[((hsi*216+5220)*1+lsi)*1]), &(inteval->stack[((hsi*216+3096)*1+lsi)*1]),6);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1008+24666)*1+lsi)*1]), &(inteval->stack[((hsi*648+22956)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*504+19158)*1+lsi)*1]),6);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*1260+25674)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24666)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*756+19662)*1+lsi)*1]),6);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*1350+16620)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25674)*1+lsi)*1]), &(inteval->stack[((hsi*900+23766)*1+lsi)*1]), &(inteval->stack[((hsi*900+20418)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*168+2226)*1+lsi)*1]), &(inteval->stack[((hsi*126+2394)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*216+2010)*1+lsi)*1]), &(inteval->stack[((hsi*168+2226)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+24666)*1+lsi)*1]), &(inteval->stack[((hsi*126+2394)*1+lsi)*1]), &(inteval->stack[((hsi*90+2520)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+4950)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*270+24666)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+24666)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*540+4950)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+4950)*1+lsi)*1]), &(inteval->stack[((hsi*270+1740)*1+lsi)*1]), &(inteval->stack[((hsi*216+2010)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+26934)*1+lsi)*1]), &(inteval->stack[((hsi*648+4950)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+27942)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26934)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]),6);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*1350+8520)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27942)*1+lsi)*1]), &(inteval->stack[((hsi*900+24666)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1350+12570)*1+lsi)*1]), &(inteval->stack[((hsi*1350+8520)*1+lsi)*1]), &(inteval->stack[((hsi*1350+16620)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*168+4566)*1+lsi)*1]), &(inteval->stack[((hsi*126+4734)*1+lsi)*1]), &(inteval->stack[((hsi*126+3774)*1+lsi)*1]),6);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*216+4350)*1+lsi)*1]), &(inteval->stack[((hsi*168+4566)*1+lsi)*1]), &(inteval->stack[((hsi*168+3480)*1+lsi)*1]),6);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*378+17970)*1+lsi)*1]),6);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*270+26934)*1+lsi)*1]), &(inteval->stack[((hsi*126+4734)*1+lsi)*1]), &(inteval->stack[((hsi*90+4860)*1+lsi)*1]), &(inteval->stack[((hsi*90+3990)*1+lsi)*1]),6);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*540+4566)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*270+26934)*1+lsi)*1]), &(inteval->stack[((hsi*270+18348)*1+lsi)*1]),6);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*900+26934)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*540+4566)*1+lsi)*1]), &(inteval->stack[((hsi*540+18618)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+4566)*1+lsi)*1]), &(inteval->stack[((hsi*270+4080)*1+lsi)*1]), &(inteval->stack[((hsi*216+4350)*1+lsi)*1]), &(inteval->stack[((hsi*216+3096)*1+lsi)*1]),6);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1008+29202)*1+lsi)*1]), &(inteval->stack[((hsi*648+4566)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*504+19158)*1+lsi)*1]),6);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*1260+4080)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29202)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*756+19662)*1+lsi)*1]),6);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*1350+15270)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4080)*1+lsi)*1]), &(inteval->stack[((hsi*900+26934)*1+lsi)*1]), &(inteval->stack[((hsi*900+20418)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*168+1356)*1+lsi)*1]), &(inteval->stack[((hsi*126+1524)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*216+1140)*1+lsi)*1]), &(inteval->stack[((hsi*168+1356)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+1740)*1+lsi)*1]), &(inteval->stack[((hsi*126+1524)*1+lsi)*1]), &(inteval->stack[((hsi*90+1650)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+22956)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*270+1740)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+1356)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*540+22956)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+22956)*1+lsi)*1]), &(inteval->stack[((hsi*270+870)*1+lsi)*1]), &(inteval->stack[((hsi*216+1140)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+29202)*1+lsi)*1]), &(inteval->stack[((hsi*648+22956)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+30210)*1+lsi)*1]), &(inteval->stack[((hsi*1008+29202)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]),6);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*1350+7170)*1+lsi)*1]), &(inteval->stack[((hsi*1260+30210)*1+lsi)*1]), &(inteval->stack[((hsi*900+1356)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1350+11220)*1+lsi)*1]), &(inteval->stack[((hsi*1350+7170)*1+lsi)*1]), &(inteval->stack[((hsi*1350+15270)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*168+3312)*1+lsi)*1]), &(inteval->stack[((hsi*126+3648)*1+lsi)*1]), &(inteval->stack[((hsi*126+3774)*1+lsi)*1]),6);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*216+2880)*1+lsi)*1]), &(inteval->stack[((hsi*168+3312)*1+lsi)*1]), &(inteval->stack[((hsi*168+3480)*1+lsi)*1]),6);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*378+17970)*1+lsi)*1]),6);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*270+29202)*1+lsi)*1]), &(inteval->stack[((hsi*126+3648)*1+lsi)*1]), &(inteval->stack[((hsi*90+3900)*1+lsi)*1]), &(inteval->stack[((hsi*90+3990)*1+lsi)*1]),6);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*540+22956)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*270+29202)*1+lsi)*1]), &(inteval->stack[((hsi*270+18348)*1+lsi)*1]),6);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*900+29202)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*540+22956)*1+lsi)*1]), &(inteval->stack[((hsi*540+18618)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+17970)*1+lsi)*1]), &(inteval->stack[((hsi*270+2610)*1+lsi)*1]), &(inteval->stack[((hsi*216+2880)*1+lsi)*1]), &(inteval->stack[((hsi*216+3096)*1+lsi)*1]),6);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1008+2256)*1+lsi)*1]), &(inteval->stack[((hsi*648+17970)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*504+19158)*1+lsi)*1]),6);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*1260+17970)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2256)*1+lsi)*1]), &(inteval->stack[((hsi*756+22200)*1+lsi)*1]), &(inteval->stack[((hsi*756+19662)*1+lsi)*1]),6);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*1350+13920)*1+lsi)*1]), &(inteval->stack[((hsi*1260+17970)*1+lsi)*1]), &(inteval->stack[((hsi*900+29202)*1+lsi)*1]), &(inteval->stack[((hsi*900+20418)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*168+486)*1+lsi)*1]), &(inteval->stack[((hsi*126+654)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*216+270)*1+lsi)*1]), &(inteval->stack[((hsi*168+486)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+2256)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]),6);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*270+22200)*1+lsi)*1]), &(inteval->stack[((hsi*126+654)*1+lsi)*1]), &(inteval->stack[((hsi*90+780)*1+lsi)*1]),6);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*540+22470)*1+lsi)*1]), &(inteval->stack[((hsi*378+21318)*1+lsi)*1]), &(inteval->stack[((hsi*270+22200)*1+lsi)*1]),6);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*900+19230)*1+lsi)*1]), &(inteval->stack[((hsi*756+2256)*1+lsi)*1]), &(inteval->stack[((hsi*540+22470)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+22200)*1+lsi)*1]), &(inteval->stack[((hsi*270+0)*1+lsi)*1]), &(inteval->stack[((hsi*216+270)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*648+22200)*1+lsi)*1]), &(inteval->stack[((hsi*504+21696)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+21318)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+2256)*1+lsi)*1]),6);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*1350+5820)*1+lsi)*1]), &(inteval->stack[((hsi*1260+21318)*1+lsi)*1]), &(inteval->stack[((hsi*900+19230)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1350+9870)*1+lsi)*1]), &(inteval->stack[((hsi*1350+5820)*1+lsi)*1]), &(inteval->stack[((hsi*1350+13920)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1350+5820)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1350+7170)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1350+8520)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1350+9870)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1350+11220)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1350+12570)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1350+13920)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1350+15270)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1350+16620)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
