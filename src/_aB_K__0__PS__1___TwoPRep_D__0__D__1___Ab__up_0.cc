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
#include <HRRPart0bra0ket0kp.h>
#include <HRRPart0bra0ket0lp.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_K__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_K__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,31960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_K__0__PS__1___TwoPRep_D__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*8424+117496)*1+lsi)*1]), &(inteval->stack[((hsi*3510+16666)*1+lsi)*1]), &(inteval->stack[((hsi*2808+20176)*1+lsi)*1]),78);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*10530+125920)*1+lsi)*1]), &(inteval->stack[((hsi*4290+12376)*1+lsi)*1]), &(inteval->stack[((hsi*3510+16666)*1+lsi)*1]),78);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*16848+136450)*1+lsi)*1]), &(inteval->stack[((hsi*10530+125920)*1+lsi)*1]), &(inteval->stack[((hsi*8424+117496)*1+lsi)*1]),78);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*7128+117496)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26614)*1+lsi)*1]), &(inteval->stack[((hsi*2376+29584)*1+lsi)*1]),66);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*8910+124624)*1+lsi)*1]), &(inteval->stack[((hsi*3630+22984)*1+lsi)*1]), &(inteval->stack[((hsi*2970+26614)*1+lsi)*1]),66);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*14256+12376)*1+lsi)*1]), &(inteval->stack[((hsi*8910+124624)*1+lsi)*1]), &(inteval->stack[((hsi*7128+117496)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*42768+153298)*1+lsi)*1]), &(inteval->stack[((hsi*16848+136450)*1+lsi)*1]), &(inteval->stack[((hsi*14256+12376)*1+lsi)*1]),216);
HRRPart0bra0ket0kp(inteval, &(inteval->stack[((hsi*9828+12376)*1+lsi)*1]), &(inteval->stack[((hsi*4095+5005)*1+lsi)*1]), &(inteval->stack[((hsi*3276+9100)*1+lsi)*1]),91);
HRRPart0bra0ket0lp(inteval, &(inteval->stack[((hsi*12285+117496)*1+lsi)*1]), &(inteval->stack[((hsi*5005+0)*1+lsi)*1]), &(inteval->stack[((hsi*4095+5005)*1+lsi)*1]),91);
HRRPart0bra0ket0kd(inteval, &(inteval->stack[((hsi*19656+196066)*1+lsi)*1]), &(inteval->stack[((hsi*12285+117496)*1+lsi)*1]), &(inteval->stack[((hsi*9828+12376)*1+lsi)*1]),91);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*50544+215722)*1+lsi)*1]), &(inteval->stack[((hsi*19656+196066)*1+lsi)*1]), &(inteval->stack[((hsi*16848+136450)*1+lsi)*1]),216);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*85536+31960)*1+lsi)*1]), &(inteval->stack[((hsi*50544+215722)*1+lsi)*1]), &(inteval->stack[((hsi*42768+153298)*1+lsi)*1]),216);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*85536+31960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
