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
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <_sphemultipole_I_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_I_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3991)*1+lsi)*1]), &(inteval->stack[((hsi*36+4036)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+4036)*1+lsi)*1]), &(inteval->stack[((hsi*28+4072)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+11292)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+3936)*1+lsi)*1]), &(inteval->stack[((hsi*45+3991)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+11595)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10820)*1+lsi)*1]), &(inteval->stack[((hsi*216+11595)*1+lsi)*1]), &(inteval->stack[((hsi*168+11292)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3827)*1+lsi)*1]), &(inteval->stack[((hsi*36+3872)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3872)*1+lsi)*1]), &(inteval->stack[((hsi*28+3908)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3872)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+3772)*1+lsi)*1]), &(inteval->stack[((hsi*45+3827)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+11811)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10540)*1+lsi)*1]), &(inteval->stack[((hsi*216+11811)*1+lsi)*1]), &(inteval->stack[((hsi*168+3872)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3663)*1+lsi)*1]), &(inteval->stack[((hsi*36+3708)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3708)*1+lsi)*1]), &(inteval->stack[((hsi*28+3744)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12027)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+3608)*1+lsi)*1]), &(inteval->stack[((hsi*45+3663)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+3608)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+10260)*1+lsi)*1]), &(inteval->stack[((hsi*216+3608)*1+lsi)*1]), &(inteval->stack[((hsi*168+12027)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3499)*1+lsi)*1]), &(inteval->stack[((hsi*36+3544)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3544)*1+lsi)*1]), &(inteval->stack[((hsi*28+3580)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12195)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+3444)*1+lsi)*1]), &(inteval->stack[((hsi*45+3499)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+12363)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9980)*1+lsi)*1]), &(inteval->stack[((hsi*216+12363)*1+lsi)*1]), &(inteval->stack[((hsi*168+12195)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3335)*1+lsi)*1]), &(inteval->stack[((hsi*36+3380)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3380)*1+lsi)*1]), &(inteval->stack[((hsi*28+3416)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+3380)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+3280)*1+lsi)*1]), &(inteval->stack[((hsi*45+3335)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+12579)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9700)*1+lsi)*1]), &(inteval->stack[((hsi*216+12579)*1+lsi)*1]), &(inteval->stack[((hsi*168+3380)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3171)*1+lsi)*1]), &(inteval->stack[((hsi*36+3216)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3216)*1+lsi)*1]), &(inteval->stack[((hsi*28+3252)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12795)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+3116)*1+lsi)*1]), &(inteval->stack[((hsi*45+3171)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+3116)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9420)*1+lsi)*1]), &(inteval->stack[((hsi*216+3116)*1+lsi)*1]), &(inteval->stack[((hsi*168+12795)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+3007)*1+lsi)*1]), &(inteval->stack[((hsi*36+3052)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+3052)*1+lsi)*1]), &(inteval->stack[((hsi*28+3088)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+12963)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+2952)*1+lsi)*1]), &(inteval->stack[((hsi*45+3007)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+13131)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+9140)*1+lsi)*1]), &(inteval->stack[((hsi*216+13131)*1+lsi)*1]), &(inteval->stack[((hsi*168+12963)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2843)*1+lsi)*1]), &(inteval->stack[((hsi*36+2888)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2888)*1+lsi)*1]), &(inteval->stack[((hsi*28+2924)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+2888)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+2788)*1+lsi)*1]), &(inteval->stack[((hsi*45+2843)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+13347)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8860)*1+lsi)*1]), &(inteval->stack[((hsi*216+13347)*1+lsi)*1]), &(inteval->stack[((hsi*168+2888)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2679)*1+lsi)*1]), &(inteval->stack[((hsi*36+2724)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2724)*1+lsi)*1]), &(inteval->stack[((hsi*28+2760)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+13563)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+2624)*1+lsi)*1]), &(inteval->stack[((hsi*45+2679)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2624)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8580)*1+lsi)*1]), &(inteval->stack[((hsi*216+2624)*1+lsi)*1]), &(inteval->stack[((hsi*168+13563)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2515)*1+lsi)*1]), &(inteval->stack[((hsi*36+2560)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2560)*1+lsi)*1]), &(inteval->stack[((hsi*28+2596)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+13731)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+2460)*1+lsi)*1]), &(inteval->stack[((hsi*45+2515)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+13899)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8300)*1+lsi)*1]), &(inteval->stack[((hsi*216+13899)*1+lsi)*1]), &(inteval->stack[((hsi*168+13731)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2351)*1+lsi)*1]), &(inteval->stack[((hsi*36+2396)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2396)*1+lsi)*1]), &(inteval->stack[((hsi*28+2432)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+2396)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+2296)*1+lsi)*1]), &(inteval->stack[((hsi*45+2351)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14115)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+8020)*1+lsi)*1]), &(inteval->stack[((hsi*216+14115)*1+lsi)*1]), &(inteval->stack[((hsi*168+2396)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2187)*1+lsi)*1]), &(inteval->stack[((hsi*36+2232)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2232)*1+lsi)*1]), &(inteval->stack[((hsi*28+2268)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+14331)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+2132)*1+lsi)*1]), &(inteval->stack[((hsi*45+2187)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2132)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7740)*1+lsi)*1]), &(inteval->stack[((hsi*216+2132)*1+lsi)*1]), &(inteval->stack[((hsi*168+14331)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+2023)*1+lsi)*1]), &(inteval->stack[((hsi*36+2068)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+2068)*1+lsi)*1]), &(inteval->stack[((hsi*28+2104)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+14499)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1968)*1+lsi)*1]), &(inteval->stack[((hsi*45+2023)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14667)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7460)*1+lsi)*1]), &(inteval->stack[((hsi*216+14667)*1+lsi)*1]), &(inteval->stack[((hsi*168+14499)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1859)*1+lsi)*1]), &(inteval->stack[((hsi*36+1904)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1904)*1+lsi)*1]), &(inteval->stack[((hsi*28+1940)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1904)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1804)*1+lsi)*1]), &(inteval->stack[((hsi*45+1859)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14883)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+7180)*1+lsi)*1]), &(inteval->stack[((hsi*216+14883)*1+lsi)*1]), &(inteval->stack[((hsi*168+1904)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1695)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1740)*1+lsi)*1]), &(inteval->stack[((hsi*28+1776)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15099)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1640)*1+lsi)*1]), &(inteval->stack[((hsi*45+1695)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1640)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6900)*1+lsi)*1]), &(inteval->stack[((hsi*216+1640)*1+lsi)*1]), &(inteval->stack[((hsi*168+15099)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1531)*1+lsi)*1]), &(inteval->stack[((hsi*36+1576)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1576)*1+lsi)*1]), &(inteval->stack[((hsi*28+1612)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15267)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1476)*1+lsi)*1]), &(inteval->stack[((hsi*45+1531)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15435)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6620)*1+lsi)*1]), &(inteval->stack[((hsi*216+15435)*1+lsi)*1]), &(inteval->stack[((hsi*168+15267)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1367)*1+lsi)*1]), &(inteval->stack[((hsi*36+1412)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1412)*1+lsi)*1]), &(inteval->stack[((hsi*28+1448)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1412)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1312)*1+lsi)*1]), &(inteval->stack[((hsi*45+1367)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15651)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6340)*1+lsi)*1]), &(inteval->stack[((hsi*216+15651)*1+lsi)*1]), &(inteval->stack[((hsi*168+1412)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1203)*1+lsi)*1]), &(inteval->stack[((hsi*36+1248)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1248)*1+lsi)*1]), &(inteval->stack[((hsi*28+1284)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+15867)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+1148)*1+lsi)*1]), &(inteval->stack[((hsi*45+1203)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1148)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+6060)*1+lsi)*1]), &(inteval->stack[((hsi*216+1148)*1+lsi)*1]), &(inteval->stack[((hsi*168+15867)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1039)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]), &(inteval->stack[((hsi*28+1120)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16035)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+984)*1+lsi)*1]), &(inteval->stack[((hsi*45+1039)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16203)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+5780)*1+lsi)*1]), &(inteval->stack[((hsi*216+16203)*1+lsi)*1]), &(inteval->stack[((hsi*168+16035)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+875)*1+lsi)*1]), &(inteval->stack[((hsi*36+920)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+920)*1+lsi)*1]), &(inteval->stack[((hsi*28+956)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+920)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+820)*1+lsi)*1]), &(inteval->stack[((hsi*45+875)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16419)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+5500)*1+lsi)*1]), &(inteval->stack[((hsi*216+16419)*1+lsi)*1]), &(inteval->stack[((hsi*168+920)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+711)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]), &(inteval->stack[((hsi*28+792)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16635)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+656)*1+lsi)*1]), &(inteval->stack[((hsi*45+711)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+656)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+5220)*1+lsi)*1]), &(inteval->stack[((hsi*216+656)*1+lsi)*1]), &(inteval->stack[((hsi*168+16635)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+547)*1+lsi)*1]), &(inteval->stack[((hsi*36+592)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+592)*1+lsi)*1]), &(inteval->stack[((hsi*28+628)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+16803)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+492)*1+lsi)*1]), &(inteval->stack[((hsi*45+547)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16971)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+4940)*1+lsi)*1]), &(inteval->stack[((hsi*216+16971)*1+lsi)*1]), &(inteval->stack[((hsi*168+16803)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+383)*1+lsi)*1]), &(inteval->stack[((hsi*36+428)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+428)*1+lsi)*1]), &(inteval->stack[((hsi*28+464)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+428)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+328)*1+lsi)*1]), &(inteval->stack[((hsi*45+383)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17187)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+4660)*1+lsi)*1]), &(inteval->stack[((hsi*216+17187)*1+lsi)*1]), &(inteval->stack[((hsi*168+428)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+219)*1+lsi)*1]), &(inteval->stack[((hsi*36+264)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+264)*1+lsi)*1]), &(inteval->stack[((hsi*28+300)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+17403)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+164)*1+lsi)*1]), &(inteval->stack[((hsi*45+219)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+164)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+4380)*1+lsi)*1]), &(inteval->stack[((hsi*216+164)*1+lsi)*1]), &(inteval->stack[((hsi*168+17403)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+11208)*1+lsi)*1]), &(inteval->stack[((hsi*36+100)*1+lsi)*1]), &(inteval->stack[((hsi*28+136)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+17571)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]), &(inteval->stack[((hsi*84+11208)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*55+0)*1+lsi)*1]), &(inteval->stack[((hsi*45+55)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17739)*1+lsi)*1]), &(inteval->stack[((hsi*135+11460)*1+lsi)*1]), &(inteval->stack[((hsi*108+11100)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+4100)*1+lsi)*1]), &(inteval->stack[((hsi*216+17739)*1+lsi)*1]), &(inteval->stack[((hsi*168+17571)*1+lsi)*1]),1);
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
