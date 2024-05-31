/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6256)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+19216)*1+lsi)*1]), &(inteval->stack[((hsi*675+3475)*1+lsi)*1]), &(inteval->stack[((hsi*450+4150)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+20566)*1+lsi)*1]), &(inteval->stack[((hsi*945+2530)*1+lsi)*1]), &(inteval->stack[((hsi*675+3475)*1+lsi)*1]),45);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2700+22591)*1+lsi)*1]), &(inteval->stack[((hsi*2025+20566)*1+lsi)*1]), &(inteval->stack[((hsi*1350+19216)*1+lsi)*1]),45);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+19216)*1+lsi)*1]), &(inteval->stack[((hsi*540+5356)*1+lsi)*1]), &(inteval->stack[((hsi*360+5896)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+20296)*1+lsi)*1]), &(inteval->stack[((hsi*756+4600)*1+lsi)*1]), &(inteval->stack[((hsi*540+5356)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+2530)*1+lsi)*1]), &(inteval->stack[((hsi*1620+20296)*1+lsi)*1]), &(inteval->stack[((hsi*1080+19216)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6480+25291)*1+lsi)*1]), &(inteval->stack[((hsi*2700+22591)*1+lsi)*1]), &(inteval->stack[((hsi*2160+2530)*1+lsi)*1]),60);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+2530)*1+lsi)*1]), &(inteval->stack[((hsi*825+1155)*1+lsi)*1]), &(inteval->stack[((hsi*550+1980)*1+lsi)*1]),55);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+19216)*1+lsi)*1]), &(inteval->stack[((hsi*1155+0)*1+lsi)*1]), &(inteval->stack[((hsi*825+1155)*1+lsi)*1]),55);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3300+31771)*1+lsi)*1]), &(inteval->stack[((hsi*2475+19216)*1+lsi)*1]), &(inteval->stack[((hsi*1650+2530)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*8100+35071)*1+lsi)*1]), &(inteval->stack[((hsi*3300+31771)*1+lsi)*1]), &(inteval->stack[((hsi*2700+22591)*1+lsi)*1]),60);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*12960+6256)*1+lsi)*1]), &(inteval->stack[((hsi*8100+35071)*1+lsi)*1]), &(inteval->stack[((hsi*6480+25291)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12960+6256)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
