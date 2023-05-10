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
#include <HRRPart0ket0bra0lp.h>
#include <HRRPart0ket0bra0md.h>
#include <HRRPart0ket0bra0mf.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_G_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_G_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,335)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_G_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+1010)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]),1);
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+1175)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]), &(inteval->stack[((hsi*66+169)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+1373)*1+lsi)*1]), &(inteval->stack[((hsi*198+1175)*1+lsi)*1]), &(inteval->stack[((hsi*165+1010)*1+lsi)*1]),1);
HRRPart0ket0bra0lp(inteval, &(inteval->stack[((hsi*135+1703)*1+lsi)*1]), &(inteval->stack[((hsi*55+235)*1+lsi)*1]), &(inteval->stack[((hsi*45+290)*1+lsi)*1]),1);
HRRPart0ket0bra0ld(inteval, &(inteval->stack[((hsi*270+1838)*1+lsi)*1]), &(inteval->stack[((hsi*165+1010)*1+lsi)*1]), &(inteval->stack[((hsi*135+1703)*1+lsi)*1]),1);
HRRPart0ket0bra0lf(inteval, &(inteval->stack[((hsi*450+2108)*1+lsi)*1]), &(inteval->stack[((hsi*330+1373)*1+lsi)*1]), &(inteval->stack[((hsi*270+1838)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+1703)*1+lsi)*1]), &(inteval->stack[((hsi*91+0)*1+lsi)*1]), &(inteval->stack[((hsi*78+91)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+2558)*1+lsi)*1]), &(inteval->stack[((hsi*234+1703)*1+lsi)*1]), &(inteval->stack[((hsi*198+1175)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+2954)*1+lsi)*1]), &(inteval->stack[((hsi*396+2558)*1+lsi)*1]), &(inteval->stack[((hsi*330+1373)*1+lsi)*1]),1);
HRRPart0ket0bra0lg(inteval, &(inteval->stack[((hsi*675+335)*1+lsi)*1]), &(inteval->stack[((hsi*550+2954)*1+lsi)*1]), &(inteval->stack[((hsi*450+2108)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*675+335)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
