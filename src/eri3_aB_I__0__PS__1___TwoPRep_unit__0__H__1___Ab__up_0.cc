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
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdf.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfd.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0pgp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppg.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psh.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_I__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_I__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,16688)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_I__0__PS__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+55496)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+62048)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]), &(inteval->stack[((hsi*2548+10108)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+69692)*1+lsi)*1]), &(inteval->stack[((hsi*7644+62048)*1+lsi)*1]), &(inteval->stack[((hsi*6552+55496)*1+lsi)*1]),28);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*8820+82796)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]), &(inteval->stack[((hsi*2940+7168)*1+lsi)*1]),28);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*15288+91616)*1+lsi)*1]), &(inteval->stack[((hsi*8820+82796)*1+lsi)*1]), &(inteval->stack[((hsi*7644+62048)*1+lsi)*1]),28);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*21840+106904)*1+lsi)*1]), &(inteval->stack[((hsi*15288+91616)*1+lsi)*1]), &(inteval->stack[((hsi*13104+69692)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+62048)*1+lsi)*1]), &(inteval->stack[((hsi*2184+12656)*1+lsi)*1]), &(inteval->stack[((hsi*1848+14840)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+128744)*1+lsi)*1]), &(inteval->stack[((hsi*6552+55496)*1+lsi)*1]), &(inteval->stack[((hsi*5544+62048)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+139832)*1+lsi)*1]), &(inteval->stack[((hsi*13104+69692)*1+lsi)*1]), &(inteval->stack[((hsi*11088+128744)*1+lsi)*1]),28);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*27720+158312)*1+lsi)*1]), &(inteval->stack[((hsi*21840+106904)*1+lsi)*1]), &(inteval->stack[((hsi*18480+139832)*1+lsi)*1]),28);
HRRPart1bra0ket0pgp(inteval, &(inteval->stack[((hsi*10080+128744)*1+lsi)*1]), &(inteval->stack[((hsi*3808+0)*1+lsi)*1]), &(inteval->stack[((hsi*3360+3808)*1+lsi)*1]),28);
HRRPart1bra0ket0pfd(inteval, &(inteval->stack[((hsi*17640+55496)*1+lsi)*1]), &(inteval->stack[((hsi*10080+128744)*1+lsi)*1]), &(inteval->stack[((hsi*8820+82796)*1+lsi)*1]),28);
HRRPart1bra0ket0pdf(inteval, &(inteval->stack[((hsi*25480+128744)*1+lsi)*1]), &(inteval->stack[((hsi*17640+55496)*1+lsi)*1]), &(inteval->stack[((hsi*15288+91616)*1+lsi)*1]),28);
HRRPart1bra0ket0ppg(inteval, &(inteval->stack[((hsi*32760+55496)*1+lsi)*1]), &(inteval->stack[((hsi*25480+128744)*1+lsi)*1]), &(inteval->stack[((hsi*21840+106904)*1+lsi)*1]),28);
HRRPart1bra0ket0psh(inteval, &(inteval->stack[((hsi*38808+16688)*1+lsi)*1]), &(inteval->stack[((hsi*32760+55496)*1+lsi)*1]), &(inteval->stack[((hsi*27720+158312)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*38808+16688)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
