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
#include <HRRPart0bra0ket0psp.h>
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
#include <_aB_PS__0__M__1___TwoPRep_P__0__G__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__M__1___TwoPRep_P__0__G__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,56880)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__M__1___TwoPRep_P__0__G__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+220230)*1+lsi)*1]), &(inteval->stack[((hsi*5148+43746)*1+lsi)*1]), &(inteval->stack[((hsi*4356+48894)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+233298)*1+lsi)*1]), &(inteval->stack[((hsi*6006+37740)*1+lsi)*1]), &(inteval->stack[((hsi*5148+43746)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+248742)*1+lsi)*1]), &(inteval->stack[((hsi*15444+233298)*1+lsi)*1]), &(inteval->stack[((hsi*13068+220230)*1+lsi)*1]),66);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*10890+274878)*1+lsi)*1]), &(inteval->stack[((hsi*4356+48894)*1+lsi)*1]), &(inteval->stack[((hsi*3630+53250)*1+lsi)*1]),66);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*21780+285768)*1+lsi)*1]), &(inteval->stack[((hsi*13068+220230)*1+lsi)*1]), &(inteval->stack[((hsi*10890+274878)*1+lsi)*1]),66);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*36300+307548)*1+lsi)*1]), &(inteval->stack[((hsi*26136+248742)*1+lsi)*1]), &(inteval->stack[((hsi*21780+285768)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+274878)*1+lsi)*1]), &(inteval->stack[((hsi*6930+30810)*1+lsi)*1]), &(inteval->stack[((hsi*6006+37740)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+343848)*1+lsi)*1]), &(inteval->stack[((hsi*18018+274878)*1+lsi)*1]), &(inteval->stack[((hsi*15444+233298)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+374736)*1+lsi)*1]), &(inteval->stack[((hsi*30888+343848)*1+lsi)*1]), &(inteval->stack[((hsi*26136+248742)*1+lsi)*1]),66);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*54450+220230)*1+lsi)*1]), &(inteval->stack[((hsi*43560+374736)*1+lsi)*1]), &(inteval->stack[((hsi*36300+307548)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+30810)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]), &(inteval->stack[((hsi*5148+21372)*1+lsi)*1]),78);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+274680)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+292932)*1+lsi)*1]), &(inteval->stack[((hsi*18252+274680)*1+lsi)*1]), &(inteval->stack[((hsi*15444+30810)*1+lsi)*1]),78);
HRRPart1bra0ket0mp(inteval, &(inteval->stack[((hsi*12870+323820)*1+lsi)*1]), &(inteval->stack[((hsi*5148+21372)*1+lsi)*1]), &(inteval->stack[((hsi*4290+26520)*1+lsi)*1]),78);
HRRPart1bra0ket0md(inteval, &(inteval->stack[((hsi*25740+336690)*1+lsi)*1]), &(inteval->stack[((hsi*15444+30810)*1+lsi)*1]), &(inteval->stack[((hsi*12870+323820)*1+lsi)*1]),78);
HRRPart1bra0ket0mf(inteval, &(inteval->stack[((hsi*42900+362430)*1+lsi)*1]), &(inteval->stack[((hsi*30888+292932)*1+lsi)*1]), &(inteval->stack[((hsi*25740+336690)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+15288)*1+lsi)*1]), &(inteval->stack[((hsi*8190+0)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+323820)*1+lsi)*1]), &(inteval->stack[((hsi*21294+15288)*1+lsi)*1]), &(inteval->stack[((hsi*18252+274680)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+0)*1+lsi)*1]), &(inteval->stack[((hsi*36504+323820)*1+lsi)*1]), &(inteval->stack[((hsi*30888+292932)*1+lsi)*1]),78);
HRRPart1bra0ket0mg(inteval, &(inteval->stack[((hsi*64350+274680)*1+lsi)*1]), &(inteval->stack[((hsi*51480+0)*1+lsi)*1]), &(inteval->stack[((hsi*42900+362430)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*163350+56880)*1+lsi)*1]), &(inteval->stack[((hsi*64350+274680)*1+lsi)*1]), &(inteval->stack[((hsi*54450+220230)*1+lsi)*1]),825);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*163350+56880)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
