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
#include <CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,18600)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_G__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+61125)*1+lsi)*1]), &(inteval->stack[((hsi*540+11040)*1+lsi)*1]), &(inteval->stack[((hsi*420+12000)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+62385)*1+lsi)*1]), &(inteval->stack[((hsi*420+12000)*1+lsi)*1]), &(inteval->stack[((hsi*315+12735)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+63330)*1+lsi)*1]), &(inteval->stack[((hsi*1260+61125)*1+lsi)*1]), &(inteval->stack[((hsi*945+62385)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+65220)*1+lsi)*1]), &(inteval->stack[((hsi*675+9825)*1+lsi)*1]), &(inteval->stack[((hsi*540+11040)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+66840)*1+lsi)*1]), &(inteval->stack[((hsi*1620+65220)*1+lsi)*1]), &(inteval->stack[((hsi*1260+61125)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+69360)*1+lsi)*1]), &(inteval->stack[((hsi*2520+66840)*1+lsi)*1]), &(inteval->stack[((hsi*1890+63330)*1+lsi)*1]),15);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*540+17325)*1+lsi)*1]), &(inteval->stack[((hsi*420+17865)*1+lsi)*1]), &(inteval->stack[((hsi*420+12000)*1+lsi)*1]),15);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*675+16650)*1+lsi)*1]), &(inteval->stack[((hsi*540+17325)*1+lsi)*1]), &(inteval->stack[((hsi*540+11040)*1+lsi)*1]),15);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*1260+61125)*1+lsi)*1]),15);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*945+77910)*1+lsi)*1]), &(inteval->stack[((hsi*420+17865)*1+lsi)*1]), &(inteval->stack[((hsi*315+18285)*1+lsi)*1]), &(inteval->stack[((hsi*315+12735)*1+lsi)*1]),15);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*1890+78855)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*945+77910)*1+lsi)*1]), &(inteval->stack[((hsi*945+62385)*1+lsi)*1]),15);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*3150+80745)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+78855)*1+lsi)*1]), &(inteval->stack[((hsi*1890+63330)*1+lsi)*1]),15);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*2025+77910)*1+lsi)*1]), &(inteval->stack[((hsi*825+15825)*1+lsi)*1]), &(inteval->stack[((hsi*675+16650)*1+lsi)*1]), &(inteval->stack[((hsi*675+9825)*1+lsi)*1]),15);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*3240+83895)*1+lsi)*1]), &(inteval->stack[((hsi*2025+77910)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1620+65220)*1+lsi)*1]),15);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*4200+87135)*1+lsi)*1]), &(inteval->stack[((hsi*3240+83895)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*2520+66840)*1+lsi)*1]),15);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*4725+56400)*1+lsi)*1]), &(inteval->stack[((hsi*4200+87135)*1+lsi)*1]), &(inteval->stack[((hsi*3150+80745)*1+lsi)*1]), &(inteval->stack[((hsi*3150+69360)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*540+7050)*1+lsi)*1]), &(inteval->stack[((hsi*420+7590)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*675+6375)*1+lsi)*1]), &(inteval->stack[((hsi*540+7050)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+83895)*1+lsi)*1]), &(inteval->stack[((hsi*420+7590)*1+lsi)*1]), &(inteval->stack[((hsi*315+8010)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+77910)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*945+83895)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+83895)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+77910)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+77910)*1+lsi)*1]), &(inteval->stack[((hsi*825+5550)*1+lsi)*1]), &(inteval->stack[((hsi*675+6375)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+91335)*1+lsi)*1]), &(inteval->stack[((hsi*2025+77910)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+94575)*1+lsi)*1]), &(inteval->stack[((hsi*3240+91335)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]),15);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*4725+28050)*1+lsi)*1]), &(inteval->stack[((hsi*4200+94575)*1+lsi)*1]), &(inteval->stack[((hsi*3150+83895)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4725+42225)*1+lsi)*1]), &(inteval->stack[((hsi*4725+28050)*1+lsi)*1]), &(inteval->stack[((hsi*4725+56400)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*540+14550)*1+lsi)*1]), &(inteval->stack[((hsi*420+15090)*1+lsi)*1]), &(inteval->stack[((hsi*420+12000)*1+lsi)*1]),15);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*675+13875)*1+lsi)*1]), &(inteval->stack[((hsi*540+14550)*1+lsi)*1]), &(inteval->stack[((hsi*540+11040)*1+lsi)*1]),15);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*1260+61125)*1+lsi)*1]),15);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*945+91335)*1+lsi)*1]), &(inteval->stack[((hsi*420+15090)*1+lsi)*1]), &(inteval->stack[((hsi*315+15510)*1+lsi)*1]), &(inteval->stack[((hsi*315+12735)*1+lsi)*1]),15);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*1890+14550)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*945+91335)*1+lsi)*1]), &(inteval->stack[((hsi*945+62385)*1+lsi)*1]),15);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*3150+91335)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+14550)*1+lsi)*1]), &(inteval->stack[((hsi*1890+63330)*1+lsi)*1]),15);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*2025+14550)*1+lsi)*1]), &(inteval->stack[((hsi*825+13050)*1+lsi)*1]), &(inteval->stack[((hsi*675+13875)*1+lsi)*1]), &(inteval->stack[((hsi*675+9825)*1+lsi)*1]),15);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*3240+98775)*1+lsi)*1]), &(inteval->stack[((hsi*2025+14550)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1620+65220)*1+lsi)*1]),15);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*4200+13050)*1+lsi)*1]), &(inteval->stack[((hsi*3240+98775)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*2520+66840)*1+lsi)*1]),15);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*4725+51675)*1+lsi)*1]), &(inteval->stack[((hsi*4200+13050)*1+lsi)*1]), &(inteval->stack[((hsi*3150+91335)*1+lsi)*1]), &(inteval->stack[((hsi*3150+69360)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*540+4275)*1+lsi)*1]), &(inteval->stack[((hsi*420+4815)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*675+3600)*1+lsi)*1]), &(inteval->stack[((hsi*540+4275)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+77910)*1+lsi)*1]), &(inteval->stack[((hsi*420+4815)*1+lsi)*1]), &(inteval->stack[((hsi*315+5235)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+78855)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*945+77910)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+4275)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+78855)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+77910)*1+lsi)*1]), &(inteval->stack[((hsi*825+2775)*1+lsi)*1]), &(inteval->stack[((hsi*675+3600)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+98775)*1+lsi)*1]), &(inteval->stack[((hsi*2025+77910)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+102015)*1+lsi)*1]), &(inteval->stack[((hsi*3240+98775)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]),15);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*4725+23325)*1+lsi)*1]), &(inteval->stack[((hsi*4200+102015)*1+lsi)*1]), &(inteval->stack[((hsi*3150+4275)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4725+37500)*1+lsi)*1]), &(inteval->stack[((hsi*4725+23325)*1+lsi)*1]), &(inteval->stack[((hsi*4725+51675)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*540+10500)*1+lsi)*1]), &(inteval->stack[((hsi*420+11580)*1+lsi)*1]), &(inteval->stack[((hsi*420+12000)*1+lsi)*1]),15);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*675+9150)*1+lsi)*1]), &(inteval->stack[((hsi*540+10500)*1+lsi)*1]), &(inteval->stack[((hsi*540+11040)*1+lsi)*1]),15);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*1260+61125)*1+lsi)*1]),15);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*945+98775)*1+lsi)*1]), &(inteval->stack[((hsi*420+11580)*1+lsi)*1]), &(inteval->stack[((hsi*315+12420)*1+lsi)*1]), &(inteval->stack[((hsi*315+12735)*1+lsi)*1]),15);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*1890+77910)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*945+98775)*1+lsi)*1]), &(inteval->stack[((hsi*945+62385)*1+lsi)*1]),15);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*3150+98775)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1890+77910)*1+lsi)*1]), &(inteval->stack[((hsi*1890+63330)*1+lsi)*1]),15);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*2025+61125)*1+lsi)*1]), &(inteval->stack[((hsi*825+8325)*1+lsi)*1]), &(inteval->stack[((hsi*675+9150)*1+lsi)*1]), &(inteval->stack[((hsi*675+9825)*1+lsi)*1]),15);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*3240+7425)*1+lsi)*1]), &(inteval->stack[((hsi*2025+61125)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1620+65220)*1+lsi)*1]),15);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*4200+61125)*1+lsi)*1]), &(inteval->stack[((hsi*3240+7425)*1+lsi)*1]), &(inteval->stack[((hsi*2520+75390)*1+lsi)*1]), &(inteval->stack[((hsi*2520+66840)*1+lsi)*1]),15);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*4725+46950)*1+lsi)*1]), &(inteval->stack[((hsi*4200+61125)*1+lsi)*1]), &(inteval->stack[((hsi*3150+98775)*1+lsi)*1]), &(inteval->stack[((hsi*3150+69360)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]), &(inteval->stack[((hsi*420+2040)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]), &(inteval->stack[((hsi*540+1500)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+7425)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+75390)*1+lsi)*1]), &(inteval->stack[((hsi*420+2040)*1+lsi)*1]), &(inteval->stack[((hsi*315+2460)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+76335)*1+lsi)*1]), &(inteval->stack[((hsi*1260+72510)*1+lsi)*1]), &(inteval->stack[((hsi*945+75390)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+65325)*1+lsi)*1]), &(inteval->stack[((hsi*2520+7425)*1+lsi)*1]), &(inteval->stack[((hsi*1890+76335)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+75390)*1+lsi)*1]), &(inteval->stack[((hsi*825+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+825)*1+lsi)*1]),15);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*3240+0)*1+lsi)*1]), &(inteval->stack[((hsi*2025+75390)*1+lsi)*1]), &(inteval->stack[((hsi*1620+73770)*1+lsi)*1]),15);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*4200+72510)*1+lsi)*1]), &(inteval->stack[((hsi*3240+0)*1+lsi)*1]), &(inteval->stack[((hsi*2520+7425)*1+lsi)*1]),15);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*4725+18600)*1+lsi)*1]), &(inteval->stack[((hsi*4200+72510)*1+lsi)*1]), &(inteval->stack[((hsi*3150+65325)*1+lsi)*1]),15);
CR_DerivGaussP1InBra_aB_G__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*4725+32775)*1+lsi)*1]), &(inteval->stack[((hsi*4725+18600)*1+lsi)*1]), &(inteval->stack[((hsi*4725+46950)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*4725+18600)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*4725+23325)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*4725+28050)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*4725+32775)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*4725+37500)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*4725+42225)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*4725+46950)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*4725+51675)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*4725+56400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
