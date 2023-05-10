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
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <eri3_aB_I__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_I__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,13328)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_I__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*3780+41552)*1+lsi)*1]), &(inteval->stack[((hsi*1540+9520)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11060)*1+lsi)*1]),28);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*4620+45332)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]), &(inteval->stack[((hsi*1540+9520)*1+lsi)*1]),28);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*7560+49952)*1+lsi)*1]), &(inteval->stack[((hsi*4620+45332)*1+lsi)*1]), &(inteval->stack[((hsi*3780+41552)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+57512)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]),28);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*9240+63056)*1+lsi)*1]), &(inteval->stack[((hsi*5544+57512)*1+lsi)*1]), &(inteval->stack[((hsi*4620+45332)*1+lsi)*1]),28);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*12600+72296)*1+lsi)*1]), &(inteval->stack[((hsi*9240+63056)*1+lsi)*1]), &(inteval->stack[((hsi*7560+49952)*1+lsi)*1]),28);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+84896)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+91448)*1+lsi)*1]), &(inteval->stack[((hsi*6552+84896)*1+lsi)*1]), &(inteval->stack[((hsi*5544+57512)*1+lsi)*1]),28);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*15400+102536)*1+lsi)*1]), &(inteval->stack[((hsi*11088+91448)*1+lsi)*1]), &(inteval->stack[((hsi*9240+63056)*1+lsi)*1]),28);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*18900+117936)*1+lsi)*1]), &(inteval->stack[((hsi*15400+102536)*1+lsi)*1]), &(inteval->stack[((hsi*12600+72296)*1+lsi)*1]),28);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*3024+57512)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11060)*1+lsi)*1]), &(inteval->stack[((hsi*1008+12320)*1+lsi)*1]),28);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*6048+60536)*1+lsi)*1]), &(inteval->stack[((hsi*3780+41552)*1+lsi)*1]), &(inteval->stack[((hsi*3024+57512)*1+lsi)*1]),28);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*10080+136836)*1+lsi)*1]), &(inteval->stack[((hsi*7560+49952)*1+lsi)*1]), &(inteval->stack[((hsi*6048+60536)*1+lsi)*1]),28);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*15120+41552)*1+lsi)*1]), &(inteval->stack[((hsi*12600+72296)*1+lsi)*1]), &(inteval->stack[((hsi*10080+136836)*1+lsi)*1]),28);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*21168+56672)*1+lsi)*1]), &(inteval->stack[((hsi*18900+117936)*1+lsi)*1]), &(inteval->stack[((hsi*15120+41552)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+41552)*1+lsi)*1]), &(inteval->stack[((hsi*2940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+0)*1+lsi)*1]), &(inteval->stack[((hsi*7644+41552)*1+lsi)*1]), &(inteval->stack[((hsi*6552+84896)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+136836)*1+lsi)*1]), &(inteval->stack[((hsi*13104+0)*1+lsi)*1]), &(inteval->stack[((hsi*11088+91448)*1+lsi)*1]),28);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*23100+77840)*1+lsi)*1]), &(inteval->stack[((hsi*18480+136836)*1+lsi)*1]), &(inteval->stack[((hsi*15400+102536)*1+lsi)*1]),28);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*26460+136836)*1+lsi)*1]), &(inteval->stack[((hsi*23100+77840)*1+lsi)*1]), &(inteval->stack[((hsi*18900+117936)*1+lsi)*1]),28);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*28224+13328)*1+lsi)*1]), &(inteval->stack[((hsi*26460+136836)*1+lsi)*1]), &(inteval->stack[((hsi*21168+56672)*1+lsi)*1]),28);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*28224+13328)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
