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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,27540)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*8424+98820)*1+lsi)*1]), &(inteval->stack[((hsi*3276+19080)*1+lsi)*1]), &(inteval->stack[((hsi*2808+22356)*1+lsi)*1]),36);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*7128+107244)*1+lsi)*1]), &(inteval->stack[((hsi*2808+22356)*1+lsi)*1]), &(inteval->stack[((hsi*2376+25164)*1+lsi)*1]),36);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*14256+114372)*1+lsi)*1]), &(inteval->stack[((hsi*8424+98820)*1+lsi)*1]), &(inteval->stack[((hsi*7128+107244)*1+lsi)*1]),36);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*9828+128628)*1+lsi)*1]), &(inteval->stack[((hsi*3780+15300)*1+lsi)*1]), &(inteval->stack[((hsi*3276+19080)*1+lsi)*1]),36);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*16848+138456)*1+lsi)*1]), &(inteval->stack[((hsi*9828+128628)*1+lsi)*1]), &(inteval->stack[((hsi*8424+98820)*1+lsi)*1]),36);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*23760+155304)*1+lsi)*1]), &(inteval->stack[((hsi*16848+138456)*1+lsi)*1]), &(inteval->stack[((hsi*14256+114372)*1+lsi)*1]),36);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+98820)*1+lsi)*1]), &(inteval->stack[((hsi*4095+4725)*1+lsi)*1]), &(inteval->stack[((hsi*3510+8820)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+109350)*1+lsi)*1]), &(inteval->stack[((hsi*3510+8820)*1+lsi)*1]), &(inteval->stack[((hsi*2970+12330)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+118260)*1+lsi)*1]), &(inteval->stack[((hsi*10530+98820)*1+lsi)*1]), &(inteval->stack[((hsi*8910+109350)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+136080)*1+lsi)*1]), &(inteval->stack[((hsi*4725+0)*1+lsi)*1]), &(inteval->stack[((hsi*4095+4725)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+0)*1+lsi)*1]), &(inteval->stack[((hsi*12285+136080)*1+lsi)*1]), &(inteval->stack[((hsi*10530+98820)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+179064)*1+lsi)*1]), &(inteval->stack[((hsi*21060+0)*1+lsi)*1]), &(inteval->stack[((hsi*17820+118260)*1+lsi)*1]),45);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*71280+27540)*1+lsi)*1]), &(inteval->stack[((hsi*29700+179064)*1+lsi)*1]), &(inteval->stack[((hsi*23760+155304)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*71280+27540)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
