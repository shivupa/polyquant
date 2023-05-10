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
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,12240)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+41940)*1+lsi)*1]), &(inteval->stack[((hsi*1365+8715)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10080)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+45450)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10080)*1+lsi)*1]), &(inteval->stack[((hsi*990+11250)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+48420)*1+lsi)*1]), &(inteval->stack[((hsi*3510+41940)*1+lsi)*1]), &(inteval->stack[((hsi*2970+45450)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+54360)*1+lsi)*1]), &(inteval->stack[((hsi*1575+7140)*1+lsi)*1]), &(inteval->stack[((hsi*1365+8715)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+58455)*1+lsi)*1]), &(inteval->stack[((hsi*4095+54360)*1+lsi)*1]), &(inteval->stack[((hsi*3510+41940)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+65475)*1+lsi)*1]), &(inteval->stack[((hsi*7020+58455)*1+lsi)*1]), &(inteval->stack[((hsi*5940+48420)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+41940)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+46854)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+51012)*1+lsi)*1]), &(inteval->stack[((hsi*4914+41940)*1+lsi)*1]), &(inteval->stack[((hsi*4158+46854)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+4116)*1+lsi)*1]), &(inteval->stack[((hsi*2205+0)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+75375)*1+lsi)*1]), &(inteval->stack[((hsi*5733+4116)*1+lsi)*1]), &(inteval->stack[((hsi*4914+41940)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+85203)*1+lsi)*1]), &(inteval->stack[((hsi*9828+75375)*1+lsi)*1]), &(inteval->stack[((hsi*8316+51012)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*29700+12240)*1+lsi)*1]), &(inteval->stack[((hsi*13860+85203)*1+lsi)*1]), &(inteval->stack[((hsi*9900+65475)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*29700+12240)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
