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
#include <CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_F__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+40750)*1+lsi)*1]), &(inteval->stack[((hsi*360+7360)*1+lsi)*1]), &(inteval->stack[((hsi*280+8000)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+41590)*1+lsi)*1]), &(inteval->stack[((hsi*280+8000)*1+lsi)*1]), &(inteval->stack[((hsi*210+8490)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+42220)*1+lsi)*1]), &(inteval->stack[((hsi*840+40750)*1+lsi)*1]), &(inteval->stack[((hsi*630+41590)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+43480)*1+lsi)*1]), &(inteval->stack[((hsi*450+6550)*1+lsi)*1]), &(inteval->stack[((hsi*360+7360)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+44560)*1+lsi)*1]), &(inteval->stack[((hsi*1080+43480)*1+lsi)*1]), &(inteval->stack[((hsi*840+40750)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+46240)*1+lsi)*1]), &(inteval->stack[((hsi*1680+44560)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42220)*1+lsi)*1]),10);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*360+11550)*1+lsi)*1]), &(inteval->stack[((hsi*280+11910)*1+lsi)*1]), &(inteval->stack[((hsi*280+8000)*1+lsi)*1]),10);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*450+11100)*1+lsi)*1]), &(inteval->stack[((hsi*360+11550)*1+lsi)*1]), &(inteval->stack[((hsi*360+7360)*1+lsi)*1]),10);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*840+40750)*1+lsi)*1]),10);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*630+51940)*1+lsi)*1]), &(inteval->stack[((hsi*280+11910)*1+lsi)*1]), &(inteval->stack[((hsi*210+12190)*1+lsi)*1]), &(inteval->stack[((hsi*210+8490)*1+lsi)*1]),10);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1260+52570)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*630+51940)*1+lsi)*1]), &(inteval->stack[((hsi*630+41590)*1+lsi)*1]),10);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*2100+53830)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+52570)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42220)*1+lsi)*1]),10);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*1350+51940)*1+lsi)*1]), &(inteval->stack[((hsi*550+10550)*1+lsi)*1]), &(inteval->stack[((hsi*450+11100)*1+lsi)*1]), &(inteval->stack[((hsi*450+6550)*1+lsi)*1]),10);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*2160+55930)*1+lsi)*1]), &(inteval->stack[((hsi*1350+51940)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*1080+43480)*1+lsi)*1]),10);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*2800+58090)*1+lsi)*1]), &(inteval->stack[((hsi*2160+55930)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1680+44560)*1+lsi)*1]),10);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*3150+37600)*1+lsi)*1]), &(inteval->stack[((hsi*2800+58090)*1+lsi)*1]), &(inteval->stack[((hsi*2100+53830)*1+lsi)*1]), &(inteval->stack[((hsi*2100+46240)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*360+4700)*1+lsi)*1]), &(inteval->stack[((hsi*280+5060)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*450+4250)*1+lsi)*1]), &(inteval->stack[((hsi*360+4700)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+55930)*1+lsi)*1]), &(inteval->stack[((hsi*280+5060)*1+lsi)*1]), &(inteval->stack[((hsi*210+5340)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+51940)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*630+55930)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+55930)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+51940)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+51940)*1+lsi)*1]), &(inteval->stack[((hsi*550+3700)*1+lsi)*1]), &(inteval->stack[((hsi*450+4250)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+60890)*1+lsi)*1]), &(inteval->stack[((hsi*1350+51940)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+63050)*1+lsi)*1]), &(inteval->stack[((hsi*2160+60890)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]),10);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*3150+18700)*1+lsi)*1]), &(inteval->stack[((hsi*2800+63050)*1+lsi)*1]), &(inteval->stack[((hsi*2100+55930)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3150+28150)*1+lsi)*1]), &(inteval->stack[((hsi*3150+18700)*1+lsi)*1]), &(inteval->stack[((hsi*3150+37600)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*360+9700)*1+lsi)*1]), &(inteval->stack[((hsi*280+10060)*1+lsi)*1]), &(inteval->stack[((hsi*280+8000)*1+lsi)*1]),10);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*450+9250)*1+lsi)*1]), &(inteval->stack[((hsi*360+9700)*1+lsi)*1]), &(inteval->stack[((hsi*360+7360)*1+lsi)*1]),10);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*840+40750)*1+lsi)*1]),10);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*630+60890)*1+lsi)*1]), &(inteval->stack[((hsi*280+10060)*1+lsi)*1]), &(inteval->stack[((hsi*210+10340)*1+lsi)*1]), &(inteval->stack[((hsi*210+8490)*1+lsi)*1]),10);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1260+9700)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*630+60890)*1+lsi)*1]), &(inteval->stack[((hsi*630+41590)*1+lsi)*1]),10);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*2100+60890)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42220)*1+lsi)*1]),10);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*1350+9700)*1+lsi)*1]), &(inteval->stack[((hsi*550+8700)*1+lsi)*1]), &(inteval->stack[((hsi*450+9250)*1+lsi)*1]), &(inteval->stack[((hsi*450+6550)*1+lsi)*1]),10);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*2160+65850)*1+lsi)*1]), &(inteval->stack[((hsi*1350+9700)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*1080+43480)*1+lsi)*1]),10);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*2800+8700)*1+lsi)*1]), &(inteval->stack[((hsi*2160+65850)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1680+44560)*1+lsi)*1]),10);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*3150+34450)*1+lsi)*1]), &(inteval->stack[((hsi*2800+8700)*1+lsi)*1]), &(inteval->stack[((hsi*2100+60890)*1+lsi)*1]), &(inteval->stack[((hsi*2100+46240)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*360+2850)*1+lsi)*1]), &(inteval->stack[((hsi*280+3210)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*450+2400)*1+lsi)*1]), &(inteval->stack[((hsi*360+2850)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+51940)*1+lsi)*1]), &(inteval->stack[((hsi*280+3210)*1+lsi)*1]), &(inteval->stack[((hsi*210+3490)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+52570)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*630+51940)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+2850)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+52570)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+51940)*1+lsi)*1]), &(inteval->stack[((hsi*550+1850)*1+lsi)*1]), &(inteval->stack[((hsi*450+2400)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+65850)*1+lsi)*1]), &(inteval->stack[((hsi*1350+51940)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+68010)*1+lsi)*1]), &(inteval->stack[((hsi*2160+65850)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]),10);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*3150+15550)*1+lsi)*1]), &(inteval->stack[((hsi*2800+68010)*1+lsi)*1]), &(inteval->stack[((hsi*2100+2850)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3150+25000)*1+lsi)*1]), &(inteval->stack[((hsi*3150+15550)*1+lsi)*1]), &(inteval->stack[((hsi*3150+34450)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*360+7000)*1+lsi)*1]), &(inteval->stack[((hsi*280+7720)*1+lsi)*1]), &(inteval->stack[((hsi*280+8000)*1+lsi)*1]),10);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*450+6100)*1+lsi)*1]), &(inteval->stack[((hsi*360+7000)*1+lsi)*1]), &(inteval->stack[((hsi*360+7360)*1+lsi)*1]),10);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*840+40750)*1+lsi)*1]),10);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*630+65850)*1+lsi)*1]), &(inteval->stack[((hsi*280+7720)*1+lsi)*1]), &(inteval->stack[((hsi*210+8280)*1+lsi)*1]), &(inteval->stack[((hsi*210+8490)*1+lsi)*1]),10);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1260+51940)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*630+65850)*1+lsi)*1]), &(inteval->stack[((hsi*630+41590)*1+lsi)*1]),10);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*2100+65850)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1260+51940)*1+lsi)*1]), &(inteval->stack[((hsi*1260+42220)*1+lsi)*1]),10);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*1350+40750)*1+lsi)*1]), &(inteval->stack[((hsi*550+5550)*1+lsi)*1]), &(inteval->stack[((hsi*450+6100)*1+lsi)*1]), &(inteval->stack[((hsi*450+6550)*1+lsi)*1]),10);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*2160+4950)*1+lsi)*1]), &(inteval->stack[((hsi*1350+40750)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*1080+43480)*1+lsi)*1]),10);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*2800+40750)*1+lsi)*1]), &(inteval->stack[((hsi*2160+4950)*1+lsi)*1]), &(inteval->stack[((hsi*1680+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1680+44560)*1+lsi)*1]),10);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*3150+31300)*1+lsi)*1]), &(inteval->stack[((hsi*2800+40750)*1+lsi)*1]), &(inteval->stack[((hsi*2100+65850)*1+lsi)*1]), &(inteval->stack[((hsi*2100+46240)*1+lsi)*1]),10);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]), &(inteval->stack[((hsi*280+1360)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*450+550)*1+lsi)*1]), &(inteval->stack[((hsi*360+1000)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+4950)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+50260)*1+lsi)*1]), &(inteval->stack[((hsi*280+1360)*1+lsi)*1]), &(inteval->stack[((hsi*210+1640)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+50890)*1+lsi)*1]), &(inteval->stack[((hsi*840+48340)*1+lsi)*1]), &(inteval->stack[((hsi*630+50260)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+43550)*1+lsi)*1]), &(inteval->stack[((hsi*1680+4950)*1+lsi)*1]), &(inteval->stack[((hsi*1260+50890)*1+lsi)*1]),10);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*1350+50260)*1+lsi)*1]), &(inteval->stack[((hsi*550+0)*1+lsi)*1]), &(inteval->stack[((hsi*450+550)*1+lsi)*1]),10);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*2160+0)*1+lsi)*1]), &(inteval->stack[((hsi*1350+50260)*1+lsi)*1]), &(inteval->stack[((hsi*1080+49180)*1+lsi)*1]),10);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*2800+48340)*1+lsi)*1]), &(inteval->stack[((hsi*2160+0)*1+lsi)*1]), &(inteval->stack[((hsi*1680+4950)*1+lsi)*1]),10);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*3150+12400)*1+lsi)*1]), &(inteval->stack[((hsi*2800+48340)*1+lsi)*1]), &(inteval->stack[((hsi*2100+43550)*1+lsi)*1]),10);
CR_DerivGaussP1InBra_aB_F__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*3150+21850)*1+lsi)*1]), &(inteval->stack[((hsi*3150+12400)*1+lsi)*1]), &(inteval->stack[((hsi*3150+31300)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3150+12400)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*3150+15550)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*3150+18700)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*3150+21850)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*3150+25000)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*3150+28150)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*3150+31300)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*3150+34450)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*3150+37600)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
