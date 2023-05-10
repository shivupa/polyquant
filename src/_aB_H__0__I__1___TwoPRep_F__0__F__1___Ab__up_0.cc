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
#include <HRRPart0bra0ket0hf.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0id.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0if.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0lp.h>
#include <_aB_H__0__I__1___TwoPRep_F__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__I__1___TwoPRep_F__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21320)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__I__1___TwoPRep_F__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+80120)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14620)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15916)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+83144)*1+lsi)*1]), &(inteval->stack[((hsi*1008+15916)*1+lsi)*1]), &(inteval->stack[((hsi*756+16924)*1+lsi)*1]),36);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+85412)*1+lsi)*1]), &(inteval->stack[((hsi*3024+80120)*1+lsi)*1]), &(inteval->stack[((hsi*2268+83144)*1+lsi)*1]),36);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*3888+89948)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13000)*1+lsi)*1]), &(inteval->stack[((hsi*1296+14620)*1+lsi)*1]),36);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*6048+93836)*1+lsi)*1]), &(inteval->stack[((hsi*3888+89948)*1+lsi)*1]), &(inteval->stack[((hsi*3024+80120)*1+lsi)*1]),36);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*7560+99884)*1+lsi)*1]), &(inteval->stack[((hsi*6048+93836)*1+lsi)*1]), &(inteval->stack[((hsi*4536+85412)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*3780+80120)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9175)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10795)*1+lsi)*1]),45);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2835+83900)*1+lsi)*1]), &(inteval->stack[((hsi*1260+10795)*1+lsi)*1]), &(inteval->stack[((hsi*945+12055)*1+lsi)*1]),45);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*5670+86735)*1+lsi)*1]), &(inteval->stack[((hsi*3780+80120)*1+lsi)*1]), &(inteval->stack[((hsi*2835+83900)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*4860+92405)*1+lsi)*1]), &(inteval->stack[((hsi*2025+7150)*1+lsi)*1]), &(inteval->stack[((hsi*1620+9175)*1+lsi)*1]),45);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*7560+7150)*1+lsi)*1]), &(inteval->stack[((hsi*4860+92405)*1+lsi)*1]), &(inteval->stack[((hsi*3780+80120)*1+lsi)*1]),45);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*9450+107444)*1+lsi)*1]), &(inteval->stack[((hsi*7560+7150)*1+lsi)*1]), &(inteval->stack[((hsi*5670+86735)*1+lsi)*1]),45);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*22680+116894)*1+lsi)*1]), &(inteval->stack[((hsi*9450+107444)*1+lsi)*1]), &(inteval->stack[((hsi*7560+99884)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+80120)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18940)*1+lsi)*1]), &(inteval->stack[((hsi*784+19948)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+82472)*1+lsi)*1]), &(inteval->stack[((hsi*784+19948)*1+lsi)*1]), &(inteval->stack[((hsi*588+20732)*1+lsi)*1]),28);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+84236)*1+lsi)*1]), &(inteval->stack[((hsi*2352+80120)*1+lsi)*1]), &(inteval->stack[((hsi*1764+82472)*1+lsi)*1]),28);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+87764)*1+lsi)*1]), &(inteval->stack[((hsi*1260+17680)*1+lsi)*1]), &(inteval->stack[((hsi*1008+18940)*1+lsi)*1]),28);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*4704+7150)*1+lsi)*1]), &(inteval->stack[((hsi*3024+87764)*1+lsi)*1]), &(inteval->stack[((hsi*2352+80120)*1+lsi)*1]),28);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*5880+87764)*1+lsi)*1]), &(inteval->stack[((hsi*4704+7150)*1+lsi)*1]), &(inteval->stack[((hsi*3528+84236)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*17640+139574)*1+lsi)*1]), &(inteval->stack[((hsi*7560+99884)*1+lsi)*1]), &(inteval->stack[((hsi*5880+87764)*1+lsi)*1]),210);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*35280+157214)*1+lsi)*1]), &(inteval->stack[((hsi*22680+116894)*1+lsi)*1]), &(inteval->stack[((hsi*17640+139574)*1+lsi)*1]),210);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*4620+80120)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2475)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4455)*1+lsi)*1]),55);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*3465+84740)*1+lsi)*1]), &(inteval->stack[((hsi*1540+4455)*1+lsi)*1]), &(inteval->stack[((hsi*1155+5995)*1+lsi)*1]),55);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*6930+88205)*1+lsi)*1]), &(inteval->stack[((hsi*4620+80120)*1+lsi)*1]), &(inteval->stack[((hsi*3465+84740)*1+lsi)*1]),55);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*5940+139574)*1+lsi)*1]), &(inteval->stack[((hsi*2475+0)*1+lsi)*1]), &(inteval->stack[((hsi*1980+2475)*1+lsi)*1]),55);
HRRPart0bra0ket0id(inteval, &(inteval->stack[((hsi*9240+0)*1+lsi)*1]), &(inteval->stack[((hsi*5940+139574)*1+lsi)*1]), &(inteval->stack[((hsi*4620+80120)*1+lsi)*1]),55);
HRRPart0bra0ket0hf(inteval, &(inteval->stack[((hsi*11550+139574)*1+lsi)*1]), &(inteval->stack[((hsi*9240+0)*1+lsi)*1]), &(inteval->stack[((hsi*6930+88205)*1+lsi)*1]),55);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*28350+192494)*1+lsi)*1]), &(inteval->stack[((hsi*11550+139574)*1+lsi)*1]), &(inteval->stack[((hsi*9450+107444)*1+lsi)*1]),210);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*45360+220844)*1+lsi)*1]), &(inteval->stack[((hsi*28350+192494)*1+lsi)*1]), &(inteval->stack[((hsi*22680+116894)*1+lsi)*1]),210);
HRRPart1bra0ket0if(inteval, &(inteval->stack[((hsi*58800+21320)*1+lsi)*1]), &(inteval->stack[((hsi*45360+220844)*1+lsi)*1]), &(inteval->stack[((hsi*35280+157214)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*58800+21320)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
