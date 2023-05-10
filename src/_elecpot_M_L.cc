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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mf.h>
#include <HRRPart0bra0ket0mg.h>
#include <HRRPart0bra0ket0mh.h>
#include <HRRPart0bra0ket0mi.h>
#include <HRRPart0bra0ket0mk.h>
#include <HRRPart0bra0ket0ml.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0pdd.h>
#include <HRRPart0bra0ket0pdf.h>
#include <HRRPart0bra0ket0pdg.h>
#include <HRRPart0bra0ket0pdh.h>
#include <HRRPart0bra0ket0pdp.h>
#include <HRRPart0bra0ket0pfd.h>
#include <HRRPart0bra0ket0pff.h>
#include <HRRPart0bra0ket0pfg.h>
#include <HRRPart0bra0ket0pfp.h>
#include <HRRPart0bra0ket0pgd.h>
#include <HRRPart0bra0ket0pgf.h>
#include <HRRPart0bra0ket0pgp.h>
#include <HRRPart0bra0ket0phd.h>
#include <HRRPart0bra0ket0php.h>
#include <HRRPart0bra0ket0pip.h>
#include <HRRPart0bra0ket0ppd.h>
#include <HRRPart0bra0ket0ppf.h>
#include <HRRPart0bra0ket0ppg.h>
#include <HRRPart0bra0ket0pph.h>
#include <HRRPart0bra0ket0ppi.h>
#include <HRRPart0bra0ket0ppp.h>
#include <HRRPart0bra0ket0psd.h>
#include <HRRPart0bra0ket0psf.h>
#include <HRRPart0bra0ket0psg.h>
#include <HRRPart0bra0ket0psh.h>
#include <HRRPart0bra0ket0psi.h>
#include <HRRPart0bra0ket0psk.h>
#include <HRRPart0bra0ket0psp.h>
#include <_elecpot_M_L_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _elecpot_M_L(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,975)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_elecpot_M_L_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*198+3450)*1+lsi)*1]), &(inteval->stack[((hsi*78+776)*1+lsi)*1]), &(inteval->stack[((hsi*66+854)*1+lsi)*1]),1);
HRRPart0bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+3648)*1+lsi)*1]), &(inteval->stack[((hsi*91+685)*1+lsi)*1]), &(inteval->stack[((hsi*78+776)*1+lsi)*1]),1);
HRRPart0bra0ket0psd(inteval, &(inteval->stack[((hsi*396+3882)*1+lsi)*1]), &(inteval->stack[((hsi*234+3648)*1+lsi)*1]), &(inteval->stack[((hsi*198+3450)*1+lsi)*1]),1);
HRRPart0bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+4278)*1+lsi)*1]), &(inteval->stack[((hsi*105+580)*1+lsi)*1]), &(inteval->stack[((hsi*91+685)*1+lsi)*1]),1);
HRRPart0bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+4551)*1+lsi)*1]), &(inteval->stack[((hsi*273+4278)*1+lsi)*1]), &(inteval->stack[((hsi*234+3648)*1+lsi)*1]),1);
HRRPart0bra0ket0psf(inteval, &(inteval->stack[((hsi*660+5019)*1+lsi)*1]), &(inteval->stack[((hsi*468+4551)*1+lsi)*1]), &(inteval->stack[((hsi*396+3882)*1+lsi)*1]),1);
HRRPart0bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+5679)*1+lsi)*1]), &(inteval->stack[((hsi*120+460)*1+lsi)*1]), &(inteval->stack[((hsi*105+580)*1+lsi)*1]),1);
HRRPart0bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+5994)*1+lsi)*1]), &(inteval->stack[((hsi*315+5679)*1+lsi)*1]), &(inteval->stack[((hsi*273+4278)*1+lsi)*1]),1);
HRRPart0bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+6540)*1+lsi)*1]), &(inteval->stack[((hsi*546+5994)*1+lsi)*1]), &(inteval->stack[((hsi*468+4551)*1+lsi)*1]),1);
HRRPart0bra0ket0psg(inteval, &(inteval->stack[((hsi*990+7320)*1+lsi)*1]), &(inteval->stack[((hsi*780+6540)*1+lsi)*1]), &(inteval->stack[((hsi*660+5019)*1+lsi)*1]),1);
HRRPart0bra0ket0pgp(inteval, &(inteval->stack[((hsi*360+4278)*1+lsi)*1]), &(inteval->stack[((hsi*136+324)*1+lsi)*1]), &(inteval->stack[((hsi*120+460)*1+lsi)*1]),1);
HRRPart0bra0ket0pfd(inteval, &(inteval->stack[((hsi*630+8310)*1+lsi)*1]), &(inteval->stack[((hsi*360+4278)*1+lsi)*1]), &(inteval->stack[((hsi*315+5679)*1+lsi)*1]),1);
HRRPart0bra0ket0pdf(inteval, &(inteval->stack[((hsi*910+8940)*1+lsi)*1]), &(inteval->stack[((hsi*630+8310)*1+lsi)*1]), &(inteval->stack[((hsi*546+5994)*1+lsi)*1]),1);
HRRPart0bra0ket0ppg(inteval, &(inteval->stack[((hsi*1170+9850)*1+lsi)*1]), &(inteval->stack[((hsi*910+8940)*1+lsi)*1]), &(inteval->stack[((hsi*780+6540)*1+lsi)*1]),1);
HRRPart0bra0ket0psh(inteval, &(inteval->stack[((hsi*1386+5679)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9850)*1+lsi)*1]), &(inteval->stack[((hsi*990+7320)*1+lsi)*1]),1);
HRRPart0bra0ket0php(inteval, &(inteval->stack[((hsi*408+11020)*1+lsi)*1]), &(inteval->stack[((hsi*153+171)*1+lsi)*1]), &(inteval->stack[((hsi*136+324)*1+lsi)*1]),1);
HRRPart0bra0ket0pgd(inteval, &(inteval->stack[((hsi*720+11428)*1+lsi)*1]), &(inteval->stack[((hsi*408+11020)*1+lsi)*1]), &(inteval->stack[((hsi*360+4278)*1+lsi)*1]),1);
HRRPart0bra0ket0pff(inteval, &(inteval->stack[((hsi*1050+12148)*1+lsi)*1]), &(inteval->stack[((hsi*720+11428)*1+lsi)*1]), &(inteval->stack[((hsi*630+8310)*1+lsi)*1]),1);
HRRPart0bra0ket0pdg(inteval, &(inteval->stack[((hsi*1365+13198)*1+lsi)*1]), &(inteval->stack[((hsi*1050+12148)*1+lsi)*1]), &(inteval->stack[((hsi*910+8940)*1+lsi)*1]),1);
HRRPart0bra0ket0pph(inteval, &(inteval->stack[((hsi*1638+14563)*1+lsi)*1]), &(inteval->stack[((hsi*1365+13198)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9850)*1+lsi)*1]),1);
HRRPart0bra0ket0psi(inteval, &(inteval->stack[((hsi*1848+8310)*1+lsi)*1]), &(inteval->stack[((hsi*1638+14563)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5679)*1+lsi)*1]),1);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*165+10158)*1+lsi)*1]), &(inteval->stack[((hsi*66+854)*1+lsi)*1]), &(inteval->stack[((hsi*55+920)*1+lsi)*1]),1);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*330+4278)*1+lsi)*1]), &(inteval->stack[((hsi*198+3450)*1+lsi)*1]), &(inteval->stack[((hsi*165+10158)*1+lsi)*1]),1);
HRRPart0bra0ket0mf(inteval, &(inteval->stack[((hsi*550+10158)*1+lsi)*1]), &(inteval->stack[((hsi*396+3882)*1+lsi)*1]), &(inteval->stack[((hsi*330+4278)*1+lsi)*1]),1);
HRRPart0bra0ket0mg(inteval, &(inteval->stack[((hsi*825+3450)*1+lsi)*1]), &(inteval->stack[((hsi*660+5019)*1+lsi)*1]), &(inteval->stack[((hsi*550+10158)*1+lsi)*1]),1);
HRRPart0bra0ket0mh(inteval, &(inteval->stack[((hsi*1155+4275)*1+lsi)*1]), &(inteval->stack[((hsi*990+7320)*1+lsi)*1]), &(inteval->stack[((hsi*825+3450)*1+lsi)*1]),1);
HRRPart0bra0ket0mi(inteval, &(inteval->stack[((hsi*1540+16201)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5679)*1+lsi)*1]), &(inteval->stack[((hsi*1155+4275)*1+lsi)*1]),1);
HRRPart0bra0ket0mk(inteval, &(inteval->stack[((hsi*1980+3450)*1+lsi)*1]), &(inteval->stack[((hsi*1848+8310)*1+lsi)*1]), &(inteval->stack[((hsi*1540+16201)*1+lsi)*1]),1);
HRRPart0bra0ket0pip(inteval, &(inteval->stack[((hsi*459+5430)*1+lsi)*1]), &(inteval->stack[((hsi*171+0)*1+lsi)*1]), &(inteval->stack[((hsi*153+171)*1+lsi)*1]),1);
HRRPart0bra0ket0phd(inteval, &(inteval->stack[((hsi*816+5889)*1+lsi)*1]), &(inteval->stack[((hsi*459+5430)*1+lsi)*1]), &(inteval->stack[((hsi*408+11020)*1+lsi)*1]),1);
HRRPart0bra0ket0pgf(inteval, &(inteval->stack[((hsi*1200+6705)*1+lsi)*1]), &(inteval->stack[((hsi*816+5889)*1+lsi)*1]), &(inteval->stack[((hsi*720+11428)*1+lsi)*1]),1);
HRRPart0bra0ket0pfg(inteval, &(inteval->stack[((hsi*1575+10158)*1+lsi)*1]), &(inteval->stack[((hsi*1200+6705)*1+lsi)*1]), &(inteval->stack[((hsi*1050+12148)*1+lsi)*1]),1);
HRRPart0bra0ket0pdh(inteval, &(inteval->stack[((hsi*1911+5430)*1+lsi)*1]), &(inteval->stack[((hsi*1575+10158)*1+lsi)*1]), &(inteval->stack[((hsi*1365+13198)*1+lsi)*1]),1);
HRRPart0bra0ket0ppi(inteval, &(inteval->stack[((hsi*2184+10158)*1+lsi)*1]), &(inteval->stack[((hsi*1911+5430)*1+lsi)*1]), &(inteval->stack[((hsi*1638+14563)*1+lsi)*1]),1);
HRRPart0bra0ket0psk(inteval, &(inteval->stack[((hsi*2376+5430)*1+lsi)*1]), &(inteval->stack[((hsi*2184+10158)*1+lsi)*1]), &(inteval->stack[((hsi*1848+8310)*1+lsi)*1]),1);
HRRPart0bra0ket0ml(inteval, &(inteval->stack[((hsi*2475+975)*1+lsi)*1]), &(inteval->stack[((hsi*2376+5430)*1+lsi)*1]), &(inteval->stack[((hsi*1980+3450)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2475+975)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
