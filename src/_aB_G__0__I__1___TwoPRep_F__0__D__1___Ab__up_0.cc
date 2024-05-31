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
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_G__0__I__1___TwoPRep_F__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__I__1___TwoPRep_F__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__I__1___TwoPRep_F__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+36100)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5796)*1+lsi)*1]), &(inteval->stack[((hsi*756+6804)*1+lsi)*1]),36);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+38368)*1+lsi)*1]), &(inteval->stack[((hsi*756+6804)*1+lsi)*1]), &(inteval->stack[((hsi*540+7560)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+39988)*1+lsi)*1]), &(inteval->stack[((hsi*2268+36100)*1+lsi)*1]), &(inteval->stack[((hsi*1620+38368)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+43228)*1+lsi)*1]), &(inteval->stack[((hsi*1296+4500)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5796)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+46252)*1+lsi)*1]), &(inteval->stack[((hsi*3024+43228)*1+lsi)*1]), &(inteval->stack[((hsi*2268+36100)*1+lsi)*1]),36);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*5400+50788)*1+lsi)*1]), &(inteval->stack[((hsi*4536+46252)*1+lsi)*1]), &(inteval->stack[((hsi*3240+39988)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+36100)*1+lsi)*1]), &(inteval->stack[((hsi*784+9108)*1+lsi)*1]), &(inteval->stack[((hsi*588+9892)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+37864)*1+lsi)*1]), &(inteval->stack[((hsi*588+9892)*1+lsi)*1]), &(inteval->stack[((hsi*420+10480)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+39124)*1+lsi)*1]), &(inteval->stack[((hsi*1764+36100)*1+lsi)*1]), &(inteval->stack[((hsi*1260+37864)*1+lsi)*1]),28);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+41644)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8100)*1+lsi)*1]), &(inteval->stack[((hsi*784+9108)*1+lsi)*1]),28);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+43996)*1+lsi)*1]), &(inteval->stack[((hsi*2352+41644)*1+lsi)*1]), &(inteval->stack[((hsi*1764+36100)*1+lsi)*1]),28);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+4500)*1+lsi)*1]), &(inteval->stack[((hsi*3528+43996)*1+lsi)*1]), &(inteval->stack[((hsi*2520+39124)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*12600+36100)*1+lsi)*1]), &(inteval->stack[((hsi*5400+50788)*1+lsi)*1]), &(inteval->stack[((hsi*4200+4500)*1+lsi)*1]),150);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+4500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1620)*1+lsi)*1]), &(inteval->stack[((hsi*945+2880)*1+lsi)*1]),45);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2025+7335)*1+lsi)*1]), &(inteval->stack[((hsi*945+2880)*1+lsi)*1]), &(inteval->stack[((hsi*675+3825)*1+lsi)*1]),45);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*4050+56188)*1+lsi)*1]), &(inteval->stack[((hsi*2835+4500)*1+lsi)*1]), &(inteval->stack[((hsi*2025+7335)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+60238)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1260+1620)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+64018)*1+lsi)*1]), &(inteval->stack[((hsi*3780+60238)*1+lsi)*1]), &(inteval->stack[((hsi*2835+4500)*1+lsi)*1]),45);
HRRPart0bra0ket0gf(inteval, &(inteval->stack[((hsi*6750+0)*1+lsi)*1]), &(inteval->stack[((hsi*5670+64018)*1+lsi)*1]), &(inteval->stack[((hsi*4050+56188)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*16200+56188)*1+lsi)*1]), &(inteval->stack[((hsi*6750+0)*1+lsi)*1]), &(inteval->stack[((hsi*5400+50788)*1+lsi)*1]),150);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*25200+10900)*1+lsi)*1]), &(inteval->stack[((hsi*16200+56188)*1+lsi)*1]), &(inteval->stack[((hsi*12600+36100)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*25200+10900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
