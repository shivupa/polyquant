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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_H__0__H__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__H__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,11050)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+37510)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5940)*1+lsi)*1]), &(inteval->stack[((hsi*784+6948)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+39862)*1+lsi)*1]), &(inteval->stack[((hsi*784+6948)*1+lsi)*1]), &(inteval->stack[((hsi*588+7732)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+41626)*1+lsi)*1]), &(inteval->stack[((hsi*2352+37510)*1+lsi)*1]), &(inteval->stack[((hsi*1764+39862)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+45154)*1+lsi)*1]), &(inteval->stack[((hsi*1260+4680)*1+lsi)*1]), &(inteval->stack[((hsi*1008+5940)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+48178)*1+lsi)*1]), &(inteval->stack[((hsi*3024+45154)*1+lsi)*1]), &(inteval->stack[((hsi*2352+37510)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+52882)*1+lsi)*1]), &(inteval->stack[((hsi*4704+48178)*1+lsi)*1]), &(inteval->stack[((hsi*3528+41626)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+37510)*1+lsi)*1]), &(inteval->stack[((hsi*756+9265)*1+lsi)*1]), &(inteval->stack[((hsi*588+10021)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+39274)*1+lsi)*1]), &(inteval->stack[((hsi*588+10021)*1+lsi)*1]), &(inteval->stack[((hsi*441+10609)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+40597)*1+lsi)*1]), &(inteval->stack[((hsi*1764+37510)*1+lsi)*1]), &(inteval->stack[((hsi*1323+39274)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+43243)*1+lsi)*1]), &(inteval->stack[((hsi*945+8320)*1+lsi)*1]), &(inteval->stack[((hsi*756+9265)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+45511)*1+lsi)*1]), &(inteval->stack[((hsi*2268+43243)*1+lsi)*1]), &(inteval->stack[((hsi*1764+37510)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+4680)*1+lsi)*1]), &(inteval->stack[((hsi*3528+45511)*1+lsi)*1]), &(inteval->stack[((hsi*2646+40597)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*13230+37510)*1+lsi)*1]), &(inteval->stack[((hsi*5880+52882)*1+lsi)*1]), &(inteval->stack[((hsi*4410+4680)*1+lsi)*1]),210);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+4680)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]),36);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+7704)*1+lsi)*1]), &(inteval->stack[((hsi*1008+2916)*1+lsi)*1]), &(inteval->stack[((hsi*756+3924)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+58762)*1+lsi)*1]), &(inteval->stack[((hsi*3024+4680)*1+lsi)*1]), &(inteval->stack[((hsi*2268+7704)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+63298)*1+lsi)*1]), &(inteval->stack[((hsi*1620+0)*1+lsi)*1]), &(inteval->stack[((hsi*1296+1620)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+67186)*1+lsi)*1]), &(inteval->stack[((hsi*3888+63298)*1+lsi)*1]), &(inteval->stack[((hsi*3024+4680)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+0)*1+lsi)*1]), &(inteval->stack[((hsi*6048+67186)*1+lsi)*1]), &(inteval->stack[((hsi*4536+58762)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*17640+58762)*1+lsi)*1]), &(inteval->stack[((hsi*7560+0)*1+lsi)*1]), &(inteval->stack[((hsi*5880+52882)*1+lsi)*1]),210);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*26460+11050)*1+lsi)*1]), &(inteval->stack[((hsi*17640+58762)*1+lsi)*1]), &(inteval->stack[((hsi*13230+37510)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*26460+11050)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
