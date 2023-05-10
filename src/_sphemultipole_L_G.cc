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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <_sphemultipole_L_G_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_L_G(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8375)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_L_G_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+8209)*1+lsi)*1]), &(inteval->stack[((hsi*55+8275)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+8131)*1+lsi)*1]), &(inteval->stack[((hsi*66+8209)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+8275)*1+lsi)*1]), &(inteval->stack[((hsi*45+8330)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+26348)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+8040)*1+lsi)*1]), &(inteval->stack[((hsi*78+8131)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+27194)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+24575)*1+lsi)*1]), &(inteval->stack[((hsi*550+27194)*1+lsi)*1]), &(inteval->stack[((hsi*450+26348)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+7874)*1+lsi)*1]), &(inteval->stack[((hsi*55+7940)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+7796)*1+lsi)*1]), &(inteval->stack[((hsi*66+7874)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+7940)*1+lsi)*1]), &(inteval->stack[((hsi*45+7995)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+7874)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+7705)*1+lsi)*1]), &(inteval->stack[((hsi*78+7796)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+27744)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+23900)*1+lsi)*1]), &(inteval->stack[((hsi*550+27744)*1+lsi)*1]), &(inteval->stack[((hsi*450+7874)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+7539)*1+lsi)*1]), &(inteval->stack[((hsi*55+7605)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+7461)*1+lsi)*1]), &(inteval->stack[((hsi*66+7539)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+7605)*1+lsi)*1]), &(inteval->stack[((hsi*45+7660)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+28294)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+7370)*1+lsi)*1]), &(inteval->stack[((hsi*78+7461)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+28744)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+23225)*1+lsi)*1]), &(inteval->stack[((hsi*550+28744)*1+lsi)*1]), &(inteval->stack[((hsi*450+28294)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+7204)*1+lsi)*1]), &(inteval->stack[((hsi*55+7270)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+7126)*1+lsi)*1]), &(inteval->stack[((hsi*66+7204)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+7370)*1+lsi)*1]), &(inteval->stack[((hsi*55+7270)*1+lsi)*1]), &(inteval->stack[((hsi*45+7325)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+7370)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+7204)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+7035)*1+lsi)*1]), &(inteval->stack[((hsi*78+7126)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+29294)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+22550)*1+lsi)*1]), &(inteval->stack[((hsi*550+29294)*1+lsi)*1]), &(inteval->stack[((hsi*450+7204)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+6869)*1+lsi)*1]), &(inteval->stack[((hsi*55+6935)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+6791)*1+lsi)*1]), &(inteval->stack[((hsi*66+6869)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+6935)*1+lsi)*1]), &(inteval->stack[((hsi*45+6990)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+29844)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+6700)*1+lsi)*1]), &(inteval->stack[((hsi*78+6791)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+30294)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+21875)*1+lsi)*1]), &(inteval->stack[((hsi*550+30294)*1+lsi)*1]), &(inteval->stack[((hsi*450+29844)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+6534)*1+lsi)*1]), &(inteval->stack[((hsi*55+6600)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+6456)*1+lsi)*1]), &(inteval->stack[((hsi*66+6534)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+6700)*1+lsi)*1]), &(inteval->stack[((hsi*55+6600)*1+lsi)*1]), &(inteval->stack[((hsi*45+6655)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+6700)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+6534)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+6365)*1+lsi)*1]), &(inteval->stack[((hsi*78+6456)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+30844)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+21200)*1+lsi)*1]), &(inteval->stack[((hsi*550+30844)*1+lsi)*1]), &(inteval->stack[((hsi*450+6534)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+6199)*1+lsi)*1]), &(inteval->stack[((hsi*55+6265)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+6121)*1+lsi)*1]), &(inteval->stack[((hsi*66+6199)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+6265)*1+lsi)*1]), &(inteval->stack[((hsi*45+6320)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+31394)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+6030)*1+lsi)*1]), &(inteval->stack[((hsi*78+6121)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+31844)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+20525)*1+lsi)*1]), &(inteval->stack[((hsi*550+31844)*1+lsi)*1]), &(inteval->stack[((hsi*450+31394)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+5864)*1+lsi)*1]), &(inteval->stack[((hsi*55+5930)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+5786)*1+lsi)*1]), &(inteval->stack[((hsi*66+5864)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+6030)*1+lsi)*1]), &(inteval->stack[((hsi*55+5930)*1+lsi)*1]), &(inteval->stack[((hsi*45+5985)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+6030)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+5864)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+5695)*1+lsi)*1]), &(inteval->stack[((hsi*78+5786)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+32394)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+19850)*1+lsi)*1]), &(inteval->stack[((hsi*550+32394)*1+lsi)*1]), &(inteval->stack[((hsi*450+5864)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+5529)*1+lsi)*1]), &(inteval->stack[((hsi*55+5595)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+5451)*1+lsi)*1]), &(inteval->stack[((hsi*66+5529)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+5595)*1+lsi)*1]), &(inteval->stack[((hsi*45+5650)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+32944)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+5360)*1+lsi)*1]), &(inteval->stack[((hsi*78+5451)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+33394)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+19175)*1+lsi)*1]), &(inteval->stack[((hsi*550+33394)*1+lsi)*1]), &(inteval->stack[((hsi*450+32944)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+5194)*1+lsi)*1]), &(inteval->stack[((hsi*55+5260)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+5116)*1+lsi)*1]), &(inteval->stack[((hsi*66+5194)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+5360)*1+lsi)*1]), &(inteval->stack[((hsi*55+5260)*1+lsi)*1]), &(inteval->stack[((hsi*45+5315)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+5360)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+5194)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+5025)*1+lsi)*1]), &(inteval->stack[((hsi*78+5116)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+33944)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+18500)*1+lsi)*1]), &(inteval->stack[((hsi*550+33944)*1+lsi)*1]), &(inteval->stack[((hsi*450+5194)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+4859)*1+lsi)*1]), &(inteval->stack[((hsi*55+4925)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+4781)*1+lsi)*1]), &(inteval->stack[((hsi*66+4859)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+4925)*1+lsi)*1]), &(inteval->stack[((hsi*45+4980)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+34494)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+4690)*1+lsi)*1]), &(inteval->stack[((hsi*78+4781)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+34944)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+17825)*1+lsi)*1]), &(inteval->stack[((hsi*550+34944)*1+lsi)*1]), &(inteval->stack[((hsi*450+34494)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+4524)*1+lsi)*1]), &(inteval->stack[((hsi*55+4590)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+4446)*1+lsi)*1]), &(inteval->stack[((hsi*66+4524)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4690)*1+lsi)*1]), &(inteval->stack[((hsi*55+4590)*1+lsi)*1]), &(inteval->stack[((hsi*45+4645)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+4690)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+4524)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+4355)*1+lsi)*1]), &(inteval->stack[((hsi*78+4446)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+35494)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+17150)*1+lsi)*1]), &(inteval->stack[((hsi*550+35494)*1+lsi)*1]), &(inteval->stack[((hsi*450+4524)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+4189)*1+lsi)*1]), &(inteval->stack[((hsi*55+4255)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+4111)*1+lsi)*1]), &(inteval->stack[((hsi*66+4189)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+4255)*1+lsi)*1]), &(inteval->stack[((hsi*45+4310)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+36044)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+4020)*1+lsi)*1]), &(inteval->stack[((hsi*78+4111)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+36494)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+16475)*1+lsi)*1]), &(inteval->stack[((hsi*550+36494)*1+lsi)*1]), &(inteval->stack[((hsi*450+36044)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+3854)*1+lsi)*1]), &(inteval->stack[((hsi*55+3920)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+3776)*1+lsi)*1]), &(inteval->stack[((hsi*66+3854)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4020)*1+lsi)*1]), &(inteval->stack[((hsi*55+3920)*1+lsi)*1]), &(inteval->stack[((hsi*45+3975)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+4020)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3854)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+3685)*1+lsi)*1]), &(inteval->stack[((hsi*78+3776)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+37044)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+15800)*1+lsi)*1]), &(inteval->stack[((hsi*550+37044)*1+lsi)*1]), &(inteval->stack[((hsi*450+3854)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+3519)*1+lsi)*1]), &(inteval->stack[((hsi*55+3585)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+3441)*1+lsi)*1]), &(inteval->stack[((hsi*66+3519)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+3585)*1+lsi)*1]), &(inteval->stack[((hsi*45+3640)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+37594)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+3350)*1+lsi)*1]), &(inteval->stack[((hsi*78+3441)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38044)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+15125)*1+lsi)*1]), &(inteval->stack[((hsi*550+38044)*1+lsi)*1]), &(inteval->stack[((hsi*450+37594)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+3184)*1+lsi)*1]), &(inteval->stack[((hsi*55+3250)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+3106)*1+lsi)*1]), &(inteval->stack[((hsi*66+3184)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3350)*1+lsi)*1]), &(inteval->stack[((hsi*55+3250)*1+lsi)*1]), &(inteval->stack[((hsi*45+3305)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+3350)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3184)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+3015)*1+lsi)*1]), &(inteval->stack[((hsi*78+3106)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38594)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+14450)*1+lsi)*1]), &(inteval->stack[((hsi*550+38594)*1+lsi)*1]), &(inteval->stack[((hsi*450+3184)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+2849)*1+lsi)*1]), &(inteval->stack[((hsi*55+2915)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+2771)*1+lsi)*1]), &(inteval->stack[((hsi*66+2849)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+2915)*1+lsi)*1]), &(inteval->stack[((hsi*45+2970)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+39144)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+2680)*1+lsi)*1]), &(inteval->stack[((hsi*78+2771)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+39594)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+13775)*1+lsi)*1]), &(inteval->stack[((hsi*550+39594)*1+lsi)*1]), &(inteval->stack[((hsi*450+39144)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+2514)*1+lsi)*1]), &(inteval->stack[((hsi*55+2580)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+2436)*1+lsi)*1]), &(inteval->stack[((hsi*66+2514)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2680)*1+lsi)*1]), &(inteval->stack[((hsi*55+2580)*1+lsi)*1]), &(inteval->stack[((hsi*45+2635)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+2680)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+2514)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+2345)*1+lsi)*1]), &(inteval->stack[((hsi*78+2436)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+40144)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+13100)*1+lsi)*1]), &(inteval->stack[((hsi*550+40144)*1+lsi)*1]), &(inteval->stack[((hsi*450+2514)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+2179)*1+lsi)*1]), &(inteval->stack[((hsi*55+2245)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+2101)*1+lsi)*1]), &(inteval->stack[((hsi*66+2179)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+2245)*1+lsi)*1]), &(inteval->stack[((hsi*45+2300)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+40694)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+2010)*1+lsi)*1]), &(inteval->stack[((hsi*78+2101)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+41144)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+12425)*1+lsi)*1]), &(inteval->stack[((hsi*550+41144)*1+lsi)*1]), &(inteval->stack[((hsi*450+40694)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+1844)*1+lsi)*1]), &(inteval->stack[((hsi*55+1910)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+1766)*1+lsi)*1]), &(inteval->stack[((hsi*66+1844)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2010)*1+lsi)*1]), &(inteval->stack[((hsi*55+1910)*1+lsi)*1]), &(inteval->stack[((hsi*45+1965)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+2010)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1844)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+1675)*1+lsi)*1]), &(inteval->stack[((hsi*78+1766)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+41694)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+11750)*1+lsi)*1]), &(inteval->stack[((hsi*550+41694)*1+lsi)*1]), &(inteval->stack[((hsi*450+1844)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+1509)*1+lsi)*1]), &(inteval->stack[((hsi*55+1575)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+1431)*1+lsi)*1]), &(inteval->stack[((hsi*66+1509)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+1575)*1+lsi)*1]), &(inteval->stack[((hsi*45+1630)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+42244)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+1340)*1+lsi)*1]), &(inteval->stack[((hsi*78+1431)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+42694)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+11075)*1+lsi)*1]), &(inteval->stack[((hsi*550+42694)*1+lsi)*1]), &(inteval->stack[((hsi*450+42244)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+1174)*1+lsi)*1]), &(inteval->stack[((hsi*55+1240)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+1096)*1+lsi)*1]), &(inteval->stack[((hsi*66+1174)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1340)*1+lsi)*1]), &(inteval->stack[((hsi*55+1240)*1+lsi)*1]), &(inteval->stack[((hsi*45+1295)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+1340)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+1174)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+1005)*1+lsi)*1]), &(inteval->stack[((hsi*78+1096)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+43244)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+10400)*1+lsi)*1]), &(inteval->stack[((hsi*550+43244)*1+lsi)*1]), &(inteval->stack[((hsi*450+1174)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+839)*1+lsi)*1]), &(inteval->stack[((hsi*55+905)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+761)*1+lsi)*1]), &(inteval->stack[((hsi*66+839)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+905)*1+lsi)*1]), &(inteval->stack[((hsi*45+960)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+43794)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+670)*1+lsi)*1]), &(inteval->stack[((hsi*78+761)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+44244)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+9725)*1+lsi)*1]), &(inteval->stack[((hsi*550+44244)*1+lsi)*1]), &(inteval->stack[((hsi*450+43794)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+504)*1+lsi)*1]), &(inteval->stack[((hsi*55+570)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+426)*1+lsi)*1]), &(inteval->stack[((hsi*66+504)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+670)*1+lsi)*1]), &(inteval->stack[((hsi*55+570)*1+lsi)*1]), &(inteval->stack[((hsi*45+625)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+25943)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+670)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+504)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+335)*1+lsi)*1]), &(inteval->stack[((hsi*78+426)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+44794)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+9050)*1+lsi)*1]), &(inteval->stack[((hsi*550+44794)*1+lsi)*1]), &(inteval->stack[((hsi*450+504)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+25943)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+26078)*1+lsi)*1]), &(inteval->stack[((hsi*165+25250)*1+lsi)*1]), &(inteval->stack[((hsi*135+25943)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+45344)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]), &(inteval->stack[((hsi*270+26078)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*234+25943)*1+lsi)*1]), &(inteval->stack[((hsi*198+25415)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+45794)*1+lsi)*1]), &(inteval->stack[((hsi*396+26798)*1+lsi)*1]), &(inteval->stack[((hsi*330+25613)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+8375)*1+lsi)*1]), &(inteval->stack[((hsi*550+45794)*1+lsi)*1]), &(inteval->stack[((hsi*450+45344)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*675+8375)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*675+9050)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*675+9725)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*675+10400)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*675+11075)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*675+11750)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*675+12425)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*675+13100)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*675+13775)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*675+14450)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*675+15125)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*675+15800)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*675+16475)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*675+17150)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*675+17825)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*675+18500)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*675+19175)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*675+19850)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*675+20525)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*675+21200)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*675+21875)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*675+22550)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*675+23225)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*675+23900)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*675+24575)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
