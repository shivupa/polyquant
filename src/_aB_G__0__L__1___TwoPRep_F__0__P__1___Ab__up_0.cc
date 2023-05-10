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
#include <HRRPart1bra0ket0lp.h>
#include <_aB_G__0__L__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__L__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10000)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__L__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+30250)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7120)*1+lsi)*1]), &(inteval->stack[((hsi*945+8380)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+33085)*1+lsi)*1]), &(inteval->stack[((hsi*945+8380)*1+lsi)*1]), &(inteval->stack[((hsi*675+9325)*1+lsi)*1]),45);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4050+35110)*1+lsi)*1]), &(inteval->stack[((hsi*2835+30250)*1+lsi)*1]), &(inteval->stack[((hsi*2025+33085)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+39160)*1+lsi)*1]), &(inteval->stack[((hsi*1620+5500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+7120)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+42940)*1+lsi)*1]), &(inteval->stack[((hsi*3780+39160)*1+lsi)*1]), &(inteval->stack[((hsi*2835+30250)*1+lsi)*1]),45);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*6750+48610)*1+lsi)*1]), &(inteval->stack[((hsi*5670+42940)*1+lsi)*1]), &(inteval->stack[((hsi*4050+35110)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+30250)*1+lsi)*1]), &(inteval->stack[((hsi*1540+1980)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3520)*1+lsi)*1]),55);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+33715)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3520)*1+lsi)*1]), &(inteval->stack[((hsi*825+4675)*1+lsi)*1]),55);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4950+36190)*1+lsi)*1]), &(inteval->stack[((hsi*3465+30250)*1+lsi)*1]), &(inteval->stack[((hsi*2475+33715)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+41140)*1+lsi)*1]), &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1540+1980)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*4620+41140)*1+lsi)*1]), &(inteval->stack[((hsi*3465+30250)*1+lsi)*1]),55);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*8250+55360)*1+lsi)*1]), &(inteval->stack[((hsi*6930+0)*1+lsi)*1]), &(inteval->stack[((hsi*4950+36190)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*20250+10000)*1+lsi)*1]), &(inteval->stack[((hsi*8250+55360)*1+lsi)*1]), &(inteval->stack[((hsi*6750+48610)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*20250+10000)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
