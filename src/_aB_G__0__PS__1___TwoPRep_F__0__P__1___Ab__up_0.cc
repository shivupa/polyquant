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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14400)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+44100)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10176)*1+lsi)*1]), &(inteval->stack[((hsi*1386+12024)*1+lsi)*1]),66);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+48258)*1+lsi)*1]), &(inteval->stack[((hsi*1386+12024)*1+lsi)*1]), &(inteval->stack[((hsi*990+13410)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+51228)*1+lsi)*1]), &(inteval->stack[((hsi*4158+44100)*1+lsi)*1]), &(inteval->stack[((hsi*2970+48258)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+57168)*1+lsi)*1]), &(inteval->stack[((hsi*2376+7800)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10176)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+62712)*1+lsi)*1]), &(inteval->stack[((hsi*5544+57168)*1+lsi)*1]), &(inteval->stack[((hsi*4158+44100)*1+lsi)*1]),66);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*9900+71028)*1+lsi)*1]), &(inteval->stack[((hsi*8316+62712)*1+lsi)*1]), &(inteval->stack[((hsi*5940+51228)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+44100)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2808)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4992)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+49014)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4992)*1+lsi)*1]), &(inteval->stack[((hsi*1170+6630)*1+lsi)*1]),78);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*7020+52524)*1+lsi)*1]), &(inteval->stack[((hsi*4914+44100)*1+lsi)*1]), &(inteval->stack[((hsi*3510+49014)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+59544)*1+lsi)*1]), &(inteval->stack[((hsi*2808+0)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2808)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*6552+59544)*1+lsi)*1]), &(inteval->stack[((hsi*4914+44100)*1+lsi)*1]),78);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*11700+80928)*1+lsi)*1]), &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*7020+52524)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*29700+14400)*1+lsi)*1]), &(inteval->stack[((hsi*11700+80928)*1+lsi)*1]), &(inteval->stack[((hsi*9900+71028)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*29700+14400)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
