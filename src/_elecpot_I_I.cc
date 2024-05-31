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
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0if.h>
#include <HRRPart0bra0ket0ig.h>
#include <HRRPart0bra0ket0ih.h>
#include <HRRPart0bra0ket0ii.h>
#include <HRRPart0bra0ket0ip.h>
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
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psp.h>
#include <_elecpot_I_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_I_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,399)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_I_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+1183)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]),1);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1291)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+1426)*1+lsi)*1]), &(inteval->stack[((hsi*135+1291)*1+lsi)*1]), &(inteval->stack[((hsi*108+1183)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+1642)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+1807)*1+lsi)*1]), &(inteval->stack[((hsi*165+1642)*1+lsi)*1]), &(inteval->stack[((hsi*135+1291)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+2077)*1+lsi)*1]), &(inteval->stack[((hsi*270+1807)*1+lsi)*1]), &(inteval->stack[((hsi*216+1426)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2437)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+2635)*1+lsi)*1]), &(inteval->stack[((hsi*198+2437)*1+lsi)*1]), &(inteval->stack[((hsi*165+1642)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+2965)*1+lsi)*1]), &(inteval->stack[((hsi*330+2635)*1+lsi)*1]), &(inteval->stack[((hsi*270+1807)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+3415)*1+lsi)*1]), &(inteval->stack[((hsi*450+2965)*1+lsi)*1]), &(inteval->stack[((hsi*360+2077)*1+lsi)*1]),1);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*84+1642)*1+lsi)*1]), &(inteval->stack[((hsi*36+335)*1+lsi)*1]), &(inteval->stack[((hsi*28+371)*1+lsi)*1]),1);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*168+1726)*1+lsi)*1]), &(inteval->stack[((hsi*108+1183)*1+lsi)*1]), &(inteval->stack[((hsi*84+1642)*1+lsi)*1]),1);
HRRPart0bra0ket0if(inteval, &(inteval->stack[((hsi*280+3955)*1+lsi)*1]), &(inteval->stack[((hsi*216+1426)*1+lsi)*1]), &(inteval->stack[((hsi*168+1726)*1+lsi)*1]),1);
HRRPart0bra0ket0ig(inteval, &(inteval->stack[((hsi*420+1183)*1+lsi)*1]), &(inteval->stack[((hsi*360+2077)*1+lsi)*1]), &(inteval->stack[((hsi*280+3955)*1+lsi)*1]),1);
HRRPart0bra0ket0ih(inteval, &(inteval->stack[((hsi*588+1603)*1+lsi)*1]), &(inteval->stack[((hsi*540+3415)*1+lsi)*1]), &(inteval->stack[((hsi*420+1183)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+1183)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+0)*1+lsi)*1]), &(inteval->stack[((hsi*234+1183)*1+lsi)*1]), &(inteval->stack[((hsi*198+2437)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+3955)*1+lsi)*1]), &(inteval->stack[((hsi*396+0)*1+lsi)*1]), &(inteval->stack[((hsi*330+2635)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+2191)*1+lsi)*1]), &(inteval->stack[((hsi*550+3955)*1+lsi)*1]), &(inteval->stack[((hsi*450+2965)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+3955)*1+lsi)*1]), &(inteval->stack[((hsi*675+2191)*1+lsi)*1]), &(inteval->stack[((hsi*540+3415)*1+lsi)*1]),1);
HRRPart0bra0ket0ii(inteval, &(inteval->stack[((hsi*784+399)*1+lsi)*1]), &(inteval->stack[((hsi*756+3955)*1+lsi)*1]), &(inteval->stack[((hsi*588+1603)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*784+399)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
