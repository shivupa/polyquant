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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5014)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+15094)*1+lsi)*1]), &(inteval->stack[((hsi*540+2826)*1+lsi)*1]), &(inteval->stack[((hsi*360+3366)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+16174)*1+lsi)*1]), &(inteval->stack[((hsi*756+2070)*1+lsi)*1]), &(inteval->stack[((hsi*540+2826)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+17794)*1+lsi)*1]), &(inteval->stack[((hsi*1620+16174)*1+lsi)*1]), &(inteval->stack[((hsi*1080+15094)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+15094)*1+lsi)*1]), &(inteval->stack[((hsi*420+4314)*1+lsi)*1]), &(inteval->stack[((hsi*280+4734)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+15934)*1+lsi)*1]), &(inteval->stack[((hsi*588+3726)*1+lsi)*1]), &(inteval->stack[((hsi*420+4314)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+2070)*1+lsi)*1]), &(inteval->stack[((hsi*1260+15934)*1+lsi)*1]), &(inteval->stack[((hsi*840+15094)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*5040+19954)*1+lsi)*1]), &(inteval->stack[((hsi*2160+17794)*1+lsi)*1]), &(inteval->stack[((hsi*1680+2070)*1+lsi)*1]),60);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1350+2070)*1+lsi)*1]), &(inteval->stack[((hsi*675+945)*1+lsi)*1]), &(inteval->stack[((hsi*450+1620)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+15094)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*675+945)*1+lsi)*1]),45);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2700+24994)*1+lsi)*1]), &(inteval->stack[((hsi*2025+15094)*1+lsi)*1]), &(inteval->stack[((hsi*1350+2070)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*6480+27694)*1+lsi)*1]), &(inteval->stack[((hsi*2700+24994)*1+lsi)*1]), &(inteval->stack[((hsi*2160+17794)*1+lsi)*1]),60);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*10080+5014)*1+lsi)*1]), &(inteval->stack[((hsi*6480+27694)*1+lsi)*1]), &(inteval->stack[((hsi*5040+19954)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*10080+5014)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
