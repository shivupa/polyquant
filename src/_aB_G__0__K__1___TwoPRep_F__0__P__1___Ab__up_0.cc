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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gf.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_G__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__K__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8100)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__K__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+24300)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5796)*1+lsi)*1]), &(inteval->stack[((hsi*756+6804)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+26568)*1+lsi)*1]), &(inteval->stack[((hsi*756+6804)*1+lsi)*1]), &(inteval->stack[((hsi*540+7560)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+28188)*1+lsi)*1]), &(inteval->stack[((hsi*2268+24300)*1+lsi)*1]), &(inteval->stack[((hsi*1620+26568)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+31428)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4500)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5796)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+34452)*1+lsi)*1]), &(inteval->stack[((hsi*3024+31428)*1+lsi)*1]), &(inteval->stack[((hsi*2268+24300)*1+lsi)*1]),36);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*5400+38988)*1+lsi)*1]), &(inteval->stack[((hsi*4536+34452)*1+lsi)*1]), &(inteval->stack[((hsi*3240+28188)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+24300)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1620)*1+lsi)*1]), &(inteval->stack[((hsi*945+2880)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+27135)*1+lsi)*1]), &(inteval->stack[((hsi*945+2880)*1+lsi)*1]), &(inteval->stack[((hsi*675+3825)*1+lsi)*1]),45);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4050+29160)*1+lsi)*1]), &(inteval->stack[((hsi*2835+24300)*1+lsi)*1]), &(inteval->stack[((hsi*2025+27135)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+33210)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1620)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+0)*1+lsi)*1]), &(inteval->stack[((hsi*3780+33210)*1+lsi)*1]), &(inteval->stack[((hsi*2835+24300)*1+lsi)*1]),45);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*6750+44388)*1+lsi)*1]), &(inteval->stack[((hsi*5670+0)*1+lsi)*1]), &(inteval->stack[((hsi*4050+29160)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*16200+8100)*1+lsi)*1]), &(inteval->stack[((hsi*6750+44388)*1+lsi)*1]), &(inteval->stack[((hsi*5400+38988)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*16200+8100)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
