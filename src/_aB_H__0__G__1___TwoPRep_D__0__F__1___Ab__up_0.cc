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
#include <HRRPart0bra0ket0hd.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart0bra0ket0ip.h>
#include <HRRPart1bra0ket0gd.h>
#include <HRRPart1bra0ket0gf.h>
#include <HRRPart1bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_H__0__G__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_H__0__G__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,8500)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_H__0__G__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+27400)*1+lsi)*1]), &(inteval->stack[((hsi*784+4608)*1+lsi)*1]), &(inteval->stack[((hsi*588+5392)*1+lsi)*1]),28);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+29164)*1+lsi)*1]), &(inteval->stack[((hsi*588+5392)*1+lsi)*1]), &(inteval->stack[((hsi*420+5980)*1+lsi)*1]),28);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+30424)*1+lsi)*1]), &(inteval->stack[((hsi*1764+27400)*1+lsi)*1]), &(inteval->stack[((hsi*1260+29164)*1+lsi)*1]),28);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*2352+32944)*1+lsi)*1]), &(inteval->stack[((hsi*1008+3600)*1+lsi)*1]), &(inteval->stack[((hsi*784+4608)*1+lsi)*1]),28);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*3528+35296)*1+lsi)*1]), &(inteval->stack[((hsi*2352+32944)*1+lsi)*1]), &(inteval->stack[((hsi*1764+27400)*1+lsi)*1]),28);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*4200+38824)*1+lsi)*1]), &(inteval->stack[((hsi*3528+35296)*1+lsi)*1]), &(inteval->stack[((hsi*2520+30424)*1+lsi)*1]),28);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+27400)*1+lsi)*1]), &(inteval->stack[((hsi*588+7156)*1+lsi)*1]), &(inteval->stack[((hsi*441+7744)*1+lsi)*1]),21);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*945+28723)*1+lsi)*1]), &(inteval->stack[((hsi*441+7744)*1+lsi)*1]), &(inteval->stack[((hsi*315+8185)*1+lsi)*1]),21);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+29668)*1+lsi)*1]), &(inteval->stack[((hsi*1323+27400)*1+lsi)*1]), &(inteval->stack[((hsi*945+28723)*1+lsi)*1]),21);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+31558)*1+lsi)*1]), &(inteval->stack[((hsi*756+6400)*1+lsi)*1]), &(inteval->stack[((hsi*588+7156)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+33322)*1+lsi)*1]), &(inteval->stack[((hsi*1764+31558)*1+lsi)*1]), &(inteval->stack[((hsi*1323+27400)*1+lsi)*1]),21);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*3150+3600)*1+lsi)*1]), &(inteval->stack[((hsi*2646+33322)*1+lsi)*1]), &(inteval->stack[((hsi*1890+29668)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*9450+27400)*1+lsi)*1]), &(inteval->stack[((hsi*4200+38824)*1+lsi)*1]), &(inteval->stack[((hsi*3150+3600)*1+lsi)*1]),150);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]), &(inteval->stack[((hsi*756+2304)*1+lsi)*1]),36);
HRRPart1bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+5868)*1+lsi)*1]), &(inteval->stack[((hsi*756+2304)*1+lsi)*1]), &(inteval->stack[((hsi*540+3060)*1+lsi)*1]),36);
HRRPart1bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+43024)*1+lsi)*1]), &(inteval->stack[((hsi*2268+3600)*1+lsi)*1]), &(inteval->stack[((hsi*1620+5868)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*3024+46264)*1+lsi)*1]), &(inteval->stack[((hsi*1296+0)*1+lsi)*1]), &(inteval->stack[((hsi*1008+1296)*1+lsi)*1]),36);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*4536+49288)*1+lsi)*1]), &(inteval->stack[((hsi*3024+46264)*1+lsi)*1]), &(inteval->stack[((hsi*2268+3600)*1+lsi)*1]),36);
HRRPart1bra0ket0gf(inteval, &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4536+49288)*1+lsi)*1]), &(inteval->stack[((hsi*3240+43024)*1+lsi)*1]),36);
HRRPart0bra0ket0ip(inteval, &(inteval->stack[((hsi*12600+43024)*1+lsi)*1]), &(inteval->stack[((hsi*5400+0)*1+lsi)*1]), &(inteval->stack[((hsi*4200+38824)*1+lsi)*1]),150);
HRRPart0bra0ket0hd(inteval, &(inteval->stack[((hsi*18900+8500)*1+lsi)*1]), &(inteval->stack[((hsi*12600+43024)*1+lsi)*1]), &(inteval->stack[((hsi*9450+27400)*1+lsi)*1]),150);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*18900+8500)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
