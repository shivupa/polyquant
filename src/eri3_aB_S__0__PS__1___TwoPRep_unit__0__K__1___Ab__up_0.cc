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
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdh.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfg.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgf.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0phd.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0pip.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppi.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psk.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_S__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_S__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,920)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_S__0__PS__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*234+3296)*1+lsi)*1]), &(inteval->stack[((hsi*91+685)*1+lsi)*1]), &(inteval->stack[((hsi*78+776)*1+lsi)*1]),1);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*273+3530)*1+lsi)*1]), &(inteval->stack[((hsi*105+580)*1+lsi)*1]), &(inteval->stack[((hsi*91+685)*1+lsi)*1]),1);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*468+3803)*1+lsi)*1]), &(inteval->stack[((hsi*273+3530)*1+lsi)*1]), &(inteval->stack[((hsi*234+3296)*1+lsi)*1]),1);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*315+4271)*1+lsi)*1]), &(inteval->stack[((hsi*120+460)*1+lsi)*1]), &(inteval->stack[((hsi*105+580)*1+lsi)*1]),1);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*546+4586)*1+lsi)*1]), &(inteval->stack[((hsi*315+4271)*1+lsi)*1]), &(inteval->stack[((hsi*273+3530)*1+lsi)*1]),1);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*780+5132)*1+lsi)*1]), &(inteval->stack[((hsi*546+4586)*1+lsi)*1]), &(inteval->stack[((hsi*468+3803)*1+lsi)*1]),1);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*360+5912)*1+lsi)*1]), &(inteval->stack[((hsi*136+324)*1+lsi)*1]), &(inteval->stack[((hsi*120+460)*1+lsi)*1]),1);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*630+6272)*1+lsi)*1]), &(inteval->stack[((hsi*360+5912)*1+lsi)*1]), &(inteval->stack[((hsi*315+4271)*1+lsi)*1]),1);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*910+6902)*1+lsi)*1]), &(inteval->stack[((hsi*630+6272)*1+lsi)*1]), &(inteval->stack[((hsi*546+4586)*1+lsi)*1]),1);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*1170+7812)*1+lsi)*1]), &(inteval->stack[((hsi*910+6902)*1+lsi)*1]), &(inteval->stack[((hsi*780+5132)*1+lsi)*1]),1);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*408+4271)*1+lsi)*1]), &(inteval->stack[((hsi*153+171)*1+lsi)*1]), &(inteval->stack[((hsi*136+324)*1+lsi)*1]),1);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*720+8982)*1+lsi)*1]), &(inteval->stack[((hsi*408+4271)*1+lsi)*1]), &(inteval->stack[((hsi*360+5912)*1+lsi)*1]),1);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*1050+9702)*1+lsi)*1]), &(inteval->stack[((hsi*720+8982)*1+lsi)*1]), &(inteval->stack[((hsi*630+6272)*1+lsi)*1]),1);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*1365+10752)*1+lsi)*1]), &(inteval->stack[((hsi*1050+9702)*1+lsi)*1]), &(inteval->stack[((hsi*910+6902)*1+lsi)*1]),1);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*1638+5912)*1+lsi)*1]), &(inteval->stack[((hsi*1365+10752)*1+lsi)*1]), &(inteval->stack[((hsi*1170+7812)*1+lsi)*1]),1);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*198+4679)*1+lsi)*1]), &(inteval->stack[((hsi*78+776)*1+lsi)*1]), &(inteval->stack[((hsi*66+854)*1+lsi)*1]),1);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*396+324)*1+lsi)*1]), &(inteval->stack[((hsi*234+3296)*1+lsi)*1]), &(inteval->stack[((hsi*198+4679)*1+lsi)*1]),1);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*660+12117)*1+lsi)*1]), &(inteval->stack[((hsi*468+3803)*1+lsi)*1]), &(inteval->stack[((hsi*396+324)*1+lsi)*1]),1);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*990+12777)*1+lsi)*1]), &(inteval->stack[((hsi*780+5132)*1+lsi)*1]), &(inteval->stack[((hsi*660+12117)*1+lsi)*1]),1);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*1386+13767)*1+lsi)*1]), &(inteval->stack[((hsi*1170+7812)*1+lsi)*1]), &(inteval->stack[((hsi*990+12777)*1+lsi)*1]),1);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*1848+15153)*1+lsi)*1]), &(inteval->stack[((hsi*1638+5912)*1+lsi)*1]), &(inteval->stack[((hsi*1386+13767)*1+lsi)*1]),1);
HRRPart1bra0ket0pip(inteval, &(inteval->stack[((hsi*459+12117)*1+lsi)*1]), &(inteval->stack[((hsi*171+0)*1+lsi)*1]), &(inteval->stack[((hsi*153+171)*1+lsi)*1]),1);
HRRPart1bra0ket0phd(inteval, &(inteval->stack[((hsi*816+12576)*1+lsi)*1]), &(inteval->stack[((hsi*459+12117)*1+lsi)*1]), &(inteval->stack[((hsi*408+4271)*1+lsi)*1]),1);
HRRPart1bra0ket0pgf(inteval, &(inteval->stack[((hsi*1200+3296)*1+lsi)*1]), &(inteval->stack[((hsi*816+12576)*1+lsi)*1]), &(inteval->stack[((hsi*720+8982)*1+lsi)*1]),1);
HRRPart1bra0ket0pfg(inteval, &(inteval->stack[((hsi*1575+12117)*1+lsi)*1]), &(inteval->stack[((hsi*1200+3296)*1+lsi)*1]), &(inteval->stack[((hsi*1050+9702)*1+lsi)*1]),1);
HRRPart1bra0ket0pdh(inteval, &(inteval->stack[((hsi*1911+7550)*1+lsi)*1]), &(inteval->stack[((hsi*1575+12117)*1+lsi)*1]), &(inteval->stack[((hsi*1365+10752)*1+lsi)*1]),1);
HRRPart1bra0ket0ppi(inteval, &(inteval->stack[((hsi*2184+9461)*1+lsi)*1]), &(inteval->stack[((hsi*1911+7550)*1+lsi)*1]), &(inteval->stack[((hsi*1638+5912)*1+lsi)*1]),1);
HRRPart1bra0ket0psk(inteval, &(inteval->stack[((hsi*2376+920)*1+lsi)*1]), &(inteval->stack[((hsi*2184+9461)*1+lsi)*1]), &(inteval->stack[((hsi*1848+15153)*1+lsi)*1]),1);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*2376+920)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
