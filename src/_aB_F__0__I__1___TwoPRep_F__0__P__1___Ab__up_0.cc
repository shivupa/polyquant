/*
 *  Copyright (C) 2004-2024 Edward F. Valeev
 *
 *  This file is part of Libint library.
 *
 *  Libint library is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Libint library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public License
 *  along with Libint library.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include <libint2.h>
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,4736)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__I__1___TwoPRep_F__0__P__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+13136)*1+lsi)*1]), &(inteval->stack[((hsi*588+3448)*1+lsi)*1]), &(inteval->stack[((hsi*420+4036)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+14396)*1+lsi)*1]), &(inteval->stack[((hsi*420+4036)*1+lsi)*1]), &(inteval->stack[((hsi*280+4456)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+15236)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13136)*1+lsi)*1]), &(inteval->stack[((hsi*840+14396)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+16916)*1+lsi)*1]), &(inteval->stack[((hsi*784+2664)*1+lsi)*1]), &(inteval->stack[((hsi*588+3448)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+18680)*1+lsi)*1]), &(inteval->stack[((hsi*1764+16916)*1+lsi)*1]), &(inteval->stack[((hsi*1260+13136)*1+lsi)*1]),28);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*2800+21200)*1+lsi)*1]), &(inteval->stack[((hsi*2520+18680)*1+lsi)*1]), &(inteval->stack[((hsi*1680+15236)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+13136)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+14756)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]), &(inteval->stack[((hsi*360+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+15836)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13136)*1+lsi)*1]), &(inteval->stack[((hsi*1080+14756)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+17996)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+0)*1+lsi)*1]), &(inteval->stack[((hsi*2268+17996)*1+lsi)*1]), &(inteval->stack[((hsi*1620+13136)*1+lsi)*1]),36);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*3600+24000)*1+lsi)*1]), &(inteval->stack[((hsi*3240+0)*1+lsi)*1]), &(inteval->stack[((hsi*2160+15836)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*8400+4736)*1+lsi)*1]), &(inteval->stack[((hsi*3600+24000)*1+lsi)*1]), &(inteval->stack[((hsi*2800+21200)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*8400+4736)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
