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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_F__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15640)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*3510+55240)*1+lsi)*1]), &(inteval->stack[((hsi*1365+8715)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10080)*1+lsi)*1]),15);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*2970+58750)*1+lsi)*1]), &(inteval->stack[((hsi*1170+10080)*1+lsi)*1]), &(inteval->stack[((hsi*990+11250)*1+lsi)*1]),15);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*5940+61720)*1+lsi)*1]), &(inteval->stack[((hsi*3510+55240)*1+lsi)*1]), &(inteval->stack[((hsi*2970+58750)*1+lsi)*1]),15);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*4095+67660)*1+lsi)*1]), &(inteval->stack[((hsi*1575+7140)*1+lsi)*1]), &(inteval->stack[((hsi*1365+8715)*1+lsi)*1]),15);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*7020+71755)*1+lsi)*1]), &(inteval->stack[((hsi*4095+67660)*1+lsi)*1]), &(inteval->stack[((hsi*3510+55240)*1+lsi)*1]),15);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*9900+78775)*1+lsi)*1]), &(inteval->stack[((hsi*7020+71755)*1+lsi)*1]), &(inteval->stack[((hsi*5940+61720)*1+lsi)*1]),15);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*2340+55240)*1+lsi)*1]), &(inteval->stack[((hsi*910+13290)*1+lsi)*1]), &(inteval->stack[((hsi*780+14200)*1+lsi)*1]),10);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1980+57580)*1+lsi)*1]), &(inteval->stack[((hsi*780+14200)*1+lsi)*1]), &(inteval->stack[((hsi*660+14980)*1+lsi)*1]),10);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*3960+59560)*1+lsi)*1]), &(inteval->stack[((hsi*2340+55240)*1+lsi)*1]), &(inteval->stack[((hsi*1980+57580)*1+lsi)*1]),10);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*2730+63520)*1+lsi)*1]), &(inteval->stack[((hsi*1050+12240)*1+lsi)*1]), &(inteval->stack[((hsi*910+13290)*1+lsi)*1]),10);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*4680+66250)*1+lsi)*1]), &(inteval->stack[((hsi*2730+63520)*1+lsi)*1]), &(inteval->stack[((hsi*2340+55240)*1+lsi)*1]),10);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*6600+7140)*1+lsi)*1]), &(inteval->stack[((hsi*4680+66250)*1+lsi)*1]), &(inteval->stack[((hsi*3960+59560)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*19800+55240)*1+lsi)*1]), &(inteval->stack[((hsi*9900+78775)*1+lsi)*1]), &(inteval->stack[((hsi*6600+7140)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*4914+7140)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]),21);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*4158+88675)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4116)*1+lsi)*1]), &(inteval->stack[((hsi*1386+5754)*1+lsi)*1]),21);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*8316+92833)*1+lsi)*1]), &(inteval->stack[((hsi*4914+7140)*1+lsi)*1]), &(inteval->stack[((hsi*4158+88675)*1+lsi)*1]),21);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*5733+101149)*1+lsi)*1]), &(inteval->stack[((hsi*2205+0)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2205)*1+lsi)*1]),21);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*9828+106882)*1+lsi)*1]), &(inteval->stack[((hsi*5733+101149)*1+lsi)*1]), &(inteval->stack[((hsi*4914+7140)*1+lsi)*1]),21);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*13860+0)*1+lsi)*1]), &(inteval->stack[((hsi*9828+106882)*1+lsi)*1]), &(inteval->stack[((hsi*8316+92833)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*29700+88675)*1+lsi)*1]), &(inteval->stack[((hsi*13860+0)*1+lsi)*1]), &(inteval->stack[((hsi*9900+78775)*1+lsi)*1]),660);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*39600+15640)*1+lsi)*1]), &(inteval->stack[((hsi*29700+88675)*1+lsi)*1]), &(inteval->stack[((hsi*19800+55240)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*39600+15640)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
