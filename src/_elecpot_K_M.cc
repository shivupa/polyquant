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
#include <HRRPart0ket0bra0mi.h>
#include <HRRPart0ket0bra0mk.h>
#include <HRRPart0ket0bra0mp.h>
#include <HRRPart0ket0bra0pdd.h>
#include <HRRPart0ket0bra0pdf.h>
#include <HRRPart0ket0bra0pdg.h>
#include <HRRPart0ket0bra0pdp.h>
#include <HRRPart0ket0bra0pfd.h>
#include <HRRPart0ket0bra0pff.h>
#include <HRRPart0ket0bra0pfp.h>
#include <HRRPart0ket0bra0pgd.h>
#include <HRRPart0ket0bra0pgp.h>
#include <HRRPart0ket0bra0php.h>
#include <HRRPart0ket0bra0ppd.h>
#include <HRRPart0ket0bra0ppf.h>
#include <HRRPart0ket0bra0ppg.h>
#include <HRRPart0ket0bra0pph.h>
#include <HRRPart0ket0bra0ppp.h>
#include <HRRPart0ket0bra0psd.h>
#include <HRRPart0ket0bra0psf.h>
#include <HRRPart0ket0bra0psg.h>
#include <HRRPart0ket0bra0psh.h>
#include <HRRPart0ket0bra0psi.h>
#include <HRRPart0ket0bra0psp.h>
#include <_elecpot_K_M_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_K_M(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,804)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_K_M_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0ket0bra0psp(inteval, &(inteval->stack[((hsi*198+2784)*1+lsi)*1]), &(inteval->stack[((hsi*78+605)*1+lsi)*1]), &(inteval->stack[((hsi*66+683)*1+lsi)*1]),1);
HRRPart0ket0bra0ppp(inteval, &(inteval->stack[((hsi*234+2982)*1+lsi)*1]), &(inteval->stack[((hsi*91+514)*1+lsi)*1]), &(inteval->stack[((hsi*78+605)*1+lsi)*1]),1);
HRRPart0ket0bra0psd(inteval, &(inteval->stack[((hsi*396+3216)*1+lsi)*1]), &(inteval->stack[((hsi*234+2982)*1+lsi)*1]), &(inteval->stack[((hsi*198+2784)*1+lsi)*1]),1);
HRRPart0ket0bra0pdp(inteval, &(inteval->stack[((hsi*273+3612)*1+lsi)*1]), &(inteval->stack[((hsi*105+409)*1+lsi)*1]), &(inteval->stack[((hsi*91+514)*1+lsi)*1]),1);
HRRPart0ket0bra0ppd(inteval, &(inteval->stack[((hsi*468+3885)*1+lsi)*1]), &(inteval->stack[((hsi*273+3612)*1+lsi)*1]), &(inteval->stack[((hsi*234+2982)*1+lsi)*1]),1);
HRRPart0ket0bra0psf(inteval, &(inteval->stack[((hsi*660+4353)*1+lsi)*1]), &(inteval->stack[((hsi*468+3885)*1+lsi)*1]), &(inteval->stack[((hsi*396+3216)*1+lsi)*1]),1);
HRRPart0ket0bra0pfp(inteval, &(inteval->stack[((hsi*315+5013)*1+lsi)*1]), &(inteval->stack[((hsi*120+289)*1+lsi)*1]), &(inteval->stack[((hsi*105+409)*1+lsi)*1]),1);
HRRPart0ket0bra0pdd(inteval, &(inteval->stack[((hsi*546+5328)*1+lsi)*1]), &(inteval->stack[((hsi*315+5013)*1+lsi)*1]), &(inteval->stack[((hsi*273+3612)*1+lsi)*1]),1);
HRRPart0ket0bra0ppf(inteval, &(inteval->stack[((hsi*780+5874)*1+lsi)*1]), &(inteval->stack[((hsi*546+5328)*1+lsi)*1]), &(inteval->stack[((hsi*468+3885)*1+lsi)*1]),1);
HRRPart0ket0bra0psg(inteval, &(inteval->stack[((hsi*990+6654)*1+lsi)*1]), &(inteval->stack[((hsi*780+5874)*1+lsi)*1]), &(inteval->stack[((hsi*660+4353)*1+lsi)*1]),1);
HRRPart0ket0bra0pgp(inteval, &(inteval->stack[((hsi*360+3612)*1+lsi)*1]), &(inteval->stack[((hsi*136+153)*1+lsi)*1]), &(inteval->stack[((hsi*120+289)*1+lsi)*1]),1);
HRRPart0ket0bra0pfd(inteval, &(inteval->stack[((hsi*630+7644)*1+lsi)*1]), &(inteval->stack[((hsi*360+3612)*1+lsi)*1]), &(inteval->stack[((hsi*315+5013)*1+lsi)*1]),1);
HRRPart0ket0bra0pdf(inteval, &(inteval->stack[((hsi*910+8274)*1+lsi)*1]), &(inteval->stack[((hsi*630+7644)*1+lsi)*1]), &(inteval->stack[((hsi*546+5328)*1+lsi)*1]),1);
HRRPart0ket0bra0ppg(inteval, &(inteval->stack[((hsi*1170+9184)*1+lsi)*1]), &(inteval->stack[((hsi*910+8274)*1+lsi)*1]), &(inteval->stack[((hsi*780+5874)*1+lsi)*1]),1);
HRRPart0ket0bra0psh(inteval, &(inteval->stack[((hsi*1386+5013)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9184)*1+lsi)*1]), &(inteval->stack[((hsi*990+6654)*1+lsi)*1]),1);
HRRPart0ket0bra0mp(inteval, &(inteval->stack[((hsi*165+289)*1+lsi)*1]), &(inteval->stack[((hsi*66+683)*1+lsi)*1]), &(inteval->stack[((hsi*55+749)*1+lsi)*1]),1);
HRRPart0ket0bra0md(inteval, &(inteval->stack[((hsi*330+3972)*1+lsi)*1]), &(inteval->stack[((hsi*198+2784)*1+lsi)*1]), &(inteval->stack[((hsi*165+289)*1+lsi)*1]),1);
HRRPart0ket0bra0mf(inteval, &(inteval->stack[((hsi*550+10354)*1+lsi)*1]), &(inteval->stack[((hsi*396+3216)*1+lsi)*1]), &(inteval->stack[((hsi*330+3972)*1+lsi)*1]),1);
HRRPart0ket0bra0mg(inteval, &(inteval->stack[((hsi*825+2784)*1+lsi)*1]), &(inteval->stack[((hsi*660+4353)*1+lsi)*1]), &(inteval->stack[((hsi*550+10354)*1+lsi)*1]),1);
HRRPart0ket0bra0mh(inteval, &(inteval->stack[((hsi*1155+10354)*1+lsi)*1]), &(inteval->stack[((hsi*990+6654)*1+lsi)*1]), &(inteval->stack[((hsi*825+2784)*1+lsi)*1]),1);
HRRPart0ket0bra0mi(inteval, &(inteval->stack[((hsi*1540+11509)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5013)*1+lsi)*1]), &(inteval->stack[((hsi*1155+10354)*1+lsi)*1]),1);
HRRPart0ket0bra0php(inteval, &(inteval->stack[((hsi*408+6399)*1+lsi)*1]), &(inteval->stack[((hsi*153+0)*1+lsi)*1]), &(inteval->stack[((hsi*136+153)*1+lsi)*1]),1);
HRRPart0ket0bra0pgd(inteval, &(inteval->stack[((hsi*720+10354)*1+lsi)*1]), &(inteval->stack[((hsi*408+6399)*1+lsi)*1]), &(inteval->stack[((hsi*360+3612)*1+lsi)*1]),1);
HRRPart0ket0bra0pff(inteval, &(inteval->stack[((hsi*1050+2784)*1+lsi)*1]), &(inteval->stack[((hsi*720+10354)*1+lsi)*1]), &(inteval->stack[((hsi*630+7644)*1+lsi)*1]),1);
HRRPart0ket0bra0pdg(inteval, &(inteval->stack[((hsi*1365+6399)*1+lsi)*1]), &(inteval->stack[((hsi*1050+2784)*1+lsi)*1]), &(inteval->stack[((hsi*910+8274)*1+lsi)*1]),1);
HRRPart0ket0bra0pph(inteval, &(inteval->stack[((hsi*1638+2784)*1+lsi)*1]), &(inteval->stack[((hsi*1365+6399)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9184)*1+lsi)*1]),1);
HRRPart0ket0bra0psi(inteval, &(inteval->stack[((hsi*1848+6399)*1+lsi)*1]), &(inteval->stack[((hsi*1638+2784)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5013)*1+lsi)*1]),1);
HRRPart0ket0bra0mk(inteval, &(inteval->stack[((hsi*1980+804)*1+lsi)*1]), &(inteval->stack[((hsi*1848+6399)*1+lsi)*1]), &(inteval->stack[((hsi*1540+11509)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*1980+804)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
