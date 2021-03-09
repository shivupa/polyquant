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
#include <CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,26040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_H__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+85575)*1+lsi)*1]), &(inteval->stack[((hsi*756+15456)*1+lsi)*1]), &(inteval->stack[((hsi*588+16800)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+87339)*1+lsi)*1]), &(inteval->stack[((hsi*588+16800)*1+lsi)*1]), &(inteval->stack[((hsi*441+17829)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+88662)*1+lsi)*1]), &(inteval->stack[((hsi*1764+85575)*1+lsi)*1]), &(inteval->stack[((hsi*1323+87339)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+91308)*1+lsi)*1]), &(inteval->stack[((hsi*945+13755)*1+lsi)*1]), &(inteval->stack[((hsi*756+15456)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+93576)*1+lsi)*1]), &(inteval->stack[((hsi*2268+91308)*1+lsi)*1]), &(inteval->stack[((hsi*1764+85575)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+97104)*1+lsi)*1]), &(inteval->stack[((hsi*3528+93576)*1+lsi)*1]), &(inteval->stack[((hsi*2646+88662)*1+lsi)*1]),21);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*756+24255)*1+lsi)*1]), &(inteval->stack[((hsi*588+25011)*1+lsi)*1]), &(inteval->stack[((hsi*588+16800)*1+lsi)*1]),21);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*945+23310)*1+lsi)*1]), &(inteval->stack[((hsi*756+24255)*1+lsi)*1]), &(inteval->stack[((hsi*756+15456)*1+lsi)*1]),21);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1764+85575)*1+lsi)*1]),21);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*1323+109074)*1+lsi)*1]), &(inteval->stack[((hsi*588+25011)*1+lsi)*1]), &(inteval->stack[((hsi*441+25599)*1+lsi)*1]), &(inteval->stack[((hsi*441+17829)*1+lsi)*1]),21);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*2646+110397)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1323+109074)*1+lsi)*1]), &(inteval->stack[((hsi*1323+87339)*1+lsi)*1]),21);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*4410+113043)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2646+110397)*1+lsi)*1]), &(inteval->stack[((hsi*2646+88662)*1+lsi)*1]),21);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*2835+109074)*1+lsi)*1]), &(inteval->stack[((hsi*1155+22155)*1+lsi)*1]), &(inteval->stack[((hsi*945+23310)*1+lsi)*1]), &(inteval->stack[((hsi*945+13755)*1+lsi)*1]),21);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*4536+117453)*1+lsi)*1]), &(inteval->stack[((hsi*2835+109074)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*2268+91308)*1+lsi)*1]),21);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*5880+121989)*1+lsi)*1]), &(inteval->stack[((hsi*4536+117453)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*3528+93576)*1+lsi)*1]),21);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*6615+78960)*1+lsi)*1]), &(inteval->stack[((hsi*5880+121989)*1+lsi)*1]), &(inteval->stack[((hsi*4410+113043)*1+lsi)*1]), &(inteval->stack[((hsi*4410+97104)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*756+9870)*1+lsi)*1]), &(inteval->stack[((hsi*588+10626)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*945+8925)*1+lsi)*1]), &(inteval->stack[((hsi*756+9870)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+117453)*1+lsi)*1]), &(inteval->stack[((hsi*588+10626)*1+lsi)*1]), &(inteval->stack[((hsi*441+11214)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+109074)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1323+117453)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+117453)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2646+109074)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+109074)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7770)*1+lsi)*1]), &(inteval->stack[((hsi*945+8925)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+127869)*1+lsi)*1]), &(inteval->stack[((hsi*2835+109074)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+132405)*1+lsi)*1]), &(inteval->stack[((hsi*4536+127869)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]),21);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*6615+39270)*1+lsi)*1]), &(inteval->stack[((hsi*5880+132405)*1+lsi)*1]), &(inteval->stack[((hsi*4410+117453)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*6615+59115)*1+lsi)*1]), &(inteval->stack[((hsi*6615+39270)*1+lsi)*1]), &(inteval->stack[((hsi*6615+78960)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*756+20370)*1+lsi)*1]), &(inteval->stack[((hsi*588+21126)*1+lsi)*1]), &(inteval->stack[((hsi*588+16800)*1+lsi)*1]),21);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*945+19425)*1+lsi)*1]), &(inteval->stack[((hsi*756+20370)*1+lsi)*1]), &(inteval->stack[((hsi*756+15456)*1+lsi)*1]),21);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1764+85575)*1+lsi)*1]),21);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*1323+127869)*1+lsi)*1]), &(inteval->stack[((hsi*588+21126)*1+lsi)*1]), &(inteval->stack[((hsi*441+21714)*1+lsi)*1]), &(inteval->stack[((hsi*441+17829)*1+lsi)*1]),21);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*2646+20370)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1323+127869)*1+lsi)*1]), &(inteval->stack[((hsi*1323+87339)*1+lsi)*1]),21);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*4410+127869)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2646+20370)*1+lsi)*1]), &(inteval->stack[((hsi*2646+88662)*1+lsi)*1]),21);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*2835+20370)*1+lsi)*1]), &(inteval->stack[((hsi*1155+18270)*1+lsi)*1]), &(inteval->stack[((hsi*945+19425)*1+lsi)*1]), &(inteval->stack[((hsi*945+13755)*1+lsi)*1]),21);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*4536+138285)*1+lsi)*1]), &(inteval->stack[((hsi*2835+20370)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*2268+91308)*1+lsi)*1]),21);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*5880+18270)*1+lsi)*1]), &(inteval->stack[((hsi*4536+138285)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*3528+93576)*1+lsi)*1]),21);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*6615+72345)*1+lsi)*1]), &(inteval->stack[((hsi*5880+18270)*1+lsi)*1]), &(inteval->stack[((hsi*4410+127869)*1+lsi)*1]), &(inteval->stack[((hsi*4410+97104)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*756+5985)*1+lsi)*1]), &(inteval->stack[((hsi*588+6741)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*945+5040)*1+lsi)*1]), &(inteval->stack[((hsi*756+5985)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+109074)*1+lsi)*1]), &(inteval->stack[((hsi*588+6741)*1+lsi)*1]), &(inteval->stack[((hsi*441+7329)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+110397)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1323+109074)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+5985)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2646+110397)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+109074)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3885)*1+lsi)*1]), &(inteval->stack[((hsi*945+5040)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+138285)*1+lsi)*1]), &(inteval->stack[((hsi*2835+109074)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+142821)*1+lsi)*1]), &(inteval->stack[((hsi*4536+138285)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]),21);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*6615+32655)*1+lsi)*1]), &(inteval->stack[((hsi*5880+142821)*1+lsi)*1]), &(inteval->stack[((hsi*4410+5985)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*6615+52500)*1+lsi)*1]), &(inteval->stack[((hsi*6615+32655)*1+lsi)*1]), &(inteval->stack[((hsi*6615+72345)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*756+14700)*1+lsi)*1]), &(inteval->stack[((hsi*588+16212)*1+lsi)*1]), &(inteval->stack[((hsi*588+16800)*1+lsi)*1]),21);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*945+12810)*1+lsi)*1]), &(inteval->stack[((hsi*756+14700)*1+lsi)*1]), &(inteval->stack[((hsi*756+15456)*1+lsi)*1]),21);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1764+85575)*1+lsi)*1]),21);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*1323+138285)*1+lsi)*1]), &(inteval->stack[((hsi*588+16212)*1+lsi)*1]), &(inteval->stack[((hsi*441+17388)*1+lsi)*1]), &(inteval->stack[((hsi*441+17829)*1+lsi)*1]),21);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*2646+109074)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1323+138285)*1+lsi)*1]), &(inteval->stack[((hsi*1323+87339)*1+lsi)*1]),21);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*4410+138285)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2646+109074)*1+lsi)*1]), &(inteval->stack[((hsi*2646+88662)*1+lsi)*1]),21);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*2835+85575)*1+lsi)*1]), &(inteval->stack[((hsi*1155+11655)*1+lsi)*1]), &(inteval->stack[((hsi*945+12810)*1+lsi)*1]), &(inteval->stack[((hsi*945+13755)*1+lsi)*1]),21);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*4536+10395)*1+lsi)*1]), &(inteval->stack[((hsi*2835+85575)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*2268+91308)*1+lsi)*1]),21);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*5880+85575)*1+lsi)*1]), &(inteval->stack[((hsi*4536+10395)*1+lsi)*1]), &(inteval->stack[((hsi*3528+105546)*1+lsi)*1]), &(inteval->stack[((hsi*3528+93576)*1+lsi)*1]),21);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*6615+65730)*1+lsi)*1]), &(inteval->stack[((hsi*5880+85575)*1+lsi)*1]), &(inteval->stack[((hsi*4410+138285)*1+lsi)*1]), &(inteval->stack[((hsi*4410+97104)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*756+2100)*1+lsi)*1]), &(inteval->stack[((hsi*588+2856)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*945+1155)*1+lsi)*1]), &(inteval->stack[((hsi*756+2100)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+10395)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+105546)*1+lsi)*1]), &(inteval->stack[((hsi*588+2856)*1+lsi)*1]), &(inteval->stack[((hsi*441+3444)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+106869)*1+lsi)*1]), &(inteval->stack[((hsi*1764+101514)*1+lsi)*1]), &(inteval->stack[((hsi*1323+105546)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+91455)*1+lsi)*1]), &(inteval->stack[((hsi*3528+10395)*1+lsi)*1]), &(inteval->stack[((hsi*2646+106869)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+105546)*1+lsi)*1]), &(inteval->stack[((hsi*1155+0)*1+lsi)*1]), &(inteval->stack[((hsi*945+1155)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+0)*1+lsi)*1]), &(inteval->stack[((hsi*2835+105546)*1+lsi)*1]), &(inteval->stack[((hsi*2268+103278)*1+lsi)*1]),21);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*5880+101514)*1+lsi)*1]), &(inteval->stack[((hsi*4536+0)*1+lsi)*1]), &(inteval->stack[((hsi*3528+10395)*1+lsi)*1]),21);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*6615+26040)*1+lsi)*1]), &(inteval->stack[((hsi*5880+101514)*1+lsi)*1]), &(inteval->stack[((hsi*4410+91455)*1+lsi)*1]),21);
CR_DerivGaussP1InBra_aB_H__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*6615+45885)*1+lsi)*1]), &(inteval->stack[((hsi*6615+26040)*1+lsi)*1]), &(inteval->stack[((hsi*6615+65730)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6615+26040)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*6615+32655)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*6615+39270)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*6615+45885)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*6615+52500)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*6615+59115)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*6615+65730)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*6615+72345)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*6615+78960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
