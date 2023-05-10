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
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_L__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_L__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,19800)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_L__0__L__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*7425+62325)*1+lsi)*1]), &(inteval->stack[((hsi*2970+12330)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15300)*1+lsi)*1]),45);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*8910+69750)*1+lsi)*1]), &(inteval->stack[((hsi*3510+8820)*1+lsi)*1]), &(inteval->stack[((hsi*2970+12330)*1+lsi)*1]),45);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*14850+78660)*1+lsi)*1]), &(inteval->stack[((hsi*8910+69750)*1+lsi)*1]), &(inteval->stack[((hsi*7425+62325)*1+lsi)*1]),45);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*10530+93510)*1+lsi)*1]), &(inteval->stack[((hsi*4095+4725)*1+lsi)*1]), &(inteval->stack[((hsi*3510+8820)*1+lsi)*1]),45);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*17820+104040)*1+lsi)*1]), &(inteval->stack[((hsi*10530+93510)*1+lsi)*1]), &(inteval->stack[((hsi*8910+69750)*1+lsi)*1]),45);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*24750+121860)*1+lsi)*1]), &(inteval->stack[((hsi*17820+104040)*1+lsi)*1]), &(inteval->stack[((hsi*14850+78660)*1+lsi)*1]),45);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*6075+69750)*1+lsi)*1]), &(inteval->stack[((hsi*2475+15300)*1+lsi)*1]), &(inteval->stack[((hsi*2025+17775)*1+lsi)*1]),45);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*12150+146610)*1+lsi)*1]), &(inteval->stack[((hsi*7425+62325)*1+lsi)*1]), &(inteval->stack[((hsi*6075+69750)*1+lsi)*1]),45);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*20250+158760)*1+lsi)*1]), &(inteval->stack[((hsi*14850+78660)*1+lsi)*1]), &(inteval->stack[((hsi*12150+146610)*1+lsi)*1]),45);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*30375+62325)*1+lsi)*1]), &(inteval->stack[((hsi*24750+121860)*1+lsi)*1]), &(inteval->stack[((hsi*20250+158760)*1+lsi)*1]),45);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*12285+146610)*1+lsi)*1]), &(inteval->stack[((hsi*4725+0)*1+lsi)*1]), &(inteval->stack[((hsi*4095+4725)*1+lsi)*1]),45);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*21060+158895)*1+lsi)*1]), &(inteval->stack[((hsi*12285+146610)*1+lsi)*1]), &(inteval->stack[((hsi*10530+93510)*1+lsi)*1]),45);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*29700+179955)*1+lsi)*1]), &(inteval->stack[((hsi*21060+158895)*1+lsi)*1]), &(inteval->stack[((hsi*17820+104040)*1+lsi)*1]),45);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*37125+209655)*1+lsi)*1]), &(inteval->stack[((hsi*29700+179955)*1+lsi)*1]), &(inteval->stack[((hsi*24750+121860)*1+lsi)*1]),45);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*42525+19800)*1+lsi)*1]), &(inteval->stack[((hsi*37125+209655)*1+lsi)*1]), &(inteval->stack[((hsi*30375+62325)*1+lsi)*1]),45);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*42525+19800)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
