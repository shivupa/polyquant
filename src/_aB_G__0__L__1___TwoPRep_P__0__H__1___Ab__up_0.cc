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
#include <_aB_G__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__L__1___TwoPRep_P__0__H__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15840)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__L__1___TwoPRep_P__0__H__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*2475+58365)*1+lsi)*1]), &(inteval->stack[((hsi*990+13350)*1+lsi)*1]), &(inteval->stack[((hsi*825+14340)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+60840)*1+lsi)*1]), &(inteval->stack[((hsi*1170+12180)*1+lsi)*1]), &(inteval->stack[((hsi*990+13350)*1+lsi)*1]),15);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*4950+63810)*1+lsi)*1]), &(inteval->stack[((hsi*2970+60840)*1+lsi)*1]), &(inteval->stack[((hsi*2475+58365)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+68760)*1+lsi)*1]), &(inteval->stack[((hsi*1365+10815)*1+lsi)*1]), &(inteval->stack[((hsi*1170+12180)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+72270)*1+lsi)*1]), &(inteval->stack[((hsi*3510+68760)*1+lsi)*1]), &(inteval->stack[((hsi*2970+60840)*1+lsi)*1]),15);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*8250+78210)*1+lsi)*1]), &(inteval->stack[((hsi*5940+72270)*1+lsi)*1]), &(inteval->stack[((hsi*4950+63810)*1+lsi)*1]),15);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2025+60840)*1+lsi)*1]), &(inteval->stack[((hsi*825+14340)*1+lsi)*1]), &(inteval->stack[((hsi*675+15165)*1+lsi)*1]),15);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*4050+86460)*1+lsi)*1]), &(inteval->stack[((hsi*2475+58365)*1+lsi)*1]), &(inteval->stack[((hsi*2025+60840)*1+lsi)*1]),15);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*6750+90510)*1+lsi)*1]), &(inteval->stack[((hsi*4950+63810)*1+lsi)*1]), &(inteval->stack[((hsi*4050+86460)*1+lsi)*1]),15);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*10125+58365)*1+lsi)*1]), &(inteval->stack[((hsi*8250+78210)*1+lsi)*1]), &(inteval->stack[((hsi*6750+90510)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+86460)*1+lsi)*1]), &(inteval->stack[((hsi*1575+9240)*1+lsi)*1]), &(inteval->stack[((hsi*1365+10815)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+90555)*1+lsi)*1]), &(inteval->stack[((hsi*4095+86460)*1+lsi)*1]), &(inteval->stack[((hsi*3510+68760)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+97575)*1+lsi)*1]), &(inteval->stack[((hsi*7020+90555)*1+lsi)*1]), &(inteval->stack[((hsi*5940+72270)*1+lsi)*1]),15);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*12375+107475)*1+lsi)*1]), &(inteval->stack[((hsi*9900+97575)*1+lsi)*1]), &(inteval->stack[((hsi*8250+78210)*1+lsi)*1]),15);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*14175+68490)*1+lsi)*1]), &(inteval->stack[((hsi*12375+107475)*1+lsi)*1]), &(inteval->stack[((hsi*10125+58365)*1+lsi)*1]),15);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*3465+58365)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7140)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+61830)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]),21);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*6930+82665)*1+lsi)*1]), &(inteval->stack[((hsi*4158+61830)*1+lsi)*1]), &(inteval->stack[((hsi*3465+58365)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+9240)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+89595)*1+lsi)*1]), &(inteval->stack[((hsi*4914+9240)*1+lsi)*1]), &(inteval->stack[((hsi*4158+61830)*1+lsi)*1]),21);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*11550+97911)*1+lsi)*1]), &(inteval->stack[((hsi*8316+89595)*1+lsi)*1]), &(inteval->stack[((hsi*6930+82665)*1+lsi)*1]),21);
HRRPart1bra0ket0lp(inteval, &(inteval->stack[((hsi*2835+61830)*1+lsi)*1]), &(inteval->stack[((hsi*1155+7140)*1+lsi)*1]), &(inteval->stack[((hsi*945+8295)*1+lsi)*1]),21);
HRRPart1bra0ket0ld(inteval, &(inteval->stack[((hsi*5670+109461)*1+lsi)*1]), &(inteval->stack[((hsi*3465+58365)*1+lsi)*1]), &(inteval->stack[((hsi*2835+61830)*1+lsi)*1]),21);
HRRPart1bra0ket0lf(inteval, &(inteval->stack[((hsi*9450+58365)*1+lsi)*1]), &(inteval->stack[((hsi*6930+82665)*1+lsi)*1]), &(inteval->stack[((hsi*5670+109461)*1+lsi)*1]),21);
HRRPart1bra0ket0lg(inteval, &(inteval->stack[((hsi*14175+109461)*1+lsi)*1]), &(inteval->stack[((hsi*11550+97911)*1+lsi)*1]), &(inteval->stack[((hsi*9450+58365)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+58365)*1+lsi)*1]), &(inteval->stack[((hsi*2205+0)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+123636)*1+lsi)*1]), &(inteval->stack[((hsi*5733+58365)*1+lsi)*1]), &(inteval->stack[((hsi*4914+9240)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+123636)*1+lsi)*1]), &(inteval->stack[((hsi*8316+89595)*1+lsi)*1]),21);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*17325+123636)*1+lsi)*1]), &(inteval->stack[((hsi*13860+0)*1+lsi)*1]), &(inteval->stack[((hsi*11550+97911)*1+lsi)*1]),21);
HRRPart1bra0ket0lh(inteval, &(inteval->stack[((hsi*19845+82665)*1+lsi)*1]), &(inteval->stack[((hsi*17325+123636)*1+lsi)*1]), &(inteval->stack[((hsi*14175+109461)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*42525+15840)*1+lsi)*1]), &(inteval->stack[((hsi*19845+82665)*1+lsi)*1]), &(inteval->stack[((hsi*14175+68490)*1+lsi)*1]),945);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*42525+15840)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
