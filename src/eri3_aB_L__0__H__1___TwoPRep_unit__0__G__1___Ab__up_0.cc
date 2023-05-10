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
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hg.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <eri3_aB_L__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8325)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__H__1___TwoPRep_unit__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+22500)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4500)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6120)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+26280)*1+lsi)*1]), &(inteval->stack[((hsi*2025+2475)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4500)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+31140)*1+lsi)*1]), &(inteval->stack[((hsi*4860+26280)*1+lsi)*1]), &(inteval->stack[((hsi*3780+22500)*1+lsi)*1]),45);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+38700)*1+lsi)*1]), &(inteval->stack[((hsi*1260+6120)*1+lsi)*1]), &(inteval->stack[((hsi*945+7380)*1+lsi)*1]),45);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+41535)*1+lsi)*1]), &(inteval->stack[((hsi*3780+22500)*1+lsi)*1]), &(inteval->stack[((hsi*2835+38700)*1+lsi)*1]),45);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+47205)*1+lsi)*1]), &(inteval->stack[((hsi*7560+31140)*1+lsi)*1]), &(inteval->stack[((hsi*5670+41535)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+38700)*1+lsi)*1]), &(inteval->stack[((hsi*2475+0)*1+lsi)*1]), &(inteval->stack[((hsi*2025+2475)*1+lsi)*1]),45);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*9720+56655)*1+lsi)*1]), &(inteval->stack[((hsi*6075+38700)*1+lsi)*1]), &(inteval->stack[((hsi*4860+26280)*1+lsi)*1]),45);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*12600+66375)*1+lsi)*1]), &(inteval->stack[((hsi*9720+56655)*1+lsi)*1]), &(inteval->stack[((hsi*7560+31140)*1+lsi)*1]),45);
HRRPart1bra0ket0hg(inteval, &(inteval->stack[((hsi*14175+8325)*1+lsi)*1]), &(inteval->stack[((hsi*12600+66375)*1+lsi)*1]), &(inteval->stack[((hsi*9450+47205)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*14175+8325)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
