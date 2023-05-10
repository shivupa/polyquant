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
#include <HRRPart0bra0ket0md.h>
#include <HRRPart0bra0ket0mp.h>
#include <HRRPart0bra0ket0psp.h>
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_M__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_M__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,67660)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_M__0__PS__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+285460)*1+lsi)*1]), &(inteval->stack[((hsi*6006+33450)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39456)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+300904)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39456)*1+lsi)*1]), &(inteval->stack[((hsi*4356+44604)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+313972)*1+lsi)*1]), &(inteval->stack[((hsi*15444+285460)*1+lsi)*1]), &(inteval->stack[((hsi*13068+300904)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+340108)*1+lsi)*1]), &(inteval->stack[((hsi*6930+26520)*1+lsi)*1]), &(inteval->stack[((hsi*6006+33450)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+358126)*1+lsi)*1]), &(inteval->stack[((hsi*18018+340108)*1+lsi)*1]), &(inteval->stack[((hsi*15444+285460)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+389014)*1+lsi)*1]), &(inteval->stack[((hsi*30888+358126)*1+lsi)*1]), &(inteval->stack[((hsi*26136+313972)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*12870+285460)*1+lsi)*1]), &(inteval->stack[((hsi*5005+54735)*1+lsi)*1]), &(inteval->stack[((hsi*4290+59740)*1+lsi)*1]),55);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*10890+298330)*1+lsi)*1]), &(inteval->stack[((hsi*4290+59740)*1+lsi)*1]), &(inteval->stack[((hsi*3630+64030)*1+lsi)*1]),55);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*21780+309220)*1+lsi)*1]), &(inteval->stack[((hsi*12870+285460)*1+lsi)*1]), &(inteval->stack[((hsi*10890+298330)*1+lsi)*1]),55);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*15015+331000)*1+lsi)*1]), &(inteval->stack[((hsi*5775+48960)*1+lsi)*1]), &(inteval->stack[((hsi*5005+54735)*1+lsi)*1]),55);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*25740+346015)*1+lsi)*1]), &(inteval->stack[((hsi*15015+331000)*1+lsi)*1]), &(inteval->stack[((hsi*12870+285460)*1+lsi)*1]),55);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*36300+26520)*1+lsi)*1]), &(inteval->stack[((hsi*25740+346015)*1+lsi)*1]), &(inteval->stack[((hsi*21780+309220)*1+lsi)*1]),55);
HRRPart0bra0ket0mp(inteval, &(inteval->stack[((hsi*108900+432574)*1+lsi)*1]), &(inteval->stack[((hsi*43560+389014)*1+lsi)*1]), &(inteval->stack[((hsi*36300+26520)*1+lsi)*1]),660);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+285460)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+303712)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]), &(inteval->stack[((hsi*5148+21372)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+319156)*1+lsi)*1]), &(inteval->stack[((hsi*18252+285460)*1+lsi)*1]), &(inteval->stack[((hsi*15444+303712)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+15288)*1+lsi)*1]), &(inteval->stack[((hsi*8190+0)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+350044)*1+lsi)*1]), &(inteval->stack[((hsi*21294+15288)*1+lsi)*1]), &(inteval->stack[((hsi*18252+285460)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+0)*1+lsi)*1]), &(inteval->stack[((hsi*36504+350044)*1+lsi)*1]), &(inteval->stack[((hsi*30888+319156)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*130680+541474)*1+lsi)*1]), &(inteval->stack[((hsi*51480+0)*1+lsi)*1]), &(inteval->stack[((hsi*43560+389014)*1+lsi)*1]),660);
HRRPart0bra0ket0md(inteval, &(inteval->stack[((hsi*217800+67660)*1+lsi)*1]), &(inteval->stack[((hsi*130680+541474)*1+lsi)*1]), &(inteval->stack[((hsi*108900+432574)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*217800+67660)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
