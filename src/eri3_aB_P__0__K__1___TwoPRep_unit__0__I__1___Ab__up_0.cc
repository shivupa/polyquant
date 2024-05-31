/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart1bra0ket0kd.h>
#include <HRRPart1bra0ket0kf.h>
#include <HRRPart1bra0ket0kg.h>
#include <HRRPart1bra0ket0kh.h>
#include <HRRPart1bra0ket0ki.h>
#include <HRRPart1bra0ket0kp.h>
#include <HRRPart1bra0ket0ld.h>
#include <HRRPart1bra0ket0lf.h>
#include <HRRPart1bra0ket0lg.h>
#include <HRRPart1bra0ket0lh.h>
#include <HRRPart1bra0ket0lp.h>
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mf.h>
#include <HRRPart1bra0ket0mg.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0nd.h>
#include <HRRPart1bra0ket0nf.h>
#include <HRRPart1bra0ket0np.h>
#include <HRRPart1bra0ket0od.h>
#include <HRRPart1bra0ket0op.h>
#include <HRRPart1bra0ket0qp.h>
#include <eri3_aB_P__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_P__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,1428)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_P__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*405+4452)*1+lsi)*1]), &(inteval->stack[((hsi*165+1020)*1+lsi)*1]), &(inteval->stack[((hsi*135+1185)*1+lsi)*1]),3);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*495+4857)*1+lsi)*1]), &(inteval->stack[((hsi*198+822)*1+lsi)*1]), &(inteval->stack[((hsi*165+1020)*1+lsi)*1]),3);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*810+5352)*1+lsi)*1]), &(inteval->stack[((hsi*495+4857)*1+lsi)*1]), &(inteval->stack[((hsi*405+4452)*1+lsi)*1]),3);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*594+6162)*1+lsi)*1]), &(inteval->stack[((hsi*234+588)*1+lsi)*1]), &(inteval->stack[((hsi*198+822)*1+lsi)*1]),3);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*990+6756)*1+lsi)*1]), &(inteval->stack[((hsi*594+6162)*1+lsi)*1]), &(inteval->stack[((hsi*495+4857)*1+lsi)*1]),3);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*1350+7746)*1+lsi)*1]), &(inteval->stack[((hsi*990+6756)*1+lsi)*1]), &(inteval->stack[((hsi*810+5352)*1+lsi)*1]),3);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*702+9096)*1+lsi)*1]), &(inteval->stack[((hsi*273+315)*1+lsi)*1]), &(inteval->stack[((hsi*234+588)*1+lsi)*1]),3);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*1188+9798)*1+lsi)*1]), &(inteval->stack[((hsi*702+9096)*1+lsi)*1]), &(inteval->stack[((hsi*594+6162)*1+lsi)*1]),3);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*1650+10986)*1+lsi)*1]), &(inteval->stack[((hsi*1188+9798)*1+lsi)*1]), &(inteval->stack[((hsi*990+6756)*1+lsi)*1]),3);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*2025+12636)*1+lsi)*1]), &(inteval->stack[((hsi*1650+10986)*1+lsi)*1]), &(inteval->stack[((hsi*1350+7746)*1+lsi)*1]),3);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*324+6162)*1+lsi)*1]), &(inteval->stack[((hsi*135+1185)*1+lsi)*1]), &(inteval->stack[((hsi*108+1320)*1+lsi)*1]),3);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*648+6486)*1+lsi)*1]), &(inteval->stack[((hsi*405+4452)*1+lsi)*1]), &(inteval->stack[((hsi*324+6162)*1+lsi)*1]),3);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*1080+14661)*1+lsi)*1]), &(inteval->stack[((hsi*810+5352)*1+lsi)*1]), &(inteval->stack[((hsi*648+6486)*1+lsi)*1]),3);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*1620+4452)*1+lsi)*1]), &(inteval->stack[((hsi*1350+7746)*1+lsi)*1]), &(inteval->stack[((hsi*1080+14661)*1+lsi)*1]),3);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*2268+6072)*1+lsi)*1]), &(inteval->stack[((hsi*2025+12636)*1+lsi)*1]), &(inteval->stack[((hsi*1620+4452)*1+lsi)*1]),3);
HRRPart1bra0ket0qp(inteval, &(inteval->stack[((hsi*819+4452)*1+lsi)*1]), &(inteval->stack[((hsi*315+0)*1+lsi)*1]), &(inteval->stack[((hsi*273+315)*1+lsi)*1]),3);
HRRPart1bra0ket0od(inteval, &(inteval->stack[((hsi*1404+0)*1+lsi)*1]), &(inteval->stack[((hsi*819+4452)*1+lsi)*1]), &(inteval->stack[((hsi*702+9096)*1+lsi)*1]),3);
HRRPart1bra0ket0nf(inteval, &(inteval->stack[((hsi*1980+14661)*1+lsi)*1]), &(inteval->stack[((hsi*1404+0)*1+lsi)*1]), &(inteval->stack[((hsi*1188+9798)*1+lsi)*1]),3);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*2475+8340)*1+lsi)*1]), &(inteval->stack[((hsi*1980+14661)*1+lsi)*1]), &(inteval->stack[((hsi*1650+10986)*1+lsi)*1]),3);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*2835+14661)*1+lsi)*1]), &(inteval->stack[((hsi*2475+8340)*1+lsi)*1]), &(inteval->stack[((hsi*2025+12636)*1+lsi)*1]),3);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*3024+1428)*1+lsi)*1]), &(inteval->stack[((hsi*2835+14661)*1+lsi)*1]), &(inteval->stack[((hsi*2268+6072)*1+lsi)*1]),3);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*3024+1428)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
