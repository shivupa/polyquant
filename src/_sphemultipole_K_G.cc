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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0np.h>
#include <_sphemultipole_K_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_K_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,7000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_K_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+6864)*1+lsi)*1]), &(inteval->stack[((hsi*45+6919)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+6798)*1+lsi)*1]), &(inteval->stack[((hsi*55+6864)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21070)*1+lsi)*1]), &(inteval->stack[((hsi*45+6919)*1+lsi)*1]), &(inteval->stack[((hsi*36+6964)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21178)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21070)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+21394)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+21178)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21070)*1+lsi)*1]), &(inteval->stack[((hsi*78+6720)*1+lsi)*1]), &(inteval->stack[((hsi*66+6798)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+21070)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+22084)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+19960)*1+lsi)*1]), &(inteval->stack[((hsi*450+22084)*1+lsi)*1]), &(inteval->stack[((hsi*360+21394)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+6584)*1+lsi)*1]), &(inteval->stack[((hsi*45+6639)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+6518)*1+lsi)*1]), &(inteval->stack[((hsi*55+6584)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+6639)*1+lsi)*1]), &(inteval->stack[((hsi*36+6684)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6584)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+22534)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+6584)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+6584)*1+lsi)*1]), &(inteval->stack[((hsi*78+6440)*1+lsi)*1]), &(inteval->stack[((hsi*66+6518)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+6584)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+6440)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+19420)*1+lsi)*1]), &(inteval->stack[((hsi*450+6440)*1+lsi)*1]), &(inteval->stack[((hsi*360+22534)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+6304)*1+lsi)*1]), &(inteval->stack[((hsi*45+6359)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+6238)*1+lsi)*1]), &(inteval->stack[((hsi*55+6304)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+6359)*1+lsi)*1]), &(inteval->stack[((hsi*36+6404)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+21070)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+22894)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+21070)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+6160)*1+lsi)*1]), &(inteval->stack[((hsi*66+6238)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+23584)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+18880)*1+lsi)*1]), &(inteval->stack[((hsi*450+23584)*1+lsi)*1]), &(inteval->stack[((hsi*360+22894)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+6024)*1+lsi)*1]), &(inteval->stack[((hsi*45+6079)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+5958)*1+lsi)*1]), &(inteval->stack[((hsi*55+6024)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+6079)*1+lsi)*1]), &(inteval->stack[((hsi*36+6124)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6024)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+24034)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+6024)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+6024)*1+lsi)*1]), &(inteval->stack[((hsi*78+5880)*1+lsi)*1]), &(inteval->stack[((hsi*66+5958)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+6024)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+5880)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+18340)*1+lsi)*1]), &(inteval->stack[((hsi*450+5880)*1+lsi)*1]), &(inteval->stack[((hsi*360+24034)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+5744)*1+lsi)*1]), &(inteval->stack[((hsi*45+5799)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+5678)*1+lsi)*1]), &(inteval->stack[((hsi*55+5744)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+5799)*1+lsi)*1]), &(inteval->stack[((hsi*36+5844)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+24394)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+5600)*1+lsi)*1]), &(inteval->stack[((hsi*66+5678)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+24754)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+17800)*1+lsi)*1]), &(inteval->stack[((hsi*450+24754)*1+lsi)*1]), &(inteval->stack[((hsi*360+24394)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+5464)*1+lsi)*1]), &(inteval->stack[((hsi*45+5519)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+5398)*1+lsi)*1]), &(inteval->stack[((hsi*55+5464)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+5519)*1+lsi)*1]), &(inteval->stack[((hsi*36+5564)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5464)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+25204)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+5464)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+5464)*1+lsi)*1]), &(inteval->stack[((hsi*78+5320)*1+lsi)*1]), &(inteval->stack[((hsi*66+5398)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+5464)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+5320)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+17260)*1+lsi)*1]), &(inteval->stack[((hsi*450+5320)*1+lsi)*1]), &(inteval->stack[((hsi*360+25204)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+5184)*1+lsi)*1]), &(inteval->stack[((hsi*45+5239)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+5118)*1+lsi)*1]), &(inteval->stack[((hsi*55+5184)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+5239)*1+lsi)*1]), &(inteval->stack[((hsi*36+5284)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+25564)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+5040)*1+lsi)*1]), &(inteval->stack[((hsi*66+5118)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+25924)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+16720)*1+lsi)*1]), &(inteval->stack[((hsi*450+25924)*1+lsi)*1]), &(inteval->stack[((hsi*360+25564)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+4904)*1+lsi)*1]), &(inteval->stack[((hsi*45+4959)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+4838)*1+lsi)*1]), &(inteval->stack[((hsi*55+4904)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+4959)*1+lsi)*1]), &(inteval->stack[((hsi*36+5004)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4904)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+26374)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+4904)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+4904)*1+lsi)*1]), &(inteval->stack[((hsi*78+4760)*1+lsi)*1]), &(inteval->stack[((hsi*66+4838)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+4904)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+4760)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+16180)*1+lsi)*1]), &(inteval->stack[((hsi*450+4760)*1+lsi)*1]), &(inteval->stack[((hsi*360+26374)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+4624)*1+lsi)*1]), &(inteval->stack[((hsi*45+4679)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+4558)*1+lsi)*1]), &(inteval->stack[((hsi*55+4624)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+4679)*1+lsi)*1]), &(inteval->stack[((hsi*36+4724)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+26734)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+4480)*1+lsi)*1]), &(inteval->stack[((hsi*66+4558)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+27094)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+15640)*1+lsi)*1]), &(inteval->stack[((hsi*450+27094)*1+lsi)*1]), &(inteval->stack[((hsi*360+26734)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+4344)*1+lsi)*1]), &(inteval->stack[((hsi*45+4399)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+4278)*1+lsi)*1]), &(inteval->stack[((hsi*55+4344)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+4399)*1+lsi)*1]), &(inteval->stack[((hsi*36+4444)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4344)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+27544)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+4344)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+4344)*1+lsi)*1]), &(inteval->stack[((hsi*78+4200)*1+lsi)*1]), &(inteval->stack[((hsi*66+4278)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+4344)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+4200)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+15100)*1+lsi)*1]), &(inteval->stack[((hsi*450+4200)*1+lsi)*1]), &(inteval->stack[((hsi*360+27544)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+4064)*1+lsi)*1]), &(inteval->stack[((hsi*45+4119)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+3998)*1+lsi)*1]), &(inteval->stack[((hsi*55+4064)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+4119)*1+lsi)*1]), &(inteval->stack[((hsi*36+4164)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+27904)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+3920)*1+lsi)*1]), &(inteval->stack[((hsi*66+3998)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+28264)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+14560)*1+lsi)*1]), &(inteval->stack[((hsi*450+28264)*1+lsi)*1]), &(inteval->stack[((hsi*360+27904)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+3784)*1+lsi)*1]), &(inteval->stack[((hsi*45+3839)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+3718)*1+lsi)*1]), &(inteval->stack[((hsi*55+3784)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+3839)*1+lsi)*1]), &(inteval->stack[((hsi*36+3884)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+3784)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+28714)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+3784)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+3784)*1+lsi)*1]), &(inteval->stack[((hsi*78+3640)*1+lsi)*1]), &(inteval->stack[((hsi*66+3718)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+3784)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3640)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+14020)*1+lsi)*1]), &(inteval->stack[((hsi*450+3640)*1+lsi)*1]), &(inteval->stack[((hsi*360+28714)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+3504)*1+lsi)*1]), &(inteval->stack[((hsi*45+3559)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+3438)*1+lsi)*1]), &(inteval->stack[((hsi*55+3504)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+3559)*1+lsi)*1]), &(inteval->stack[((hsi*36+3604)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+29074)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+3360)*1+lsi)*1]), &(inteval->stack[((hsi*66+3438)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+29434)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+13480)*1+lsi)*1]), &(inteval->stack[((hsi*450+29434)*1+lsi)*1]), &(inteval->stack[((hsi*360+29074)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+3224)*1+lsi)*1]), &(inteval->stack[((hsi*45+3279)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+3158)*1+lsi)*1]), &(inteval->stack[((hsi*55+3224)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+3279)*1+lsi)*1]), &(inteval->stack[((hsi*36+3324)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+3224)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+29884)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+3224)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+3224)*1+lsi)*1]), &(inteval->stack[((hsi*78+3080)*1+lsi)*1]), &(inteval->stack[((hsi*66+3158)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+3224)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3080)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+12940)*1+lsi)*1]), &(inteval->stack[((hsi*450+3080)*1+lsi)*1]), &(inteval->stack[((hsi*360+29884)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+2944)*1+lsi)*1]), &(inteval->stack[((hsi*45+2999)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+2878)*1+lsi)*1]), &(inteval->stack[((hsi*55+2944)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+2999)*1+lsi)*1]), &(inteval->stack[((hsi*36+3044)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+30244)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+2800)*1+lsi)*1]), &(inteval->stack[((hsi*66+2878)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+30604)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+12400)*1+lsi)*1]), &(inteval->stack[((hsi*450+30604)*1+lsi)*1]), &(inteval->stack[((hsi*360+30244)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+2664)*1+lsi)*1]), &(inteval->stack[((hsi*45+2719)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+2598)*1+lsi)*1]), &(inteval->stack[((hsi*55+2664)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+2719)*1+lsi)*1]), &(inteval->stack[((hsi*36+2764)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2664)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+31054)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+2664)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+2664)*1+lsi)*1]), &(inteval->stack[((hsi*78+2520)*1+lsi)*1]), &(inteval->stack[((hsi*66+2598)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+2664)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+2520)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+11860)*1+lsi)*1]), &(inteval->stack[((hsi*450+2520)*1+lsi)*1]), &(inteval->stack[((hsi*360+31054)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+2384)*1+lsi)*1]), &(inteval->stack[((hsi*45+2439)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+2318)*1+lsi)*1]), &(inteval->stack[((hsi*55+2384)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+2439)*1+lsi)*1]), &(inteval->stack[((hsi*36+2484)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+31414)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+2240)*1+lsi)*1]), &(inteval->stack[((hsi*66+2318)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+31774)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+11320)*1+lsi)*1]), &(inteval->stack[((hsi*450+31774)*1+lsi)*1]), &(inteval->stack[((hsi*360+31414)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+2104)*1+lsi)*1]), &(inteval->stack[((hsi*45+2159)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+2038)*1+lsi)*1]), &(inteval->stack[((hsi*55+2104)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+2159)*1+lsi)*1]), &(inteval->stack[((hsi*36+2204)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+2104)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+32224)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+2104)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+2104)*1+lsi)*1]), &(inteval->stack[((hsi*78+1960)*1+lsi)*1]), &(inteval->stack[((hsi*66+2038)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+2104)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1960)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+10780)*1+lsi)*1]), &(inteval->stack[((hsi*450+1960)*1+lsi)*1]), &(inteval->stack[((hsi*360+32224)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+1824)*1+lsi)*1]), &(inteval->stack[((hsi*45+1879)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+1758)*1+lsi)*1]), &(inteval->stack[((hsi*55+1824)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+1879)*1+lsi)*1]), &(inteval->stack[((hsi*36+1924)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+32584)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+1680)*1+lsi)*1]), &(inteval->stack[((hsi*66+1758)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+32944)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+10240)*1+lsi)*1]), &(inteval->stack[((hsi*450+32944)*1+lsi)*1]), &(inteval->stack[((hsi*360+32584)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+1544)*1+lsi)*1]), &(inteval->stack[((hsi*45+1599)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+1478)*1+lsi)*1]), &(inteval->stack[((hsi*55+1544)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+1599)*1+lsi)*1]), &(inteval->stack[((hsi*36+1644)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1544)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+33394)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+1544)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+1544)*1+lsi)*1]), &(inteval->stack[((hsi*78+1400)*1+lsi)*1]), &(inteval->stack[((hsi*66+1478)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+1544)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1400)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+9700)*1+lsi)*1]), &(inteval->stack[((hsi*450+1400)*1+lsi)*1]), &(inteval->stack[((hsi*360+33394)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+1264)*1+lsi)*1]), &(inteval->stack[((hsi*45+1319)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+1198)*1+lsi)*1]), &(inteval->stack[((hsi*55+1264)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+1319)*1+lsi)*1]), &(inteval->stack[((hsi*36+1364)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+33754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+1120)*1+lsi)*1]), &(inteval->stack[((hsi*66+1198)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+34114)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+9160)*1+lsi)*1]), &(inteval->stack[((hsi*450+34114)*1+lsi)*1]), &(inteval->stack[((hsi*360+33754)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+984)*1+lsi)*1]), &(inteval->stack[((hsi*45+1039)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+918)*1+lsi)*1]), &(inteval->stack[((hsi*55+984)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+1039)*1+lsi)*1]), &(inteval->stack[((hsi*36+1084)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+984)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+34564)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+984)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+984)*1+lsi)*1]), &(inteval->stack[((hsi*78+840)*1+lsi)*1]), &(inteval->stack[((hsi*66+918)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+984)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+840)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+8620)*1+lsi)*1]), &(inteval->stack[((hsi*450+840)*1+lsi)*1]), &(inteval->stack[((hsi*360+34564)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+704)*1+lsi)*1]), &(inteval->stack[((hsi*45+759)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+638)*1+lsi)*1]), &(inteval->stack[((hsi*55+704)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+759)*1+lsi)*1]), &(inteval->stack[((hsi*36+804)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+34924)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+560)*1+lsi)*1]), &(inteval->stack[((hsi*66+638)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+35284)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+8080)*1+lsi)*1]), &(inteval->stack[((hsi*450+35284)*1+lsi)*1]), &(inteval->stack[((hsi*360+34924)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+424)*1+lsi)*1]), &(inteval->stack[((hsi*45+479)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+358)*1+lsi)*1]), &(inteval->stack[((hsi*55+424)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+23254)*1+lsi)*1]), &(inteval->stack[((hsi*45+479)*1+lsi)*1]), &(inteval->stack[((hsi*36+524)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+424)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+35734)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+424)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+424)*1+lsi)*1]), &(inteval->stack[((hsi*78+280)*1+lsi)*1]), &(inteval->stack[((hsi*66+358)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*198+424)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+280)*1+lsi)*1]), &(inteval->stack[((hsi*330+21754)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+7540)*1+lsi)*1]), &(inteval->stack[((hsi*450+280)*1+lsi)*1]), &(inteval->stack[((hsi*360+35734)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]), &(inteval->stack[((hsi*55+144)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+21754)*1+lsi)*1]), &(inteval->stack[((hsi*45+199)*1+lsi)*1]), &(inteval->stack[((hsi*36+244)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+23254)*1+lsi)*1]), &(inteval->stack[((hsi*135+20500)*1+lsi)*1]), &(inteval->stack[((hsi*108+21754)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+36094)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]), &(inteval->stack[((hsi*216+23254)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*78+0)*1+lsi)*1]), &(inteval->stack[((hsi*66+78)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*198+21754)*1+lsi)*1]), &(inteval->stack[((hsi*165+20635)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+36454)*1+lsi)*1]), &(inteval->stack[((hsi*330+23254)*1+lsi)*1]), &(inteval->stack[((hsi*270+20800)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+7000)*1+lsi)*1]), &(inteval->stack[((hsi*450+36454)*1+lsi)*1]), &(inteval->stack[((hsi*360+36094)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*540+7000)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*540+7540)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*540+8080)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*540+8620)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*540+9160)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*540+9700)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*540+10240)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*540+10780)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*540+11320)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*540+11860)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*540+12400)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*540+12940)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*540+13480)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*540+14020)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*540+14560)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*540+15100)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*540+15640)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*540+16180)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*540+16720)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*540+17260)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*540+17800)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*540+18340)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*540+18880)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*540+19420)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*540+19960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
