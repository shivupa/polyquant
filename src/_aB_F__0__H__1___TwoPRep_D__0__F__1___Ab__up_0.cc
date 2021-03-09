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
#include <HRRPart0bra0ket0fd.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hf.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0id.h>
#include <HRRPart1bra0ket0ip.h>
#include <HRRPart1bra0ket0kp.h>
#include <_aB_F__0__H__1___TwoPRep_D__0__F__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__H__1___TwoPRep_D__0__F__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,5980)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_D__0__F__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1260+18580)*1+lsi)*1]), &(inteval->stack[((hsi*540+3405)*1+lsi)*1]), &(inteval->stack[((hsi*420+3945)*1+lsi)*1]),15);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*945+19840)*1+lsi)*1]), &(inteval->stack[((hsi*420+3945)*1+lsi)*1]), &(inteval->stack[((hsi*315+4365)*1+lsi)*1]),15);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1890+20785)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18580)*1+lsi)*1]), &(inteval->stack[((hsi*945+19840)*1+lsi)*1]),15);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1620+22675)*1+lsi)*1]), &(inteval->stack[((hsi*675+2730)*1+lsi)*1]), &(inteval->stack[((hsi*540+3405)*1+lsi)*1]),15);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*2520+24295)*1+lsi)*1]), &(inteval->stack[((hsi*1620+22675)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18580)*1+lsi)*1]),15);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*3150+26815)*1+lsi)*1]), &(inteval->stack[((hsi*2520+24295)*1+lsi)*1]), &(inteval->stack[((hsi*1890+20785)*1+lsi)*1]),15);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*840+18580)*1+lsi)*1]), &(inteval->stack[((hsi*360+5130)*1+lsi)*1]), &(inteval->stack[((hsi*280+5490)*1+lsi)*1]),10);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*630+19420)*1+lsi)*1]), &(inteval->stack[((hsi*280+5490)*1+lsi)*1]), &(inteval->stack[((hsi*210+5770)*1+lsi)*1]),10);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*1260+20050)*1+lsi)*1]), &(inteval->stack[((hsi*840+18580)*1+lsi)*1]), &(inteval->stack[((hsi*630+19420)*1+lsi)*1]),10);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*1080+21310)*1+lsi)*1]), &(inteval->stack[((hsi*450+4680)*1+lsi)*1]), &(inteval->stack[((hsi*360+5130)*1+lsi)*1]),10);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*1680+22390)*1+lsi)*1]), &(inteval->stack[((hsi*1080+21310)*1+lsi)*1]), &(inteval->stack[((hsi*840+18580)*1+lsi)*1]),10);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*2100+2730)*1+lsi)*1]), &(inteval->stack[((hsi*1680+22390)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20050)*1+lsi)*1]),10);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*6300+18580)*1+lsi)*1]), &(inteval->stack[((hsi*3150+26815)*1+lsi)*1]), &(inteval->stack[((hsi*2100+2730)*1+lsi)*1]),210);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*1764+2730)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]), &(inteval->stack[((hsi*588+1701)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+24880)*1+lsi)*1]), &(inteval->stack[((hsi*588+1701)*1+lsi)*1]), &(inteval->stack[((hsi*441+2289)*1+lsi)*1]),21);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*2646+29965)*1+lsi)*1]), &(inteval->stack[((hsi*1764+2730)*1+lsi)*1]), &(inteval->stack[((hsi*1323+24880)*1+lsi)*1]),21);
HRRPart1bra0ket0kp(inteval, &(inteval->stack[((hsi*2268+32611)*1+lsi)*1]), &(inteval->stack[((hsi*945+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+945)*1+lsi)*1]),21);
HRRPart1bra0ket0id(inteval, &(inteval->stack[((hsi*3528+34879)*1+lsi)*1]), &(inteval->stack[((hsi*2268+32611)*1+lsi)*1]), &(inteval->stack[((hsi*1764+2730)*1+lsi)*1]),21);
HRRPart1bra0ket0hf(inteval, &(inteval->stack[((hsi*4410+0)*1+lsi)*1]), &(inteval->stack[((hsi*3528+34879)*1+lsi)*1]), &(inteval->stack[((hsi*2646+29965)*1+lsi)*1]),21);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*9450+29965)*1+lsi)*1]), &(inteval->stack[((hsi*4410+0)*1+lsi)*1]), &(inteval->stack[((hsi*3150+26815)*1+lsi)*1]),210);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*12600+5980)*1+lsi)*1]), &(inteval->stack[((hsi*9450+29965)*1+lsi)*1]), &(inteval->stack[((hsi*6300+18580)*1+lsi)*1]),210);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12600+5980)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
