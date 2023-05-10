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
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2089)*1+lsi)*1]), &(inteval->stack[((hsi*28+1197)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3205)*1+lsi)*1]), &(inteval->stack[((hsi*36+2089)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+12860)*1+lsi)*1]), &(inteval->stack[((hsi*28+1197)*1+lsi)*1]), &(inteval->stack[((hsi*21+504)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12923)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13049)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4570)*1+lsi)*1]), &(inteval->stack[((hsi*45+3205)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*216+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+12185)*1+lsi)*1]), &(inteval->stack[((hsi*280+13475)*1+lsi)*1]), &(inteval->stack[((hsi*210+13049)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2053)*1+lsi)*1]), &(inteval->stack[((hsi*28+1169)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3160)*1+lsi)*1]), &(inteval->stack[((hsi*36+2053)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+13259)*1+lsi)*1]), &(inteval->stack[((hsi*28+1169)*1+lsi)*1]), &(inteval->stack[((hsi*21+483)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12860)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+13259)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13259)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4515)*1+lsi)*1]), &(inteval->stack[((hsi*45+3160)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13755)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+13971)*1+lsi)*1]), &(inteval->stack[((hsi*216+13755)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11870)*1+lsi)*1]), &(inteval->stack[((hsi*280+13971)*1+lsi)*1]), &(inteval->stack[((hsi*210+13259)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2017)*1+lsi)*1]), &(inteval->stack[((hsi*28+1141)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*45+3115)*1+lsi)*1]), &(inteval->stack[((hsi*36+2017)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+13755)*1+lsi)*1]), &(inteval->stack[((hsi*28+1141)*1+lsi)*1]), &(inteval->stack[((hsi*21+462)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12860)*1+lsi)*1]), &(inteval->stack[((hsi*84+12500)*1+lsi)*1]), &(inteval->stack[((hsi*63+13755)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+13755)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]), &(inteval->stack[((hsi*126+12860)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*55+4460)*1+lsi)*1]), &(inteval->stack[((hsi*45+3115)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14251)*1+lsi)*1]), &(inteval->stack[((hsi*135+12860)*1+lsi)*1]), &(inteval->stack[((hsi*108+12584)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14467)*1+lsi)*1]), &(inteval->stack[((hsi*216+14251)*1+lsi)*1]), &(inteval->stack[((hsi*168+12692)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11555)*1+lsi)*1]), &(inteval->stack[((hsi*280+14467)*1+lsi)*1]), &(inteval->stack[((hsi*210+13755)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1141)*1+lsi)*1]), &(inteval->stack[((hsi*36+1981)*1+lsi)*1]), &(inteval->stack[((hsi*28+1113)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2017)*1+lsi)*1]), &(inteval->stack[((hsi*45+3070)*1+lsi)*1]), &(inteval->stack[((hsi*36+1981)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12500)*1+lsi)*1]), &(inteval->stack[((hsi*108+2017)*1+lsi)*1]), &(inteval->stack[((hsi*84+1141)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+462)*1+lsi)*1]), &(inteval->stack[((hsi*28+1113)*1+lsi)*1]), &(inteval->stack[((hsi*21+441)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12668)*1+lsi)*1]), &(inteval->stack[((hsi*84+1141)*1+lsi)*1]), &(inteval->stack[((hsi*63+462)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+12794)*1+lsi)*1]), &(inteval->stack[((hsi*168+12500)*1+lsi)*1]), &(inteval->stack[((hsi*126+12668)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3115)*1+lsi)*1]), &(inteval->stack[((hsi*55+4405)*1+lsi)*1]), &(inteval->stack[((hsi*45+3070)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14251)*1+lsi)*1]), &(inteval->stack[((hsi*135+3115)*1+lsi)*1]), &(inteval->stack[((hsi*108+2017)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+14747)*1+lsi)*1]), &(inteval->stack[((hsi*216+14251)*1+lsi)*1]), &(inteval->stack[((hsi*168+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+11240)*1+lsi)*1]), &(inteval->stack[((hsi*280+14747)*1+lsi)*1]), &(inteval->stack[((hsi*210+12794)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+441)*1+lsi)*1]), &(inteval->stack[((hsi*36+1945)*1+lsi)*1]), &(inteval->stack[((hsi*28+1085)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*45+3025)*1+lsi)*1]), &(inteval->stack[((hsi*36+1945)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+4405)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]), &(inteval->stack[((hsi*84+441)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+14251)*1+lsi)*1]), &(inteval->stack[((hsi*28+1085)*1+lsi)*1]), &(inteval->stack[((hsi*21+420)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12608)*1+lsi)*1]), &(inteval->stack[((hsi*84+441)*1+lsi)*1]), &(inteval->stack[((hsi*63+14251)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+14251)*1+lsi)*1]), &(inteval->stack[((hsi*168+4405)*1+lsi)*1]), &(inteval->stack[((hsi*126+12608)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+12608)*1+lsi)*1]), &(inteval->stack[((hsi*55+4350)*1+lsi)*1]), &(inteval->stack[((hsi*45+3025)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3025)*1+lsi)*1]), &(inteval->stack[((hsi*135+12608)*1+lsi)*1]), &(inteval->stack[((hsi*108+12500)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+12500)*1+lsi)*1]), &(inteval->stack[((hsi*216+3025)*1+lsi)*1]), &(inteval->stack[((hsi*168+4405)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10925)*1+lsi)*1]), &(inteval->stack[((hsi*280+12500)*1+lsi)*1]), &(inteval->stack[((hsi*210+14251)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+4350)*1+lsi)*1]), &(inteval->stack[((hsi*36+1909)*1+lsi)*1]), &(inteval->stack[((hsi*28+1057)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3025)*1+lsi)*1]), &(inteval->stack[((hsi*45+2980)*1+lsi)*1]), &(inteval->stack[((hsi*36+1909)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1909)*1+lsi)*1]), &(inteval->stack[((hsi*108+3025)*1+lsi)*1]), &(inteval->stack[((hsi*84+4350)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+4434)*1+lsi)*1]), &(inteval->stack[((hsi*28+1057)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+399)*1+lsi)*1]), &(inteval->stack[((hsi*84+4350)*1+lsi)*1]), &(inteval->stack[((hsi*63+4434)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+4350)*1+lsi)*1]), &(inteval->stack[((hsi*168+1909)*1+lsi)*1]), &(inteval->stack[((hsi*126+399)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1057)*1+lsi)*1]), &(inteval->stack[((hsi*55+4295)*1+lsi)*1]), &(inteval->stack[((hsi*45+2980)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15027)*1+lsi)*1]), &(inteval->stack[((hsi*135+1057)*1+lsi)*1]), &(inteval->stack[((hsi*108+3025)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15243)*1+lsi)*1]), &(inteval->stack[((hsi*216+15027)*1+lsi)*1]), &(inteval->stack[((hsi*168+1909)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10610)*1+lsi)*1]), &(inteval->stack[((hsi*280+15243)*1+lsi)*1]), &(inteval->stack[((hsi*210+4350)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2980)*1+lsi)*1]), &(inteval->stack[((hsi*36+1873)*1+lsi)*1]), &(inteval->stack[((hsi*28+1029)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+15027)*1+lsi)*1]), &(inteval->stack[((hsi*45+2935)*1+lsi)*1]), &(inteval->stack[((hsi*36+1873)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1057)*1+lsi)*1]), &(inteval->stack[((hsi*108+15027)*1+lsi)*1]), &(inteval->stack[((hsi*84+2980)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1873)*1+lsi)*1]), &(inteval->stack[((hsi*28+1029)*1+lsi)*1]), &(inteval->stack[((hsi*21+378)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1936)*1+lsi)*1]), &(inteval->stack[((hsi*84+2980)*1+lsi)*1]), &(inteval->stack[((hsi*63+1873)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+2980)*1+lsi)*1]), &(inteval->stack[((hsi*168+1057)*1+lsi)*1]), &(inteval->stack[((hsi*126+1936)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1873)*1+lsi)*1]), &(inteval->stack[((hsi*55+4240)*1+lsi)*1]), &(inteval->stack[((hsi*45+2935)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*135+1873)*1+lsi)*1]), &(inteval->stack[((hsi*108+15027)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+15739)*1+lsi)*1]), &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*168+1057)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+10295)*1+lsi)*1]), &(inteval->stack[((hsi*280+15739)*1+lsi)*1]), &(inteval->stack[((hsi*210+2980)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1873)*1+lsi)*1]), &(inteval->stack[((hsi*36+1837)*1+lsi)*1]), &(inteval->stack[((hsi*28+1001)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+15523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2890)*1+lsi)*1]), &(inteval->stack[((hsi*36+1837)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1957)*1+lsi)*1]), &(inteval->stack[((hsi*108+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+1873)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+15027)*1+lsi)*1]), &(inteval->stack[((hsi*28+1001)*1+lsi)*1]), &(inteval->stack[((hsi*21+357)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1001)*1+lsi)*1]), &(inteval->stack[((hsi*84+1873)*1+lsi)*1]), &(inteval->stack[((hsi*63+15027)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+15027)*1+lsi)*1]), &(inteval->stack[((hsi*168+1957)*1+lsi)*1]), &(inteval->stack[((hsi*126+1001)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1001)*1+lsi)*1]), &(inteval->stack[((hsi*55+4185)*1+lsi)*1]), &(inteval->stack[((hsi*45+2890)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16019)*1+lsi)*1]), &(inteval->stack[((hsi*135+1001)*1+lsi)*1]), &(inteval->stack[((hsi*108+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+16235)*1+lsi)*1]), &(inteval->stack[((hsi*216+16019)*1+lsi)*1]), &(inteval->stack[((hsi*168+1957)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9980)*1+lsi)*1]), &(inteval->stack[((hsi*280+16235)*1+lsi)*1]), &(inteval->stack[((hsi*210+15027)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1837)*1+lsi)*1]), &(inteval->stack[((hsi*36+1801)*1+lsi)*1]), &(inteval->stack[((hsi*28+973)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1001)*1+lsi)*1]), &(inteval->stack[((hsi*45+2845)*1+lsi)*1]), &(inteval->stack[((hsi*36+1801)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+357)*1+lsi)*1]), &(inteval->stack[((hsi*108+1001)*1+lsi)*1]), &(inteval->stack[((hsi*84+1837)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+16019)*1+lsi)*1]), &(inteval->stack[((hsi*28+973)*1+lsi)*1]), &(inteval->stack[((hsi*21+336)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+1837)*1+lsi)*1]), &(inteval->stack[((hsi*63+16019)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+1801)*1+lsi)*1]), &(inteval->stack[((hsi*168+357)*1+lsi)*1]), &(inteval->stack[((hsi*126+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+16019)*1+lsi)*1]), &(inteval->stack[((hsi*55+4130)*1+lsi)*1]), &(inteval->stack[((hsi*45+2845)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*135+16019)*1+lsi)*1]), &(inteval->stack[((hsi*108+1001)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+16515)*1+lsi)*1]), &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*168+357)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9665)*1+lsi)*1]), &(inteval->stack[((hsi*280+16515)*1+lsi)*1]), &(inteval->stack[((hsi*210+1801)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+973)*1+lsi)*1]), &(inteval->stack[((hsi*36+1765)*1+lsi)*1]), &(inteval->stack[((hsi*28+945)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4130)*1+lsi)*1]), &(inteval->stack[((hsi*45+2800)*1+lsi)*1]), &(inteval->stack[((hsi*36+1765)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1057)*1+lsi)*1]), &(inteval->stack[((hsi*108+4130)*1+lsi)*1]), &(inteval->stack[((hsi*84+973)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+15523)*1+lsi)*1]), &(inteval->stack[((hsi*28+945)*1+lsi)*1]), &(inteval->stack[((hsi*21+315)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+16019)*1+lsi)*1]), &(inteval->stack[((hsi*84+973)*1+lsi)*1]), &(inteval->stack[((hsi*63+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+315)*1+lsi)*1]), &(inteval->stack[((hsi*168+1057)*1+lsi)*1]), &(inteval->stack[((hsi*126+16019)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2845)*1+lsi)*1]), &(inteval->stack[((hsi*55+4075)*1+lsi)*1]), &(inteval->stack[((hsi*45+2800)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*135+2845)*1+lsi)*1]), &(inteval->stack[((hsi*108+4130)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+16795)*1+lsi)*1]), &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*168+1057)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9350)*1+lsi)*1]), &(inteval->stack[((hsi*280+16795)*1+lsi)*1]), &(inteval->stack[((hsi*210+315)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+945)*1+lsi)*1]), &(inteval->stack[((hsi*36+1729)*1+lsi)*1]), &(inteval->stack[((hsi*28+917)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4075)*1+lsi)*1]), &(inteval->stack[((hsi*45+2755)*1+lsi)*1]), &(inteval->stack[((hsi*36+1729)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+4075)*1+lsi)*1]), &(inteval->stack[((hsi*84+945)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+16019)*1+lsi)*1]), &(inteval->stack[((hsi*28+917)*1+lsi)*1]), &(inteval->stack[((hsi*21+294)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1029)*1+lsi)*1]), &(inteval->stack[((hsi*84+945)*1+lsi)*1]), &(inteval->stack[((hsi*63+16019)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+16019)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*126+1029)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+917)*1+lsi)*1]), &(inteval->stack[((hsi*55+4020)*1+lsi)*1]), &(inteval->stack[((hsi*45+2755)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+2755)*1+lsi)*1]), &(inteval->stack[((hsi*135+917)*1+lsi)*1]), &(inteval->stack[((hsi*108+4075)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4020)*1+lsi)*1]), &(inteval->stack[((hsi*216+2755)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+9035)*1+lsi)*1]), &(inteval->stack[((hsi*280+4020)*1+lsi)*1]), &(inteval->stack[((hsi*210+16019)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+917)*1+lsi)*1]), &(inteval->stack[((hsi*36+1693)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2755)*1+lsi)*1]), &(inteval->stack[((hsi*45+2710)*1+lsi)*1]), &(inteval->stack[((hsi*36+1693)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1001)*1+lsi)*1]), &(inteval->stack[((hsi*108+2755)*1+lsi)*1]), &(inteval->stack[((hsi*84+917)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+15523)*1+lsi)*1]), &(inteval->stack[((hsi*28+889)*1+lsi)*1]), &(inteval->stack[((hsi*21+273)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15586)*1+lsi)*1]), &(inteval->stack[((hsi*84+917)*1+lsi)*1]), &(inteval->stack[((hsi*63+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17075)*1+lsi)*1]), &(inteval->stack[((hsi*168+1001)*1+lsi)*1]), &(inteval->stack[((hsi*126+15586)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*55+3965)*1+lsi)*1]), &(inteval->stack[((hsi*45+2710)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+2755)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+17501)*1+lsi)*1]), &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*168+1001)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8720)*1+lsi)*1]), &(inteval->stack[((hsi*280+17501)*1+lsi)*1]), &(inteval->stack[((hsi*210+17075)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+889)*1+lsi)*1]), &(inteval->stack[((hsi*36+1657)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1693)*1+lsi)*1]), &(inteval->stack[((hsi*45+2665)*1+lsi)*1]), &(inteval->stack[((hsi*36+1657)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2710)*1+lsi)*1]), &(inteval->stack[((hsi*108+1693)*1+lsi)*1]), &(inteval->stack[((hsi*84+889)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+973)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*21+252)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+17285)*1+lsi)*1]), &(inteval->stack[((hsi*84+889)*1+lsi)*1]), &(inteval->stack[((hsi*63+973)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+861)*1+lsi)*1]), &(inteval->stack[((hsi*168+2710)*1+lsi)*1]), &(inteval->stack[((hsi*126+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*55+3910)*1+lsi)*1]), &(inteval->stack[((hsi*45+2665)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+1693)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+17781)*1+lsi)*1]), &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*168+2710)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8405)*1+lsi)*1]), &(inteval->stack[((hsi*280+17781)*1+lsi)*1]), &(inteval->stack[((hsi*210+861)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2665)*1+lsi)*1]), &(inteval->stack[((hsi*36+1621)*1+lsi)*1]), &(inteval->stack[((hsi*28+833)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2749)*1+lsi)*1]), &(inteval->stack[((hsi*45+2620)*1+lsi)*1]), &(inteval->stack[((hsi*36+1621)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17285)*1+lsi)*1]), &(inteval->stack[((hsi*108+2749)*1+lsi)*1]), &(inteval->stack[((hsi*84+2665)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+252)*1+lsi)*1]), &(inteval->stack[((hsi*28+833)*1+lsi)*1]), &(inteval->stack[((hsi*21+231)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+2665)*1+lsi)*1]), &(inteval->stack[((hsi*63+252)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18061)*1+lsi)*1]), &(inteval->stack[((hsi*168+17285)*1+lsi)*1]), &(inteval->stack[((hsi*126+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*55+3855)*1+lsi)*1]), &(inteval->stack[((hsi*45+2620)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18271)*1+lsi)*1]), &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+2749)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2620)*1+lsi)*1]), &(inteval->stack[((hsi*216+18271)*1+lsi)*1]), &(inteval->stack[((hsi*168+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+8090)*1+lsi)*1]), &(inteval->stack[((hsi*280+2620)*1+lsi)*1]), &(inteval->stack[((hsi*210+18061)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+231)*1+lsi)*1]), &(inteval->stack[((hsi*36+1585)*1+lsi)*1]), &(inteval->stack[((hsi*28+805)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+15523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2575)*1+lsi)*1]), &(inteval->stack[((hsi*36+1585)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17285)*1+lsi)*1]), &(inteval->stack[((hsi*108+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+231)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+1585)*1+lsi)*1]), &(inteval->stack[((hsi*28+805)*1+lsi)*1]), &(inteval->stack[((hsi*21+210)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3855)*1+lsi)*1]), &(inteval->stack[((hsi*84+231)*1+lsi)*1]), &(inteval->stack[((hsi*63+1585)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+1585)*1+lsi)*1]), &(inteval->stack[((hsi*168+17285)*1+lsi)*1]), &(inteval->stack[((hsi*126+3855)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+3855)*1+lsi)*1]), &(inteval->stack[((hsi*55+3800)*1+lsi)*1]), &(inteval->stack[((hsi*45+2575)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18271)*1+lsi)*1]), &(inteval->stack[((hsi*135+3855)*1+lsi)*1]), &(inteval->stack[((hsi*108+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+18487)*1+lsi)*1]), &(inteval->stack[((hsi*216+18271)*1+lsi)*1]), &(inteval->stack[((hsi*168+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7775)*1+lsi)*1]), &(inteval->stack[((hsi*280+18487)*1+lsi)*1]), &(inteval->stack[((hsi*210+1585)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3800)*1+lsi)*1]), &(inteval->stack[((hsi*36+1549)*1+lsi)*1]), &(inteval->stack[((hsi*28+777)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+18271)*1+lsi)*1]), &(inteval->stack[((hsi*45+2530)*1+lsi)*1]), &(inteval->stack[((hsi*36+1549)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+18271)*1+lsi)*1]), &(inteval->stack[((hsi*84+3800)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+17285)*1+lsi)*1]), &(inteval->stack[((hsi*28+777)*1+lsi)*1]), &(inteval->stack[((hsi*21+189)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+189)*1+lsi)*1]), &(inteval->stack[((hsi*84+3800)*1+lsi)*1]), &(inteval->stack[((hsi*63+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3800)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*126+189)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+17285)*1+lsi)*1]), &(inteval->stack[((hsi*55+3745)*1+lsi)*1]), &(inteval->stack[((hsi*45+2530)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18767)*1+lsi)*1]), &(inteval->stack[((hsi*135+17285)*1+lsi)*1]), &(inteval->stack[((hsi*108+18271)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+18983)*1+lsi)*1]), &(inteval->stack[((hsi*216+18767)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7460)*1+lsi)*1]), &(inteval->stack[((hsi*280+18983)*1+lsi)*1]), &(inteval->stack[((hsi*210+3800)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+777)*1+lsi)*1]), &(inteval->stack[((hsi*36+1513)*1+lsi)*1]), &(inteval->stack[((hsi*28+749)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+18767)*1+lsi)*1]), &(inteval->stack[((hsi*45+2485)*1+lsi)*1]), &(inteval->stack[((hsi*36+1513)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17285)*1+lsi)*1]), &(inteval->stack[((hsi*108+18767)*1+lsi)*1]), &(inteval->stack[((hsi*84+777)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+18271)*1+lsi)*1]), &(inteval->stack[((hsi*28+749)*1+lsi)*1]), &(inteval->stack[((hsi*21+168)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+777)*1+lsi)*1]), &(inteval->stack[((hsi*63+18271)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18271)*1+lsi)*1]), &(inteval->stack[((hsi*168+17285)*1+lsi)*1]), &(inteval->stack[((hsi*126+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*55+3690)*1+lsi)*1]), &(inteval->stack[((hsi*45+2485)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+19263)*1+lsi)*1]), &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19479)*1+lsi)*1]), &(inteval->stack[((hsi*216+19263)*1+lsi)*1]), &(inteval->stack[((hsi*168+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+7145)*1+lsi)*1]), &(inteval->stack[((hsi*280+19479)*1+lsi)*1]), &(inteval->stack[((hsi*210+18271)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+19263)*1+lsi)*1]), &(inteval->stack[((hsi*36+1477)*1+lsi)*1]), &(inteval->stack[((hsi*28+721)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+15523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2440)*1+lsi)*1]), &(inteval->stack[((hsi*36+1477)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+18767)*1+lsi)*1]), &(inteval->stack[((hsi*108+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+19263)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+17285)*1+lsi)*1]), &(inteval->stack[((hsi*28+721)*1+lsi)*1]), &(inteval->stack[((hsi*21+147)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+147)*1+lsi)*1]), &(inteval->stack[((hsi*84+19263)*1+lsi)*1]), &(inteval->stack[((hsi*63+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+19263)*1+lsi)*1]), &(inteval->stack[((hsi*168+18767)*1+lsi)*1]), &(inteval->stack[((hsi*126+147)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2485)*1+lsi)*1]), &(inteval->stack[((hsi*55+3635)*1+lsi)*1]), &(inteval->stack[((hsi*45+2440)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*135+2485)*1+lsi)*1]), &(inteval->stack[((hsi*108+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+19759)*1+lsi)*1]), &(inteval->stack[((hsi*216+17285)*1+lsi)*1]), &(inteval->stack[((hsi*168+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6830)*1+lsi)*1]), &(inteval->stack[((hsi*280+19759)*1+lsi)*1]), &(inteval->stack[((hsi*210+19263)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+17285)*1+lsi)*1]), &(inteval->stack[((hsi*36+1441)*1+lsi)*1]), &(inteval->stack[((hsi*28+693)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1477)*1+lsi)*1]), &(inteval->stack[((hsi*45+2395)*1+lsi)*1]), &(inteval->stack[((hsi*36+1441)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+147)*1+lsi)*1]), &(inteval->stack[((hsi*108+1477)*1+lsi)*1]), &(inteval->stack[((hsi*84+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+15523)*1+lsi)*1]), &(inteval->stack[((hsi*28+693)*1+lsi)*1]), &(inteval->stack[((hsi*21+126)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+18767)*1+lsi)*1]), &(inteval->stack[((hsi*84+17285)*1+lsi)*1]), &(inteval->stack[((hsi*63+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+17285)*1+lsi)*1]), &(inteval->stack[((hsi*168+147)*1+lsi)*1]), &(inteval->stack[((hsi*126+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*55+3580)*1+lsi)*1]), &(inteval->stack[((hsi*45+2395)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18767)*1+lsi)*1]), &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+1477)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20039)*1+lsi)*1]), &(inteval->stack[((hsi*216+18767)*1+lsi)*1]), &(inteval->stack[((hsi*168+147)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6515)*1+lsi)*1]), &(inteval->stack[((hsi*280+20039)*1+lsi)*1]), &(inteval->stack[((hsi*210+17285)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+2395)*1+lsi)*1]), &(inteval->stack[((hsi*36+1405)*1+lsi)*1]), &(inteval->stack[((hsi*28+665)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3580)*1+lsi)*1]), &(inteval->stack[((hsi*45+2350)*1+lsi)*1]), &(inteval->stack[((hsi*36+1405)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+693)*1+lsi)*1]), &(inteval->stack[((hsi*108+3580)*1+lsi)*1]), &(inteval->stack[((hsi*84+2395)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+18767)*1+lsi)*1]), &(inteval->stack[((hsi*28+665)*1+lsi)*1]), &(inteval->stack[((hsi*21+105)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+2395)*1+lsi)*1]), &(inteval->stack[((hsi*63+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+105)*1+lsi)*1]), &(inteval->stack[((hsi*168+693)*1+lsi)*1]), &(inteval->stack[((hsi*126+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2395)*1+lsi)*1]), &(inteval->stack[((hsi*55+3525)*1+lsi)*1]), &(inteval->stack[((hsi*45+2350)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+18767)*1+lsi)*1]), &(inteval->stack[((hsi*135+2395)*1+lsi)*1]), &(inteval->stack[((hsi*108+3580)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20319)*1+lsi)*1]), &(inteval->stack[((hsi*216+18767)*1+lsi)*1]), &(inteval->stack[((hsi*168+693)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+6200)*1+lsi)*1]), &(inteval->stack[((hsi*280+20319)*1+lsi)*1]), &(inteval->stack[((hsi*210+105)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+3525)*1+lsi)*1]), &(inteval->stack[((hsi*36+1369)*1+lsi)*1]), &(inteval->stack[((hsi*28+637)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2350)*1+lsi)*1]), &(inteval->stack[((hsi*45+2305)*1+lsi)*1]), &(inteval->stack[((hsi*36+1369)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+18767)*1+lsi)*1]), &(inteval->stack[((hsi*108+2350)*1+lsi)*1]), &(inteval->stack[((hsi*84+3525)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+15523)*1+lsi)*1]), &(inteval->stack[((hsi*28+637)*1+lsi)*1]), &(inteval->stack[((hsi*21+84)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+637)*1+lsi)*1]), &(inteval->stack[((hsi*84+3525)*1+lsi)*1]), &(inteval->stack[((hsi*63+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3525)*1+lsi)*1]), &(inteval->stack[((hsi*168+18767)*1+lsi)*1]), &(inteval->stack[((hsi*126+637)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+637)*1+lsi)*1]), &(inteval->stack[((hsi*55+3470)*1+lsi)*1]), &(inteval->stack[((hsi*45+2305)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+1369)*1+lsi)*1]), &(inteval->stack[((hsi*135+637)*1+lsi)*1]), &(inteval->stack[((hsi*108+2350)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2305)*1+lsi)*1]), &(inteval->stack[((hsi*216+1369)*1+lsi)*1]), &(inteval->stack[((hsi*168+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5885)*1+lsi)*1]), &(inteval->stack[((hsi*280+2305)*1+lsi)*1]), &(inteval->stack[((hsi*210+3525)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+637)*1+lsi)*1]), &(inteval->stack[((hsi*36+1333)*1+lsi)*1]), &(inteval->stack[((hsi*28+609)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1369)*1+lsi)*1]), &(inteval->stack[((hsi*45+2260)*1+lsi)*1]), &(inteval->stack[((hsi*36+1333)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+1369)*1+lsi)*1]), &(inteval->stack[((hsi*84+637)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+18767)*1+lsi)*1]), &(inteval->stack[((hsi*28+609)*1+lsi)*1]), &(inteval->stack[((hsi*21+63)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1071)*1+lsi)*1]), &(inteval->stack[((hsi*84+637)*1+lsi)*1]), &(inteval->stack[((hsi*63+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+609)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*126+1071)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+18767)*1+lsi)*1]), &(inteval->stack[((hsi*55+3415)*1+lsi)*1]), &(inteval->stack[((hsi*45+2260)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+20599)*1+lsi)*1]), &(inteval->stack[((hsi*135+18767)*1+lsi)*1]), &(inteval->stack[((hsi*108+1369)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+20815)*1+lsi)*1]), &(inteval->stack[((hsi*216+20599)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5570)*1+lsi)*1]), &(inteval->stack[((hsi*280+20815)*1+lsi)*1]), &(inteval->stack[((hsi*210+609)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1333)*1+lsi)*1]), &(inteval->stack[((hsi*36+1297)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+20599)*1+lsi)*1]), &(inteval->stack[((hsi*45+2215)*1+lsi)*1]), &(inteval->stack[((hsi*36+1297)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1417)*1+lsi)*1]), &(inteval->stack[((hsi*108+20599)*1+lsi)*1]), &(inteval->stack[((hsi*84+1333)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+18767)*1+lsi)*1]), &(inteval->stack[((hsi*28+581)*1+lsi)*1]), &(inteval->stack[((hsi*21+42)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+1333)*1+lsi)*1]), &(inteval->stack[((hsi*63+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+18767)*1+lsi)*1]), &(inteval->stack[((hsi*168+1417)*1+lsi)*1]), &(inteval->stack[((hsi*126+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*55+3360)*1+lsi)*1]), &(inteval->stack[((hsi*45+2215)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+21095)*1+lsi)*1]), &(inteval->stack[((hsi*135+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+20599)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+21311)*1+lsi)*1]), &(inteval->stack[((hsi*216+21095)*1+lsi)*1]), &(inteval->stack[((hsi*168+1417)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+5255)*1+lsi)*1]), &(inteval->stack[((hsi*280+21311)*1+lsi)*1]), &(inteval->stack[((hsi*210+18767)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1297)*1+lsi)*1]), &(inteval->stack[((hsi*36+1261)*1+lsi)*1]), &(inteval->stack[((hsi*28+553)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+21095)*1+lsi)*1]), &(inteval->stack[((hsi*45+2170)*1+lsi)*1]), &(inteval->stack[((hsi*36+1261)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*108+21095)*1+lsi)*1]), &(inteval->stack[((hsi*84+1297)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+42)*1+lsi)*1]), &(inteval->stack[((hsi*28+553)*1+lsi)*1]), &(inteval->stack[((hsi*21+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+20599)*1+lsi)*1]), &(inteval->stack[((hsi*84+1297)*1+lsi)*1]), &(inteval->stack[((hsi*63+42)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+1261)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]), &(inteval->stack[((hsi*126+20599)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+20599)*1+lsi)*1]), &(inteval->stack[((hsi*55+3305)*1+lsi)*1]), &(inteval->stack[((hsi*45+2170)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+3305)*1+lsi)*1]), &(inteval->stack[((hsi*135+20599)*1+lsi)*1]), &(inteval->stack[((hsi*108+21095)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+21591)*1+lsi)*1]), &(inteval->stack[((hsi*216+3305)*1+lsi)*1]), &(inteval->stack[((hsi*168+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4940)*1+lsi)*1]), &(inteval->stack[((hsi*280+21591)*1+lsi)*1]), &(inteval->stack[((hsi*210+1261)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+21)*1+lsi)*1]), &(inteval->stack[((hsi*36+1225)*1+lsi)*1]), &(inteval->stack[((hsi*28+525)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+3305)*1+lsi)*1]), &(inteval->stack[((hsi*45+2125)*1+lsi)*1]), &(inteval->stack[((hsi*36+1225)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+20599)*1+lsi)*1]), &(inteval->stack[((hsi*108+3305)*1+lsi)*1]), &(inteval->stack[((hsi*84+21)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+21095)*1+lsi)*1]), &(inteval->stack[((hsi*28+525)*1+lsi)*1]), &(inteval->stack[((hsi*21+0)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+15523)*1+lsi)*1]), &(inteval->stack[((hsi*84+21)*1+lsi)*1]), &(inteval->stack[((hsi*63+21095)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+21095)*1+lsi)*1]), &(inteval->stack[((hsi*168+20599)*1+lsi)*1]), &(inteval->stack[((hsi*126+15523)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2170)*1+lsi)*1]), &(inteval->stack[((hsi*55+3250)*1+lsi)*1]), &(inteval->stack[((hsi*45+2125)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*135+2170)*1+lsi)*1]), &(inteval->stack[((hsi*108+3305)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+3190)*1+lsi)*1]), &(inteval->stack[((hsi*216+15523)*1+lsi)*1]), &(inteval->stack[((hsi*168+20599)*1+lsi)*1]),1);
HRRPart0ket0bra0hg(inteval, &(inteval->stack[((hsi*315+4625)*1+lsi)*1]), &(inteval->stack[((hsi*280+3190)*1+lsi)*1]), &(inteval->stack[((hsi*210+21095)*1+lsi)*1]),1);
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
