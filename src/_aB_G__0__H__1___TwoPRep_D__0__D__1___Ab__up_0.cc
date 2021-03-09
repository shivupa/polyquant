/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5440)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__H__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+16780)*1+lsi)*1]), &(inteval->stack[((hsi*588+3088)*1+lsi)*1]), &(inteval->stack[((hsi*420+3676)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+18040)*1+lsi)*1]), &(inteval->stack[((hsi*784+2304)*1+lsi)*1]), &(inteval->stack[((hsi*588+3088)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+19804)*1+lsi)*1]), &(inteval->stack[((hsi*1764+18040)*1+lsi)*1]), &(inteval->stack[((hsi*1260+16780)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+16780)*1+lsi)*1]), &(inteval->stack[((hsi*441+4684)*1+lsi)*1]), &(inteval->stack[((hsi*315+5125)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+17725)*1+lsi)*1]), &(inteval->stack[((hsi*588+4096)*1+lsi)*1]), &(inteval->stack[((hsi*441+4684)*1+lsi)*1]),21);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+2304)*1+lsi)*1]), &(inteval->stack[((hsi*1323+17725)*1+lsi)*1]), &(inteval->stack[((hsi*945+16780)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*5670+22324)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19804)*1+lsi)*1]), &(inteval->stack[((hsi*1890+2304)*1+lsi)*1]),90);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+2304)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+16780)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+27994)*1+lsi)*1]), &(inteval->stack[((hsi*2268+16780)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2304)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*7560+31234)*1+lsi)*1]), &(inteval->stack[((hsi*3240+27994)*1+lsi)*1]), &(inteval->stack[((hsi*2520+19804)*1+lsi)*1]),90);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*11340+5440)*1+lsi)*1]), &(inteval->stack[((hsi*7560+31234)*1+lsi)*1]), &(inteval->stack[((hsi*5670+22324)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*11340+5440)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
