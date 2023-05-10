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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11560)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__K__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+38776)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6295)*1+lsi)*1]), &(inteval->stack[((hsi*945+7555)*1+lsi)*1]),45);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+41611)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4675)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6295)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+45391)*1+lsi)*1]), &(inteval->stack[((hsi*3780+41611)*1+lsi)*1]), &(inteval->stack[((hsi*2835+38776)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+38776)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9796)*1+lsi)*1]), &(inteval->stack[((hsi*756+10804)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+41044)*1+lsi)*1]), &(inteval->stack[((hsi*1296+8500)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9796)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+4675)*1+lsi)*1]), &(inteval->stack[((hsi*3024+41044)*1+lsi)*1]), &(inteval->stack[((hsi*2268+38776)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*13608+51061)*1+lsi)*1]), &(inteval->stack[((hsi*5670+45391)*1+lsi)*1]), &(inteval->stack[((hsi*4536+4675)*1+lsi)*1]),126);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+4675)*1+lsi)*1]), &(inteval->stack[((hsi*1540+1980)*1+lsi)*1]), &(inteval->stack[((hsi*1155+3520)*1+lsi)*1]),55);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+38776)*1+lsi)*1]), &(inteval->stack[((hsi*1980+0)*1+lsi)*1]), &(inteval->stack[((hsi*1540+1980)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+64669)*1+lsi)*1]), &(inteval->stack[((hsi*4620+38776)*1+lsi)*1]), &(inteval->stack[((hsi*3465+4675)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*17010+71599)*1+lsi)*1]), &(inteval->stack[((hsi*6930+64669)*1+lsi)*1]), &(inteval->stack[((hsi*5670+45391)*1+lsi)*1]),126);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*27216+11560)*1+lsi)*1]), &(inteval->stack[((hsi*17010+71599)*1+lsi)*1]), &(inteval->stack[((hsi*13608+51061)*1+lsi)*1]),126);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*27216+11560)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
