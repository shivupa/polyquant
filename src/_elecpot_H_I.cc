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
#include <HRRPart0ket0bra0ig.h>
#include <HRRPart0ket0bra0ih.h>
#include <HRRPart0ket0bra0ip.h>
#include <HRRPart0ket0bra0kd.h>
#include <HRRPart0ket0bra0kf.h>
#include <HRRPart0ket0bra0kg.h>
#include <HRRPart0ket0bra0kp.h>
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_H_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_H_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,308)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_H_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+896)*1+lsi)*1]), &(inteval->stack[((hsi*45+227)*1+lsi)*1]), &(inteval->stack[((hsi*36+272)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1004)*1+lsi)*1]), &(inteval->stack[((hsi*55+172)*1+lsi)*1]), &(inteval->stack[((hsi*45+227)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+1139)*1+lsi)*1]), &(inteval->stack[((hsi*135+1004)*1+lsi)*1]), &(inteval->stack[((hsi*108+896)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+1355)*1+lsi)*1]), &(inteval->stack[((hsi*66+106)*1+lsi)*1]), &(inteval->stack[((hsi*55+172)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1520)*1+lsi)*1]), &(inteval->stack[((hsi*165+1355)*1+lsi)*1]), &(inteval->stack[((hsi*135+1004)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+1790)*1+lsi)*1]), &(inteval->stack[((hsi*270+1520)*1+lsi)*1]), &(inteval->stack[((hsi*216+1139)*1+lsi)*1]),1);
HRRPart0ket0bra0ip(inteval, &(inteval->stack[((hsi*84+1004)*1+lsi)*1]), &(inteval->stack[((hsi*36+272)*1+lsi)*1]), &(inteval->stack[((hsi*28+0)*1+lsi)*1]),1);
HRRPart0ket0bra0id(inteval, &(inteval->stack[((hsi*168+2150)*1+lsi)*1]), &(inteval->stack[((hsi*108+896)*1+lsi)*1]), &(inteval->stack[((hsi*84+1004)*1+lsi)*1]),1);
HRRPart0ket0bra0if(inteval, &(inteval->stack[((hsi*280+2318)*1+lsi)*1]), &(inteval->stack[((hsi*216+1139)*1+lsi)*1]), &(inteval->stack[((hsi*168+2150)*1+lsi)*1]),1);
HRRPart0ket0bra0ig(inteval, &(inteval->stack[((hsi*420+896)*1+lsi)*1]), &(inteval->stack[((hsi*360+1790)*1+lsi)*1]), &(inteval->stack[((hsi*280+2318)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2150)*1+lsi)*1]), &(inteval->stack[((hsi*78+28)*1+lsi)*1]), &(inteval->stack[((hsi*66+106)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2348)*1+lsi)*1]), &(inteval->stack[((hsi*198+2150)*1+lsi)*1]), &(inteval->stack[((hsi*165+1355)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2678)*1+lsi)*1]), &(inteval->stack[((hsi*330+2348)*1+lsi)*1]), &(inteval->stack[((hsi*270+1520)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+3128)*1+lsi)*1]), &(inteval->stack[((hsi*450+2678)*1+lsi)*1]), &(inteval->stack[((hsi*360+1790)*1+lsi)*1]),1);
HRRPart0ket0bra0ih(inteval, &(inteval->stack[((hsi*588+308)*1+lsi)*1]), &(inteval->stack[((hsi*540+3128)*1+lsi)*1]), &(inteval->stack[((hsi*420+896)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*588+308)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
