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
#include <CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3720)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_P__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+12225)*1+lsi)*1]), &(inteval->stack[((hsi*108+2208)*1+lsi)*1]), &(inteval->stack[((hsi*84+2400)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+12477)*1+lsi)*1]), &(inteval->stack[((hsi*84+2400)*1+lsi)*1]), &(inteval->stack[((hsi*63+2547)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+12666)*1+lsi)*1]), &(inteval->stack[((hsi*252+12225)*1+lsi)*1]), &(inteval->stack[((hsi*189+12477)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+13044)*1+lsi)*1]), &(inteval->stack[((hsi*135+1965)*1+lsi)*1]), &(inteval->stack[((hsi*108+2208)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+13368)*1+lsi)*1]), &(inteval->stack[((hsi*324+13044)*1+lsi)*1]), &(inteval->stack[((hsi*252+12225)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+13872)*1+lsi)*1]), &(inteval->stack[((hsi*504+13368)*1+lsi)*1]), &(inteval->stack[((hsi*378+12666)*1+lsi)*1]),3);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*108+3465)*1+lsi)*1]), &(inteval->stack[((hsi*84+3573)*1+lsi)*1]), &(inteval->stack[((hsi*84+2400)*1+lsi)*1]),3);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*135+3330)*1+lsi)*1]), &(inteval->stack[((hsi*108+3465)*1+lsi)*1]), &(inteval->stack[((hsi*108+2208)*1+lsi)*1]),3);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*252+12225)*1+lsi)*1]),3);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*189+15582)*1+lsi)*1]), &(inteval->stack[((hsi*84+3573)*1+lsi)*1]), &(inteval->stack[((hsi*63+3657)*1+lsi)*1]), &(inteval->stack[((hsi*63+2547)*1+lsi)*1]),3);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*378+15771)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*189+15582)*1+lsi)*1]), &(inteval->stack[((hsi*189+12477)*1+lsi)*1]),3);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*630+16149)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*378+15771)*1+lsi)*1]), &(inteval->stack[((hsi*378+12666)*1+lsi)*1]),3);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*405+15582)*1+lsi)*1]), &(inteval->stack[((hsi*165+3165)*1+lsi)*1]), &(inteval->stack[((hsi*135+3330)*1+lsi)*1]), &(inteval->stack[((hsi*135+1965)*1+lsi)*1]),3);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*648+16779)*1+lsi)*1]), &(inteval->stack[((hsi*405+15582)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*324+13044)*1+lsi)*1]),3);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*840+17427)*1+lsi)*1]), &(inteval->stack[((hsi*648+16779)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*504+13368)*1+lsi)*1]),3);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*945+11280)*1+lsi)*1]), &(inteval->stack[((hsi*840+17427)*1+lsi)*1]), &(inteval->stack[((hsi*630+16149)*1+lsi)*1]), &(inteval->stack[((hsi*630+13872)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*108+1410)*1+lsi)*1]), &(inteval->stack[((hsi*84+1518)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*135+1275)*1+lsi)*1]), &(inteval->stack[((hsi*108+1410)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+16779)*1+lsi)*1]), &(inteval->stack[((hsi*84+1518)*1+lsi)*1]), &(inteval->stack[((hsi*63+1602)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+15582)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*189+16779)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+16779)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*378+15582)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+15582)*1+lsi)*1]), &(inteval->stack[((hsi*165+1110)*1+lsi)*1]), &(inteval->stack[((hsi*135+1275)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+18267)*1+lsi)*1]), &(inteval->stack[((hsi*405+15582)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+18915)*1+lsi)*1]), &(inteval->stack[((hsi*648+18267)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]),3);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*945+5610)*1+lsi)*1]), &(inteval->stack[((hsi*840+18915)*1+lsi)*1]), &(inteval->stack[((hsi*630+16779)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+8445)*1+lsi)*1]), &(inteval->stack[((hsi*945+5610)*1+lsi)*1]), &(inteval->stack[((hsi*945+11280)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*108+2910)*1+lsi)*1]), &(inteval->stack[((hsi*84+3018)*1+lsi)*1]), &(inteval->stack[((hsi*84+2400)*1+lsi)*1]),3);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*135+2775)*1+lsi)*1]), &(inteval->stack[((hsi*108+2910)*1+lsi)*1]), &(inteval->stack[((hsi*108+2208)*1+lsi)*1]),3);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*252+12225)*1+lsi)*1]),3);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*189+18267)*1+lsi)*1]), &(inteval->stack[((hsi*84+3018)*1+lsi)*1]), &(inteval->stack[((hsi*63+3102)*1+lsi)*1]), &(inteval->stack[((hsi*63+2547)*1+lsi)*1]),3);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*378+2910)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*189+18267)*1+lsi)*1]), &(inteval->stack[((hsi*189+12477)*1+lsi)*1]),3);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*630+18267)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*378+2910)*1+lsi)*1]), &(inteval->stack[((hsi*378+12666)*1+lsi)*1]),3);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*405+2910)*1+lsi)*1]), &(inteval->stack[((hsi*165+2610)*1+lsi)*1]), &(inteval->stack[((hsi*135+2775)*1+lsi)*1]), &(inteval->stack[((hsi*135+1965)*1+lsi)*1]),3);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*648+19755)*1+lsi)*1]), &(inteval->stack[((hsi*405+2910)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*324+13044)*1+lsi)*1]),3);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*840+2610)*1+lsi)*1]), &(inteval->stack[((hsi*648+19755)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*504+13368)*1+lsi)*1]),3);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*945+10335)*1+lsi)*1]), &(inteval->stack[((hsi*840+2610)*1+lsi)*1]), &(inteval->stack[((hsi*630+18267)*1+lsi)*1]), &(inteval->stack[((hsi*630+13872)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*108+855)*1+lsi)*1]), &(inteval->stack[((hsi*84+963)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*135+720)*1+lsi)*1]), &(inteval->stack[((hsi*108+855)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+15582)*1+lsi)*1]), &(inteval->stack[((hsi*84+963)*1+lsi)*1]), &(inteval->stack[((hsi*63+1047)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+15771)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*189+15582)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+855)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*378+15771)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+15582)*1+lsi)*1]), &(inteval->stack[((hsi*165+555)*1+lsi)*1]), &(inteval->stack[((hsi*135+720)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+19755)*1+lsi)*1]), &(inteval->stack[((hsi*405+15582)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+20403)*1+lsi)*1]), &(inteval->stack[((hsi*648+19755)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]),3);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*945+4665)*1+lsi)*1]), &(inteval->stack[((hsi*840+20403)*1+lsi)*1]), &(inteval->stack[((hsi*630+855)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+7500)*1+lsi)*1]), &(inteval->stack[((hsi*945+4665)*1+lsi)*1]), &(inteval->stack[((hsi*945+10335)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*108+2100)*1+lsi)*1]), &(inteval->stack[((hsi*84+2316)*1+lsi)*1]), &(inteval->stack[((hsi*84+2400)*1+lsi)*1]),3);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*135+1830)*1+lsi)*1]), &(inteval->stack[((hsi*108+2100)*1+lsi)*1]), &(inteval->stack[((hsi*108+2208)*1+lsi)*1]),3);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*252+12225)*1+lsi)*1]),3);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*189+19755)*1+lsi)*1]), &(inteval->stack[((hsi*84+2316)*1+lsi)*1]), &(inteval->stack[((hsi*63+2484)*1+lsi)*1]), &(inteval->stack[((hsi*63+2547)*1+lsi)*1]),3);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*378+15582)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*189+19755)*1+lsi)*1]), &(inteval->stack[((hsi*189+12477)*1+lsi)*1]),3);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*630+19755)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*378+15582)*1+lsi)*1]), &(inteval->stack[((hsi*378+12666)*1+lsi)*1]),3);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*405+12225)*1+lsi)*1]), &(inteval->stack[((hsi*165+1665)*1+lsi)*1]), &(inteval->stack[((hsi*135+1830)*1+lsi)*1]), &(inteval->stack[((hsi*135+1965)*1+lsi)*1]),3);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*648+1485)*1+lsi)*1]), &(inteval->stack[((hsi*405+12225)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*324+13044)*1+lsi)*1]),3);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*840+12225)*1+lsi)*1]), &(inteval->stack[((hsi*648+1485)*1+lsi)*1]), &(inteval->stack[((hsi*504+15078)*1+lsi)*1]), &(inteval->stack[((hsi*504+13368)*1+lsi)*1]),3);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*945+9390)*1+lsi)*1]), &(inteval->stack[((hsi*840+12225)*1+lsi)*1]), &(inteval->stack[((hsi*630+19755)*1+lsi)*1]), &(inteval->stack[((hsi*630+13872)*1+lsi)*1]),3);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]), &(inteval->stack[((hsi*84+408)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]), &(inteval->stack[((hsi*108+300)*1+lsi)*1]),3);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*504+1485)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]),3);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*189+15078)*1+lsi)*1]), &(inteval->stack[((hsi*84+408)*1+lsi)*1]), &(inteval->stack[((hsi*63+492)*1+lsi)*1]),3);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*378+15267)*1+lsi)*1]), &(inteval->stack[((hsi*252+14502)*1+lsi)*1]), &(inteval->stack[((hsi*189+15078)*1+lsi)*1]),3);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*630+13065)*1+lsi)*1]), &(inteval->stack[((hsi*504+1485)*1+lsi)*1]), &(inteval->stack[((hsi*378+15267)*1+lsi)*1]),3);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+15078)*1+lsi)*1]), &(inteval->stack[((hsi*165+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+165)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+0)*1+lsi)*1]), &(inteval->stack[((hsi*405+15078)*1+lsi)*1]), &(inteval->stack[((hsi*324+14754)*1+lsi)*1]),3);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*840+14502)*1+lsi)*1]), &(inteval->stack[((hsi*648+0)*1+lsi)*1]), &(inteval->stack[((hsi*504+1485)*1+lsi)*1]),3);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*945+3720)*1+lsi)*1]), &(inteval->stack[((hsi*840+14502)*1+lsi)*1]), &(inteval->stack[((hsi*630+13065)*1+lsi)*1]),3);
CR_DerivGaussP1InBra_aB_P__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*945+6555)*1+lsi)*1]), &(inteval->stack[((hsi*945+3720)*1+lsi)*1]), &(inteval->stack[((hsi*945+9390)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*945+3720)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*945+4665)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*945+5610)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*945+6555)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*945+7500)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*945+8445)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*945+9390)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*945+10335)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*945+11280)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
