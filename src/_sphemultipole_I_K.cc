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
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kf.h>
#include <HRRPart0ket0bra0kg.h>
#include <HRRPart0ket0bra0kh.h>
#include <HRRPart0ket0bra0ki.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lg.h>
#include <HRRPart0ket0bra0lh.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mf.h>
#include <HRRPart0ket0bra0mg.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psp.h>
#include <_sphemultipole_I_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_I_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_I_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+37100)*1+lsi)*1]), &(inteval->stack[((hsi*55+3345)*1+lsi)*1]), &(inteval->stack[((hsi*45+1980)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+37235)*1+lsi)*1]), &(inteval->stack[((hsi*66+11834)*1+lsi)*1]), &(inteval->stack[((hsi*55+3345)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+37400)*1+lsi)*1]), &(inteval->stack[((hsi*165+37235)*1+lsi)*1]), &(inteval->stack[((hsi*135+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37670)*1+lsi)*1]), &(inteval->stack[((hsi*78+11756)*1+lsi)*1]), &(inteval->stack[((hsi*66+11834)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+37868)*1+lsi)*1]), &(inteval->stack[((hsi*198+37670)*1+lsi)*1]), &(inteval->stack[((hsi*165+37235)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+38198)*1+lsi)*1]), &(inteval->stack[((hsi*330+37868)*1+lsi)*1]), &(inteval->stack[((hsi*270+37400)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+38648)*1+lsi)*1]), &(inteval->stack[((hsi*91+11665)*1+lsi)*1]), &(inteval->stack[((hsi*78+11756)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+38882)*1+lsi)*1]), &(inteval->stack[((hsi*234+38648)*1+lsi)*1]), &(inteval->stack[((hsi*198+37670)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+39278)*1+lsi)*1]), &(inteval->stack[((hsi*396+38882)*1+lsi)*1]), &(inteval->stack[((hsi*330+37868)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+39828)*1+lsi)*1]), &(inteval->stack[((hsi*550+39278)*1+lsi)*1]), &(inteval->stack[((hsi*450+38198)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+37670)*1+lsi)*1]), &(inteval->stack[((hsi*45+1980)*1+lsi)*1]), &(inteval->stack[((hsi*36+864)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+37778)*1+lsi)*1]), &(inteval->stack[((hsi*135+37100)*1+lsi)*1]), &(inteval->stack[((hsi*108+37670)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+40503)*1+lsi)*1]), &(inteval->stack[((hsi*270+37400)*1+lsi)*1]), &(inteval->stack[((hsi*216+37778)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+38198)*1+lsi)*1]), &(inteval->stack[((hsi*360+40503)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+37640)*1+lsi)*1]), &(inteval->stack[((hsi*675+39828)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*105+11560)*1+lsi)*1]), &(inteval->stack[((hsi*91+11665)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+40503)*1+lsi)*1]), &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*234+38648)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+40971)*1+lsi)*1]), &(inteval->stack[((hsi*468+40503)*1+lsi)*1]), &(inteval->stack[((hsi*396+38882)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+38396)*1+lsi)*1]), &(inteval->stack[((hsi*660+40971)*1+lsi)*1]), &(inteval->stack[((hsi*550+39278)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+40503)*1+lsi)*1]), &(inteval->stack[((hsi*825+38396)*1+lsi)*1]), &(inteval->stack[((hsi*675+39828)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+36092)*1+lsi)*1]), &(inteval->stack[((hsi*945+40503)*1+lsi)*1]), &(inteval->stack[((hsi*756+37640)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+38396)*1+lsi)*1]), &(inteval->stack[((hsi*55+3290)*1+lsi)*1]), &(inteval->stack[((hsi*45+1935)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+38531)*1+lsi)*1]), &(inteval->stack[((hsi*66+11494)*1+lsi)*1]), &(inteval->stack[((hsi*55+3290)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+38696)*1+lsi)*1]), &(inteval->stack[((hsi*165+38531)*1+lsi)*1]), &(inteval->stack[((hsi*135+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+38966)*1+lsi)*1]), &(inteval->stack[((hsi*78+11416)*1+lsi)*1]), &(inteval->stack[((hsi*66+11494)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+39164)*1+lsi)*1]), &(inteval->stack[((hsi*198+38966)*1+lsi)*1]), &(inteval->stack[((hsi*165+38531)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+39494)*1+lsi)*1]), &(inteval->stack[((hsi*330+39164)*1+lsi)*1]), &(inteval->stack[((hsi*270+38696)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+39944)*1+lsi)*1]), &(inteval->stack[((hsi*91+11325)*1+lsi)*1]), &(inteval->stack[((hsi*78+11416)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37100)*1+lsi)*1]), &(inteval->stack[((hsi*234+39944)*1+lsi)*1]), &(inteval->stack[((hsi*198+38966)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+41448)*1+lsi)*1]), &(inteval->stack[((hsi*396+37100)*1+lsi)*1]), &(inteval->stack[((hsi*330+39164)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+41998)*1+lsi)*1]), &(inteval->stack[((hsi*550+41448)*1+lsi)*1]), &(inteval->stack[((hsi*450+39494)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+38966)*1+lsi)*1]), &(inteval->stack[((hsi*45+1935)*1+lsi)*1]), &(inteval->stack[((hsi*36+828)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+11416)*1+lsi)*1]), &(inteval->stack[((hsi*135+38396)*1+lsi)*1]), &(inteval->stack[((hsi*108+38966)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+38966)*1+lsi)*1]), &(inteval->stack[((hsi*270+38696)*1+lsi)*1]), &(inteval->stack[((hsi*216+11416)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+39494)*1+lsi)*1]), &(inteval->stack[((hsi*360+38966)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+38936)*1+lsi)*1]), &(inteval->stack[((hsi*675+41998)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+38396)*1+lsi)*1]), &(inteval->stack[((hsi*105+11220)*1+lsi)*1]), &(inteval->stack[((hsi*91+11325)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+11220)*1+lsi)*1]), &(inteval->stack[((hsi*273+38396)*1+lsi)*1]), &(inteval->stack[((hsi*234+39944)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+39692)*1+lsi)*1]), &(inteval->stack[((hsi*468+11220)*1+lsi)*1]), &(inteval->stack[((hsi*396+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+42673)*1+lsi)*1]), &(inteval->stack[((hsi*660+39692)*1+lsi)*1]), &(inteval->stack[((hsi*550+41448)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+43498)*1+lsi)*1]), &(inteval->stack[((hsi*825+42673)*1+lsi)*1]), &(inteval->stack[((hsi*675+41998)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+35084)*1+lsi)*1]), &(inteval->stack[((hsi*945+43498)*1+lsi)*1]), &(inteval->stack[((hsi*756+38936)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+41448)*1+lsi)*1]), &(inteval->stack[((hsi*55+3235)*1+lsi)*1]), &(inteval->stack[((hsi*45+1890)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+41583)*1+lsi)*1]), &(inteval->stack[((hsi*66+11154)*1+lsi)*1]), &(inteval->stack[((hsi*55+3235)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+41748)*1+lsi)*1]), &(inteval->stack[((hsi*165+41583)*1+lsi)*1]), &(inteval->stack[((hsi*135+41448)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+42018)*1+lsi)*1]), &(inteval->stack[((hsi*78+11076)*1+lsi)*1]), &(inteval->stack[((hsi*66+11154)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+42216)*1+lsi)*1]), &(inteval->stack[((hsi*198+42018)*1+lsi)*1]), &(inteval->stack[((hsi*165+41583)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+42546)*1+lsi)*1]), &(inteval->stack[((hsi*330+42216)*1+lsi)*1]), &(inteval->stack[((hsi*270+41748)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+39692)*1+lsi)*1]), &(inteval->stack[((hsi*91+10985)*1+lsi)*1]), &(inteval->stack[((hsi*78+11076)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+11076)*1+lsi)*1]), &(inteval->stack[((hsi*234+39692)*1+lsi)*1]), &(inteval->stack[((hsi*198+42018)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+39926)*1+lsi)*1]), &(inteval->stack[((hsi*396+11076)*1+lsi)*1]), &(inteval->stack[((hsi*330+42216)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+44443)*1+lsi)*1]), &(inteval->stack[((hsi*550+39926)*1+lsi)*1]), &(inteval->stack[((hsi*450+42546)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+38396)*1+lsi)*1]), &(inteval->stack[((hsi*45+1890)*1+lsi)*1]), &(inteval->stack[((hsi*36+792)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+37100)*1+lsi)*1]), &(inteval->stack[((hsi*135+41448)*1+lsi)*1]), &(inteval->stack[((hsi*108+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+38396)*1+lsi)*1]), &(inteval->stack[((hsi*270+41748)*1+lsi)*1]), &(inteval->stack[((hsi*216+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+42546)*1+lsi)*1]), &(inteval->stack[((hsi*360+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+41448)*1+lsi)*1]), &(inteval->stack[((hsi*675+44443)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+42204)*1+lsi)*1]), &(inteval->stack[((hsi*105+10880)*1+lsi)*1]), &(inteval->stack[((hsi*91+10985)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+42477)*1+lsi)*1]), &(inteval->stack[((hsi*273+42204)*1+lsi)*1]), &(inteval->stack[((hsi*234+39692)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+45118)*1+lsi)*1]), &(inteval->stack[((hsi*468+42477)*1+lsi)*1]), &(inteval->stack[((hsi*396+11076)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+42204)*1+lsi)*1]), &(inteval->stack[((hsi*660+45118)*1+lsi)*1]), &(inteval->stack[((hsi*550+39926)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+10880)*1+lsi)*1]), &(inteval->stack[((hsi*825+42204)*1+lsi)*1]), &(inteval->stack[((hsi*675+44443)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+34076)*1+lsi)*1]), &(inteval->stack[((hsi*945+10880)*1+lsi)*1]), &(inteval->stack[((hsi*756+41448)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1890)*1+lsi)*1]), &(inteval->stack[((hsi*55+3180)*1+lsi)*1]), &(inteval->stack[((hsi*45+1845)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+3235)*1+lsi)*1]), &(inteval->stack[((hsi*66+10814)*1+lsi)*1]), &(inteval->stack[((hsi*55+3180)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+42204)*1+lsi)*1]), &(inteval->stack[((hsi*165+3235)*1+lsi)*1]), &(inteval->stack[((hsi*135+1890)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+42474)*1+lsi)*1]), &(inteval->stack[((hsi*78+10736)*1+lsi)*1]), &(inteval->stack[((hsi*66+10814)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+42672)*1+lsi)*1]), &(inteval->stack[((hsi*198+42474)*1+lsi)*1]), &(inteval->stack[((hsi*165+3235)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+39692)*1+lsi)*1]), &(inteval->stack[((hsi*330+42672)*1+lsi)*1]), &(inteval->stack[((hsi*270+42204)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+37100)*1+lsi)*1]), &(inteval->stack[((hsi*91+10645)*1+lsi)*1]), &(inteval->stack[((hsi*78+10736)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*234+37100)*1+lsi)*1]), &(inteval->stack[((hsi*198+42474)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+44443)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*330+42672)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+42474)*1+lsi)*1]), &(inteval->stack[((hsi*550+44443)*1+lsi)*1]), &(inteval->stack[((hsi*450+39692)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+792)*1+lsi)*1]), &(inteval->stack[((hsi*45+1845)*1+lsi)*1]), &(inteval->stack[((hsi*36+756)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+40142)*1+lsi)*1]), &(inteval->stack[((hsi*135+1890)*1+lsi)*1]), &(inteval->stack[((hsi*108+792)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+44993)*1+lsi)*1]), &(inteval->stack[((hsi*270+42204)*1+lsi)*1]), &(inteval->stack[((hsi*216+40142)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+45353)*1+lsi)*1]), &(inteval->stack[((hsi*450+39692)*1+lsi)*1]), &(inteval->stack[((hsi*360+44993)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+39692)*1+lsi)*1]), &(inteval->stack[((hsi*675+42474)*1+lsi)*1]), &(inteval->stack[((hsi*540+45353)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+43149)*1+lsi)*1]), &(inteval->stack[((hsi*105+10540)*1+lsi)*1]), &(inteval->stack[((hsi*91+10645)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+44993)*1+lsi)*1]), &(inteval->stack[((hsi*273+43149)*1+lsi)*1]), &(inteval->stack[((hsi*234+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+45461)*1+lsi)*1]), &(inteval->stack[((hsi*468+44993)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+46121)*1+lsi)*1]), &(inteval->stack[((hsi*660+45461)*1+lsi)*1]), &(inteval->stack[((hsi*550+44443)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+44443)*1+lsi)*1]), &(inteval->stack[((hsi*825+46121)*1+lsi)*1]), &(inteval->stack[((hsi*675+42474)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+33068)*1+lsi)*1]), &(inteval->stack[((hsi*945+44443)*1+lsi)*1]), &(inteval->stack[((hsi*756+39692)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+42204)*1+lsi)*1]), &(inteval->stack[((hsi*55+3125)*1+lsi)*1]), &(inteval->stack[((hsi*45+1800)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+42339)*1+lsi)*1]), &(inteval->stack[((hsi*66+10474)*1+lsi)*1]), &(inteval->stack[((hsi*55+3125)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+42504)*1+lsi)*1]), &(inteval->stack[((hsi*165+42339)*1+lsi)*1]), &(inteval->stack[((hsi*135+42204)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+42774)*1+lsi)*1]), &(inteval->stack[((hsi*78+10396)*1+lsi)*1]), &(inteval->stack[((hsi*66+10474)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+37100)*1+lsi)*1]), &(inteval->stack[((hsi*198+42774)*1+lsi)*1]), &(inteval->stack[((hsi*165+42339)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+38396)*1+lsi)*1]), &(inteval->stack[((hsi*330+37100)*1+lsi)*1]), &(inteval->stack[((hsi*270+42504)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+42972)*1+lsi)*1]), &(inteval->stack[((hsi*91+10305)*1+lsi)*1]), &(inteval->stack[((hsi*78+10396)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+10396)*1+lsi)*1]), &(inteval->stack[((hsi*234+42972)*1+lsi)*1]), &(inteval->stack[((hsi*198+42774)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+45388)*1+lsi)*1]), &(inteval->stack[((hsi*396+10396)*1+lsi)*1]), &(inteval->stack[((hsi*330+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+45938)*1+lsi)*1]), &(inteval->stack[((hsi*550+45388)*1+lsi)*1]), &(inteval->stack[((hsi*450+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+37100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1800)*1+lsi)*1]), &(inteval->stack[((hsi*36+720)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+37208)*1+lsi)*1]), &(inteval->stack[((hsi*135+42204)*1+lsi)*1]), &(inteval->stack[((hsi*108+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+46613)*1+lsi)*1]), &(inteval->stack[((hsi*270+42504)*1+lsi)*1]), &(inteval->stack[((hsi*216+37208)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+38396)*1+lsi)*1]), &(inteval->stack[((hsi*360+46613)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+42204)*1+lsi)*1]), &(inteval->stack[((hsi*675+45938)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*105+10200)*1+lsi)*1]), &(inteval->stack[((hsi*91+10305)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+38396)*1+lsi)*1]), &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*234+42972)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+46613)*1+lsi)*1]), &(inteval->stack[((hsi*468+38396)*1+lsi)*1]), &(inteval->stack[((hsi*396+10396)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+47273)*1+lsi)*1]), &(inteval->stack[((hsi*660+46613)*1+lsi)*1]), &(inteval->stack[((hsi*550+45388)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+48098)*1+lsi)*1]), &(inteval->stack[((hsi*825+47273)*1+lsi)*1]), &(inteval->stack[((hsi*675+45938)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+32060)*1+lsi)*1]), &(inteval->stack[((hsi*945+48098)*1+lsi)*1]), &(inteval->stack[((hsi*756+42204)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+45388)*1+lsi)*1]), &(inteval->stack[((hsi*55+3070)*1+lsi)*1]), &(inteval->stack[((hsi*45+1755)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+45523)*1+lsi)*1]), &(inteval->stack[((hsi*66+10134)*1+lsi)*1]), &(inteval->stack[((hsi*55+3070)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+45688)*1+lsi)*1]), &(inteval->stack[((hsi*165+45523)*1+lsi)*1]), &(inteval->stack[((hsi*135+45388)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+45958)*1+lsi)*1]), &(inteval->stack[((hsi*78+10056)*1+lsi)*1]), &(inteval->stack[((hsi*66+10134)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+3070)*1+lsi)*1]), &(inteval->stack[((hsi*198+45958)*1+lsi)*1]), &(inteval->stack[((hsi*165+45523)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+46156)*1+lsi)*1]), &(inteval->stack[((hsi*330+3070)*1+lsi)*1]), &(inteval->stack[((hsi*270+45688)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+46606)*1+lsi)*1]), &(inteval->stack[((hsi*91+9965)*1+lsi)*1]), &(inteval->stack[((hsi*78+10056)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+46840)*1+lsi)*1]), &(inteval->stack[((hsi*234+46606)*1+lsi)*1]), &(inteval->stack[((hsi*198+45958)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+47236)*1+lsi)*1]), &(inteval->stack[((hsi*396+46840)*1+lsi)*1]), &(inteval->stack[((hsi*330+3070)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+10056)*1+lsi)*1]), &(inteval->stack[((hsi*550+47236)*1+lsi)*1]), &(inteval->stack[((hsi*450+46156)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+37100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1755)*1+lsi)*1]), &(inteval->stack[((hsi*36+684)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+684)*1+lsi)*1]), &(inteval->stack[((hsi*135+45388)*1+lsi)*1]), &(inteval->stack[((hsi*108+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+38396)*1+lsi)*1]), &(inteval->stack[((hsi*270+45688)*1+lsi)*1]), &(inteval->stack[((hsi*216+684)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+46156)*1+lsi)*1]), &(inteval->stack[((hsi*360+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+45388)*1+lsi)*1]), &(inteval->stack[((hsi*675+10056)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*105+9860)*1+lsi)*1]), &(inteval->stack[((hsi*91+9965)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+38396)*1+lsi)*1]), &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*234+46606)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+46144)*1+lsi)*1]), &(inteval->stack[((hsi*468+38396)*1+lsi)*1]), &(inteval->stack[((hsi*396+46840)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+49043)*1+lsi)*1]), &(inteval->stack[((hsi*660+46144)*1+lsi)*1]), &(inteval->stack[((hsi*550+47236)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+46144)*1+lsi)*1]), &(inteval->stack[((hsi*825+49043)*1+lsi)*1]), &(inteval->stack[((hsi*675+10056)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+31052)*1+lsi)*1]), &(inteval->stack[((hsi*945+46144)*1+lsi)*1]), &(inteval->stack[((hsi*756+45388)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+9860)*1+lsi)*1]), &(inteval->stack[((hsi*55+3015)*1+lsi)*1]), &(inteval->stack[((hsi*45+1710)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+47089)*1+lsi)*1]), &(inteval->stack[((hsi*66+9794)*1+lsi)*1]), &(inteval->stack[((hsi*55+3015)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1755)*1+lsi)*1]), &(inteval->stack[((hsi*165+47089)*1+lsi)*1]), &(inteval->stack[((hsi*135+9860)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+9995)*1+lsi)*1]), &(inteval->stack[((hsi*78+9716)*1+lsi)*1]), &(inteval->stack[((hsi*66+9794)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+47254)*1+lsi)*1]), &(inteval->stack[((hsi*198+9995)*1+lsi)*1]), &(inteval->stack[((hsi*165+47089)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+10193)*1+lsi)*1]), &(inteval->stack[((hsi*330+47254)*1+lsi)*1]), &(inteval->stack[((hsi*270+1755)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+37100)*1+lsi)*1]), &(inteval->stack[((hsi*91+9625)*1+lsi)*1]), &(inteval->stack[((hsi*78+9716)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*234+37100)*1+lsi)*1]), &(inteval->stack[((hsi*198+9995)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+49043)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*330+47254)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+47089)*1+lsi)*1]), &(inteval->stack[((hsi*550+49043)*1+lsi)*1]), &(inteval->stack[((hsi*450+10193)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+42960)*1+lsi)*1]), &(inteval->stack[((hsi*45+1710)*1+lsi)*1]), &(inteval->stack[((hsi*36+648)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+43068)*1+lsi)*1]), &(inteval->stack[((hsi*135+9860)*1+lsi)*1]), &(inteval->stack[((hsi*108+42960)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+9716)*1+lsi)*1]), &(inteval->stack[((hsi*270+1755)*1+lsi)*1]), &(inteval->stack[((hsi*216+43068)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+49593)*1+lsi)*1]), &(inteval->stack[((hsi*450+10193)*1+lsi)*1]), &(inteval->stack[((hsi*360+9716)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+9716)*1+lsi)*1]), &(inteval->stack[((hsi*675+47089)*1+lsi)*1]), &(inteval->stack[((hsi*540+49593)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+42960)*1+lsi)*1]), &(inteval->stack[((hsi*105+9520)*1+lsi)*1]), &(inteval->stack[((hsi*91+9625)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+49593)*1+lsi)*1]), &(inteval->stack[((hsi*273+42960)*1+lsi)*1]), &(inteval->stack[((hsi*234+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+50061)*1+lsi)*1]), &(inteval->stack[((hsi*468+49593)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+50721)*1+lsi)*1]), &(inteval->stack[((hsi*660+50061)*1+lsi)*1]), &(inteval->stack[((hsi*550+49043)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+49043)*1+lsi)*1]), &(inteval->stack[((hsi*825+50721)*1+lsi)*1]), &(inteval->stack[((hsi*675+47089)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+30044)*1+lsi)*1]), &(inteval->stack[((hsi*945+49043)*1+lsi)*1]), &(inteval->stack[((hsi*756+9716)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+47089)*1+lsi)*1]), &(inteval->stack[((hsi*55+2960)*1+lsi)*1]), &(inteval->stack[((hsi*45+1665)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+47224)*1+lsi)*1]), &(inteval->stack[((hsi*66+9454)*1+lsi)*1]), &(inteval->stack[((hsi*55+2960)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+47389)*1+lsi)*1]), &(inteval->stack[((hsi*165+47224)*1+lsi)*1]), &(inteval->stack[((hsi*135+47089)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+37100)*1+lsi)*1]), &(inteval->stack[((hsi*78+9376)*1+lsi)*1]), &(inteval->stack[((hsi*66+9454)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+38396)*1+lsi)*1]), &(inteval->stack[((hsi*198+37100)*1+lsi)*1]), &(inteval->stack[((hsi*165+47224)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+42960)*1+lsi)*1]), &(inteval->stack[((hsi*330+38396)*1+lsi)*1]), &(inteval->stack[((hsi*270+47389)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+2960)*1+lsi)*1]), &(inteval->stack[((hsi*91+9285)*1+lsi)*1]), &(inteval->stack[((hsi*78+9376)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+47659)*1+lsi)*1]), &(inteval->stack[((hsi*234+2960)*1+lsi)*1]), &(inteval->stack[((hsi*198+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+49988)*1+lsi)*1]), &(inteval->stack[((hsi*396+47659)*1+lsi)*1]), &(inteval->stack[((hsi*330+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+50538)*1+lsi)*1]), &(inteval->stack[((hsi*550+49988)*1+lsi)*1]), &(inteval->stack[((hsi*450+42960)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+37100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1665)*1+lsi)*1]), &(inteval->stack[((hsi*36+612)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+38396)*1+lsi)*1]), &(inteval->stack[((hsi*135+47089)*1+lsi)*1]), &(inteval->stack[((hsi*108+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+1665)*1+lsi)*1]), &(inteval->stack[((hsi*270+47389)*1+lsi)*1]), &(inteval->stack[((hsi*216+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+42960)*1+lsi)*1]), &(inteval->stack[((hsi*360+1665)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+51213)*1+lsi)*1]), &(inteval->stack[((hsi*675+50538)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+47089)*1+lsi)*1]), &(inteval->stack[((hsi*105+9180)*1+lsi)*1]), &(inteval->stack[((hsi*91+9285)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+37100)*1+lsi)*1]), &(inteval->stack[((hsi*273+47089)*1+lsi)*1]), &(inteval->stack[((hsi*234+2960)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+51969)*1+lsi)*1]), &(inteval->stack[((hsi*468+37100)*1+lsi)*1]), &(inteval->stack[((hsi*396+47659)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+47089)*1+lsi)*1]), &(inteval->stack[((hsi*660+51969)*1+lsi)*1]), &(inteval->stack[((hsi*550+49988)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+51969)*1+lsi)*1]), &(inteval->stack[((hsi*825+47089)*1+lsi)*1]), &(inteval->stack[((hsi*675+50538)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+29036)*1+lsi)*1]), &(inteval->stack[((hsi*945+51969)*1+lsi)*1]), &(inteval->stack[((hsi*756+51213)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+49988)*1+lsi)*1]), &(inteval->stack[((hsi*55+2905)*1+lsi)*1]), &(inteval->stack[((hsi*45+1620)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+50123)*1+lsi)*1]), &(inteval->stack[((hsi*66+9114)*1+lsi)*1]), &(inteval->stack[((hsi*55+2905)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+47089)*1+lsi)*1]), &(inteval->stack[((hsi*165+50123)*1+lsi)*1]), &(inteval->stack[((hsi*135+49988)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+50288)*1+lsi)*1]), &(inteval->stack[((hsi*78+9036)*1+lsi)*1]), &(inteval->stack[((hsi*66+9114)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+47359)*1+lsi)*1]), &(inteval->stack[((hsi*198+50288)*1+lsi)*1]), &(inteval->stack[((hsi*165+50123)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+50486)*1+lsi)*1]), &(inteval->stack[((hsi*330+47359)*1+lsi)*1]), &(inteval->stack[((hsi*270+47089)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9114)*1+lsi)*1]), &(inteval->stack[((hsi*91+8945)*1+lsi)*1]), &(inteval->stack[((hsi*78+9036)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*234+9114)*1+lsi)*1]), &(inteval->stack[((hsi*198+50288)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+52914)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*330+47359)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+47359)*1+lsi)*1]), &(inteval->stack[((hsi*550+52914)*1+lsi)*1]), &(inteval->stack[((hsi*450+50486)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+37100)*1+lsi)*1]), &(inteval->stack[((hsi*45+1620)*1+lsi)*1]), &(inteval->stack[((hsi*36+576)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+42960)*1+lsi)*1]), &(inteval->stack[((hsi*135+49988)*1+lsi)*1]), &(inteval->stack[((hsi*108+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+37100)*1+lsi)*1]), &(inteval->stack[((hsi*270+47089)*1+lsi)*1]), &(inteval->stack[((hsi*216+42960)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+53464)*1+lsi)*1]), &(inteval->stack[((hsi*450+50486)*1+lsi)*1]), &(inteval->stack[((hsi*360+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+49988)*1+lsi)*1]), &(inteval->stack[((hsi*675+47359)*1+lsi)*1]), &(inteval->stack[((hsi*540+53464)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*105+8840)*1+lsi)*1]), &(inteval->stack[((hsi*91+8945)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+42960)*1+lsi)*1]), &(inteval->stack[((hsi*273+37100)*1+lsi)*1]), &(inteval->stack[((hsi*234+9114)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+8840)*1+lsi)*1]), &(inteval->stack[((hsi*468+42960)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+53464)*1+lsi)*1]), &(inteval->stack[((hsi*660+8840)*1+lsi)*1]), &(inteval->stack[((hsi*550+52914)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+54289)*1+lsi)*1]), &(inteval->stack[((hsi*825+53464)*1+lsi)*1]), &(inteval->stack[((hsi*675+47359)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+28028)*1+lsi)*1]), &(inteval->stack[((hsi*945+54289)*1+lsi)*1]), &(inteval->stack[((hsi*756+49988)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+52914)*1+lsi)*1]), &(inteval->stack[((hsi*55+2850)*1+lsi)*1]), &(inteval->stack[((hsi*45+1575)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+53049)*1+lsi)*1]), &(inteval->stack[((hsi*66+8774)*1+lsi)*1]), &(inteval->stack[((hsi*55+2850)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+53214)*1+lsi)*1]), &(inteval->stack[((hsi*165+53049)*1+lsi)*1]), &(inteval->stack[((hsi*135+52914)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+47089)*1+lsi)*1]), &(inteval->stack[((hsi*78+8696)*1+lsi)*1]), &(inteval->stack[((hsi*66+8774)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+8774)*1+lsi)*1]), &(inteval->stack[((hsi*198+47089)*1+lsi)*1]), &(inteval->stack[((hsi*165+53049)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+47287)*1+lsi)*1]), &(inteval->stack[((hsi*330+8774)*1+lsi)*1]), &(inteval->stack[((hsi*270+53214)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+53484)*1+lsi)*1]), &(inteval->stack[((hsi*91+8605)*1+lsi)*1]), &(inteval->stack[((hsi*78+8696)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9104)*1+lsi)*1]), &(inteval->stack[((hsi*234+53484)*1+lsi)*1]), &(inteval->stack[((hsi*198+47089)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+2850)*1+lsi)*1]), &(inteval->stack[((hsi*396+9104)*1+lsi)*1]), &(inteval->stack[((hsi*330+8774)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+2850)*1+lsi)*1]), &(inteval->stack[((hsi*450+47287)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+53718)*1+lsi)*1]), &(inteval->stack[((hsi*45+1575)*1+lsi)*1]), &(inteval->stack[((hsi*36+540)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+9500)*1+lsi)*1]), &(inteval->stack[((hsi*135+52914)*1+lsi)*1]), &(inteval->stack[((hsi*108+53718)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*270+53214)*1+lsi)*1]), &(inteval->stack[((hsi*216+9500)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+47287)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+47089)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+53718)*1+lsi)*1]), &(inteval->stack[((hsi*105+8500)*1+lsi)*1]), &(inteval->stack[((hsi*91+8605)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+8500)*1+lsi)*1]), &(inteval->stack[((hsi*273+53718)*1+lsi)*1]), &(inteval->stack[((hsi*234+53484)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+52914)*1+lsi)*1]), &(inteval->stack[((hsi*468+8500)*1+lsi)*1]), &(inteval->stack[((hsi*396+9104)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+8500)*1+lsi)*1]), &(inteval->stack[((hsi*660+52914)*1+lsi)*1]), &(inteval->stack[((hsi*550+2850)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+52914)*1+lsi)*1]), &(inteval->stack[((hsi*825+8500)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+27020)*1+lsi)*1]), &(inteval->stack[((hsi*945+52914)*1+lsi)*1]), &(inteval->stack[((hsi*756+47089)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+8500)*1+lsi)*1]), &(inteval->stack[((hsi*55+2795)*1+lsi)*1]), &(inteval->stack[((hsi*45+1530)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+8635)*1+lsi)*1]), &(inteval->stack[((hsi*66+8434)*1+lsi)*1]), &(inteval->stack[((hsi*55+2795)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+8800)*1+lsi)*1]), &(inteval->stack[((hsi*165+8635)*1+lsi)*1]), &(inteval->stack[((hsi*135+8500)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+9070)*1+lsi)*1]), &(inteval->stack[((hsi*78+8356)*1+lsi)*1]), &(inteval->stack[((hsi*66+8434)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2795)*1+lsi)*1]), &(inteval->stack[((hsi*198+9070)*1+lsi)*1]), &(inteval->stack[((hsi*165+8635)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+1575)*1+lsi)*1]), &(inteval->stack[((hsi*330+2795)*1+lsi)*1]), &(inteval->stack[((hsi*270+8800)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+37100)*1+lsi)*1]), &(inteval->stack[((hsi*91+8265)*1+lsi)*1]), &(inteval->stack[((hsi*78+8356)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*234+37100)*1+lsi)*1]), &(inteval->stack[((hsi*198+9070)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+9070)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]), &(inteval->stack[((hsi*330+2795)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+9070)*1+lsi)*1]), &(inteval->stack[((hsi*450+1575)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2795)*1+lsi)*1]), &(inteval->stack[((hsi*45+1530)*1+lsi)*1]), &(inteval->stack[((hsi*36+504)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+42960)*1+lsi)*1]), &(inteval->stack[((hsi*135+8500)*1+lsi)*1]), &(inteval->stack[((hsi*108+2795)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+2795)*1+lsi)*1]), &(inteval->stack[((hsi*270+8800)*1+lsi)*1]), &(inteval->stack[((hsi*216+42960)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+8356)*1+lsi)*1]), &(inteval->stack[((hsi*450+1575)*1+lsi)*1]), &(inteval->stack[((hsi*360+2795)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+55909)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+8356)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+8356)*1+lsi)*1]), &(inteval->stack[((hsi*105+8160)*1+lsi)*1]), &(inteval->stack[((hsi*91+8265)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+2795)*1+lsi)*1]), &(inteval->stack[((hsi*273+8356)*1+lsi)*1]), &(inteval->stack[((hsi*234+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+8160)*1+lsi)*1]), &(inteval->stack[((hsi*468+2795)*1+lsi)*1]), &(inteval->stack[((hsi*396+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+56665)*1+lsi)*1]), &(inteval->stack[((hsi*660+8160)*1+lsi)*1]), &(inteval->stack[((hsi*550+9070)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+8160)*1+lsi)*1]), &(inteval->stack[((hsi*825+56665)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+26012)*1+lsi)*1]), &(inteval->stack[((hsi*945+8160)*1+lsi)*1]), &(inteval->stack[((hsi*756+55909)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+55234)*1+lsi)*1]), &(inteval->stack[((hsi*55+2740)*1+lsi)*1]), &(inteval->stack[((hsi*45+1485)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+9105)*1+lsi)*1]), &(inteval->stack[((hsi*66+8094)*1+lsi)*1]), &(inteval->stack[((hsi*55+2740)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+2740)*1+lsi)*1]), &(inteval->stack[((hsi*165+9105)*1+lsi)*1]), &(inteval->stack[((hsi*135+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+55369)*1+lsi)*1]), &(inteval->stack[((hsi*78+8016)*1+lsi)*1]), &(inteval->stack[((hsi*66+8094)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+37100)*1+lsi)*1]), &(inteval->stack[((hsi*198+55369)*1+lsi)*1]), &(inteval->stack[((hsi*165+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+9105)*1+lsi)*1]), &(inteval->stack[((hsi*330+37100)*1+lsi)*1]), &(inteval->stack[((hsi*270+2740)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+38396)*1+lsi)*1]), &(inteval->stack[((hsi*91+7925)*1+lsi)*1]), &(inteval->stack[((hsi*78+8016)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+504)*1+lsi)*1]), &(inteval->stack[((hsi*234+38396)*1+lsi)*1]), &(inteval->stack[((hsi*198+55369)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+56665)*1+lsi)*1]), &(inteval->stack[((hsi*396+504)*1+lsi)*1]), &(inteval->stack[((hsi*330+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+57215)*1+lsi)*1]), &(inteval->stack[((hsi*550+56665)*1+lsi)*1]), &(inteval->stack[((hsi*450+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+55369)*1+lsi)*1]), &(inteval->stack[((hsi*45+1485)*1+lsi)*1]), &(inteval->stack[((hsi*36+468)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+37100)*1+lsi)*1]), &(inteval->stack[((hsi*135+55234)*1+lsi)*1]), &(inteval->stack[((hsi*108+55369)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+2740)*1+lsi)*1]), &(inteval->stack[((hsi*216+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+1485)*1+lsi)*1]), &(inteval->stack[((hsi*450+9105)*1+lsi)*1]), &(inteval->stack[((hsi*360+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+57890)*1+lsi)*1]), &(inteval->stack[((hsi*675+57215)*1+lsi)*1]), &(inteval->stack[((hsi*540+1485)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*105+7820)*1+lsi)*1]), &(inteval->stack[((hsi*91+7925)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+2740)*1+lsi)*1]), &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*234+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+55234)*1+lsi)*1]), &(inteval->stack[((hsi*468+2740)*1+lsi)*1]), &(inteval->stack[((hsi*396+504)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+58646)*1+lsi)*1]), &(inteval->stack[((hsi*660+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+56665)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+59471)*1+lsi)*1]), &(inteval->stack[((hsi*825+58646)*1+lsi)*1]), &(inteval->stack[((hsi*675+57215)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+25004)*1+lsi)*1]), &(inteval->stack[((hsi*945+59471)*1+lsi)*1]), &(inteval->stack[((hsi*756+57890)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+56665)*1+lsi)*1]), &(inteval->stack[((hsi*55+2685)*1+lsi)*1]), &(inteval->stack[((hsi*45+1440)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+56800)*1+lsi)*1]), &(inteval->stack[((hsi*66+7754)*1+lsi)*1]), &(inteval->stack[((hsi*55+2685)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+56965)*1+lsi)*1]), &(inteval->stack[((hsi*165+56800)*1+lsi)*1]), &(inteval->stack[((hsi*135+56665)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+58646)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]), &(inteval->stack[((hsi*66+7754)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2685)*1+lsi)*1]), &(inteval->stack[((hsi*198+58646)*1+lsi)*1]), &(inteval->stack[((hsi*165+56800)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+55234)*1+lsi)*1]), &(inteval->stack[((hsi*330+2685)*1+lsi)*1]), &(inteval->stack[((hsi*270+56965)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+57235)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]), &(inteval->stack[((hsi*78+7676)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+58844)*1+lsi)*1]), &(inteval->stack[((hsi*234+57235)*1+lsi)*1]), &(inteval->stack[((hsi*198+58646)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+9105)*1+lsi)*1]), &(inteval->stack[((hsi*396+58844)*1+lsi)*1]), &(inteval->stack[((hsi*330+2685)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+2685)*1+lsi)*1]), &(inteval->stack[((hsi*550+9105)*1+lsi)*1]), &(inteval->stack[((hsi*450+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+1485)*1+lsi)*1]), &(inteval->stack[((hsi*45+1440)*1+lsi)*1]), &(inteval->stack[((hsi*36+432)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+37100)*1+lsi)*1]), &(inteval->stack[((hsi*135+56665)*1+lsi)*1]), &(inteval->stack[((hsi*108+1485)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+1440)*1+lsi)*1]), &(inteval->stack[((hsi*270+56965)*1+lsi)*1]), &(inteval->stack[((hsi*216+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+55234)*1+lsi)*1]), &(inteval->stack[((hsi*360+1440)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+60416)*1+lsi)*1]), &(inteval->stack[((hsi*675+2685)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*105+7480)*1+lsi)*1]), &(inteval->stack[((hsi*91+7585)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+432)*1+lsi)*1]), &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*234+57235)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+56665)*1+lsi)*1]), &(inteval->stack[((hsi*468+432)*1+lsi)*1]), &(inteval->stack[((hsi*396+58844)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+58646)*1+lsi)*1]), &(inteval->stack[((hsi*660+56665)*1+lsi)*1]), &(inteval->stack[((hsi*550+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+56665)*1+lsi)*1]), &(inteval->stack[((hsi*825+58646)*1+lsi)*1]), &(inteval->stack[((hsi*675+2685)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+23996)*1+lsi)*1]), &(inteval->stack[((hsi*945+56665)*1+lsi)*1]), &(inteval->stack[((hsi*756+60416)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+58646)*1+lsi)*1]), &(inteval->stack[((hsi*55+2630)*1+lsi)*1]), &(inteval->stack[((hsi*45+1395)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+2685)*1+lsi)*1]), &(inteval->stack[((hsi*66+7414)*1+lsi)*1]), &(inteval->stack[((hsi*55+2630)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+58781)*1+lsi)*1]), &(inteval->stack[((hsi*165+2685)*1+lsi)*1]), &(inteval->stack[((hsi*135+58646)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+7480)*1+lsi)*1]), &(inteval->stack[((hsi*78+7336)*1+lsi)*1]), &(inteval->stack[((hsi*66+7414)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+7480)*1+lsi)*1]), &(inteval->stack[((hsi*165+2685)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2630)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+58781)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+7245)*1+lsi)*1]), &(inteval->stack[((hsi*78+7336)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+1440)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+7480)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+7336)*1+lsi)*1]), &(inteval->stack[((hsi*396+1440)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+7336)*1+lsi)*1]), &(inteval->stack[((hsi*450+2630)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+38396)*1+lsi)*1]), &(inteval->stack[((hsi*45+1395)*1+lsi)*1]), &(inteval->stack[((hsi*36+396)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+37100)*1+lsi)*1]), &(inteval->stack[((hsi*135+58646)*1+lsi)*1]), &(inteval->stack[((hsi*108+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+38396)*1+lsi)*1]), &(inteval->stack[((hsi*270+58781)*1+lsi)*1]), &(inteval->stack[((hsi*216+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+2630)*1+lsi)*1]), &(inteval->stack[((hsi*360+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+58646)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+2630)*1+lsi)*1]), &(inteval->stack[((hsi*105+7140)*1+lsi)*1]), &(inteval->stack[((hsi*91+7245)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+37100)*1+lsi)*1]), &(inteval->stack[((hsi*273+2630)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+2630)*1+lsi)*1]), &(inteval->stack[((hsi*468+37100)*1+lsi)*1]), &(inteval->stack[((hsi*396+1440)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+61172)*1+lsi)*1]), &(inteval->stack[((hsi*660+2630)*1+lsi)*1]), &(inteval->stack[((hsi*550+7336)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+7140)*1+lsi)*1]), &(inteval->stack[((hsi*825+61172)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+22988)*1+lsi)*1]), &(inteval->stack[((hsi*945+7140)*1+lsi)*1]), &(inteval->stack[((hsi*756+58646)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2630)*1+lsi)*1]), &(inteval->stack[((hsi*55+2575)*1+lsi)*1]), &(inteval->stack[((hsi*45+1350)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+55234)*1+lsi)*1]), &(inteval->stack[((hsi*66+7074)*1+lsi)*1]), &(inteval->stack[((hsi*55+2575)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+2765)*1+lsi)*1]), &(inteval->stack[((hsi*165+55234)*1+lsi)*1]), &(inteval->stack[((hsi*135+2630)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1395)*1+lsi)*1]), &(inteval->stack[((hsi*78+6996)*1+lsi)*1]), &(inteval->stack[((hsi*66+7074)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+1395)*1+lsi)*1]), &(inteval->stack[((hsi*165+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+55234)*1+lsi)*1]), &(inteval->stack[((hsi*330+9105)*1+lsi)*1]), &(inteval->stack[((hsi*270+2765)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+38396)*1+lsi)*1]), &(inteval->stack[((hsi*91+6905)*1+lsi)*1]), &(inteval->stack[((hsi*78+6996)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+37100)*1+lsi)*1]), &(inteval->stack[((hsi*234+38396)*1+lsi)*1]), &(inteval->stack[((hsi*198+1395)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+1395)*1+lsi)*1]), &(inteval->stack[((hsi*396+37100)*1+lsi)*1]), &(inteval->stack[((hsi*330+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+61172)*1+lsi)*1]), &(inteval->stack[((hsi*550+1395)*1+lsi)*1]), &(inteval->stack[((hsi*450+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+9105)*1+lsi)*1]), &(inteval->stack[((hsi*45+1350)*1+lsi)*1]), &(inteval->stack[((hsi*36+360)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+360)*1+lsi)*1]), &(inteval->stack[((hsi*135+2630)*1+lsi)*1]), &(inteval->stack[((hsi*108+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+9105)*1+lsi)*1]), &(inteval->stack[((hsi*270+2765)*1+lsi)*1]), &(inteval->stack[((hsi*216+360)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+360)*1+lsi)*1]), &(inteval->stack[((hsi*450+55234)*1+lsi)*1]), &(inteval->stack[((hsi*360+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+2575)*1+lsi)*1]), &(inteval->stack[((hsi*675+61172)*1+lsi)*1]), &(inteval->stack[((hsi*540+360)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*105+6800)*1+lsi)*1]), &(inteval->stack[((hsi*91+6905)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+9105)*1+lsi)*1]), &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*234+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+55234)*1+lsi)*1]), &(inteval->stack[((hsi*468+9105)*1+lsi)*1]), &(inteval->stack[((hsi*396+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+61847)*1+lsi)*1]), &(inteval->stack[((hsi*660+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+1395)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+62672)*1+lsi)*1]), &(inteval->stack[((hsi*825+61847)*1+lsi)*1]), &(inteval->stack[((hsi*675+61172)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+21980)*1+lsi)*1]), &(inteval->stack[((hsi*945+62672)*1+lsi)*1]), &(inteval->stack[((hsi*756+2575)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+61172)*1+lsi)*1]), &(inteval->stack[((hsi*55+2520)*1+lsi)*1]), &(inteval->stack[((hsi*45+1305)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+61307)*1+lsi)*1]), &(inteval->stack[((hsi*66+6734)*1+lsi)*1]), &(inteval->stack[((hsi*55+2520)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+61472)*1+lsi)*1]), &(inteval->stack[((hsi*165+61307)*1+lsi)*1]), &(inteval->stack[((hsi*135+61172)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+61742)*1+lsi)*1]), &(inteval->stack[((hsi*78+6656)*1+lsi)*1]), &(inteval->stack[((hsi*66+6734)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+61940)*1+lsi)*1]), &(inteval->stack[((hsi*198+61742)*1+lsi)*1]), &(inteval->stack[((hsi*165+61307)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+55234)*1+lsi)*1]), &(inteval->stack[((hsi*330+61940)*1+lsi)*1]), &(inteval->stack[((hsi*270+61472)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+1350)*1+lsi)*1]), &(inteval->stack[((hsi*91+6565)*1+lsi)*1]), &(inteval->stack[((hsi*78+6656)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9105)*1+lsi)*1]), &(inteval->stack[((hsi*234+1350)*1+lsi)*1]), &(inteval->stack[((hsi*198+61742)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+9105)*1+lsi)*1]), &(inteval->stack[((hsi*330+61940)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+61742)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+360)*1+lsi)*1]), &(inteval->stack[((hsi*45+1305)*1+lsi)*1]), &(inteval->stack[((hsi*36+324)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+38396)*1+lsi)*1]), &(inteval->stack[((hsi*135+61172)*1+lsi)*1]), &(inteval->stack[((hsi*108+360)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+324)*1+lsi)*1]), &(inteval->stack[((hsi*270+61472)*1+lsi)*1]), &(inteval->stack[((hsi*216+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+55234)*1+lsi)*1]), &(inteval->stack[((hsi*360+324)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+64167)*1+lsi)*1]), &(inteval->stack[((hsi*675+61742)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*105+6460)*1+lsi)*1]), &(inteval->stack[((hsi*91+6565)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+6460)*1+lsi)*1]), &(inteval->stack[((hsi*273+55234)*1+lsi)*1]), &(inteval->stack[((hsi*234+1350)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+1305)*1+lsi)*1]), &(inteval->stack[((hsi*468+6460)*1+lsi)*1]), &(inteval->stack[((hsi*396+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+64923)*1+lsi)*1]), &(inteval->stack[((hsi*660+1305)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+65748)*1+lsi)*1]), &(inteval->stack[((hsi*825+64923)*1+lsi)*1]), &(inteval->stack[((hsi*675+61742)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+20972)*1+lsi)*1]), &(inteval->stack[((hsi*945+65748)*1+lsi)*1]), &(inteval->stack[((hsi*756+64167)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+61172)*1+lsi)*1]), &(inteval->stack[((hsi*55+2465)*1+lsi)*1]), &(inteval->stack[((hsi*45+1260)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+61307)*1+lsi)*1]), &(inteval->stack[((hsi*66+6394)*1+lsi)*1]), &(inteval->stack[((hsi*55+2465)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+61472)*1+lsi)*1]), &(inteval->stack[((hsi*165+61307)*1+lsi)*1]), &(inteval->stack[((hsi*135+61172)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+61742)*1+lsi)*1]), &(inteval->stack[((hsi*78+6316)*1+lsi)*1]), &(inteval->stack[((hsi*66+6394)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+64923)*1+lsi)*1]), &(inteval->stack[((hsi*198+61742)*1+lsi)*1]), &(inteval->stack[((hsi*165+61307)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+6394)*1+lsi)*1]), &(inteval->stack[((hsi*330+64923)*1+lsi)*1]), &(inteval->stack[((hsi*270+61472)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+61940)*1+lsi)*1]), &(inteval->stack[((hsi*91+6225)*1+lsi)*1]), &(inteval->stack[((hsi*78+6316)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+1305)*1+lsi)*1]), &(inteval->stack[((hsi*234+61940)*1+lsi)*1]), &(inteval->stack[((hsi*198+61742)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+1305)*1+lsi)*1]), &(inteval->stack[((hsi*330+64923)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+6394)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+64923)*1+lsi)*1]), &(inteval->stack[((hsi*45+1260)*1+lsi)*1]), &(inteval->stack[((hsi*36+288)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+65031)*1+lsi)*1]), &(inteval->stack[((hsi*135+61172)*1+lsi)*1]), &(inteval->stack[((hsi*108+64923)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+288)*1+lsi)*1]), &(inteval->stack[((hsi*270+61472)*1+lsi)*1]), &(inteval->stack[((hsi*216+65031)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+6394)*1+lsi)*1]), &(inteval->stack[((hsi*360+288)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+64923)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+6316)*1+lsi)*1]), &(inteval->stack[((hsi*105+6120)*1+lsi)*1]), &(inteval->stack[((hsi*91+6225)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+61172)*1+lsi)*1]), &(inteval->stack[((hsi*273+6316)*1+lsi)*1]), &(inteval->stack[((hsi*234+61940)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+61640)*1+lsi)*1]), &(inteval->stack[((hsi*468+61172)*1+lsi)*1]), &(inteval->stack[((hsi*396+1305)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+6120)*1+lsi)*1]), &(inteval->stack[((hsi*660+61640)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+61172)*1+lsi)*1]), &(inteval->stack[((hsi*825+6120)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+19964)*1+lsi)*1]), &(inteval->stack[((hsi*945+61172)*1+lsi)*1]), &(inteval->stack[((hsi*756+64923)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+6120)*1+lsi)*1]), &(inteval->stack[((hsi*55+2410)*1+lsi)*1]), &(inteval->stack[((hsi*45+1215)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+6255)*1+lsi)*1]), &(inteval->stack[((hsi*66+6054)*1+lsi)*1]), &(inteval->stack[((hsi*55+2410)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1260)*1+lsi)*1]), &(inteval->stack[((hsi*165+6255)*1+lsi)*1]), &(inteval->stack[((hsi*135+6120)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+6420)*1+lsi)*1]), &(inteval->stack[((hsi*78+5976)*1+lsi)*1]), &(inteval->stack[((hsi*66+6054)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+6420)*1+lsi)*1]), &(inteval->stack[((hsi*165+6255)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+288)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+1260)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+5885)*1+lsi)*1]), &(inteval->stack[((hsi*78+5976)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+6420)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+288)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+6255)*1+lsi)*1]), &(inteval->stack[((hsi*45+1215)*1+lsi)*1]), &(inteval->stack[((hsi*36+252)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+6363)*1+lsi)*1]), &(inteval->stack[((hsi*135+6120)*1+lsi)*1]), &(inteval->stack[((hsi*108+6255)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+6579)*1+lsi)*1]), &(inteval->stack[((hsi*270+1260)*1+lsi)*1]), &(inteval->stack[((hsi*216+6363)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+288)*1+lsi)*1]), &(inteval->stack[((hsi*360+6579)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+5976)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+1215)*1+lsi)*1]), &(inteval->stack[((hsi*105+5780)*1+lsi)*1]), &(inteval->stack[((hsi*91+5885)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+252)*1+lsi)*1]), &(inteval->stack[((hsi*273+1215)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+1215)*1+lsi)*1]), &(inteval->stack[((hsi*468+252)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+66693)*1+lsi)*1]), &(inteval->stack[((hsi*660+1215)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+67518)*1+lsi)*1]), &(inteval->stack[((hsi*825+66693)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+18956)*1+lsi)*1]), &(inteval->stack[((hsi*945+67518)*1+lsi)*1]), &(inteval->stack[((hsi*756+5976)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+66693)*1+lsi)*1]), &(inteval->stack[((hsi*55+2355)*1+lsi)*1]), &(inteval->stack[((hsi*45+1170)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+2410)*1+lsi)*1]), &(inteval->stack[((hsi*66+5714)*1+lsi)*1]), &(inteval->stack[((hsi*55+2355)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1215)*1+lsi)*1]), &(inteval->stack[((hsi*165+2410)*1+lsi)*1]), &(inteval->stack[((hsi*135+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+66828)*1+lsi)*1]), &(inteval->stack[((hsi*78+5636)*1+lsi)*1]), &(inteval->stack[((hsi*66+5714)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+66828)*1+lsi)*1]), &(inteval->stack[((hsi*165+2410)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+252)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+1215)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+5545)*1+lsi)*1]), &(inteval->stack[((hsi*78+5636)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+66828)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+252)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+66828)*1+lsi)*1]), &(inteval->stack[((hsi*45+1170)*1+lsi)*1]), &(inteval->stack[((hsi*36+216)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+66936)*1+lsi)*1]), &(inteval->stack[((hsi*135+66693)*1+lsi)*1]), &(inteval->stack[((hsi*108+66828)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+37100)*1+lsi)*1]), &(inteval->stack[((hsi*270+1215)*1+lsi)*1]), &(inteval->stack[((hsi*216+66936)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+252)*1+lsi)*1]), &(inteval->stack[((hsi*360+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+1170)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*105+5440)*1+lsi)*1]), &(inteval->stack[((hsi*91+5545)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+216)*1+lsi)*1]), &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*468+216)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+68463)*1+lsi)*1]), &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+69288)*1+lsi)*1]), &(inteval->stack[((hsi*825+68463)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+17948)*1+lsi)*1]), &(inteval->stack[((hsi*945+69288)*1+lsi)*1]), &(inteval->stack[((hsi*756+1170)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+68463)*1+lsi)*1]), &(inteval->stack[((hsi*55+2300)*1+lsi)*1]), &(inteval->stack[((hsi*45+1125)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+66693)*1+lsi)*1]), &(inteval->stack[((hsi*66+5374)*1+lsi)*1]), &(inteval->stack[((hsi*55+2300)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+68598)*1+lsi)*1]), &(inteval->stack[((hsi*165+66693)*1+lsi)*1]), &(inteval->stack[((hsi*135+68463)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+216)*1+lsi)*1]), &(inteval->stack[((hsi*78+5296)*1+lsi)*1]), &(inteval->stack[((hsi*66+5374)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+216)*1+lsi)*1]), &(inteval->stack[((hsi*165+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+66693)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+68598)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+5205)*1+lsi)*1]), &(inteval->stack[((hsi*78+5296)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+5296)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+216)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+5296)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+216)*1+lsi)*1]), &(inteval->stack[((hsi*45+1125)*1+lsi)*1]), &(inteval->stack[((hsi*36+180)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+324)*1+lsi)*1]), &(inteval->stack[((hsi*135+68463)*1+lsi)*1]), &(inteval->stack[((hsi*108+216)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+540)*1+lsi)*1]), &(inteval->stack[((hsi*270+68598)*1+lsi)*1]), &(inteval->stack[((hsi*216+324)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+66693)*1+lsi)*1]), &(inteval->stack[((hsi*360+540)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+68463)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*105+5100)*1+lsi)*1]), &(inteval->stack[((hsi*91+5205)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+180)*1+lsi)*1]), &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*468+180)*1+lsi)*1]), &(inteval->stack[((hsi*396+5296)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+5100)*1+lsi)*1]), &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+70233)*1+lsi)*1]), &(inteval->stack[((hsi*825+5100)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+16940)*1+lsi)*1]), &(inteval->stack[((hsi*945+70233)*1+lsi)*1]), &(inteval->stack[((hsi*756+68463)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+5100)*1+lsi)*1]), &(inteval->stack[((hsi*55+2245)*1+lsi)*1]), &(inteval->stack[((hsi*45+1080)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+66693)*1+lsi)*1]), &(inteval->stack[((hsi*66+5034)*1+lsi)*1]), &(inteval->stack[((hsi*55+2245)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+5235)*1+lsi)*1]), &(inteval->stack[((hsi*165+66693)*1+lsi)*1]), &(inteval->stack[((hsi*135+5100)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+180)*1+lsi)*1]), &(inteval->stack[((hsi*78+4956)*1+lsi)*1]), &(inteval->stack[((hsi*66+5034)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2245)*1+lsi)*1]), &(inteval->stack[((hsi*198+180)*1+lsi)*1]), &(inteval->stack[((hsi*165+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+66693)*1+lsi)*1]), &(inteval->stack[((hsi*330+2245)*1+lsi)*1]), &(inteval->stack[((hsi*270+5235)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+55234)*1+lsi)*1]), &(inteval->stack[((hsi*91+4865)*1+lsi)*1]), &(inteval->stack[((hsi*78+4956)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+9105)*1+lsi)*1]), &(inteval->stack[((hsi*234+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+180)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+9105)*1+lsi)*1]), &(inteval->stack[((hsi*330+2245)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+180)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+62117)*1+lsi)*1]), &(inteval->stack[((hsi*45+1080)*1+lsi)*1]), &(inteval->stack[((hsi*36+144)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+38396)*1+lsi)*1]), &(inteval->stack[((hsi*135+5100)*1+lsi)*1]), &(inteval->stack[((hsi*108+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+62117)*1+lsi)*1]), &(inteval->stack[((hsi*270+5235)*1+lsi)*1]), &(inteval->stack[((hsi*216+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+66693)*1+lsi)*1]), &(inteval->stack[((hsi*360+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+4956)*1+lsi)*1]), &(inteval->stack[((hsi*675+180)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*105+4760)*1+lsi)*1]), &(inteval->stack[((hsi*91+4865)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+62117)*1+lsi)*1]), &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*234+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*468+62117)*1+lsi)*1]), &(inteval->stack[((hsi*396+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+71178)*1+lsi)*1]), &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+72003)*1+lsi)*1]), &(inteval->stack[((hsi*825+71178)*1+lsi)*1]), &(inteval->stack[((hsi*675+180)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+15932)*1+lsi)*1]), &(inteval->stack[((hsi*945+72003)*1+lsi)*1]), &(inteval->stack[((hsi*756+4956)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+71178)*1+lsi)*1]), &(inteval->stack[((hsi*55+2190)*1+lsi)*1]), &(inteval->stack[((hsi*45+1035)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+66693)*1+lsi)*1]), &(inteval->stack[((hsi*66+4694)*1+lsi)*1]), &(inteval->stack[((hsi*55+2190)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+144)*1+lsi)*1]), &(inteval->stack[((hsi*165+66693)*1+lsi)*1]), &(inteval->stack[((hsi*135+71178)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+71313)*1+lsi)*1]), &(inteval->stack[((hsi*78+4616)*1+lsi)*1]), &(inteval->stack[((hsi*66+4694)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+71313)*1+lsi)*1]), &(inteval->stack[((hsi*165+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+66693)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+144)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+4525)*1+lsi)*1]), &(inteval->stack[((hsi*78+4616)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+71313)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+71313)*1+lsi)*1]), &(inteval->stack[((hsi*45+1035)*1+lsi)*1]), &(inteval->stack[((hsi*36+108)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+71421)*1+lsi)*1]), &(inteval->stack[((hsi*135+71178)*1+lsi)*1]), &(inteval->stack[((hsi*108+71313)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+37100)*1+lsi)*1]), &(inteval->stack[((hsi*270+144)*1+lsi)*1]), &(inteval->stack[((hsi*216+71421)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+66693)*1+lsi)*1]), &(inteval->stack[((hsi*360+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+71178)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*105+4420)*1+lsi)*1]), &(inteval->stack[((hsi*91+4525)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+108)*1+lsi)*1]), &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*468+108)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+72948)*1+lsi)*1]), &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+73773)*1+lsi)*1]), &(inteval->stack[((hsi*825+72948)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+14924)*1+lsi)*1]), &(inteval->stack[((hsi*945+73773)*1+lsi)*1]), &(inteval->stack[((hsi*756+71178)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1035)*1+lsi)*1]), &(inteval->stack[((hsi*55+2135)*1+lsi)*1]), &(inteval->stack[((hsi*45+990)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+72948)*1+lsi)*1]), &(inteval->stack[((hsi*66+4354)*1+lsi)*1]), &(inteval->stack[((hsi*55+2135)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+66693)*1+lsi)*1]), &(inteval->stack[((hsi*165+72948)*1+lsi)*1]), &(inteval->stack[((hsi*135+1035)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+108)*1+lsi)*1]), &(inteval->stack[((hsi*78+4276)*1+lsi)*1]), &(inteval->stack[((hsi*66+4354)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+108)*1+lsi)*1]), &(inteval->stack[((hsi*165+72948)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+72948)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+4185)*1+lsi)*1]), &(inteval->stack[((hsi*78+4276)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+4276)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+108)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+4276)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+72948)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+108)*1+lsi)*1]), &(inteval->stack[((hsi*45+990)*1+lsi)*1]), &(inteval->stack[((hsi*36+72)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+216)*1+lsi)*1]), &(inteval->stack[((hsi*135+1035)*1+lsi)*1]), &(inteval->stack[((hsi*108+108)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+62117)*1+lsi)*1]), &(inteval->stack[((hsi*270+66693)*1+lsi)*1]), &(inteval->stack[((hsi*216+216)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+72948)*1+lsi)*1]), &(inteval->stack[((hsi*360+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+72)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*105+4080)*1+lsi)*1]), &(inteval->stack[((hsi*91+4185)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+72948)*1+lsi)*1]), &(inteval->stack[((hsi*273+66693)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*468+72948)*1+lsi)*1]), &(inteval->stack[((hsi*396+4276)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+72948)*1+lsi)*1]), &(inteval->stack[((hsi*660+66693)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+74718)*1+lsi)*1]), &(inteval->stack[((hsi*825+72948)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+13916)*1+lsi)*1]), &(inteval->stack[((hsi*945+74718)*1+lsi)*1]), &(inteval->stack[((hsi*756+72)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+4080)*1+lsi)*1]), &(inteval->stack[((hsi*55+2080)*1+lsi)*1]), &(inteval->stack[((hsi*45+945)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+72948)*1+lsi)*1]), &(inteval->stack[((hsi*66+4014)*1+lsi)*1]), &(inteval->stack[((hsi*55+2080)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+66693)*1+lsi)*1]), &(inteval->stack[((hsi*165+72948)*1+lsi)*1]), &(inteval->stack[((hsi*135+4080)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+4215)*1+lsi)*1]), &(inteval->stack[((hsi*78+3936)*1+lsi)*1]), &(inteval->stack[((hsi*66+4014)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*198+4215)*1+lsi)*1]), &(inteval->stack[((hsi*165+72948)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+72948)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]), &(inteval->stack[((hsi*270+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+3845)*1+lsi)*1]), &(inteval->stack[((hsi*78+3936)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+4215)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*330+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+72948)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+4215)*1+lsi)*1]), &(inteval->stack[((hsi*45+945)*1+lsi)*1]), &(inteval->stack[((hsi*36+36)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+4323)*1+lsi)*1]), &(inteval->stack[((hsi*135+4080)*1+lsi)*1]), &(inteval->stack[((hsi*108+4215)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+66963)*1+lsi)*1]), &(inteval->stack[((hsi*270+66693)*1+lsi)*1]), &(inteval->stack[((hsi*216+4323)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+38396)*1+lsi)*1]), &(inteval->stack[((hsi*450+72948)*1+lsi)*1]), &(inteval->stack[((hsi*360+66963)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+3936)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+72948)*1+lsi)*1]), &(inteval->stack[((hsi*105+3740)*1+lsi)*1]), &(inteval->stack[((hsi*91+3845)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+66693)*1+lsi)*1]), &(inteval->stack[((hsi*273+72948)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+72948)*1+lsi)*1]), &(inteval->stack[((hsi*468+66693)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+66693)*1+lsi)*1]), &(inteval->stack[((hsi*660+72948)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+75663)*1+lsi)*1]), &(inteval->stack[((hsi*825+66693)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+12908)*1+lsi)*1]), &(inteval->stack[((hsi*945+75663)*1+lsi)*1]), &(inteval->stack[((hsi*756+3936)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+66693)*1+lsi)*1]), &(inteval->stack[((hsi*55+2025)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+72948)*1+lsi)*1]), &(inteval->stack[((hsi*66+3674)*1+lsi)*1]), &(inteval->stack[((hsi*55+2025)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+66828)*1+lsi)*1]), &(inteval->stack[((hsi*165+72948)*1+lsi)*1]), &(inteval->stack[((hsi*135+66693)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+55234)*1+lsi)*1]), &(inteval->stack[((hsi*78+3596)*1+lsi)*1]), &(inteval->stack[((hsi*66+3674)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+73113)*1+lsi)*1]), &(inteval->stack[((hsi*198+55234)*1+lsi)*1]), &(inteval->stack[((hsi*165+72948)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+1926)*1+lsi)*1]), &(inteval->stack[((hsi*330+73113)*1+lsi)*1]), &(inteval->stack[((hsi*270+66828)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*91+3505)*1+lsi)*1]), &(inteval->stack[((hsi*78+3596)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]), &(inteval->stack[((hsi*198+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]), &(inteval->stack[((hsi*330+73113)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]), &(inteval->stack[((hsi*450+1926)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+72948)*1+lsi)*1]), &(inteval->stack[((hsi*45+900)*1+lsi)*1]), &(inteval->stack[((hsi*36+0)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+73056)*1+lsi)*1]), &(inteval->stack[((hsi*135+66693)*1+lsi)*1]), &(inteval->stack[((hsi*108+72948)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+38396)*1+lsi)*1]), &(inteval->stack[((hsi*270+66828)*1+lsi)*1]), &(inteval->stack[((hsi*216+73056)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+37100)*1+lsi)*1]), &(inteval->stack[((hsi*450+1926)*1+lsi)*1]), &(inteval->stack[((hsi*360+38396)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+66693)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]), &(inteval->stack[((hsi*540+37100)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+72948)*1+lsi)*1]), &(inteval->stack[((hsi*105+3400)*1+lsi)*1]), &(inteval->stack[((hsi*91+3505)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+1926)*1+lsi)*1]), &(inteval->stack[((hsi*273+72948)*1+lsi)*1]), &(inteval->stack[((hsi*234+9105)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+72948)*1+lsi)*1]), &(inteval->stack[((hsi*468+1926)*1+lsi)*1]), &(inteval->stack[((hsi*396+62117)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+76608)*1+lsi)*1]), &(inteval->stack[((hsi*660+72948)*1+lsi)*1]), &(inteval->stack[((hsi*550+63617)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+77433)*1+lsi)*1]), &(inteval->stack[((hsi*825+76608)*1+lsi)*1]), &(inteval->stack[((hsi*675+55234)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+11900)*1+lsi)*1]), &(inteval->stack[((hsi*945+77433)*1+lsi)*1]), &(inteval->stack[((hsi*756+66693)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1008+11900)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*1008+12908)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*1008+13916)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*1008+14924)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*1008+15932)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*1008+16940)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*1008+17948)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*1008+18956)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*1008+19964)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*1008+20972)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*1008+21980)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*1008+22988)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*1008+23996)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*1008+25004)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*1008+26012)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*1008+27020)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*1008+28028)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*1008+29036)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*1008+30044)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*1008+31052)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*1008+32060)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*1008+33068)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*1008+34076)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*1008+35084)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*1008+36092)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
