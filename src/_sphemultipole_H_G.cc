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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hg.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <_sphemultipole_H_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_H_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4540)*1+lsi)*1]), &(inteval->stack[((hsi*28+4576)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4495)*1+lsi)*1]), &(inteval->stack[((hsi*36+4540)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+4576)*1+lsi)*1]), &(inteval->stack[((hsi*21+4604)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+13049)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4440)*1+lsi)*1]), &(inteval->stack[((hsi*45+4495)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+12185)*1+lsi)*1]), &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*210+13049)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4355)*1+lsi)*1]), &(inteval->stack[((hsi*28+4391)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4310)*1+lsi)*1]), &(inteval->stack[((hsi*36+4355)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+13259)*1+lsi)*1]), &(inteval->stack[((hsi*28+4391)*1+lsi)*1]), &(inteval->stack[((hsi*21+4419)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+4355)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+13259)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+4355)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4355)*1+lsi)*1]), &(inteval->stack[((hsi*55+4255)*1+lsi)*1]), &(inteval->stack[((hsi*45+4310)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+13755)*1+lsi)*1]), &(inteval->stack[((hsi*135+4355)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+4255)*1+lsi)*1]), &(inteval->stack[((hsi*216+13755)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+11870)*1+lsi)*1]), &(inteval->stack[((hsi*280+4255)*1+lsi)*1]), &(inteval->stack[((hsi*210+13259)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+4170)*1+lsi)*1]), &(inteval->stack[((hsi*28+4206)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+4125)*1+lsi)*1]), &(inteval->stack[((hsi*36+4170)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+4206)*1+lsi)*1]), &(inteval->stack[((hsi*21+4234)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+13755)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4070)*1+lsi)*1]), &(inteval->stack[((hsi*45+4125)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+13965)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+14181)*1+lsi)*1]), &(inteval->stack[((hsi*216+13965)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+11555)*1+lsi)*1]), &(inteval->stack[((hsi*280+14181)*1+lsi)*1]), &(inteval->stack[((hsi*210+13755)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3985)*1+lsi)*1]), &(inteval->stack[((hsi*28+4021)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3940)*1+lsi)*1]), &(inteval->stack[((hsi*36+3985)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+13965)*1+lsi)*1]), &(inteval->stack[((hsi*28+4021)*1+lsi)*1]), &(inteval->stack[((hsi*21+4049)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3985)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+13965)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+13965)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+3985)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3985)*1+lsi)*1]), &(inteval->stack[((hsi*55+3885)*1+lsi)*1]), &(inteval->stack[((hsi*45+3940)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14461)*1+lsi)*1]), &(inteval->stack[((hsi*135+3985)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3885)*1+lsi)*1]), &(inteval->stack[((hsi*216+14461)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+11240)*1+lsi)*1]), &(inteval->stack[((hsi*280+3885)*1+lsi)*1]), &(inteval->stack[((hsi*210+13965)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3800)*1+lsi)*1]), &(inteval->stack[((hsi*28+3836)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3755)*1+lsi)*1]), &(inteval->stack[((hsi*36+3800)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+3836)*1+lsi)*1]), &(inteval->stack[((hsi*21+3864)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+14461)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+3700)*1+lsi)*1]), &(inteval->stack[((hsi*45+3755)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+14887)*1+lsi)*1]), &(inteval->stack[((hsi*216+14671)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+10925)*1+lsi)*1]), &(inteval->stack[((hsi*280+14887)*1+lsi)*1]), &(inteval->stack[((hsi*210+14461)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3615)*1+lsi)*1]), &(inteval->stack[((hsi*28+3651)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3570)*1+lsi)*1]), &(inteval->stack[((hsi*36+3615)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+14671)*1+lsi)*1]), &(inteval->stack[((hsi*28+3651)*1+lsi)*1]), &(inteval->stack[((hsi*21+3679)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3615)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+14671)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+14671)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+3615)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3615)*1+lsi)*1]), &(inteval->stack[((hsi*55+3515)*1+lsi)*1]), &(inteval->stack[((hsi*45+3570)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15167)*1+lsi)*1]), &(inteval->stack[((hsi*135+3615)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3515)*1+lsi)*1]), &(inteval->stack[((hsi*216+15167)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+10610)*1+lsi)*1]), &(inteval->stack[((hsi*280+3515)*1+lsi)*1]), &(inteval->stack[((hsi*210+14671)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3430)*1+lsi)*1]), &(inteval->stack[((hsi*28+3466)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3385)*1+lsi)*1]), &(inteval->stack[((hsi*36+3430)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+3466)*1+lsi)*1]), &(inteval->stack[((hsi*21+3494)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+15167)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+3330)*1+lsi)*1]), &(inteval->stack[((hsi*45+3385)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15377)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+15593)*1+lsi)*1]), &(inteval->stack[((hsi*216+15377)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+10295)*1+lsi)*1]), &(inteval->stack[((hsi*280+15593)*1+lsi)*1]), &(inteval->stack[((hsi*210+15167)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3245)*1+lsi)*1]), &(inteval->stack[((hsi*28+3281)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3200)*1+lsi)*1]), &(inteval->stack[((hsi*36+3245)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+15377)*1+lsi)*1]), &(inteval->stack[((hsi*28+3281)*1+lsi)*1]), &(inteval->stack[((hsi*21+3309)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3245)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+15377)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+15377)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+3245)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3245)*1+lsi)*1]), &(inteval->stack[((hsi*55+3145)*1+lsi)*1]), &(inteval->stack[((hsi*45+3200)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15873)*1+lsi)*1]), &(inteval->stack[((hsi*135+3245)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3145)*1+lsi)*1]), &(inteval->stack[((hsi*216+15873)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+9980)*1+lsi)*1]), &(inteval->stack[((hsi*280+3145)*1+lsi)*1]), &(inteval->stack[((hsi*210+15377)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3060)*1+lsi)*1]), &(inteval->stack[((hsi*28+3096)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3015)*1+lsi)*1]), &(inteval->stack[((hsi*36+3060)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+3096)*1+lsi)*1]), &(inteval->stack[((hsi*21+3124)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+15873)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+2960)*1+lsi)*1]), &(inteval->stack[((hsi*45+3015)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16083)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+16299)*1+lsi)*1]), &(inteval->stack[((hsi*216+16083)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+9665)*1+lsi)*1]), &(inteval->stack[((hsi*280+16299)*1+lsi)*1]), &(inteval->stack[((hsi*210+15873)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2875)*1+lsi)*1]), &(inteval->stack[((hsi*28+2911)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2830)*1+lsi)*1]), &(inteval->stack[((hsi*36+2875)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+16083)*1+lsi)*1]), &(inteval->stack[((hsi*28+2911)*1+lsi)*1]), &(inteval->stack[((hsi*21+2939)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2875)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+16083)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+16083)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+2875)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2875)*1+lsi)*1]), &(inteval->stack[((hsi*55+2775)*1+lsi)*1]), &(inteval->stack[((hsi*45+2830)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16579)*1+lsi)*1]), &(inteval->stack[((hsi*135+2875)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2775)*1+lsi)*1]), &(inteval->stack[((hsi*216+16579)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+9350)*1+lsi)*1]), &(inteval->stack[((hsi*280+2775)*1+lsi)*1]), &(inteval->stack[((hsi*210+16083)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2690)*1+lsi)*1]), &(inteval->stack[((hsi*28+2726)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2645)*1+lsi)*1]), &(inteval->stack[((hsi*36+2690)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+2726)*1+lsi)*1]), &(inteval->stack[((hsi*21+2754)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+16579)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+2590)*1+lsi)*1]), &(inteval->stack[((hsi*45+2645)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16789)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+17005)*1+lsi)*1]), &(inteval->stack[((hsi*216+16789)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+9035)*1+lsi)*1]), &(inteval->stack[((hsi*280+17005)*1+lsi)*1]), &(inteval->stack[((hsi*210+16579)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2505)*1+lsi)*1]), &(inteval->stack[((hsi*28+2541)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2460)*1+lsi)*1]), &(inteval->stack[((hsi*36+2505)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+16789)*1+lsi)*1]), &(inteval->stack[((hsi*28+2541)*1+lsi)*1]), &(inteval->stack[((hsi*21+2569)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2505)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+16789)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+16789)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+2505)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2505)*1+lsi)*1]), &(inteval->stack[((hsi*55+2405)*1+lsi)*1]), &(inteval->stack[((hsi*45+2460)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*135+2505)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2405)*1+lsi)*1]), &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+8720)*1+lsi)*1]), &(inteval->stack[((hsi*280+2405)*1+lsi)*1]), &(inteval->stack[((hsi*210+16789)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2320)*1+lsi)*1]), &(inteval->stack[((hsi*28+2356)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]), &(inteval->stack[((hsi*36+2320)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+2356)*1+lsi)*1]), &(inteval->stack[((hsi*21+2384)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+17285)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+2220)*1+lsi)*1]), &(inteval->stack[((hsi*45+2275)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17495)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+17711)*1+lsi)*1]), &(inteval->stack[((hsi*216+17495)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+8405)*1+lsi)*1]), &(inteval->stack[((hsi*280+17711)*1+lsi)*1]), &(inteval->stack[((hsi*210+17285)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2135)*1+lsi)*1]), &(inteval->stack[((hsi*28+2171)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+2090)*1+lsi)*1]), &(inteval->stack[((hsi*36+2135)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+17495)*1+lsi)*1]), &(inteval->stack[((hsi*28+2171)*1+lsi)*1]), &(inteval->stack[((hsi*21+2199)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2135)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+17495)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+17495)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+2135)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2135)*1+lsi)*1]), &(inteval->stack[((hsi*55+2035)*1+lsi)*1]), &(inteval->stack[((hsi*45+2090)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17991)*1+lsi)*1]), &(inteval->stack[((hsi*135+2135)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+2035)*1+lsi)*1]), &(inteval->stack[((hsi*216+17991)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+8090)*1+lsi)*1]), &(inteval->stack[((hsi*280+2035)*1+lsi)*1]), &(inteval->stack[((hsi*210+17495)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1950)*1+lsi)*1]), &(inteval->stack[((hsi*28+1986)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1905)*1+lsi)*1]), &(inteval->stack[((hsi*36+1950)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1986)*1+lsi)*1]), &(inteval->stack[((hsi*21+2014)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+17991)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1905)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18201)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+18417)*1+lsi)*1]), &(inteval->stack[((hsi*216+18201)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+7775)*1+lsi)*1]), &(inteval->stack[((hsi*280+18417)*1+lsi)*1]), &(inteval->stack[((hsi*210+17991)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1765)*1+lsi)*1]), &(inteval->stack[((hsi*28+1801)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1720)*1+lsi)*1]), &(inteval->stack[((hsi*36+1765)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+18201)*1+lsi)*1]), &(inteval->stack[((hsi*28+1801)*1+lsi)*1]), &(inteval->stack[((hsi*21+1829)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1765)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+18201)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+18201)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1765)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1765)*1+lsi)*1]), &(inteval->stack[((hsi*55+1665)*1+lsi)*1]), &(inteval->stack[((hsi*45+1720)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18697)*1+lsi)*1]), &(inteval->stack[((hsi*135+1765)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1665)*1+lsi)*1]), &(inteval->stack[((hsi*216+18697)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+7460)*1+lsi)*1]), &(inteval->stack[((hsi*280+1665)*1+lsi)*1]), &(inteval->stack[((hsi*210+18201)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1580)*1+lsi)*1]), &(inteval->stack[((hsi*28+1616)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1535)*1+lsi)*1]), &(inteval->stack[((hsi*36+1580)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1616)*1+lsi)*1]), &(inteval->stack[((hsi*21+1644)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+18697)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1480)*1+lsi)*1]), &(inteval->stack[((hsi*45+1535)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18907)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+19123)*1+lsi)*1]), &(inteval->stack[((hsi*216+18907)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+7145)*1+lsi)*1]), &(inteval->stack[((hsi*280+19123)*1+lsi)*1]), &(inteval->stack[((hsi*210+18697)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1395)*1+lsi)*1]), &(inteval->stack[((hsi*28+1431)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1350)*1+lsi)*1]), &(inteval->stack[((hsi*36+1395)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+18907)*1+lsi)*1]), &(inteval->stack[((hsi*28+1431)*1+lsi)*1]), &(inteval->stack[((hsi*21+1459)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1395)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+18907)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+18907)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1395)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1395)*1+lsi)*1]), &(inteval->stack[((hsi*55+1295)*1+lsi)*1]), &(inteval->stack[((hsi*45+1350)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+19403)*1+lsi)*1]), &(inteval->stack[((hsi*135+1395)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+1295)*1+lsi)*1]), &(inteval->stack[((hsi*216+19403)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+6830)*1+lsi)*1]), &(inteval->stack[((hsi*280+1295)*1+lsi)*1]), &(inteval->stack[((hsi*210+18907)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1210)*1+lsi)*1]), &(inteval->stack[((hsi*28+1246)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+1165)*1+lsi)*1]), &(inteval->stack[((hsi*36+1210)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1246)*1+lsi)*1]), &(inteval->stack[((hsi*21+1274)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+19403)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+1110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1165)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+19613)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+19829)*1+lsi)*1]), &(inteval->stack[((hsi*216+19613)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+6515)*1+lsi)*1]), &(inteval->stack[((hsi*280+19829)*1+lsi)*1]), &(inteval->stack[((hsi*210+19403)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1025)*1+lsi)*1]), &(inteval->stack[((hsi*28+1061)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+980)*1+lsi)*1]), &(inteval->stack[((hsi*36+1025)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+19613)*1+lsi)*1]), &(inteval->stack[((hsi*28+1061)*1+lsi)*1]), &(inteval->stack[((hsi*21+1089)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1025)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+19613)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+19613)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+1025)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1025)*1+lsi)*1]), &(inteval->stack[((hsi*55+925)*1+lsi)*1]), &(inteval->stack[((hsi*45+980)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+20109)*1+lsi)*1]), &(inteval->stack[((hsi*135+1025)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+925)*1+lsi)*1]), &(inteval->stack[((hsi*216+20109)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+6200)*1+lsi)*1]), &(inteval->stack[((hsi*280+925)*1+lsi)*1]), &(inteval->stack[((hsi*210+19613)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+840)*1+lsi)*1]), &(inteval->stack[((hsi*28+876)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+795)*1+lsi)*1]), &(inteval->stack[((hsi*36+840)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+876)*1+lsi)*1]), &(inteval->stack[((hsi*21+904)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+20109)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+740)*1+lsi)*1]), &(inteval->stack[((hsi*45+795)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+20319)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+20535)*1+lsi)*1]), &(inteval->stack[((hsi*216+20319)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+5885)*1+lsi)*1]), &(inteval->stack[((hsi*280+20535)*1+lsi)*1]), &(inteval->stack[((hsi*210+20109)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+655)*1+lsi)*1]), &(inteval->stack[((hsi*28+691)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+610)*1+lsi)*1]), &(inteval->stack[((hsi*36+655)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+20319)*1+lsi)*1]), &(inteval->stack[((hsi*28+691)*1+lsi)*1]), &(inteval->stack[((hsi*21+719)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+655)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+20319)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+20319)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+655)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+655)*1+lsi)*1]), &(inteval->stack[((hsi*55+555)*1+lsi)*1]), &(inteval->stack[((hsi*45+610)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+20815)*1+lsi)*1]), &(inteval->stack[((hsi*135+655)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+555)*1+lsi)*1]), &(inteval->stack[((hsi*216+20815)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+5570)*1+lsi)*1]), &(inteval->stack[((hsi*280+555)*1+lsi)*1]), &(inteval->stack[((hsi*210+20319)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+470)*1+lsi)*1]), &(inteval->stack[((hsi*28+506)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+425)*1+lsi)*1]), &(inteval->stack[((hsi*36+470)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+506)*1+lsi)*1]), &(inteval->stack[((hsi*21+534)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+20815)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+370)*1+lsi)*1]), &(inteval->stack[((hsi*45+425)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21025)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+21241)*1+lsi)*1]), &(inteval->stack[((hsi*216+21025)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+5255)*1+lsi)*1]), &(inteval->stack[((hsi*280+21241)*1+lsi)*1]), &(inteval->stack[((hsi*210+20815)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+285)*1+lsi)*1]), &(inteval->stack[((hsi*28+321)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]), &(inteval->stack[((hsi*36+285)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+21025)*1+lsi)*1]), &(inteval->stack[((hsi*28+321)*1+lsi)*1]), &(inteval->stack[((hsi*21+349)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+285)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+21025)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+21025)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+285)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+285)*1+lsi)*1]), &(inteval->stack[((hsi*55+185)*1+lsi)*1]), &(inteval->stack[((hsi*45+240)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21521)*1+lsi)*1]), &(inteval->stack[((hsi*135+285)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+185)*1+lsi)*1]), &(inteval->stack[((hsi*216+21521)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+4940)*1+lsi)*1]), &(inteval->stack[((hsi*280+185)*1+lsi)*1]), &(inteval->stack[((hsi*210+21025)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]), &(inteval->stack[((hsi*21+164)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+21521)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21731)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+21947)*1+lsi)*1]), &(inteval->stack[((hsi*216+21731)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0bra0ket0hg(inteval, &(inteval->stack[((hsi*315+4625)*1+lsi)*1]), &(inteval->stack[((hsi*280+21947)*1+lsi)*1]), &(inteval->stack[((hsi*210+21521)*1+lsi)*1]),1);
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
