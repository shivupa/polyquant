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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__M__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__M__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16915)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__M__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+58495)*1+lsi)*1]), &(inteval->stack[((hsi*1848+9006)*1+lsi)*1]), &(inteval->stack[((hsi*1386+10854)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+62653)*1+lsi)*1]), &(inteval->stack[((hsi*2376+6630)*1+lsi)*1]), &(inteval->stack[((hsi*1848+9006)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+68197)*1+lsi)*1]), &(inteval->stack[((hsi*5544+62653)*1+lsi)*1]), &(inteval->stack[((hsi*4158+58495)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+58495)*1+lsi)*1]), &(inteval->stack[((hsi*1540+14220)*1+lsi)*1]), &(inteval->stack[((hsi*1155+15760)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+61960)*1+lsi)*1]), &(inteval->stack[((hsi*1980+12240)*1+lsi)*1]), &(inteval->stack[((hsi*1540+14220)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+6630)*1+lsi)*1]), &(inteval->stack[((hsi*4620+61960)*1+lsi)*1]), &(inteval->stack[((hsi*3465+58495)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*20790+76513)*1+lsi)*1]), &(inteval->stack[((hsi*8316+68197)*1+lsi)*1]), &(inteval->stack[((hsi*6930+6630)*1+lsi)*1]),126);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+6630)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2808)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4992)*1+lsi)*1]),78);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*6552+58495)*1+lsi)*1]), &(inteval->stack[((hsi*2808+0)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2808)*1+lsi)*1]),78);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*9828+97303)*1+lsi)*1]), &(inteval->stack[((hsi*6552+58495)*1+lsi)*1]), &(inteval->stack[((hsi*4914+6630)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*24948+107131)*1+lsi)*1]), &(inteval->stack[((hsi*9828+97303)*1+lsi)*1]), &(inteval->stack[((hsi*8316+68197)*1+lsi)*1]),126);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*41580+16915)*1+lsi)*1]), &(inteval->stack[((hsi*24948+107131)*1+lsi)*1]), &(inteval->stack[((hsi*20790+76513)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*41580+16915)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
