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
#include <HRRPart0ket0bra0ld.h>
#include <HRRPart0ket0bra0lf.h>
#include <HRRPart0ket0bra0lg.h>
#include <HRRPart0ket0bra0lh.h>
#include <HRRPart0ket0bra0li.h>
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mf.h>
#include <HRRPart0ket0bra0mg.h>
#include <HRRPart0ket0bra0mh.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0pdd.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_I_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_I_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_I_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+1820)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1985)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+2183)*1+lsi)*1]), &(inteval->stack[((hsi*198+1985)*1+lsi)*1]), &(inteval->stack[((hsi*165+1820)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+2513)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+2747)*1+lsi)*1]), &(inteval->stack[((hsi*234+2513)*1+lsi)*1]), &(inteval->stack[((hsi*198+1985)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+3143)*1+lsi)*1]), &(inteval->stack[((hsi*396+2747)*1+lsi)*1]), &(inteval->stack[((hsi*330+2183)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+3693)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+3966)*1+lsi)*1]), &(inteval->stack[((hsi*273+3693)*1+lsi)*1]), &(inteval->stack[((hsi*234+2513)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+4434)*1+lsi)*1]), &(inteval->stack[((hsi*468+3966)*1+lsi)*1]), &(inteval->stack[((hsi*396+2747)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+5094)*1+lsi)*1]), &(inteval->stack[((hsi*660+4434)*1+lsi)*1]), &(inteval->stack[((hsi*550+3143)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+2513)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]), &(inteval->stack[((hsi*45+515)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+2648)*1+lsi)*1]), &(inteval->stack[((hsi*165+1820)*1+lsi)*1]), &(inteval->stack[((hsi*135+2513)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+5919)*1+lsi)*1]), &(inteval->stack[((hsi*330+2183)*1+lsi)*1]), &(inteval->stack[((hsi*270+2648)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+1820)*1+lsi)*1]), &(inteval->stack[((hsi*550+3143)*1+lsi)*1]), &(inteval->stack[((hsi*450+5919)*1+lsi)*1]),1);
HRRPart0ket0bra0lh(inteval, &(inteval->stack[((hsi*945+2495)*1+lsi)*1]), &(inteval->stack[((hsi*825+5094)*1+lsi)*1]), &(inteval->stack[((hsi*675+1820)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+1820)*1+lsi)*1]), &(inteval->stack[((hsi*120+0)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+0)*1+lsi)*1]), &(inteval->stack[((hsi*315+1820)*1+lsi)*1]), &(inteval->stack[((hsi*273+3693)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+5919)*1+lsi)*1]), &(inteval->stack[((hsi*546+0)*1+lsi)*1]), &(inteval->stack[((hsi*468+3966)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+3440)*1+lsi)*1]), &(inteval->stack[((hsi*780+5919)*1+lsi)*1]), &(inteval->stack[((hsi*660+4434)*1+lsi)*1]),1);
HRRPart0ket0bra0mh(inteval, &(inteval->stack[((hsi*1155+5919)*1+lsi)*1]), &(inteval->stack[((hsi*990+3440)*1+lsi)*1]), &(inteval->stack[((hsi*825+5094)*1+lsi)*1]),1);
HRRPart0ket0bra0li(inteval, &(inteval->stack[((hsi*1260+560)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5919)*1+lsi)*1]), &(inteval->stack[((hsi*945+2495)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1260+560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
