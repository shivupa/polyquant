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
#include <HRRPart1bra0ket0md.h>
#include <HRRPart1bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_F__0__M__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__M__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,9154)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__M__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1980+28954)*1+lsi)*1]), &(inteval->stack[((hsi*990+4974)*1+lsi)*1]), &(inteval->stack[((hsi*660+5964)*1+lsi)*1]),66);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2970+30934)*1+lsi)*1]), &(inteval->stack[((hsi*1386+3588)*1+lsi)*1]), &(inteval->stack[((hsi*990+4974)*1+lsi)*1]),66);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3960+33904)*1+lsi)*1]), &(inteval->stack[((hsi*2970+30934)*1+lsi)*1]), &(inteval->stack[((hsi*1980+28954)*1+lsi)*1]),66);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1650+28954)*1+lsi)*1]), &(inteval->stack[((hsi*825+7779)*1+lsi)*1]), &(inteval->stack[((hsi*550+8604)*1+lsi)*1]),55);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*2475+30604)*1+lsi)*1]), &(inteval->stack[((hsi*1155+6624)*1+lsi)*1]), &(inteval->stack[((hsi*825+7779)*1+lsi)*1]),55);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*3300+3588)*1+lsi)*1]), &(inteval->stack[((hsi*2475+30604)*1+lsi)*1]), &(inteval->stack[((hsi*1650+28954)*1+lsi)*1]),55);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*9900+37864)*1+lsi)*1]), &(inteval->stack[((hsi*3960+33904)*1+lsi)*1]), &(inteval->stack[((hsi*3300+3588)*1+lsi)*1]),60);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*2340+3588)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1638)*1+lsi)*1]), &(inteval->stack[((hsi*780+2808)*1+lsi)*1]),78);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*3510+28954)*1+lsi)*1]), &(inteval->stack[((hsi*1638+0)*1+lsi)*1]), &(inteval->stack[((hsi*1170+1638)*1+lsi)*1]),78);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*4680+47764)*1+lsi)*1]), &(inteval->stack[((hsi*3510+28954)*1+lsi)*1]), &(inteval->stack[((hsi*2340+3588)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*11880+52444)*1+lsi)*1]), &(inteval->stack[((hsi*4680+47764)*1+lsi)*1]), &(inteval->stack[((hsi*3960+33904)*1+lsi)*1]),60);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*19800+9154)*1+lsi)*1]), &(inteval->stack[((hsi*11880+52444)*1+lsi)*1]), &(inteval->stack[((hsi*9900+37864)*1+lsi)*1]),60);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*19800+9154)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
