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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mh.h>
#include <HRRPart1bra0ket0mi.h>
#include <HRRPart1bra0ket0mk.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdg.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pff.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgd.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0php.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0pph.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psi.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_I__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_I__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,22512)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_I__0__M__1___TwoPRep_unit__0__K__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+77952)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16940)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19124)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+83496)*1+lsi)*1]), &(inteval->stack[((hsi*2548+14392)*1+lsi)*1]), &(inteval->stack[((hsi*2184+16940)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+90048)*1+lsi)*1]), &(inteval->stack[((hsi*6552+83496)*1+lsi)*1]), &(inteval->stack[((hsi*5544+77952)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+101136)*1+lsi)*1]), &(inteval->stack[((hsi*2940+11452)*1+lsi)*1]), &(inteval->stack[((hsi*2548+14392)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+108780)*1+lsi)*1]), &(inteval->stack[((hsi*7644+101136)*1+lsi)*1]), &(inteval->stack[((hsi*6552+83496)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+121884)*1+lsi)*1]), &(inteval->stack[((hsi*13104+108780)*1+lsi)*1]), &(inteval->stack[((hsi*11088+90048)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+140364)*1+lsi)*1]), &(inteval->stack[((hsi*3360+8092)*1+lsi)*1]), &(inteval->stack[((hsi*2940+11452)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+149184)*1+lsi)*1]), &(inteval->stack[((hsi*8820+140364)*1+lsi)*1]), &(inteval->stack[((hsi*7644+101136)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+164472)*1+lsi)*1]), &(inteval->stack[((hsi*15288+149184)*1+lsi)*1]), &(inteval->stack[((hsi*13104+108780)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+186312)*1+lsi)*1]), &(inteval->stack[((hsi*21840+164472)*1+lsi)*1]), &(inteval->stack[((hsi*18480+121884)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+101136)*1+lsi)*1]), &(inteval->stack[((hsi*3808+4284)*1+lsi)*1]), &(inteval->stack[((hsi*3360+8092)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+214032)*1+lsi)*1]), &(inteval->stack[((hsi*10080+101136)*1+lsi)*1]), &(inteval->stack[((hsi*8820+140364)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+231672)*1+lsi)*1]), &(inteval->stack[((hsi*17640+214032)*1+lsi)*1]), &(inteval->stack[((hsi*15288+149184)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+257152)*1+lsi)*1]), &(inteval->stack[((hsi*25480+231672)*1+lsi)*1]), &(inteval->stack[((hsi*21840+164472)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+140364)*1+lsi)*1]), &(inteval->stack[((hsi*32760+257152)*1+lsi)*1]), &(inteval->stack[((hsi*27720+186312)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+8092)*1+lsi)*1]), &(inteval->stack[((hsi*1848+19124)*1+lsi)*1]), &(inteval->stack[((hsi*1540+20972)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+111216)*1+lsi)*1]), &(inteval->stack[((hsi*5544+77952)*1+lsi)*1]), &(inteval->stack[((hsi*4620+8092)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+289912)*1+lsi)*1]), &(inteval->stack[((hsi*11088+90048)*1+lsi)*1]), &(inteval->stack[((hsi*9240+111216)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+77952)*1+lsi)*1]), &(inteval->stack[((hsi*18480+121884)*1+lsi)*1]), &(inteval->stack[((hsi*15400+289912)*1+lsi)*1]),28);
HRRPart1bra0ket0mh(inteval, &(inteval->stack[((hsi*32340+289912)*1+lsi)*1]), &(inteval->stack[((hsi*27720+186312)*1+lsi)*1]), &(inteval->stack[((hsi*23100+77952)*1+lsi)*1]),28);
HRRPart1bra0ket0mi(inteval, &(inteval->stack[((hsi*43120+322252)*1+lsi)*1]), &(inteval->stack[((hsi*38808+140364)*1+lsi)*1]), &(inteval->stack[((hsi*32340+289912)*1+lsi)*1]),28);
HRRPart1bra0ket0php(inteval, &(inteval->stack[((hsi*11424+179172)*1+lsi)*1]), &(inteval->stack[((hsi*4284+0)*1+lsi)*1]), &(inteval->stack[((hsi*3808+4284)*1+lsi)*1]),28);
HRRPart1bra0ket0pgd(inteval, &(inteval->stack[((hsi*20160+289912)*1+lsi)*1]), &(inteval->stack[((hsi*11424+179172)*1+lsi)*1]), &(inteval->stack[((hsi*10080+101136)*1+lsi)*1]),28);
HRRPart1bra0ket0pff(inteval, &(inteval->stack[((hsi*29400+77952)*1+lsi)*1]), &(inteval->stack[((hsi*20160+289912)*1+lsi)*1]), &(inteval->stack[((hsi*17640+214032)*1+lsi)*1]),28);
HRRPart1bra0ket0pdg(inteval, &(inteval->stack[((hsi*38220+179172)*1+lsi)*1]), &(inteval->stack[((hsi*29400+77952)*1+lsi)*1]), &(inteval->stack[((hsi*25480+231672)*1+lsi)*1]),28);
HRRPart1bra0ket0pph(inteval, &(inteval->stack[((hsi*45864+77952)*1+lsi)*1]), &(inteval->stack[((hsi*38220+179172)*1+lsi)*1]), &(inteval->stack[((hsi*32760+257152)*1+lsi)*1]),28);
HRRPart1bra0ket0psi(inteval, &(inteval->stack[((hsi*51744+179172)*1+lsi)*1]), &(inteval->stack[((hsi*45864+77952)*1+lsi)*1]), &(inteval->stack[((hsi*38808+140364)*1+lsi)*1]),28);
HRRPart1bra0ket0mk(inteval, &(inteval->stack[((hsi*55440+22512)*1+lsi)*1]), &(inteval->stack[((hsi*51744+179172)*1+lsi)*1]), &(inteval->stack[((hsi*43120+322252)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*55440+22512)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
