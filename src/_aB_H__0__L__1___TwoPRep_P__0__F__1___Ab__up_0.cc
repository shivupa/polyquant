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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__L__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11956)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+40306)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8470)*1+lsi)*1]), &(inteval->stack[((hsi*1155+9856)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+43771)*1+lsi)*1]), &(inteval->stack[((hsi*1155+9856)*1+lsi)*1]), &(inteval->stack[((hsi*945+11011)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+46606)*1+lsi)*1]), &(inteval->stack[((hsi*3465+40306)*1+lsi)*1]), &(inteval->stack[((hsi*2835+43771)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+52276)*1+lsi)*1]), &(inteval->stack[((hsi*1638+6832)*1+lsi)*1]), &(inteval->stack[((hsi*1386+8470)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+56434)*1+lsi)*1]), &(inteval->stack[((hsi*4158+52276)*1+lsi)*1]), &(inteval->stack[((hsi*3465+40306)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+63364)*1+lsi)*1]), &(inteval->stack[((hsi*6930+56434)*1+lsi)*1]), &(inteval->stack[((hsi*5670+46606)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+40306)*1+lsi)*1]), &(inteval->stack[((hsi*1848+2184)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4032)*1+lsi)*1]),28);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+44926)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4032)*1+lsi)*1]), &(inteval->stack[((hsi*1260+5572)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+48706)*1+lsi)*1]), &(inteval->stack[((hsi*4620+40306)*1+lsi)*1]), &(inteval->stack[((hsi*3780+44926)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+4032)*1+lsi)*1]), &(inteval->stack[((hsi*2184+0)*1+lsi)*1]), &(inteval->stack[((hsi*1848+2184)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+72814)*1+lsi)*1]), &(inteval->stack[((hsi*5544+4032)*1+lsi)*1]), &(inteval->stack[((hsi*4620+40306)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+82054)*1+lsi)*1]), &(inteval->stack[((hsi*9240+72814)*1+lsi)*1]), &(inteval->stack[((hsi*7560+48706)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*28350+11956)*1+lsi)*1]), &(inteval->stack[((hsi*12600+82054)*1+lsi)*1]), &(inteval->stack[((hsi*9450+63364)*1+lsi)*1]),450);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*28350+11956)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
