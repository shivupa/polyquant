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
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_F__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,10810)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+34570)*1+lsi)*1]), &(inteval->stack[((hsi*1170+5824)*1+lsi)*1]), &(inteval->stack[((hsi*780+6994)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+36910)*1+lsi)*1]), &(inteval->stack[((hsi*1638+4186)*1+lsi)*1]), &(inteval->stack[((hsi*1170+5824)*1+lsi)*1]),78);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*4680+40420)*1+lsi)*1]), &(inteval->stack[((hsi*3510+36910)*1+lsi)*1]), &(inteval->stack[((hsi*2340+34570)*1+lsi)*1]),78);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+34570)*1+lsi)*1]), &(inteval->stack[((hsi*990+9160)*1+lsi)*1]), &(inteval->stack[((hsi*660+10150)*1+lsi)*1]),66);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+36550)*1+lsi)*1]), &(inteval->stack[((hsi*1386+7774)*1+lsi)*1]), &(inteval->stack[((hsi*990+9160)*1+lsi)*1]),66);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3960+4186)*1+lsi)*1]), &(inteval->stack[((hsi*2970+36550)*1+lsi)*1]), &(inteval->stack[((hsi*1980+34570)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*11880+45100)*1+lsi)*1]), &(inteval->stack[((hsi*4680+40420)*1+lsi)*1]), &(inteval->stack[((hsi*3960+4186)*1+lsi)*1]),60);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2730+4186)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1911)*1+lsi)*1]), &(inteval->stack[((hsi*910+3276)*1+lsi)*1]),91);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*4095+34570)*1+lsi)*1]), &(inteval->stack[((hsi*1911+0)*1+lsi)*1]), &(inteval->stack[((hsi*1365+1911)*1+lsi)*1]),91);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*5460+56980)*1+lsi)*1]), &(inteval->stack[((hsi*4095+34570)*1+lsi)*1]), &(inteval->stack[((hsi*2730+4186)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*14040+62440)*1+lsi)*1]), &(inteval->stack[((hsi*5460+56980)*1+lsi)*1]), &(inteval->stack[((hsi*4680+40420)*1+lsi)*1]),60);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*23760+10810)*1+lsi)*1]), &(inteval->stack[((hsi*14040+62440)*1+lsi)*1]), &(inteval->stack[((hsi*11880+45100)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*23760+10810)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
