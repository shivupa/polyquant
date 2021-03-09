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
#include <CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
#include <CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0.h>
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
#include <deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
deriv1eri3_aB_S__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4075)*1+lsi)*1]), &(inteval->stack[((hsi*36+736)*1+lsi)*1]), &(inteval->stack[((hsi*28+800)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+4159)*1+lsi)*1]), &(inteval->stack[((hsi*28+800)*1+lsi)*1]), &(inteval->stack[((hsi*21+849)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4222)*1+lsi)*1]), &(inteval->stack[((hsi*84+4075)*1+lsi)*1]), &(inteval->stack[((hsi*63+4159)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4348)*1+lsi)*1]), &(inteval->stack[((hsi*45+655)*1+lsi)*1]), &(inteval->stack[((hsi*36+736)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+4456)*1+lsi)*1]), &(inteval->stack[((hsi*108+4348)*1+lsi)*1]), &(inteval->stack[((hsi*84+4075)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4624)*1+lsi)*1]), &(inteval->stack[((hsi*168+4456)*1+lsi)*1]), &(inteval->stack[((hsi*126+4222)*1+lsi)*1]),1);
HRRPart1bra0ket0ip001(inteval, &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*36+1155)*1+lsi)*1]), &(inteval->stack[((hsi*28+1191)*1+lsi)*1]), &(inteval->stack[((hsi*28+800)*1+lsi)*1]),1);
HRRPart1bra0ket0kp001(inteval, &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*45+1110)*1+lsi)*1]), &(inteval->stack[((hsi*36+1155)*1+lsi)*1]), &(inteval->stack[((hsi*36+736)*1+lsi)*1]),1);
HRRPart1bra0ket0id001(inteval, &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*84+4075)*1+lsi)*1]),1);
HRRPart1bra0ket0hp001(inteval, &(inteval->stack[((hsi*63+5194)*1+lsi)*1]), &(inteval->stack[((hsi*28+1191)*1+lsi)*1]), &(inteval->stack[((hsi*21+1219)*1+lsi)*1]), &(inteval->stack[((hsi*21+849)*1+lsi)*1]),1);
HRRPart1bra0ket0hd001(inteval, &(inteval->stack[((hsi*126+5257)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*63+5194)*1+lsi)*1]), &(inteval->stack[((hsi*63+4159)*1+lsi)*1]),1);
HRRPart1bra0ket0hf001(inteval, &(inteval->stack[((hsi*210+5383)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*126+5257)*1+lsi)*1]), &(inteval->stack[((hsi*126+4222)*1+lsi)*1]),1);
HRRPart1bra0ket0lp001(inteval, &(inteval->stack[((hsi*135+5194)*1+lsi)*1]), &(inteval->stack[((hsi*55+1055)*1+lsi)*1]), &(inteval->stack[((hsi*45+1110)*1+lsi)*1]), &(inteval->stack[((hsi*45+655)*1+lsi)*1]),1);
HRRPart1bra0ket0kd001(inteval, &(inteval->stack[((hsi*216+5593)*1+lsi)*1]), &(inteval->stack[((hsi*135+5194)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*108+4348)*1+lsi)*1]),1);
HRRPart1bra0ket0if001(inteval, &(inteval->stack[((hsi*280+5809)*1+lsi)*1]), &(inteval->stack[((hsi*216+5593)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*168+4456)*1+lsi)*1]),1);
HRRPart1bra0ket0hg001(inteval, &(inteval->stack[((hsi*315+3760)*1+lsi)*1]), &(inteval->stack[((hsi*280+5809)*1+lsi)*1]), &(inteval->stack[((hsi*210+5383)*1+lsi)*1]), &(inteval->stack[((hsi*210+4624)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*36+470)*1+lsi)*1]), &(inteval->stack[((hsi*28+506)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*45+425)*1+lsi)*1]), &(inteval->stack[((hsi*36+470)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5593)*1+lsi)*1]), &(inteval->stack[((hsi*28+506)*1+lsi)*1]), &(inteval->stack[((hsi*21+534)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+5194)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*63+5593)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5593)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*126+5194)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5194)*1+lsi)*1]), &(inteval->stack[((hsi*55+370)*1+lsi)*1]), &(inteval->stack[((hsi*45+425)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6089)*1+lsi)*1]), &(inteval->stack[((hsi*135+5194)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]),1);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*280+6305)*1+lsi)*1]), &(inteval->stack[((hsi*216+6089)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]),1);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*315+1870)*1+lsi)*1]), &(inteval->stack[((hsi*280+6305)*1+lsi)*1]), &(inteval->stack[((hsi*210+5593)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H001__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+2815)*1+lsi)*1]), &(inteval->stack[((hsi*315+1870)*1+lsi)*1]), &(inteval->stack[((hsi*315+3760)*1+lsi)*1]));
HRRPart1bra0ket0ip010(inteval, &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*36+970)*1+lsi)*1]), &(inteval->stack[((hsi*28+1006)*1+lsi)*1]), &(inteval->stack[((hsi*28+800)*1+lsi)*1]),1);
HRRPart1bra0ket0kp010(inteval, &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*45+925)*1+lsi)*1]), &(inteval->stack[((hsi*36+970)*1+lsi)*1]), &(inteval->stack[((hsi*36+736)*1+lsi)*1]),1);
HRRPart1bra0ket0id010(inteval, &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*84+4075)*1+lsi)*1]),1);
HRRPart1bra0ket0hp010(inteval, &(inteval->stack[((hsi*63+6089)*1+lsi)*1]), &(inteval->stack[((hsi*28+1006)*1+lsi)*1]), &(inteval->stack[((hsi*21+1034)*1+lsi)*1]), &(inteval->stack[((hsi*21+849)*1+lsi)*1]),1);
HRRPart1bra0ket0hd010(inteval, &(inteval->stack[((hsi*126+970)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*63+6089)*1+lsi)*1]), &(inteval->stack[((hsi*63+4159)*1+lsi)*1]),1);
HRRPart1bra0ket0hf010(inteval, &(inteval->stack[((hsi*210+6089)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*126+970)*1+lsi)*1]), &(inteval->stack[((hsi*126+4222)*1+lsi)*1]),1);
HRRPart1bra0ket0lp010(inteval, &(inteval->stack[((hsi*135+970)*1+lsi)*1]), &(inteval->stack[((hsi*55+870)*1+lsi)*1]), &(inteval->stack[((hsi*45+925)*1+lsi)*1]), &(inteval->stack[((hsi*45+655)*1+lsi)*1]),1);
HRRPart1bra0ket0kd010(inteval, &(inteval->stack[((hsi*216+6585)*1+lsi)*1]), &(inteval->stack[((hsi*135+970)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*108+4348)*1+lsi)*1]),1);
HRRPart1bra0ket0if010(inteval, &(inteval->stack[((hsi*280+870)*1+lsi)*1]), &(inteval->stack[((hsi*216+6585)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*168+4456)*1+lsi)*1]),1);
HRRPart1bra0ket0hg010(inteval, &(inteval->stack[((hsi*315+3445)*1+lsi)*1]), &(inteval->stack[((hsi*280+870)*1+lsi)*1]), &(inteval->stack[((hsi*210+6089)*1+lsi)*1]), &(inteval->stack[((hsi*210+4624)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*36+285)*1+lsi)*1]), &(inteval->stack[((hsi*28+321)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*36+285)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5194)*1+lsi)*1]), &(inteval->stack[((hsi*28+321)*1+lsi)*1]), &(inteval->stack[((hsi*21+349)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+5257)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*63+5194)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+285)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*126+5257)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5194)*1+lsi)*1]), &(inteval->stack[((hsi*55+185)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6585)*1+lsi)*1]), &(inteval->stack[((hsi*135+5194)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]),1);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*280+6801)*1+lsi)*1]), &(inteval->stack[((hsi*216+6585)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]),1);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*315+1555)*1+lsi)*1]), &(inteval->stack[((hsi*280+6801)*1+lsi)*1]), &(inteval->stack[((hsi*210+285)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H010__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+2500)*1+lsi)*1]), &(inteval->stack[((hsi*315+1555)*1+lsi)*1]), &(inteval->stack[((hsi*315+3445)*1+lsi)*1]));
HRRPart1bra0ket0ip100(inteval, &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*36+700)*1+lsi)*1]), &(inteval->stack[((hsi*28+772)*1+lsi)*1]), &(inteval->stack[((hsi*28+800)*1+lsi)*1]),1);
HRRPart1bra0ket0kp100(inteval, &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*45+610)*1+lsi)*1]), &(inteval->stack[((hsi*36+700)*1+lsi)*1]), &(inteval->stack[((hsi*36+736)*1+lsi)*1]),1);
HRRPart1bra0ket0id100(inteval, &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*84+4075)*1+lsi)*1]),1);
HRRPart1bra0ket0hp100(inteval, &(inteval->stack[((hsi*63+6585)*1+lsi)*1]), &(inteval->stack[((hsi*28+772)*1+lsi)*1]), &(inteval->stack[((hsi*21+828)*1+lsi)*1]), &(inteval->stack[((hsi*21+849)*1+lsi)*1]),1);
HRRPart1bra0ket0hd100(inteval, &(inteval->stack[((hsi*126+5194)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*63+6585)*1+lsi)*1]), &(inteval->stack[((hsi*63+4159)*1+lsi)*1]),1);
HRRPart1bra0ket0hf100(inteval, &(inteval->stack[((hsi*210+6585)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*126+5194)*1+lsi)*1]), &(inteval->stack[((hsi*126+4222)*1+lsi)*1]),1);
HRRPart1bra0ket0lp100(inteval, &(inteval->stack[((hsi*135+4075)*1+lsi)*1]), &(inteval->stack[((hsi*55+555)*1+lsi)*1]), &(inteval->stack[((hsi*45+610)*1+lsi)*1]), &(inteval->stack[((hsi*45+655)*1+lsi)*1]),1);
HRRPart1bra0ket0kd100(inteval, &(inteval->stack[((hsi*216+495)*1+lsi)*1]), &(inteval->stack[((hsi*135+4075)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*108+4348)*1+lsi)*1]),1);
HRRPart1bra0ket0if100(inteval, &(inteval->stack[((hsi*280+4075)*1+lsi)*1]), &(inteval->stack[((hsi*216+495)*1+lsi)*1]), &(inteval->stack[((hsi*168+5026)*1+lsi)*1]), &(inteval->stack[((hsi*168+4456)*1+lsi)*1]),1);
HRRPart1bra0ket0hg100(inteval, &(inteval->stack[((hsi*315+3130)*1+lsi)*1]), &(inteval->stack[((hsi*280+4075)*1+lsi)*1]), &(inteval->stack[((hsi*210+6585)*1+lsi)*1]), &(inteval->stack[((hsi*210+4624)*1+lsi)*1]),1);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*168+495)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]),1);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*63+5026)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]),1);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*126+5089)*1+lsi)*1]), &(inteval->stack[((hsi*84+4834)*1+lsi)*1]), &(inteval->stack[((hsi*63+5026)*1+lsi)*1]),1);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4355)*1+lsi)*1]), &(inteval->stack[((hsi*168+495)*1+lsi)*1]), &(inteval->stack[((hsi*126+5089)*1+lsi)*1]),1);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5026)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*135+5026)*1+lsi)*1]), &(inteval->stack[((hsi*108+4918)*1+lsi)*1]),1);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*280+4834)*1+lsi)*1]), &(inteval->stack[((hsi*216+0)*1+lsi)*1]), &(inteval->stack[((hsi*168+495)*1+lsi)*1]),1);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*315+1240)*1+lsi)*1]), &(inteval->stack[((hsi*280+4834)*1+lsi)*1]), &(inteval->stack[((hsi*210+4355)*1+lsi)*1]),1);
CR_DerivGaussP1InBra_aB_S__0__H100__1___TwoPRep_unit__0__G__1___Ab__up_0(inteval, &(inteval->stack[((hsi*315+2185)*1+lsi)*1]), &(inteval->stack[((hsi*315+1240)*1+lsi)*1]), &(inteval->stack[((hsi*315+3130)*1+lsi)*1]));
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*315+1240)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*315+1555)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*315+1870)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*315+2185)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*315+2500)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*315+2815)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*315+3130)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*315+3445)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*315+3760)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
