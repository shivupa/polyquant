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
#include <HRRPart0ket0bra0hd.h>
#include <HRRPart0ket0bra0hf.h>
#include <HRRPart0ket0bra0hg.h>
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0if.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <_sphemultipole_G_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_G_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4589)*1+lsi)*1]), &(inteval->stack[((hsi*28+1197)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4544)*1+lsi)*1]), &(inteval->stack[((hsi*36+4589)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1197)*1+lsi)*1]), &(inteval->stack[((hsi*21+504)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13049)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4489)*1+lsi)*1]), &(inteval->stack[((hsi*45+4544)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+12185)*1+lsi)*1]), &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*210+13049)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4453)*1+lsi)*1]), &(inteval->stack[((hsi*28+1169)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4408)*1+lsi)*1]), &(inteval->stack[((hsi*36+4453)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+13259)*1+lsi)*1]), &(inteval->stack[((hsi*28+1169)*1+lsi)*1]), &(inteval->stack[((hsi*21+483)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12860)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+13259)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4353)*1+lsi)*1]), &(inteval->stack[((hsi*45+4408)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4353)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+13755)*1+lsi)*1]), &(inteval->stack[((hsi*216+4353)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11870)*1+lsi)*1]), &(inteval->stack[((hsi*280+13755)*1+lsi)*1]), &(inteval->stack[((hsi*210+13259)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4317)*1+lsi)*1]), &(inteval->stack[((hsi*28+1141)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4272)*1+lsi)*1]), &(inteval->stack[((hsi*36+4317)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+4317)*1+lsi)*1]), &(inteval->stack[((hsi*28+1141)*1+lsi)*1]), &(inteval->stack[((hsi*21+462)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4380)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+4317)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+14035)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4380)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4317)*1+lsi)*1]), &(inteval->stack[((hsi*55+4217)*1+lsi)*1]), &(inteval->stack[((hsi*45+4272)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14245)*1+lsi)*1]), &(inteval->stack[((hsi*135+4317)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4217)*1+lsi)*1]), &(inteval->stack[((hsi*216+14245)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11555)*1+lsi)*1]), &(inteval->stack[((hsi*280+4217)*1+lsi)*1]), &(inteval->stack[((hsi*210+14035)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1141)*1+lsi)*1]), &(inteval->stack[((hsi*36+4181)*1+lsi)*1]), &(inteval->stack[((hsi*28+1113)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*45+4136)*1+lsi)*1]), &(inteval->stack[((hsi*36+4181)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12608)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*84+1141)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+462)*1+lsi)*1]), &(inteval->stack[((hsi*28+1113)*1+lsi)*1]), &(inteval->stack[((hsi*21+441)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12776)*1+lsi)*1]), &(inteval->stack[((hsi*84+1141)*1+lsi)*1]), &(inteval->stack[((hsi*63+462)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+14245)*1+lsi)*1]), &(inteval->stack[((hsi*168+12608)*1+lsi)*1]), &(inteval->stack[((hsi*126+12776)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12776)*1+lsi)*1]), &(inteval->stack[((hsi*55+4081)*1+lsi)*1]), &(inteval->stack[((hsi*45+4136)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14455)*1+lsi)*1]), &(inteval->stack[((hsi*135+12776)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14671)*1+lsi)*1]), &(inteval->stack[((hsi*216+14455)*1+lsi)*1]), &(inteval->stack[((hsi*168+12608)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11240)*1+lsi)*1]), &(inteval->stack[((hsi*280+14671)*1+lsi)*1]), &(inteval->stack[((hsi*210+14245)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+441)*1+lsi)*1]), &(inteval->stack[((hsi*36+4045)*1+lsi)*1]), &(inteval->stack[((hsi*28+1085)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*45+4000)*1+lsi)*1]), &(inteval->stack[((hsi*36+4045)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12608)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*84+441)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12776)*1+lsi)*1]), &(inteval->stack[((hsi*28+1085)*1+lsi)*1]), &(inteval->stack[((hsi*21+420)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+14455)*1+lsi)*1]), &(inteval->stack[((hsi*84+441)*1+lsi)*1]), &(inteval->stack[((hsi*63+12776)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+12776)*1+lsi)*1]), &(inteval->stack[((hsi*168+12608)*1+lsi)*1]), &(inteval->stack[((hsi*126+14455)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+14455)*1+lsi)*1]), &(inteval->stack[((hsi*55+3945)*1+lsi)*1]), &(inteval->stack[((hsi*45+4000)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3945)*1+lsi)*1]), &(inteval->stack[((hsi*135+14455)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14951)*1+lsi)*1]), &(inteval->stack[((hsi*216+3945)*1+lsi)*1]), &(inteval->stack[((hsi*168+12608)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10925)*1+lsi)*1]), &(inteval->stack[((hsi*280+14951)*1+lsi)*1]), &(inteval->stack[((hsi*210+12776)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3909)*1+lsi)*1]), &(inteval->stack[((hsi*28+1057)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3945)*1+lsi)*1]), &(inteval->stack[((hsi*45+3864)*1+lsi)*1]), &(inteval->stack[((hsi*36+3909)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+14455)*1+lsi)*1]), &(inteval->stack[((hsi*108+3945)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+1057)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+399)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+12500)*1+lsi)*1]), &(inteval->stack[((hsi*168+14455)*1+lsi)*1]), &(inteval->stack[((hsi*126+399)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1057)*1+lsi)*1]), &(inteval->stack[((hsi*55+3809)*1+lsi)*1]), &(inteval->stack[((hsi*45+3864)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15231)*1+lsi)*1]), &(inteval->stack[((hsi*135+1057)*1+lsi)*1]), &(inteval->stack[((hsi*108+3945)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+3809)*1+lsi)*1]), &(inteval->stack[((hsi*216+15231)*1+lsi)*1]), &(inteval->stack[((hsi*168+14455)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10610)*1+lsi)*1]), &(inteval->stack[((hsi*280+3809)*1+lsi)*1]), &(inteval->stack[((hsi*210+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+14455)*1+lsi)*1]), &(inteval->stack[((hsi*36+3773)*1+lsi)*1]), &(inteval->stack[((hsi*28+1029)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1057)*1+lsi)*1]), &(inteval->stack[((hsi*45+3728)*1+lsi)*1]), &(inteval->stack[((hsi*36+3773)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15231)*1+lsi)*1]), &(inteval->stack[((hsi*108+1057)*1+lsi)*1]), &(inteval->stack[((hsi*84+14455)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+1029)*1+lsi)*1]), &(inteval->stack[((hsi*21+378)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+378)*1+lsi)*1]), &(inteval->stack[((hsi*84+14455)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+14455)*1+lsi)*1]), &(inteval->stack[((hsi*168+15231)*1+lsi)*1]), &(inteval->stack[((hsi*126+378)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+378)*1+lsi)*1]), &(inteval->stack[((hsi*55+3673)*1+lsi)*1]), &(inteval->stack[((hsi*45+3728)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15399)*1+lsi)*1]), &(inteval->stack[((hsi*135+378)*1+lsi)*1]), &(inteval->stack[((hsi*108+1057)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15615)*1+lsi)*1]), &(inteval->stack[((hsi*216+15399)*1+lsi)*1]), &(inteval->stack[((hsi*168+15231)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10295)*1+lsi)*1]), &(inteval->stack[((hsi*280+15615)*1+lsi)*1]), &(inteval->stack[((hsi*210+14455)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+15231)*1+lsi)*1]), &(inteval->stack[((hsi*36+3637)*1+lsi)*1]), &(inteval->stack[((hsi*28+1001)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+15315)*1+lsi)*1]), &(inteval->stack[((hsi*45+3592)*1+lsi)*1]), &(inteval->stack[((hsi*36+3637)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1029)*1+lsi)*1]), &(inteval->stack[((hsi*108+15315)*1+lsi)*1]), &(inteval->stack[((hsi*84+15231)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+1001)*1+lsi)*1]), &(inteval->stack[((hsi*21+357)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15423)*1+lsi)*1]), &(inteval->stack[((hsi*84+15231)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+15895)*1+lsi)*1]), &(inteval->stack[((hsi*168+1029)*1+lsi)*1]), &(inteval->stack[((hsi*126+15423)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15423)*1+lsi)*1]), &(inteval->stack[((hsi*55+3537)*1+lsi)*1]), &(inteval->stack[((hsi*45+3592)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3537)*1+lsi)*1]), &(inteval->stack[((hsi*135+15423)*1+lsi)*1]), &(inteval->stack[((hsi*108+15315)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15231)*1+lsi)*1]), &(inteval->stack[((hsi*216+3537)*1+lsi)*1]), &(inteval->stack[((hsi*168+1029)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9980)*1+lsi)*1]), &(inteval->stack[((hsi*280+15231)*1+lsi)*1]), &(inteval->stack[((hsi*210+15895)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3537)*1+lsi)*1]), &(inteval->stack[((hsi*36+3501)*1+lsi)*1]), &(inteval->stack[((hsi*28+973)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1001)*1+lsi)*1]), &(inteval->stack[((hsi*45+3456)*1+lsi)*1]), &(inteval->stack[((hsi*36+3501)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+357)*1+lsi)*1]), &(inteval->stack[((hsi*108+1001)*1+lsi)*1]), &(inteval->stack[((hsi*84+3537)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+973)*1+lsi)*1]), &(inteval->stack[((hsi*21+336)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3621)*1+lsi)*1]), &(inteval->stack[((hsi*84+3537)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+16105)*1+lsi)*1]), &(inteval->stack[((hsi*168+357)*1+lsi)*1]), &(inteval->stack[((hsi*126+3621)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3501)*1+lsi)*1]), &(inteval->stack[((hsi*55+3401)*1+lsi)*1]), &(inteval->stack[((hsi*45+3456)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16315)*1+lsi)*1]), &(inteval->stack[((hsi*135+3501)*1+lsi)*1]), &(inteval->stack[((hsi*108+1001)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+3401)*1+lsi)*1]), &(inteval->stack[((hsi*216+16315)*1+lsi)*1]), &(inteval->stack[((hsi*168+357)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9665)*1+lsi)*1]), &(inteval->stack[((hsi*280+3401)*1+lsi)*1]), &(inteval->stack[((hsi*210+16105)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+973)*1+lsi)*1]), &(inteval->stack[((hsi*36+3365)*1+lsi)*1]), &(inteval->stack[((hsi*28+945)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+336)*1+lsi)*1]), &(inteval->stack[((hsi*45+3320)*1+lsi)*1]), &(inteval->stack[((hsi*36+3365)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1057)*1+lsi)*1]), &(inteval->stack[((hsi*108+336)*1+lsi)*1]), &(inteval->stack[((hsi*84+973)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+945)*1+lsi)*1]), &(inteval->stack[((hsi*21+315)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4497)*1+lsi)*1]), &(inteval->stack[((hsi*84+973)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+16315)*1+lsi)*1]), &(inteval->stack[((hsi*168+1057)*1+lsi)*1]), &(inteval->stack[((hsi*126+4497)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+16525)*1+lsi)*1]), &(inteval->stack[((hsi*55+3265)*1+lsi)*1]), &(inteval->stack[((hsi*45+3320)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16660)*1+lsi)*1]), &(inteval->stack[((hsi*135+16525)*1+lsi)*1]), &(inteval->stack[((hsi*108+336)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+16876)*1+lsi)*1]), &(inteval->stack[((hsi*216+16660)*1+lsi)*1]), &(inteval->stack[((hsi*168+1057)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9350)*1+lsi)*1]), &(inteval->stack[((hsi*280+16876)*1+lsi)*1]), &(inteval->stack[((hsi*210+16315)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+16525)*1+lsi)*1]), &(inteval->stack[((hsi*36+3229)*1+lsi)*1]), &(inteval->stack[((hsi*28+917)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+945)*1+lsi)*1]), &(inteval->stack[((hsi*45+3184)*1+lsi)*1]), &(inteval->stack[((hsi*36+3229)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16609)*1+lsi)*1]), &(inteval->stack[((hsi*108+945)*1+lsi)*1]), &(inteval->stack[((hsi*84+16525)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+917)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+294)*1+lsi)*1]), &(inteval->stack[((hsi*84+16525)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17156)*1+lsi)*1]), &(inteval->stack[((hsi*168+16609)*1+lsi)*1]), &(inteval->stack[((hsi*126+294)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+294)*1+lsi)*1]), &(inteval->stack[((hsi*55+3129)*1+lsi)*1]), &(inteval->stack[((hsi*45+3184)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3129)*1+lsi)*1]), &(inteval->stack[((hsi*135+294)*1+lsi)*1]), &(inteval->stack[((hsi*108+945)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+917)*1+lsi)*1]), &(inteval->stack[((hsi*216+3129)*1+lsi)*1]), &(inteval->stack[((hsi*168+16609)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9035)*1+lsi)*1]), &(inteval->stack[((hsi*280+917)*1+lsi)*1]), &(inteval->stack[((hsi*210+17156)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+16525)*1+lsi)*1]), &(inteval->stack[((hsi*36+3093)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3129)*1+lsi)*1]), &(inteval->stack[((hsi*45+3048)*1+lsi)*1]), &(inteval->stack[((hsi*36+3093)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16609)*1+lsi)*1]), &(inteval->stack[((hsi*108+3129)*1+lsi)*1]), &(inteval->stack[((hsi*84+16525)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+273)*1+lsi)*1]), &(inteval->stack[((hsi*84+16525)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17366)*1+lsi)*1]), &(inteval->stack[((hsi*168+16609)*1+lsi)*1]), &(inteval->stack[((hsi*126+273)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+273)*1+lsi)*1]), &(inteval->stack[((hsi*55+2993)*1+lsi)*1]), &(inteval->stack[((hsi*45+3048)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17576)*1+lsi)*1]), &(inteval->stack[((hsi*135+273)*1+lsi)*1]), &(inteval->stack[((hsi*108+3129)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2993)*1+lsi)*1]), &(inteval->stack[((hsi*216+17576)*1+lsi)*1]), &(inteval->stack[((hsi*168+16609)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8720)*1+lsi)*1]), &(inteval->stack[((hsi*280+2993)*1+lsi)*1]), &(inteval->stack[((hsi*210+17366)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+16525)*1+lsi)*1]), &(inteval->stack[((hsi*36+2957)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+16609)*1+lsi)*1]), &(inteval->stack[((hsi*45+2912)*1+lsi)*1]), &(inteval->stack[((hsi*36+2957)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+273)*1+lsi)*1]), &(inteval->stack[((hsi*108+16609)*1+lsi)*1]), &(inteval->stack[((hsi*84+16525)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+16717)*1+lsi)*1]), &(inteval->stack[((hsi*84+16525)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17576)*1+lsi)*1]), &(inteval->stack[((hsi*168+273)*1+lsi)*1]), &(inteval->stack[((hsi*126+16717)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+16717)*1+lsi)*1]), &(inteval->stack[((hsi*55+2857)*1+lsi)*1]), &(inteval->stack[((hsi*45+2912)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17786)*1+lsi)*1]), &(inteval->stack[((hsi*135+16717)*1+lsi)*1]), &(inteval->stack[((hsi*108+16609)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+16525)*1+lsi)*1]), &(inteval->stack[((hsi*216+17786)*1+lsi)*1]), &(inteval->stack[((hsi*168+273)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8405)*1+lsi)*1]), &(inteval->stack[((hsi*280+16525)*1+lsi)*1]), &(inteval->stack[((hsi*210+17576)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+252)*1+lsi)*1]), &(inteval->stack[((hsi*36+2821)*1+lsi)*1]), &(inteval->stack[((hsi*28+833)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+336)*1+lsi)*1]), &(inteval->stack[((hsi*45+2776)*1+lsi)*1]), &(inteval->stack[((hsi*36+2821)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2821)*1+lsi)*1]), &(inteval->stack[((hsi*108+336)*1+lsi)*1]), &(inteval->stack[((hsi*84+252)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+833)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+4089)*1+lsi)*1]), &(inteval->stack[((hsi*84+252)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17786)*1+lsi)*1]), &(inteval->stack[((hsi*168+2821)*1+lsi)*1]), &(inteval->stack[((hsi*126+4089)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17996)*1+lsi)*1]), &(inteval->stack[((hsi*55+2721)*1+lsi)*1]), &(inteval->stack[((hsi*45+2776)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18131)*1+lsi)*1]), &(inteval->stack[((hsi*135+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+336)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+231)*1+lsi)*1]), &(inteval->stack[((hsi*216+18131)*1+lsi)*1]), &(inteval->stack[((hsi*168+2821)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8090)*1+lsi)*1]), &(inteval->stack[((hsi*280+231)*1+lsi)*1]), &(inteval->stack[((hsi*210+17786)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+833)*1+lsi)*1]), &(inteval->stack[((hsi*36+2685)*1+lsi)*1]), &(inteval->stack[((hsi*28+805)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2721)*1+lsi)*1]), &(inteval->stack[((hsi*45+2640)*1+lsi)*1]), &(inteval->stack[((hsi*36+2685)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+2721)*1+lsi)*1]), &(inteval->stack[((hsi*84+833)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+805)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2829)*1+lsi)*1]), &(inteval->stack[((hsi*84+833)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18164)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+2829)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2829)*1+lsi)*1]), &(inteval->stack[((hsi*55+2585)*1+lsi)*1]), &(inteval->stack[((hsi*45+2640)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18374)*1+lsi)*1]), &(inteval->stack[((hsi*135+2829)*1+lsi)*1]), &(inteval->stack[((hsi*108+2721)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2585)*1+lsi)*1]), &(inteval->stack[((hsi*216+18374)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7775)*1+lsi)*1]), &(inteval->stack[((hsi*280+2585)*1+lsi)*1]), &(inteval->stack[((hsi*210+18164)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+17996)*1+lsi)*1]), &(inteval->stack[((hsi*36+2549)*1+lsi)*1]), &(inteval->stack[((hsi*28+777)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3681)*1+lsi)*1]), &(inteval->stack[((hsi*45+2504)*1+lsi)*1]), &(inteval->stack[((hsi*36+2549)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+18374)*1+lsi)*1]), &(inteval->stack[((hsi*108+3681)*1+lsi)*1]), &(inteval->stack[((hsi*84+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+777)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+777)*1+lsi)*1]), &(inteval->stack[((hsi*84+17996)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18542)*1+lsi)*1]), &(inteval->stack[((hsi*168+18374)*1+lsi)*1]), &(inteval->stack[((hsi*126+777)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17996)*1+lsi)*1]), &(inteval->stack[((hsi*55+2449)*1+lsi)*1]), &(inteval->stack[((hsi*45+2504)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18752)*1+lsi)*1]), &(inteval->stack[((hsi*135+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+3681)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+18968)*1+lsi)*1]), &(inteval->stack[((hsi*216+18752)*1+lsi)*1]), &(inteval->stack[((hsi*168+18374)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7460)*1+lsi)*1]), &(inteval->stack[((hsi*280+18968)*1+lsi)*1]), &(inteval->stack[((hsi*210+18542)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+18752)*1+lsi)*1]), &(inteval->stack[((hsi*36+2413)*1+lsi)*1]), &(inteval->stack[((hsi*28+749)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+18374)*1+lsi)*1]), &(inteval->stack[((hsi*45+2368)*1+lsi)*1]), &(inteval->stack[((hsi*36+2413)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+18374)*1+lsi)*1]), &(inteval->stack[((hsi*84+18752)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+749)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2413)*1+lsi)*1]), &(inteval->stack[((hsi*84+18752)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18752)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+2413)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2413)*1+lsi)*1]), &(inteval->stack[((hsi*55+2313)*1+lsi)*1]), &(inteval->stack[((hsi*45+2368)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+19248)*1+lsi)*1]), &(inteval->stack[((hsi*135+2413)*1+lsi)*1]), &(inteval->stack[((hsi*108+18374)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19464)*1+lsi)*1]), &(inteval->stack[((hsi*216+19248)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7145)*1+lsi)*1]), &(inteval->stack[((hsi*280+19464)*1+lsi)*1]), &(inteval->stack[((hsi*210+18752)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2277)*1+lsi)*1]), &(inteval->stack[((hsi*28+721)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+19248)*1+lsi)*1]), &(inteval->stack[((hsi*45+2232)*1+lsi)*1]), &(inteval->stack[((hsi*36+2277)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+19248)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+721)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+721)*1+lsi)*1]), &(inteval->stack[((hsi*84+2313)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+2277)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+721)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+721)*1+lsi)*1]), &(inteval->stack[((hsi*55+2177)*1+lsi)*1]), &(inteval->stack[((hsi*45+2232)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+19744)*1+lsi)*1]), &(inteval->stack[((hsi*135+721)*1+lsi)*1]), &(inteval->stack[((hsi*108+19248)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19960)*1+lsi)*1]), &(inteval->stack[((hsi*216+19744)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6830)*1+lsi)*1]), &(inteval->stack[((hsi*280+19960)*1+lsi)*1]), &(inteval->stack[((hsi*210+2277)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+147)*1+lsi)*1]), &(inteval->stack[((hsi*36+2141)*1+lsi)*1]), &(inteval->stack[((hsi*28+693)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+19744)*1+lsi)*1]), &(inteval->stack[((hsi*45+2096)*1+lsi)*1]), &(inteval->stack[((hsi*36+2141)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+19744)*1+lsi)*1]), &(inteval->stack[((hsi*84+147)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+693)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+693)*1+lsi)*1]), &(inteval->stack[((hsi*84+147)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+19248)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+693)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+693)*1+lsi)*1]), &(inteval->stack[((hsi*55+2041)*1+lsi)*1]), &(inteval->stack[((hsi*45+2096)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+2041)*1+lsi)*1]), &(inteval->stack[((hsi*135+693)*1+lsi)*1]), &(inteval->stack[((hsi*108+19744)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20240)*1+lsi)*1]), &(inteval->stack[((hsi*216+2041)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6515)*1+lsi)*1]), &(inteval->stack[((hsi*280+20240)*1+lsi)*1]), &(inteval->stack[((hsi*210+19248)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2041)*1+lsi)*1]), &(inteval->stack[((hsi*36+2005)*1+lsi)*1]), &(inteval->stack[((hsi*28+665)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+693)*1+lsi)*1]), &(inteval->stack[((hsi*45+1960)*1+lsi)*1]), &(inteval->stack[((hsi*36+2005)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+693)*1+lsi)*1]), &(inteval->stack[((hsi*84+2041)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+665)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+105)*1+lsi)*1]), &(inteval->stack[((hsi*84+2041)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+2005)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+105)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*55+1905)*1+lsi)*1]), &(inteval->stack[((hsi*45+1960)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+20520)*1+lsi)*1]), &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*108+693)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20736)*1+lsi)*1]), &(inteval->stack[((hsi*216+20520)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6200)*1+lsi)*1]), &(inteval->stack[((hsi*280+20736)*1+lsi)*1]), &(inteval->stack[((hsi*210+2005)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+665)*1+lsi)*1]), &(inteval->stack[((hsi*36+1869)*1+lsi)*1]), &(inteval->stack[((hsi*28+637)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+20520)*1+lsi)*1]), &(inteval->stack[((hsi*45+1824)*1+lsi)*1]), &(inteval->stack[((hsi*36+1869)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+20520)*1+lsi)*1]), &(inteval->stack[((hsi*84+665)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+637)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+19744)*1+lsi)*1]), &(inteval->stack[((hsi*84+665)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+637)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+19744)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*55+1769)*1+lsi)*1]), &(inteval->stack[((hsi*45+1824)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+1769)*1+lsi)*1]), &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*108+20520)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+21016)*1+lsi)*1]), &(inteval->stack[((hsi*216+1769)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5885)*1+lsi)*1]), &(inteval->stack[((hsi*280+21016)*1+lsi)*1]), &(inteval->stack[((hsi*210+637)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1769)*1+lsi)*1]), &(inteval->stack[((hsi*36+1733)*1+lsi)*1]), &(inteval->stack[((hsi*28+609)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+19744)*1+lsi)*1]), &(inteval->stack[((hsi*45+1688)*1+lsi)*1]), &(inteval->stack[((hsi*36+1733)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+19744)*1+lsi)*1]), &(inteval->stack[((hsi*84+1769)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+20520)*1+lsi)*1]), &(inteval->stack[((hsi*84+1769)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+1733)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+20520)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+20520)*1+lsi)*1]), &(inteval->stack[((hsi*55+1633)*1+lsi)*1]), &(inteval->stack[((hsi*45+1688)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+21296)*1+lsi)*1]), &(inteval->stack[((hsi*135+20520)*1+lsi)*1]), &(inteval->stack[((hsi*108+19744)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+21512)*1+lsi)*1]), &(inteval->stack[((hsi*216+21296)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5570)*1+lsi)*1]), &(inteval->stack[((hsi*280+21512)*1+lsi)*1]), &(inteval->stack[((hsi*210+1733)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+21296)*1+lsi)*1]), &(inteval->stack[((hsi*36+1597)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+20520)*1+lsi)*1]), &(inteval->stack[((hsi*45+1552)*1+lsi)*1]), &(inteval->stack[((hsi*36+1597)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+20520)*1+lsi)*1]), &(inteval->stack[((hsi*84+21296)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+19744)*1+lsi)*1]), &(inteval->stack[((hsi*84+21296)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+21296)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+19744)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*55+1497)*1+lsi)*1]), &(inteval->stack[((hsi*45+1552)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+1497)*1+lsi)*1]), &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*108+20520)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+21792)*1+lsi)*1]), &(inteval->stack[((hsi*216+1497)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5255)*1+lsi)*1]), &(inteval->stack[((hsi*280+21792)*1+lsi)*1]), &(inteval->stack[((hsi*210+21296)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1497)*1+lsi)*1]), &(inteval->stack[((hsi*36+1461)*1+lsi)*1]), &(inteval->stack[((hsi*28+553)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+19744)*1+lsi)*1]), &(inteval->stack[((hsi*45+1416)*1+lsi)*1]), &(inteval->stack[((hsi*36+1461)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+19744)*1+lsi)*1]), &(inteval->stack[((hsi*84+1497)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+553)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+20520)*1+lsi)*1]), &(inteval->stack[((hsi*84+1497)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+21)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+20520)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1461)*1+lsi)*1]), &(inteval->stack[((hsi*55+1361)*1+lsi)*1]), &(inteval->stack[((hsi*45+1416)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+20520)*1+lsi)*1]), &(inteval->stack[((hsi*135+1461)*1+lsi)*1]), &(inteval->stack[((hsi*108+19744)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+1361)*1+lsi)*1]), &(inteval->stack[((hsi*216+20520)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4940)*1+lsi)*1]), &(inteval->stack[((hsi*280+1361)*1+lsi)*1]), &(inteval->stack[((hsi*210+21)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+553)*1+lsi)*1]), &(inteval->stack[((hsi*36+1325)*1+lsi)*1]), &(inteval->stack[((hsi*28+525)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+20520)*1+lsi)*1]), &(inteval->stack[((hsi*45+1280)*1+lsi)*1]), &(inteval->stack[((hsi*36+1325)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*108+20520)*1+lsi)*1]), &(inteval->stack[((hsi*84+553)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12986)*1+lsi)*1]), &(inteval->stack[((hsi*28+525)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+19744)*1+lsi)*1]), &(inteval->stack[((hsi*84+553)*1+lsi)*1]), &(inteval->stack[((hsi*63+12986)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+22072)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]), &(inteval->stack[((hsi*126+19744)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*55+1225)*1+lsi)*1]), &(inteval->stack[((hsi*45+1280)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+22282)*1+lsi)*1]), &(inteval->stack[((hsi*135+19744)*1+lsi)*1]), &(inteval->stack[((hsi*108+20520)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+22498)*1+lsi)*1]), &(inteval->stack[((hsi*216+22282)*1+lsi)*1]), &(inteval->stack[((hsi*168+17996)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4625)*1+lsi)*1]), &(inteval->stack[((hsi*280+22498)*1+lsi)*1]), &(inteval->stack[((hsi*210+22072)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*315+4625)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*315+4940)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*315+5255)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*315+5570)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*315+5885)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*315+6200)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*315+6515)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*315+6830)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*315+7145)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*315+7460)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*315+7775)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*315+8090)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*315+8405)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*315+8720)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*315+9035)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*315+9350)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*315+9665)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*315+9980)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*315+10295)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*315+10610)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*315+10925)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*315+11240)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*315+11555)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*315+11870)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*315+12185)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
