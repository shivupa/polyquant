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
#include <_elecpot_H_M_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_H_M(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,515)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_H_M_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1670)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+1868)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]), &(inteval->stack[((hsi*78+316)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+2102)*1+lsi)*1]), &(inteval->stack[((hsi*234+1868)*1+lsi)*1]), &(inteval->stack[((hsi*198+1670)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+2498)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]), &(inteval->stack[((hsi*91+225)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+2771)*1+lsi)*1]), &(inteval->stack[((hsi*273+2498)*1+lsi)*1]), &(inteval->stack[((hsi*234+1868)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+3239)*1+lsi)*1]), &(inteval->stack[((hsi*468+2771)*1+lsi)*1]), &(inteval->stack[((hsi*396+2102)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+1868)*1+lsi)*1]), &(inteval->stack[((hsi*66+394)*1+lsi)*1]), &(inteval->stack[((hsi*55+460)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+3899)*1+lsi)*1]), &(inteval->stack[((hsi*198+1670)*1+lsi)*1]), &(inteval->stack[((hsi*165+1868)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+4229)*1+lsi)*1]), &(inteval->stack[((hsi*396+2102)*1+lsi)*1]), &(inteval->stack[((hsi*330+3899)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+1670)*1+lsi)*1]), &(inteval->stack[((hsi*660+3239)*1+lsi)*1]), &(inteval->stack[((hsi*550+4229)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+3899)*1+lsi)*1]), &(inteval->stack[((hsi*120+0)*1+lsi)*1]), &(inteval->stack[((hsi*105+120)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+4214)*1+lsi)*1]), &(inteval->stack[((hsi*315+3899)*1+lsi)*1]), &(inteval->stack[((hsi*273+2498)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+4760)*1+lsi)*1]), &(inteval->stack[((hsi*546+4214)*1+lsi)*1]), &(inteval->stack[((hsi*468+2771)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+5540)*1+lsi)*1]), &(inteval->stack[((hsi*780+4760)*1+lsi)*1]), &(inteval->stack[((hsi*660+3239)*1+lsi)*1]),1);
HRRPart0ket0bra0mh(inteval, &(inteval->stack[((hsi*1155+515)*1+lsi)*1]), &(inteval->stack[((hsi*990+5540)*1+lsi)*1]), &(inteval->stack[((hsi*825+1670)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1155+515)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif