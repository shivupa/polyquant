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
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_I__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_I__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10388)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_I__0__K__1___TwoPRep_unit__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+31556)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6580)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+35336)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4732)*1+lsi)*1]), &(inteval->stack[((hsi*1540+6580)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+39956)*1+lsi)*1]), &(inteval->stack[((hsi*4620+35336)*1+lsi)*1]), &(inteval->stack[((hsi*3780+31556)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+47516)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2548)*1+lsi)*1]), &(inteval->stack[((hsi*1848+4732)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+53060)*1+lsi)*1]), &(inteval->stack[((hsi*5544+47516)*1+lsi)*1]), &(inteval->stack[((hsi*4620+35336)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+62300)*1+lsi)*1]), &(inteval->stack[((hsi*9240+53060)*1+lsi)*1]), &(inteval->stack[((hsi*7560+39956)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+35336)*1+lsi)*1]), &(inteval->stack[((hsi*1260+8120)*1+lsi)*1]), &(inteval->stack[((hsi*1008+9380)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+74900)*1+lsi)*1]), &(inteval->stack[((hsi*3780+31556)*1+lsi)*1]), &(inteval->stack[((hsi*3024+35336)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+80948)*1+lsi)*1]), &(inteval->stack[((hsi*7560+39956)*1+lsi)*1]), &(inteval->stack[((hsi*6048+74900)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+31556)*1+lsi)*1]), &(inteval->stack[((hsi*12600+62300)*1+lsi)*1]), &(inteval->stack[((hsi*10080+80948)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+74900)*1+lsi)*1]), &(inteval->stack[((hsi*2548+0)*1+lsi)*1]), &(inteval->stack[((hsi*2184+2548)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+81452)*1+lsi)*1]), &(inteval->stack[((hsi*6552+74900)*1+lsi)*1]), &(inteval->stack[((hsi*5544+47516)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+92540)*1+lsi)*1]), &(inteval->stack[((hsi*11088+81452)*1+lsi)*1]), &(inteval->stack[((hsi*9240+53060)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+107940)*1+lsi)*1]), &(inteval->stack[((hsi*15400+92540)*1+lsi)*1]), &(inteval->stack[((hsi*12600+62300)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+10388)*1+lsi)*1]), &(inteval->stack[((hsi*18900+107940)*1+lsi)*1]), &(inteval->stack[((hsi*15120+31556)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*21168+10388)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
