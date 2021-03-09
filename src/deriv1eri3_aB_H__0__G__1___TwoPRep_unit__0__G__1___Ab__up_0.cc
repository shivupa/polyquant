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
#include <CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,20370)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__G__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+62895)*1+lsi)*1]), &(inteval->stack[((hsi*588+12180)*1+lsi)*1]), &(inteval->stack[((hsi*441+13209)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+64218)*1+lsi)*1]), &(inteval->stack[((hsi*441+13209)*1+lsi)*1]), &(inteval->stack[((hsi*315+13965)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+65163)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62895)*1+lsi)*1]), &(inteval->stack[((hsi*945+64218)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+67053)*1+lsi)*1]), &(inteval->stack[((hsi*756+10836)*1+lsi)*1]), &(inteval->stack[((hsi*588+12180)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+68817)*1+lsi)*1]), &(inteval->stack[((hsi*1764+67053)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62895)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+71463)*1+lsi)*1]), &(inteval->stack[((hsi*2646+68817)*1+lsi)*1]), &(inteval->stack[((hsi*1890+65163)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*588+19026)*1+lsi)*1]), &(inteval->stack[((hsi*441+19614)*1+lsi)*1]), &(inteval->stack[((hsi*441+13209)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*756+18270)*1+lsi)*1]), &(inteval->stack[((hsi*588+19026)*1+lsi)*1]), &(inteval->stack[((hsi*588+12180)*1+lsi)*1]),21);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62895)*1+lsi)*1]),21);
HRRPart1bra0ket0gp001(inteval, &(inteval->stack[((hsi*945+80346)*1+lsi)*1]), &(inteval->stack[((hsi*441+19614)*1+lsi)*1]), &(inteval->stack[((hsi*315+20055)*1+lsi)*1]), &(inteval->stack[((hsi*315+13965)*1+lsi)*1]),21);
HRRPart1bra0ket0gd001(inteval, &(inteval->stack[((hsi*1890+81291)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*945+80346)*1+lsi)*1]), &(inteval->stack[((hsi*945+64218)*1+lsi)*1]),21);
HRRPart1bra0ket0gf001(inteval, &(inteval->stack[((hsi*3150+83181)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1890+81291)*1+lsi)*1]), &(inteval->stack[((hsi*1890+65163)*1+lsi)*1]),21);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+80346)*1+lsi)*1]), &(inteval->stack[((hsi*945+17325)*1+lsi)*1]), &(inteval->stack[((hsi*756+18270)*1+lsi)*1]), &(inteval->stack[((hsi*756+10836)*1+lsi)*1]),21);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*3528+86331)*1+lsi)*1]), &(inteval->stack[((hsi*2268+80346)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1764+67053)*1+lsi)*1]),21);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*4410+89859)*1+lsi)*1]), &(inteval->stack[((hsi*3528+86331)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*2646+68817)*1+lsi)*1]),21);
HRRPart1bra0ket0gg001(inteval, &(inteval->stack[((hsi*4725+58170)*1+lsi)*1]), &(inteval->stack[((hsi*4410+89859)*1+lsi)*1]), &(inteval->stack[((hsi*3150+83181)*1+lsi)*1]), &(inteval->stack[((hsi*3150+71463)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*588+7791)*1+lsi)*1]), &(inteval->stack[((hsi*441+8379)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*756+7035)*1+lsi)*1]), &(inteval->stack[((hsi*588+7791)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+86331)*1+lsi)*1]), &(inteval->stack[((hsi*441+8379)*1+lsi)*1]), &(inteval->stack[((hsi*315+8820)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+17325)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*945+86331)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+86331)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1890+17325)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+17325)*1+lsi)*1]), &(inteval->stack[((hsi*945+6090)*1+lsi)*1]), &(inteval->stack[((hsi*756+7035)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+94269)*1+lsi)*1]), &(inteval->stack[((hsi*2268+17325)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+97797)*1+lsi)*1]), &(inteval->stack[((hsi*3528+94269)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]),21);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*4725+29820)*1+lsi)*1]), &(inteval->stack[((hsi*4410+97797)*1+lsi)*1]), &(inteval->stack[((hsi*3150+86331)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4725+43995)*1+lsi)*1]), &(inteval->stack[((hsi*4725+29820)*1+lsi)*1]), &(inteval->stack[((hsi*4725+58170)*1+lsi)*1]));
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*588+15981)*1+lsi)*1]), &(inteval->stack[((hsi*441+16569)*1+lsi)*1]), &(inteval->stack[((hsi*441+13209)*1+lsi)*1]),21);
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*756+15225)*1+lsi)*1]), &(inteval->stack[((hsi*588+15981)*1+lsi)*1]), &(inteval->stack[((hsi*588+12180)*1+lsi)*1]),21);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62895)*1+lsi)*1]),21);
HRRPart1bra0ket0gp010(inteval, &(inteval->stack[((hsi*945+94269)*1+lsi)*1]), &(inteval->stack[((hsi*441+16569)*1+lsi)*1]), &(inteval->stack[((hsi*315+17010)*1+lsi)*1]), &(inteval->stack[((hsi*315+13965)*1+lsi)*1]),21);
HRRPart1bra0ket0gd010(inteval, &(inteval->stack[((hsi*1890+15981)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*945+94269)*1+lsi)*1]), &(inteval->stack[((hsi*945+64218)*1+lsi)*1]),21);
HRRPart1bra0ket0gf010(inteval, &(inteval->stack[((hsi*3150+94269)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1890+15981)*1+lsi)*1]), &(inteval->stack[((hsi*1890+65163)*1+lsi)*1]),21);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+15981)*1+lsi)*1]), &(inteval->stack[((hsi*945+14280)*1+lsi)*1]), &(inteval->stack[((hsi*756+15225)*1+lsi)*1]), &(inteval->stack[((hsi*756+10836)*1+lsi)*1]),21);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*3528+102207)*1+lsi)*1]), &(inteval->stack[((hsi*2268+15981)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1764+67053)*1+lsi)*1]),21);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*4410+14280)*1+lsi)*1]), &(inteval->stack[((hsi*3528+102207)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*2646+68817)*1+lsi)*1]),21);
HRRPart1bra0ket0gg010(inteval, &(inteval->stack[((hsi*4725+53445)*1+lsi)*1]), &(inteval->stack[((hsi*4410+14280)*1+lsi)*1]), &(inteval->stack[((hsi*3150+94269)*1+lsi)*1]), &(inteval->stack[((hsi*3150+71463)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*588+4746)*1+lsi)*1]), &(inteval->stack[((hsi*441+5334)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*756+3990)*1+lsi)*1]), &(inteval->stack[((hsi*588+4746)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+6090)*1+lsi)*1]), &(inteval->stack[((hsi*441+5334)*1+lsi)*1]), &(inteval->stack[((hsi*315+5775)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+80346)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*945+6090)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+4746)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1890+80346)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+80346)*1+lsi)*1]), &(inteval->stack[((hsi*945+3045)*1+lsi)*1]), &(inteval->stack[((hsi*756+3990)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+102207)*1+lsi)*1]), &(inteval->stack[((hsi*2268+80346)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+105735)*1+lsi)*1]), &(inteval->stack[((hsi*3528+102207)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]),21);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*4725+25095)*1+lsi)*1]), &(inteval->stack[((hsi*4410+105735)*1+lsi)*1]), &(inteval->stack[((hsi*3150+4746)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4725+39270)*1+lsi)*1]), &(inteval->stack[((hsi*4725+25095)*1+lsi)*1]), &(inteval->stack[((hsi*4725+53445)*1+lsi)*1]));
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*588+11592)*1+lsi)*1]), &(inteval->stack[((hsi*441+12768)*1+lsi)*1]), &(inteval->stack[((hsi*441+13209)*1+lsi)*1]),21);
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*756+10080)*1+lsi)*1]), &(inteval->stack[((hsi*588+11592)*1+lsi)*1]), &(inteval->stack[((hsi*588+12180)*1+lsi)*1]),21);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62895)*1+lsi)*1]),21);
HRRPart1bra0ket0gp100(inteval, &(inteval->stack[((hsi*945+102207)*1+lsi)*1]), &(inteval->stack[((hsi*441+12768)*1+lsi)*1]), &(inteval->stack[((hsi*315+13650)*1+lsi)*1]), &(inteval->stack[((hsi*315+13965)*1+lsi)*1]),21);
HRRPart1bra0ket0gd100(inteval, &(inteval->stack[((hsi*1890+80346)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*945+102207)*1+lsi)*1]), &(inteval->stack[((hsi*945+64218)*1+lsi)*1]),21);
HRRPart1bra0ket0gf100(inteval, &(inteval->stack[((hsi*3150+102207)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1890+80346)*1+lsi)*1]), &(inteval->stack[((hsi*1890+65163)*1+lsi)*1]),21);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+62895)*1+lsi)*1]), &(inteval->stack[((hsi*945+9135)*1+lsi)*1]), &(inteval->stack[((hsi*756+10080)*1+lsi)*1]), &(inteval->stack[((hsi*756+10836)*1+lsi)*1]),21);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*3528+7896)*1+lsi)*1]), &(inteval->stack[((hsi*2268+62895)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1764+67053)*1+lsi)*1]),21);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*4410+62895)*1+lsi)*1]), &(inteval->stack[((hsi*3528+7896)*1+lsi)*1]), &(inteval->stack[((hsi*2646+77700)*1+lsi)*1]), &(inteval->stack[((hsi*2646+68817)*1+lsi)*1]),21);
HRRPart1bra0ket0gg100(inteval, &(inteval->stack[((hsi*4725+48720)*1+lsi)*1]), &(inteval->stack[((hsi*4410+62895)*1+lsi)*1]), &(inteval->stack[((hsi*3150+102207)*1+lsi)*1]), &(inteval->stack[((hsi*3150+71463)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*588+1701)*1+lsi)*1]), &(inteval->stack[((hsi*441+2289)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]), &(inteval->stack[((hsi*588+1701)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+7896)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+77700)*1+lsi)*1]), &(inteval->stack[((hsi*441+2289)*1+lsi)*1]), &(inteval->stack[((hsi*315+2730)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+78645)*1+lsi)*1]), &(inteval->stack[((hsi*1323+74613)*1+lsi)*1]), &(inteval->stack[((hsi*945+77700)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+67305)*1+lsi)*1]), &(inteval->stack[((hsi*2646+7896)*1+lsi)*1]), &(inteval->stack[((hsi*1890+78645)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+77700)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+0)*1+lsi)*1]), &(inteval->stack[((hsi*2268+77700)*1+lsi)*1]), &(inteval->stack[((hsi*1764+75936)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+74613)*1+lsi)*1]), &(inteval->stack[((hsi*3528+0)*1+lsi)*1]), &(inteval->stack[((hsi*2646+7896)*1+lsi)*1]),21);
HRRPart1bra0ket0gg(inteval, &(inteval->stack[((hsi*4725+20370)*1+lsi)*1]), &(inteval->stack[((hsi*4410+74613)*1+lsi)*1]), &(inteval->stack[((hsi*3150+67305)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__G100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4725+34545)*1+lsi)*1]), &(inteval->stack[((hsi*4725+20370)*1+lsi)*1]), &(inteval->stack[((hsi*4725+48720)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4725+20370)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4725+25095)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4725+29820)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4725+34545)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4725+39270)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4725+43995)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4725+48720)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4725+53445)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4725+58170)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
