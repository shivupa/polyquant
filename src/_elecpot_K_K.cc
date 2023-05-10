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
#include <HRRPart0bra0ket0kg.h>
#include <HRRPart0bra0ket0kh.h>
#include <HRRPart0bra0ket0ki.h>
#include <HRRPart0bra0ket0kk.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lf.h>
#include <HRRPart0bra0ket0lg.h>
#include <HRRPart0bra0ket0lh.h>
#include <HRRPart0bra0ket0li.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psp.h>
#include <_elecpot_K_K_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_K_K(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,596)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_K_K_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*135+1892)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]), &(inteval->stack[((hsi*45+515)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+2027)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]),1);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*270+2192)*1+lsi)*1]), &(inteval->stack[((hsi*165+2027)*1+lsi)*1]), &(inteval->stack[((hsi*135+1892)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+2462)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+2660)*1+lsi)*1]), &(inteval->stack[((hsi*198+2462)*1+lsi)*1]), &(inteval->stack[((hsi*165+2027)*1+lsi)*1]),1);
HRRPart0bra0ket0lf(inteval, &(inteval->stack[((hsi*450+2990)*1+lsi)*1]), &(inteval->stack[((hsi*330+2660)*1+lsi)*1]), &(inteval->stack[((hsi*270+2192)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+3440)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3674)*1+lsi)*1]), &(inteval->stack[((hsi*234+3440)*1+lsi)*1]), &(inteval->stack[((hsi*198+2462)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+4070)*1+lsi)*1]), &(inteval->stack[((hsi*396+3674)*1+lsi)*1]), &(inteval->stack[((hsi*330+2660)*1+lsi)*1]),1);
HRRPart0bra0ket0lg(inteval, &(inteval->stack[((hsi*675+4620)*1+lsi)*1]), &(inteval->stack[((hsi*550+4070)*1+lsi)*1]), &(inteval->stack[((hsi*450+2990)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+2462)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+5295)*1+lsi)*1]), &(inteval->stack[((hsi*273+2462)*1+lsi)*1]), &(inteval->stack[((hsi*234+3440)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+5763)*1+lsi)*1]), &(inteval->stack[((hsi*468+5295)*1+lsi)*1]), &(inteval->stack[((hsi*396+3674)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+6423)*1+lsi)*1]), &(inteval->stack[((hsi*660+5763)*1+lsi)*1]), &(inteval->stack[((hsi*550+4070)*1+lsi)*1]),1);
HRRPart0bra0ket0lh(inteval, &(inteval->stack[((hsi*945+3440)*1+lsi)*1]), &(inteval->stack[((hsi*825+6423)*1+lsi)*1]), &(inteval->stack[((hsi*675+4620)*1+lsi)*1]),1);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*108+225)*1+lsi)*1]), &(inteval->stack[((hsi*45+515)*1+lsi)*1]), &(inteval->stack[((hsi*36+560)*1+lsi)*1]),1);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*216+333)*1+lsi)*1]), &(inteval->stack[((hsi*135+1892)*1+lsi)*1]), &(inteval->stack[((hsi*108+225)*1+lsi)*1]),1);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*360+7248)*1+lsi)*1]), &(inteval->stack[((hsi*270+2192)*1+lsi)*1]), &(inteval->stack[((hsi*216+333)*1+lsi)*1]),1);
HRRPart0bra0ket0kg(inteval, &(inteval->stack[((hsi*540+1892)*1+lsi)*1]), &(inteval->stack[((hsi*450+2990)*1+lsi)*1]), &(inteval->stack[((hsi*360+7248)*1+lsi)*1]),1);
HRRPart0bra0ket0kh(inteval, &(inteval->stack[((hsi*756+7248)*1+lsi)*1]), &(inteval->stack[((hsi*675+4620)*1+lsi)*1]), &(inteval->stack[((hsi*540+1892)*1+lsi)*1]),1);
HRRPart0bra0ket0ki(inteval, &(inteval->stack[((hsi*1008+8004)*1+lsi)*1]), &(inteval->stack[((hsi*945+3440)*1+lsi)*1]), &(inteval->stack[((hsi*756+7248)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+4385)*1+lsi)*1]), &(inteval->stack[((hsi*120+0)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+7248)*1+lsi)*1]), &(inteval->stack[((hsi*315+4385)*1+lsi)*1]), &(inteval->stack[((hsi*273+2462)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+1892)*1+lsi)*1]), &(inteval->stack[((hsi*546+7248)*1+lsi)*1]), &(inteval->stack[((hsi*468+5295)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+4385)*1+lsi)*1]), &(inteval->stack[((hsi*780+1892)*1+lsi)*1]), &(inteval->stack[((hsi*660+5763)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+1892)*1+lsi)*1]), &(inteval->stack[((hsi*990+4385)*1+lsi)*1]), &(inteval->stack[((hsi*825+6423)*1+lsi)*1]),1);
HRRPart0bra0ket0li(inteval, &(inteval->stack[((hsi*1260+4385)*1+lsi)*1]), &(inteval->stack[((hsi*1155+1892)*1+lsi)*1]), &(inteval->stack[((hsi*945+3440)*1+lsi)*1]),1);
HRRPart0bra0ket0kk(inteval, &(inteval->stack[((hsi*1296+596)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4385)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8004)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1296+596)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
