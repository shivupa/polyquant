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
#include <HRRPart0ket0bra0id.h>
#include <HRRPart0ket0bra0if.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0lp.h>
#include <_sphemultipole_F_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_F_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_F_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3991)*1+lsi)*1]), &(inteval->stack[((hsi*36+4036)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+4036)*1+lsi)*1]), &(inteval->stack[((hsi*28+4072)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+11292)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1320)*1+lsi)*1]), &(inteval->stack[((hsi*45+3991)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+11595)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+10820)*1+lsi)*1]), &(inteval->stack[((hsi*216+11595)*1+lsi)*1]), &(inteval->stack[((hsi*168+11292)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3882)*1+lsi)*1]), &(inteval->stack[((hsi*36+3927)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3927)*1+lsi)*1]), &(inteval->stack[((hsi*28+3963)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3927)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1265)*1+lsi)*1]), &(inteval->stack[((hsi*45+3882)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+11811)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+10540)*1+lsi)*1]), &(inteval->stack[((hsi*216+11811)*1+lsi)*1]), &(inteval->stack[((hsi*168+3927)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3773)*1+lsi)*1]), &(inteval->stack[((hsi*36+3818)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3818)*1+lsi)*1]), &(inteval->stack[((hsi*28+3854)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12027)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1210)*1+lsi)*1]), &(inteval->stack[((hsi*45+3773)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+12195)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+10260)*1+lsi)*1]), &(inteval->stack[((hsi*216+12195)*1+lsi)*1]), &(inteval->stack[((hsi*168+12027)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3664)*1+lsi)*1]), &(inteval->stack[((hsi*36+3709)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3709)*1+lsi)*1]), &(inteval->stack[((hsi*28+3745)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3709)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1155)*1+lsi)*1]), &(inteval->stack[((hsi*45+3664)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+1155)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+9980)*1+lsi)*1]), &(inteval->stack[((hsi*216+1155)*1+lsi)*1]), &(inteval->stack[((hsi*168+3709)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3555)*1+lsi)*1]), &(inteval->stack[((hsi*36+3600)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3600)*1+lsi)*1]), &(inteval->stack[((hsi*28+3636)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+12411)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3555)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+12579)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+9700)*1+lsi)*1]), &(inteval->stack[((hsi*216+12579)*1+lsi)*1]), &(inteval->stack[((hsi*168+12411)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3446)*1+lsi)*1]), &(inteval->stack[((hsi*36+3491)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3491)*1+lsi)*1]), &(inteval->stack[((hsi*28+3527)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3491)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1045)*1+lsi)*1]), &(inteval->stack[((hsi*45+3446)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+12795)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+9420)*1+lsi)*1]), &(inteval->stack[((hsi*216+12795)*1+lsi)*1]), &(inteval->stack[((hsi*168+3491)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3337)*1+lsi)*1]), &(inteval->stack[((hsi*36+3382)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3382)*1+lsi)*1]), &(inteval->stack[((hsi*28+3418)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+13011)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+990)*1+lsi)*1]), &(inteval->stack[((hsi*45+3337)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13179)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+9140)*1+lsi)*1]), &(inteval->stack[((hsi*216+13179)*1+lsi)*1]), &(inteval->stack[((hsi*168+13011)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3228)*1+lsi)*1]), &(inteval->stack[((hsi*36+3273)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3273)*1+lsi)*1]), &(inteval->stack[((hsi*28+3309)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3273)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+935)*1+lsi)*1]), &(inteval->stack[((hsi*45+3228)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+935)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+8860)*1+lsi)*1]), &(inteval->stack[((hsi*216+935)*1+lsi)*1]), &(inteval->stack[((hsi*168+3273)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3119)*1+lsi)*1]), &(inteval->stack[((hsi*36+3164)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3164)*1+lsi)*1]), &(inteval->stack[((hsi*28+3200)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+13395)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+880)*1+lsi)*1]), &(inteval->stack[((hsi*45+3119)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13563)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+8580)*1+lsi)*1]), &(inteval->stack[((hsi*216+13563)*1+lsi)*1]), &(inteval->stack[((hsi*168+13395)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3010)*1+lsi)*1]), &(inteval->stack[((hsi*36+3055)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3055)*1+lsi)*1]), &(inteval->stack[((hsi*28+3091)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+3055)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+825)*1+lsi)*1]), &(inteval->stack[((hsi*45+3010)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+13779)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+8300)*1+lsi)*1]), &(inteval->stack[((hsi*216+13779)*1+lsi)*1]), &(inteval->stack[((hsi*168+3055)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2901)*1+lsi)*1]), &(inteval->stack[((hsi*36+2946)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2946)*1+lsi)*1]), &(inteval->stack[((hsi*28+2982)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+13995)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+770)*1+lsi)*1]), &(inteval->stack[((hsi*45+2901)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14163)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+8020)*1+lsi)*1]), &(inteval->stack[((hsi*216+14163)*1+lsi)*1]), &(inteval->stack[((hsi*168+13995)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2792)*1+lsi)*1]), &(inteval->stack[((hsi*36+2837)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2837)*1+lsi)*1]), &(inteval->stack[((hsi*28+2873)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2837)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+715)*1+lsi)*1]), &(inteval->stack[((hsi*45+2792)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+715)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+7740)*1+lsi)*1]), &(inteval->stack[((hsi*216+715)*1+lsi)*1]), &(inteval->stack[((hsi*168+2837)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2683)*1+lsi)*1]), &(inteval->stack[((hsi*36+2728)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2728)*1+lsi)*1]), &(inteval->stack[((hsi*28+2764)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+14379)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+660)*1+lsi)*1]), &(inteval->stack[((hsi*45+2683)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14547)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+7460)*1+lsi)*1]), &(inteval->stack[((hsi*216+14547)*1+lsi)*1]), &(inteval->stack[((hsi*168+14379)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2574)*1+lsi)*1]), &(inteval->stack[((hsi*36+2619)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2619)*1+lsi)*1]), &(inteval->stack[((hsi*28+2655)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2619)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+605)*1+lsi)*1]), &(inteval->stack[((hsi*45+2574)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+14763)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+7180)*1+lsi)*1]), &(inteval->stack[((hsi*216+14763)*1+lsi)*1]), &(inteval->stack[((hsi*168+2619)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2465)*1+lsi)*1]), &(inteval->stack[((hsi*36+2510)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2510)*1+lsi)*1]), &(inteval->stack[((hsi*28+2546)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+14979)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+550)*1+lsi)*1]), &(inteval->stack[((hsi*45+2465)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15147)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6900)*1+lsi)*1]), &(inteval->stack[((hsi*216+15147)*1+lsi)*1]), &(inteval->stack[((hsi*168+14979)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2356)*1+lsi)*1]), &(inteval->stack[((hsi*36+2401)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2401)*1+lsi)*1]), &(inteval->stack[((hsi*28+2437)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2401)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+495)*1+lsi)*1]), &(inteval->stack[((hsi*45+2356)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+495)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6620)*1+lsi)*1]), &(inteval->stack[((hsi*216+495)*1+lsi)*1]), &(inteval->stack[((hsi*168+2401)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2247)*1+lsi)*1]), &(inteval->stack[((hsi*36+2292)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2292)*1+lsi)*1]), &(inteval->stack[((hsi*28+2328)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15363)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+440)*1+lsi)*1]), &(inteval->stack[((hsi*45+2247)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15531)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6340)*1+lsi)*1]), &(inteval->stack[((hsi*216+15531)*1+lsi)*1]), &(inteval->stack[((hsi*168+15363)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2138)*1+lsi)*1]), &(inteval->stack[((hsi*36+2183)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2183)*1+lsi)*1]), &(inteval->stack[((hsi*28+2219)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2183)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+385)*1+lsi)*1]), &(inteval->stack[((hsi*45+2138)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+15747)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+6060)*1+lsi)*1]), &(inteval->stack[((hsi*216+15747)*1+lsi)*1]), &(inteval->stack[((hsi*168+2183)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2029)*1+lsi)*1]), &(inteval->stack[((hsi*36+2074)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2074)*1+lsi)*1]), &(inteval->stack[((hsi*28+2110)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+15963)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+330)*1+lsi)*1]), &(inteval->stack[((hsi*45+2029)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16131)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+5780)*1+lsi)*1]), &(inteval->stack[((hsi*216+16131)*1+lsi)*1]), &(inteval->stack[((hsi*168+15963)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]), &(inteval->stack[((hsi*36+1965)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1965)*1+lsi)*1]), &(inteval->stack[((hsi*28+2001)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1965)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+275)*1+lsi)*1]), &(inteval->stack[((hsi*45+1920)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+275)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+5500)*1+lsi)*1]), &(inteval->stack[((hsi*216+275)*1+lsi)*1]), &(inteval->stack[((hsi*168+1965)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1811)*1+lsi)*1]), &(inteval->stack[((hsi*36+1856)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1856)*1+lsi)*1]), &(inteval->stack[((hsi*28+1892)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16347)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+220)*1+lsi)*1]), &(inteval->stack[((hsi*45+1811)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16515)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+5220)*1+lsi)*1]), &(inteval->stack[((hsi*216+16515)*1+lsi)*1]), &(inteval->stack[((hsi*168+16347)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1702)*1+lsi)*1]), &(inteval->stack[((hsi*36+1747)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1747)*1+lsi)*1]), &(inteval->stack[((hsi*28+1783)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1747)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+165)*1+lsi)*1]), &(inteval->stack[((hsi*45+1702)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+16731)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4940)*1+lsi)*1]), &(inteval->stack[((hsi*216+16731)*1+lsi)*1]), &(inteval->stack[((hsi*168+1747)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1593)*1+lsi)*1]), &(inteval->stack[((hsi*36+1638)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1638)*1+lsi)*1]), &(inteval->stack[((hsi*28+1674)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+16947)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+110)*1+lsi)*1]), &(inteval->stack[((hsi*45+1593)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17115)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4660)*1+lsi)*1]), &(inteval->stack[((hsi*216+17115)*1+lsi)*1]), &(inteval->stack[((hsi*168+16947)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1484)*1+lsi)*1]), &(inteval->stack[((hsi*36+1529)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1529)*1+lsi)*1]), &(inteval->stack[((hsi*28+1565)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+1529)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+55)*1+lsi)*1]), &(inteval->stack[((hsi*45+1484)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+55)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4380)*1+lsi)*1]), &(inteval->stack[((hsi*216+55)*1+lsi)*1]), &(inteval->stack[((hsi*168+1529)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1375)*1+lsi)*1]), &(inteval->stack[((hsi*36+1420)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1420)*1+lsi)*1]), &(inteval->stack[((hsi*28+1456)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+17331)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+1375)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+17499)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+4100)*1+lsi)*1]), &(inteval->stack[((hsi*216+17499)*1+lsi)*1]), &(inteval->stack[((hsi*168+17331)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*280+4100)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*280+4380)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*280+4660)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*280+4940)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*280+5220)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*280+5500)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*280+5780)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*280+6060)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*280+6340)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*280+6620)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*280+6900)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*280+7180)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*280+7460)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*280+7740)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*280+8020)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*280+8300)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*280+8580)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*280+8860)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*280+9140)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*280+9420)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*280+9700)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*280+9980)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*280+10260)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*280+10540)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*280+10820)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
