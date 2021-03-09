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
#include <CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hd001.h>
#include <HRRPart1bra0ket0hd010.h>
#include <HRRPart1bra0ket0hd100.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hf001.h>
#include <HRRPart1bra0ket0hf010.h>
#include <HRRPart1bra0ket0hf100.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hg001.h>
#include <HRRPart1bra0ket0hg010.h>
#include <HRRPart1bra0ket0hg100.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0hp001.h>
#include <HRRPart1bra0ket0hp010.h>
#include <HRRPart1bra0ket0hp100.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0id001.h>
#include <HRRPart1bra0ket0id010.h>
#include <HRRPart1bra0ket0id100.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0if001.h>
#include <HRRPart1bra0ket0if010.h>
#include <HRRPart1bra0ket0if100.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0ip001.h>
#include <HRRPart1bra0ket0ip010.h>
#include <HRRPart1bra0ket0ip100.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kd001.h>
#include <HRRPart1bra0ket0kd010.h>
#include <HRRPart1bra0ket0kd100.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0kp001.h>
#include <HRRPart1bra0ket0kp010.h>
#include <HRRPart1bra0ket0kp100.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0lp001.h>
#include <HRRPart1bra0ket0lp010.h>
#include <HRRPart1bra0ket0lp100.h>
#include <deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_D__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+24450)*1+lsi)*1]), &(inteval->stack[((hsi*216+4416)*1+lsi)*1]), &(inteval->stack[((hsi*168+4800)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+24954)*1+lsi)*1]), &(inteval->stack[((hsi*168+4800)*1+lsi)*1]), &(inteval->stack[((hsi*126+5094)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+25332)*1+lsi)*1]), &(inteval->stack[((hsi*504+24450)*1+lsi)*1]), &(inteval->stack[((hsi*378+24954)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+26088)*1+lsi)*1]), &(inteval->stack[((hsi*270+3930)*1+lsi)*1]), &(inteval->stack[((hsi*216+4416)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+26736)*1+lsi)*1]), &(inteval->stack[((hsi*648+26088)*1+lsi)*1]), &(inteval->stack[((hsi*504+24450)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+27744)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26736)*1+lsi)*1]), &(inteval->stack[((hsi*756+25332)*1+lsi)*1]),6);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*216+6930)*1+lsi)*1]), &(inteval->stack[((hsi*168+7146)*1+lsi)*1]), &(inteval->stack[((hsi*168+4800)*1+lsi)*1]),6);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*270+6660)*1+lsi)*1]), &(inteval->stack[((hsi*216+6930)*1+lsi)*1]), &(inteval->stack[((hsi*216+4416)*1+lsi)*1]),6);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*504+24450)*1+lsi)*1]),6);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*378+31164)*1+lsi)*1]), &(inteval->stack[((hsi*168+7146)*1+lsi)*1]), &(inteval->stack[((hsi*126+7314)*1+lsi)*1]), &(inteval->stack[((hsi*126+5094)*1+lsi)*1]),6);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*756+31542)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*378+31164)*1+lsi)*1]), &(inteval->stack[((hsi*378+24954)*1+lsi)*1]),6);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*1260+32298)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*756+31542)*1+lsi)*1]), &(inteval->stack[((hsi*756+25332)*1+lsi)*1]),6);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*810+31164)*1+lsi)*1]), &(inteval->stack[((hsi*330+6330)*1+lsi)*1]), &(inteval->stack[((hsi*270+6660)*1+lsi)*1]), &(inteval->stack[((hsi*270+3930)*1+lsi)*1]),6);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*1296+33558)*1+lsi)*1]), &(inteval->stack[((hsi*810+31164)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*648+26088)*1+lsi)*1]),6);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*1680+34854)*1+lsi)*1]), &(inteval->stack[((hsi*1296+33558)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26736)*1+lsi)*1]),6);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*1890+22560)*1+lsi)*1]), &(inteval->stack[((hsi*1680+34854)*1+lsi)*1]), &(inteval->stack[((hsi*1260+32298)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27744)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*216+2820)*1+lsi)*1]), &(inteval->stack[((hsi*168+3036)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*270+2550)*1+lsi)*1]), &(inteval->stack[((hsi*216+2820)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+33558)*1+lsi)*1]), &(inteval->stack[((hsi*168+3036)*1+lsi)*1]), &(inteval->stack[((hsi*126+3204)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+31164)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*378+33558)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+33558)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*756+31164)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+31164)*1+lsi)*1]), &(inteval->stack[((hsi*330+2220)*1+lsi)*1]), &(inteval->stack[((hsi*270+2550)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+36534)*1+lsi)*1]), &(inteval->stack[((hsi*810+31164)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+37830)*1+lsi)*1]), &(inteval->stack[((hsi*1296+36534)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]),6);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*1890+11220)*1+lsi)*1]), &(inteval->stack[((hsi*1680+37830)*1+lsi)*1]), &(inteval->stack[((hsi*1260+33558)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1890+16890)*1+lsi)*1]), &(inteval->stack[((hsi*1890+11220)*1+lsi)*1]), &(inteval->stack[((hsi*1890+22560)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*216+5820)*1+lsi)*1]), &(inteval->stack[((hsi*168+6036)*1+lsi)*1]), &(inteval->stack[((hsi*168+4800)*1+lsi)*1]),6);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*270+5550)*1+lsi)*1]), &(inteval->stack[((hsi*216+5820)*1+lsi)*1]), &(inteval->stack[((hsi*216+4416)*1+lsi)*1]),6);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*504+24450)*1+lsi)*1]),6);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*378+36534)*1+lsi)*1]), &(inteval->stack[((hsi*168+6036)*1+lsi)*1]), &(inteval->stack[((hsi*126+6204)*1+lsi)*1]), &(inteval->stack[((hsi*126+5094)*1+lsi)*1]),6);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*756+5820)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*378+36534)*1+lsi)*1]), &(inteval->stack[((hsi*378+24954)*1+lsi)*1]),6);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*1260+36534)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*756+5820)*1+lsi)*1]), &(inteval->stack[((hsi*756+25332)*1+lsi)*1]),6);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*810+5820)*1+lsi)*1]), &(inteval->stack[((hsi*330+5220)*1+lsi)*1]), &(inteval->stack[((hsi*270+5550)*1+lsi)*1]), &(inteval->stack[((hsi*270+3930)*1+lsi)*1]),6);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*1296+39510)*1+lsi)*1]), &(inteval->stack[((hsi*810+5820)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*648+26088)*1+lsi)*1]),6);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*1680+5220)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39510)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26736)*1+lsi)*1]),6);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*1890+20670)*1+lsi)*1]), &(inteval->stack[((hsi*1680+5220)*1+lsi)*1]), &(inteval->stack[((hsi*1260+36534)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27744)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*216+1710)*1+lsi)*1]), &(inteval->stack[((hsi*168+1926)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*270+1440)*1+lsi)*1]), &(inteval->stack[((hsi*216+1710)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+31164)*1+lsi)*1]), &(inteval->stack[((hsi*168+1926)*1+lsi)*1]), &(inteval->stack[((hsi*126+2094)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+31542)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*378+31164)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+1710)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*756+31542)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+31164)*1+lsi)*1]), &(inteval->stack[((hsi*330+1110)*1+lsi)*1]), &(inteval->stack[((hsi*270+1440)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+39510)*1+lsi)*1]), &(inteval->stack[((hsi*810+31164)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+40806)*1+lsi)*1]), &(inteval->stack[((hsi*1296+39510)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]),6);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*1890+9330)*1+lsi)*1]), &(inteval->stack[((hsi*1680+40806)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1710)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1890+15000)*1+lsi)*1]), &(inteval->stack[((hsi*1890+9330)*1+lsi)*1]), &(inteval->stack[((hsi*1890+20670)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*216+4200)*1+lsi)*1]), &(inteval->stack[((hsi*168+4632)*1+lsi)*1]), &(inteval->stack[((hsi*168+4800)*1+lsi)*1]),6);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*270+3660)*1+lsi)*1]), &(inteval->stack[((hsi*216+4200)*1+lsi)*1]), &(inteval->stack[((hsi*216+4416)*1+lsi)*1]),6);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*504+24450)*1+lsi)*1]),6);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*378+39510)*1+lsi)*1]), &(inteval->stack[((hsi*168+4632)*1+lsi)*1]), &(inteval->stack[((hsi*126+4968)*1+lsi)*1]), &(inteval->stack[((hsi*126+5094)*1+lsi)*1]),6);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*756+31164)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*378+39510)*1+lsi)*1]), &(inteval->stack[((hsi*378+24954)*1+lsi)*1]),6);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*1260+39510)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*756+31164)*1+lsi)*1]), &(inteval->stack[((hsi*756+25332)*1+lsi)*1]),6);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*810+24450)*1+lsi)*1]), &(inteval->stack[((hsi*330+3330)*1+lsi)*1]), &(inteval->stack[((hsi*270+3660)*1+lsi)*1]), &(inteval->stack[((hsi*270+3930)*1+lsi)*1]),6);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*1296+2970)*1+lsi)*1]), &(inteval->stack[((hsi*810+24450)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*648+26088)*1+lsi)*1]),6);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*1680+24450)*1+lsi)*1]), &(inteval->stack[((hsi*1296+2970)*1+lsi)*1]), &(inteval->stack[((hsi*1008+30156)*1+lsi)*1]), &(inteval->stack[((hsi*1008+26736)*1+lsi)*1]),6);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*1890+18780)*1+lsi)*1]), &(inteval->stack[((hsi*1680+24450)*1+lsi)*1]), &(inteval->stack[((hsi*1260+39510)*1+lsi)*1]), &(inteval->stack[((hsi*1260+27744)*1+lsi)*1]),6);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]),6);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]), &(inteval->stack[((hsi*216+600)*1+lsi)*1]),6);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1008+2970)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]),6);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*378+30156)*1+lsi)*1]), &(inteval->stack[((hsi*168+816)*1+lsi)*1]), &(inteval->stack[((hsi*126+984)*1+lsi)*1]),6);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*756+30534)*1+lsi)*1]), &(inteval->stack[((hsi*504+29004)*1+lsi)*1]), &(inteval->stack[((hsi*378+30156)*1+lsi)*1]),6);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*1260+26130)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2970)*1+lsi)*1]), &(inteval->stack[((hsi*756+30534)*1+lsi)*1]),6);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*810+30156)*1+lsi)*1]), &(inteval->stack[((hsi*330+0)*1+lsi)*1]), &(inteval->stack[((hsi*270+330)*1+lsi)*1]),6);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*810+30156)*1+lsi)*1]), &(inteval->stack[((hsi*648+29508)*1+lsi)*1]),6);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*1680+29004)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2970)*1+lsi)*1]),6);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*1890+7440)*1+lsi)*1]), &(inteval->stack[((hsi*1680+29004)*1+lsi)*1]), &(inteval->stack[((hsi*1260+26130)*1+lsi)*1]),6);
CR_DerivGaussP1InBra_aB_D__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*1890+13110)*1+lsi)*1]), &(inteval->stack[((hsi*1890+7440)*1+lsi)*1]), &(inteval->stack[((hsi*1890+18780)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1890+7440)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1890+9330)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1890+11220)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1890+13110)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1890+15000)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1890+16890)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1890+18780)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1890+20670)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1890+22560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
