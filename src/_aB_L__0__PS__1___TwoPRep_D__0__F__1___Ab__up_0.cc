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
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_L__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_L__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,56440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_L__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+234640)*1+lsi)*1]), &(inteval->stack[((hsi*5005+28215)*1+lsi)*1]), &(inteval->stack[((hsi*4290+33220)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+247510)*1+lsi)*1]), &(inteval->stack[((hsi*4290+33220)*1+lsi)*1]), &(inteval->stack[((hsi*3630+37510)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+258400)*1+lsi)*1]), &(inteval->stack[((hsi*12870+234640)*1+lsi)*1]), &(inteval->stack[((hsi*10890+247510)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+280180)*1+lsi)*1]), &(inteval->stack[((hsi*5775+22440)*1+lsi)*1]), &(inteval->stack[((hsi*5005+28215)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+295195)*1+lsi)*1]), &(inteval->stack[((hsi*15015+280180)*1+lsi)*1]), &(inteval->stack[((hsi*12870+234640)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+320935)*1+lsi)*1]), &(inteval->stack[((hsi*25740+295195)*1+lsi)*1]), &(inteval->stack[((hsi*21780+258400)*1+lsi)*1]),55);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+234640)*1+lsi)*1]), &(inteval->stack[((hsi*4095+45865)*1+lsi)*1]), &(inteval->stack[((hsi*3510+49960)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+245170)*1+lsi)*1]), &(inteval->stack[((hsi*3510+49960)*1+lsi)*1]), &(inteval->stack[((hsi*2970+53470)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+254080)*1+lsi)*1]), &(inteval->stack[((hsi*10530+234640)*1+lsi)*1]), &(inteval->stack[((hsi*8910+245170)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+271900)*1+lsi)*1]), &(inteval->stack[((hsi*4725+41140)*1+lsi)*1]), &(inteval->stack[((hsi*4095+45865)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+284185)*1+lsi)*1]), &(inteval->stack[((hsi*12285+271900)*1+lsi)*1]), &(inteval->stack[((hsi*10530+234640)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+22440)*1+lsi)*1]), &(inteval->stack[((hsi*21060+284185)*1+lsi)*1]), &(inteval->stack[((hsi*17820+254080)*1+lsi)*1]),45);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*89100+357235)*1+lsi)*1]), &(inteval->stack[((hsi*36300+320935)*1+lsi)*1]), &(inteval->stack[((hsi*29700+22440)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+234640)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+250084)*1+lsi)*1]), &(inteval->stack[((hsi*5148+12936)*1+lsi)*1]), &(inteval->stack[((hsi*4356+18084)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+263152)*1+lsi)*1]), &(inteval->stack[((hsi*15444+234640)*1+lsi)*1]), &(inteval->stack[((hsi*13068+250084)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+12936)*1+lsi)*1]), &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*6006+6930)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+289288)*1+lsi)*1]), &(inteval->stack[((hsi*18018+12936)*1+lsi)*1]), &(inteval->stack[((hsi*15444+234640)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+0)*1+lsi)*1]), &(inteval->stack[((hsi*30888+289288)*1+lsi)*1]), &(inteval->stack[((hsi*26136+263152)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*108900+446335)*1+lsi)*1]), &(inteval->stack[((hsi*43560+0)*1+lsi)*1]), &(inteval->stack[((hsi*36300+320935)*1+lsi)*1]),660);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*178200+56440)*1+lsi)*1]), &(inteval->stack[((hsi*108900+446335)*1+lsi)*1]), &(inteval->stack[((hsi*89100+357235)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*178200+56440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif