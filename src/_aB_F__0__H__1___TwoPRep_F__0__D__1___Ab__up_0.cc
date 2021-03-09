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
#include <HRRPart0bra0ket0ff.h>
#include <HRRPart0bra0ket0fp.h>
#include <HRRPart0bra0ket0gd.h>
#include <HRRPart0bra0ket0gp.h>
#include <HRRPart0bra0ket0hp.h>
#include <HRRPart1bra0ket0hd.h>
#include <HRRPart1bra0ket0hp.h>
#include <HRRPart1bra0ket0ip.h>
#include <_aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0_prereq.h>

#ifdef __cplusplus
LIBINT_PRAGMA_CLANG(diagnostic push)
LIBINT_PRAGMA_CLANG(diagnostic ignored "-Wunused-variable")
LIBINT_PRAGMA_GCC(diagnostic push)
LIBINT_PRAGMA_GCC(diagnostic ignored "-Wunused-variable")
extern "C" {
#endif
void _aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0(const Libint_t* inteval) {

_libint2_static_api_bzero_short_(inteval->stack+0*1,6290)
const int contrdepth = inteval->contrdepth;
#ifdef __INTEL_COMPILER
#pragma ivdep
#endif
for(int c = 0; c<contrdepth; c++) {
_aB_F__0__H__1___TwoPRep_F__0__D__1___Ab__up_0_prereq(inteval+c, inteval->stack);
}

LIBINT2_REALTYPE*const  stack = inteval->stack;
{
const int hsi = 0;
{
const int lsi = 0;
{
const int vi = 0;
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1260+18890)*1+lsi)*1]), &(inteval->stack[((hsi*588+3448)*1+lsi)*1]), &(inteval->stack[((hsi*420+4036)*1+lsi)*1]),28);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*840+20150)*1+lsi)*1]), &(inteval->stack[((hsi*420+4036)*1+lsi)*1]), &(inteval->stack[((hsi*280+4456)*1+lsi)*1]),28);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1680+20990)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18890)*1+lsi)*1]), &(inteval->stack[((hsi*840+20150)*1+lsi)*1]),28);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1764+22670)*1+lsi)*1]), &(inteval->stack[((hsi*784+2664)*1+lsi)*1]), &(inteval->stack[((hsi*588+3448)*1+lsi)*1]),28);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*2520+24434)*1+lsi)*1]), &(inteval->stack[((hsi*1764+22670)*1+lsi)*1]), &(inteval->stack[((hsi*1260+18890)*1+lsi)*1]),28);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*2800+26954)*1+lsi)*1]), &(inteval->stack[((hsi*2520+24434)*1+lsi)*1]), &(inteval->stack[((hsi*1680+20990)*1+lsi)*1]),28);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*945+18890)*1+lsi)*1]), &(inteval->stack[((hsi*441+5324)*1+lsi)*1]), &(inteval->stack[((hsi*315+5765)*1+lsi)*1]),21);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*630+19835)*1+lsi)*1]), &(inteval->stack[((hsi*315+5765)*1+lsi)*1]), &(inteval->stack[((hsi*210+6080)*1+lsi)*1]),21);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*1260+20465)*1+lsi)*1]), &(inteval->stack[((hsi*945+18890)*1+lsi)*1]), &(inteval->stack[((hsi*630+19835)*1+lsi)*1]),21);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*1323+21725)*1+lsi)*1]), &(inteval->stack[((hsi*588+4736)*1+lsi)*1]), &(inteval->stack[((hsi*441+5324)*1+lsi)*1]),21);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*1890+23048)*1+lsi)*1]), &(inteval->stack[((hsi*1323+21725)*1+lsi)*1]), &(inteval->stack[((hsi*945+18890)*1+lsi)*1]),21);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*2100+2664)*1+lsi)*1]), &(inteval->stack[((hsi*1890+23048)*1+lsi)*1]), &(inteval->stack[((hsi*1260+20465)*1+lsi)*1]),21);
HRRPart1bra0ket0hp(inteval, &(inteval->stack[((hsi*6300+18890)*1+lsi)*1]), &(inteval->stack[((hsi*2800+26954)*1+lsi)*1]), &(inteval->stack[((hsi*2100+2664)*1+lsi)*1]),100);
HRRPart0bra0ket0gp(inteval, &(inteval->stack[((hsi*1620+2664)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]),36);
HRRPart0bra0ket0fp(inteval, &(inteval->stack[((hsi*1080+4284)*1+lsi)*1]), &(inteval->stack[((hsi*540+1764)*1+lsi)*1]), &(inteval->stack[((hsi*360+2304)*1+lsi)*1]),36);
HRRPart0bra0ket0fd(inteval, &(inteval->stack[((hsi*2160+29754)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2664)*1+lsi)*1]), &(inteval->stack[((hsi*1080+4284)*1+lsi)*1]),36);
HRRPart0bra0ket0hp(inteval, &(inteval->stack[((hsi*2268+31914)*1+lsi)*1]), &(inteval->stack[((hsi*1008+0)*1+lsi)*1]), &(inteval->stack[((hsi*756+1008)*1+lsi)*1]),36);
HRRPart0bra0ket0gd(inteval, &(inteval->stack[((hsi*3240+34182)*1+lsi)*1]), &(inteval->stack[((hsi*2268+31914)*1+lsi)*1]), &(inteval->stack[((hsi*1620+2664)*1+lsi)*1]),36);
HRRPart0bra0ket0ff(inteval, &(inteval->stack[((hsi*3600+0)*1+lsi)*1]), &(inteval->stack[((hsi*3240+34182)*1+lsi)*1]), &(inteval->stack[((hsi*2160+29754)*1+lsi)*1]),36);
HRRPart1bra0ket0ip(inteval, &(inteval->stack[((hsi*8400+29754)*1+lsi)*1]), &(inteval->stack[((hsi*3600+0)*1+lsi)*1]), &(inteval->stack[((hsi*2800+26954)*1+lsi)*1]),100);
HRRPart1bra0ket0hd(inteval, &(inteval->stack[((hsi*12600+6290)*1+lsi)*1]), &(inteval->stack[((hsi*8400+29754)*1+lsi)*1]), &(inteval->stack[((hsi*6300+18890)*1+lsi)*1]),100);
}
}
}
const int hsi = 0;
const int lsi = 0;
const int vi = 0;
inteval->targets[0] = &(inteval->stack[((hsi*12600+6290)*1+lsi)*1]);
/** Number of flops = 0 */
}

#ifdef __cplusplus
};
LIBINT_PRAGMA_CLANG(diagnostic pop)
LIBINT_PRAGMA_GCC(diagnostic pop)
#endif
