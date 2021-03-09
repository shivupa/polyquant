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
#include <CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27160)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+83860)*1+lsi)*1]), &(inteval->stack[((hsi*784+16240)*1+lsi)*1]), &(inteval->stack[((hsi*588+17612)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+85624)*1+lsi)*1]), &(inteval->stack[((hsi*588+17612)*1+lsi)*1]), &(inteval->stack[((hsi*420+18620)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+86884)*1+lsi)*1]), &(inteval->stack[((hsi*1764+83860)*1+lsi)*1]), &(inteval->stack[((hsi*1260+85624)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+89404)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14448)*1+lsi)*1]), &(inteval->stack[((hsi*784+16240)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+91756)*1+lsi)*1]), &(inteval->stack[((hsi*2352+89404)*1+lsi)*1]), &(inteval->stack[((hsi*1764+83860)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+95284)*1+lsi)*1]), &(inteval->stack[((hsi*3528+91756)*1+lsi)*1]), &(inteval->stack[((hsi*2520+86884)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*784+25368)*1+lsi)*1]), &(inteval->stack[((hsi*588+26152)*1+lsi)*1]), &(inteval->stack[((hsi*588+17612)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24360)*1+lsi)*1]), &(inteval->stack[((hsi*784+25368)*1+lsi)*1]), &(inteval->stack[((hsi*784+16240)*1+lsi)*1]),28);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1764+83860)*1+lsi)*1]),28);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*1260+107128)*1+lsi)*1]), &(inteval->stack[((hsi*588+26152)*1+lsi)*1]), &(inteval->stack[((hsi*420+26740)*1+lsi)*1]), &(inteval->stack[((hsi*420+18620)*1+lsi)*1]),28);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*2520+108388)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1260+107128)*1+lsi)*1]), &(inteval->stack[((hsi*1260+85624)*1+lsi)*1]),28);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*4200+110908)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+108388)*1+lsi)*1]), &(inteval->stack[((hsi*2520+86884)*1+lsi)*1]),28);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+107128)*1+lsi)*1]), &(inteval->stack[((hsi*1260+23100)*1+lsi)*1]), &(inteval->stack[((hsi*1008+24360)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14448)*1+lsi)*1]),28);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*4704+115108)*1+lsi)*1]), &(inteval->stack[((hsi*3024+107128)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*2352+89404)*1+lsi)*1]),28);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*5880+119812)*1+lsi)*1]), &(inteval->stack[((hsi*4704+115108)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*3528+91756)*1+lsi)*1]),28);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*6300+77560)*1+lsi)*1]), &(inteval->stack[((hsi*5880+119812)*1+lsi)*1]), &(inteval->stack[((hsi*4200+110908)*1+lsi)*1]), &(inteval->stack[((hsi*4200+95284)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*784+10388)*1+lsi)*1]), &(inteval->stack[((hsi*588+11172)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9380)*1+lsi)*1]), &(inteval->stack[((hsi*784+10388)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+115108)*1+lsi)*1]), &(inteval->stack[((hsi*588+11172)*1+lsi)*1]), &(inteval->stack[((hsi*420+11760)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+23100)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1260+115108)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+115108)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+23100)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+23100)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9380)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+125692)*1+lsi)*1]), &(inteval->stack[((hsi*3024+23100)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+130396)*1+lsi)*1]), &(inteval->stack[((hsi*4704+125692)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]),28);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*6300+39760)*1+lsi)*1]), &(inteval->stack[((hsi*5880+130396)*1+lsi)*1]), &(inteval->stack[((hsi*4200+115108)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*6300+58660)*1+lsi)*1]), &(inteval->stack[((hsi*6300+39760)*1+lsi)*1]), &(inteval->stack[((hsi*6300+77560)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*784+21308)*1+lsi)*1]), &(inteval->stack[((hsi*588+22092)*1+lsi)*1]), &(inteval->stack[((hsi*588+17612)*1+lsi)*1]),28);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20300)*1+lsi)*1]), &(inteval->stack[((hsi*784+21308)*1+lsi)*1]), &(inteval->stack[((hsi*784+16240)*1+lsi)*1]),28);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1764+83860)*1+lsi)*1]),28);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*1260+125692)*1+lsi)*1]), &(inteval->stack[((hsi*588+22092)*1+lsi)*1]), &(inteval->stack[((hsi*420+22680)*1+lsi)*1]), &(inteval->stack[((hsi*420+18620)*1+lsi)*1]),28);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*2520+21308)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1260+125692)*1+lsi)*1]), &(inteval->stack[((hsi*1260+85624)*1+lsi)*1]),28);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*4200+125692)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+21308)*1+lsi)*1]), &(inteval->stack[((hsi*2520+86884)*1+lsi)*1]),28);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+21308)*1+lsi)*1]), &(inteval->stack[((hsi*1260+19040)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20300)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14448)*1+lsi)*1]),28);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*4704+136276)*1+lsi)*1]), &(inteval->stack[((hsi*3024+21308)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*2352+89404)*1+lsi)*1]),28);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*5880+19040)*1+lsi)*1]), &(inteval->stack[((hsi*4704+136276)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*3528+91756)*1+lsi)*1]),28);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*6300+71260)*1+lsi)*1]), &(inteval->stack[((hsi*5880+19040)*1+lsi)*1]), &(inteval->stack[((hsi*4200+125692)*1+lsi)*1]), &(inteval->stack[((hsi*4200+95284)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*784+6328)*1+lsi)*1]), &(inteval->stack[((hsi*588+7112)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5320)*1+lsi)*1]), &(inteval->stack[((hsi*784+6328)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]), &(inteval->stack[((hsi*588+7112)*1+lsi)*1]), &(inteval->stack[((hsi*420+7700)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+107128)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+6328)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+107128)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+107128)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4060)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5320)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+136276)*1+lsi)*1]), &(inteval->stack[((hsi*3024+107128)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+140980)*1+lsi)*1]), &(inteval->stack[((hsi*4704+136276)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]),28);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*6300+33460)*1+lsi)*1]), &(inteval->stack[((hsi*5880+140980)*1+lsi)*1]), &(inteval->stack[((hsi*4200+6328)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*6300+52360)*1+lsi)*1]), &(inteval->stack[((hsi*6300+33460)*1+lsi)*1]), &(inteval->stack[((hsi*6300+71260)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*784+15456)*1+lsi)*1]), &(inteval->stack[((hsi*588+17024)*1+lsi)*1]), &(inteval->stack[((hsi*588+17612)*1+lsi)*1]),28);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13440)*1+lsi)*1]), &(inteval->stack[((hsi*784+15456)*1+lsi)*1]), &(inteval->stack[((hsi*784+16240)*1+lsi)*1]),28);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1764+83860)*1+lsi)*1]),28);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*1260+136276)*1+lsi)*1]), &(inteval->stack[((hsi*588+17024)*1+lsi)*1]), &(inteval->stack[((hsi*420+18200)*1+lsi)*1]), &(inteval->stack[((hsi*420+18620)*1+lsi)*1]),28);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*2520+107128)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1260+136276)*1+lsi)*1]), &(inteval->stack[((hsi*1260+85624)*1+lsi)*1]),28);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*4200+136276)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2520+107128)*1+lsi)*1]), &(inteval->stack[((hsi*2520+86884)*1+lsi)*1]),28);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+83860)*1+lsi)*1]), &(inteval->stack[((hsi*1260+12180)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13440)*1+lsi)*1]), &(inteval->stack[((hsi*1008+14448)*1+lsi)*1]),28);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*4704+10528)*1+lsi)*1]), &(inteval->stack[((hsi*3024+83860)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*2352+89404)*1+lsi)*1]),28);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*5880+83860)*1+lsi)*1]), &(inteval->stack[((hsi*4704+10528)*1+lsi)*1]), &(inteval->stack[((hsi*3528+103600)*1+lsi)*1]), &(inteval->stack[((hsi*3528+91756)*1+lsi)*1]),28);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*6300+64960)*1+lsi)*1]), &(inteval->stack[((hsi*5880+83860)*1+lsi)*1]), &(inteval->stack[((hsi*4200+136276)*1+lsi)*1]), &(inteval->stack[((hsi*4200+95284)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*784+2268)*1+lsi)*1]), &(inteval->stack[((hsi*588+3052)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1260)*1+lsi)*1]), &(inteval->stack[((hsi*784+2268)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+10528)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+103600)*1+lsi)*1]), &(inteval->stack[((hsi*588+3052)*1+lsi)*1]), &(inteval->stack[((hsi*420+3640)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+104860)*1+lsi)*1]), &(inteval->stack[((hsi*1764+99484)*1+lsi)*1]), &(inteval->stack[((hsi*1260+103600)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+89740)*1+lsi)*1]), &(inteval->stack[((hsi*3528+10528)*1+lsi)*1]), &(inteval->stack[((hsi*2520+104860)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+103600)*1+lsi)*1]), &(inteval->stack[((hsi*1260+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1260)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+0)*1+lsi)*1]), &(inteval->stack[((hsi*3024+103600)*1+lsi)*1]), &(inteval->stack[((hsi*2352+101248)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+99484)*1+lsi)*1]), &(inteval->stack[((hsi*4704+0)*1+lsi)*1]), &(inteval->stack[((hsi*3528+10528)*1+lsi)*1]),28);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*6300+27160)*1+lsi)*1]), &(inteval->stack[((hsi*5880+99484)*1+lsi)*1]), &(inteval->stack[((hsi*4200+89740)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*6300+46060)*1+lsi)*1]), &(inteval->stack[((hsi*6300+27160)*1+lsi)*1]), &(inteval->stack[((hsi*6300+64960)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6300+27160)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6300+33460)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6300+39760)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6300+46060)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6300+52360)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6300+58660)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*6300+64960)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*6300+71260)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*6300+77560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
