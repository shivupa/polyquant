/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <_sphemultipole_I_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_I_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5750)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+5641)*1+lsi)*1]), &(inteval->stack[((hsi*36+5686)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+5586)*1+lsi)*1]), &(inteval->stack[((hsi*45+5641)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+16709)*1+lsi)*1]), &(inteval->stack[((hsi*36+5686)*1+lsi)*1]), &(inteval->stack[((hsi*28+5722)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16793)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+16709)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+16961)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+16793)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+16709)*1+lsi)*1]), &(inteval->stack[((hsi*66+5520)*1+lsi)*1]), &(inteval->stack[((hsi*55+5586)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+16709)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+17511)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+15830)*1+lsi)*1]), &(inteval->stack[((hsi*360+17511)*1+lsi)*1]), &(inteval->stack[((hsi*280+16961)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+5411)*1+lsi)*1]), &(inteval->stack[((hsi*36+5456)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+5356)*1+lsi)*1]), &(inteval->stack[((hsi*45+5411)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+5456)*1+lsi)*1]), &(inteval->stack[((hsi*28+5492)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+5411)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+17871)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+5411)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+5411)*1+lsi)*1]), &(inteval->stack[((hsi*66+5290)*1+lsi)*1]), &(inteval->stack[((hsi*55+5356)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+5411)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+5290)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+15410)*1+lsi)*1]), &(inteval->stack[((hsi*360+5290)*1+lsi)*1]), &(inteval->stack[((hsi*280+17871)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+5181)*1+lsi)*1]), &(inteval->stack[((hsi*36+5226)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+5126)*1+lsi)*1]), &(inteval->stack[((hsi*45+5181)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+5226)*1+lsi)*1]), &(inteval->stack[((hsi*28+5262)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16709)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+18151)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+16709)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+5060)*1+lsi)*1]), &(inteval->stack[((hsi*55+5126)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+18701)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+14990)*1+lsi)*1]), &(inteval->stack[((hsi*360+18701)*1+lsi)*1]), &(inteval->stack[((hsi*280+18151)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+4951)*1+lsi)*1]), &(inteval->stack[((hsi*36+4996)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+4896)*1+lsi)*1]), &(inteval->stack[((hsi*45+4951)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+4996)*1+lsi)*1]), &(inteval->stack[((hsi*28+5032)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4951)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+19061)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+4951)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4951)*1+lsi)*1]), &(inteval->stack[((hsi*66+4830)*1+lsi)*1]), &(inteval->stack[((hsi*55+4896)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+4951)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+4830)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+14570)*1+lsi)*1]), &(inteval->stack[((hsi*360+4830)*1+lsi)*1]), &(inteval->stack[((hsi*280+19061)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+4721)*1+lsi)*1]), &(inteval->stack[((hsi*36+4766)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+4666)*1+lsi)*1]), &(inteval->stack[((hsi*45+4721)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+4766)*1+lsi)*1]), &(inteval->stack[((hsi*28+4802)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+19341)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+4600)*1+lsi)*1]), &(inteval->stack[((hsi*55+4666)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+19621)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+14150)*1+lsi)*1]), &(inteval->stack[((hsi*360+19621)*1+lsi)*1]), &(inteval->stack[((hsi*280+19341)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+4491)*1+lsi)*1]), &(inteval->stack[((hsi*36+4536)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+4436)*1+lsi)*1]), &(inteval->stack[((hsi*45+4491)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+4536)*1+lsi)*1]), &(inteval->stack[((hsi*28+4572)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4491)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+19981)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+4491)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4491)*1+lsi)*1]), &(inteval->stack[((hsi*66+4370)*1+lsi)*1]), &(inteval->stack[((hsi*55+4436)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+4491)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+4370)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+13730)*1+lsi)*1]), &(inteval->stack[((hsi*360+4370)*1+lsi)*1]), &(inteval->stack[((hsi*280+19981)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+4261)*1+lsi)*1]), &(inteval->stack[((hsi*36+4306)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+4206)*1+lsi)*1]), &(inteval->stack[((hsi*45+4261)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+4306)*1+lsi)*1]), &(inteval->stack[((hsi*28+4342)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+20261)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+4140)*1+lsi)*1]), &(inteval->stack[((hsi*55+4206)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+20541)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+13310)*1+lsi)*1]), &(inteval->stack[((hsi*360+20541)*1+lsi)*1]), &(inteval->stack[((hsi*280+20261)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+4031)*1+lsi)*1]), &(inteval->stack[((hsi*36+4076)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+3976)*1+lsi)*1]), &(inteval->stack[((hsi*45+4031)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+4076)*1+lsi)*1]), &(inteval->stack[((hsi*28+4112)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+4031)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+20901)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+4031)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4031)*1+lsi)*1]), &(inteval->stack[((hsi*66+3910)*1+lsi)*1]), &(inteval->stack[((hsi*55+3976)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+4031)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+3910)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+12890)*1+lsi)*1]), &(inteval->stack[((hsi*360+3910)*1+lsi)*1]), &(inteval->stack[((hsi*280+20901)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+3801)*1+lsi)*1]), &(inteval->stack[((hsi*36+3846)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+3746)*1+lsi)*1]), &(inteval->stack[((hsi*45+3801)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+3846)*1+lsi)*1]), &(inteval->stack[((hsi*28+3882)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+21181)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+3680)*1+lsi)*1]), &(inteval->stack[((hsi*55+3746)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+21461)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+12470)*1+lsi)*1]), &(inteval->stack[((hsi*360+21461)*1+lsi)*1]), &(inteval->stack[((hsi*280+21181)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+3571)*1+lsi)*1]), &(inteval->stack[((hsi*36+3616)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+3516)*1+lsi)*1]), &(inteval->stack[((hsi*45+3571)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+3616)*1+lsi)*1]), &(inteval->stack[((hsi*28+3652)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3571)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+21821)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+3571)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3571)*1+lsi)*1]), &(inteval->stack[((hsi*66+3450)*1+lsi)*1]), &(inteval->stack[((hsi*55+3516)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+3571)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+3450)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+12050)*1+lsi)*1]), &(inteval->stack[((hsi*360+3450)*1+lsi)*1]), &(inteval->stack[((hsi*280+21821)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+3341)*1+lsi)*1]), &(inteval->stack[((hsi*36+3386)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+3286)*1+lsi)*1]), &(inteval->stack[((hsi*45+3341)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+3386)*1+lsi)*1]), &(inteval->stack[((hsi*28+3422)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+22101)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+3220)*1+lsi)*1]), &(inteval->stack[((hsi*55+3286)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+22381)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+11630)*1+lsi)*1]), &(inteval->stack[((hsi*360+22381)*1+lsi)*1]), &(inteval->stack[((hsi*280+22101)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+3111)*1+lsi)*1]), &(inteval->stack[((hsi*36+3156)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+3056)*1+lsi)*1]), &(inteval->stack[((hsi*45+3111)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+3156)*1+lsi)*1]), &(inteval->stack[((hsi*28+3192)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3111)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+22741)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+3111)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3111)*1+lsi)*1]), &(inteval->stack[((hsi*66+2990)*1+lsi)*1]), &(inteval->stack[((hsi*55+3056)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+3111)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+2990)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+11210)*1+lsi)*1]), &(inteval->stack[((hsi*360+2990)*1+lsi)*1]), &(inteval->stack[((hsi*280+22741)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2881)*1+lsi)*1]), &(inteval->stack[((hsi*36+2926)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+2826)*1+lsi)*1]), &(inteval->stack[((hsi*45+2881)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+2926)*1+lsi)*1]), &(inteval->stack[((hsi*28+2962)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+23021)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+2760)*1+lsi)*1]), &(inteval->stack[((hsi*55+2826)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+23301)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10790)*1+lsi)*1]), &(inteval->stack[((hsi*360+23301)*1+lsi)*1]), &(inteval->stack[((hsi*280+23021)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2651)*1+lsi)*1]), &(inteval->stack[((hsi*36+2696)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+2596)*1+lsi)*1]), &(inteval->stack[((hsi*45+2651)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+2696)*1+lsi)*1]), &(inteval->stack[((hsi*28+2732)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+2651)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+23661)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+2651)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2651)*1+lsi)*1]), &(inteval->stack[((hsi*66+2530)*1+lsi)*1]), &(inteval->stack[((hsi*55+2596)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+2651)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+2530)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+10370)*1+lsi)*1]), &(inteval->stack[((hsi*360+2530)*1+lsi)*1]), &(inteval->stack[((hsi*280+23661)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2421)*1+lsi)*1]), &(inteval->stack[((hsi*36+2466)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+2366)*1+lsi)*1]), &(inteval->stack[((hsi*45+2421)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+2466)*1+lsi)*1]), &(inteval->stack[((hsi*28+2502)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+23941)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+2300)*1+lsi)*1]), &(inteval->stack[((hsi*55+2366)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+24221)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+9950)*1+lsi)*1]), &(inteval->stack[((hsi*360+24221)*1+lsi)*1]), &(inteval->stack[((hsi*280+23941)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2191)*1+lsi)*1]), &(inteval->stack[((hsi*36+2236)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+2136)*1+lsi)*1]), &(inteval->stack[((hsi*45+2191)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+2236)*1+lsi)*1]), &(inteval->stack[((hsi*28+2272)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+2191)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+24581)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+2191)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2191)*1+lsi)*1]), &(inteval->stack[((hsi*66+2070)*1+lsi)*1]), &(inteval->stack[((hsi*55+2136)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+2191)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+2070)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+9530)*1+lsi)*1]), &(inteval->stack[((hsi*360+2070)*1+lsi)*1]), &(inteval->stack[((hsi*280+24581)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+1961)*1+lsi)*1]), &(inteval->stack[((hsi*36+2006)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+1906)*1+lsi)*1]), &(inteval->stack[((hsi*45+1961)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+2006)*1+lsi)*1]), &(inteval->stack[((hsi*28+2042)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+24861)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+1840)*1+lsi)*1]), &(inteval->stack[((hsi*55+1906)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+25141)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+9110)*1+lsi)*1]), &(inteval->stack[((hsi*360+25141)*1+lsi)*1]), &(inteval->stack[((hsi*280+24861)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+1731)*1+lsi)*1]), &(inteval->stack[((hsi*36+1776)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+1676)*1+lsi)*1]), &(inteval->stack[((hsi*45+1731)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+1776)*1+lsi)*1]), &(inteval->stack[((hsi*28+1812)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1731)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+25501)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+1731)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1731)*1+lsi)*1]), &(inteval->stack[((hsi*66+1610)*1+lsi)*1]), &(inteval->stack[((hsi*55+1676)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+1731)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+1610)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+8690)*1+lsi)*1]), &(inteval->stack[((hsi*360+1610)*1+lsi)*1]), &(inteval->stack[((hsi*280+25501)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+1501)*1+lsi)*1]), &(inteval->stack[((hsi*36+1546)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+1446)*1+lsi)*1]), &(inteval->stack[((hsi*45+1501)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+1546)*1+lsi)*1]), &(inteval->stack[((hsi*28+1582)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+25781)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+1380)*1+lsi)*1]), &(inteval->stack[((hsi*55+1446)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+26061)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+8270)*1+lsi)*1]), &(inteval->stack[((hsi*360+26061)*1+lsi)*1]), &(inteval->stack[((hsi*280+25781)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+1271)*1+lsi)*1]), &(inteval->stack[((hsi*36+1316)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+1216)*1+lsi)*1]), &(inteval->stack[((hsi*45+1271)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+1316)*1+lsi)*1]), &(inteval->stack[((hsi*28+1352)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1271)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+26421)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+1271)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1271)*1+lsi)*1]), &(inteval->stack[((hsi*66+1150)*1+lsi)*1]), &(inteval->stack[((hsi*55+1216)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+1271)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+1150)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+7850)*1+lsi)*1]), &(inteval->stack[((hsi*360+1150)*1+lsi)*1]), &(inteval->stack[((hsi*280+26421)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+1041)*1+lsi)*1]), &(inteval->stack[((hsi*36+1086)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+986)*1+lsi)*1]), &(inteval->stack[((hsi*45+1041)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+1086)*1+lsi)*1]), &(inteval->stack[((hsi*28+1122)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+26701)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+920)*1+lsi)*1]), &(inteval->stack[((hsi*55+986)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+26981)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+7430)*1+lsi)*1]), &(inteval->stack[((hsi*360+26981)*1+lsi)*1]), &(inteval->stack[((hsi*280+26701)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+811)*1+lsi)*1]), &(inteval->stack[((hsi*36+856)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+756)*1+lsi)*1]), &(inteval->stack[((hsi*45+811)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+856)*1+lsi)*1]), &(inteval->stack[((hsi*28+892)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+811)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+27341)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+811)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+811)*1+lsi)*1]), &(inteval->stack[((hsi*66+690)*1+lsi)*1]), &(inteval->stack[((hsi*55+756)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+811)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+690)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+7010)*1+lsi)*1]), &(inteval->stack[((hsi*360+690)*1+lsi)*1]), &(inteval->stack[((hsi*280+27341)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+581)*1+lsi)*1]), &(inteval->stack[((hsi*36+626)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+526)*1+lsi)*1]), &(inteval->stack[((hsi*45+581)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+626)*1+lsi)*1]), &(inteval->stack[((hsi*28+662)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+27621)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+460)*1+lsi)*1]), &(inteval->stack[((hsi*55+526)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+27901)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+6590)*1+lsi)*1]), &(inteval->stack[((hsi*360+27901)*1+lsi)*1]), &(inteval->stack[((hsi*280+27621)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+351)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+296)*1+lsi)*1]), &(inteval->stack[((hsi*45+351)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+18431)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]), &(inteval->stack[((hsi*28+432)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+351)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+28261)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+351)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+351)*1+lsi)*1]), &(inteval->stack[((hsi*66+230)*1+lsi)*1]), &(inteval->stack[((hsi*55+296)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*165+351)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+230)*1+lsi)*1]), &(inteval->stack[((hsi*270+17241)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+6170)*1+lsi)*1]), &(inteval->stack[((hsi*360+230)*1+lsi)*1]), &(inteval->stack[((hsi*280+28261)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+17241)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]), &(inteval->stack[((hsi*28+202)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+18431)*1+lsi)*1]), &(inteval->stack[((hsi*108+16250)*1+lsi)*1]), &(inteval->stack[((hsi*84+17241)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+28541)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]), &(inteval->stack[((hsi*168+18431)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*165+17241)*1+lsi)*1]), &(inteval->stack[((hsi*135+16358)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+28821)*1+lsi)*1]), &(inteval->stack[((hsi*270+18431)*1+lsi)*1]), &(inteval->stack[((hsi*216+16493)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+5750)*1+lsi)*1]), &(inteval->stack[((hsi*360+28821)*1+lsi)*1]), &(inteval->stack[((hsi*280+28541)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*420+5750)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*420+6170)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*420+6590)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*420+7010)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*420+7430)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*420+7850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*420+8270)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*420+8690)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*420+9110)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*420+9530)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*420+9950)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*420+10370)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*420+10790)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*420+11210)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*420+11630)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*420+12050)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*420+12470)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*420+12890)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*420+13310)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*420+13730)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*420+14150)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*420+14570)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*420+14990)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*420+15410)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*420+15830)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
