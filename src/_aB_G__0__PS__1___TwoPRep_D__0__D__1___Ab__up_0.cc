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
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_G__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_G__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,15040)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_G__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+50680)*1+lsi)*1]), &(inteval->stack[((hsi*1638+8008)*1+lsi)*1]), &(inteval->stack[((hsi*1170+9646)*1+lsi)*1]),78);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4914+54190)*1+lsi)*1]), &(inteval->stack[((hsi*2184+5824)*1+lsi)*1]), &(inteval->stack[((hsi*1638+8008)*1+lsi)*1]),78);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*7020+59104)*1+lsi)*1]), &(inteval->stack[((hsi*4914+54190)*1+lsi)*1]), &(inteval->stack[((hsi*3510+50680)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+50680)*1+lsi)*1]), &(inteval->stack[((hsi*1386+12664)*1+lsi)*1]), &(inteval->stack[((hsi*990+14050)*1+lsi)*1]),66);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*4158+53650)*1+lsi)*1]), &(inteval->stack[((hsi*1848+10816)*1+lsi)*1]), &(inteval->stack[((hsi*1386+12664)*1+lsi)*1]),66);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*5940+5824)*1+lsi)*1]), &(inteval->stack[((hsi*4158+53650)*1+lsi)*1]), &(inteval->stack[((hsi*2970+50680)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*17820+66124)*1+lsi)*1]), &(inteval->stack[((hsi*7020+59104)*1+lsi)*1]), &(inteval->stack[((hsi*5940+5824)*1+lsi)*1]),90);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4095+5824)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2548)*1+lsi)*1]), &(inteval->stack[((hsi*1365+4459)*1+lsi)*1]),91);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*5733+50680)*1+lsi)*1]), &(inteval->stack[((hsi*2548+0)*1+lsi)*1]), &(inteval->stack[((hsi*1911+2548)*1+lsi)*1]),91);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*8190+83944)*1+lsi)*1]), &(inteval->stack[((hsi*5733+50680)*1+lsi)*1]), &(inteval->stack[((hsi*4095+5824)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*21060+92134)*1+lsi)*1]), &(inteval->stack[((hsi*8190+83944)*1+lsi)*1]), &(inteval->stack[((hsi*7020+59104)*1+lsi)*1]),90);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*35640+15040)*1+lsi)*1]), &(inteval->stack[((hsi*21060+92134)*1+lsi)*1]), &(inteval->stack[((hsi*17820+66124)*1+lsi)*1]),90);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*35640+15040)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
