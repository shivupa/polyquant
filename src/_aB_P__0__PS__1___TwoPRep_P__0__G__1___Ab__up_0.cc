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
#include <HRRPart0bra0ket0pp.h>
#include <HRRPart1bra0ket0pdd.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0pfp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppf.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psg.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_P__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_P__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4140)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_P__0__PS__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*702+13050)*1+lsi)*1]), &(inteval->stack[((hsi*273+3435)*1+lsi)*1]), &(inteval->stack[((hsi*234+3708)*1+lsi)*1]),3);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*819+13752)*1+lsi)*1]), &(inteval->stack[((hsi*315+3120)*1+lsi)*1]), &(inteval->stack[((hsi*273+3435)*1+lsi)*1]),3);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*1404+14571)*1+lsi)*1]), &(inteval->stack[((hsi*819+13752)*1+lsi)*1]), &(inteval->stack[((hsi*702+13050)*1+lsi)*1]),3);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*594+15975)*1+lsi)*1]), &(inteval->stack[((hsi*234+3708)*1+lsi)*1]), &(inteval->stack[((hsi*198+3942)*1+lsi)*1]),3);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*1188+16569)*1+lsi)*1]), &(inteval->stack[((hsi*702+13050)*1+lsi)*1]), &(inteval->stack[((hsi*594+15975)*1+lsi)*1]),3);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*1980+17757)*1+lsi)*1]), &(inteval->stack[((hsi*1404+14571)*1+lsi)*1]), &(inteval->stack[((hsi*1188+16569)*1+lsi)*1]),3);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*945+15975)*1+lsi)*1]), &(inteval->stack[((hsi*360+2760)*1+lsi)*1]), &(inteval->stack[((hsi*315+3120)*1+lsi)*1]),3);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*1638+19737)*1+lsi)*1]), &(inteval->stack[((hsi*945+15975)*1+lsi)*1]), &(inteval->stack[((hsi*819+13752)*1+lsi)*1]),3);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*2340+21375)*1+lsi)*1]), &(inteval->stack[((hsi*1638+19737)*1+lsi)*1]), &(inteval->stack[((hsi*1404+14571)*1+lsi)*1]),3);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*2970+13050)*1+lsi)*1]), &(inteval->stack[((hsi*2340+21375)*1+lsi)*1]), &(inteval->stack[((hsi*1980+17757)*1+lsi)*1]),3);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*1404+16020)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]),6);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*1638+17424)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]), &(inteval->stack[((hsi*546+1350)*1+lsi)*1]),6);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*2808+19062)*1+lsi)*1]), &(inteval->stack[((hsi*1638+17424)*1+lsi)*1]), &(inteval->stack[((hsi*1404+16020)*1+lsi)*1]),6);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*1188+2760)*1+lsi)*1]), &(inteval->stack[((hsi*468+1896)*1+lsi)*1]), &(inteval->stack[((hsi*396+2364)*1+lsi)*1]),6);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*2376+21870)*1+lsi)*1]), &(inteval->stack[((hsi*1404+16020)*1+lsi)*1]), &(inteval->stack[((hsi*1188+2760)*1+lsi)*1]),6);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*3960+24246)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19062)*1+lsi)*1]), &(inteval->stack[((hsi*2376+21870)*1+lsi)*1]),6);
HRRPart1bra0ket0pfp(inteval, &(inteval->stack[((hsi*1890+1350)*1+lsi)*1]), &(inteval->stack[((hsi*720+0)*1+lsi)*1]), &(inteval->stack[((hsi*630+720)*1+lsi)*1]),6);
HRRPart1bra0ket0pdd(inteval, &(inteval->stack[((hsi*3276+28206)*1+lsi)*1]), &(inteval->stack[((hsi*1890+1350)*1+lsi)*1]), &(inteval->stack[((hsi*1638+17424)*1+lsi)*1]),6);
HRRPart1bra0ket0ppf(inteval, &(inteval->stack[((hsi*4680+31482)*1+lsi)*1]), &(inteval->stack[((hsi*3276+28206)*1+lsi)*1]), &(inteval->stack[((hsi*2808+19062)*1+lsi)*1]),6);
HRRPart1bra0ket0psg(inteval, &(inteval->stack[((hsi*5940+16020)*1+lsi)*1]), &(inteval->stack[((hsi*4680+31482)*1+lsi)*1]), &(inteval->stack[((hsi*3960+24246)*1+lsi)*1]),6);
HRRPart0bra0ket0pp(inteval, &(inteval->stack[((hsi*8910+4140)*1+lsi)*1]), &(inteval->stack[((hsi*5940+16020)*1+lsi)*1]), &(inteval->stack[((hsi*2970+13050)*1+lsi)*1]),990);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8910+4140)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
