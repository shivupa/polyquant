/*
 *  Copyright (C) 2004-2020 Edward F. Valeev
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
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0fd.h>
#include <HRRPart1bra0ket0ff.h>
#include <HRRPart1bra0ket0fp.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hp.h>
#include <_aB_H__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__F__1___TwoPRep_P__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,3626)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__F__1___TwoPRep_P__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+9926)*1+lsi)*1]), &(inteval->stack[((hsi*441+2660)*1+lsi)*1]), &(inteval->stack[((hsi*315+3101)*1+lsi)*1]),21);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*630+10871)*1+lsi)*1]), &(inteval->stack[((hsi*315+3101)*1+lsi)*1]), &(inteval->stack[((hsi*210+3416)*1+lsi)*1]),21);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+11501)*1+lsi)*1]), &(inteval->stack[((hsi*945+9926)*1+lsi)*1]), &(inteval->stack[((hsi*630+10871)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+12761)*1+lsi)*1]), &(inteval->stack[((hsi*588+2072)*1+lsi)*1]), &(inteval->stack[((hsi*441+2660)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+14084)*1+lsi)*1]), &(inteval->stack[((hsi*1323+12761)*1+lsi)*1]), &(inteval->stack[((hsi*945+9926)*1+lsi)*1]),21);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+15974)*1+lsi)*1]), &(inteval->stack[((hsi*1890+14084)*1+lsi)*1]), &(inteval->stack[((hsi*1260+11501)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+9926)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]), &(inteval->stack[((hsi*420+1372)*1+lsi)*1]),28);
HRRPart1bra0ket0fp(inteval, &(inteval->stack[((hsi*840+11186)*1+lsi)*1]), &(inteval->stack[((hsi*420+1372)*1+lsi)*1]), &(inteval->stack[((hsi*280+1792)*1+lsi)*1]),28);
HRRPart1bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+12026)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9926)*1+lsi)*1]), &(inteval->stack[((hsi*840+11186)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+13706)*1+lsi)*1]), &(inteval->stack[((hsi*784+0)*1+lsi)*1]), &(inteval->stack[((hsi*588+784)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*1764+13706)*1+lsi)*1]), &(inteval->stack[((hsi*1260+9926)*1+lsi)*1]),28);
HRRPart1bra0ket0ff(inteval, &(inteval->stack[((hsi*2800+18074)*1+lsi)*1]), &(inteval->stack[((hsi*2520+0)*1+lsi)*1]), &(inteval->stack[((hsi*1680+12026)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*6300+3626)*1+lsi)*1]), &(inteval->stack[((hsi*2800+18074)*1+lsi)*1]), &(inteval->stack[((hsi*2100+15974)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*6300+3626)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
