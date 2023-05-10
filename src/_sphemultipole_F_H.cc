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
#include <HRRPart0ket0bra0hp.h>
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kp.h>
#include <_sphemultipole_F_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3250)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3165)*1+lsi)*1]), &(inteval->stack[((hsi*28+3201)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+3201)*1+lsi)*1]), &(inteval->stack[((hsi*21+3229)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+8647)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1080)*1+lsi)*1]), &(inteval->stack[((hsi*36+3165)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+8881)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+8290)*1+lsi)*1]), &(inteval->stack[((hsi*168+8881)*1+lsi)*1]), &(inteval->stack[((hsi*126+8647)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3080)*1+lsi)*1]), &(inteval->stack[((hsi*28+3116)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+3116)*1+lsi)*1]), &(inteval->stack[((hsi*21+3144)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+3116)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1035)*1+lsi)*1]), &(inteval->stack[((hsi*36+3080)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+9049)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+8080)*1+lsi)*1]), &(inteval->stack[((hsi*168+9049)*1+lsi)*1]), &(inteval->stack[((hsi*126+3116)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2995)*1+lsi)*1]), &(inteval->stack[((hsi*28+3031)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+3031)*1+lsi)*1]), &(inteval->stack[((hsi*21+3059)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9217)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+2995)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+9343)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7870)*1+lsi)*1]), &(inteval->stack[((hsi*168+9343)*1+lsi)*1]), &(inteval->stack[((hsi*126+9217)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2910)*1+lsi)*1]), &(inteval->stack[((hsi*28+2946)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2946)*1+lsi)*1]), &(inteval->stack[((hsi*21+2974)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2946)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+945)*1+lsi)*1]), &(inteval->stack[((hsi*36+2910)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+945)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7660)*1+lsi)*1]), &(inteval->stack[((hsi*168+945)*1+lsi)*1]), &(inteval->stack[((hsi*126+2946)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2825)*1+lsi)*1]), &(inteval->stack[((hsi*28+2861)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2861)*1+lsi)*1]), &(inteval->stack[((hsi*21+2889)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9511)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*36+2825)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+9637)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7450)*1+lsi)*1]), &(inteval->stack[((hsi*168+9637)*1+lsi)*1]), &(inteval->stack[((hsi*126+9511)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2740)*1+lsi)*1]), &(inteval->stack[((hsi*28+2776)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2776)*1+lsi)*1]), &(inteval->stack[((hsi*21+2804)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2776)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+855)*1+lsi)*1]), &(inteval->stack[((hsi*36+2740)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+9805)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7240)*1+lsi)*1]), &(inteval->stack[((hsi*168+9805)*1+lsi)*1]), &(inteval->stack[((hsi*126+2776)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2655)*1+lsi)*1]), &(inteval->stack[((hsi*28+2691)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2691)*1+lsi)*1]), &(inteval->stack[((hsi*21+2719)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+9973)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+810)*1+lsi)*1]), &(inteval->stack[((hsi*36+2655)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+10099)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+7030)*1+lsi)*1]), &(inteval->stack[((hsi*168+10099)*1+lsi)*1]), &(inteval->stack[((hsi*126+9973)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2570)*1+lsi)*1]), &(inteval->stack[((hsi*28+2606)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2606)*1+lsi)*1]), &(inteval->stack[((hsi*21+2634)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2606)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+765)*1+lsi)*1]), &(inteval->stack[((hsi*36+2570)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+765)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+6820)*1+lsi)*1]), &(inteval->stack[((hsi*168+765)*1+lsi)*1]), &(inteval->stack[((hsi*126+2606)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2485)*1+lsi)*1]), &(inteval->stack[((hsi*28+2521)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2521)*1+lsi)*1]), &(inteval->stack[((hsi*21+2549)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+10267)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+720)*1+lsi)*1]), &(inteval->stack[((hsi*36+2485)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+10393)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+6610)*1+lsi)*1]), &(inteval->stack[((hsi*168+10393)*1+lsi)*1]), &(inteval->stack[((hsi*126+10267)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2400)*1+lsi)*1]), &(inteval->stack[((hsi*28+2436)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2436)*1+lsi)*1]), &(inteval->stack[((hsi*21+2464)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2436)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+675)*1+lsi)*1]), &(inteval->stack[((hsi*36+2400)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+10561)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+6400)*1+lsi)*1]), &(inteval->stack[((hsi*168+10561)*1+lsi)*1]), &(inteval->stack[((hsi*126+2436)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2315)*1+lsi)*1]), &(inteval->stack[((hsi*28+2351)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2351)*1+lsi)*1]), &(inteval->stack[((hsi*21+2379)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+10729)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+630)*1+lsi)*1]), &(inteval->stack[((hsi*36+2315)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+10855)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+6190)*1+lsi)*1]), &(inteval->stack[((hsi*168+10855)*1+lsi)*1]), &(inteval->stack[((hsi*126+10729)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2230)*1+lsi)*1]), &(inteval->stack[((hsi*28+2266)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2266)*1+lsi)*1]), &(inteval->stack[((hsi*21+2294)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2266)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+585)*1+lsi)*1]), &(inteval->stack[((hsi*36+2230)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+585)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5980)*1+lsi)*1]), &(inteval->stack[((hsi*168+585)*1+lsi)*1]), &(inteval->stack[((hsi*126+2266)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2145)*1+lsi)*1]), &(inteval->stack[((hsi*28+2181)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2181)*1+lsi)*1]), &(inteval->stack[((hsi*21+2209)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+11023)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+540)*1+lsi)*1]), &(inteval->stack[((hsi*36+2145)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+11149)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5770)*1+lsi)*1]), &(inteval->stack[((hsi*168+11149)*1+lsi)*1]), &(inteval->stack[((hsi*126+11023)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2060)*1+lsi)*1]), &(inteval->stack[((hsi*28+2096)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2096)*1+lsi)*1]), &(inteval->stack[((hsi*21+2124)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+2096)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+495)*1+lsi)*1]), &(inteval->stack[((hsi*36+2060)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+11317)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5560)*1+lsi)*1]), &(inteval->stack[((hsi*168+11317)*1+lsi)*1]), &(inteval->stack[((hsi*126+2096)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1975)*1+lsi)*1]), &(inteval->stack[((hsi*28+2011)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2011)*1+lsi)*1]), &(inteval->stack[((hsi*21+2039)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+11485)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+450)*1+lsi)*1]), &(inteval->stack[((hsi*36+1975)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+11611)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5350)*1+lsi)*1]), &(inteval->stack[((hsi*168+11611)*1+lsi)*1]), &(inteval->stack[((hsi*126+11485)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1890)*1+lsi)*1]), &(inteval->stack[((hsi*28+1926)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1926)*1+lsi)*1]), &(inteval->stack[((hsi*21+1954)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1926)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+405)*1+lsi)*1]), &(inteval->stack[((hsi*36+1890)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+405)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+5140)*1+lsi)*1]), &(inteval->stack[((hsi*168+405)*1+lsi)*1]), &(inteval->stack[((hsi*126+1926)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1805)*1+lsi)*1]), &(inteval->stack[((hsi*28+1841)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1841)*1+lsi)*1]), &(inteval->stack[((hsi*21+1869)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+11779)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+360)*1+lsi)*1]), &(inteval->stack[((hsi*36+1805)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+11905)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+4930)*1+lsi)*1]), &(inteval->stack[((hsi*168+11905)*1+lsi)*1]), &(inteval->stack[((hsi*126+11779)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1720)*1+lsi)*1]), &(inteval->stack[((hsi*28+1756)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1756)*1+lsi)*1]), &(inteval->stack[((hsi*21+1784)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1756)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+315)*1+lsi)*1]), &(inteval->stack[((hsi*36+1720)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12073)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+4720)*1+lsi)*1]), &(inteval->stack[((hsi*168+12073)*1+lsi)*1]), &(inteval->stack[((hsi*126+1756)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1635)*1+lsi)*1]), &(inteval->stack[((hsi*28+1671)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1671)*1+lsi)*1]), &(inteval->stack[((hsi*21+1699)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12241)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+270)*1+lsi)*1]), &(inteval->stack[((hsi*36+1635)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12367)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+4510)*1+lsi)*1]), &(inteval->stack[((hsi*168+12367)*1+lsi)*1]), &(inteval->stack[((hsi*126+12241)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1550)*1+lsi)*1]), &(inteval->stack[((hsi*28+1586)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1586)*1+lsi)*1]), &(inteval->stack[((hsi*21+1614)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1586)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+225)*1+lsi)*1]), &(inteval->stack[((hsi*36+1550)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+225)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+4300)*1+lsi)*1]), &(inteval->stack[((hsi*168+225)*1+lsi)*1]), &(inteval->stack[((hsi*126+1586)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1465)*1+lsi)*1]), &(inteval->stack[((hsi*28+1501)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1501)*1+lsi)*1]), &(inteval->stack[((hsi*21+1529)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12535)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+180)*1+lsi)*1]), &(inteval->stack[((hsi*36+1465)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12661)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+4090)*1+lsi)*1]), &(inteval->stack[((hsi*168+12661)*1+lsi)*1]), &(inteval->stack[((hsi*126+12535)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1380)*1+lsi)*1]), &(inteval->stack[((hsi*28+1416)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1416)*1+lsi)*1]), &(inteval->stack[((hsi*21+1444)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1416)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+135)*1+lsi)*1]), &(inteval->stack[((hsi*36+1380)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12829)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3880)*1+lsi)*1]), &(inteval->stack[((hsi*168+12829)*1+lsi)*1]), &(inteval->stack[((hsi*126+1416)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1295)*1+lsi)*1]), &(inteval->stack[((hsi*28+1331)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1331)*1+lsi)*1]), &(inteval->stack[((hsi*21+1359)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+12997)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+90)*1+lsi)*1]), &(inteval->stack[((hsi*36+1295)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+13123)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3670)*1+lsi)*1]), &(inteval->stack[((hsi*168+13123)*1+lsi)*1]), &(inteval->stack[((hsi*126+12997)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1210)*1+lsi)*1]), &(inteval->stack[((hsi*28+1246)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1246)*1+lsi)*1]), &(inteval->stack[((hsi*21+1274)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+1246)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+45)*1+lsi)*1]), &(inteval->stack[((hsi*36+1210)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+45)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3460)*1+lsi)*1]), &(inteval->stack[((hsi*168+45)*1+lsi)*1]), &(inteval->stack[((hsi*126+1246)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]), &(inteval->stack[((hsi*28+1161)*1+lsi)*1]),1);
HRRPart0ket0bra0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1161)*1+lsi)*1]), &(inteval->stack[((hsi*21+1189)*1+lsi)*1]),1);
HRRPart0ket0bra0hd(inteval, &(inteval->stack[((hsi*126+13291)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+1125)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+13417)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0hf(inteval, &(inteval->stack[((hsi*210+3250)*1+lsi)*1]), &(inteval->stack[((hsi*168+13417)*1+lsi)*1]), &(inteval->stack[((hsi*126+13291)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*210+3250)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*210+3460)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*210+3670)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*210+3880)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*210+4090)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*210+4300)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*210+4510)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*210+4720)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*210+4930)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*210+5140)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*210+5350)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*210+5560)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*210+5770)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*210+5980)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*210+6190)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*210+6400)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*210+6610)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*210+6820)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*210+7030)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*210+7240)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*210+7450)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*210+7660)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*210+7870)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*210+8080)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*210+8290)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
