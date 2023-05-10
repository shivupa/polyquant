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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_H__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16660)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+58240)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11725)*1+lsi)*1]), &(inteval->stack[((hsi*1638+13636)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+63154)*1+lsi)*1]), &(inteval->stack[((hsi*1638+13636)*1+lsi)*1]), &(inteval->stack[((hsi*1386+15274)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+67312)*1+lsi)*1]), &(inteval->stack[((hsi*4914+58240)*1+lsi)*1]), &(inteval->stack[((hsi*4158+63154)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+75628)*1+lsi)*1]), &(inteval->stack[((hsi*2205+9520)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11725)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+81361)*1+lsi)*1]), &(inteval->stack[((hsi*5733+75628)*1+lsi)*1]), &(inteval->stack[((hsi*4914+58240)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+91189)*1+lsi)*1]), &(inteval->stack[((hsi*9828+81361)*1+lsi)*1]), &(inteval->stack[((hsi*8316+67312)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+58240)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+64792)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+70336)*1+lsi)*1]), &(inteval->stack[((hsi*6552+58240)*1+lsi)*1]), &(inteval->stack[((hsi*5544+64792)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+5488)*1+lsi)*1]), &(inteval->stack[((hsi*2940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+105049)*1+lsi)*1]), &(inteval->stack[((hsi*7644+5488)*1+lsi)*1]), &(inteval->stack[((hsi*6552+58240)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+118153)*1+lsi)*1]), &(inteval->stack[((hsi*13104+105049)*1+lsi)*1]), &(inteval->stack[((hsi*11088+70336)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*41580+16660)*1+lsi)*1]), &(inteval->stack[((hsi*18480+118153)*1+lsi)*1]), &(inteval->stack[((hsi*13860+91189)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*41580+16660)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
