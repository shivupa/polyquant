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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <_sphemultipole_H_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_H_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3250)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_H_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3165)*1+lsi)*1]), &(inteval->stack[((hsi*28+3201)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+3201)*1+lsi)*1]), &(inteval->stack[((hsi*21+3229)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+8647)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+3120)*1+lsi)*1]), &(inteval->stack[((hsi*36+3165)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+8881)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+8290)*1+lsi)*1]), &(inteval->stack[((hsi*168+8881)*1+lsi)*1]), &(inteval->stack[((hsi*126+8647)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+3035)*1+lsi)*1]), &(inteval->stack[((hsi*28+3071)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+3071)*1+lsi)*1]), &(inteval->stack[((hsi*21+3099)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+3071)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2990)*1+lsi)*1]), &(inteval->stack[((hsi*36+3035)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9049)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+8080)*1+lsi)*1]), &(inteval->stack[((hsi*168+9049)*1+lsi)*1]), &(inteval->stack[((hsi*126+3071)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2905)*1+lsi)*1]), &(inteval->stack[((hsi*28+2941)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2941)*1+lsi)*1]), &(inteval->stack[((hsi*21+2969)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2941)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2860)*1+lsi)*1]), &(inteval->stack[((hsi*36+2905)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9217)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7870)*1+lsi)*1]), &(inteval->stack[((hsi*168+9217)*1+lsi)*1]), &(inteval->stack[((hsi*126+2941)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2775)*1+lsi)*1]), &(inteval->stack[((hsi*28+2811)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2811)*1+lsi)*1]), &(inteval->stack[((hsi*21+2839)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2811)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2730)*1+lsi)*1]), &(inteval->stack[((hsi*36+2775)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9385)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7660)*1+lsi)*1]), &(inteval->stack[((hsi*168+9385)*1+lsi)*1]), &(inteval->stack[((hsi*126+2811)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2645)*1+lsi)*1]), &(inteval->stack[((hsi*28+2681)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2681)*1+lsi)*1]), &(inteval->stack[((hsi*21+2709)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2681)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2600)*1+lsi)*1]), &(inteval->stack[((hsi*36+2645)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9553)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7450)*1+lsi)*1]), &(inteval->stack[((hsi*168+9553)*1+lsi)*1]), &(inteval->stack[((hsi*126+2681)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2515)*1+lsi)*1]), &(inteval->stack[((hsi*28+2551)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2551)*1+lsi)*1]), &(inteval->stack[((hsi*21+2579)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2551)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2470)*1+lsi)*1]), &(inteval->stack[((hsi*36+2515)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9721)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7240)*1+lsi)*1]), &(inteval->stack[((hsi*168+9721)*1+lsi)*1]), &(inteval->stack[((hsi*126+2551)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2385)*1+lsi)*1]), &(inteval->stack[((hsi*28+2421)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2421)*1+lsi)*1]), &(inteval->stack[((hsi*21+2449)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2421)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2340)*1+lsi)*1]), &(inteval->stack[((hsi*36+2385)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9889)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+7030)*1+lsi)*1]), &(inteval->stack[((hsi*168+9889)*1+lsi)*1]), &(inteval->stack[((hsi*126+2421)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2255)*1+lsi)*1]), &(inteval->stack[((hsi*28+2291)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2291)*1+lsi)*1]), &(inteval->stack[((hsi*21+2319)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2291)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2210)*1+lsi)*1]), &(inteval->stack[((hsi*36+2255)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10057)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6820)*1+lsi)*1]), &(inteval->stack[((hsi*168+10057)*1+lsi)*1]), &(inteval->stack[((hsi*126+2291)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+2125)*1+lsi)*1]), &(inteval->stack[((hsi*28+2161)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2161)*1+lsi)*1]), &(inteval->stack[((hsi*21+2189)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2161)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+2080)*1+lsi)*1]), &(inteval->stack[((hsi*36+2125)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10225)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6610)*1+lsi)*1]), &(inteval->stack[((hsi*168+10225)*1+lsi)*1]), &(inteval->stack[((hsi*126+2161)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1995)*1+lsi)*1]), &(inteval->stack[((hsi*28+2031)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+2031)*1+lsi)*1]), &(inteval->stack[((hsi*21+2059)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+2031)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1950)*1+lsi)*1]), &(inteval->stack[((hsi*36+1995)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10393)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6400)*1+lsi)*1]), &(inteval->stack[((hsi*168+10393)*1+lsi)*1]), &(inteval->stack[((hsi*126+2031)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1865)*1+lsi)*1]), &(inteval->stack[((hsi*28+1901)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1901)*1+lsi)*1]), &(inteval->stack[((hsi*21+1929)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1901)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1820)*1+lsi)*1]), &(inteval->stack[((hsi*36+1865)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10561)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+6190)*1+lsi)*1]), &(inteval->stack[((hsi*168+10561)*1+lsi)*1]), &(inteval->stack[((hsi*126+1901)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1735)*1+lsi)*1]), &(inteval->stack[((hsi*28+1771)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1771)*1+lsi)*1]), &(inteval->stack[((hsi*21+1799)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1771)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1690)*1+lsi)*1]), &(inteval->stack[((hsi*36+1735)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10729)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5980)*1+lsi)*1]), &(inteval->stack[((hsi*168+10729)*1+lsi)*1]), &(inteval->stack[((hsi*126+1771)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1605)*1+lsi)*1]), &(inteval->stack[((hsi*28+1641)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1641)*1+lsi)*1]), &(inteval->stack[((hsi*21+1669)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1641)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1560)*1+lsi)*1]), &(inteval->stack[((hsi*36+1605)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10897)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5770)*1+lsi)*1]), &(inteval->stack[((hsi*168+10897)*1+lsi)*1]), &(inteval->stack[((hsi*126+1641)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1475)*1+lsi)*1]), &(inteval->stack[((hsi*28+1511)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1511)*1+lsi)*1]), &(inteval->stack[((hsi*21+1539)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1511)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1430)*1+lsi)*1]), &(inteval->stack[((hsi*36+1475)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11065)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5560)*1+lsi)*1]), &(inteval->stack[((hsi*168+11065)*1+lsi)*1]), &(inteval->stack[((hsi*126+1511)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1345)*1+lsi)*1]), &(inteval->stack[((hsi*28+1381)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1381)*1+lsi)*1]), &(inteval->stack[((hsi*21+1409)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1381)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1300)*1+lsi)*1]), &(inteval->stack[((hsi*36+1345)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11233)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5350)*1+lsi)*1]), &(inteval->stack[((hsi*168+11233)*1+lsi)*1]), &(inteval->stack[((hsi*126+1381)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1215)*1+lsi)*1]), &(inteval->stack[((hsi*28+1251)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1251)*1+lsi)*1]), &(inteval->stack[((hsi*21+1279)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1251)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1170)*1+lsi)*1]), &(inteval->stack[((hsi*36+1215)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11401)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+5140)*1+lsi)*1]), &(inteval->stack[((hsi*168+11401)*1+lsi)*1]), &(inteval->stack[((hsi*126+1251)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+1085)*1+lsi)*1]), &(inteval->stack[((hsi*28+1121)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+1121)*1+lsi)*1]), &(inteval->stack[((hsi*21+1149)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+1121)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+1040)*1+lsi)*1]), &(inteval->stack[((hsi*36+1085)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11569)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4930)*1+lsi)*1]), &(inteval->stack[((hsi*168+11569)*1+lsi)*1]), &(inteval->stack[((hsi*126+1121)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+955)*1+lsi)*1]), &(inteval->stack[((hsi*28+991)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+991)*1+lsi)*1]), &(inteval->stack[((hsi*21+1019)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+991)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+910)*1+lsi)*1]), &(inteval->stack[((hsi*36+955)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11737)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4720)*1+lsi)*1]), &(inteval->stack[((hsi*168+11737)*1+lsi)*1]), &(inteval->stack[((hsi*126+991)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+825)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+861)*1+lsi)*1]), &(inteval->stack[((hsi*21+889)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+861)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+780)*1+lsi)*1]), &(inteval->stack[((hsi*36+825)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11905)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4510)*1+lsi)*1]), &(inteval->stack[((hsi*168+11905)*1+lsi)*1]), &(inteval->stack[((hsi*126+861)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+695)*1+lsi)*1]), &(inteval->stack[((hsi*28+731)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+731)*1+lsi)*1]), &(inteval->stack[((hsi*21+759)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+731)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+650)*1+lsi)*1]), &(inteval->stack[((hsi*36+695)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12073)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4300)*1+lsi)*1]), &(inteval->stack[((hsi*168+12073)*1+lsi)*1]), &(inteval->stack[((hsi*126+731)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+565)*1+lsi)*1]), &(inteval->stack[((hsi*28+601)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+601)*1+lsi)*1]), &(inteval->stack[((hsi*21+629)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+601)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+520)*1+lsi)*1]), &(inteval->stack[((hsi*36+565)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12241)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+4090)*1+lsi)*1]), &(inteval->stack[((hsi*168+12241)*1+lsi)*1]), &(inteval->stack[((hsi*126+601)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+435)*1+lsi)*1]), &(inteval->stack[((hsi*28+471)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+471)*1+lsi)*1]), &(inteval->stack[((hsi*21+499)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+471)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+390)*1+lsi)*1]), &(inteval->stack[((hsi*36+435)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12409)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3880)*1+lsi)*1]), &(inteval->stack[((hsi*168+12409)*1+lsi)*1]), &(inteval->stack[((hsi*126+471)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+305)*1+lsi)*1]), &(inteval->stack[((hsi*28+341)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+341)*1+lsi)*1]), &(inteval->stack[((hsi*21+369)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+341)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+260)*1+lsi)*1]), &(inteval->stack[((hsi*36+305)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12577)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3670)*1+lsi)*1]), &(inteval->stack[((hsi*168+12577)*1+lsi)*1]), &(inteval->stack[((hsi*126+341)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+175)*1+lsi)*1]), &(inteval->stack[((hsi*28+211)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+211)*1+lsi)*1]), &(inteval->stack[((hsi*21+239)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+211)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+130)*1+lsi)*1]), &(inteval->stack[((hsi*36+175)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12745)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3460)*1+lsi)*1]), &(inteval->stack[((hsi*168+12745)*1+lsi)*1]), &(inteval->stack[((hsi*126+211)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+8584)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+81)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]), &(inteval->stack[((hsi*63+8584)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12913)*1+lsi)*1]), &(inteval->stack[((hsi*108+8773)*1+lsi)*1]), &(inteval->stack[((hsi*84+8500)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3250)*1+lsi)*1]), &(inteval->stack[((hsi*168+12913)*1+lsi)*1]), &(inteval->stack[((hsi*126+81)*1+lsi)*1]),1);
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
