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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0mp.h>
#include <_aB_H__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__L__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,14110)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__L__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+48130)*1+lsi)*1]), &(inteval->stack[((hsi*1540+7590)*1+lsi)*1]), &(inteval->stack[((hsi*1155+9130)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+51595)*1+lsi)*1]), &(inteval->stack[((hsi*1980+5610)*1+lsi)*1]), &(inteval->stack[((hsi*1540+7590)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+56215)*1+lsi)*1]), &(inteval->stack[((hsi*4620+51595)*1+lsi)*1]), &(inteval->stack[((hsi*3465+48130)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+48130)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11905)*1+lsi)*1]), &(inteval->stack[((hsi*945+13165)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+50965)*1+lsi)*1]), &(inteval->stack[((hsi*1620+10285)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11905)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+5610)*1+lsi)*1]), &(inteval->stack[((hsi*3780+50965)*1+lsi)*1]), &(inteval->stack[((hsi*2835+48130)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*17010+63145)*1+lsi)*1]), &(inteval->stack[((hsi*6930+56215)*1+lsi)*1]), &(inteval->stack[((hsi*5670+5610)*1+lsi)*1]),126);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+5610)*1+lsi)*1]), &(inteval->stack[((hsi*1848+2376)*1+lsi)*1]), &(inteval->stack[((hsi*1386+4224)*1+lsi)*1]),66);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*5544+48130)*1+lsi)*1]), &(inteval->stack[((hsi*2376+0)*1+lsi)*1]), &(inteval->stack[((hsi*1848+2376)*1+lsi)*1]),66);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*8316+80155)*1+lsi)*1]), &(inteval->stack[((hsi*5544+48130)*1+lsi)*1]), &(inteval->stack[((hsi*4158+5610)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*20790+88471)*1+lsi)*1]), &(inteval->stack[((hsi*8316+80155)*1+lsi)*1]), &(inteval->stack[((hsi*6930+56215)*1+lsi)*1]),126);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*34020+14110)*1+lsi)*1]), &(inteval->stack[((hsi*20790+88471)*1+lsi)*1]), &(inteval->stack[((hsi*17010+63145)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*34020+14110)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif