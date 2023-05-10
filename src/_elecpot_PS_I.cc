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
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psp.h>
#include <_elecpot_PS_I_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_PS_I(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,749)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_PS_I_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+2597)*1+lsi)*1]), &(inteval->stack[((hsi*91+514)*1+lsi)*1]), &(inteval->stack[((hsi*78+605)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+2831)*1+lsi)*1]), &(inteval->stack[((hsi*105+409)*1+lsi)*1]), &(inteval->stack[((hsi*91+514)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+3104)*1+lsi)*1]), &(inteval->stack[((hsi*273+2831)*1+lsi)*1]), &(inteval->stack[((hsi*234+2597)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+3572)*1+lsi)*1]), &(inteval->stack[((hsi*120+289)*1+lsi)*1]), &(inteval->stack[((hsi*105+409)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+3887)*1+lsi)*1]), &(inteval->stack[((hsi*315+3572)*1+lsi)*1]), &(inteval->stack[((hsi*273+2831)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+4433)*1+lsi)*1]), &(inteval->stack[((hsi*546+3887)*1+lsi)*1]), &(inteval->stack[((hsi*468+3104)*1+lsi)*1]),1);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*360+5213)*1+lsi)*1]), &(inteval->stack[((hsi*136+153)*1+lsi)*1]), &(inteval->stack[((hsi*120+289)*1+lsi)*1]),1);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*630+5573)*1+lsi)*1]), &(inteval->stack[((hsi*360+5213)*1+lsi)*1]), &(inteval->stack[((hsi*315+3572)*1+lsi)*1]),1);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*910+6203)*1+lsi)*1]), &(inteval->stack[((hsi*630+5573)*1+lsi)*1]), &(inteval->stack[((hsi*546+3887)*1+lsi)*1]),1);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*1170+7113)*1+lsi)*1]), &(inteval->stack[((hsi*910+6203)*1+lsi)*1]), &(inteval->stack[((hsi*780+4433)*1+lsi)*1]),1);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+3572)*1+lsi)*1]), &(inteval->stack[((hsi*78+605)*1+lsi)*1]), &(inteval->stack[((hsi*66+683)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3770)*1+lsi)*1]), &(inteval->stack[((hsi*234+2597)*1+lsi)*1]), &(inteval->stack[((hsi*198+3572)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+8283)*1+lsi)*1]), &(inteval->stack[((hsi*468+3104)*1+lsi)*1]), &(inteval->stack[((hsi*396+3770)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+2597)*1+lsi)*1]), &(inteval->stack[((hsi*780+4433)*1+lsi)*1]), &(inteval->stack[((hsi*660+8283)*1+lsi)*1]),1);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*1386+3587)*1+lsi)*1]), &(inteval->stack[((hsi*1170+7113)*1+lsi)*1]), &(inteval->stack[((hsi*990+2597)*1+lsi)*1]),1);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*408+2597)*1+lsi)*1]), &(inteval->stack[((hsi*153+0)*1+lsi)*1]), &(inteval->stack[((hsi*136+153)*1+lsi)*1]),1);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*720+0)*1+lsi)*1]), &(inteval->stack[((hsi*408+2597)*1+lsi)*1]), &(inteval->stack[((hsi*360+5213)*1+lsi)*1]),1);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*1050+8283)*1+lsi)*1]), &(inteval->stack[((hsi*720+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+5573)*1+lsi)*1]),1);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*1365+9333)*1+lsi)*1]), &(inteval->stack[((hsi*1050+8283)*1+lsi)*1]), &(inteval->stack[((hsi*910+6203)*1+lsi)*1]),1);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*1638+4973)*1+lsi)*1]), &(inteval->stack[((hsi*1365+9333)*1+lsi)*1]), &(inteval->stack[((hsi*1170+7113)*1+lsi)*1]),1);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*1848+749)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4973)*1+lsi)*1]), &(inteval->stack[((hsi*1386+3587)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1848+749)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
