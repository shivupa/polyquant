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
#include <HRRPart0bra0ket0kd.h>
#include <HRRPart0bra0ket0kf.h>
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0ld.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,29088)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+100368)*1+lsi)*1]), &(inteval->stack[((hsi*3630+20112)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23742)*1+lsi)*1]),66);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+109278)*1+lsi)*1]), &(inteval->stack[((hsi*2970+23742)*1+lsi)*1]), &(inteval->stack[((hsi*2376+26712)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+116406)*1+lsi)*1]), &(inteval->stack[((hsi*8910+100368)*1+lsi)*1]), &(inteval->stack[((hsi*7128+109278)*1+lsi)*1]),66);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+130662)*1+lsi)*1]), &(inteval->stack[((hsi*4356+15756)*1+lsi)*1]), &(inteval->stack[((hsi*3630+20112)*1+lsi)*1]),66);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*17820+141552)*1+lsi)*1]), &(inteval->stack[((hsi*10890+130662)*1+lsi)*1]), &(inteval->stack[((hsi*8910+100368)*1+lsi)*1]),66);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*23760+159372)*1+lsi)*1]), &(inteval->stack[((hsi*17820+141552)*1+lsi)*1]), &(inteval->stack[((hsi*14256+116406)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+100368)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5148)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9438)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+110898)*1+lsi)*1]), &(inteval->stack[((hsi*3510+9438)*1+lsi)*1]), &(inteval->stack[((hsi*2808+12948)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+119322)*1+lsi)*1]), &(inteval->stack[((hsi*10530+100368)*1+lsi)*1]), &(inteval->stack[((hsi*8424+110898)*1+lsi)*1]),78);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+136170)*1+lsi)*1]), &(inteval->stack[((hsi*5148+0)*1+lsi)*1]), &(inteval->stack[((hsi*4290+5148)*1+lsi)*1]),78);
HRRPart0bra0ket0ld(inteval, &(inteval->stack[((hsi*21060+0)*1+lsi)*1]), &(inteval->stack[((hsi*12870+136170)*1+lsi)*1]), &(inteval->stack[((hsi*10530+100368)*1+lsi)*1]),78);
HRRPart0bra0ket0kf(inteval, &(inteval->stack[((hsi*28080+183132)*1+lsi)*1]), &(inteval->stack[((hsi*21060+0)*1+lsi)*1]), &(inteval->stack[((hsi*16848+119322)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*71280+29088)*1+lsi)*1]), &(inteval->stack[((hsi*28080+183132)*1+lsi)*1]), &(inteval->stack[((hsi*23760+159372)*1+lsi)*1]),360);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*71280+29088)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
