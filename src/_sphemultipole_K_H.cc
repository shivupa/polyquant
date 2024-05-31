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
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0nd.h>
#include <HRRPart0bra0ket0np.h>
#include <HRRPart0bra0ket0op.h>
#include <_sphemultipole_K_H_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _sphemultipole_K_H(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9275)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_sphemultipole_K_H_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+28175)*1+lsi)*1]), &(inteval->stack[((hsi*55+9139)*1+lsi)*1]), &(inteval->stack[((hsi*45+9194)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+28310)*1+lsi)*1]), &(inteval->stack[((hsi*66+9073)*1+lsi)*1]), &(inteval->stack[((hsi*55+9139)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+28475)*1+lsi)*1]), &(inteval->stack[((hsi*165+28310)*1+lsi)*1]), &(inteval->stack[((hsi*135+28175)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+28745)*1+lsi)*1]), &(inteval->stack[((hsi*78+8995)*1+lsi)*1]), &(inteval->stack[((hsi*66+9073)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+28943)*1+lsi)*1]), &(inteval->stack[((hsi*198+28745)*1+lsi)*1]), &(inteval->stack[((hsi*165+28310)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+29273)*1+lsi)*1]), &(inteval->stack[((hsi*330+28943)*1+lsi)*1]), &(inteval->stack[((hsi*270+28475)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+28310)*1+lsi)*1]), &(inteval->stack[((hsi*45+9194)*1+lsi)*1]), &(inteval->stack[((hsi*36+9239)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+29723)*1+lsi)*1]), &(inteval->stack[((hsi*135+28175)*1+lsi)*1]), &(inteval->stack[((hsi*108+28310)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+29939)*1+lsi)*1]), &(inteval->stack[((hsi*270+28475)*1+lsi)*1]), &(inteval->stack[((hsi*216+29723)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+28175)*1+lsi)*1]), &(inteval->stack[((hsi*450+29273)*1+lsi)*1]), &(inteval->stack[((hsi*360+29939)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+29723)*1+lsi)*1]), &(inteval->stack[((hsi*91+8904)*1+lsi)*1]), &(inteval->stack[((hsi*78+8995)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+29957)*1+lsi)*1]), &(inteval->stack[((hsi*234+29723)*1+lsi)*1]), &(inteval->stack[((hsi*198+28745)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+30353)*1+lsi)*1]), &(inteval->stack[((hsi*396+29957)*1+lsi)*1]), &(inteval->stack[((hsi*330+28943)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+30903)*1+lsi)*1]), &(inteval->stack[((hsi*550+30353)*1+lsi)*1]), &(inteval->stack[((hsi*450+29273)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+27419)*1+lsi)*1]), &(inteval->stack[((hsi*675+30903)*1+lsi)*1]), &(inteval->stack[((hsi*540+28175)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+28715)*1+lsi)*1]), &(inteval->stack[((hsi*55+8768)*1+lsi)*1]), &(inteval->stack[((hsi*45+8823)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+28850)*1+lsi)*1]), &(inteval->stack[((hsi*66+8702)*1+lsi)*1]), &(inteval->stack[((hsi*55+8768)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+29015)*1+lsi)*1]), &(inteval->stack[((hsi*165+28850)*1+lsi)*1]), &(inteval->stack[((hsi*135+28715)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+29285)*1+lsi)*1]), &(inteval->stack[((hsi*78+8624)*1+lsi)*1]), &(inteval->stack[((hsi*66+8702)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+29483)*1+lsi)*1]), &(inteval->stack[((hsi*198+29285)*1+lsi)*1]), &(inteval->stack[((hsi*165+28850)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+29813)*1+lsi)*1]), &(inteval->stack[((hsi*330+29483)*1+lsi)*1]), &(inteval->stack[((hsi*270+29015)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+30263)*1+lsi)*1]), &(inteval->stack[((hsi*45+8823)*1+lsi)*1]), &(inteval->stack[((hsi*36+8868)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+8702)*1+lsi)*1]), &(inteval->stack[((hsi*135+28715)*1+lsi)*1]), &(inteval->stack[((hsi*108+30263)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+30263)*1+lsi)*1]), &(inteval->stack[((hsi*270+29015)*1+lsi)*1]), &(inteval->stack[((hsi*216+8702)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+8702)*1+lsi)*1]), &(inteval->stack[((hsi*450+29813)*1+lsi)*1]), &(inteval->stack[((hsi*360+30263)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+30263)*1+lsi)*1]), &(inteval->stack[((hsi*91+8533)*1+lsi)*1]), &(inteval->stack[((hsi*78+8624)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+28715)*1+lsi)*1]), &(inteval->stack[((hsi*234+30263)*1+lsi)*1]), &(inteval->stack[((hsi*198+29285)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+30263)*1+lsi)*1]), &(inteval->stack[((hsi*396+28715)*1+lsi)*1]), &(inteval->stack[((hsi*330+29483)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+28715)*1+lsi)*1]), &(inteval->stack[((hsi*550+30263)*1+lsi)*1]), &(inteval->stack[((hsi*450+29813)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+26663)*1+lsi)*1]), &(inteval->stack[((hsi*675+28715)*1+lsi)*1]), &(inteval->stack[((hsi*540+8702)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+29390)*1+lsi)*1]), &(inteval->stack[((hsi*55+8397)*1+lsi)*1]), &(inteval->stack[((hsi*45+8452)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+29525)*1+lsi)*1]), &(inteval->stack[((hsi*66+8331)*1+lsi)*1]), &(inteval->stack[((hsi*55+8397)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+29690)*1+lsi)*1]), &(inteval->stack[((hsi*165+29525)*1+lsi)*1]), &(inteval->stack[((hsi*135+29390)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+29960)*1+lsi)*1]), &(inteval->stack[((hsi*78+8253)*1+lsi)*1]), &(inteval->stack[((hsi*66+8331)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+30158)*1+lsi)*1]), &(inteval->stack[((hsi*198+29960)*1+lsi)*1]), &(inteval->stack[((hsi*165+29525)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+31578)*1+lsi)*1]), &(inteval->stack[((hsi*330+30158)*1+lsi)*1]), &(inteval->stack[((hsi*270+29690)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+30488)*1+lsi)*1]), &(inteval->stack[((hsi*45+8452)*1+lsi)*1]), &(inteval->stack[((hsi*36+8497)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+8331)*1+lsi)*1]), &(inteval->stack[((hsi*135+29390)*1+lsi)*1]), &(inteval->stack[((hsi*108+30488)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+30488)*1+lsi)*1]), &(inteval->stack[((hsi*270+29690)*1+lsi)*1]), &(inteval->stack[((hsi*216+8331)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+29390)*1+lsi)*1]), &(inteval->stack[((hsi*450+31578)*1+lsi)*1]), &(inteval->stack[((hsi*360+30488)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+30488)*1+lsi)*1]), &(inteval->stack[((hsi*91+8162)*1+lsi)*1]), &(inteval->stack[((hsi*78+8253)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+8162)*1+lsi)*1]), &(inteval->stack[((hsi*234+30488)*1+lsi)*1]), &(inteval->stack[((hsi*198+29960)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+32028)*1+lsi)*1]), &(inteval->stack[((hsi*396+8162)*1+lsi)*1]), &(inteval->stack[((hsi*330+30158)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+29930)*1+lsi)*1]), &(inteval->stack[((hsi*550+32028)*1+lsi)*1]), &(inteval->stack[((hsi*450+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+25907)*1+lsi)*1]), &(inteval->stack[((hsi*675+29930)*1+lsi)*1]), &(inteval->stack[((hsi*540+29390)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+8162)*1+lsi)*1]), &(inteval->stack[((hsi*55+8026)*1+lsi)*1]), &(inteval->stack[((hsi*45+8081)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+8297)*1+lsi)*1]), &(inteval->stack[((hsi*66+7960)*1+lsi)*1]), &(inteval->stack[((hsi*55+8026)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+30605)*1+lsi)*1]), &(inteval->stack[((hsi*165+8297)*1+lsi)*1]), &(inteval->stack[((hsi*135+8162)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+8462)*1+lsi)*1]), &(inteval->stack[((hsi*78+7882)*1+lsi)*1]), &(inteval->stack[((hsi*66+7960)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+31578)*1+lsi)*1]), &(inteval->stack[((hsi*198+8462)*1+lsi)*1]), &(inteval->stack[((hsi*165+8297)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+31908)*1+lsi)*1]), &(inteval->stack[((hsi*330+31578)*1+lsi)*1]), &(inteval->stack[((hsi*270+30605)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8297)*1+lsi)*1]), &(inteval->stack[((hsi*45+8081)*1+lsi)*1]), &(inteval->stack[((hsi*36+8126)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+32358)*1+lsi)*1]), &(inteval->stack[((hsi*135+8162)*1+lsi)*1]), &(inteval->stack[((hsi*108+8297)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7960)*1+lsi)*1]), &(inteval->stack[((hsi*270+30605)*1+lsi)*1]), &(inteval->stack[((hsi*216+32358)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+32358)*1+lsi)*1]), &(inteval->stack[((hsi*450+31908)*1+lsi)*1]), &(inteval->stack[((hsi*360+7960)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+7960)*1+lsi)*1]), &(inteval->stack[((hsi*91+7791)*1+lsi)*1]), &(inteval->stack[((hsi*78+7882)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+32898)*1+lsi)*1]), &(inteval->stack[((hsi*234+7960)*1+lsi)*1]), &(inteval->stack[((hsi*198+8462)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+7791)*1+lsi)*1]), &(inteval->stack[((hsi*396+32898)*1+lsi)*1]), &(inteval->stack[((hsi*330+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+32898)*1+lsi)*1]), &(inteval->stack[((hsi*550+7791)*1+lsi)*1]), &(inteval->stack[((hsi*450+31908)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+25151)*1+lsi)*1]), &(inteval->stack[((hsi*675+32898)*1+lsi)*1]), &(inteval->stack[((hsi*540+32358)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+7791)*1+lsi)*1]), &(inteval->stack[((hsi*55+7655)*1+lsi)*1]), &(inteval->stack[((hsi*45+7710)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31578)*1+lsi)*1]), &(inteval->stack[((hsi*66+7589)*1+lsi)*1]), &(inteval->stack[((hsi*55+7655)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+7926)*1+lsi)*1]), &(inteval->stack[((hsi*165+31578)*1+lsi)*1]), &(inteval->stack[((hsi*135+7791)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+31743)*1+lsi)*1]), &(inteval->stack[((hsi*78+7511)*1+lsi)*1]), &(inteval->stack[((hsi*66+7589)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+8196)*1+lsi)*1]), &(inteval->stack[((hsi*198+31743)*1+lsi)*1]), &(inteval->stack[((hsi*165+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+8196)*1+lsi)*1]), &(inteval->stack[((hsi*270+7926)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+31941)*1+lsi)*1]), &(inteval->stack[((hsi*45+7710)*1+lsi)*1]), &(inteval->stack[((hsi*36+7755)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+32049)*1+lsi)*1]), &(inteval->stack[((hsi*135+7791)*1+lsi)*1]), &(inteval->stack[((hsi*108+31941)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+34023)*1+lsi)*1]), &(inteval->stack[((hsi*270+7926)*1+lsi)*1]), &(inteval->stack[((hsi*216+32049)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+7589)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+34023)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+31941)*1+lsi)*1]), &(inteval->stack[((hsi*91+7420)*1+lsi)*1]), &(inteval->stack[((hsi*78+7511)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+34023)*1+lsi)*1]), &(inteval->stack[((hsi*234+31941)*1+lsi)*1]), &(inteval->stack[((hsi*198+31743)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+31578)*1+lsi)*1]), &(inteval->stack[((hsi*396+34023)*1+lsi)*1]), &(inteval->stack[((hsi*330+8196)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+34023)*1+lsi)*1]), &(inteval->stack[((hsi*550+31578)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+24395)*1+lsi)*1]), &(inteval->stack[((hsi*675+34023)*1+lsi)*1]), &(inteval->stack[((hsi*540+7589)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+31578)*1+lsi)*1]), &(inteval->stack[((hsi*55+7284)*1+lsi)*1]), &(inteval->stack[((hsi*45+7339)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31713)*1+lsi)*1]), &(inteval->stack[((hsi*66+7218)*1+lsi)*1]), &(inteval->stack[((hsi*55+7284)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+8129)*1+lsi)*1]), &(inteval->stack[((hsi*165+31713)*1+lsi)*1]), &(inteval->stack[((hsi*135+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+31878)*1+lsi)*1]), &(inteval->stack[((hsi*78+7140)*1+lsi)*1]), &(inteval->stack[((hsi*66+7218)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*198+31878)*1+lsi)*1]), &(inteval->stack[((hsi*165+31713)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+34698)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*270+8129)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+8399)*1+lsi)*1]), &(inteval->stack[((hsi*45+7339)*1+lsi)*1]), &(inteval->stack[((hsi*36+7384)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+7218)*1+lsi)*1]), &(inteval->stack[((hsi*135+31578)*1+lsi)*1]), &(inteval->stack[((hsi*108+8399)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+35148)*1+lsi)*1]), &(inteval->stack[((hsi*270+8129)*1+lsi)*1]), &(inteval->stack[((hsi*216+7218)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+8129)*1+lsi)*1]), &(inteval->stack[((hsi*450+34698)*1+lsi)*1]), &(inteval->stack[((hsi*360+35148)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+7218)*1+lsi)*1]), &(inteval->stack[((hsi*91+7049)*1+lsi)*1]), &(inteval->stack[((hsi*78+7140)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+35148)*1+lsi)*1]), &(inteval->stack[((hsi*234+7218)*1+lsi)*1]), &(inteval->stack[((hsi*198+31878)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+31578)*1+lsi)*1]), &(inteval->stack[((hsi*396+35148)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+35148)*1+lsi)*1]), &(inteval->stack[((hsi*550+31578)*1+lsi)*1]), &(inteval->stack[((hsi*450+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+23639)*1+lsi)*1]), &(inteval->stack[((hsi*675+35148)*1+lsi)*1]), &(inteval->stack[((hsi*540+8129)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+31578)*1+lsi)*1]), &(inteval->stack[((hsi*55+6913)*1+lsi)*1]), &(inteval->stack[((hsi*45+6968)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31713)*1+lsi)*1]), &(inteval->stack[((hsi*66+6847)*1+lsi)*1]), &(inteval->stack[((hsi*55+6913)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+7049)*1+lsi)*1]), &(inteval->stack[((hsi*165+31713)*1+lsi)*1]), &(inteval->stack[((hsi*135+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+31878)*1+lsi)*1]), &(inteval->stack[((hsi*78+6769)*1+lsi)*1]), &(inteval->stack[((hsi*66+6847)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+31878)*1+lsi)*1]), &(inteval->stack[((hsi*165+31713)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+7049)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+30605)*1+lsi)*1]), &(inteval->stack[((hsi*45+6968)*1+lsi)*1]), &(inteval->stack[((hsi*36+7013)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+32076)*1+lsi)*1]), &(inteval->stack[((hsi*135+31578)*1+lsi)*1]), &(inteval->stack[((hsi*108+30605)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+35823)*1+lsi)*1]), &(inteval->stack[((hsi*270+7049)*1+lsi)*1]), &(inteval->stack[((hsi*216+32076)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+6847)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+35823)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+31578)*1+lsi)*1]), &(inteval->stack[((hsi*91+6678)*1+lsi)*1]), &(inteval->stack[((hsi*78+6769)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+35823)*1+lsi)*1]), &(inteval->stack[((hsi*234+31578)*1+lsi)*1]), &(inteval->stack[((hsi*198+31878)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+31578)*1+lsi)*1]), &(inteval->stack[((hsi*396+35823)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+35823)*1+lsi)*1]), &(inteval->stack[((hsi*550+31578)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+22883)*1+lsi)*1]), &(inteval->stack[((hsi*675+35823)*1+lsi)*1]), &(inteval->stack[((hsi*540+6847)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+31578)*1+lsi)*1]), &(inteval->stack[((hsi*55+6542)*1+lsi)*1]), &(inteval->stack[((hsi*45+6597)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+31713)*1+lsi)*1]), &(inteval->stack[((hsi*66+6476)*1+lsi)*1]), &(inteval->stack[((hsi*55+6542)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+31878)*1+lsi)*1]), &(inteval->stack[((hsi*165+31713)*1+lsi)*1]), &(inteval->stack[((hsi*135+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*78+6398)*1+lsi)*1]), &(inteval->stack[((hsi*66+6476)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+31713)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+36498)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+31878)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+30605)*1+lsi)*1]), &(inteval->stack[((hsi*45+6597)*1+lsi)*1]), &(inteval->stack[((hsi*36+6642)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+6476)*1+lsi)*1]), &(inteval->stack[((hsi*135+31578)*1+lsi)*1]), &(inteval->stack[((hsi*108+30605)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+36948)*1+lsi)*1]), &(inteval->stack[((hsi*270+31878)*1+lsi)*1]), &(inteval->stack[((hsi*216+6476)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+31578)*1+lsi)*1]), &(inteval->stack[((hsi*450+36498)*1+lsi)*1]), &(inteval->stack[((hsi*360+36948)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+6476)*1+lsi)*1]), &(inteval->stack[((hsi*91+6307)*1+lsi)*1]), &(inteval->stack[((hsi*78+6398)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+36948)*1+lsi)*1]), &(inteval->stack[((hsi*234+6476)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+37344)*1+lsi)*1]), &(inteval->stack[((hsi*396+36948)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+37894)*1+lsi)*1]), &(inteval->stack[((hsi*550+37344)*1+lsi)*1]), &(inteval->stack[((hsi*450+36498)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+22127)*1+lsi)*1]), &(inteval->stack[((hsi*675+37894)*1+lsi)*1]), &(inteval->stack[((hsi*540+31578)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+36498)*1+lsi)*1]), &(inteval->stack[((hsi*55+6171)*1+lsi)*1]), &(inteval->stack[((hsi*45+6226)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+36633)*1+lsi)*1]), &(inteval->stack[((hsi*66+6105)*1+lsi)*1]), &(inteval->stack[((hsi*55+6171)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+36798)*1+lsi)*1]), &(inteval->stack[((hsi*165+36633)*1+lsi)*1]), &(inteval->stack[((hsi*135+36498)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+37068)*1+lsi)*1]), &(inteval->stack[((hsi*78+6027)*1+lsi)*1]), &(inteval->stack[((hsi*66+6105)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+37266)*1+lsi)*1]), &(inteval->stack[((hsi*198+37068)*1+lsi)*1]), &(inteval->stack[((hsi*165+36633)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+37266)*1+lsi)*1]), &(inteval->stack[((hsi*270+36798)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+6307)*1+lsi)*1]), &(inteval->stack[((hsi*45+6226)*1+lsi)*1]), &(inteval->stack[((hsi*36+6271)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+34698)*1+lsi)*1]), &(inteval->stack[((hsi*135+36498)*1+lsi)*1]), &(inteval->stack[((hsi*108+6307)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+6105)*1+lsi)*1]), &(inteval->stack[((hsi*270+36798)*1+lsi)*1]), &(inteval->stack[((hsi*216+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+36498)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+6105)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+6105)*1+lsi)*1]), &(inteval->stack[((hsi*91+5936)*1+lsi)*1]), &(inteval->stack[((hsi*78+6027)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+6339)*1+lsi)*1]), &(inteval->stack[((hsi*234+6105)*1+lsi)*1]), &(inteval->stack[((hsi*198+37068)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*396+6339)*1+lsi)*1]), &(inteval->stack[((hsi*330+37266)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+5936)*1+lsi)*1]), &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+21371)*1+lsi)*1]), &(inteval->stack[((hsi*675+5936)*1+lsi)*1]), &(inteval->stack[((hsi*540+36498)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+37038)*1+lsi)*1]), &(inteval->stack[((hsi*55+5800)*1+lsi)*1]), &(inteval->stack[((hsi*45+5855)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+37173)*1+lsi)*1]), &(inteval->stack[((hsi*66+5734)*1+lsi)*1]), &(inteval->stack[((hsi*55+5800)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+37338)*1+lsi)*1]), &(inteval->stack[((hsi*165+37173)*1+lsi)*1]), &(inteval->stack[((hsi*135+37038)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*78+5656)*1+lsi)*1]), &(inteval->stack[((hsi*66+5734)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+37173)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+38569)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+37338)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+30605)*1+lsi)*1]), &(inteval->stack[((hsi*45+5855)*1+lsi)*1]), &(inteval->stack[((hsi*36+5900)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+37608)*1+lsi)*1]), &(inteval->stack[((hsi*135+37038)*1+lsi)*1]), &(inteval->stack[((hsi*108+30605)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+39019)*1+lsi)*1]), &(inteval->stack[((hsi*270+37338)*1+lsi)*1]), &(inteval->stack[((hsi*216+37608)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+37038)*1+lsi)*1]), &(inteval->stack[((hsi*450+38569)*1+lsi)*1]), &(inteval->stack[((hsi*360+39019)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+37578)*1+lsi)*1]), &(inteval->stack[((hsi*91+5565)*1+lsi)*1]), &(inteval->stack[((hsi*78+5656)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+39019)*1+lsi)*1]), &(inteval->stack[((hsi*234+37578)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+39415)*1+lsi)*1]), &(inteval->stack[((hsi*396+39019)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+39965)*1+lsi)*1]), &(inteval->stack[((hsi*550+39415)*1+lsi)*1]), &(inteval->stack[((hsi*450+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+20615)*1+lsi)*1]), &(inteval->stack[((hsi*675+39965)*1+lsi)*1]), &(inteval->stack[((hsi*540+37038)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*55+5429)*1+lsi)*1]), &(inteval->stack[((hsi*45+5484)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+38704)*1+lsi)*1]), &(inteval->stack[((hsi*66+5363)*1+lsi)*1]), &(inteval->stack[((hsi*55+5429)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+38869)*1+lsi)*1]), &(inteval->stack[((hsi*165+38704)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+39139)*1+lsi)*1]), &(inteval->stack[((hsi*78+5285)*1+lsi)*1]), &(inteval->stack[((hsi*66+5363)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+39337)*1+lsi)*1]), &(inteval->stack[((hsi*198+39139)*1+lsi)*1]), &(inteval->stack[((hsi*165+38704)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+39337)*1+lsi)*1]), &(inteval->stack[((hsi*270+38869)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+34698)*1+lsi)*1]), &(inteval->stack[((hsi*45+5484)*1+lsi)*1]), &(inteval->stack[((hsi*36+5529)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+5363)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*108+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+38869)*1+lsi)*1]), &(inteval->stack[((hsi*216+5363)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+5363)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+38569)*1+lsi)*1]), &(inteval->stack[((hsi*91+5194)*1+lsi)*1]), &(inteval->stack[((hsi*78+5285)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+34698)*1+lsi)*1]), &(inteval->stack[((hsi*234+38569)*1+lsi)*1]), &(inteval->stack[((hsi*198+39139)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*396+34698)*1+lsi)*1]), &(inteval->stack[((hsi*330+39337)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+39119)*1+lsi)*1]), &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+19859)*1+lsi)*1]), &(inteval->stack[((hsi*675+39119)*1+lsi)*1]), &(inteval->stack[((hsi*540+5363)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*55+5058)*1+lsi)*1]), &(inteval->stack[((hsi*45+5113)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+33573)*1+lsi)*1]), &(inteval->stack[((hsi*66+4992)*1+lsi)*1]), &(inteval->stack[((hsi*55+5058)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+33573)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+38704)*1+lsi)*1]), &(inteval->stack[((hsi*78+4914)*1+lsi)*1]), &(inteval->stack[((hsi*66+4992)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+40640)*1+lsi)*1]), &(inteval->stack[((hsi*198+38704)*1+lsi)*1]), &(inteval->stack[((hsi*165+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+40640)*1+lsi)*1]), &(inteval->stack[((hsi*270+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+37578)*1+lsi)*1]), &(inteval->stack[((hsi*45+5113)*1+lsi)*1]), &(inteval->stack[((hsi*36+5158)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4992)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*108+37578)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+40970)*1+lsi)*1]), &(inteval->stack[((hsi*270+34698)*1+lsi)*1]), &(inteval->stack[((hsi*216+4992)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+41330)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+40970)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+34698)*1+lsi)*1]), &(inteval->stack[((hsi*91+4823)*1+lsi)*1]), &(inteval->stack[((hsi*78+4914)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+4823)*1+lsi)*1]), &(inteval->stack[((hsi*234+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+38704)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*396+4823)*1+lsi)*1]), &(inteval->stack[((hsi*330+40640)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+40640)*1+lsi)*1]), &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+19103)*1+lsi)*1]), &(inteval->stack[((hsi*675+40640)*1+lsi)*1]), &(inteval->stack[((hsi*540+41330)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*55+4687)*1+lsi)*1]), &(inteval->stack[((hsi*45+4742)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4823)*1+lsi)*1]), &(inteval->stack[((hsi*66+4621)*1+lsi)*1]), &(inteval->stack[((hsi*55+4687)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+4823)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*78+4543)*1+lsi)*1]), &(inteval->stack[((hsi*66+4621)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38704)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+4823)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+4823)*1+lsi)*1]), &(inteval->stack[((hsi*330+38704)*1+lsi)*1]), &(inteval->stack[((hsi*270+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+37578)*1+lsi)*1]), &(inteval->stack[((hsi*45+4742)*1+lsi)*1]), &(inteval->stack[((hsi*36+4787)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+30605)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*108+37578)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+33573)*1+lsi)*1]), &(inteval->stack[((hsi*216+30605)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+42230)*1+lsi)*1]), &(inteval->stack[((hsi*450+4823)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+33573)*1+lsi)*1]), &(inteval->stack[((hsi*91+4452)*1+lsi)*1]), &(inteval->stack[((hsi*78+4543)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+42770)*1+lsi)*1]), &(inteval->stack[((hsi*234+33573)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+43166)*1+lsi)*1]), &(inteval->stack[((hsi*396+42770)*1+lsi)*1]), &(inteval->stack[((hsi*330+38704)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+43716)*1+lsi)*1]), &(inteval->stack[((hsi*550+43166)*1+lsi)*1]), &(inteval->stack[((hsi*450+4823)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+18347)*1+lsi)*1]), &(inteval->stack[((hsi*675+43716)*1+lsi)*1]), &(inteval->stack[((hsi*540+42230)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+42770)*1+lsi)*1]), &(inteval->stack[((hsi*55+4316)*1+lsi)*1]), &(inteval->stack[((hsi*45+4371)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4452)*1+lsi)*1]), &(inteval->stack[((hsi*66+4250)*1+lsi)*1]), &(inteval->stack[((hsi*55+4316)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+42905)*1+lsi)*1]), &(inteval->stack[((hsi*165+4452)*1+lsi)*1]), &(inteval->stack[((hsi*135+42770)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+4617)*1+lsi)*1]), &(inteval->stack[((hsi*78+4172)*1+lsi)*1]), &(inteval->stack[((hsi*66+4250)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38569)*1+lsi)*1]), &(inteval->stack[((hsi*198+4617)*1+lsi)*1]), &(inteval->stack[((hsi*165+4452)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+38569)*1+lsi)*1]), &(inteval->stack[((hsi*270+42905)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4815)*1+lsi)*1]), &(inteval->stack[((hsi*45+4371)*1+lsi)*1]), &(inteval->stack[((hsi*36+4416)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+43175)*1+lsi)*1]), &(inteval->stack[((hsi*135+42770)*1+lsi)*1]), &(inteval->stack[((hsi*108+4815)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+42905)*1+lsi)*1]), &(inteval->stack[((hsi*216+43175)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+42770)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+4815)*1+lsi)*1]), &(inteval->stack[((hsi*91+4081)*1+lsi)*1]), &(inteval->stack[((hsi*78+4172)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+4081)*1+lsi)*1]), &(inteval->stack[((hsi*234+4815)*1+lsi)*1]), &(inteval->stack[((hsi*198+4617)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+4477)*1+lsi)*1]), &(inteval->stack[((hsi*396+4081)*1+lsi)*1]), &(inteval->stack[((hsi*330+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+44391)*1+lsi)*1]), &(inteval->stack[((hsi*550+4477)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+17591)*1+lsi)*1]), &(inteval->stack[((hsi*675+44391)*1+lsi)*1]), &(inteval->stack[((hsi*540+42770)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4081)*1+lsi)*1]), &(inteval->stack[((hsi*55+3945)*1+lsi)*1]), &(inteval->stack[((hsi*45+4000)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4216)*1+lsi)*1]), &(inteval->stack[((hsi*66+3879)*1+lsi)*1]), &(inteval->stack[((hsi*55+3945)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+4381)*1+lsi)*1]), &(inteval->stack[((hsi*165+4216)*1+lsi)*1]), &(inteval->stack[((hsi*135+4081)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+4651)*1+lsi)*1]), &(inteval->stack[((hsi*78+3801)*1+lsi)*1]), &(inteval->stack[((hsi*66+3879)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38569)*1+lsi)*1]), &(inteval->stack[((hsi*198+4651)*1+lsi)*1]), &(inteval->stack[((hsi*165+4216)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+38569)*1+lsi)*1]), &(inteval->stack[((hsi*270+4381)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+4849)*1+lsi)*1]), &(inteval->stack[((hsi*45+4000)*1+lsi)*1]), &(inteval->stack[((hsi*36+4045)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+34698)*1+lsi)*1]), &(inteval->stack[((hsi*135+4081)*1+lsi)*1]), &(inteval->stack[((hsi*108+4849)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+4381)*1+lsi)*1]), &(inteval->stack[((hsi*216+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+3879)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+4849)*1+lsi)*1]), &(inteval->stack[((hsi*91+3710)*1+lsi)*1]), &(inteval->stack[((hsi*78+3801)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+34698)*1+lsi)*1]), &(inteval->stack[((hsi*234+4849)*1+lsi)*1]), &(inteval->stack[((hsi*198+4651)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+4419)*1+lsi)*1]), &(inteval->stack[((hsi*396+34698)*1+lsi)*1]), &(inteval->stack[((hsi*330+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+45066)*1+lsi)*1]), &(inteval->stack[((hsi*550+4419)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+16835)*1+lsi)*1]), &(inteval->stack[((hsi*675+45066)*1+lsi)*1]), &(inteval->stack[((hsi*540+3879)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+4419)*1+lsi)*1]), &(inteval->stack[((hsi*55+3574)*1+lsi)*1]), &(inteval->stack[((hsi*45+3629)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+4554)*1+lsi)*1]), &(inteval->stack[((hsi*66+3508)*1+lsi)*1]), &(inteval->stack[((hsi*55+3574)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+4719)*1+lsi)*1]), &(inteval->stack[((hsi*165+4554)*1+lsi)*1]), &(inteval->stack[((hsi*135+4419)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+38569)*1+lsi)*1]), &(inteval->stack[((hsi*78+3430)*1+lsi)*1]), &(inteval->stack[((hsi*66+3508)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*198+38569)*1+lsi)*1]), &(inteval->stack[((hsi*165+4554)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+34698)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*270+4719)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+43310)*1+lsi)*1]), &(inteval->stack[((hsi*45+3629)*1+lsi)*1]), &(inteval->stack[((hsi*36+3674)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4989)*1+lsi)*1]), &(inteval->stack[((hsi*135+4419)*1+lsi)*1]), &(inteval->stack[((hsi*108+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+4719)*1+lsi)*1]), &(inteval->stack[((hsi*216+4989)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+4419)*1+lsi)*1]), &(inteval->stack[((hsi*450+34698)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+43310)*1+lsi)*1]), &(inteval->stack[((hsi*91+3339)*1+lsi)*1]), &(inteval->stack[((hsi*78+3430)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+3339)*1+lsi)*1]), &(inteval->stack[((hsi*234+43310)*1+lsi)*1]), &(inteval->stack[((hsi*198+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*396+3339)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+45741)*1+lsi)*1]), &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*450+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+16079)*1+lsi)*1]), &(inteval->stack[((hsi*675+45741)*1+lsi)*1]), &(inteval->stack[((hsi*540+4419)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*55+3203)*1+lsi)*1]), &(inteval->stack[((hsi*45+3258)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3339)*1+lsi)*1]), &(inteval->stack[((hsi*66+3137)*1+lsi)*1]), &(inteval->stack[((hsi*55+3203)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+3339)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*78+3059)*1+lsi)*1]), &(inteval->stack[((hsi*66+3137)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38704)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+3339)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+3339)*1+lsi)*1]), &(inteval->stack[((hsi*330+38704)*1+lsi)*1]), &(inteval->stack[((hsi*270+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+43310)*1+lsi)*1]), &(inteval->stack[((hsi*45+3258)*1+lsi)*1]), &(inteval->stack[((hsi*36+3303)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4959)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*108+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+34698)*1+lsi)*1]), &(inteval->stack[((hsi*216+4959)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+46416)*1+lsi)*1]), &(inteval->stack[((hsi*450+3339)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+34698)*1+lsi)*1]), &(inteval->stack[((hsi*91+2968)*1+lsi)*1]), &(inteval->stack[((hsi*78+3059)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+43310)*1+lsi)*1]), &(inteval->stack[((hsi*234+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*396+43310)*1+lsi)*1]), &(inteval->stack[((hsi*330+38704)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+47506)*1+lsi)*1]), &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*450+3339)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+15323)*1+lsi)*1]), &(inteval->stack[((hsi*675+47506)*1+lsi)*1]), &(inteval->stack[((hsi*540+46416)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+2968)*1+lsi)*1]), &(inteval->stack[((hsi*55+2832)*1+lsi)*1]), &(inteval->stack[((hsi*45+2887)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+3103)*1+lsi)*1]), &(inteval->stack[((hsi*66+2766)*1+lsi)*1]), &(inteval->stack[((hsi*55+2832)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+3268)*1+lsi)*1]), &(inteval->stack[((hsi*165+3103)*1+lsi)*1]), &(inteval->stack[((hsi*135+2968)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+46956)*1+lsi)*1]), &(inteval->stack[((hsi*78+2688)*1+lsi)*1]), &(inteval->stack[((hsi*66+2766)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38569)*1+lsi)*1]), &(inteval->stack[((hsi*198+46956)*1+lsi)*1]), &(inteval->stack[((hsi*165+3103)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+34698)*1+lsi)*1]), &(inteval->stack[((hsi*330+38569)*1+lsi)*1]), &(inteval->stack[((hsi*270+3268)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+33573)*1+lsi)*1]), &(inteval->stack[((hsi*45+2887)*1+lsi)*1]), &(inteval->stack[((hsi*36+2932)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+43310)*1+lsi)*1]), &(inteval->stack[((hsi*135+2968)*1+lsi)*1]), &(inteval->stack[((hsi*108+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+3268)*1+lsi)*1]), &(inteval->stack[((hsi*216+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+2766)*1+lsi)*1]), &(inteval->stack[((hsi*450+34698)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+3306)*1+lsi)*1]), &(inteval->stack[((hsi*91+2597)*1+lsi)*1]), &(inteval->stack[((hsi*78+2688)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+33573)*1+lsi)*1]), &(inteval->stack[((hsi*234+3306)*1+lsi)*1]), &(inteval->stack[((hsi*198+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*396+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+48181)*1+lsi)*1]), &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*450+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+14567)*1+lsi)*1]), &(inteval->stack[((hsi*675+48181)*1+lsi)*1]), &(inteval->stack[((hsi*540+2766)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+3306)*1+lsi)*1]), &(inteval->stack[((hsi*55+2461)*1+lsi)*1]), &(inteval->stack[((hsi*45+2516)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*66+2395)*1+lsi)*1]), &(inteval->stack[((hsi*55+2461)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+38569)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*135+3306)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*78+2317)*1+lsi)*1]), &(inteval->stack[((hsi*66+2395)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*270+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+3441)*1+lsi)*1]), &(inteval->stack[((hsi*45+2516)*1+lsi)*1]), &(inteval->stack[((hsi*36+2561)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+43310)*1+lsi)*1]), &(inteval->stack[((hsi*135+3306)*1+lsi)*1]), &(inteval->stack[((hsi*108+3441)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+38569)*1+lsi)*1]), &(inteval->stack[((hsi*216+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+3306)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+38569)*1+lsi)*1]), &(inteval->stack[((hsi*91+2226)*1+lsi)*1]), &(inteval->stack[((hsi*78+2317)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+2226)*1+lsi)*1]), &(inteval->stack[((hsi*234+38569)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*396+2226)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+48856)*1+lsi)*1]), &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+13811)*1+lsi)*1]), &(inteval->stack[((hsi*675+48856)*1+lsi)*1]), &(inteval->stack[((hsi*540+3306)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*55+2090)*1+lsi)*1]), &(inteval->stack[((hsi*45+2145)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*66+2024)*1+lsi)*1]), &(inteval->stack[((hsi*55+2090)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+2226)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*78+1946)*1+lsi)*1]), &(inteval->stack[((hsi*66+2024)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]), &(inteval->stack[((hsi*270+2226)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+38704)*1+lsi)*1]), &(inteval->stack[((hsi*45+2145)*1+lsi)*1]), &(inteval->stack[((hsi*36+2190)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+43310)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*108+38704)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+2226)*1+lsi)*1]), &(inteval->stack[((hsi*216+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+2024)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+38569)*1+lsi)*1]), &(inteval->stack[((hsi*91+1855)*1+lsi)*1]), &(inteval->stack[((hsi*78+1946)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+43310)*1+lsi)*1]), &(inteval->stack[((hsi*234+38569)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*396+43310)*1+lsi)*1]), &(inteval->stack[((hsi*330+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+49531)*1+lsi)*1]), &(inteval->stack[((hsi*550+38569)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+13055)*1+lsi)*1]), &(inteval->stack[((hsi*675+49531)*1+lsi)*1]), &(inteval->stack[((hsi*540+2024)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*55+1719)*1+lsi)*1]), &(inteval->stack[((hsi*45+1774)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*66+1653)*1+lsi)*1]), &(inteval->stack[((hsi*55+1719)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*78+1575)*1+lsi)*1]), &(inteval->stack[((hsi*66+1653)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+38704)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*330+38704)*1+lsi)*1]), &(inteval->stack[((hsi*270+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+43310)*1+lsi)*1]), &(inteval->stack[((hsi*45+1774)*1+lsi)*1]), &(inteval->stack[((hsi*36+1819)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4959)*1+lsi)*1]), &(inteval->stack[((hsi*135+38569)*1+lsi)*1]), &(inteval->stack[((hsi*108+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+34698)*1+lsi)*1]), &(inteval->stack[((hsi*216+4959)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+50206)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+34698)*1+lsi)*1]), &(inteval->stack[((hsi*91+1484)*1+lsi)*1]), &(inteval->stack[((hsi*78+1575)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+1484)*1+lsi)*1]), &(inteval->stack[((hsi*234+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+50746)*1+lsi)*1]), &(inteval->stack[((hsi*396+1484)*1+lsi)*1]), &(inteval->stack[((hsi*330+38704)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+51296)*1+lsi)*1]), &(inteval->stack[((hsi*550+50746)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+12299)*1+lsi)*1]), &(inteval->stack[((hsi*675+51296)*1+lsi)*1]), &(inteval->stack[((hsi*540+50206)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+50746)*1+lsi)*1]), &(inteval->stack[((hsi*55+1348)*1+lsi)*1]), &(inteval->stack[((hsi*45+1403)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+38569)*1+lsi)*1]), &(inteval->stack[((hsi*66+1282)*1+lsi)*1]), &(inteval->stack[((hsi*55+1348)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+46956)*1+lsi)*1]), &(inteval->stack[((hsi*165+38569)*1+lsi)*1]), &(inteval->stack[((hsi*135+50746)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+1484)*1+lsi)*1]), &(inteval->stack[((hsi*78+1204)*1+lsi)*1]), &(inteval->stack[((hsi*66+1282)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+1484)*1+lsi)*1]), &(inteval->stack[((hsi*165+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+38569)*1+lsi)*1]), &(inteval->stack[((hsi*45+1403)*1+lsi)*1]), &(inteval->stack[((hsi*36+1448)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+38677)*1+lsi)*1]), &(inteval->stack[((hsi*135+50746)*1+lsi)*1]), &(inteval->stack[((hsi*108+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+46956)*1+lsi)*1]), &(inteval->stack[((hsi*216+38677)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+50746)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+46956)*1+lsi)*1]), &(inteval->stack[((hsi*91+1113)*1+lsi)*1]), &(inteval->stack[((hsi*78+1204)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+38569)*1+lsi)*1]), &(inteval->stack[((hsi*234+46956)*1+lsi)*1]), &(inteval->stack[((hsi*198+1484)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*396+38569)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+1113)*1+lsi)*1]), &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*450+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+11543)*1+lsi)*1]), &(inteval->stack[((hsi*675+1113)*1+lsi)*1]), &(inteval->stack[((hsi*540+50746)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+46956)*1+lsi)*1]), &(inteval->stack[((hsi*55+977)*1+lsi)*1]), &(inteval->stack[((hsi*45+1032)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+38569)*1+lsi)*1]), &(inteval->stack[((hsi*66+911)*1+lsi)*1]), &(inteval->stack[((hsi*55+977)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+38569)*1+lsi)*1]), &(inteval->stack[((hsi*135+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*78+833)*1+lsi)*1]), &(inteval->stack[((hsi*66+911)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+47091)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]), &(inteval->stack[((hsi*165+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+38569)*1+lsi)*1]), &(inteval->stack[((hsi*330+47091)*1+lsi)*1]), &(inteval->stack[((hsi*270+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+43310)*1+lsi)*1]), &(inteval->stack[((hsi*45+1032)*1+lsi)*1]), &(inteval->stack[((hsi*36+1077)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+4959)*1+lsi)*1]), &(inteval->stack[((hsi*135+46956)*1+lsi)*1]), &(inteval->stack[((hsi*108+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+33573)*1+lsi)*1]), &(inteval->stack[((hsi*216+4959)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+51971)*1+lsi)*1]), &(inteval->stack[((hsi*450+38569)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+33573)*1+lsi)*1]), &(inteval->stack[((hsi*91+742)*1+lsi)*1]), &(inteval->stack[((hsi*78+833)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+43310)*1+lsi)*1]), &(inteval->stack[((hsi*234+33573)*1+lsi)*1]), &(inteval->stack[((hsi*198+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+52511)*1+lsi)*1]), &(inteval->stack[((hsi*396+43310)*1+lsi)*1]), &(inteval->stack[((hsi*330+47091)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+53061)*1+lsi)*1]), &(inteval->stack[((hsi*550+52511)*1+lsi)*1]), &(inteval->stack[((hsi*450+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+10787)*1+lsi)*1]), &(inteval->stack[((hsi*675+53061)*1+lsi)*1]), &(inteval->stack[((hsi*540+51971)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+52511)*1+lsi)*1]), &(inteval->stack[((hsi*55+606)*1+lsi)*1]), &(inteval->stack[((hsi*45+661)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*66+540)*1+lsi)*1]), &(inteval->stack[((hsi*55+606)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+38569)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]), &(inteval->stack[((hsi*135+52511)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*78+462)*1+lsi)*1]), &(inteval->stack[((hsi*66+540)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+52646)*1+lsi)*1]), &(inteval->stack[((hsi*45+661)*1+lsi)*1]), &(inteval->stack[((hsi*36+706)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+540)*1+lsi)*1]), &(inteval->stack[((hsi*135+52511)*1+lsi)*1]), &(inteval->stack[((hsi*108+52646)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+38569)*1+lsi)*1]), &(inteval->stack[((hsi*216+540)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+540)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+52511)*1+lsi)*1]), &(inteval->stack[((hsi*91+371)*1+lsi)*1]), &(inteval->stack[((hsi*78+462)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+38569)*1+lsi)*1]), &(inteval->stack[((hsi*234+52511)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+52511)*1+lsi)*1]), &(inteval->stack[((hsi*396+38569)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+53736)*1+lsi)*1]), &(inteval->stack[((hsi*550+52511)*1+lsi)*1]), &(inteval->stack[((hsi*450+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+10031)*1+lsi)*1]), &(inteval->stack[((hsi*675+53736)*1+lsi)*1]), &(inteval->stack[((hsi*540+540)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+52511)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+38569)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+46956)*1+lsi)*1]), &(inteval->stack[((hsi*165+38569)*1+lsi)*1]), &(inteval->stack[((hsi*135+52511)*1+lsi)*1]),1);
HRRPart0bra0ket0np(inteval, &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]), &(inteval->stack[((hsi*165+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+38569)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]), &(inteval->stack[((hsi*270+46956)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+52646)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+43310)*1+lsi)*1]), &(inteval->stack[((hsi*135+52511)*1+lsi)*1]), &(inteval->stack[((hsi*108+52646)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+41870)*1+lsi)*1]), &(inteval->stack[((hsi*270+46956)*1+lsi)*1]), &(inteval->stack[((hsi*216+43310)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+52511)*1+lsi)*1]), &(inteval->stack[((hsi*450+38569)*1+lsi)*1]), &(inteval->stack[((hsi*360+41870)*1+lsi)*1]),1);
HRRPart0bra0ket0op(inteval, &(inteval->stack[((hsi*234+46956)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0bra0ket0nd(inteval, &(inteval->stack[((hsi*396+0)*1+lsi)*1]), &(inteval->stack[((hsi*234+46956)*1+lsi)*1]), &(inteval->stack[((hsi*198+33573)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*396+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+34698)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+54411)*1+lsi)*1]), &(inteval->stack[((hsi*550+46956)*1+lsi)*1]), &(inteval->stack[((hsi*450+38569)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+9275)*1+lsi)*1]), &(inteval->stack[((hsi*675+54411)*1+lsi)*1]), &(inteval->stack[((hsi*540+52511)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*756+9275)*1+lsi)*1]);
inteval->targets[1] = &(inteval->stack[((hsi*756+10031)*1+lsi)*1]);
inteval->targets[2] = &(inteval->stack[((hsi*756+10787)*1+lsi)*1]);
inteval->targets[3] = &(inteval->stack[((hsi*756+11543)*1+lsi)*1]);
inteval->targets[4] = &(inteval->stack[((hsi*756+12299)*1+lsi)*1]);
inteval->targets[5] = &(inteval->stack[((hsi*756+13055)*1+lsi)*1]);
inteval->targets[6] = &(inteval->stack[((hsi*756+13811)*1+lsi)*1]);
inteval->targets[7] = &(inteval->stack[((hsi*756+14567)*1+lsi)*1]);
inteval->targets[8] = &(inteval->stack[((hsi*756+15323)*1+lsi)*1]);
inteval->targets[9] = &(inteval->stack[((hsi*756+16079)*1+lsi)*1]);
inteval->targets[10] = &(inteval->stack[((hsi*756+16835)*1+lsi)*1]);
inteval->targets[11] = &(inteval->stack[((hsi*756+17591)*1+lsi)*1]);
inteval->targets[12] = &(inteval->stack[((hsi*756+18347)*1+lsi)*1]);
inteval->targets[13] = &(inteval->stack[((hsi*756+19103)*1+lsi)*1]);
inteval->targets[14] = &(inteval->stack[((hsi*756+19859)*1+lsi)*1]);
inteval->targets[15] = &(inteval->stack[((hsi*756+20615)*1+lsi)*1]);
inteval->targets[16] = &(inteval->stack[((hsi*756+21371)*1+lsi)*1]);
inteval->targets[17] = &(inteval->stack[((hsi*756+22127)*1+lsi)*1]);
inteval->targets[18] = &(inteval->stack[((hsi*756+22883)*1+lsi)*1]);
inteval->targets[19] = &(inteval->stack[((hsi*756+23639)*1+lsi)*1]);
inteval->targets[20] = &(inteval->stack[((hsi*756+24395)*1+lsi)*1]);
inteval->targets[21] = &(inteval->stack[((hsi*756+25151)*1+lsi)*1]);
inteval->targets[22] = &(inteval->stack[((hsi*756+25907)*1+lsi)*1]);
inteval->targets[23] = &(inteval->stack[((hsi*756+26663)*1+lsi)*1]);
inteval->targets[24] = &(inteval->stack[((hsi*756+27419)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
