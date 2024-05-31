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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <_sphemultipole_K_F_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_K_F(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5050)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_K_F_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+4914)*1+lsi)*1]), &(inteval->stack[((hsi*45+4969)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+4969)*1+lsi)*1]), &(inteval->stack[((hsi*36+5014)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+14293)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+4848)*1+lsi)*1]), &(inteval->stack[((hsi*55+4914)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+14674)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+13690)*1+lsi)*1]), &(inteval->stack[((hsi*270+14674)*1+lsi)*1]), &(inteval->stack[((hsi*216+14293)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+4712)*1+lsi)*1]), &(inteval->stack[((hsi*45+4767)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+4767)*1+lsi)*1]), &(inteval->stack[((hsi*36+4812)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4767)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+4646)*1+lsi)*1]), &(inteval->stack[((hsi*55+4712)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+14944)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+13330)*1+lsi)*1]), &(inteval->stack[((hsi*270+14944)*1+lsi)*1]), &(inteval->stack[((hsi*216+4767)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+4510)*1+lsi)*1]), &(inteval->stack[((hsi*45+4565)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+4565)*1+lsi)*1]), &(inteval->stack[((hsi*36+4610)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15214)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+4444)*1+lsi)*1]), &(inteval->stack[((hsi*55+4510)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+4444)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+12970)*1+lsi)*1]), &(inteval->stack[((hsi*270+4444)*1+lsi)*1]), &(inteval->stack[((hsi*216+15214)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+4308)*1+lsi)*1]), &(inteval->stack[((hsi*45+4363)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+4363)*1+lsi)*1]), &(inteval->stack[((hsi*36+4408)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+15430)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+4242)*1+lsi)*1]), &(inteval->stack[((hsi*55+4308)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+15646)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+12610)*1+lsi)*1]), &(inteval->stack[((hsi*270+15646)*1+lsi)*1]), &(inteval->stack[((hsi*216+15430)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+4106)*1+lsi)*1]), &(inteval->stack[((hsi*45+4161)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+4161)*1+lsi)*1]), &(inteval->stack[((hsi*36+4206)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4161)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+4040)*1+lsi)*1]), &(inteval->stack[((hsi*55+4106)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+15916)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+12250)*1+lsi)*1]), &(inteval->stack[((hsi*270+15916)*1+lsi)*1]), &(inteval->stack[((hsi*216+4161)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+3904)*1+lsi)*1]), &(inteval->stack[((hsi*45+3959)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+3959)*1+lsi)*1]), &(inteval->stack[((hsi*36+4004)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16186)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+3838)*1+lsi)*1]), &(inteval->stack[((hsi*55+3904)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+3838)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+11890)*1+lsi)*1]), &(inteval->stack[((hsi*270+3838)*1+lsi)*1]), &(inteval->stack[((hsi*216+16186)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+3702)*1+lsi)*1]), &(inteval->stack[((hsi*45+3757)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+3757)*1+lsi)*1]), &(inteval->stack[((hsi*36+3802)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+16402)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+3636)*1+lsi)*1]), &(inteval->stack[((hsi*55+3702)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+16618)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+11530)*1+lsi)*1]), &(inteval->stack[((hsi*270+16618)*1+lsi)*1]), &(inteval->stack[((hsi*216+16402)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+3500)*1+lsi)*1]), &(inteval->stack[((hsi*45+3555)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+3555)*1+lsi)*1]), &(inteval->stack[((hsi*36+3600)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+3555)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+3434)*1+lsi)*1]), &(inteval->stack[((hsi*55+3500)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+16888)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+11170)*1+lsi)*1]), &(inteval->stack[((hsi*270+16888)*1+lsi)*1]), &(inteval->stack[((hsi*216+3555)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+3298)*1+lsi)*1]), &(inteval->stack[((hsi*45+3353)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+3353)*1+lsi)*1]), &(inteval->stack[((hsi*36+3398)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17158)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+3232)*1+lsi)*1]), &(inteval->stack[((hsi*55+3298)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+3232)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+10810)*1+lsi)*1]), &(inteval->stack[((hsi*270+3232)*1+lsi)*1]), &(inteval->stack[((hsi*216+17158)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+3096)*1+lsi)*1]), &(inteval->stack[((hsi*45+3151)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+3151)*1+lsi)*1]), &(inteval->stack[((hsi*36+3196)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+17374)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+3030)*1+lsi)*1]), &(inteval->stack[((hsi*55+3096)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17590)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+10450)*1+lsi)*1]), &(inteval->stack[((hsi*270+17590)*1+lsi)*1]), &(inteval->stack[((hsi*216+17374)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+2894)*1+lsi)*1]), &(inteval->stack[((hsi*45+2949)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+2949)*1+lsi)*1]), &(inteval->stack[((hsi*36+2994)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2949)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+2828)*1+lsi)*1]), &(inteval->stack[((hsi*55+2894)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+17860)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+10090)*1+lsi)*1]), &(inteval->stack[((hsi*270+17860)*1+lsi)*1]), &(inteval->stack[((hsi*216+2949)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+2692)*1+lsi)*1]), &(inteval->stack[((hsi*45+2747)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+2747)*1+lsi)*1]), &(inteval->stack[((hsi*36+2792)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18130)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+2626)*1+lsi)*1]), &(inteval->stack[((hsi*55+2692)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+2626)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+9730)*1+lsi)*1]), &(inteval->stack[((hsi*270+2626)*1+lsi)*1]), &(inteval->stack[((hsi*216+18130)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+2490)*1+lsi)*1]), &(inteval->stack[((hsi*45+2545)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+2545)*1+lsi)*1]), &(inteval->stack[((hsi*36+2590)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+18346)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+2424)*1+lsi)*1]), &(inteval->stack[((hsi*55+2490)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18562)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+9370)*1+lsi)*1]), &(inteval->stack[((hsi*270+18562)*1+lsi)*1]), &(inteval->stack[((hsi*216+18346)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+2288)*1+lsi)*1]), &(inteval->stack[((hsi*45+2343)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+2343)*1+lsi)*1]), &(inteval->stack[((hsi*36+2388)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2343)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+2222)*1+lsi)*1]), &(inteval->stack[((hsi*55+2288)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+18832)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+9010)*1+lsi)*1]), &(inteval->stack[((hsi*270+18832)*1+lsi)*1]), &(inteval->stack[((hsi*216+2343)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+2086)*1+lsi)*1]), &(inteval->stack[((hsi*45+2141)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+2141)*1+lsi)*1]), &(inteval->stack[((hsi*36+2186)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+19102)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+2020)*1+lsi)*1]), &(inteval->stack[((hsi*55+2086)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+2020)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+8650)*1+lsi)*1]), &(inteval->stack[((hsi*270+2020)*1+lsi)*1]), &(inteval->stack[((hsi*216+19102)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+1884)*1+lsi)*1]), &(inteval->stack[((hsi*45+1939)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+1939)*1+lsi)*1]), &(inteval->stack[((hsi*36+1984)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+19318)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+1818)*1+lsi)*1]), &(inteval->stack[((hsi*55+1884)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+19534)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+8290)*1+lsi)*1]), &(inteval->stack[((hsi*270+19534)*1+lsi)*1]), &(inteval->stack[((hsi*216+19318)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+1682)*1+lsi)*1]), &(inteval->stack[((hsi*45+1737)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+1737)*1+lsi)*1]), &(inteval->stack[((hsi*36+1782)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1737)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+1616)*1+lsi)*1]), &(inteval->stack[((hsi*55+1682)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+19804)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7930)*1+lsi)*1]), &(inteval->stack[((hsi*270+19804)*1+lsi)*1]), &(inteval->stack[((hsi*216+1737)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+1480)*1+lsi)*1]), &(inteval->stack[((hsi*45+1535)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+1535)*1+lsi)*1]), &(inteval->stack[((hsi*36+1580)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+20074)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+1414)*1+lsi)*1]), &(inteval->stack[((hsi*55+1480)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+1414)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7570)*1+lsi)*1]), &(inteval->stack[((hsi*270+1414)*1+lsi)*1]), &(inteval->stack[((hsi*216+20074)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+1278)*1+lsi)*1]), &(inteval->stack[((hsi*45+1333)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+1333)*1+lsi)*1]), &(inteval->stack[((hsi*36+1378)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+20290)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+1212)*1+lsi)*1]), &(inteval->stack[((hsi*55+1278)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20506)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7210)*1+lsi)*1]), &(inteval->stack[((hsi*270+20506)*1+lsi)*1]), &(inteval->stack[((hsi*216+20290)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+1076)*1+lsi)*1]), &(inteval->stack[((hsi*45+1131)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+1131)*1+lsi)*1]), &(inteval->stack[((hsi*36+1176)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1131)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+1010)*1+lsi)*1]), &(inteval->stack[((hsi*55+1076)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20776)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+6850)*1+lsi)*1]), &(inteval->stack[((hsi*270+20776)*1+lsi)*1]), &(inteval->stack[((hsi*216+1131)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+874)*1+lsi)*1]), &(inteval->stack[((hsi*45+929)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+929)*1+lsi)*1]), &(inteval->stack[((hsi*36+974)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21046)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+808)*1+lsi)*1]), &(inteval->stack[((hsi*55+874)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+808)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+6490)*1+lsi)*1]), &(inteval->stack[((hsi*270+808)*1+lsi)*1]), &(inteval->stack[((hsi*216+21046)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+672)*1+lsi)*1]), &(inteval->stack[((hsi*45+727)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+727)*1+lsi)*1]), &(inteval->stack[((hsi*36+772)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21262)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+606)*1+lsi)*1]), &(inteval->stack[((hsi*55+672)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+21478)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+6130)*1+lsi)*1]), &(inteval->stack[((hsi*270+21478)*1+lsi)*1]), &(inteval->stack[((hsi*216+21262)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+470)*1+lsi)*1]), &(inteval->stack[((hsi*45+525)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+525)*1+lsi)*1]), &(inteval->stack[((hsi*36+570)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+525)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+404)*1+lsi)*1]), &(inteval->stack[((hsi*55+470)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+21748)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+5770)*1+lsi)*1]), &(inteval->stack[((hsi*270+21748)*1+lsi)*1]), &(inteval->stack[((hsi*216+525)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+268)*1+lsi)*1]), &(inteval->stack[((hsi*45+323)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+323)*1+lsi)*1]), &(inteval->stack[((hsi*36+368)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+22018)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+202)*1+lsi)*1]), &(inteval->stack[((hsi*55+268)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+202)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+5410)*1+lsi)*1]), &(inteval->stack[((hsi*270+202)*1+lsi)*1]), &(inteval->stack[((hsi*216+22018)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+14185)*1+lsi)*1]), &(inteval->stack[((hsi*45+121)*1+lsi)*1]), &(inteval->stack[((hsi*36+166)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+22234)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]), &(inteval->stack[((hsi*108+14185)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*66+0)*1+lsi)*1]), &(inteval->stack[((hsi*55+66)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+22450)*1+lsi)*1]), &(inteval->stack[((hsi*165+14509)*1+lsi)*1]), &(inteval->stack[((hsi*135+14050)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+5050)*1+lsi)*1]), &(inteval->stack[((hsi*270+22450)*1+lsi)*1]), &(inteval->stack[((hsi*216+22234)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*360+5050)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*360+5410)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*360+5770)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*360+6130)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*360+6490)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*360+6850)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*360+7210)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*360+7570)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*360+7930)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*360+8290)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*360+8650)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*360+9010)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*360+9370)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*360+9730)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*360+10090)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*360+10450)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*360+10810)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*360+11170)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*360+11530)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*360+11890)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*360+12250)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*360+12610)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*360+12970)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*360+13330)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*360+13690)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
