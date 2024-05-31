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
#include <_elecpot_I_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_I_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,476)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_I_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1484)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]), &(inteval->stack[((hsi*45+395)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+1619)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]), &(inteval->stack[((hsi*55+340)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1784)*1+lsi)*1]), &(inteval->stack[((hsi*165+1619)*1+lsi)*1]), &(inteval->stack[((hsi*135+1484)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2054)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]), &(inteval->stack[((hsi*66+274)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2252)*1+lsi)*1]), &(inteval->stack[((hsi*198+2054)*1+lsi)*1]), &(inteval->stack[((hsi*165+1619)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2582)*1+lsi)*1]), &(inteval->stack[((hsi*330+2252)*1+lsi)*1]), &(inteval->stack[((hsi*270+1784)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+3032)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]), &(inteval->stack[((hsi*78+196)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+3266)*1+lsi)*1]), &(inteval->stack[((hsi*234+3032)*1+lsi)*1]), &(inteval->stack[((hsi*198+2054)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+3662)*1+lsi)*1]), &(inteval->stack[((hsi*396+3266)*1+lsi)*1]), &(inteval->stack[((hsi*330+2252)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+4212)*1+lsi)*1]), &(inteval->stack[((hsi*550+3662)*1+lsi)*1]), &(inteval->stack[((hsi*450+2582)*1+lsi)*1]),1);
HRRPart0ket0bra0kp(inteval, &(inteval->stack[((hsi*108+2054)*1+lsi)*1]), &(inteval->stack[((hsi*45+395)*1+lsi)*1]), &(inteval->stack[((hsi*36+440)*1+lsi)*1]),1);
HRRPart0ket0bra0kd(inteval, &(inteval->stack[((hsi*216+2162)*1+lsi)*1]), &(inteval->stack[((hsi*135+1484)*1+lsi)*1]), &(inteval->stack[((hsi*108+2054)*1+lsi)*1]),1);
HRRPart0ket0bra0kf(inteval, &(inteval->stack[((hsi*360+4887)*1+lsi)*1]), &(inteval->stack[((hsi*270+1784)*1+lsi)*1]), &(inteval->stack[((hsi*216+2162)*1+lsi)*1]),1);
HRRPart0ket0bra0kg(inteval, &(inteval->stack[((hsi*540+1484)*1+lsi)*1]), &(inteval->stack[((hsi*450+2582)*1+lsi)*1]), &(inteval->stack[((hsi*360+4887)*1+lsi)*1]),1);
HRRPart0ket0bra0kh(inteval, &(inteval->stack[((hsi*756+2024)*1+lsi)*1]), &(inteval->stack[((hsi*675+4212)*1+lsi)*1]), &(inteval->stack[((hsi*540+1484)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+1484)*1+lsi)*1]), &(inteval->stack[((hsi*105+0)*1+lsi)*1]), &(inteval->stack[((hsi*91+105)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+0)*1+lsi)*1]), &(inteval->stack[((hsi*273+1484)*1+lsi)*1]), &(inteval->stack[((hsi*234+3032)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+4887)*1+lsi)*1]), &(inteval->stack[((hsi*468+0)*1+lsi)*1]), &(inteval->stack[((hsi*396+3266)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+2780)*1+lsi)*1]), &(inteval->stack[((hsi*660+4887)*1+lsi)*1]), &(inteval->stack[((hsi*550+3662)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+4887)*1+lsi)*1]), &(inteval->stack[((hsi*825+2780)*1+lsi)*1]), &(inteval->stack[((hsi*675+4212)*1+lsi)*1]),1);
HRRPart0ket0bra0ki(inteval, &(inteval->stack[((hsi*1008+476)*1+lsi)*1]), &(inteval->stack[((hsi*945+4887)*1+lsi)*1]), &(inteval->stack[((hsi*756+2024)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1008+476)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
