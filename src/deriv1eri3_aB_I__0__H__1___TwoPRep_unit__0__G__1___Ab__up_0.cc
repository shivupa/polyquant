/*
 *  Copyright (C) 2004-2021 Edward F. Valeev
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
#include <CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,34720)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_I__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+114100)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20608)*1+lsi)*1]), &(inteval->stack[((hsi*784+22400)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+116452)*1+lsi)*1]), &(inteval->stack[((hsi*784+22400)*1+lsi)*1]), &(inteval->stack[((hsi*588+23772)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+118216)*1+lsi)*1]), &(inteval->stack[((hsi*2352+114100)*1+lsi)*1]), &(inteval->stack[((hsi*1764+116452)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+121744)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18340)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20608)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+124768)*1+lsi)*1]), &(inteval->stack[((hsi*3024+121744)*1+lsi)*1]), &(inteval->stack[((hsi*2352+114100)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+129472)*1+lsi)*1]), &(inteval->stack[((hsi*4704+124768)*1+lsi)*1]), &(inteval->stack[((hsi*3528+118216)*1+lsi)*1]),28);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32340)*1+lsi)*1]), &(inteval->stack[((hsi*784+33348)*1+lsi)*1]), &(inteval->stack[((hsi*784+22400)*1+lsi)*1]),28);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*1260+31080)*1+lsi)*1]), &(inteval->stack[((hsi*1008+32340)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20608)*1+lsi)*1]),28);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*2352+114100)*1+lsi)*1]),28);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1764+145432)*1+lsi)*1]), &(inteval->stack[((hsi*784+33348)*1+lsi)*1]), &(inteval->stack[((hsi*588+34132)*1+lsi)*1]), &(inteval->stack[((hsi*588+23772)*1+lsi)*1]),28);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*3528+147196)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1764+145432)*1+lsi)*1]), &(inteval->stack[((hsi*1764+116452)*1+lsi)*1]),28);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*5880+150724)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3528+147196)*1+lsi)*1]), &(inteval->stack[((hsi*3528+118216)*1+lsi)*1]),28);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*3780+145432)*1+lsi)*1]), &(inteval->stack[((hsi*1540+29540)*1+lsi)*1]), &(inteval->stack[((hsi*1260+31080)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18340)*1+lsi)*1]),28);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*6048+156604)*1+lsi)*1]), &(inteval->stack[((hsi*3780+145432)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*3024+121744)*1+lsi)*1]),28);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*7840+162652)*1+lsi)*1]), &(inteval->stack[((hsi*6048+156604)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*4704+124768)*1+lsi)*1]),28);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*8820+105280)*1+lsi)*1]), &(inteval->stack[((hsi*7840+162652)*1+lsi)*1]), &(inteval->stack[((hsi*5880+150724)*1+lsi)*1]), &(inteval->stack[((hsi*5880+129472)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13160)*1+lsi)*1]), &(inteval->stack[((hsi*784+14168)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11900)*1+lsi)*1]), &(inteval->stack[((hsi*1008+13160)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+156604)*1+lsi)*1]), &(inteval->stack[((hsi*784+14168)*1+lsi)*1]), &(inteval->stack[((hsi*588+14952)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+145432)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1764+156604)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+156604)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3528+145432)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+145432)*1+lsi)*1]), &(inteval->stack[((hsi*1540+10360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11900)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+170492)*1+lsi)*1]), &(inteval->stack[((hsi*3780+145432)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+176540)*1+lsi)*1]), &(inteval->stack[((hsi*6048+170492)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+52360)*1+lsi)*1]), &(inteval->stack[((hsi*7840+176540)*1+lsi)*1]), &(inteval->stack[((hsi*5880+156604)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*8820+78820)*1+lsi)*1]), &(inteval->stack[((hsi*8820+52360)*1+lsi)*1]), &(inteval->stack[((hsi*8820+105280)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27160)*1+lsi)*1]), &(inteval->stack[((hsi*784+28168)*1+lsi)*1]), &(inteval->stack[((hsi*784+22400)*1+lsi)*1]),28);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25900)*1+lsi)*1]), &(inteval->stack[((hsi*1008+27160)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20608)*1+lsi)*1]),28);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*2352+114100)*1+lsi)*1]),28);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1764+170492)*1+lsi)*1]), &(inteval->stack[((hsi*784+28168)*1+lsi)*1]), &(inteval->stack[((hsi*588+28952)*1+lsi)*1]), &(inteval->stack[((hsi*588+23772)*1+lsi)*1]),28);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*3528+27160)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1764+170492)*1+lsi)*1]), &(inteval->stack[((hsi*1764+116452)*1+lsi)*1]),28);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*5880+170492)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3528+27160)*1+lsi)*1]), &(inteval->stack[((hsi*3528+118216)*1+lsi)*1]),28);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*3780+27160)*1+lsi)*1]), &(inteval->stack[((hsi*1540+24360)*1+lsi)*1]), &(inteval->stack[((hsi*1260+25900)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18340)*1+lsi)*1]),28);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*6048+184380)*1+lsi)*1]), &(inteval->stack[((hsi*3780+27160)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*3024+121744)*1+lsi)*1]),28);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*7840+24360)*1+lsi)*1]), &(inteval->stack[((hsi*6048+184380)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*4704+124768)*1+lsi)*1]),28);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*8820+96460)*1+lsi)*1]), &(inteval->stack[((hsi*7840+24360)*1+lsi)*1]), &(inteval->stack[((hsi*5880+170492)*1+lsi)*1]), &(inteval->stack[((hsi*5880+129472)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7980)*1+lsi)*1]), &(inteval->stack[((hsi*784+8988)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6720)*1+lsi)*1]), &(inteval->stack[((hsi*1008+7980)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+145432)*1+lsi)*1]), &(inteval->stack[((hsi*784+8988)*1+lsi)*1]), &(inteval->stack[((hsi*588+9772)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+147196)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1764+145432)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+7980)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3528+147196)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+145432)*1+lsi)*1]), &(inteval->stack[((hsi*1540+5180)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6720)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+184380)*1+lsi)*1]), &(inteval->stack[((hsi*3780+145432)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+190428)*1+lsi)*1]), &(inteval->stack[((hsi*6048+184380)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+43540)*1+lsi)*1]), &(inteval->stack[((hsi*7840+190428)*1+lsi)*1]), &(inteval->stack[((hsi*5880+7980)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*8820+70000)*1+lsi)*1]), &(inteval->stack[((hsi*8820+43540)*1+lsi)*1]), &(inteval->stack[((hsi*8820+96460)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19600)*1+lsi)*1]), &(inteval->stack[((hsi*784+21616)*1+lsi)*1]), &(inteval->stack[((hsi*784+22400)*1+lsi)*1]),28);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*1260+17080)*1+lsi)*1]), &(inteval->stack[((hsi*1008+19600)*1+lsi)*1]), &(inteval->stack[((hsi*1008+20608)*1+lsi)*1]),28);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*2352+114100)*1+lsi)*1]),28);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1764+184380)*1+lsi)*1]), &(inteval->stack[((hsi*784+21616)*1+lsi)*1]), &(inteval->stack[((hsi*588+23184)*1+lsi)*1]), &(inteval->stack[((hsi*588+23772)*1+lsi)*1]),28);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*3528+145432)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1764+184380)*1+lsi)*1]), &(inteval->stack[((hsi*1764+116452)*1+lsi)*1]),28);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*5880+184380)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3528+145432)*1+lsi)*1]), &(inteval->stack[((hsi*3528+118216)*1+lsi)*1]),28);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*3780+114100)*1+lsi)*1]), &(inteval->stack[((hsi*1540+15540)*1+lsi)*1]), &(inteval->stack[((hsi*1260+17080)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18340)*1+lsi)*1]),28);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*6048+13860)*1+lsi)*1]), &(inteval->stack[((hsi*3780+114100)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*3024+121744)*1+lsi)*1]),28);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*7840+114100)*1+lsi)*1]), &(inteval->stack[((hsi*6048+13860)*1+lsi)*1]), &(inteval->stack[((hsi*4704+140728)*1+lsi)*1]), &(inteval->stack[((hsi*4704+124768)*1+lsi)*1]),28);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*8820+87640)*1+lsi)*1]), &(inteval->stack[((hsi*7840+114100)*1+lsi)*1]), &(inteval->stack[((hsi*5880+184380)*1+lsi)*1]), &(inteval->stack[((hsi*5880+129472)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2800)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+13860)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+140728)*1+lsi)*1]), &(inteval->stack[((hsi*784+3808)*1+lsi)*1]), &(inteval->stack[((hsi*588+4592)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+142492)*1+lsi)*1]), &(inteval->stack[((hsi*2352+135352)*1+lsi)*1]), &(inteval->stack[((hsi*1764+140728)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+121940)*1+lsi)*1]), &(inteval->stack[((hsi*4704+13860)*1+lsi)*1]), &(inteval->stack[((hsi*3528+142492)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+140728)*1+lsi)*1]), &(inteval->stack[((hsi*1540+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1540)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+140728)*1+lsi)*1]), &(inteval->stack[((hsi*3024+137704)*1+lsi)*1]),28);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*7840+135352)*1+lsi)*1]), &(inteval->stack[((hsi*6048+0)*1+lsi)*1]), &(inteval->stack[((hsi*4704+13860)*1+lsi)*1]),28);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*8820+34720)*1+lsi)*1]), &(inteval->stack[((hsi*7840+135352)*1+lsi)*1]), &(inteval->stack[((hsi*5880+121940)*1+lsi)*1]),28);
CR_DerivGaussP1InBra_aB_I__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*8820+61180)*1+lsi)*1]), &(inteval->stack[((hsi*8820+34720)*1+lsi)*1]), &(inteval->stack[((hsi*8820+87640)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8820+34720)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*8820+43540)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*8820+52360)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*8820+61180)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*8820+70000)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*8820+78820)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*8820+87640)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*8820+96460)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*8820+105280)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
