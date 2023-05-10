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
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,21760)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+81160)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11725)*1+lsi)*1]), &(inteval->stack[((hsi*1638+13636)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+86074)*1+lsi)*1]), &(inteval->stack[((hsi*1638+13636)*1+lsi)*1]), &(inteval->stack[((hsi*1386+15274)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+90232)*1+lsi)*1]), &(inteval->stack[((hsi*4914+81160)*1+lsi)*1]), &(inteval->stack[((hsi*4158+86074)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+98548)*1+lsi)*1]), &(inteval->stack[((hsi*2205+9520)*1+lsi)*1]), &(inteval->stack[((hsi*1911+11725)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+104281)*1+lsi)*1]), &(inteval->stack[((hsi*5733+98548)*1+lsi)*1]), &(inteval->stack[((hsi*4914+81160)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+114109)*1+lsi)*1]), &(inteval->stack[((hsi*9828+104281)*1+lsi)*1]), &(inteval->stack[((hsi*8316+90232)*1+lsi)*1]),21);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+81160)*1+lsi)*1]), &(inteval->stack[((hsi*1365+18235)*1+lsi)*1]), &(inteval->stack[((hsi*1170+19600)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+84670)*1+lsi)*1]), &(inteval->stack[((hsi*1170+19600)*1+lsi)*1]), &(inteval->stack[((hsi*990+20770)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+87640)*1+lsi)*1]), &(inteval->stack[((hsi*3510+81160)*1+lsi)*1]), &(inteval->stack[((hsi*2970+84670)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+93580)*1+lsi)*1]), &(inteval->stack[((hsi*1575+16660)*1+lsi)*1]), &(inteval->stack[((hsi*1365+18235)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+97675)*1+lsi)*1]), &(inteval->stack[((hsi*4095+93580)*1+lsi)*1]), &(inteval->stack[((hsi*3510+81160)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+9520)*1+lsi)*1]), &(inteval->stack[((hsi*7020+97675)*1+lsi)*1]), &(inteval->stack[((hsi*5940+87640)*1+lsi)*1]),15);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*29700+81160)*1+lsi)*1]), &(inteval->stack[((hsi*13860+114109)*1+lsi)*1]), &(inteval->stack[((hsi*9900+9520)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*6552+9520)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]),28);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*5544+16072)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5488)*1+lsi)*1]), &(inteval->stack[((hsi*1848+7672)*1+lsi)*1]),28);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*11088+127969)*1+lsi)*1]), &(inteval->stack[((hsi*6552+9520)*1+lsi)*1]), &(inteval->stack[((hsi*5544+16072)*1+lsi)*1]),28);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*7644+139057)*1+lsi)*1]), &(inteval->stack[((hsi*2940+0)*1+lsi)*1]), &(inteval->stack[((hsi*2548+2940)*1+lsi)*1]),28);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*13104+146701)*1+lsi)*1]), &(inteval->stack[((hsi*7644+139057)*1+lsi)*1]), &(inteval->stack[((hsi*6552+9520)*1+lsi)*1]),28);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*18480+0)*1+lsi)*1]), &(inteval->stack[((hsi*13104+146701)*1+lsi)*1]), &(inteval->stack[((hsi*11088+127969)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*41580+127969)*1+lsi)*1]), &(inteval->stack[((hsi*18480+0)*1+lsi)*1]), &(inteval->stack[((hsi*13860+114109)*1+lsi)*1]),660);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*59400+21760)*1+lsi)*1]), &(inteval->stack[((hsi*41580+127969)*1+lsi)*1]), &(inteval->stack[((hsi*29700+81160)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*59400+21760)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
