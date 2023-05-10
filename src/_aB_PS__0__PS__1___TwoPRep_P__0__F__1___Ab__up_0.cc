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
#include <HRRPart1bra0ket0pdp.h>
#include <HRRPart1bra0ket0ppd.h>
#include <HRRPart1bra0ket0ppp.h>
#include <HRRPart1bra0ket0psd.h>
#include <HRRPart1bra0ket0psf.h>
#include <HRRPart1bra0ket0psp.h>
#include <_aB_PS__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_PS__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,48960)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_PS__0__PS__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*15444+179640)*1+lsi)*1]), &(inteval->stack[((hsi*6006+33450)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39456)*1+lsi)*1]),66);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*13068+195084)*1+lsi)*1]), &(inteval->stack[((hsi*5148+39456)*1+lsi)*1]), &(inteval->stack[((hsi*4356+44604)*1+lsi)*1]),66);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*26136+208152)*1+lsi)*1]), &(inteval->stack[((hsi*15444+179640)*1+lsi)*1]), &(inteval->stack[((hsi*13068+195084)*1+lsi)*1]),66);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*18018+234288)*1+lsi)*1]), &(inteval->stack[((hsi*6930+26520)*1+lsi)*1]), &(inteval->stack[((hsi*6006+33450)*1+lsi)*1]),66);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*30888+252306)*1+lsi)*1]), &(inteval->stack[((hsi*18018+234288)*1+lsi)*1]), &(inteval->stack[((hsi*15444+179640)*1+lsi)*1]),66);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*43560+283194)*1+lsi)*1]), &(inteval->stack[((hsi*30888+252306)*1+lsi)*1]), &(inteval->stack[((hsi*26136+208152)*1+lsi)*1]),66);
HRRPart1bra0ket0ppp(inteval, &(inteval->stack[((hsi*18252+179640)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]),78);
HRRPart1bra0ket0psp(inteval, &(inteval->stack[((hsi*15444+197892)*1+lsi)*1]), &(inteval->stack[((hsi*6084+15288)*1+lsi)*1]), &(inteval->stack[((hsi*5148+21372)*1+lsi)*1]),78);
HRRPart1bra0ket0psd(inteval, &(inteval->stack[((hsi*30888+213336)*1+lsi)*1]), &(inteval->stack[((hsi*18252+179640)*1+lsi)*1]), &(inteval->stack[((hsi*15444+197892)*1+lsi)*1]),78);
HRRPart1bra0ket0pdp(inteval, &(inteval->stack[((hsi*21294+244224)*1+lsi)*1]), &(inteval->stack[((hsi*8190+0)*1+lsi)*1]), &(inteval->stack[((hsi*7098+8190)*1+lsi)*1]),78);
HRRPart1bra0ket0ppd(inteval, &(inteval->stack[((hsi*36504+0)*1+lsi)*1]), &(inteval->stack[((hsi*21294+244224)*1+lsi)*1]), &(inteval->stack[((hsi*18252+179640)*1+lsi)*1]),78);
HRRPart1bra0ket0psf(inteval, &(inteval->stack[((hsi*51480+326754)*1+lsi)*1]), &(inteval->stack[((hsi*36504+0)*1+lsi)*1]), &(inteval->stack[((hsi*30888+213336)*1+lsi)*1]),78);
HRRPart0bra0ket0psp(inteval, &(inteval->stack[((hsi*130680+48960)*1+lsi)*1]), &(inteval->stack[((hsi*51480+326754)*1+lsi)*1]), &(inteval->stack[((hsi*43560+283194)*1+lsi)*1]),660);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*130680+48960)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
