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
#include <eri3_aB_H__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void eri3_aB_H__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9996)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
eri3_aB_H__0__K__1___TwoPRep_unit__0__I__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+31164)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7140)*1+lsi)*1]), &(inteval->stack[((hsi*945+8295)*1+lsi)*1]),21);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+33999)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7140)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+37464)*1+lsi)*1]), &(inteval->stack[((hsi*3465+33999)*1+lsi)*1]), &(inteval->stack[((hsi*2835+31164)*1+lsi)*1]),21);
HRRPart1bra0ket0np(inteval, &(inteval->stack[((hsi*4158+43134)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+47292)*1+lsi)*1]), &(inteval->stack[((hsi*4158+43134)*1+lsi)*1]), &(inteval->stack[((hsi*3465+33999)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+54222)*1+lsi)*1]), &(inteval->stack[((hsi*6930+47292)*1+lsi)*1]), &(inteval->stack[((hsi*5670+37464)*1+lsi)*1]),21);
HRRPart1bra0ket0op(inteval, &(inteval->stack[((hsi*4914+63672)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]),21);
HRRPart1bra0ket0nd(inteval, &(inteval->stack[((hsi*8316+68586)*1+lsi)*1]), &(inteval->stack[((hsi*4914+63672)*1+lsi)*1]), &(inteval->stack[((hsi*4158+43134)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+76902)*1+lsi)*1]), &(inteval->stack[((hsi*8316+68586)*1+lsi)*1]), &(inteval->stack[((hsi*6930+47292)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+88452)*1+lsi)*1]), &(inteval->stack[((hsi*11550+76902)*1+lsi)*1]), &(inteval->stack[((hsi*9450+54222)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+43134)*1+lsi)*1]), &(inteval->stack[((hsi*945+8295)*1+lsi)*1]), &(inteval->stack[((hsi*756+9240)*1+lsi)*1]),21);
HRRPart1bra0ket0kd(inteval, &(inteval->stack[((hsi*4536+45402)*1+lsi)*1]), &(inteval->stack[((hsi*2835+31164)*1+lsi)*1]), &(inteval->stack[((hsi*2268+43134)*1+lsi)*1]),21);
HRRPart1bra0ket0kf(inteval, &(inteval->stack[((hsi*7560+102627)*1+lsi)*1]), &(inteval->stack[((hsi*5670+37464)*1+lsi)*1]), &(inteval->stack[((hsi*4536+45402)*1+lsi)*1]),21);
HRRPart1bra0ket0kg(inteval, &(inteval->stack[((hsi*11340+31164)*1+lsi)*1]), &(inteval->stack[((hsi*9450+54222)*1+lsi)*1]), &(inteval->stack[((hsi*7560+102627)*1+lsi)*1]),21);
HRRPart1bra0ket0kh(inteval, &(inteval->stack[((hsi*15876+42504)*1+lsi)*1]), &(inteval->stack[((hsi*14175+88452)*1+lsi)*1]), &(inteval->stack[((hsi*11340+31164)*1+lsi)*1]),21);
HRRPart1bra0ket0qp(inteval, &(inteval->stack[((hsi*5733+31164)*1+lsi)*1]), &(inteval->stack[((hsi*2205+0)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]),21);
HRRPart1bra0ket0od(inteval, &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*5733+31164)*1+lsi)*1]), &(inteval->stack[((hsi*4914+63672)*1+lsi)*1]),21);
HRRPart1bra0ket0nf(inteval, &(inteval->stack[((hsi*13860+102627)*1+lsi)*1]), &(inteval->stack[((hsi*9828+0)*1+lsi)*1]), &(inteval->stack[((hsi*8316+68586)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+58380)*1+lsi)*1]), &(inteval->stack[((hsi*13860+102627)*1+lsi)*1]), &(inteval->stack[((hsi*11550+76902)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+102627)*1+lsi)*1]), &(inteval->stack[((hsi*17325+58380)*1+lsi)*1]), &(inteval->stack[((hsi*14175+88452)*1+lsi)*1]),21);
HRRPart1bra0ket0ki(inteval, &(inteval->stack[((hsi*21168+9996)*1+lsi)*1]), &(inteval->stack[((hsi*19845+102627)*1+lsi)*1]), &(inteval->stack[((hsi*15876+42504)*1+lsi)*1]),21);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*21168+9996)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
