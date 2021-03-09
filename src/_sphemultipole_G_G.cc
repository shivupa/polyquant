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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gg.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <_sphemultipole_G_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_G_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3625)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_G_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+3561)*1+lsi)*1]), &(inteval->stack[((hsi*21+3589)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+3525)*1+lsi)*1]), &(inteval->stack[((hsi*28+3561)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+3589)*1+lsi)*1]), &(inteval->stack[((hsi*15+3610)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+9658)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+3480)*1+lsi)*1]), &(inteval->stack[((hsi*36+3525)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+9808)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+9976)*1+lsi)*1]), &(inteval->stack[((hsi*168+9808)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+9025)*1+lsi)*1]), &(inteval->stack[((hsi*210+9976)*1+lsi)*1]), &(inteval->stack[((hsi*150+9658)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+3416)*1+lsi)*1]), &(inteval->stack[((hsi*21+3444)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+3380)*1+lsi)*1]), &(inteval->stack[((hsi*28+3416)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9808)*1+lsi)*1]), &(inteval->stack[((hsi*21+3444)*1+lsi)*1]), &(inteval->stack[((hsi*15+3465)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3416)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9808)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+9808)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+3416)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3416)*1+lsi)*1]), &(inteval->stack[((hsi*45+3335)*1+lsi)*1]), &(inteval->stack[((hsi*36+3380)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10186)*1+lsi)*1]), &(inteval->stack[((hsi*108+3416)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3335)*1+lsi)*1]), &(inteval->stack[((hsi*168+10186)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+8800)*1+lsi)*1]), &(inteval->stack[((hsi*210+3335)*1+lsi)*1]), &(inteval->stack[((hsi*150+9808)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+3271)*1+lsi)*1]), &(inteval->stack[((hsi*21+3299)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+3235)*1+lsi)*1]), &(inteval->stack[((hsi*28+3271)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+3299)*1+lsi)*1]), &(inteval->stack[((hsi*15+3320)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+10186)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+3190)*1+lsi)*1]), &(inteval->stack[((hsi*36+3235)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10336)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+10504)*1+lsi)*1]), &(inteval->stack[((hsi*168+10336)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+8575)*1+lsi)*1]), &(inteval->stack[((hsi*210+10504)*1+lsi)*1]), &(inteval->stack[((hsi*150+10186)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+3126)*1+lsi)*1]), &(inteval->stack[((hsi*21+3154)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+3090)*1+lsi)*1]), &(inteval->stack[((hsi*28+3126)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+10336)*1+lsi)*1]), &(inteval->stack[((hsi*21+3154)*1+lsi)*1]), &(inteval->stack[((hsi*15+3175)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+3126)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+10336)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+10336)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+3126)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3126)*1+lsi)*1]), &(inteval->stack[((hsi*45+3045)*1+lsi)*1]), &(inteval->stack[((hsi*36+3090)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10714)*1+lsi)*1]), &(inteval->stack[((hsi*108+3126)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+3045)*1+lsi)*1]), &(inteval->stack[((hsi*168+10714)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+8350)*1+lsi)*1]), &(inteval->stack[((hsi*210+3045)*1+lsi)*1]), &(inteval->stack[((hsi*150+10336)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2981)*1+lsi)*1]), &(inteval->stack[((hsi*21+3009)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2945)*1+lsi)*1]), &(inteval->stack[((hsi*28+2981)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+3009)*1+lsi)*1]), &(inteval->stack[((hsi*15+3030)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+10714)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2900)*1+lsi)*1]), &(inteval->stack[((hsi*36+2945)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+10864)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+11032)*1+lsi)*1]), &(inteval->stack[((hsi*168+10864)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+8125)*1+lsi)*1]), &(inteval->stack[((hsi*210+11032)*1+lsi)*1]), &(inteval->stack[((hsi*150+10714)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2836)*1+lsi)*1]), &(inteval->stack[((hsi*21+2864)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2800)*1+lsi)*1]), &(inteval->stack[((hsi*28+2836)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+10864)*1+lsi)*1]), &(inteval->stack[((hsi*21+2864)*1+lsi)*1]), &(inteval->stack[((hsi*15+2885)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2836)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+10864)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+10864)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+2836)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+2836)*1+lsi)*1]), &(inteval->stack[((hsi*45+2755)*1+lsi)*1]), &(inteval->stack[((hsi*36+2800)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11242)*1+lsi)*1]), &(inteval->stack[((hsi*108+2836)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2755)*1+lsi)*1]), &(inteval->stack[((hsi*168+11242)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+7900)*1+lsi)*1]), &(inteval->stack[((hsi*210+2755)*1+lsi)*1]), &(inteval->stack[((hsi*150+10864)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2691)*1+lsi)*1]), &(inteval->stack[((hsi*21+2719)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2655)*1+lsi)*1]), &(inteval->stack[((hsi*28+2691)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+2719)*1+lsi)*1]), &(inteval->stack[((hsi*15+2740)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+11242)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2610)*1+lsi)*1]), &(inteval->stack[((hsi*36+2655)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11392)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+11560)*1+lsi)*1]), &(inteval->stack[((hsi*168+11392)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+7675)*1+lsi)*1]), &(inteval->stack[((hsi*210+11560)*1+lsi)*1]), &(inteval->stack[((hsi*150+11242)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2546)*1+lsi)*1]), &(inteval->stack[((hsi*21+2574)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2510)*1+lsi)*1]), &(inteval->stack[((hsi*28+2546)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+11392)*1+lsi)*1]), &(inteval->stack[((hsi*21+2574)*1+lsi)*1]), &(inteval->stack[((hsi*15+2595)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2546)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+11392)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+11392)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+2546)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+2546)*1+lsi)*1]), &(inteval->stack[((hsi*45+2465)*1+lsi)*1]), &(inteval->stack[((hsi*36+2510)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11770)*1+lsi)*1]), &(inteval->stack[((hsi*108+2546)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2465)*1+lsi)*1]), &(inteval->stack[((hsi*168+11770)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+7450)*1+lsi)*1]), &(inteval->stack[((hsi*210+2465)*1+lsi)*1]), &(inteval->stack[((hsi*150+11392)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2401)*1+lsi)*1]), &(inteval->stack[((hsi*21+2429)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2365)*1+lsi)*1]), &(inteval->stack[((hsi*28+2401)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+2429)*1+lsi)*1]), &(inteval->stack[((hsi*15+2450)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+11770)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2320)*1+lsi)*1]), &(inteval->stack[((hsi*36+2365)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11920)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+12088)*1+lsi)*1]), &(inteval->stack[((hsi*168+11920)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+7225)*1+lsi)*1]), &(inteval->stack[((hsi*210+12088)*1+lsi)*1]), &(inteval->stack[((hsi*150+11770)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2256)*1+lsi)*1]), &(inteval->stack[((hsi*21+2284)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2220)*1+lsi)*1]), &(inteval->stack[((hsi*28+2256)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+11920)*1+lsi)*1]), &(inteval->stack[((hsi*21+2284)*1+lsi)*1]), &(inteval->stack[((hsi*15+2305)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+2256)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+11920)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+11920)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+2256)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+2256)*1+lsi)*1]), &(inteval->stack[((hsi*45+2175)*1+lsi)*1]), &(inteval->stack[((hsi*36+2220)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12298)*1+lsi)*1]), &(inteval->stack[((hsi*108+2256)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+2175)*1+lsi)*1]), &(inteval->stack[((hsi*168+12298)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+7000)*1+lsi)*1]), &(inteval->stack[((hsi*210+2175)*1+lsi)*1]), &(inteval->stack[((hsi*150+11920)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+2111)*1+lsi)*1]), &(inteval->stack[((hsi*21+2139)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+2075)*1+lsi)*1]), &(inteval->stack[((hsi*28+2111)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+2139)*1+lsi)*1]), &(inteval->stack[((hsi*15+2160)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+12298)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+2030)*1+lsi)*1]), &(inteval->stack[((hsi*36+2075)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12448)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+12616)*1+lsi)*1]), &(inteval->stack[((hsi*168+12448)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+6775)*1+lsi)*1]), &(inteval->stack[((hsi*210+12616)*1+lsi)*1]), &(inteval->stack[((hsi*150+12298)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1966)*1+lsi)*1]), &(inteval->stack[((hsi*21+1994)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1930)*1+lsi)*1]), &(inteval->stack[((hsi*28+1966)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+12448)*1+lsi)*1]), &(inteval->stack[((hsi*21+1994)*1+lsi)*1]), &(inteval->stack[((hsi*15+2015)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1966)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+12448)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+12448)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+1966)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1966)*1+lsi)*1]), &(inteval->stack[((hsi*45+1885)*1+lsi)*1]), &(inteval->stack[((hsi*36+1930)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12826)*1+lsi)*1]), &(inteval->stack[((hsi*108+1966)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1885)*1+lsi)*1]), &(inteval->stack[((hsi*168+12826)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+6550)*1+lsi)*1]), &(inteval->stack[((hsi*210+1885)*1+lsi)*1]), &(inteval->stack[((hsi*150+12448)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1821)*1+lsi)*1]), &(inteval->stack[((hsi*21+1849)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1785)*1+lsi)*1]), &(inteval->stack[((hsi*28+1821)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+1849)*1+lsi)*1]), &(inteval->stack[((hsi*15+1870)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+12826)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+1740)*1+lsi)*1]), &(inteval->stack[((hsi*36+1785)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12976)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+13144)*1+lsi)*1]), &(inteval->stack[((hsi*168+12976)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+6325)*1+lsi)*1]), &(inteval->stack[((hsi*210+13144)*1+lsi)*1]), &(inteval->stack[((hsi*150+12826)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1676)*1+lsi)*1]), &(inteval->stack[((hsi*21+1704)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1640)*1+lsi)*1]), &(inteval->stack[((hsi*28+1676)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+12976)*1+lsi)*1]), &(inteval->stack[((hsi*21+1704)*1+lsi)*1]), &(inteval->stack[((hsi*15+1725)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1676)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+12976)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+12976)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+1676)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1676)*1+lsi)*1]), &(inteval->stack[((hsi*45+1595)*1+lsi)*1]), &(inteval->stack[((hsi*36+1640)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+13354)*1+lsi)*1]), &(inteval->stack[((hsi*108+1676)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1595)*1+lsi)*1]), &(inteval->stack[((hsi*168+13354)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+6100)*1+lsi)*1]), &(inteval->stack[((hsi*210+1595)*1+lsi)*1]), &(inteval->stack[((hsi*150+12976)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1531)*1+lsi)*1]), &(inteval->stack[((hsi*21+1559)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1495)*1+lsi)*1]), &(inteval->stack[((hsi*28+1531)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+1559)*1+lsi)*1]), &(inteval->stack[((hsi*15+1580)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+13354)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+1450)*1+lsi)*1]), &(inteval->stack[((hsi*36+1495)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+13504)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+13672)*1+lsi)*1]), &(inteval->stack[((hsi*168+13504)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+5875)*1+lsi)*1]), &(inteval->stack[((hsi*210+13672)*1+lsi)*1]), &(inteval->stack[((hsi*150+13354)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1386)*1+lsi)*1]), &(inteval->stack[((hsi*21+1414)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1350)*1+lsi)*1]), &(inteval->stack[((hsi*28+1386)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+13504)*1+lsi)*1]), &(inteval->stack[((hsi*21+1414)*1+lsi)*1]), &(inteval->stack[((hsi*15+1435)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1386)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+13504)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+13504)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+1386)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1386)*1+lsi)*1]), &(inteval->stack[((hsi*45+1305)*1+lsi)*1]), &(inteval->stack[((hsi*36+1350)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+13882)*1+lsi)*1]), &(inteval->stack[((hsi*108+1386)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1305)*1+lsi)*1]), &(inteval->stack[((hsi*168+13882)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+5650)*1+lsi)*1]), &(inteval->stack[((hsi*210+1305)*1+lsi)*1]), &(inteval->stack[((hsi*150+13504)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1241)*1+lsi)*1]), &(inteval->stack[((hsi*21+1269)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]), &(inteval->stack[((hsi*28+1241)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+1269)*1+lsi)*1]), &(inteval->stack[((hsi*15+1290)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+13882)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+1160)*1+lsi)*1]), &(inteval->stack[((hsi*36+1205)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+14032)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+14200)*1+lsi)*1]), &(inteval->stack[((hsi*168+14032)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+5425)*1+lsi)*1]), &(inteval->stack[((hsi*210+14200)*1+lsi)*1]), &(inteval->stack[((hsi*150+13882)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]), &(inteval->stack[((hsi*21+1124)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+1060)*1+lsi)*1]), &(inteval->stack[((hsi*28+1096)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+14032)*1+lsi)*1]), &(inteval->stack[((hsi*21+1124)*1+lsi)*1]), &(inteval->stack[((hsi*15+1145)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+1096)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+14032)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+14032)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+1096)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1096)*1+lsi)*1]), &(inteval->stack[((hsi*45+1015)*1+lsi)*1]), &(inteval->stack[((hsi*36+1060)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+14410)*1+lsi)*1]), &(inteval->stack[((hsi*108+1096)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+1015)*1+lsi)*1]), &(inteval->stack[((hsi*168+14410)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+5200)*1+lsi)*1]), &(inteval->stack[((hsi*210+1015)*1+lsi)*1]), &(inteval->stack[((hsi*150+14032)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+951)*1+lsi)*1]), &(inteval->stack[((hsi*21+979)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+915)*1+lsi)*1]), &(inteval->stack[((hsi*28+951)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+979)*1+lsi)*1]), &(inteval->stack[((hsi*15+1000)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+14410)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+870)*1+lsi)*1]), &(inteval->stack[((hsi*36+915)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+14560)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+14728)*1+lsi)*1]), &(inteval->stack[((hsi*168+14560)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+4975)*1+lsi)*1]), &(inteval->stack[((hsi*210+14728)*1+lsi)*1]), &(inteval->stack[((hsi*150+14410)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+806)*1+lsi)*1]), &(inteval->stack[((hsi*21+834)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+770)*1+lsi)*1]), &(inteval->stack[((hsi*28+806)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+14560)*1+lsi)*1]), &(inteval->stack[((hsi*21+834)*1+lsi)*1]), &(inteval->stack[((hsi*15+855)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+806)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+14560)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+14560)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+806)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+806)*1+lsi)*1]), &(inteval->stack[((hsi*45+725)*1+lsi)*1]), &(inteval->stack[((hsi*36+770)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+14938)*1+lsi)*1]), &(inteval->stack[((hsi*108+806)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+725)*1+lsi)*1]), &(inteval->stack[((hsi*168+14938)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+4750)*1+lsi)*1]), &(inteval->stack[((hsi*210+725)*1+lsi)*1]), &(inteval->stack[((hsi*150+14560)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+661)*1+lsi)*1]), &(inteval->stack[((hsi*21+689)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+625)*1+lsi)*1]), &(inteval->stack[((hsi*28+661)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+689)*1+lsi)*1]), &(inteval->stack[((hsi*15+710)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+14938)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+580)*1+lsi)*1]), &(inteval->stack[((hsi*36+625)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15088)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+15256)*1+lsi)*1]), &(inteval->stack[((hsi*168+15088)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+4525)*1+lsi)*1]), &(inteval->stack[((hsi*210+15256)*1+lsi)*1]), &(inteval->stack[((hsi*150+14938)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+516)*1+lsi)*1]), &(inteval->stack[((hsi*21+544)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+480)*1+lsi)*1]), &(inteval->stack[((hsi*28+516)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+15088)*1+lsi)*1]), &(inteval->stack[((hsi*21+544)*1+lsi)*1]), &(inteval->stack[((hsi*15+565)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+516)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+15088)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+15088)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+516)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+516)*1+lsi)*1]), &(inteval->stack[((hsi*45+435)*1+lsi)*1]), &(inteval->stack[((hsi*36+480)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15466)*1+lsi)*1]), &(inteval->stack[((hsi*108+516)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+435)*1+lsi)*1]), &(inteval->stack[((hsi*168+15466)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+4300)*1+lsi)*1]), &(inteval->stack[((hsi*210+435)*1+lsi)*1]), &(inteval->stack[((hsi*150+15088)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+399)*1+lsi)*1]), &(inteval->stack[((hsi*15+420)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+15466)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15616)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+15784)*1+lsi)*1]), &(inteval->stack[((hsi*168+15616)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+4075)*1+lsi)*1]), &(inteval->stack[((hsi*210+15784)*1+lsi)*1]), &(inteval->stack[((hsi*150+15466)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+226)*1+lsi)*1]), &(inteval->stack[((hsi*21+254)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+190)*1+lsi)*1]), &(inteval->stack[((hsi*28+226)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+15616)*1+lsi)*1]), &(inteval->stack[((hsi*21+254)*1+lsi)*1]), &(inteval->stack[((hsi*15+275)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+226)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+15616)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+15616)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+226)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+226)*1+lsi)*1]), &(inteval->stack[((hsi*45+145)*1+lsi)*1]), &(inteval->stack[((hsi*36+190)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15994)*1+lsi)*1]), &(inteval->stack[((hsi*108+226)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+145)*1+lsi)*1]), &(inteval->stack[((hsi*168+15994)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+3850)*1+lsi)*1]), &(inteval->stack[((hsi*210+145)*1+lsi)*1]), &(inteval->stack[((hsi*150+15616)*1+lsi)*1]),1);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]), &(inteval->stack[((hsi*28+81)*1+lsi)*1]),1);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]),1);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*45+9523)*1+lsi)*1]), &(inteval->stack[((hsi*21+109)*1+lsi)*1]), &(inteval->stack[((hsi*15+130)*1+lsi)*1]),1);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*90+9568)*1+lsi)*1]), &(inteval->stack[((hsi*63+9250)*1+lsi)*1]), &(inteval->stack[((hsi*45+9523)*1+lsi)*1]),1);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*150+15994)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]), &(inteval->stack[((hsi*90+9568)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*45+0)*1+lsi)*1]), &(inteval->stack[((hsi*36+45)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16144)*1+lsi)*1]), &(inteval->stack[((hsi*108+9523)*1+lsi)*1]), &(inteval->stack[((hsi*84+9313)*1+lsi)*1]),1);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*210+16312)*1+lsi)*1]), &(inteval->stack[((hsi*168+16144)*1+lsi)*1]), &(inteval->stack[((hsi*126+9397)*1+lsi)*1]),1);
HRRPart0bra0ket0gg(inteval, &(inteval->stack[((hsi*225+3625)*1+lsi)*1]), &(inteval->stack[((hsi*210+16312)*1+lsi)*1]), &(inteval->stack[((hsi*150+15994)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*225+3625)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*225+3850)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*225+4075)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*225+4300)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*225+4525)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*225+4750)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*225+4975)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*225+5200)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*225+5425)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*225+5650)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*225+5875)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*225+6100)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*225+6325)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*225+6550)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*225+6775)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*225+7000)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*225+7225)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*225+7450)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*225+7675)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*225+7900)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*225+8125)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*225+8350)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*225+8575)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*225+8800)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*225+9025)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
