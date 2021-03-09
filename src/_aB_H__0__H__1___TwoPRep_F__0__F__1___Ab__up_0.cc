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
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_H__0__H__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__H__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16900)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__H__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+61000)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11790)*1+lsi)*1]), &(inteval->stack[((hsi*784+12798)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+63352)*1+lsi)*1]), &(inteval->stack[((hsi*784+12798)*1+lsi)*1]), &(inteval->stack[((hsi*588+13582)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+65116)*1+lsi)*1]), &(inteval->stack[((hsi*2352+61000)*1+lsi)*1]), &(inteval->stack[((hsi*1764+63352)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+68644)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10530)*1+lsi)*1]), &(inteval->stack[((hsi*1008+11790)*1+lsi)*1]),28);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*4704+71668)*1+lsi)*1]), &(inteval->stack[((hsi*3024+68644)*1+lsi)*1]), &(inteval->stack[((hsi*2352+61000)*1+lsi)*1]),28);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+76372)*1+lsi)*1]), &(inteval->stack[((hsi*4704+71668)*1+lsi)*1]), &(inteval->stack[((hsi*3528+65116)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+61000)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7470)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8766)*1+lsi)*1]),36);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+64024)*1+lsi)*1]), &(inteval->stack[((hsi*1008+8766)*1+lsi)*1]), &(inteval->stack[((hsi*756+9774)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+66292)*1+lsi)*1]), &(inteval->stack[((hsi*3024+61000)*1+lsi)*1]), &(inteval->stack[((hsi*2268+64024)*1+lsi)*1]),36);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+70828)*1+lsi)*1]), &(inteval->stack[((hsi*1620+5850)*1+lsi)*1]), &(inteval->stack[((hsi*1296+7470)*1+lsi)*1]),36);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*6048+5850)*1+lsi)*1]), &(inteval->stack[((hsi*3888+70828)*1+lsi)*1]), &(inteval->stack[((hsi*3024+61000)*1+lsi)*1]),36);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+82252)*1+lsi)*1]), &(inteval->stack[((hsi*6048+5850)*1+lsi)*1]), &(inteval->stack[((hsi*4536+66292)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*17640+89812)*1+lsi)*1]), &(inteval->stack[((hsi*7560+82252)*1+lsi)*1]), &(inteval->stack[((hsi*5880+76372)*1+lsi)*1]),210);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+61000)*1+lsi)*1]), &(inteval->stack[((hsi*756+15115)*1+lsi)*1]), &(inteval->stack[((hsi*588+15871)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+62764)*1+lsi)*1]), &(inteval->stack[((hsi*588+15871)*1+lsi)*1]), &(inteval->stack[((hsi*441+16459)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+64087)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61000)*1+lsi)*1]), &(inteval->stack[((hsi*1323+62764)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+66733)*1+lsi)*1]), &(inteval->stack[((hsi*945+14170)*1+lsi)*1]), &(inteval->stack[((hsi*756+15115)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+5850)*1+lsi)*1]), &(inteval->stack[((hsi*2268+66733)*1+lsi)*1]), &(inteval->stack[((hsi*1764+61000)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+66733)*1+lsi)*1]), &(inteval->stack[((hsi*3528+5850)*1+lsi)*1]), &(inteval->stack[((hsi*2646+64087)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*13230+107452)*1+lsi)*1]), &(inteval->stack[((hsi*5880+76372)*1+lsi)*1]), &(inteval->stack[((hsi*4410+66733)*1+lsi)*1]),210);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*26460+120682)*1+lsi)*1]), &(inteval->stack[((hsi*17640+89812)*1+lsi)*1]), &(inteval->stack[((hsi*13230+107452)*1+lsi)*1]),210);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+61000)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2025)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3645)*1+lsi)*1]),45);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+64780)*1+lsi)*1]), &(inteval->stack[((hsi*1260+3645)*1+lsi)*1]), &(inteval->stack[((hsi*945+4905)*1+lsi)*1]),45);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+67615)*1+lsi)*1]), &(inteval->stack[((hsi*3780+61000)*1+lsi)*1]), &(inteval->stack[((hsi*2835+64780)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+3645)*1+lsi)*1]), &(inteval->stack[((hsi*2025+0)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2025)*1+lsi)*1]),45);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*7560+107452)*1+lsi)*1]), &(inteval->stack[((hsi*4860+3645)*1+lsi)*1]), &(inteval->stack[((hsi*3780+61000)*1+lsi)*1]),45);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+0)*1+lsi)*1]), &(inteval->stack[((hsi*7560+107452)*1+lsi)*1]), &(inteval->stack[((hsi*5670+67615)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*22680+147142)*1+lsi)*1]), &(inteval->stack[((hsi*9450+0)*1+lsi)*1]), &(inteval->stack[((hsi*7560+82252)*1+lsi)*1]),210);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*35280+169822)*1+lsi)*1]), &(inteval->stack[((hsi*22680+147142)*1+lsi)*1]), &(inteval->stack[((hsi*17640+89812)*1+lsi)*1]),210);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*44100+16900)*1+lsi)*1]), &(inteval->stack[((hsi*35280+169822)*1+lsi)*1]), &(inteval->stack[((hsi*26460+120682)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*44100+16900)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
